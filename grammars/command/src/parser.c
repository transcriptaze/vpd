#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_move = 1,
  anon_sym_delete = 2,
  anon_sym_new = 3,
  anon_sym_set = 4,
  anon_sym_param = 5,
  anon_sym_input = 6,
  anon_sym_output = 7,
  anon_sym_module = 8,
  anon_sym_origin = 9,
  aux_sym_origin_token1 = 10,
  anon_sym_COMMA = 11,
  aux_sym_origin_token2 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_name_token1 = 14,
  sym_height = 15,
  sym_width = 16,
  anon_sym_label = 17,
  anon_sym_guide = 18,
  anon_sym_vertical = 19,
  anon_sym_horizontal = 20,
  sym_identifier = 21,
  sym_text = 22,
  sym_offset = 23,
  sym_source_file = 24,
  sym__command = 25,
  sym_new = 26,
  sym_set = 27,
  sym_entity = 28,
  sym_attr = 29,
  sym_module = 30,
  sym_origin = 31,
  sym_name = 32,
  sym_label = 33,
  sym_guide = 34,
  aux_sym_source_file_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_move] = "move",
  [anon_sym_delete] = "delete",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_param] = "param",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_module] = "module",
  [anon_sym_origin] = "origin",
  [aux_sym_origin_token1] = "y",
  [anon_sym_COMMA] = ",",
  [aux_sym_origin_token2] = "x",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_name_token1] = "value",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [anon_sym_guide] = "guide",
  [anon_sym_vertical] = "orientation",
  [anon_sym_horizontal] = "orientation",
  [sym_identifier] = "identifier",
  [sym_text] = "text",
  [sym_offset] = "offset",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_entity] = "entity",
  [sym_attr] = "attr",
  [sym_module] = "module",
  [sym_origin] = "origin",
  [sym_name] = "name",
  [sym_label] = "label",
  [sym_guide] = "guide",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_origin] = anon_sym_origin,
  [aux_sym_origin_token1] = aux_sym_origin_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_origin_token2] = aux_sym_origin_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_vertical,
  [sym_identifier] = sym_identifier,
  [sym_text] = sym_text,
  [sym_offset] = sym_offset,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_entity] = sym_entity,
  [sym_attr] = sym_attr,
  [sym_module] = sym_module,
  [sym_origin] = sym_origin,
  [sym_name] = sym_name,
  [sym_label] = sym_label,
  [sym_guide] = sym_guide,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_set] = {
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
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token2] = {
    .visible = true,
    .named = true,
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
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
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
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_origin] = {
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
  [sym_guide] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(28);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'H') ADVANCE(106);
      if (lookahead == 'U') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'H') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 'w') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'z') ADVANCE(60);
      END_STATE();
    case 86:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_origin_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_offset);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 86},
  [29] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_origin_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym__command] = STATE(4),
    [sym_new] = STATE(4),
    [sym_set] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_move] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(15), 1,
      anon_sym_label,
    ACTIONS(17), 1,
      anon_sym_guide,
    STATE(9), 1,
      sym_entity,
    ACTIONS(11), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
    STATE(6), 3,
      sym_module,
      sym_label,
      sym_guide,
  [23] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_new,
    ACTIONS(27), 1,
      anon_sym_set,
    ACTIONS(21), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(3), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [43] = 5,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(3), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [63] = 1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [71] = 1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [79] = 1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [87] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [95] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [103] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [111] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [119] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [127] = 3,
    ACTIONS(50), 1,
      anon_sym_origin,
    STATE(11), 1,
      sym_attr,
    STATE(12), 1,
      sym_origin,
  [137] = 2,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_name,
  [144] = 1,
    ACTIONS(54), 2,
      anon_sym_vertical,
      anon_sym_horizontal,
  [149] = 2,
    ACTIONS(56), 1,
      aux_sym_origin_token1,
    ACTIONS(58), 1,
      aux_sym_origin_token2,
  [156] = 1,
    ACTIONS(60), 1,
      aux_sym_name_token1,
  [160] = 1,
    ACTIONS(62), 1,
      sym_height,
  [164] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [168] = 1,
    ACTIONS(66), 1,
      anon_sym_COMMA,
  [172] = 1,
    ACTIONS(68), 1,
      anon_sym_COMMA,
  [176] = 1,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
  [180] = 1,
    ACTIONS(72), 1,
      sym_width,
  [184] = 1,
    ACTIONS(74), 1,
      sym_offset,
  [188] = 1,
    ACTIONS(76), 1,
      aux_sym_origin_token2,
  [192] = 1,
    ACTIONS(76), 1,
      aux_sym_origin_token1,
  [196] = 1,
    ACTIONS(78), 1,
      sym_height,
  [200] = 1,
    ACTIONS(80), 1,
      sym_identifier,
  [204] = 1,
    ACTIONS(82), 1,
      sym_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 137,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 149,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 160,
  [SMALL_STATE(19)] = 164,
  [SMALL_STATE(20)] = 168,
  [SMALL_STATE(21)] = 172,
  [SMALL_STATE(22)] = 176,
  [SMALL_STATE(23)] = 180,
  [SMALL_STATE(24)] = 184,
  [SMALL_STATE(25)] = 188,
  [SMALL_STATE(26)] = 192,
  [SMALL_STATE(27)] = 196,
  [SMALL_STATE(28)] = 200,
  [SMALL_STATE(29)] = 204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
