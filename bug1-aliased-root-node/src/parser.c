#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_POUND = 1,
  aux_sym__atx_heading1_token1 = 2,
  anon_sym_POUND_POUND = 3,
  aux_sym__line_token1 = 4,
  aux_sym__line_token2 = 5,
  sym_document = 6,
  sym_section = 7,
  sym__section1 = 8,
  sym__section2 = 9,
  sym__atx_heading1 = 10,
  sym__atx_heading2 = 11,
  sym_paragraph = 12,
  sym__line = 13,
  aux_sym_document_repeat1 = 14,
  aux_sym__section1_repeat1 = 15,
  aux_sym__section2_repeat1 = 16,
  aux_sym_paragraph_repeat1 = 17,
  aux_sym__line_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym__atx_heading1_token1] = "_atx_heading1_token1",
  [anon_sym_POUND_POUND] = "##",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym__section1] = "_section1",
  [sym__section2] = "_section2",
  [sym__atx_heading1] = "atx_heading",
  [sym__atx_heading2] = "atx_heading",
  [sym_paragraph] = "paragraph",
  [sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__section1_repeat1] = "_section1_repeat1",
  [aux_sym__section2_repeat1] = "_section2_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym__line_repeat1] = "_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__atx_heading1_token1] = aux_sym__atx_heading1_token1,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [aux_sym__line_token2] = aux_sym__line_token2,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym__section1] = sym__section1,
  [sym__section2] = sym__section2,
  [sym__atx_heading1] = sym__atx_heading1,
  [sym__atx_heading2] = sym__atx_heading1,
  [sym_paragraph] = sym_paragraph,
  [sym__line] = sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__section1_repeat1] = aux_sym__section1_repeat1,
  [aux_sym__section2_repeat1] = aux_sym__section2_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__atx_heading1_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section1] = {
    .visible = false,
    .named = true,
  },
  [sym__section2] = {
    .visible = false,
    .named = true,
  },
  [sym__atx_heading1] = {
    .visible = true,
    .named = true,
  },
  [sym__atx_heading2] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__section1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__section2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_section,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__section2, 2,
    sym__section2,
    sym_section,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead != 0 &&
          (lookahead < '!' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '!' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__atx_heading1_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__atx_heading1_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__line_token2);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__line_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym__line_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(25),
    [sym_section] = STATE(6),
    [sym__section1] = STATE(19),
    [sym__section2] = STATE(19),
    [sym__atx_heading1] = STATE(7),
    [sym__atx_heading2] = STATE(2),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_POUND_POUND] = ACTIONS(7),
  },
  [2] = {
    [sym_paragraph] = STATE(4),
    [sym__line] = STATE(9),
    [aux_sym__section2_repeat1] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym__line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_POUND_POUND] = ACTIONS(11),
    [aux_sym__line_token1] = ACTIONS(13),
    [aux_sym__line_token2] = ACTIONS(15),
  },
  [3] = {
    [sym_paragraph] = STATE(3),
    [sym__line] = STATE(9),
    [aux_sym__section2_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym__line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(19),
    [aux_sym__line_token1] = ACTIONS(21),
    [aux_sym__line_token2] = ACTIONS(24),
  },
  [4] = {
    [sym_paragraph] = STATE(3),
    [sym__line] = STATE(9),
    [aux_sym__section2_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [aux_sym__line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_POUND_POUND] = ACTIONS(29),
    [aux_sym__line_token1] = ACTIONS(13),
    [aux_sym__line_token2] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      anon_sym_POUND_POUND,
    STATE(2), 1,
      sym__atx_heading2,
    STATE(7), 1,
      sym__atx_heading1,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(19), 2,
      sym__section1,
      sym__section2,
  [24] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_POUND_POUND,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym__atx_heading2,
    STATE(7), 1,
      sym__atx_heading1,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(19), 2,
      sym__section1,
      sym__section2,
  [48] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND_POUND,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym__atx_heading2,
    STATE(8), 1,
      aux_sym__section1_repeat1,
    STATE(21), 1,
      sym__section2,
  [67] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym__atx_heading2,
    STATE(10), 1,
      aux_sym__section1_repeat1,
    STATE(21), 1,
      sym__section2,
  [86] = 4,
    ACTIONS(49), 1,
      aux_sym__atx_heading1_token1,
    STATE(17), 1,
      aux_sym__line_repeat1,
    ACTIONS(13), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
    STATE(11), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
  [101] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_POUND_POUND,
    STATE(2), 1,
      sym__atx_heading2,
    STATE(10), 1,
      aux_sym__section1_repeat1,
    STATE(21), 1,
      sym__section2,
  [120] = 4,
    ACTIONS(58), 1,
      aux_sym__atx_heading1_token1,
    STATE(17), 1,
      aux_sym__line_repeat1,
    ACTIONS(60), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
    STATE(11), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
  [135] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym__line_token2,
    ACTIONS(65), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      aux_sym__line_token1,
  [145] = 4,
    ACTIONS(67), 1,
      aux_sym__atx_heading1_token1,
    STATE(17), 1,
      aux_sym__line_repeat1,
    STATE(23), 1,
      sym__line,
    ACTIONS(13), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [159] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym__line_token2,
    ACTIONS(71), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      aux_sym__line_token1,
  [169] = 4,
    ACTIONS(73), 1,
      aux_sym__atx_heading1_token1,
    STATE(17), 1,
      aux_sym__line_repeat1,
    STATE(24), 1,
      sym__line,
    ACTIONS(13), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [183] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym__line_token2,
    ACTIONS(77), 3,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      aux_sym__line_token1,
  [193] = 3,
    ACTIONS(79), 1,
      aux_sym__atx_heading1_token1,
    STATE(18), 1,
      aux_sym__line_repeat1,
    ACTIONS(81), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [204] = 3,
    ACTIONS(83), 1,
      aux_sym__atx_heading1_token1,
    STATE(18), 1,
      aux_sym__line_repeat1,
    ACTIONS(85), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [215] = 2,
    ACTIONS(90), 1,
      anon_sym_POUND,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND,
  [223] = 2,
    ACTIONS(94), 1,
      anon_sym_POUND,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND,
  [231] = 2,
    ACTIONS(98), 1,
      anon_sym_POUND,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND,
  [239] = 2,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND,
  [247] = 1,
    ACTIONS(104), 1,
      aux_sym__atx_heading1_token1,
  [251] = 1,
    ACTIONS(106), 1,
      aux_sym__atx_heading1_token1,
  [255] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 67,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 145,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 204,
  [SMALL_STATE(19)] = 215,
  [SMALL_STATE(20)] = 223,
  [SMALL_STATE(21)] = 231,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 247,
  [SMALL_STATE(24)] = 251,
  [SMALL_STATE(25)] = 255,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section2, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section2, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section2_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section2_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section2_repeat1, 2), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section2_repeat1, 2), SHIFT_REPEAT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section2, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section2, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section1, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section1, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section1, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section1_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section1_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section1_repeat1, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atx_heading2, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atx_heading2, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atx_heading2, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atx_heading2, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atx_heading1, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atx_heading1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section1_repeat1, 1, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section1_repeat1, 1, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atx_heading1, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atx_heading1, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bug(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
