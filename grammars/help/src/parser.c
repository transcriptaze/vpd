#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_origin = 3,
  anon_sym_module = 4,
  anon_sym_guide = 5,
  anon_sym_label = 6,
  sym_source_file = 7,
  sym__command = 8,
  sym_new = 9,
  sym_set = 10,
  sym_entity = 11,
  sym_attribute = 12,
  sym_module = 13,
  sym_guide = 14,
  sym_label = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_origin] = "origin",
  [anon_sym_module] = "module",
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_entity] = "entity",
  [sym_attribute] = "attribute",
  [sym_module] = "module",
  [sym_guide] = "guide",
  [sym_label] = "label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_entity] = sym_entity,
  [sym_attribute] = sym_attribute,
  [sym_module] = sym_module,
  [sym_guide] = sym_guide,
  [sym_label] = sym_label,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_new] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_guide] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_label);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__command] = STATE(3),
    [sym_new] = STATE(3),
    [sym_set] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
  },
  [2] = {
    [sym_entity] = STATE(9),
    [sym_module] = STATE(10),
    [sym_guide] = STATE(10),
    [sym_label] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_guide] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_new,
    ACTIONS(24), 1,
      anon_sym_set,
    STATE(4), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [32] = 3,
    ACTIONS(29), 1,
      anon_sym_origin,
    STATE(12), 1,
      sym_attribute,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [44] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [50] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [56] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [62] = 1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [68] = 1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [74] = 1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [80] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [86] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 16,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 74,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 86,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [45] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_help(void) {
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
