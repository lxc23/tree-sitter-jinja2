#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE_PERCENT = 1,
  aux_sym_statement_token1 = 2,
  anon_sym_LBRACE_LBRACE = 3,
  aux_sym_expression_token1 = 4,
  anon_sym_LBRACE_POUND = 5,
  aux_sym_comment_token1 = 6,
  sym__text = 7,
  sym_template = 8,
  sym_statement = 9,
  sym_expression = 10,
  sym_comment = 11,
  aux_sym_template_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_statement_token1] = "statement_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_expression_token1] = "expression_token1",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__text] = "_text",
  [sym_template] = "template",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [aux_sym_template_repeat1] = "template_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__text] = sym__text,
  [sym_template] = sym_template,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '{') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(13);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__text);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '{') ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(10),
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(15),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(22),
    [anon_sym_LBRACE_POUND] = ACTIONS(25),
    [sym__text] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
      sym__text,
  [10] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
      sym__text,
  [20] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
      sym__text,
  [30] = 1,
    ACTIONS(43), 1,
      aux_sym_statement_token1,
  [34] = 1,
    ACTIONS(45), 1,
      aux_sym_expression_token1,
  [38] = 1,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
  [42] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 38,
  [SMALL_STATE(10)] = 42,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jinja2(void) {
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
