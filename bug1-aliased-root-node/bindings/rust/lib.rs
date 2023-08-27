//! This crate provides bug language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = "";
//! let mut parser = tree_sitter::Parser::new();
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_bug() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_bug() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

// Uncomment these to include any queries that this grammar contains

// pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &'static str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &'static str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &'static str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(super::language())
            .expect("Error loading bug language");

        use tree_sitter::{Parser, Query, QueryCapture, QueryCursor, QueryMatch};

        pub static CODE: &str = include_str!("../../a.md");

        pub fn collect_matches<'a>(
            matches: impl Iterator<Item = QueryMatch<'a, 'a>>,
            query: &'a Query,
            source: &'a str,
        ) -> Vec<(usize, Vec<(&'a str, &'a str)>)> {
            matches
                .map(|m| {
                    (
                        m.pattern_index,
                        format_captures(m.captures.iter().cloned(), query, source),
                    )
                })
                .collect()
        }

        fn format_captures<'a>(
            captures: impl Iterator<Item = QueryCapture<'a>>,
            query: &'a Query,
            source: &'a str,
        ) -> Vec<(&'a str, &'a str)> {
            captures
                .map(|capture| {
                    (
                        query.capture_names()[capture.index as usize].as_str(),
                        capture.node.utf8_text(source.as_bytes()).unwrap(),
                    )
                })
                .collect()
        }

        let tree = parser.parse(CODE, None).unwrap();

        let node = tree.root_node().child(0).unwrap().child(1).unwrap(); // .child(2).unwrap();

        println!(
            "node: {}\n{}",
            node.utf8_text(CODE.as_bytes()).unwrap(),
            node.to_sexp()
        );
        println!("root node: {}", tree.root_node().to_sexp());

        let query = Query::new(super::language(), "(section) @context").unwrap();

        let mut cursor = QueryCursor::new();
        let matches = cursor
            // .set_byte_range(node.start_byte() - 1..node.end_byte())
            .matches(&query, node, CODE.as_bytes());

        let matches = collect_matches(matches, &query, CODE);

        println!("matches: {:?}", matches);
    }
}
