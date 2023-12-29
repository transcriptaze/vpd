#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  aux_sym_parameter_token1 = 3,
  anon_sym_set = 4,
  anon_sym_export = 5,
  anon_sym_svg = 6,
  anon_sym_light = 7,
  anon_sym_dark = 8,
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
  sym_command = 34,
  sym_new = 35,
  sym__entity = 36,
  sym_module = 37,
  sym_parameter = 38,
  sym_set = 39,
  sym_export = 40,
  sym__exportable = 41,
  sym_svg = 42,
  sym__attribute = 43,
  sym_origin = 44,
  sym_x = 45,
  sym_y = 46,
  sym_label = 47,
  sym_guide = 48,
  sym_vertical = 49,
  sym_horizontal = 50,
  sym_geometry = 51,
  sym_guideline = 52,
  sym_text = 53,
  sym_anchor = 54,
  aux_sym_command_repeat1 = 55,
  alias_sym_absolute = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_set] = "set",
  [anon_sym_export] = "export",
  [anon_sym_svg] = "svg",
  [anon_sym_light] = "light",
  [anon_sym_dark] = "dark",
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
  [sym__entity] = "_entity",
  [sym_module] = "module",
  [sym_parameter] = "parameter",
  [sym_set] = "set",
  [sym_export] = "export",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
  [sym__attribute] = "_attribute",
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
  [anon_sym_module] = anon_sym_module,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_dark] = anon_sym_dark,
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
  [sym__entity] = sym__entity,
  [sym_module] = sym_module,
  [sym_parameter] = sym_parameter,
  [sym_set] = sym_set,
  [sym_export] = sym_export,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
  [sym__attribute] = sym__attribute,
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_svg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dark] = {
    .visible = true,
    .named = true,
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
  [sym__entity] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym__exportable] = {
    .visible = true,
    .named = true,
  },
  [sym_svg] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(123);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '@') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(35);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '@') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'U') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(68);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 118:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(68);
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
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_x_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_y_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 207:
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
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
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
    [sym_command] = STATE(69),
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [sym_export] = STATE(5),
    [aux_sym_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
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
    STATE(30), 4,
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
    STATE(14), 4,
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
  [53] = 5,
    ACTIONS(23), 1,
      anon_sym_module,
    ACTIONS(25), 1,
      aux_sym_parameter_token1,
    ACTIONS(27), 1,
      anon_sym_label,
    ACTIONS(29), 1,
      anon_sym_guide,
    STATE(24), 5,
      sym__entity,
      sym_module,
      sym_parameter,
      sym_label,
      sym_guide,
  [73] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [92] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_new,
    ACTIONS(38), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_export,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [111] = 2,
    ACTIONS(46), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [122] = 2,
    ACTIONS(50), 1,
      sym_offset,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [133] = 2,
    ACTIONS(54), 1,
      sym_offset,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [144] = 1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [152] = 2,
    ACTIONS(60), 1,
      sym_offset,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [162] = 1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [170] = 5,
    ACTIONS(64), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      aux_sym_x_token1,
    ACTIONS(68), 1,
      aux_sym_y_token1,
    STATE(58), 1,
      sym_x,
    STATE(60), 1,
      sym_y,
  [186] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [193] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [200] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [207] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [214] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [221] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [228] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [235] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [242] = 3,
    ACTIONS(86), 1,
      anon_sym_origin,
    ACTIONS(88), 1,
      anon_sym_AT,
    ACTIONS(90), 2,
      aux_sym_origin_token1,
      sym_offset,
  [253] = 3,
    ACTIONS(92), 1,
      anon_sym_origin,
    ACTIONS(94), 1,
      anon_sym_AT,
    ACTIONS(96), 2,
      aux_sym_origin_token1,
      sym_offset,
  [264] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [271] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [278] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [285] = 1,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [292] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [299] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [306] = 1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [313] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [320] = 1,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [327] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [334] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [341] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [348] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [355] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [362] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [369] = 2,
    ACTIONS(128), 1,
      anon_sym_AT,
    ACTIONS(130), 2,
      aux_sym_origin_token1,
      sym_offset,
  [377] = 2,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(134), 2,
      aux_sym_origin_token1,
      sym_offset,
  [385] = 2,
    ACTIONS(136), 1,
      anon_sym_origin,
    STATE(15), 2,
      sym__attribute,
      sym_origin,
  [393] = 2,
    ACTIONS(68), 1,
      aux_sym_y_token1,
    STATE(25), 1,
      sym_y,
  [400] = 1,
    ACTIONS(138), 2,
      aux_sym_origin_token1,
      sym_offset,
  [405] = 1,
    ACTIONS(140), 2,
      aux_sym_origin_token1,
      sym_offset,
  [410] = 1,
    ACTIONS(142), 2,
      aux_sym_origin_token1,
      sym_offset,
  [415] = 2,
    ACTIONS(144), 1,
      anon_sym_module,
    STATE(16), 1,
      sym__exportable,
  [422] = 2,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_text,
  [429] = 2,
    ACTIONS(148), 1,
      anon_sym_svg,
    STATE(32), 1,
      sym_svg,
  [436] = 2,
    ACTIONS(150), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym_anchor,
  [443] = 1,
    ACTIONS(152), 2,
      aux_sym_origin_token1,
      sym_offset,
  [448] = 2,
    ACTIONS(150), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym_anchor,
  [455] = 2,
    ACTIONS(66), 1,
      aux_sym_x_token1,
    STATE(25), 1,
      sym_x,
  [462] = 1,
    ACTIONS(154), 1,
      aux_sym_anchor_token1,
  [466] = 1,
    ACTIONS(156), 1,
      aux_sym_origin_token1,
  [470] = 1,
    ACTIONS(158), 1,
      anon_sym_COMMA,
  [474] = 1,
    ACTIONS(160), 1,
      anon_sym_AT,
  [478] = 1,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
  [482] = 1,
    ACTIONS(164), 1,
      anon_sym_COMMA,
  [486] = 1,
    ACTIONS(166), 1,
      aux_sym_text_token1,
  [490] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [494] = 1,
    ACTIONS(170), 1,
      sym_width,
  [498] = 1,
    ACTIONS(172), 1,
      sym_height,
  [502] = 1,
    ACTIONS(174), 1,
      aux_sym_origin_token1,
  [506] = 1,
    ACTIONS(19), 1,
      sym_offset,
  [510] = 1,
    ACTIONS(176), 1,
      aux_sym_anchor_token1,
  [514] = 1,
    ACTIONS(178), 1,
      anon_sym_COMMA,
  [518] = 1,
    ACTIONS(180), 1,
      sym_name,
  [522] = 1,
    ACTIONS(182), 1,
      sym_name,
  [526] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 152,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 214,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 228,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 253,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 271,
  [SMALL_STATE(26)] = 278,
  [SMALL_STATE(27)] = 285,
  [SMALL_STATE(28)] = 292,
  [SMALL_STATE(29)] = 299,
  [SMALL_STATE(30)] = 306,
  [SMALL_STATE(31)] = 313,
  [SMALL_STATE(32)] = 320,
  [SMALL_STATE(33)] = 327,
  [SMALL_STATE(34)] = 334,
  [SMALL_STATE(35)] = 341,
  [SMALL_STATE(36)] = 348,
  [SMALL_STATE(37)] = 355,
  [SMALL_STATE(38)] = 362,
  [SMALL_STATE(39)] = 369,
  [SMALL_STATE(40)] = 377,
  [SMALL_STATE(41)] = 385,
  [SMALL_STATE(42)] = 393,
  [SMALL_STATE(43)] = 400,
  [SMALL_STATE(44)] = 405,
  [SMALL_STATE(45)] = 410,
  [SMALL_STATE(46)] = 415,
  [SMALL_STATE(47)] = 422,
  [SMALL_STATE(48)] = 429,
  [SMALL_STATE(49)] = 436,
  [SMALL_STATE(50)] = 443,
  [SMALL_STATE(51)] = 448,
  [SMALL_STATE(52)] = 455,
  [SMALL_STATE(53)] = 462,
  [SMALL_STATE(54)] = 466,
  [SMALL_STATE(55)] = 470,
  [SMALL_STATE(56)] = 474,
  [SMALL_STATE(57)] = 478,
  [SMALL_STATE(58)] = 482,
  [SMALL_STATE(59)] = 486,
  [SMALL_STATE(60)] = 490,
  [SMALL_STATE(61)] = 494,
  [SMALL_STATE(62)] = 498,
  [SMALL_STATE(63)] = 502,
  [SMALL_STATE(64)] = 506,
  [SMALL_STATE(65)] = 510,
  [SMALL_STATE(66)] = 514,
  [SMALL_STATE(67)] = 518,
  [SMALL_STATE(68)] = 522,
  [SMALL_STATE(69)] = 526,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
