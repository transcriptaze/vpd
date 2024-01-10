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
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_load = 20,
  anon_sym_script = 21,
  anon_sym_export = 22,
  anon_sym_svg = 23,
  anon_sym_dark = 24,
  aux_sym_name_token1 = 25,
  sym_height = 26,
  sym_width = 27,
  anon_sym_guide = 28,
  aux_sym_identifier_token1 = 29,
  anon_sym_vertical = 30,
  anon_sym_horizontal = 31,
  anon_sym_left = 32,
  anon_sym_centre = 33,
  anon_sym_center = 34,
  anon_sym_right = 35,
  anon_sym_top = 36,
  anon_sym_middle = 37,
  anon_sym_bottom = 38,
  sym_offset = 39,
  anon_sym_DQUOTE = 40,
  aux_sym__string_token1 = 41,
  aux_sym_absolute_token1 = 42,
  sym_command = 43,
  sym_new = 44,
  sym__entity = 45,
  sym_module = 46,
  sym_input = 47,
  sym_output = 48,
  sym_parameter = 49,
  sym_light = 50,
  sym_widget = 51,
  sym_label = 52,
  sym__component = 53,
  sym_set = 54,
  sym_origin = 55,
  sym__originx = 56,
  sym__originy = 57,
  sym_background = 58,
  sym_load = 59,
  sym_export = 60,
  sym__exportable = 61,
  sym_svg = 62,
  sym_name = 63,
  sym_part = 64,
  sym_guide = 65,
  sym_identifier = 66,
  sym_vertical = 67,
  sym_horizontal = 68,
  sym_geometry = 69,
  sym_guideline = 70,
  sym__string = 71,
  sym_absolute = 72,
  sym_relative = 73,
  sym_x = 74,
  sym_y = 75,
  aux_sym_command_repeat1 = 76,
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
  [anon_sym_load] = "load",
  [anon_sym_script] = "script",
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
  [sym_load] = "load",
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
  [anon_sym_load] = anon_sym_load,
  [anon_sym_script] = anon_sym_script,
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
  [sym_load] = sym_load,
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
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
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
  [sym_load] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 10,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 17,
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
  [64] = 25,
  [65] = 18,
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
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 104,
  [114] = 97,
  [115] = 102,
  [116] = 106,
  [117] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(197);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(82);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == 'v') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(222);
      if (lookahead == 'U') ADVANCE(251);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'h') ADVANCE(223);
      if (lookahead == 'm') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '8') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'U') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '5') ADVANCE(168);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(236);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(251);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 165:
      if (lookahead == 'w') ADVANCE(207);
      END_STATE();
    case 166:
      if (lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 167:
      if (lookahead == 'z') ADVANCE(119);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 194:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 195:
      if (eof) ADVANCE(197);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(117);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(104);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(104);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 196},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 196},
  [7] = {.lex_state = 196},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 195},
  [11] = {.lex_state = 196},
  [12] = {.lex_state = 196},
  [13] = {.lex_state = 195},
  [14] = {.lex_state = 196},
  [15] = {.lex_state = 195},
  [16] = {.lex_state = 196},
  [17] = {.lex_state = 195},
  [18] = {.lex_state = 195},
  [19] = {.lex_state = 196},
  [20] = {.lex_state = 196},
  [21] = {.lex_state = 196},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 196},
  [25] = {.lex_state = 195},
  [26] = {.lex_state = 196},
  [27] = {.lex_state = 196},
  [28] = {.lex_state = 196},
  [29] = {.lex_state = 196},
  [30] = {.lex_state = 196},
  [31] = {.lex_state = 196},
  [32] = {.lex_state = 196},
  [33] = {.lex_state = 196},
  [34] = {.lex_state = 196},
  [35] = {.lex_state = 196},
  [36] = {.lex_state = 196},
  [37] = {.lex_state = 196},
  [38] = {.lex_state = 196},
  [39] = {.lex_state = 196},
  [40] = {.lex_state = 196},
  [41] = {.lex_state = 196},
  [42] = {.lex_state = 196},
  [43] = {.lex_state = 196},
  [44] = {.lex_state = 196},
  [45] = {.lex_state = 196},
  [46] = {.lex_state = 196},
  [47] = {.lex_state = 196},
  [48] = {.lex_state = 196},
  [49] = {.lex_state = 196},
  [50] = {.lex_state = 196},
  [51] = {.lex_state = 196},
  [52] = {.lex_state = 196},
  [53] = {.lex_state = 196},
  [54] = {.lex_state = 196},
  [55] = {.lex_state = 196},
  [56] = {.lex_state = 196},
  [57] = {.lex_state = 196},
  [58] = {.lex_state = 196},
  [59] = {.lex_state = 196},
  [60] = {.lex_state = 196},
  [61] = {.lex_state = 196},
  [62] = {.lex_state = 196},
  [63] = {.lex_state = 196},
  [64] = {.lex_state = 196},
  [65] = {.lex_state = 196},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 196},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 196},
  [81] = {.lex_state = 196},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 196},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 170},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 196},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
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
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
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
    [sym_command] = STATE(110),
    [sym_new] = STATE(7),
    [sym_set] = STATE(7),
    [sym_load] = STATE(7),
    [sym_export] = STATE(7),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      anon_sym_module,
    ACTIONS(17), 1,
      anon_sym_input,
    ACTIONS(19), 1,
      anon_sym_output,
    ACTIONS(21), 1,
      aux_sym_parameter_token1,
    ACTIONS(23), 1,
      anon_sym_light,
    ACTIONS(25), 1,
      anon_sym_widget,
    ACTIONS(27), 1,
      anon_sym_label,
    ACTIONS(29), 1,
      anon_sym_guide,
    STATE(46), 9,
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
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(33), 1,
      anon_sym_vertical,
    ACTIONS(35), 1,
      anon_sym_horizontal,
    ACTIONS(39), 1,
      sym_offset,
    STATE(99), 1,
      sym_identifier,
    STATE(63), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(37), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [67] = 6,
    ACTIONS(31), 1,
      aux_sym_identifier_token1,
    ACTIONS(33), 1,
      anon_sym_vertical,
    ACTIONS(35), 1,
      anon_sym_horizontal,
    STATE(3), 1,
      sym_identifier,
    STATE(39), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(37), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [95] = 2,
    ACTIONS(43), 1,
      sym_offset,
    ACTIONS(41), 10,
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
  [111] = 7,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_new,
    ACTIONS(53), 1,
      anon_sym_set,
    ACTIONS(56), 1,
      anon_sym_load,
    ACTIONS(59), 1,
      anon_sym_export,
    STATE(6), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [137] = 7,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_comment,
    STATE(6), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [163] = 5,
    ACTIONS(66), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      aux_sym_absolute_token1,
    STATE(103), 1,
      sym_x,
    STATE(15), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(68), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [184] = 5,
    ACTIONS(72), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      aux_sym_absolute_token1,
    STATE(107), 1,
      sym_x,
    STATE(58), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(68), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [205] = 3,
    ACTIONS(80), 1,
      sym_offset,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(78), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [220] = 3,
    ACTIONS(84), 1,
      anon_sym_light,
    ACTIONS(86), 1,
      anon_sym_dark,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [235] = 2,
    ACTIONS(90), 1,
      sym_offset,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [248] = 4,
    ACTIONS(96), 1,
      aux_sym_name_token1,
    STATE(55), 1,
      sym_part,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [265] = 2,
    ACTIONS(100), 1,
      sym_offset,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [278] = 4,
    ACTIONS(96), 1,
      aux_sym_name_token1,
    STATE(53), 1,
      sym_part,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [295] = 2,
    ACTIONS(108), 1,
      sym_width,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      sym_height,
  [308] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(112), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [320] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [332] = 2,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [344] = 1,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [354] = 2,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [366] = 2,
    ACTIONS(126), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(128), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [378] = 2,
    ACTIONS(106), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(108), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [390] = 2,
    ACTIONS(132), 1,
      sym_offset,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [402] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [414] = 2,
    ACTIONS(138), 1,
      sym_offset,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [426] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [436] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [445] = 1,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [454] = 1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [463] = 1,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [472] = 1,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [481] = 1,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [490] = 1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [499] = 1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [508] = 1,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [517] = 1,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [526] = 1,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [535] = 1,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [544] = 1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [553] = 1,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [562] = 1,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [571] = 1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [580] = 1,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [589] = 1,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [598] = 1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [607] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [616] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [625] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [634] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [643] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [652] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [661] = 1,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [670] = 1,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [679] = 1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [688] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [697] = 1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [706] = 1,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [715] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [724] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [733] = 1,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [742] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [751] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [760] = 1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [769] = 1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [778] = 2,
    STATE(45), 1,
      sym_y,
    ACTIONS(210), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [788] = 2,
    STATE(13), 1,
      sym_y,
    ACTIONS(212), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [798] = 5,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(216), 1,
      aux_sym__originx_token1,
    ACTIONS(218), 1,
      aux_sym__originy_token1,
    STATE(95), 1,
      sym__originy,
    STATE(96), 1,
      sym__originx,
  [814] = 3,
    ACTIONS(220), 1,
      anon_sym_origin,
    ACTIONS(222), 1,
      anon_sym_AT,
    ACTIONS(224), 2,
      aux_sym_origin_token1,
      sym_offset,
  [825] = 3,
    ACTIONS(226), 1,
      anon_sym_origin,
    ACTIONS(228), 1,
      anon_sym_AT,
    ACTIONS(230), 2,
      aux_sym_origin_token1,
      sym_offset,
  [836] = 4,
    ACTIONS(232), 1,
      sym_rgb,
    ACTIONS(234), 1,
      sym_rgba,
    ACTIONS(236), 1,
      aux_sym_name_token1,
    STATE(29), 1,
      sym_name,
  [849] = 3,
    ACTIONS(238), 1,
      anon_sym_origin,
    ACTIONS(240), 1,
      anon_sym_background,
    STATE(42), 2,
      sym_origin,
      sym_background,
  [860] = 3,
    ACTIONS(242), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(30), 1,
      sym__component,
  [870] = 2,
    ACTIONS(244), 1,
      anon_sym_AT,
    ACTIONS(246), 2,
      aux_sym_origin_token1,
      sym_offset,
  [878] = 3,
    ACTIONS(242), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(37), 1,
      sym__component,
  [888] = 3,
    ACTIONS(242), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(47), 1,
      sym__component,
  [898] = 3,
    ACTIONS(242), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(31), 1,
      sym__component,
  [908] = 3,
    ACTIONS(242), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(28), 1,
      sym__component,
  [918] = 2,
    ACTIONS(248), 1,
      anon_sym_AT,
    ACTIONS(250), 2,
      aux_sym_origin_token1,
      sym_offset,
  [926] = 2,
    ACTIONS(218), 1,
      aux_sym__originy_token1,
    STATE(35), 1,
      sym__originy,
  [933] = 2,
    ACTIONS(216), 1,
      aux_sym__originx_token1,
    STATE(35), 1,
      sym__originx,
  [940] = 1,
    ACTIONS(252), 2,
      aux_sym_origin_token1,
      sym_offset,
  [945] = 2,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym__string,
  [952] = 2,
    ACTIONS(256), 1,
      anon_sym_module,
    STATE(38), 1,
      sym__exportable,
  [959] = 1,
    ACTIONS(258), 2,
      aux_sym_origin_token1,
      sym_offset,
  [964] = 2,
    ACTIONS(236), 1,
      aux_sym_name_token1,
    STATE(90), 1,
      sym_name,
  [971] = 2,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      sym_offset,
  [978] = 2,
    ACTIONS(264), 1,
      anon_sym_svg,
    STATE(49), 1,
      sym_svg,
  [985] = 1,
    ACTIONS(266), 2,
      aux_sym_origin_token1,
      sym_offset,
  [990] = 2,
    ACTIONS(268), 1,
      sym_height,
    ACTIONS(270), 1,
      sym_width,
  [997] = 1,
    ACTIONS(272), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1002] = 1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
  [1006] = 1,
    ACTIONS(276), 1,
      aux_sym_origin_token1,
  [1010] = 1,
    ACTIONS(278), 1,
      aux_sym_origin_token1,
  [1014] = 1,
    ACTIONS(280), 1,
      anon_sym_COMMA,
  [1018] = 1,
    ACTIONS(282), 1,
      anon_sym_COMMA,
  [1022] = 1,
    ACTIONS(284), 1,
      aux_sym_absolute_token1,
  [1026] = 1,
    ACTIONS(286), 1,
      aux_sym__string_token1,
  [1030] = 1,
    ACTIONS(39), 1,
      sym_offset,
  [1034] = 1,
    ACTIONS(288), 1,
      sym_width,
  [1038] = 1,
    ACTIONS(290), 1,
      aux_sym_absolute_token1,
  [1042] = 1,
    ACTIONS(292), 1,
      anon_sym_COMMA,
  [1046] = 1,
    ACTIONS(294), 1,
      anon_sym_COMMA,
  [1050] = 1,
    ACTIONS(296), 1,
      aux_sym_absolute_token1,
  [1054] = 1,
    ACTIONS(298), 1,
      anon_sym_COMMA,
  [1058] = 1,
    ACTIONS(300), 1,
      anon_sym_COMMA,
  [1062] = 1,
    ACTIONS(302), 1,
      anon_sym_COMMA,
  [1066] = 1,
    ACTIONS(304), 1,
      sym_rgba,
  [1070] = 1,
    ACTIONS(304), 1,
      sym_rgb,
  [1074] = 1,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
  [1078] = 1,
    ACTIONS(308), 1,
      anon_sym_COMMA,
  [1082] = 1,
    ACTIONS(310), 1,
      anon_sym_script,
  [1086] = 1,
    ACTIONS(312), 1,
      aux_sym_absolute_token1,
  [1090] = 1,
    ACTIONS(314), 1,
      aux_sym_absolute_token1,
  [1094] = 1,
    ACTIONS(316), 1,
      anon_sym_COMMA,
  [1098] = 1,
    ACTIONS(318), 1,
      anon_sym_COMMA,
  [1102] = 1,
    ACTIONS(320), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 235,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 278,
  [SMALL_STATE(16)] = 295,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 344,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 378,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 402,
  [SMALL_STATE(26)] = 414,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 436,
  [SMALL_STATE(29)] = 445,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 472,
  [SMALL_STATE(33)] = 481,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 499,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 517,
  [SMALL_STATE(38)] = 526,
  [SMALL_STATE(39)] = 535,
  [SMALL_STATE(40)] = 544,
  [SMALL_STATE(41)] = 553,
  [SMALL_STATE(42)] = 562,
  [SMALL_STATE(43)] = 571,
  [SMALL_STATE(44)] = 580,
  [SMALL_STATE(45)] = 589,
  [SMALL_STATE(46)] = 598,
  [SMALL_STATE(47)] = 607,
  [SMALL_STATE(48)] = 616,
  [SMALL_STATE(49)] = 625,
  [SMALL_STATE(50)] = 634,
  [SMALL_STATE(51)] = 643,
  [SMALL_STATE(52)] = 652,
  [SMALL_STATE(53)] = 661,
  [SMALL_STATE(54)] = 670,
  [SMALL_STATE(55)] = 679,
  [SMALL_STATE(56)] = 688,
  [SMALL_STATE(57)] = 697,
  [SMALL_STATE(58)] = 706,
  [SMALL_STATE(59)] = 715,
  [SMALL_STATE(60)] = 724,
  [SMALL_STATE(61)] = 733,
  [SMALL_STATE(62)] = 742,
  [SMALL_STATE(63)] = 751,
  [SMALL_STATE(64)] = 760,
  [SMALL_STATE(65)] = 769,
  [SMALL_STATE(66)] = 778,
  [SMALL_STATE(67)] = 788,
  [SMALL_STATE(68)] = 798,
  [SMALL_STATE(69)] = 814,
  [SMALL_STATE(70)] = 825,
  [SMALL_STATE(71)] = 836,
  [SMALL_STATE(72)] = 849,
  [SMALL_STATE(73)] = 860,
  [SMALL_STATE(74)] = 870,
  [SMALL_STATE(75)] = 878,
  [SMALL_STATE(76)] = 888,
  [SMALL_STATE(77)] = 898,
  [SMALL_STATE(78)] = 908,
  [SMALL_STATE(79)] = 918,
  [SMALL_STATE(80)] = 926,
  [SMALL_STATE(81)] = 933,
  [SMALL_STATE(82)] = 940,
  [SMALL_STATE(83)] = 945,
  [SMALL_STATE(84)] = 952,
  [SMALL_STATE(85)] = 959,
  [SMALL_STATE(86)] = 964,
  [SMALL_STATE(87)] = 971,
  [SMALL_STATE(88)] = 978,
  [SMALL_STATE(89)] = 985,
  [SMALL_STATE(90)] = 990,
  [SMALL_STATE(91)] = 997,
  [SMALL_STATE(92)] = 1002,
  [SMALL_STATE(93)] = 1006,
  [SMALL_STATE(94)] = 1010,
  [SMALL_STATE(95)] = 1014,
  [SMALL_STATE(96)] = 1018,
  [SMALL_STATE(97)] = 1022,
  [SMALL_STATE(98)] = 1026,
  [SMALL_STATE(99)] = 1030,
  [SMALL_STATE(100)] = 1034,
  [SMALL_STATE(101)] = 1038,
  [SMALL_STATE(102)] = 1042,
  [SMALL_STATE(103)] = 1046,
  [SMALL_STATE(104)] = 1050,
  [SMALL_STATE(105)] = 1054,
  [SMALL_STATE(106)] = 1058,
  [SMALL_STATE(107)] = 1062,
  [SMALL_STATE(108)] = 1066,
  [SMALL_STATE(109)] = 1070,
  [SMALL_STATE(110)] = 1074,
  [SMALL_STATE(111)] = 1078,
  [SMALL_STATE(112)] = 1082,
  [SMALL_STATE(113)] = 1086,
  [SMALL_STATE(114)] = 1090,
  [SMALL_STATE(115)] = 1094,
  [SMALL_STATE(116)] = 1098,
  [SMALL_STATE(117)] = 1102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(72),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(112),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [306] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
