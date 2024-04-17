use std::io::Write;

use anyhow::{anyhow, Result};
use tree_sitter::{InputEdit, Language, LogType, Parser, Point, Tree};

extern "C" {
    fn tree_sitter_php() -> Language;
}

pub fn language() -> Language {
    unsafe { tree_sitter_php() }
}

#[derive(Debug)]
pub struct Edit {
    pub position: usize,
    pub deleted_length: usize,
    pub inserted_text: Vec<u8>,
}

pub fn perform_edit(tree: &mut Tree, input: &mut Vec<u8>, edit: &Edit) -> Result<InputEdit> {
    let start_byte = edit.position;
    let old_end_byte = edit.position + edit.deleted_length;
    let new_end_byte = edit.position + edit.inserted_text.len();
    let start_position = position_for_offset(input, start_byte)?;
    let old_end_position = position_for_offset(input, old_end_byte)?;
    input.splice(start_byte..old_end_byte, edit.inserted_text.iter().copied());
    let new_end_position = position_for_offset(input, new_end_byte)?;
    let edit = InputEdit {
        start_byte,
        old_end_byte,
        new_end_byte,
        start_position,
        old_end_position,
        new_end_position,
    };
    tree.edit(&edit);
    Ok(edit)
}

pub fn invert_edit(input: &[u8], edit: &Edit) -> Edit {
    let position = edit.position;
    let removed_content = &input[position..(position + edit.deleted_length)];
    Edit {
        position,
        deleted_length: edit.inserted_text.len(),
        inserted_text: removed_content.to_vec(),
    }
}

pub fn offset_for_position(input: &[u8], position: Point) -> Result<usize> {
    let mut row = 0;
    let mut offset = 0;
    let mut iter = memchr::memchr_iter(b'\n', input);
    loop {
        if let Some(pos) = iter.next() {
            if row < position.row {
                row += 1;
                offset = pos;
                continue;
            }
        }
        offset += 1;
        break;
    }
    if position.row - row > 0 {
        return Err(anyhow!("Failed to address a row: {}", position.row));
    }
    if let Some(pos) = iter.next() {
        if (pos - offset < position.column) || (input[offset] == b'\n' && position.column > 0) {
            return Err(anyhow!("Failed to address a column: {}", position.column));
        };
    } else if input.len() - offset < position.column {
        return Err(anyhow!("Failed to address a column over the end"));
    }
    Ok(offset + position.column)
}

pub fn position_for_offset(input: &[u8], offset: usize) -> Result<Point> {
    if offset > input.len() {
        return Err(anyhow!("Failed to address an offset: {offset}"));
    }
    let mut result = Point { row: 0, column: 0 };
    let mut last = 0;
    for pos in memchr::memchr_iter(b'\n', &input[..offset]) {
        result.row += 1;
        last = pos;
    }
    result.column = if result.row > 0 {
        offset - last - 1
    } else {
        offset
    };
    Ok(result)
}

fn main() {
    let mut parser = Parser::new();
    parser
        .set_language(&language())
        .expect("Error loading PHP grammar");
    parser.set_logger(Some(Box::new(|log_type, message| {
        if log_type == LogType::Lex {
            std::io::stderr().write_all(b"  ").unwrap();
        }
        writeln!(&mut std::io::stderr(), "{message}").unwrap();
    })));

    let mut source_code = r#"
<?php
$读写;

<<<漢漢字
  Heredoc detected.
漢漢字;

<<<'中文'
  Nowdoc detected..
中文;
"#
    .as_bytes()
    .to_vec();

    let mut tree = parser.parse(&source_code, None).unwrap();
    let original_tree = tree.clone();

    println!("{}", std::str::from_utf8(&source_code).unwrap());
    println!("{:#}", tree.root_node());
    println!();

    let edits = [
        Edit {
            position: 102,
            deleted_length: 0,
            inserted_text: vec![],
        },
        Edit {
            position: 102,
            deleted_length: 0,
            inserted_text: vec![],
        },
        Edit {
            position: 71,
            deleted_length: 18,
            inserted_text: vec![46],
        },
    ];

    let mut undo_stack = Vec::new();

    for edit in &edits {
        let inverted_edit = invert_edit(&source_code, edit);
        undo_stack.push(inverted_edit);
    }

    for edit in &edits {
        perform_edit(&mut tree, &mut source_code, edit).unwrap();
        println!("edit={:?}", edit);
    }

    print!("{}", "\n".repeat(10));

    let tree2 = parser.parse(&source_code, Some(&tree)).unwrap();
    println!("\n{}", String::from_utf8_lossy(&source_code));
    println!("TREE2\n{:#}", tree2.root_node());

    for edit in undo_stack.iter().rev() {
        perform_edit(&mut tree, &mut source_code, edit).unwrap();
        println!("edit={:?}", edit);
    }

    print!("{}", "\n".repeat(10));

    let tree3 = parser.parse(&source_code, Some(&tree2)).unwrap();
    println!("\n{}", String::from_utf8_lossy(&source_code));
    println!("TREE3\n{:#}", tree3.root_node());

    let node = tree3.root_node();

    let last_child = node.child(node.child_count() - 1).unwrap();

    let mut visited_children = false;
    let mut cursor = tree3.walk();
    cursor.reset(last_child);
    loop {
        if !visited_children {
            println!(
                "node={}, text={}\n",
                cursor.node().kind(),
                cursor.node().utf8_text(&source_code).unwrap()
            );
            if !cursor.goto_first_child() {
                visited_children = true;
            }
        } else if cursor.goto_next_sibling() {
            visited_children = false;
        } else if !cursor.goto_parent() {
            break;
        }
    }

    assert_eq!(
        tree3.root_node().to_sexp(),
        original_tree.root_node().to_sexp(),
    );
}
