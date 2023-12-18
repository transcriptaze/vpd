#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

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
  sym_name = 13,
  sym_height = 14,
  sym_width = 15,
  anon_sym_label = 16,
  anon_sym_guide = 17,
  sym_identifier = 18,
  anon_sym_vertical = 19,
  anon_sym_AT = 20,
  anon_sym_horizontal = 21,
  anon_sym_left = 22,
  anon_sym_centre = 23,
  anon_sym_center = 24,
  anon_sym_right = 25,
  anon_sym_top = 26,
  anon_sym_middle = 27,
  anon_sym_bottom = 28,
  sym_offset = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_text_token1 = 31,
  aux_sym_anchor_token1 = 32,
  sym_source_file = 33,
  sym__command = 34,
  sym_new = 35,
  sym_set = 36,
  sym_entity = 37,
  sym_attr = 38,
  sym_module = 39,
  sym_origin = 40,
  sym_label = 41,
  sym_guide = 42,
  sym_vertical = 43,
  sym_horizontal = 44,
  sym_geometry = 45,
  sym_text = 46,
  sym_anchor = 47,
  aux_sym_source_file_repeat1 = 48,
  alias_sym_absolute = 49,
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
  [sym_name] = "name",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [anon_sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [anon_sym_vertical] = "vertical",
  [anon_sym_AT] = "@",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_left] = "reference",
  [anon_sym_centre] = "reference",
  [anon_sym_center] = "reference",
  [anon_sym_right] = "reference",
  [anon_sym_top] = "reference",
  [anon_sym_middle] = "reference",
  [anon_sym_bottom] = "reference",
  [sym_offset] = "offset",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_token1] = "value",
  [aux_sym_anchor_token1] = "x",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_entity] = "entity",
  [sym_attr] = "attr",
  [sym_module] = "module",
  [sym_origin] = "origin",
  [sym_label] = "label",
  [sym_guide] = "guide",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_text] = "text",
  [sym_anchor] = "anchor",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [alias_sym_absolute] = "absolute",
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
  [sym_name] = sym_name,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_guide] = anon_sym_guide,
  [sym_identifier] = sym_identifier,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_left,
  [anon_sym_center] = anon_sym_left,
  [anon_sym_right] = anon_sym_left,
  [anon_sym_top] = anon_sym_left,
  [anon_sym_middle] = anon_sym_left,
  [anon_sym_bottom] = anon_sym_left,
  [sym_offset] = sym_offset,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_anchor_token1] = aux_sym_origin_token2,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_entity] = sym_entity,
  [sym_attr] = sym_attr,
  [sym_module] = sym_module,
  [sym_origin] = sym_origin,
  [sym_label] = sym_label,
  [sym_guide] = sym_guide,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_text] = sym_text,
  [sym_anchor] = sym_anchor,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [alias_sym_absolute] = alias_sym_absolute,
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
  [sym_name] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_centre] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_middle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bottom] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = true,
    .named = true,
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_guide] = {
    .visible = true,
    .named = true,
  },
  [sym_vertical] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal] = {
    .visible = true,
    .named = true,
  },
  [sym_geometry] = {
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
  [alias_sym_absolute] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_absolute,
  },
  [2] = {
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(123);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '@') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(36);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '@') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(137);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'H') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 115:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 116:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 117:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 121:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 122:
      if (eof) ADVANCE(123);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_origin_token2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 122},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 122},
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 119},
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
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_anchor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__command] = STATE(6),
    [sym_new] = STATE(6),
    [sym_set] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_move] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_vertical,
    ACTIONS(15), 1,
      anon_sym_horizontal,
    STATE(16), 3,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
    ACTIONS(17), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [24] = 4,
    ACTIONS(19), 1,
      anon_sym_vertical,
    ACTIONS(21), 1,
      anon_sym_horizontal,
    STATE(9), 3,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
    ACTIONS(23), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [45] = 6,
    ACTIONS(27), 1,
      anon_sym_module,
    ACTIONS(29), 1,
      anon_sym_label,
    ACTIONS(31), 1,
      anon_sym_guide,
    STATE(10), 1,
      sym_entity,
    ACTIONS(25), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
    STATE(15), 3,
      sym_module,
      sym_label,
      sym_guide,
  [68] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_new,
    ACTIONS(41), 1,
      anon_sym_set,
    ACTIONS(35), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(5), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [88] = 5,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(5), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [108] = 2,
    ACTIONS(50), 1,
      sym_offset,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [119] = 1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [127] = 1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [135] = 1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [143] = 1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [151] = 1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [159] = 1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [167] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [175] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [183] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [191] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [199] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [207] = 1,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [215] = 1,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [223] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [231] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [239] = 3,
    ACTIONS(82), 1,
      anon_sym_origin,
    STATE(11), 1,
      sym_attr,
    STATE(12), 1,
      sym_origin,
  [249] = 2,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_text,
  [256] = 2,
    ACTIONS(86), 1,
      aux_sym_origin_token1,
    ACTIONS(88), 1,
      aux_sym_origin_token2,
  [263] = 2,
    ACTIONS(90), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym_anchor,
  [270] = 2,
    ACTIONS(92), 1,
      anon_sym_AT,
    ACTIONS(94), 1,
      sym_offset,
  [277] = 2,
    ACTIONS(96), 1,
      anon_sym_AT,
    ACTIONS(98), 1,
      sym_offset,
  [284] = 1,
    ACTIONS(100), 1,
      aux_sym_anchor_token1,
  [288] = 1,
    ACTIONS(102), 1,
      sym_offset,
  [292] = 1,
    ACTIONS(104), 1,
      sym_height,
  [296] = 1,
    ACTIONS(106), 1,
      sym_offset,
  [300] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [304] = 1,
    ACTIONS(110), 1,
      sym_name,
  [308] = 1,
    ACTIONS(112), 1,
      aux_sym_origin_token2,
  [312] = 1,
    ACTIONS(112), 1,
      aux_sym_origin_token1,
  [316] = 1,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
  [320] = 1,
    ACTIONS(116), 1,
      anon_sym_AT,
  [324] = 1,
    ACTIONS(118), 1,
      anon_sym_COMMA,
  [328] = 1,
    ACTIONS(120), 1,
      sym_width,
  [332] = 1,
    ACTIONS(122), 1,
      anon_sym_COMMA,
  [336] = 1,
    ACTIONS(124), 1,
      anon_sym_COMMA,
  [340] = 1,
    ACTIONS(126), 1,
      aux_sym_anchor_token1,
  [344] = 1,
    ACTIONS(128), 1,
      aux_sym_text_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 199,
  [SMALL_STATE(19)] = 207,
  [SMALL_STATE(20)] = 215,
  [SMALL_STATE(21)] = 223,
  [SMALL_STATE(22)] = 231,
  [SMALL_STATE(23)] = 239,
  [SMALL_STATE(24)] = 249,
  [SMALL_STATE(25)] = 256,
  [SMALL_STATE(26)] = 263,
  [SMALL_STATE(27)] = 270,
  [SMALL_STATE(28)] = 277,
  [SMALL_STATE(29)] = 284,
  [SMALL_STATE(30)] = 288,
  [SMALL_STATE(31)] = 292,
  [SMALL_STATE(32)] = 296,
  [SMALL_STATE(33)] = 300,
  [SMALL_STATE(34)] = 304,
  [SMALL_STATE(35)] = 308,
  [SMALL_STATE(36)] = 312,
  [SMALL_STATE(37)] = 316,
  [SMALL_STATE(38)] = 320,
  [SMALL_STATE(39)] = 324,
  [SMALL_STATE(40)] = 328,
  [SMALL_STATE(41)] = 332,
  [SMALL_STATE(42)] = 336,
  [SMALL_STATE(43)] = 340,
  [SMALL_STATE(44)] = 344,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
