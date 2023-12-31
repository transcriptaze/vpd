#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  anon_sym_output = 4,
  aux_sym_parameter_token1 = 5,
  anon_sym_light = 6,
  anon_sym_set = 7,
  anon_sym_export = 8,
  anon_sym_svg = 9,
  anon_sym_dark = 10,
  anon_sym_origin = 11,
  anon_sym_COMMA = 12,
  anon_sym_AT = 13,
  aux_sym_origin_token1 = 14,
  aux_sym__originx_token1 = 15,
  aux_sym__originy_token1 = 16,
  sym_name = 17,
  sym_height = 18,
  sym_width = 19,
  anon_sym_label = 20,
  anon_sym_guide = 21,
  aux_sym_identifier_token1 = 22,
  anon_sym_vertical = 23,
  anon_sym_horizontal = 24,
  anon_sym_left = 25,
  anon_sym_centre = 26,
  anon_sym_center = 27,
  anon_sym_right = 28,
  anon_sym_top = 29,
  anon_sym_middle = 30,
  anon_sym_bottom = 31,
  sym_offset = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_text_token1 = 34,
  aux_sym_anchor_token1 = 35,
  sym_command = 36,
  sym_new = 37,
  sym__entity = 38,
  sym_module = 39,
  sym_input = 40,
  sym_output = 41,
  sym_parameter = 42,
  sym_light = 43,
  sym_set = 44,
  sym_export = 45,
  sym__exportable = 46,
  sym_svg = 47,
  sym__attribute = 48,
  sym_origin = 49,
  sym__originx = 50,
  sym__originy = 51,
  sym_label = 52,
  sym_guide = 53,
  sym_identifier = 54,
  sym_vertical = 55,
  sym_horizontal = 56,
  sym_geometry = 57,
  sym_guideline = 58,
  sym_text = 59,
  sym_anchor = 60,
  sym_absolute = 61,
  sym__xy = 62,
  sym_x = 63,
  sym_y = 64,
  aux_sym_command_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_light] = "light",
  [anon_sym_set] = "set",
  [anon_sym_export] = "export",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [anon_sym_origin] = "origin",
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [aux_sym_origin_token1] = "offset",
  [aux_sym__originx_token1] = "reference",
  [aux_sym__originy_token1] = "reference",
  [sym_name] = "name",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [anon_sym_guide] = "guide",
  [aux_sym_identifier_token1] = "identifier_token1",
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
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_set] = "set",
  [sym_export] = "export",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
  [sym__attribute] = "_attribute",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
  [sym_label] = "label",
  [sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_guideline] = "guideline",
  [sym_text] = "text",
  [sym_anchor] = "anchor",
  [sym_absolute] = "absolute",
  [sym__xy] = "_xy",
  [sym_x] = "x",
  [sym_y] = "y",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym__originx_token1] = aux_sym__originx_token1,
  [aux_sym__originy_token1] = aux_sym__originx_token1,
  [sym_name] = sym_name,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_guide] = anon_sym_guide,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_left] = aux_sym__originx_token1,
  [anon_sym_centre] = aux_sym__originx_token1,
  [anon_sym_center] = aux_sym__originx_token1,
  [anon_sym_right] = aux_sym__originx_token1,
  [anon_sym_top] = aux_sym__originx_token1,
  [anon_sym_middle] = aux_sym__originx_token1,
  [anon_sym_bottom] = aux_sym__originx_token1,
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
  [sym_light] = sym_light,
  [sym_set] = sym_set,
  [sym_export] = sym_export,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
  [sym__attribute] = sym__attribute,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
  [sym_label] = sym_label,
  [sym_guide] = sym_guide,
  [sym_identifier] = sym_identifier,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_guideline] = sym_guideline,
  [sym_text] = sym_text,
  [sym_anchor] = sym_anchor,
  [sym_absolute] = sym_absolute,
  [sym__xy] = sym__xy,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
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
  [anon_sym_light] = {
    .visible = true,
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
  [aux_sym__originx_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__originy_token1] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
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
  [sym_light] = {
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
  [sym__originx] = {
    .visible = true,
    .named = true,
  },
  [sym__originy] = {
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
  [sym_identifier] = {
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
  [sym_x] = {
    .visible = true,
    .named = true,
  },
  [sym_y] = {
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
    [0] = aux_sym__originx_token1,
  },
  [2] = {
    [1] = sym_light,
  },
  [3] = {
    [1] = sym_absolute,
  },
  [4] = {
    [2] = sym_absolute,
  },
  [5] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [6] = {
    [3] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    aux_sym__originx_token1,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(36);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(153);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 128:
      if (lookahead == 'z') ADVANCE(86);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 133:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 220:
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
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 17},
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
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
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
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 131},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym__originx_token1] = ACTIONS(1),
    [aux_sym__originy_token1] = ACTIONS(1),
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
    [sym_command] = STATE(68),
    [sym_new] = STATE(10),
    [sym_set] = STATE(10),
    [sym_export] = STATE(10),
    [aux_sym_command_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_vertical,
    ACTIONS(15), 1,
      anon_sym_horizontal,
    ACTIONS(19), 1,
      sym_offset,
    STATE(71), 1,
      sym_identifier,
    STATE(44), 4,
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
  [31] = 8,
    ACTIONS(21), 1,
      anon_sym_module,
    ACTIONS(23), 1,
      anon_sym_input,
    ACTIONS(25), 1,
      anon_sym_output,
    ACTIONS(27), 1,
      aux_sym_parameter_token1,
    ACTIONS(29), 1,
      anon_sym_light,
    ACTIONS(31), 1,
      anon_sym_label,
    ACTIONS(33), 1,
      anon_sym_guide,
    STATE(46), 8,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_label,
      sym_guide,
  [63] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_vertical,
    ACTIONS(15), 1,
      anon_sym_horizontal,
    STATE(2), 1,
      sym_identifier,
    STATE(35), 4,
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
  [91] = 2,
    ACTIONS(37), 1,
      sym_offset,
    ACTIONS(35), 10,
      aux_sym_identifier_token1,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [107] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_x,
    STATE(21), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [125] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_x,
    STATE(43), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [143] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_x,
    STATE(47), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [161] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_x,
    STATE(45), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [179] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(11), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [198] = 5,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_new,
    ACTIONS(50), 1,
      anon_sym_set,
    ACTIONS(53), 1,
      anon_sym_export,
    STATE(11), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [217] = 2,
    ACTIONS(58), 1,
      sym_offset,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [228] = 3,
    ACTIONS(62), 1,
      anon_sym_light,
    ACTIONS(64), 1,
      anon_sym_dark,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [241] = 2,
    ACTIONS(68), 1,
      sym_offset,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [252] = 5,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(72), 1,
      aux_sym__originx_token1,
    ACTIONS(74), 1,
      aux_sym__originy_token1,
    STATE(67), 1,
      sym__originy,
    STATE(84), 1,
      sym__originx,
  [268] = 1,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [276] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [284] = 2,
    STATE(36), 1,
      sym_y,
    ACTIONS(80), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [294] = 2,
    ACTIONS(84), 1,
      sym_offset,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [304] = 2,
    ACTIONS(88), 1,
      sym_offset,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [314] = 1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [321] = 1,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [328] = 1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [335] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [342] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [349] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [356] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [363] = 1,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [370] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [377] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [384] = 1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [391] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [398] = 3,
    ACTIONS(114), 1,
      anon_sym_origin,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 2,
      aux_sym_origin_token1,
      sym_offset,
  [409] = 3,
    ACTIONS(120), 1,
      anon_sym_origin,
    ACTIONS(122), 1,
      anon_sym_AT,
    ACTIONS(124), 2,
      aux_sym_origin_token1,
      sym_offset,
  [420] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [427] = 1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [434] = 1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [441] = 1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [448] = 1,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [455] = 1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [462] = 1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [469] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [476] = 1,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [483] = 1,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [490] = 1,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [497] = 1,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [504] = 1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [511] = 1,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [518] = 1,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [525] = 1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [532] = 1,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [539] = 1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [546] = 2,
    ACTIONS(162), 1,
      anon_sym_AT,
    ACTIONS(164), 2,
      aux_sym_origin_token1,
      sym_offset,
  [554] = 2,
    ACTIONS(166), 1,
      anon_sym_AT,
    ACTIONS(168), 2,
      aux_sym_origin_token1,
      sym_offset,
  [562] = 2,
    ACTIONS(170), 1,
      anon_sym_origin,
    STATE(27), 2,
      sym__attribute,
      sym_origin,
  [570] = 1,
    ACTIONS(172), 2,
      aux_sym_origin_token1,
      sym_offset,
  [575] = 1,
    ACTIONS(174), 2,
      aux_sym_origin_token1,
      sym_offset,
  [580] = 1,
    ACTIONS(176), 2,
      aux_sym_origin_token1,
      sym_offset,
  [585] = 2,
    ACTIONS(178), 1,
      anon_sym_svg,
    STATE(39), 1,
      sym_svg,
  [592] = 2,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_text,
  [599] = 2,
    ACTIONS(74), 1,
      aux_sym__originy_token1,
    STATE(22), 1,
      sym__originy,
  [606] = 2,
    ACTIONS(72), 1,
      aux_sym__originx_token1,
    STATE(22), 1,
      sym__originx,
  [613] = 1,
    ACTIONS(182), 2,
      aux_sym_origin_token1,
      sym_offset,
  [618] = 2,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      sym_offset,
  [625] = 2,
    ACTIONS(188), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_anchor,
  [632] = 2,
    ACTIONS(190), 1,
      anon_sym_module,
    STATE(29), 1,
      sym__exportable,
  [639] = 1,
    ACTIONS(192), 1,
      anon_sym_COMMA,
  [643] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [647] = 1,
    ACTIONS(196), 1,
      anon_sym_COMMA,
  [651] = 1,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [655] = 1,
    ACTIONS(19), 1,
      sym_offset,
  [659] = 1,
    ACTIONS(200), 1,
      anon_sym_AT,
  [663] = 1,
    ACTIONS(202), 1,
      anon_sym_COMMA,
  [667] = 1,
    ACTIONS(204), 1,
      anon_sym_COMMA,
  [671] = 1,
    ACTIONS(206), 1,
      sym_name,
  [675] = 1,
    ACTIONS(208), 1,
      aux_sym_anchor_token1,
  [679] = 1,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
  [683] = 1,
    ACTIONS(212), 1,
      anon_sym_COMMA,
  [687] = 1,
    ACTIONS(214), 1,
      aux_sym_anchor_token1,
  [691] = 1,
    ACTIONS(216), 1,
      aux_sym_origin_token1,
  [695] = 1,
    ACTIONS(218), 1,
      sym_width,
  [699] = 1,
    ACTIONS(220), 1,
      aux_sym_anchor_token1,
  [703] = 1,
    ACTIONS(222), 1,
      sym_name,
  [707] = 1,
    ACTIONS(224), 1,
      anon_sym_COMMA,
  [711] = 1,
    ACTIONS(226), 1,
      aux_sym_anchor_token1,
  [715] = 1,
    ACTIONS(228), 1,
      aux_sym_origin_token1,
  [719] = 1,
    ACTIONS(230), 1,
      aux_sym_text_token1,
  [723] = 1,
    ACTIONS(232), 1,
      sym_height,
  [727] = 1,
    ACTIONS(234), 1,
      sym_name,
  [731] = 1,
    ACTIONS(236), 1,
      sym_name,
  [735] = 1,
    ACTIONS(238), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 268,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 304,
  [SMALL_STATE(21)] = 314,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 335,
  [SMALL_STATE(25)] = 342,
  [SMALL_STATE(26)] = 349,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 363,
  [SMALL_STATE(29)] = 370,
  [SMALL_STATE(30)] = 377,
  [SMALL_STATE(31)] = 384,
  [SMALL_STATE(32)] = 391,
  [SMALL_STATE(33)] = 398,
  [SMALL_STATE(34)] = 409,
  [SMALL_STATE(35)] = 420,
  [SMALL_STATE(36)] = 427,
  [SMALL_STATE(37)] = 434,
  [SMALL_STATE(38)] = 441,
  [SMALL_STATE(39)] = 448,
  [SMALL_STATE(40)] = 455,
  [SMALL_STATE(41)] = 462,
  [SMALL_STATE(42)] = 469,
  [SMALL_STATE(43)] = 476,
  [SMALL_STATE(44)] = 483,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 497,
  [SMALL_STATE(47)] = 504,
  [SMALL_STATE(48)] = 511,
  [SMALL_STATE(49)] = 518,
  [SMALL_STATE(50)] = 525,
  [SMALL_STATE(51)] = 532,
  [SMALL_STATE(52)] = 539,
  [SMALL_STATE(53)] = 546,
  [SMALL_STATE(54)] = 554,
  [SMALL_STATE(55)] = 562,
  [SMALL_STATE(56)] = 570,
  [SMALL_STATE(57)] = 575,
  [SMALL_STATE(58)] = 580,
  [SMALL_STATE(59)] = 585,
  [SMALL_STATE(60)] = 592,
  [SMALL_STATE(61)] = 599,
  [SMALL_STATE(62)] = 606,
  [SMALL_STATE(63)] = 613,
  [SMALL_STATE(64)] = 618,
  [SMALL_STATE(65)] = 625,
  [SMALL_STATE(66)] = 632,
  [SMALL_STATE(67)] = 639,
  [SMALL_STATE(68)] = 643,
  [SMALL_STATE(69)] = 647,
  [SMALL_STATE(70)] = 651,
  [SMALL_STATE(71)] = 655,
  [SMALL_STATE(72)] = 659,
  [SMALL_STATE(73)] = 663,
  [SMALL_STATE(74)] = 667,
  [SMALL_STATE(75)] = 671,
  [SMALL_STATE(76)] = 675,
  [SMALL_STATE(77)] = 679,
  [SMALL_STATE(78)] = 683,
  [SMALL_STATE(79)] = 687,
  [SMALL_STATE(80)] = 691,
  [SMALL_STATE(81)] = 695,
  [SMALL_STATE(82)] = 699,
  [SMALL_STATE(83)] = 703,
  [SMALL_STATE(84)] = 707,
  [SMALL_STATE(85)] = 711,
  [SMALL_STATE(86)] = 715,
  [SMALL_STATE(87)] = 719,
  [SMALL_STATE(88)] = 723,
  [SMALL_STATE(89)] = 727,
  [SMALL_STATE(90)] = 731,
  [SMALL_STATE(91)] = 735,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(55),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(66),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
