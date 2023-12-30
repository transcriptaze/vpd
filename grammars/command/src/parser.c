#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  anon_sym_output = 4,
  aux_sym_parameter_token1 = 5,
  anon_sym_set = 6,
  anon_sym_export = 7,
  anon_sym_svg = 8,
  anon_sym_light = 9,
  anon_sym_dark = 10,
  anon_sym_origin = 11,
  anon_sym_COMMA = 12,
  anon_sym_AT = 13,
  aux_sym_origin_token1 = 14,
  anon_sym_left = 15,
  anon_sym_centre = 16,
  anon_sym_center = 17,
  anon_sym_right = 18,
  anon_sym_top = 19,
  anon_sym_middle = 20,
  anon_sym_bottom = 21,
  sym_name = 22,
  sym_height = 23,
  sym_width = 24,
  anon_sym_label = 25,
  anon_sym_guide = 26,
  sym_identifier = 27,
  anon_sym_vertical = 28,
  anon_sym_horizontal = 29,
  sym_offset = 30,
  anon_sym_DQUOTE = 31,
  aux_sym_text_token1 = 32,
  aux_sym_anchor_token1 = 33,
  sym_command = 34,
  sym_new = 35,
  sym__entity = 36,
  sym_module = 37,
  sym_input = 38,
  sym_output = 39,
  sym_parameter = 40,
  sym_set = 41,
  sym_export = 42,
  sym__exportable = 43,
  sym_svg = 44,
  sym__attribute = 45,
  sym_origin = 46,
  sym_x = 47,
  sym_y = 48,
  sym_label = 49,
  sym_guide = 50,
  sym_vertical = 51,
  sym_horizontal = 52,
  sym_geometry = 53,
  sym_guideline = 54,
  sym_text = 55,
  sym_anchor = 56,
  sym_absolute = 57,
  sym__xy = 58,
  aux_sym_command_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
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
  [sym_output] = "output",
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
  [sym__xy] = "_xy",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
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
  [sym_output] = sym_output,
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
  [sym__xy] = sym__xy,
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
  [anon_sym_output] = {
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
  [sym_output] = {
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
    .visible = false,
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
  [80] = 80,
  [81] = 81,
  [82] = 82,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'v') ADVANCE(31);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(106);
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
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'H') ADVANCE(123);
      if (lookahead == 'U') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'H') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(189);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(77);
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
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(103);
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
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(189);
      if (lookahead == 'm') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 107:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
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
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
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
      if (lookahead == 'm') ADVANCE(137);
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
      if (lookahead == 'p') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
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
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
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
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 192:
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
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
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
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
    STATE(35), 4,
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
    STATE(30), 4,
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
  [53] = 7,
    ACTIONS(23), 1,
      anon_sym_module,
    ACTIONS(25), 1,
      anon_sym_input,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(29), 1,
      aux_sym_parameter_token1,
    ACTIONS(31), 1,
      anon_sym_label,
    ACTIONS(33), 1,
      anon_sym_guide,
    STATE(21), 7,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_label,
      sym_guide,
  [81] = 5,
    ACTIONS(35), 1,
      anon_sym_AT,
    STATE(74), 1,
      sym_y,
    STATE(76), 1,
      sym_x,
    ACTIONS(39), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [102] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_new,
    ACTIONS(46), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_export,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [121] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [140] = 4,
    ACTIONS(54), 1,
      anon_sym_AT,
    STATE(68), 1,
      sym_x,
    STATE(40), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [157] = 4,
    ACTIONS(54), 1,
      anon_sym_AT,
    STATE(68), 1,
      sym_x,
    STATE(18), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [174] = 4,
    ACTIONS(54), 1,
      anon_sym_AT,
    STATE(68), 1,
      sym_x,
    STATE(42), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [191] = 2,
    ACTIONS(58), 2,
      anon_sym_light,
      anon_sym_dark,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [202] = 2,
    ACTIONS(62), 1,
      sym_offset,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [213] = 2,
    ACTIONS(66), 1,
      sym_offset,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [224] = 2,
    STATE(33), 1,
      sym_x,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [234] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [242] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [250] = 2,
    ACTIONS(74), 1,
      sym_offset,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [260] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [267] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [274] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [281] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [288] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [295] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [302] = 1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [309] = 1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [316] = 1,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [323] = 1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [330] = 3,
    ACTIONS(96), 1,
      anon_sym_origin,
    ACTIONS(98), 1,
      anon_sym_AT,
    ACTIONS(100), 2,
      aux_sym_origin_token1,
      sym_offset,
  [341] = 3,
    ACTIONS(102), 1,
      anon_sym_origin,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(106), 2,
      aux_sym_origin_token1,
      sym_offset,
  [352] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [359] = 1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [366] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [373] = 1,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [380] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [387] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [394] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [401] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [408] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [415] = 2,
    STATE(31), 1,
      sym_y,
    ACTIONS(39), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [424] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [431] = 1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [438] = 1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [445] = 1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [452] = 2,
    STATE(33), 1,
      sym_y,
    ACTIONS(39), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [461] = 1,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [468] = 1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [475] = 1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [482] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [489] = 2,
    ACTIONS(142), 1,
      anon_sym_AT,
    ACTIONS(144), 2,
      aux_sym_origin_token1,
      sym_offset,
  [497] = 2,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(148), 2,
      aux_sym_origin_token1,
      sym_offset,
  [505] = 2,
    ACTIONS(150), 1,
      anon_sym_origin,
    STATE(22), 2,
      sym__attribute,
      sym_origin,
  [513] = 1,
    ACTIONS(152), 2,
      aux_sym_origin_token1,
      sym_offset,
  [518] = 2,
    ACTIONS(154), 1,
      anon_sym_module,
    STATE(24), 1,
      sym__exportable,
  [525] = 1,
    ACTIONS(156), 2,
      aux_sym_origin_token1,
      sym_offset,
  [530] = 2,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_text,
  [537] = 2,
    ACTIONS(160), 1,
      anon_sym_svg,
    STATE(36), 1,
      sym_svg,
  [544] = 2,
    ACTIONS(162), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_anchor,
  [551] = 1,
    ACTIONS(164), 2,
      aux_sym_origin_token1,
      sym_offset,
  [556] = 1,
    ACTIONS(166), 2,
      aux_sym_origin_token1,
      sym_offset,
  [561] = 1,
    ACTIONS(168), 1,
      sym_name,
  [565] = 1,
    ACTIONS(170), 1,
      sym_width,
  [569] = 1,
    ACTIONS(172), 1,
      aux_sym_anchor_token1,
  [573] = 1,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
  [577] = 1,
    ACTIONS(176), 1,
      anon_sym_COMMA,
  [581] = 1,
    ACTIONS(178), 1,
      sym_name,
  [585] = 1,
    ACTIONS(180), 1,
      anon_sym_AT,
  [589] = 1,
    ACTIONS(182), 1,
      anon_sym_COMMA,
  [593] = 1,
    ACTIONS(184), 1,
      anon_sym_COMMA,
  [597] = 1,
    ACTIONS(186), 1,
      aux_sym_anchor_token1,
  [601] = 1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
  [605] = 1,
    ACTIONS(19), 1,
      sym_offset,
  [609] = 1,
    ACTIONS(190), 1,
      sym_name,
  [613] = 1,
    ACTIONS(192), 1,
      aux_sym_origin_token1,
  [617] = 1,
    ACTIONS(194), 1,
      anon_sym_COMMA,
  [621] = 1,
    ACTIONS(196), 1,
      aux_sym_anchor_token1,
  [625] = 1,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [629] = 1,
    ACTIONS(200), 1,
      aux_sym_anchor_token1,
  [633] = 1,
    ACTIONS(202), 1,
      aux_sym_origin_token1,
  [637] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [641] = 1,
    ACTIONS(206), 1,
      aux_sym_text_token1,
  [645] = 1,
    ACTIONS(208), 1,
      sym_height,
  [649] = 1,
    ACTIONS(210), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 267,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 281,
  [SMALL_STATE(22)] = 288,
  [SMALL_STATE(23)] = 295,
  [SMALL_STATE(24)] = 302,
  [SMALL_STATE(25)] = 309,
  [SMALL_STATE(26)] = 316,
  [SMALL_STATE(27)] = 323,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 373,
  [SMALL_STATE(34)] = 380,
  [SMALL_STATE(35)] = 387,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 408,
  [SMALL_STATE(39)] = 415,
  [SMALL_STATE(40)] = 424,
  [SMALL_STATE(41)] = 431,
  [SMALL_STATE(42)] = 438,
  [SMALL_STATE(43)] = 445,
  [SMALL_STATE(44)] = 452,
  [SMALL_STATE(45)] = 461,
  [SMALL_STATE(46)] = 468,
  [SMALL_STATE(47)] = 475,
  [SMALL_STATE(48)] = 482,
  [SMALL_STATE(49)] = 489,
  [SMALL_STATE(50)] = 497,
  [SMALL_STATE(51)] = 505,
  [SMALL_STATE(52)] = 513,
  [SMALL_STATE(53)] = 518,
  [SMALL_STATE(54)] = 525,
  [SMALL_STATE(55)] = 530,
  [SMALL_STATE(56)] = 537,
  [SMALL_STATE(57)] = 544,
  [SMALL_STATE(58)] = 551,
  [SMALL_STATE(59)] = 556,
  [SMALL_STATE(60)] = 561,
  [SMALL_STATE(61)] = 565,
  [SMALL_STATE(62)] = 569,
  [SMALL_STATE(63)] = 573,
  [SMALL_STATE(64)] = 577,
  [SMALL_STATE(65)] = 581,
  [SMALL_STATE(66)] = 585,
  [SMALL_STATE(67)] = 589,
  [SMALL_STATE(68)] = 593,
  [SMALL_STATE(69)] = 597,
  [SMALL_STATE(70)] = 601,
  [SMALL_STATE(71)] = 605,
  [SMALL_STATE(72)] = 609,
  [SMALL_STATE(73)] = 613,
  [SMALL_STATE(74)] = 617,
  [SMALL_STATE(75)] = 621,
  [SMALL_STATE(76)] = 625,
  [SMALL_STATE(77)] = 629,
  [SMALL_STATE(78)] = 633,
  [SMALL_STATE(79)] = 637,
  [SMALL_STATE(80)] = 641,
  [SMALL_STATE(81)] = 645,
  [SMALL_STATE(82)] = 649,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(51),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
