#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_new = 1,
  anon_sym_set = 2,
  anon_sym_param = 3,
  anon_sym_input = 4,
  anon_sym_output = 5,
  anon_sym_module = 6,
  anon_sym_origin = 7,
  anon_sym_COMMA = 8,
  anon_sym_AT = 9,
  aux_sym_origin_token1 = 10,
  aux_sym_x_token1 = 11,
  aux_sym_y_token1 = 12,
  sym_name = 13,
  sym_height = 14,
  sym_width = 15,
  anon_sym_label = 16,
  anon_sym_guide = 17,
  sym_identifier = 18,
  anon_sym_vertical = 19,
  anon_sym_horizontal = 20,
  anon_sym_left = 21,
  anon_sym_centre = 22,
  anon_sym_center = 23,
  anon_sym_right = 24,
  anon_sym_top = 25,
  anon_sym_middle = 26,
  anon_sym_bottom = 27,
  sym_offset = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_text_token1 = 30,
  aux_sym_anchor_token1 = 31,
  sym_command = 32,
  sym_new = 33,
  sym_set = 34,
  sym__entity = 35,
  sym__attribute = 36,
  sym_module = 37,
  sym_origin = 38,
  sym_x = 39,
  sym_y = 40,
  sym_label = 41,
  sym_guide = 42,
  sym_vertical = 43,
  sym_horizontal = 44,
  sym_geometry = 45,
  sym_guideline = 46,
  sym_text = 47,
  sym_anchor = 48,
  aux_sym_command_repeat1 = 49,
  alias_sym_absolute = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym__entity] = "_entity",
  [sym__attribute] = "_attribute",
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
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_absolute] = "absolute",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym__entity] = sym__entity,
  [sym__attribute] = sym__attribute,
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
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [alias_sym_absolute] = alias_sym_absolute,
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
  [sym_command] = {
    .visible = true,
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
  [sym__entity] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
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
  [aux_sym_command_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == 'v') ADVANCE(34);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == 'U') ADVANCE(131);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'H') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(62);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'z') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 116:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(197);
      END_STATE();
    case 198:
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
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_command] = STATE(51),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [aux_sym_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_vertical,
    ACTIONS(13), 1,
      anon_sym_horizontal,
    ACTIONS(17), 1,
      sym_offset,
    STATE(32), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(15), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [28] = 5,
    ACTIONS(11), 1,
      anon_sym_vertical,
    ACTIONS(13), 1,
      anon_sym_horizontal,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(20), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(15), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [53] = 5,
    ACTIONS(23), 1,
      anon_sym_module,
    ACTIONS(25), 1,
      anon_sym_label,
    ACTIONS(27), 1,
      anon_sym_guide,
    ACTIONS(21), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
    STATE(15), 4,
      sym__entity,
      sym_module,
      sym_label,
      sym_guide,
  [74] = 4,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym_new,
      sym_set,
      aux_sym_command_repeat1,
  [89] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_new,
    ACTIONS(36), 1,
      anon_sym_set,
    STATE(6), 3,
      sym_new,
      sym_set,
      aux_sym_command_repeat1,
  [104] = 2,
    ACTIONS(41), 1,
      sym_offset,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [114] = 2,
    ACTIONS(45), 1,
      sym_offset,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [124] = 5,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_x_token1,
    ACTIONS(51), 1,
      aux_sym_y_token1,
    STATE(52), 1,
      sym_y,
    STATE(53), 1,
      sym_x,
  [140] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [147] = 1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
  [154] = 2,
    ACTIONS(59), 1,
      sym_offset,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [163] = 3,
    ACTIONS(61), 1,
      anon_sym_origin,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(65), 2,
      aux_sym_origin_token1,
      sym_offset,
  [174] = 3,
    ACTIONS(67), 1,
      anon_sym_origin,
    ACTIONS(69), 1,
      anon_sym_AT,
    ACTIONS(71), 2,
      aux_sym_origin_token1,
      sym_offset,
  [185] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [191] = 1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [197] = 2,
    ACTIONS(77), 1,
      anon_sym_origin,
    STATE(19), 2,
      sym__attribute,
      sym_origin,
  [205] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [211] = 1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [217] = 1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [223] = 1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [229] = 1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [235] = 1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [241] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [247] = 1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [253] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [259] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [265] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [271] = 1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [277] = 1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [283] = 1,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [289] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [295] = 2,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 2,
      aux_sym_origin_token1,
      sym_offset,
  [303] = 1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [309] = 2,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(117), 2,
      aux_sym_origin_token1,
      sym_offset,
  [317] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
  [323] = 2,
    ACTIONS(121), 1,
      anon_sym_AT,
    STATE(29), 1,
      sym_anchor,
  [330] = 1,
    ACTIONS(123), 2,
      aux_sym_origin_token1,
      sym_offset,
  [335] = 1,
    ACTIONS(125), 2,
      aux_sym_origin_token1,
      sym_offset,
  [340] = 2,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym_text,
  [347] = 1,
    ACTIONS(129), 2,
      aux_sym_origin_token1,
      sym_offset,
  [352] = 1,
    ACTIONS(131), 2,
      aux_sym_origin_token1,
      sym_offset,
  [357] = 2,
    ACTIONS(51), 1,
      aux_sym_y_token1,
    STATE(26), 1,
      sym_y,
  [364] = 2,
    ACTIONS(49), 1,
      aux_sym_x_token1,
    STATE(26), 1,
      sym_x,
  [371] = 1,
    ACTIONS(133), 1,
      aux_sym_anchor_token1,
  [375] = 1,
    ACTIONS(135), 1,
      anon_sym_AT,
  [379] = 1,
    ACTIONS(137), 1,
      anon_sym_COMMA,
  [383] = 1,
    ACTIONS(17), 1,
      sym_offset,
  [387] = 1,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
  [391] = 1,
    ACTIONS(141), 1,
      sym_width,
  [395] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [399] = 1,
    ACTIONS(145), 1,
      anon_sym_COMMA,
  [403] = 1,
    ACTIONS(147), 1,
      anon_sym_COMMA,
  [407] = 1,
    ACTIONS(149), 1,
      aux_sym_origin_token1,
  [411] = 1,
    ACTIONS(151), 1,
      aux_sym_origin_token1,
  [415] = 1,
    ACTIONS(153), 1,
      aux_sym_anchor_token1,
  [419] = 1,
    ACTIONS(155), 1,
      aux_sym_text_token1,
  [423] = 1,
    ACTIONS(157), 1,
      sym_height,
  [427] = 1,
    ACTIONS(159), 1,
      anon_sym_COMMA,
  [431] = 1,
    ACTIONS(161), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 147,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 197,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 217,
  [SMALL_STATE(21)] = 223,
  [SMALL_STATE(22)] = 229,
  [SMALL_STATE(23)] = 235,
  [SMALL_STATE(24)] = 241,
  [SMALL_STATE(25)] = 247,
  [SMALL_STATE(26)] = 253,
  [SMALL_STATE(27)] = 259,
  [SMALL_STATE(28)] = 265,
  [SMALL_STATE(29)] = 271,
  [SMALL_STATE(30)] = 277,
  [SMALL_STATE(31)] = 283,
  [SMALL_STATE(32)] = 289,
  [SMALL_STATE(33)] = 295,
  [SMALL_STATE(34)] = 303,
  [SMALL_STATE(35)] = 309,
  [SMALL_STATE(36)] = 317,
  [SMALL_STATE(37)] = 323,
  [SMALL_STATE(38)] = 330,
  [SMALL_STATE(39)] = 335,
  [SMALL_STATE(40)] = 340,
  [SMALL_STATE(41)] = 347,
  [SMALL_STATE(42)] = 352,
  [SMALL_STATE(43)] = 357,
  [SMALL_STATE(44)] = 364,
  [SMALL_STATE(45)] = 371,
  [SMALL_STATE(46)] = 375,
  [SMALL_STATE(47)] = 379,
  [SMALL_STATE(48)] = 383,
  [SMALL_STATE(49)] = 387,
  [SMALL_STATE(50)] = 391,
  [SMALL_STATE(51)] = 395,
  [SMALL_STATE(52)] = 399,
  [SMALL_STATE(53)] = 403,
  [SMALL_STATE(54)] = 407,
  [SMALL_STATE(55)] = 411,
  [SMALL_STATE(56)] = 415,
  [SMALL_STATE(57)] = 419,
  [SMALL_STATE(58)] = 423,
  [SMALL_STATE(59)] = 427,
  [SMALL_STATE(60)] = 431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
