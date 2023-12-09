#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_set = 1,
  anon_sym_move = 2,
  anon_sym_delete = 3,
  anon_sym_new = 4,
  anon_sym_param = 5,
  anon_sym_input = 6,
  anon_sym_output = 7,
  anon_sym_module = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_name_token1 = 10,
  sym_height = 11,
  sym_width = 12,
  anon_sym_label = 13,
  sym_text = 14,
  sym_source_file = 15,
  sym__command = 16,
  sym_new = 17,
  sym_entity = 18,
  sym_module = 19,
  sym_name = 20,
  sym_label = 21,
  aux_sym_source_file_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "set",
  [anon_sym_move] = "move",
  [anon_sym_delete] = "delete",
  [anon_sym_new] = "new",
  [anon_sym_param] = "param",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_module] = "module",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_name_token1] = "value",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_new] = "new",
  [sym_entity] = "entity",
  [sym_module] = "module",
  [sym_name] = "name",
  [sym_label] = "label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_entity] = sym_entity,
  [sym_module] = sym_module,
  [sym_name] = sym_name,
  [sym_label] = sym_label,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_name_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
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
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'H') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__command] = STATE(3),
    [sym_new] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_move] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_label,
    STATE(6), 1,
      sym_entity,
    STATE(5), 2,
      sym_module,
      sym_label,
    ACTIONS(9), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
  [19] = 4,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 3,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
    STATE(4), 3,
      sym__command,
      sym_new,
      aux_sym_source_file_repeat1,
  [36] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_new,
    ACTIONS(21), 3,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
    STATE(4), 3,
      sym__command,
      sym_new,
      aux_sym_source_file_repeat1,
  [53] = 1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [61] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [69] = 1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [77] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_set,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
  [85] = 2,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_name,
  [92] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [96] = 1,
    ACTIONS(39), 1,
      sym_text,
  [100] = 1,
    ACTIONS(41), 1,
      aux_sym_name_token1,
  [104] = 1,
    ACTIONS(43), 1,
      sym_height,
  [108] = 1,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
  [112] = 1,
    ACTIONS(47), 1,
      sym_width,
  [116] = 1,
    ACTIONS(49), 1,
      sym_height,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 77,
  [SMALL_STATE(9)] = 85,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 108,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vpd(void) {
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
