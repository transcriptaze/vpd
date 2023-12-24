#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_COMMA = 10,
  anon_sym_AT = 11,
  aux_sym_origin_token1 = 12,
  aux_sym_x_token1 = 13,
  aux_sym_y_token1 = 14,
  sym_name = 15,
  sym_height = 16,
  sym_width = 17,
  anon_sym_label = 18,
  anon_sym_guide = 19,
  sym_identifier = 20,
  anon_sym_vertical = 21,
  anon_sym_horizontal = 22,
  anon_sym_left = 23,
  anon_sym_centre = 24,
  anon_sym_center = 25,
  anon_sym_right = 26,
  anon_sym_top = 27,
  anon_sym_middle = 28,
  anon_sym_bottom = 29,
  sym_offset = 30,
  anon_sym_DQUOTE = 31,
  aux_sym_text_token1 = 32,
  aux_sym_anchor_token1 = 33,
  sym_source_file = 34,
  sym__command = 35,
  sym_new = 36,
  sym_set = 37,
  sym_entity = 38,
  sym_attr = 39,
  sym_module = 40,
  sym_origin = 41,
  sym_x = 42,
  sym_y = 43,
  sym_label = 44,
  sym_guide = 45,
  sym_vertical = 46,
  sym_horizontal = 47,
  sym_geometry = 48,
  sym_guideline = 49,
  sym_text = 50,
  sym_anchor = 51,
  aux_sym_source_file_repeat1 = 52,
  alias_sym_absolute = 53,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [aux_sym_origin_token1] = "offset",
  [aux_sym_x_token1] = "reference",
  [aux_sym_y_token1] = "reference",
  [sym_name] = "name",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [anon_sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [anon_sym_vertical] = "vertical",
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
  [sym_x] = "x",
  [sym_y] = "y",
  [sym_label] = "label",
  [sym_guide] = "guide",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_guideline] = "guideline",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym_x_token1] = aux_sym_x_token1,
  [aux_sym_y_token1] = aux_sym_x_token1,
  [sym_name] = sym_name,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_guide] = anon_sym_guide,
  [sym_identifier] = sym_identifier,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_left] = aux_sym_x_token1,
  [anon_sym_centre] = aux_sym_x_token1,
  [anon_sym_center] = aux_sym_x_token1,
  [anon_sym_right] = aux_sym_x_token1,
  [anon_sym_top] = aux_sym_x_token1,
  [anon_sym_middle] = aux_sym_x_token1,
  [anon_sym_bottom] = aux_sym_x_token1,
  [sym_offset] = sym_offset,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_anchor_token1] = sym_x,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_entity] = sym_entity,
  [sym_attr] = sym_attr,
  [sym_module] = sym_module,
  [sym_origin] = sym_origin,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym_label] = sym_label,
  [sym_guide] = sym_guide,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_guideline] = sym_guideline,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_x_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_y_token1] = {
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
  [sym_x] = {
    .visible = true,
    .named = true,
  },
  [sym_y] = {
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
  [sym_guideline] = {
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
    [0] = aux_sym_x_token1,
  },
  [2] = {
    [1] = alias_sym_absolute,
  },
  [3] = {
    [2] = alias_sym_absolute,
  },
  [4] = {
    [1] = alias_sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [5] = {
    [3] = sym_y,
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(123);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'g') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'v') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'H') ADVANCE(135);
      if (lookahead == 'U') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'H') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 122:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(205);
      END_STATE();
    case 206:
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
  [3] = {.lex_state = 1},
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
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 1},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym_x_token1] = ACTIONS(1),
    [aux_sym_y_token1] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
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
    [sym_source_file] = STATE(51),
    [sym__command] = STATE(5),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_move] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_vertical,
    ACTIONS(15), 1,
      anon_sym_horizontal,
    ACTIONS(19), 1,
      sym_offset,
    STATE(23), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(17), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [28] = 5,
    ACTIONS(13), 1,
      anon_sym_vertical,
    ACTIONS(15), 1,
      anon_sym_horizontal,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(12), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(17), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [53] = 6,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_label,
    ACTIONS(29), 1,
      anon_sym_guide,
    STATE(14), 1,
      sym_entity,
    ACTIONS(23), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
    STATE(21), 3,
      sym_module,
      sym_label,
      sym_guide,
  [76] = 5,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(6), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [96] = 5,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_new,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(37), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(6), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [116] = 2,
    ACTIONS(48), 1,
      sym_offset,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [128] = 2,
    ACTIONS(52), 1,
      sym_offset,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [140] = 1,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [149] = 1,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [158] = 2,
    ACTIONS(60), 1,
      sym_offset,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [169] = 1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [177] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [185] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [193] = 5,
    ACTIONS(68), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      aux_sym_x_token1,
    ACTIONS(72), 1,
      aux_sym_y_token1,
    STATE(57), 1,
      sym_y,
    STATE(59), 1,
      sym_x,
  [209] = 1,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [217] = 1,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [225] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [233] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [241] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [249] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [257] = 1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [265] = 1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [273] = 1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [281] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [289] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [297] = 1,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [305] = 1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [313] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [321] = 1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [329] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [337] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [345] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [353] = 3,
    ACTIONS(110), 1,
      anon_sym_origin,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(114), 2,
      aux_sym_origin_token1,
      sym_offset,
  [364] = 3,
    ACTIONS(116), 1,
      anon_sym_origin,
    ACTIONS(118), 1,
      anon_sym_AT,
    ACTIONS(120), 2,
      aux_sym_origin_token1,
      sym_offset,
  [375] = 2,
    ACTIONS(122), 1,
      anon_sym_AT,
    ACTIONS(124), 2,
      aux_sym_origin_token1,
      sym_offset,
  [383] = 2,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(128), 2,
      aux_sym_origin_token1,
      sym_offset,
  [391] = 3,
    ACTIONS(130), 1,
      anon_sym_origin,
    STATE(16), 1,
      sym_attr,
    STATE(17), 1,
      sym_origin,
  [401] = 1,
    ACTIONS(132), 2,
      aux_sym_origin_token1,
      sym_offset,
  [406] = 2,
    ACTIONS(134), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym_anchor,
  [413] = 1,
    ACTIONS(136), 2,
      aux_sym_origin_token1,
      sym_offset,
  [418] = 1,
    ACTIONS(138), 2,
      aux_sym_origin_token1,
      sym_offset,
  [423] = 1,
    ACTIONS(140), 2,
      aux_sym_origin_token1,
      sym_offset,
  [428] = 2,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_text,
  [435] = 2,
    ACTIONS(72), 1,
      aux_sym_y_token1,
    STATE(26), 1,
      sym_y,
  [442] = 2,
    ACTIONS(70), 1,
      aux_sym_x_token1,
    STATE(26), 1,
      sym_x,
  [449] = 1,
    ACTIONS(144), 1,
      sym_height,
  [453] = 1,
    ACTIONS(146), 1,
      anon_sym_AT,
  [457] = 1,
    ACTIONS(148), 1,
      anon_sym_COMMA,
  [461] = 1,
    ACTIONS(150), 1,
      anon_sym_COMMA,
  [465] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [469] = 1,
    ACTIONS(19), 1,
      sym_offset,
  [473] = 1,
    ACTIONS(154), 1,
      aux_sym_anchor_token1,
  [477] = 1,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
  [481] = 1,
    ACTIONS(158), 1,
      sym_width,
  [485] = 1,
    ACTIONS(160), 1,
      aux_sym_origin_token1,
  [489] = 1,
    ACTIONS(162), 1,
      anon_sym_COMMA,
  [493] = 1,
    ACTIONS(164), 1,
      aux_sym_anchor_token1,
  [497] = 1,
    ACTIONS(166), 1,
      anon_sym_COMMA,
  [501] = 1,
    ACTIONS(168), 1,
      aux_sym_origin_token1,
  [505] = 1,
    ACTIONS(170), 1,
      aux_sym_text_token1,
  [509] = 1,
    ACTIONS(172), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 233,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 249,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 265,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 281,
  [SMALL_STATE(26)] = 289,
  [SMALL_STATE(27)] = 297,
  [SMALL_STATE(28)] = 305,
  [SMALL_STATE(29)] = 313,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 329,
  [SMALL_STATE(32)] = 337,
  [SMALL_STATE(33)] = 345,
  [SMALL_STATE(34)] = 353,
  [SMALL_STATE(35)] = 364,
  [SMALL_STATE(36)] = 375,
  [SMALL_STATE(37)] = 383,
  [SMALL_STATE(38)] = 391,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 406,
  [SMALL_STATE(41)] = 413,
  [SMALL_STATE(42)] = 418,
  [SMALL_STATE(43)] = 423,
  [SMALL_STATE(44)] = 428,
  [SMALL_STATE(45)] = 435,
  [SMALL_STATE(46)] = 442,
  [SMALL_STATE(47)] = 449,
  [SMALL_STATE(48)] = 453,
  [SMALL_STATE(49)] = 457,
  [SMALL_STATE(50)] = 461,
  [SMALL_STATE(51)] = 465,
  [SMALL_STATE(52)] = 469,
  [SMALL_STATE(53)] = 473,
  [SMALL_STATE(54)] = 477,
  [SMALL_STATE(55)] = 481,
  [SMALL_STATE(56)] = 485,
  [SMALL_STATE(57)] = 489,
  [SMALL_STATE(58)] = 493,
  [SMALL_STATE(59)] = 497,
  [SMALL_STATE(60)] = 501,
  [SMALL_STATE(61)] = 505,
  [SMALL_STATE(62)] = 509,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
