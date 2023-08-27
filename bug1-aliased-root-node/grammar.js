module.exports = grammar({
  name: 'bug',

  rules: {
    document: $ => repeat($.section),

    section: $ => choice($._section1, $._section2),
    _section1: $ => prec.right(seq(
      alias($._atx_heading1, $.atx_heading),
      repeat(alias($._section2, $.section))
    )),
    _section2: $ => prec.right(seq(
      alias($._atx_heading2, $.atx_heading),
      repeat($.paragraph)
    )),

    _atx_heading1: $ => seq(
      '#',
      optional($._line),
      /\r?\n/
    ),
    _atx_heading2: $ => seq(
      '##',
      optional($._line),
      /\r?\n/
    ),

    paragraph: $ => seq(repeat1($._line), /\r?\n/),

    _line: _ => prec.right(repeat1(choice(
      /[^\!-/:-@\\\[-`\\{-~ \t\n\r]+/,
      /[ \t]+/
    ))),
  },
});
