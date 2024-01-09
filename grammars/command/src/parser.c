#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_module = 3,
  anon_sym_input = 4,
  anon_sym_output = 5,
  aux_sym_parameter_token1 = 6,
  anon_sym_light = 7,
  anon_sym_widget = 8,
  anon_sym_label = 9,
  anon_sym_COMMA = 10,
  anon_sym_set = 11,
  anon_sym_origin = 12,
  anon_sym_AT = 13,
  aux_sym_origin_token1 = 14,
  aux_sym__originx_token1 = 15,
  aux_sym__originy_token1 = 16,
  anon_sym_background = 17,
  sym_rgb = 18,
  sym_rgba = 19,
  anon_sym_export = 20,
  anon_sym_svg = 21,
  anon_sym_dark = 22,
  aux_sym_name_token1 = 23,
  sym_height = 24,
  sym_width = 25,
  anon_sym_guide = 26,
  aux_sym_identifier_token1 = 27,
  anon_sym_vertical = 28,
  anon_sym_horizontal = 29,
  anon_sym_left = 30,
  anon_sym_centre = 31,
  anon_sym_center = 32,
  anon_sym_right = 33,
  anon_sym_top = 34,
  anon_sym_middle = 35,
  anon_sym_bottom = 36,
  sym_offset = 37,
  anon_sym_DQUOTE = 38,
  aux_sym__string_token1 = 39,
  aux_sym_absolute_token1 = 40,
  sym_command = 41,
  sym_new = 42,
  sym__entity = 43,
  sym_module = 44,
  sym_input = 45,
  sym_output = 46,
  sym_parameter = 47,
  sym_light = 48,
  sym_widget = 49,
  sym_label = 50,
  sym__component = 51,
  sym_set = 52,
  sym_origin = 53,
  sym__originx = 54,
  sym__originy = 55,
  sym_background = 56,
  sym_export = 57,
  sym__exportable = 58,
  sym_svg = 59,
  sym_name = 60,
  sym_part = 61,
  sym_guide = 62,
  sym_identifier = 63,
  sym_vertical = 64,
  sym_horizontal = 65,
  sym_geometry = 66,
  sym_guideline = 67,
  sym__string = 68,
  sym_absolute = 69,
  sym_relative = 70,
  sym__xy = 71,
  sym_x = 72,
  sym_y = 73,
  aux_sym_command_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_label] = "label",
  [anon_sym_COMMA] = ",",
  [anon_sym_set] = "set",
  [anon_sym_origin] = "origin",
  [anon_sym_AT] = "@",
  [aux_sym_origin_token1] = "offset",
  [aux_sym__originx_token1] = "reference",
  [aux_sym__originy_token1] = "reference",
  [anon_sym_background] = "background",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [anon_sym_export] = "export",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [aux_sym_name_token1] = "name_token1",
  [sym_height] = "height",
  [sym_width] = "width",
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
  [aux_sym__string_token1] = "string",
  [aux_sym_absolute_token1] = "x",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym__entity] = "_entity",
  [sym_module] = "module",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_widget] = "widget",
  [sym_label] = "label",
  [sym__component] = "_component",
  [sym_set] = "set",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
  [sym_background] = "background",
  [sym_export] = "export",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
  [sym_name] = "name",
  [sym_part] = "part",
  [sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_guideline] = "guideline",
  [sym__string] = "_string",
  [sym_absolute] = "absolute",
  [sym_relative] = "relative",
  [sym__xy] = "_xy",
  [sym_x] = "x",
  [sym_y] = "y",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym__originx_token1] = aux_sym__originx_token1,
  [aux_sym__originy_token1] = aux_sym__originx_token1,
  [anon_sym_background] = anon_sym_background,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
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
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym_absolute_token1] = sym_x,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym__entity] = sym__entity,
  [sym_module] = sym_module,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym_label] = sym_label,
  [sym__component] = sym__component,
  [sym_set] = sym_set,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
  [sym_background] = sym_background,
  [sym_export] = sym_export,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
  [sym_name] = sym_name,
  [sym_part] = sym_part,
  [sym_guide] = sym_guide,
  [sym_identifier] = sym_identifier,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_guideline] = sym_guideline,
  [sym__string] = sym__string,
  [sym_absolute] = sym_absolute,
  [sym_relative] = sym_relative,
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
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_widget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
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
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [sym_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_rgba] = {
    .visible = true,
    .named = true,
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
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
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
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_absolute_token1] = {
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
  [sym_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__component] = {
    .visible = false,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
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
  [sym_background] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
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
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_relative] = {
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
    [2] = sym_y,
  },
  [5] = {
    [2] = sym_absolute,
  },
  [6] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [7] = {
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
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 24,
  [31] = 31,
  [32] = 23,
  [33] = 33,
  [34] = 10,
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
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 95,
  [110] = 96,
  [111] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'v') ADVANCE(56);
      if (lookahead == 'w') ADVANCE(80);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '\'') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == 'U') ADVANCE(239);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '8') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(240);
      if (lookahead == 'U') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(162);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 159:
      if (lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 160:
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 161:
      if (lookahead == 'z') ADVANCE(116);
      END_STATE();
    case 162:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 188:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 189:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 't') ADVANCE(113);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(101);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(101);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 190},
  [8] = {.lex_state = 190},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 189},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 190},
  [14] = {.lex_state = 190},
  [15] = {.lex_state = 189},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 189},
  [18] = {.lex_state = 190},
  [19] = {.lex_state = 190},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 190},
  [22] = {.lex_state = 190},
  [23] = {.lex_state = 189},
  [24] = {.lex_state = 189},
  [25] = {.lex_state = 190},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 190},
  [28] = {.lex_state = 190},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 190},
  [31] = {.lex_state = 190},
  [32] = {.lex_state = 190},
  [33] = {.lex_state = 190},
  [34] = {.lex_state = 190},
  [35] = {.lex_state = 190},
  [36] = {.lex_state = 190},
  [37] = {.lex_state = 190},
  [38] = {.lex_state = 190},
  [39] = {.lex_state = 190},
  [40] = {.lex_state = 190},
  [41] = {.lex_state = 190},
  [42] = {.lex_state = 190},
  [43] = {.lex_state = 190},
  [44] = {.lex_state = 190},
  [45] = {.lex_state = 190},
  [46] = {.lex_state = 190},
  [47] = {.lex_state = 190},
  [48] = {.lex_state = 190},
  [49] = {.lex_state = 190},
  [50] = {.lex_state = 190},
  [51] = {.lex_state = 190},
  [52] = {.lex_state = 190},
  [53] = {.lex_state = 190},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 190},
  [56] = {.lex_state = 190},
  [57] = {.lex_state = 190},
  [58] = {.lex_state = 190},
  [59] = {.lex_state = 190},
  [60] = {.lex_state = 190},
  [61] = {.lex_state = 190},
  [62] = {.lex_state = 190},
  [63] = {.lex_state = 190},
  [64] = {.lex_state = 190},
  [65] = {.lex_state = 190},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 190},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 190},
  [70] = {.lex_state = 190},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 190},
  [79] = {.lex_state = 190},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 190},
  [85] = {.lex_state = 190},
  [86] = {.lex_state = 190},
  [87] = {.lex_state = 190},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 190},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 190},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 164},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym__originx_token1] = ACTIONS(1),
    [aux_sym__originy_token1] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
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
    [aux_sym_absolute_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(104),
    [sym_new] = STATE(7),
    [sym_set] = STATE(7),
    [sym_export] = STATE(7),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(15), 1,
      anon_sym_input,
    ACTIONS(17), 1,
      anon_sym_output,
    ACTIONS(19), 1,
      aux_sym_parameter_token1,
    ACTIONS(21), 1,
      anon_sym_light,
    ACTIONS(23), 1,
      anon_sym_widget,
    ACTIONS(25), 1,
      anon_sym_label,
    ACTIONS(27), 1,
      anon_sym_guide,
    STATE(28), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [36] = 7,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(31), 1,
      anon_sym_vertical,
    ACTIONS(33), 1,
      anon_sym_horizontal,
    ACTIONS(37), 1,
      sym_offset,
    STATE(100), 1,
      sym_identifier,
    STATE(62), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(35), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [67] = 6,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(31), 1,
      anon_sym_vertical,
    ACTIONS(33), 1,
      anon_sym_horizontal,
    STATE(3), 1,
      sym_identifier,
    STATE(43), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(35), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [95] = 2,
    ACTIONS(41), 1,
      sym_offset,
    ACTIONS(39), 10,
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
  [111] = 5,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_absolute_token1,
    STATE(106), 1,
      sym_x,
    STATE(56), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(45), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [132] = 6,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_comment,
    STATE(8), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [154] = 6,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_new,
    ACTIONS(61), 1,
      anon_sym_set,
    ACTIONS(64), 1,
      anon_sym_export,
    STATE(8), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [176] = 4,
    ACTIONS(67), 1,
      anon_sym_AT,
    STATE(90), 1,
      sym_x,
    STATE(15), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(45), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [194] = 2,
    ACTIONS(69), 2,
      anon_sym_AT,
      sym_height,
    ACTIONS(71), 6,
      sym_width,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [207] = 3,
    ACTIONS(77), 1,
      sym_offset,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(75), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [221] = 2,
    ACTIONS(79), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(81), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [233] = 2,
    ACTIONS(85), 1,
      sym_offset,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_export,
  [245] = 2,
    ACTIONS(89), 1,
      sym_offset,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_export,
  [257] = 4,
    ACTIONS(95), 1,
      aux_sym_name_token1,
    STATE(55), 1,
      sym_part,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [273] = 3,
    ACTIONS(99), 1,
      anon_sym_light,
    ACTIONS(101), 1,
      anon_sym_dark,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [287] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [298] = 1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_export,
  [307] = 1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_export,
  [316] = 2,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [327] = 2,
    ACTIONS(115), 1,
      sym_offset,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [338] = 2,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [349] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [360] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(125), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [371] = 2,
    ACTIONS(129), 1,
      sym_offset,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [382] = 2,
    STATE(44), 1,
      sym_y,
    ACTIONS(131), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [392] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [400] = 1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [408] = 5,
    ACTIONS(137), 1,
      anon_sym_AT,
    ACTIONS(139), 1,
      aux_sym__originx_token1,
    ACTIONS(141), 1,
      aux_sym__originy_token1,
    STATE(89), 1,
      sym__originy,
    STATE(98), 1,
      sym__originx,
  [424] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [432] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [440] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [448] = 1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [456] = 1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [464] = 1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [472] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [480] = 1,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [488] = 1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [496] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [504] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [512] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [520] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [528] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [536] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [544] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [552] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [560] = 1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [568] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [576] = 1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [584] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [592] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [600] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [608] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [616] = 2,
    STATE(17), 1,
      sym_y,
    ACTIONS(183), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [626] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [634] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [642] = 1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [650] = 1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [658] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [666] = 1,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [674] = 1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [682] = 1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [690] = 1,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [698] = 1,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [706] = 1,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [714] = 4,
    ACTIONS(207), 1,
      sym_rgb,
    ACTIONS(209), 1,
      sym_rgba,
    ACTIONS(211), 1,
      aux_sym_name_token1,
    STATE(47), 1,
      sym_name,
  [727] = 3,
    ACTIONS(213), 1,
      anon_sym_origin,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(217), 2,
      aux_sym_origin_token1,
      sym_offset,
  [738] = 3,
    ACTIONS(219), 1,
      anon_sym_origin,
    ACTIONS(221), 1,
      anon_sym_background,
    STATE(31), 2,
      sym_origin,
      sym_background,
  [749] = 3,
    ACTIONS(223), 1,
      anon_sym_origin,
    ACTIONS(225), 1,
      anon_sym_AT,
    ACTIONS(227), 2,
      aux_sym_origin_token1,
      sym_offset,
  [760] = 2,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(231), 2,
      aux_sym_origin_token1,
      sym_offset,
  [768] = 3,
    ACTIONS(233), 1,
      aux_sym_name_token1,
    STATE(9), 1,
      sym_name,
    STATE(39), 1,
      sym__component,
  [778] = 3,
    ACTIONS(233), 1,
      aux_sym_name_token1,
    STATE(9), 1,
      sym_name,
    STATE(35), 1,
      sym__component,
  [788] = 3,
    ACTIONS(233), 1,
      aux_sym_name_token1,
    STATE(9), 1,
      sym_name,
    STATE(36), 1,
      sym__component,
  [798] = 3,
    ACTIONS(233), 1,
      aux_sym_name_token1,
    STATE(9), 1,
      sym_name,
    STATE(37), 1,
      sym__component,
  [808] = 2,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(237), 2,
      aux_sym_origin_token1,
      sym_offset,
  [816] = 3,
    ACTIONS(233), 1,
      aux_sym_name_token1,
    STATE(9), 1,
      sym_name,
    STATE(38), 1,
      sym__component,
  [826] = 2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      sym_offset,
  [833] = 1,
    ACTIONS(243), 2,
      aux_sym_origin_token1,
      sym_offset,
  [838] = 1,
    ACTIONS(245), 2,
      aux_sym_origin_token1,
      sym_offset,
  [843] = 2,
    ACTIONS(247), 1,
      anon_sym_svg,
    STATE(48), 1,
      sym_svg,
  [850] = 2,
    ACTIONS(249), 1,
      anon_sym_module,
    STATE(33), 1,
      sym__exportable,
  [857] = 2,
    ACTIONS(251), 1,
      sym_height,
    ACTIONS(253), 1,
      sym_width,
  [864] = 2,
    ACTIONS(233), 1,
      aux_sym_name_token1,
    STATE(82), 1,
      sym_name,
  [871] = 2,
    ACTIONS(141), 1,
      aux_sym__originy_token1,
    STATE(49), 1,
      sym__originy,
  [878] = 2,
    ACTIONS(139), 1,
      aux_sym__originx_token1,
    STATE(49), 1,
      sym__originx,
  [885] = 1,
    ACTIONS(255), 2,
      aux_sym_origin_token1,
      sym_offset,
  [890] = 1,
    ACTIONS(257), 2,
      aux_sym_origin_token1,
      sym_offset,
  [895] = 2,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym__string,
  [902] = 1,
    ACTIONS(261), 1,
      anon_sym_COMMA,
  [906] = 1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
  [910] = 1,
    ACTIONS(265), 1,
      aux_sym_absolute_token1,
  [914] = 1,
    ACTIONS(267), 1,
      aux_sym_origin_token1,
  [918] = 1,
    ACTIONS(269), 1,
      sym_width,
  [922] = 1,
    ACTIONS(271), 1,
      sym_rgba,
  [926] = 1,
    ACTIONS(273), 1,
      aux_sym_absolute_token1,
  [930] = 1,
    ACTIONS(275), 1,
      anon_sym_COMMA,
  [934] = 1,
    ACTIONS(271), 1,
      sym_rgb,
  [938] = 1,
    ACTIONS(277), 1,
      anon_sym_COMMA,
  [942] = 1,
    ACTIONS(279), 1,
      aux_sym_origin_token1,
  [946] = 1,
    ACTIONS(37), 1,
      sym_offset,
  [950] = 1,
    ACTIONS(281), 1,
      aux_sym_absolute_token1,
  [954] = 1,
    ACTIONS(283), 1,
      aux_sym__string_token1,
  [958] = 1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
  [962] = 1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [966] = 1,
    ACTIONS(289), 1,
      anon_sym_COMMA,
  [970] = 1,
    ACTIONS(291), 1,
      anon_sym_COMMA,
  [974] = 1,
    ACTIONS(293), 1,
      anon_sym_COMMA,
  [978] = 1,
    ACTIONS(295), 1,
      anon_sym_COMMA,
  [982] = 1,
    ACTIONS(297), 1,
      aux_sym_absolute_token1,
  [986] = 1,
    ACTIONS(299), 1,
      anon_sym_COMMA,
  [990] = 1,
    ACTIONS(301), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 298,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 327,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 382,
  [SMALL_STATE(27)] = 392,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 408,
  [SMALL_STATE(30)] = 424,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 440,
  [SMALL_STATE(33)] = 448,
  [SMALL_STATE(34)] = 456,
  [SMALL_STATE(35)] = 464,
  [SMALL_STATE(36)] = 472,
  [SMALL_STATE(37)] = 480,
  [SMALL_STATE(38)] = 488,
  [SMALL_STATE(39)] = 496,
  [SMALL_STATE(40)] = 504,
  [SMALL_STATE(41)] = 512,
  [SMALL_STATE(42)] = 520,
  [SMALL_STATE(43)] = 528,
  [SMALL_STATE(44)] = 536,
  [SMALL_STATE(45)] = 544,
  [SMALL_STATE(46)] = 552,
  [SMALL_STATE(47)] = 560,
  [SMALL_STATE(48)] = 568,
  [SMALL_STATE(49)] = 576,
  [SMALL_STATE(50)] = 584,
  [SMALL_STATE(51)] = 592,
  [SMALL_STATE(52)] = 600,
  [SMALL_STATE(53)] = 608,
  [SMALL_STATE(54)] = 616,
  [SMALL_STATE(55)] = 626,
  [SMALL_STATE(56)] = 634,
  [SMALL_STATE(57)] = 642,
  [SMALL_STATE(58)] = 650,
  [SMALL_STATE(59)] = 658,
  [SMALL_STATE(60)] = 666,
  [SMALL_STATE(61)] = 674,
  [SMALL_STATE(62)] = 682,
  [SMALL_STATE(63)] = 690,
  [SMALL_STATE(64)] = 698,
  [SMALL_STATE(65)] = 706,
  [SMALL_STATE(66)] = 714,
  [SMALL_STATE(67)] = 727,
  [SMALL_STATE(68)] = 738,
  [SMALL_STATE(69)] = 749,
  [SMALL_STATE(70)] = 760,
  [SMALL_STATE(71)] = 768,
  [SMALL_STATE(72)] = 778,
  [SMALL_STATE(73)] = 788,
  [SMALL_STATE(74)] = 798,
  [SMALL_STATE(75)] = 808,
  [SMALL_STATE(76)] = 816,
  [SMALL_STATE(77)] = 826,
  [SMALL_STATE(78)] = 833,
  [SMALL_STATE(79)] = 838,
  [SMALL_STATE(80)] = 843,
  [SMALL_STATE(81)] = 850,
  [SMALL_STATE(82)] = 857,
  [SMALL_STATE(83)] = 864,
  [SMALL_STATE(84)] = 871,
  [SMALL_STATE(85)] = 878,
  [SMALL_STATE(86)] = 885,
  [SMALL_STATE(87)] = 890,
  [SMALL_STATE(88)] = 895,
  [SMALL_STATE(89)] = 902,
  [SMALL_STATE(90)] = 906,
  [SMALL_STATE(91)] = 910,
  [SMALL_STATE(92)] = 914,
  [SMALL_STATE(93)] = 918,
  [SMALL_STATE(94)] = 922,
  [SMALL_STATE(95)] = 926,
  [SMALL_STATE(96)] = 930,
  [SMALL_STATE(97)] = 934,
  [SMALL_STATE(98)] = 938,
  [SMALL_STATE(99)] = 942,
  [SMALL_STATE(100)] = 946,
  [SMALL_STATE(101)] = 950,
  [SMALL_STATE(102)] = 954,
  [SMALL_STATE(103)] = 958,
  [SMALL_STATE(104)] = 962,
  [SMALL_STATE(105)] = 966,
  [SMALL_STATE(106)] = 970,
  [SMALL_STATE(107)] = 974,
  [SMALL_STATE(108)] = 978,
  [SMALL_STATE(109)] = 982,
  [SMALL_STATE(110)] = 986,
  [SMALL_STATE(111)] = 990,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(68),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(81),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [287] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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
