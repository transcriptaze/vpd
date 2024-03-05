#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_decorate = 1,
  anon_sym_set = 2,
  anon_sym_delete = 3,
  anon_sym_load = 4,
  anon_sym_unload = 5,
  anon_sym_save = 6,
  anon_sym_export = 7,
  anon_sym_list = 8,
  anon_sym_help = 9,
  anon_sym_new = 10,
  anon_sym_input = 11,
  anon_sym_output = 12,
  anon_sym_parameter = 13,
  anon_sym_light = 14,
  anon_sym_widget = 15,
  anon_sym_label = 16,
  anon_sym_decoration = 17,
  anon_sym_guide = 18,
  anon_sym_module = 19,
  anon_sym_1U = 20,
  sym_name = 21,
  sym_command = 22,
  sym_new = 23,
  sym__new_module = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_decorate] = "decorate",
  [anon_sym_set] = "set",
  [anon_sym_delete] = "delete",
  [anon_sym_load] = "load",
  [anon_sym_unload] = "unload",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_list] = "list",
  [anon_sym_help] = "help",
  [anon_sym_new] = "new",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_label] = "label",
  [anon_sym_decoration] = "decoration",
  [anon_sym_guide] = "guide",
  [anon_sym_module] = "module",
  [anon_sym_1U] = "height",
  [sym_name] = "name",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym__new_module] = "module",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_unload] = anon_sym_unload,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_help] = anon_sym_help,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_1U] = anon_sym_1U,
  [sym_name] = sym_name,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym__new_module] = sym__new_module,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unload] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_help] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_widget] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_decoration] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1U] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_new] = {
    .visible = true,
    .named = true,
  },
  [sym__new_module] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(100);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 76:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 77:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_1U);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_unload] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_help] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_1U] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(6),
    [sym_new] = STATE(5),
    [anon_sym_decorate] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(3),
    [anon_sym_delete] = ACTIONS(3),
    [anon_sym_load] = ACTIONS(3),
    [anon_sym_unload] = ACTIONS(3),
    [anon_sym_save] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(3),
    [anon_sym_list] = ACTIONS(3),
    [anon_sym_help] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_module,
    STATE(7), 1,
      sym__new_module,
    ACTIONS(9), 8,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
      anon_sym_label,
      anon_sym_decoration,
      anon_sym_guide,
  [20] = 2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_name,
  [27] = 2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_1U,
  [34] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [38] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [42] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [46] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 27,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 46,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [23] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hint(void) {
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
