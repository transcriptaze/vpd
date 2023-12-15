#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  sym_offset = 22,
  anon_sym_AT = 23,
  aux_sym_anchor_token1 = 24,
  sym_source_file = 25,
  sym__command = 26,
  sym_new = 27,
  sym_set = 28,
  sym_entity = 29,
  sym_attr = 30,
  sym_module = 31,
  sym_origin = 32,
  sym_name = 33,
  sym_label = 34,
  sym_guide = 35,
  sym_text = 36,
  sym_anchor = 37,
  aux_sym_source_file_repeat1 = 38,
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
  [sym_offset] = "offset",
  [anon_sym_AT] = "@",
  [aux_sym_anchor_token1] = "x",
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
  [sym_text] = "text",
  [sym_anchor] = "anchor",
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
  [sym_offset] = sym_offset,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_anchor_token1] = aux_sym_origin_token2,
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
  [sym_text] = sym_text,
  [sym_anchor] = sym_anchor,
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
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_anchor_token1] = {
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_anchor] = {
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
  [1] = {
    [3] = aux_sym_origin_token1,
  },
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(27);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'H') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'H') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 'z') ADVANCE(61);
      END_STATE();
    case 87:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_origin_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 87},
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
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_anchor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__command] = STATE(3),
    [sym_new] = STATE(3),
    [sym_set] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    STATE(8), 1,
      sym_entity,
    ACTIONS(11), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
    STATE(7), 3,
      sym_module,
      sym_label,
      sym_guide,
  [23] = 5,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(4), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [43] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(25), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(4), 4,
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
  [127] = 1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [135] = 3,
    ACTIONS(52), 1,
      anon_sym_origin,
    STATE(9), 1,
      sym_attr,
    STATE(10), 1,
      sym_origin,
  [145] = 2,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_name,
  [152] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_text,
  [159] = 2,
    ACTIONS(58), 1,
      aux_sym_origin_token1,
    ACTIONS(60), 1,
      aux_sym_origin_token2,
  [166] = 2,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(5), 1,
      sym_anchor,
  [173] = 1,
    ACTIONS(64), 2,
      anon_sym_vertical,
      anon_sym_horizontal,
  [178] = 1,
    ACTIONS(66), 1,
      sym_identifier,
  [182] = 1,
    ACTIONS(68), 1,
      anon_sym_COMMA,
  [186] = 1,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
  [190] = 1,
    ACTIONS(72), 1,
      sym_width,
  [194] = 1,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
  [198] = 1,
    ACTIONS(76), 1,
      aux_sym_anchor_token1,
  [202] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [206] = 1,
    ACTIONS(80), 1,
      sym_offset,
  [210] = 1,
    ACTIONS(82), 1,
      aux_sym_origin_token2,
  [214] = 1,
    ACTIONS(82), 1,
      aux_sym_origin_token1,
  [218] = 1,
    ACTIONS(84), 1,
      sym_height,
  [222] = 1,
    ACTIONS(86), 1,
      anon_sym_COMMA,
  [226] = 1,
    ACTIONS(88), 1,
      anon_sym_AT,
  [230] = 1,
    ACTIONS(90), 1,
      anon_sym_COMMA,
  [234] = 1,
    ACTIONS(92), 1,
      aux_sym_name_token1,
  [238] = 1,
    ACTIONS(94), 1,
      sym_height,
  [242] = 1,
    ACTIONS(96), 1,
      aux_sym_anchor_token1,
  [246] = 1,
    ACTIONS(98), 1,
      aux_sym_name_token1,
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
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 145,
  [SMALL_STATE(16)] = 152,
  [SMALL_STATE(17)] = 159,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 173,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 182,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 190,
  [SMALL_STATE(24)] = 194,
  [SMALL_STATE(25)] = 198,
  [SMALL_STATE(26)] = 202,
  [SMALL_STATE(27)] = 206,
  [SMALL_STATE(28)] = 210,
  [SMALL_STATE(29)] = 214,
  [SMALL_STATE(30)] = 218,
  [SMALL_STATE(31)] = 222,
  [SMALL_STATE(32)] = 226,
  [SMALL_STATE(33)] = 230,
  [SMALL_STATE(34)] = 234,
  [SMALL_STATE(35)] = 238,
  [SMALL_STATE(36)] = 242,
  [SMALL_STATE(37)] = 246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_command(void) {
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
