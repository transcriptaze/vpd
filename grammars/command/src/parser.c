#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  aux_sym_parameter_token1 = 4,
  anon_sym_set = 5,
  anon_sym_export = 6,
  anon_sym_svg = 7,
  anon_sym_light = 8,
  anon_sym_dark = 9,
  anon_sym_origin = 10,
  anon_sym_COMMA = 11,
  anon_sym_AT = 12,
  aux_sym_origin_token1 = 13,
  anon_sym_left = 14,
  anon_sym_centre = 15,
  anon_sym_center = 16,
  anon_sym_right = 17,
  anon_sym_top = 18,
  anon_sym_middle = 19,
  anon_sym_bottom = 20,
  sym_name = 21,
  sym_height = 22,
  sym_width = 23,
  anon_sym_label = 24,
  anon_sym_guide = 25,
  sym_identifier = 26,
  anon_sym_vertical = 27,
  anon_sym_horizontal = 28,
  sym_offset = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_text_token1 = 31,
  aux_sym_anchor_token1 = 32,
  sym_command = 33,
  sym_new = 34,
  sym__entity = 35,
  sym_module = 36,
  sym_input = 37,
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
  sym_absolute = 55,
  sym__xy = 56,
  aux_sym_command_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
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
  [anon_sym_left] = "reference",
  [anon_sym_centre] = "reference",
  [anon_sym_center] = "reference",
  [anon_sym_right] = "reference",
  [anon_sym_top] = "reference",
  [anon_sym_middle] = "reference",
  [anon_sym_bottom] = "reference",
  [sym_name] = "name",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [anon_sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [sym_offset] = "offset",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_token1] = "value",
  [aux_sym_anchor_token1] = "x",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym__entity] = "_entity",
  [sym_module] = "module",
  [sym_input] = "input",
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
  [sym_absolute] = "absolute",
  [sym__xy] = "geometry",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
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
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_left,
  [anon_sym_center] = anon_sym_left,
  [anon_sym_right] = anon_sym_left,
  [anon_sym_top] = anon_sym_left,
  [anon_sym_middle] = anon_sym_left,
  [anon_sym_bottom] = anon_sym_left,
  [sym_name] = sym_name,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_guide] = anon_sym_guide,
  [sym_identifier] = sym_identifier,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [sym_offset] = sym_offset,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_anchor_token1] = sym_x,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym__entity] = sym__entity,
  [sym_module] = sym_module,
  [sym_input] = sym_input,
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
  [sym_absolute] = sym_absolute,
  [sym__xy] = sym_geometry,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
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
  [anon_sym_input] = {
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
  [sym_input] = {
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
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym__xy] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_left,
  },
  [2] = {
    [1] = sym_absolute,
  },
  [3] = {
    [2] = sym_absolute,
  },
  [4] = {
    [1] = sym_absolute,
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
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(31);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'H') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(133);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'H') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'H') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(55);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(113);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 98:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 102:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(185);
      END_STATE();
    case 186:
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
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
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
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
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
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_anchor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(79),
    [sym_new] = STATE(7),
    [sym_set] = STATE(7),
    [sym_export] = STATE(7),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_vertical,
    ACTIONS(17), 1,
      anon_sym_horizontal,
    ACTIONS(19), 1,
      sym_offset,
    STATE(45), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(11), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [28] = 5,
    ACTIONS(15), 1,
      anon_sym_vertical,
    ACTIONS(17), 1,
      anon_sym_horizontal,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(27), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(11), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [53] = 6,
    ACTIONS(23), 1,
      anon_sym_module,
    ACTIONS(25), 1,
      anon_sym_input,
    ACTIONS(27), 1,
      aux_sym_parameter_token1,
    ACTIONS(29), 1,
      anon_sym_label,
    ACTIONS(31), 1,
      anon_sym_guide,
    STATE(39), 6,
      sym__entity,
      sym_module,
      sym_input,
      sym_parameter,
      sym_label,
      sym_guide,
  [77] = 5,
    ACTIONS(33), 1,
      anon_sym_AT,
    STATE(61), 1,
      sym_y,
    STATE(65), 1,
      sym_x,
    ACTIONS(37), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(35), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [98] = 5,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_new,
    ACTIONS(44), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_export,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [117] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [136] = 4,
    ACTIONS(52), 1,
      anon_sym_AT,
    STATE(58), 1,
      sym_x,
    STATE(38), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(35), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [153] = 2,
    ACTIONS(56), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [164] = 2,
    ACTIONS(60), 1,
      sym_offset,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [175] = 2,
    ACTIONS(64), 1,
      sym_offset,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [186] = 2,
    STATE(32), 1,
      sym_x,
    ACTIONS(35), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [196] = 2,
    ACTIONS(68), 1,
      sym_offset,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [206] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [214] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [222] = 2,
    STATE(31), 1,
      sym_y,
    ACTIONS(37), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [231] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [238] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [245] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [252] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [259] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [266] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [273] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [280] = 1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [287] = 3,
    ACTIONS(90), 1,
      anon_sym_origin,
    ACTIONS(92), 1,
      anon_sym_AT,
    ACTIONS(94), 2,
      aux_sym_origin_token1,
      sym_offset,
  [298] = 3,
    ACTIONS(96), 1,
      anon_sym_origin,
    ACTIONS(98), 1,
      anon_sym_AT,
    ACTIONS(100), 2,
      aux_sym_origin_token1,
      sym_offset,
  [309] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [316] = 1,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [323] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [330] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [337] = 1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [344] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [351] = 1,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [358] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [365] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [372] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [379] = 2,
    STATE(32), 1,
      sym_y,
    ACTIONS(37), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [388] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [395] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [402] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [409] = 1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [416] = 1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [423] = 1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [430] = 1,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [437] = 1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [444] = 2,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(140), 2,
      aux_sym_origin_token1,
      sym_offset,
  [452] = 2,
    ACTIONS(142), 1,
      anon_sym_origin,
    STATE(41), 2,
      sym__attribute,
      sym_origin,
  [460] = 2,
    ACTIONS(144), 1,
      anon_sym_AT,
    ACTIONS(146), 2,
      aux_sym_origin_token1,
      sym_offset,
  [468] = 2,
    ACTIONS(148), 1,
      anon_sym_AT,
    STATE(40), 1,
      sym_anchor,
  [475] = 1,
    ACTIONS(150), 2,
      aux_sym_origin_token1,
      sym_offset,
  [480] = 1,
    ACTIONS(152), 2,
      aux_sym_origin_token1,
      sym_offset,
  [485] = 2,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_text,
  [492] = 2,
    ACTIONS(156), 1,
      anon_sym_svg,
    STATE(33), 1,
      sym_svg,
  [499] = 2,
    ACTIONS(158), 1,
      anon_sym_module,
    STATE(18), 1,
      sym__exportable,
  [506] = 2,
    ACTIONS(148), 1,
      anon_sym_AT,
    STATE(42), 1,
      sym_anchor,
  [513] = 1,
    ACTIONS(160), 2,
      aux_sym_origin_token1,
      sym_offset,
  [518] = 1,
    ACTIONS(162), 2,
      aux_sym_origin_token1,
      sym_offset,
  [523] = 1,
    ACTIONS(164), 1,
      anon_sym_COMMA,
  [527] = 1,
    ACTIONS(166), 1,
      aux_sym_text_token1,
  [531] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [535] = 1,
    ACTIONS(170), 1,
      anon_sym_COMMA,
  [539] = 1,
    ACTIONS(172), 1,
      anon_sym_COMMA,
  [543] = 1,
    ACTIONS(174), 1,
      anon_sym_AT,
  [547] = 1,
    ACTIONS(19), 1,
      sym_offset,
  [551] = 1,
    ACTIONS(176), 1,
      anon_sym_COMMA,
  [555] = 1,
    ACTIONS(178), 1,
      aux_sym_origin_token1,
  [559] = 1,
    ACTIONS(180), 1,
      aux_sym_anchor_token1,
  [563] = 1,
    ACTIONS(182), 1,
      aux_sym_anchor_token1,
  [567] = 1,
    ACTIONS(184), 1,
      sym_width,
  [571] = 1,
    ACTIONS(186), 1,
      aux_sym_origin_token1,
  [575] = 1,
    ACTIONS(188), 1,
      sym_height,
  [579] = 1,
    ACTIONS(190), 1,
      aux_sym_anchor_token1,
  [583] = 1,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
  [587] = 1,
    ACTIONS(194), 1,
      aux_sym_anchor_token1,
  [591] = 1,
    ACTIONS(196), 1,
      anon_sym_COMMA,
  [595] = 1,
    ACTIONS(198), 1,
      sym_name,
  [599] = 1,
    ACTIONS(200), 1,
      sym_name,
  [603] = 1,
    ACTIONS(202), 1,
      sym_name,
  [607] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 238,
  [SMALL_STATE(19)] = 245,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 266,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 309,
  [SMALL_STATE(28)] = 316,
  [SMALL_STATE(29)] = 323,
  [SMALL_STATE(30)] = 330,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 344,
  [SMALL_STATE(33)] = 351,
  [SMALL_STATE(34)] = 358,
  [SMALL_STATE(35)] = 365,
  [SMALL_STATE(36)] = 372,
  [SMALL_STATE(37)] = 379,
  [SMALL_STATE(38)] = 388,
  [SMALL_STATE(39)] = 395,
  [SMALL_STATE(40)] = 402,
  [SMALL_STATE(41)] = 409,
  [SMALL_STATE(42)] = 416,
  [SMALL_STATE(43)] = 423,
  [SMALL_STATE(44)] = 430,
  [SMALL_STATE(45)] = 437,
  [SMALL_STATE(46)] = 444,
  [SMALL_STATE(47)] = 452,
  [SMALL_STATE(48)] = 460,
  [SMALL_STATE(49)] = 468,
  [SMALL_STATE(50)] = 475,
  [SMALL_STATE(51)] = 480,
  [SMALL_STATE(52)] = 485,
  [SMALL_STATE(53)] = 492,
  [SMALL_STATE(54)] = 499,
  [SMALL_STATE(55)] = 506,
  [SMALL_STATE(56)] = 513,
  [SMALL_STATE(57)] = 518,
  [SMALL_STATE(58)] = 523,
  [SMALL_STATE(59)] = 527,
  [SMALL_STATE(60)] = 531,
  [SMALL_STATE(61)] = 535,
  [SMALL_STATE(62)] = 539,
  [SMALL_STATE(63)] = 543,
  [SMALL_STATE(64)] = 547,
  [SMALL_STATE(65)] = 551,
  [SMALL_STATE(66)] = 555,
  [SMALL_STATE(67)] = 559,
  [SMALL_STATE(68)] = 563,
  [SMALL_STATE(69)] = 567,
  [SMALL_STATE(70)] = 571,
  [SMALL_STATE(71)] = 575,
  [SMALL_STATE(72)] = 579,
  [SMALL_STATE(73)] = 583,
  [SMALL_STATE(74)] = 587,
  [SMALL_STATE(75)] = 591,
  [SMALL_STATE(76)] = 595,
  [SMALL_STATE(77)] = 599,
  [SMALL_STATE(78)] = 603,
  [SMALL_STATE(79)] = 607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(47),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(54),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
