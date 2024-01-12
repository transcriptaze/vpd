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
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_panel = 23,
  anon_sym_svg = 24,
  anon_sym_dark = 25,
  aux_sym_name_token1 = 26,
  sym_height = 27,
  sym_width = 28,
  sym_fontsize = 29,
  anon_sym_left = 30,
  anon_sym_centre = 31,
  anon_sym_center = 32,
  anon_sym_right = 33,
  anon_sym_guide = 34,
  aux_sym_identifier_token1 = 35,
  anon_sym_vertical = 36,
  anon_sym_horizontal = 37,
  anon_sym_top = 38,
  anon_sym_middle = 39,
  anon_sym_bottom = 40,
  sym_offset = 41,
  anon_sym_DQUOTE = 42,
  aux_sym__string_token1 = 43,
  aux_sym_absolute_token1 = 44,
  sym_command = 45,
  sym_new = 46,
  sym__entity = 47,
  sym_module = 48,
  sym_input = 49,
  sym_output = 50,
  sym_parameter = 51,
  sym_light = 52,
  sym_widget = 53,
  sym_label = 54,
  sym__component = 55,
  sym_set = 56,
  sym_origin = 57,
  sym__originx = 58,
  sym__originy = 59,
  sym_background = 60,
  sym_load = 61,
  sym_export = 62,
  sym_panel = 63,
  sym_svg = 64,
  sym_name = 65,
  sym_part = 66,
  sym_font = 67,
  sym_halign = 68,
  sym_guide = 69,
  sym_identifier = 70,
  sym_vertical = 71,
  sym_horizontal = 72,
  sym_geometry = 73,
  sym_guideline = 74,
  sym__string = 75,
  sym_absolute = 76,
  sym_relative = 77,
  sym_x = 78,
  sym_y = 79,
  aux_sym_command_repeat1 = 80,
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
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [aux_sym_name_token1] = "name_token1",
  [sym_height] = "height",
  [sym_width] = "width",
  [sym_fontsize] = "fontsize",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_guide] = "guide",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
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
  [sym_panel] = "panel",
  [sym_svg] = "svg",
  [sym_name] = "name",
  [sym_part] = "part",
  [sym_font] = "font",
  [sym_halign] = "halign",
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
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [sym_fontsize] = sym_fontsize,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_guide] = anon_sym_guide,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
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
  [sym_panel] = sym_panel,
  [sym_svg] = sym_svg,
  [sym_name] = sym_name,
  [sym_part] = sym_part,
  [sym_font] = sym_font,
  [sym_halign] = sym_halign,
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
  [anon_sym_panel] = {
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
  [sym_fontsize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_centre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
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
  [sym_panel] = {
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
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym_halign] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 7,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 24,
  [31] = 31,
  [32] = 9,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 11,
  [37] = 37,
  [38] = 10,
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
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 119,
  [127] = 117,
  [128] = 115,
  [129] = 118,
  [130] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(209);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(87);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'h') ADVANCE(319);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == 'v') ADVANCE(303);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(234);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(234);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'H') ADVANCE(234);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(235);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == 'H') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 27:
      if (lookahead == '5') ADVANCE(110);
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(156);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 176:
      if (lookahead == 'w') ADVANCE(219);
      END_STATE();
    case 177:
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 178:
      if (lookahead == 'z') ADVANCE(128);
      END_STATE();
    case 179:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(182)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 205:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 206:
      if (eof) ADVANCE(209);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(206)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 207:
      if (eof) ADVANCE(209);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(207)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(126);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(208)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(110);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'g') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'h') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(110);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 208},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 206},
  [6] = {.lex_state = 206},
  [7] = {.lex_state = 206},
  [8] = {.lex_state = 208},
  [9] = {.lex_state = 206},
  [10] = {.lex_state = 206},
  [11] = {.lex_state = 206},
  [12] = {.lex_state = 208},
  [13] = {.lex_state = 208},
  [14] = {.lex_state = 208},
  [15] = {.lex_state = 208},
  [16] = {.lex_state = 208},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 208},
  [19] = {.lex_state = 208},
  [20] = {.lex_state = 208},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 208},
  [24] = {.lex_state = 208},
  [25] = {.lex_state = 207},
  [26] = {.lex_state = 208},
  [27] = {.lex_state = 208},
  [28] = {.lex_state = 207},
  [29] = {.lex_state = 207},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 207},
  [33] = {.lex_state = 208},
  [34] = {.lex_state = 208},
  [35] = {.lex_state = 208},
  [36] = {.lex_state = 207},
  [37] = {.lex_state = 208},
  [38] = {.lex_state = 207},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 208},
  [41] = {.lex_state = 208},
  [42] = {.lex_state = 208},
  [43] = {.lex_state = 208},
  [44] = {.lex_state = 208},
  [45] = {.lex_state = 208},
  [46] = {.lex_state = 208},
  [47] = {.lex_state = 208},
  [48] = {.lex_state = 208},
  [49] = {.lex_state = 208},
  [50] = {.lex_state = 208},
  [51] = {.lex_state = 208},
  [52] = {.lex_state = 208},
  [53] = {.lex_state = 208},
  [54] = {.lex_state = 208},
  [55] = {.lex_state = 208},
  [56] = {.lex_state = 208},
  [57] = {.lex_state = 208},
  [58] = {.lex_state = 208},
  [59] = {.lex_state = 208},
  [60] = {.lex_state = 208},
  [61] = {.lex_state = 208},
  [62] = {.lex_state = 208},
  [63] = {.lex_state = 208},
  [64] = {.lex_state = 208},
  [65] = {.lex_state = 208},
  [66] = {.lex_state = 208},
  [67] = {.lex_state = 208},
  [68] = {.lex_state = 208},
  [69] = {.lex_state = 208},
  [70] = {.lex_state = 208},
  [71] = {.lex_state = 208},
  [72] = {.lex_state = 208},
  [73] = {.lex_state = 208},
  [74] = {.lex_state = 208},
  [75] = {.lex_state = 208},
  [76] = {.lex_state = 208},
  [77] = {.lex_state = 208},
  [78] = {.lex_state = 208},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 28},
  [102] = {.lex_state = 208},
  [103] = {.lex_state = 208},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 206},
  [109] = {.lex_state = 208},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 206},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 206},
  [120] = {.lex_state = 182},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 206},
  [127] = {.lex_state = 206},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 206},
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
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [sym_fontsize] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(123),
    [sym_new] = STATE(14),
    [sym_set] = STATE(14),
    [sym_load] = STATE(14),
    [sym_export] = STATE(14),
    [aux_sym_command_repeat1] = STATE(14),
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
    STATE(41), 9,
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
    ACTIONS(33), 1,
      aux_sym_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_vertical,
    ACTIONS(37), 1,
      anon_sym_horizontal,
    ACTIONS(39), 1,
      sym_offset,
    STATE(107), 1,
      sym_identifier,
    STATE(69), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(31), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [67] = 6,
    ACTIONS(33), 1,
      aux_sym_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_vertical,
    ACTIONS(37), 1,
      anon_sym_horizontal,
    STATE(3), 1,
      sym_identifier,
    STATE(46), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(31), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [95] = 7,
    ACTIONS(45), 1,
      aux_sym_name_token1,
    ACTIONS(47), 1,
      sym_fontsize,
    STATE(12), 1,
      sym_font,
    STATE(65), 1,
      sym_halign,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(43), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [124] = 7,
    ACTIONS(45), 1,
      aux_sym_name_token1,
    ACTIONS(55), 1,
      sym_fontsize,
    STATE(8), 1,
      sym_font,
    STATE(45), 1,
      sym_halign,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(49), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(53), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [153] = 3,
    ACTIONS(61), 1,
      sym_offset,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(59), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [173] = 4,
    ACTIONS(65), 1,
      sym_fontsize,
    STATE(44), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [194] = 2,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(71), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [211] = 2,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(75), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [228] = 2,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(79), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [245] = 4,
    ACTIONS(83), 1,
      sym_fontsize,
    STATE(55), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [266] = 7,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_new,
    ACTIONS(93), 1,
      anon_sym_set,
    ACTIONS(96), 1,
      anon_sym_load,
    ACTIONS(99), 1,
      anon_sym_export,
    STATE(13), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [292] = 7,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_comment,
    STATE(13), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [318] = 3,
    STATE(43), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [336] = 3,
    STATE(44), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [354] = 2,
    ACTIONS(110), 1,
      sym_offset,
    ACTIONS(108), 10,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [370] = 3,
    STATE(45), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [388] = 1,
    ACTIONS(112), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      sym_fontsize,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [402] = 3,
    STATE(55), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [420] = 5,
    ACTIONS(114), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      aux_sym_absolute_token1,
    STATE(124), 1,
      sym_x,
    STATE(5), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(116), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [441] = 5,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      aux_sym_absolute_token1,
    STATE(105), 1,
      sym_x,
    STATE(29), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(116), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [462] = 2,
    ACTIONS(126), 1,
      sym_offset,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [475] = 2,
    ACTIONS(130), 1,
      sym_width,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      sym_height,
  [488] = 3,
    ACTIONS(132), 1,
      sym_offset,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [503] = 2,
    ACTIONS(136), 1,
      sym_offset,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [516] = 3,
    ACTIONS(140), 1,
      anon_sym_light,
    ACTIONS(142), 1,
      anon_sym_dark,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [531] = 4,
    ACTIONS(148), 1,
      aux_sym_name_token1,
    STATE(47), 1,
      sym_part,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [548] = 4,
    ACTIONS(148), 1,
      aux_sym_name_token1,
    STATE(74), 1,
      sym_part,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [565] = 2,
    ACTIONS(128), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(130), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [577] = 2,
    ACTIONS(154), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(156), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [589] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(71), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [601] = 1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [611] = 1,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [621] = 2,
    ACTIONS(164), 1,
      sym_offset,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [633] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [645] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [657] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(75), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [669] = 2,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [681] = 1,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [690] = 1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [699] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [708] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [717] = 1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [726] = 1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [735] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [744] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [753] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [762] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [771] = 1,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [780] = 1,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [789] = 1,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [798] = 1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [807] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [816] = 1,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [825] = 1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [834] = 1,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [843] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [852] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [861] = 1,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [870] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [879] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [888] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [897] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [906] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [915] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [924] = 1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [933] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [942] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [951] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [960] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [969] = 1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [978] = 1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [987] = 1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [996] = 1,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1005] = 1,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1014] = 1,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1023] = 1,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1032] = 2,
    STATE(28), 1,
      sym_y,
    ACTIONS(240), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1042] = 5,
    ACTIONS(242), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      aux_sym__originx_token1,
    ACTIONS(246), 1,
      aux_sym__originy_token1,
    STATE(110), 1,
      sym__originy,
    STATE(111), 1,
      sym__originx,
  [1058] = 2,
    STATE(6), 1,
      sym_y,
    ACTIONS(248), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1068] = 3,
    ACTIONS(250), 1,
      anon_sym_origin,
    ACTIONS(252), 1,
      anon_sym_AT,
    ACTIONS(254), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1079] = 3,
    ACTIONS(256), 1,
      anon_sym_origin,
    ACTIONS(258), 1,
      anon_sym_AT,
    ACTIONS(260), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1090] = 3,
    ACTIONS(262), 1,
      anon_sym_origin,
    ACTIONS(264), 1,
      anon_sym_background,
    STATE(56), 2,
      sym_origin,
      sym_background,
  [1101] = 4,
    ACTIONS(266), 1,
      sym_rgb,
    ACTIONS(268), 1,
      sym_rgba,
    ACTIONS(270), 1,
      aux_sym_name_token1,
    STATE(50), 1,
      sym_name,
  [1114] = 2,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1122] = 3,
    ACTIONS(276), 1,
      aux_sym_name_token1,
    STATE(22), 1,
      sym_name,
    STATE(71), 1,
      sym__component,
  [1132] = 3,
    ACTIONS(276), 1,
      aux_sym_name_token1,
    STATE(22), 1,
      sym_name,
    STATE(73), 1,
      sym__component,
  [1142] = 3,
    ACTIONS(276), 1,
      aux_sym_name_token1,
    STATE(22), 1,
      sym_name,
    STATE(72), 1,
      sym__component,
  [1152] = 3,
    ACTIONS(276), 1,
      aux_sym_name_token1,
    STATE(22), 1,
      sym_name,
    STATE(54), 1,
      sym__component,
  [1162] = 3,
    ACTIONS(276), 1,
      aux_sym_name_token1,
    STATE(22), 1,
      sym_name,
    STATE(42), 1,
      sym__component,
  [1172] = 2,
    ACTIONS(278), 1,
      anon_sym_AT,
    ACTIONS(280), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1180] = 1,
    ACTIONS(282), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1185] = 2,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      sym_offset,
  [1192] = 1,
    ACTIONS(288), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1197] = 1,
    ACTIONS(290), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1202] = 1,
    ACTIONS(292), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1207] = 2,
    ACTIONS(294), 1,
      anon_sym_svg,
    STATE(51), 1,
      sym_svg,
  [1214] = 2,
    ACTIONS(296), 1,
      anon_sym_panel,
    STATE(68), 1,
      sym_panel,
  [1221] = 2,
    ACTIONS(270), 1,
      aux_sym_name_token1,
    STATE(103), 1,
      sym_name,
  [1228] = 2,
    ACTIONS(244), 1,
      aux_sym__originx_token1,
    STATE(59), 1,
      sym__originx,
  [1235] = 2,
    ACTIONS(246), 1,
      aux_sym__originy_token1,
    STATE(59), 1,
      sym__originy,
  [1242] = 2,
    ACTIONS(298), 1,
      sym_height,
    ACTIONS(300), 1,
      sym_width,
  [1249] = 2,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym__string,
  [1256] = 1,
    ACTIONS(304), 1,
      anon_sym_COMMA,
  [1260] = 1,
    ACTIONS(306), 1,
      sym_rgb,
  [1264] = 1,
    ACTIONS(39), 1,
      sym_offset,
  [1268] = 1,
    ACTIONS(308), 1,
      aux_sym_absolute_token1,
  [1272] = 1,
    ACTIONS(310), 1,
      sym_width,
  [1276] = 1,
    ACTIONS(312), 1,
      anon_sym_COMMA,
  [1280] = 1,
    ACTIONS(314), 1,
      anon_sym_COMMA,
  [1284] = 1,
    ACTIONS(316), 1,
      aux_sym_origin_token1,
  [1288] = 1,
    ACTIONS(318), 1,
      anon_sym_COMMA,
  [1292] = 1,
    ACTIONS(320), 1,
      aux_sym_origin_token1,
  [1296] = 1,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [1300] = 1,
    ACTIONS(306), 1,
      sym_rgba,
  [1304] = 1,
    ACTIONS(324), 1,
      aux_sym_absolute_token1,
  [1308] = 1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
  [1312] = 1,
    ACTIONS(328), 1,
      aux_sym_absolute_token1,
  [1316] = 1,
    ACTIONS(330), 1,
      aux_sym__string_token1,
  [1320] = 1,
    ACTIONS(332), 1,
      anon_sym_COMMA,
  [1324] = 1,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
  [1328] = 1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [1332] = 1,
    ACTIONS(338), 1,
      anon_sym_COMMA,
  [1336] = 1,
    ACTIONS(340), 1,
      anon_sym_script,
  [1340] = 1,
    ACTIONS(342), 1,
      aux_sym_absolute_token1,
  [1344] = 1,
    ACTIONS(344), 1,
      aux_sym_absolute_token1,
  [1348] = 1,
    ACTIONS(346), 1,
      anon_sym_COMMA,
  [1352] = 1,
    ACTIONS(348), 1,
      anon_sym_COMMA,
  [1356] = 1,
    ACTIONS(350), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 211,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 318,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 354,
  [SMALL_STATE(18)] = 370,
  [SMALL_STATE(19)] = 388,
  [SMALL_STATE(20)] = 402,
  [SMALL_STATE(21)] = 420,
  [SMALL_STATE(22)] = 441,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 475,
  [SMALL_STATE(25)] = 488,
  [SMALL_STATE(26)] = 503,
  [SMALL_STATE(27)] = 516,
  [SMALL_STATE(28)] = 531,
  [SMALL_STATE(29)] = 548,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 577,
  [SMALL_STATE(32)] = 589,
  [SMALL_STATE(33)] = 601,
  [SMALL_STATE(34)] = 611,
  [SMALL_STATE(35)] = 621,
  [SMALL_STATE(36)] = 633,
  [SMALL_STATE(37)] = 645,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 669,
  [SMALL_STATE(40)] = 681,
  [SMALL_STATE(41)] = 690,
  [SMALL_STATE(42)] = 699,
  [SMALL_STATE(43)] = 708,
  [SMALL_STATE(44)] = 717,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 735,
  [SMALL_STATE(47)] = 744,
  [SMALL_STATE(48)] = 753,
  [SMALL_STATE(49)] = 762,
  [SMALL_STATE(50)] = 771,
  [SMALL_STATE(51)] = 780,
  [SMALL_STATE(52)] = 789,
  [SMALL_STATE(53)] = 798,
  [SMALL_STATE(54)] = 807,
  [SMALL_STATE(55)] = 816,
  [SMALL_STATE(56)] = 825,
  [SMALL_STATE(57)] = 834,
  [SMALL_STATE(58)] = 843,
  [SMALL_STATE(59)] = 852,
  [SMALL_STATE(60)] = 861,
  [SMALL_STATE(61)] = 870,
  [SMALL_STATE(62)] = 879,
  [SMALL_STATE(63)] = 888,
  [SMALL_STATE(64)] = 897,
  [SMALL_STATE(65)] = 906,
  [SMALL_STATE(66)] = 915,
  [SMALL_STATE(67)] = 924,
  [SMALL_STATE(68)] = 933,
  [SMALL_STATE(69)] = 942,
  [SMALL_STATE(70)] = 951,
  [SMALL_STATE(71)] = 960,
  [SMALL_STATE(72)] = 969,
  [SMALL_STATE(73)] = 978,
  [SMALL_STATE(74)] = 987,
  [SMALL_STATE(75)] = 996,
  [SMALL_STATE(76)] = 1005,
  [SMALL_STATE(77)] = 1014,
  [SMALL_STATE(78)] = 1023,
  [SMALL_STATE(79)] = 1032,
  [SMALL_STATE(80)] = 1042,
  [SMALL_STATE(81)] = 1058,
  [SMALL_STATE(82)] = 1068,
  [SMALL_STATE(83)] = 1079,
  [SMALL_STATE(84)] = 1090,
  [SMALL_STATE(85)] = 1101,
  [SMALL_STATE(86)] = 1114,
  [SMALL_STATE(87)] = 1122,
  [SMALL_STATE(88)] = 1132,
  [SMALL_STATE(89)] = 1142,
  [SMALL_STATE(90)] = 1152,
  [SMALL_STATE(91)] = 1162,
  [SMALL_STATE(92)] = 1172,
  [SMALL_STATE(93)] = 1180,
  [SMALL_STATE(94)] = 1185,
  [SMALL_STATE(95)] = 1192,
  [SMALL_STATE(96)] = 1197,
  [SMALL_STATE(97)] = 1202,
  [SMALL_STATE(98)] = 1207,
  [SMALL_STATE(99)] = 1214,
  [SMALL_STATE(100)] = 1221,
  [SMALL_STATE(101)] = 1228,
  [SMALL_STATE(102)] = 1235,
  [SMALL_STATE(103)] = 1242,
  [SMALL_STATE(104)] = 1249,
  [SMALL_STATE(105)] = 1256,
  [SMALL_STATE(106)] = 1260,
  [SMALL_STATE(107)] = 1264,
  [SMALL_STATE(108)] = 1268,
  [SMALL_STATE(109)] = 1272,
  [SMALL_STATE(110)] = 1276,
  [SMALL_STATE(111)] = 1280,
  [SMALL_STATE(112)] = 1284,
  [SMALL_STATE(113)] = 1288,
  [SMALL_STATE(114)] = 1292,
  [SMALL_STATE(115)] = 1296,
  [SMALL_STATE(116)] = 1300,
  [SMALL_STATE(117)] = 1304,
  [SMALL_STATE(118)] = 1308,
  [SMALL_STATE(119)] = 1312,
  [SMALL_STATE(120)] = 1316,
  [SMALL_STATE(121)] = 1320,
  [SMALL_STATE(122)] = 1324,
  [SMALL_STATE(123)] = 1328,
  [SMALL_STATE(124)] = 1332,
  [SMALL_STATE(125)] = 1336,
  [SMALL_STATE(126)] = 1340,
  [SMALL_STATE(127)] = 1344,
  [SMALL_STATE(128)] = 1348,
  [SMALL_STATE(129)] = 1352,
  [SMALL_STATE(130)] = 1356,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(125),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(99),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [336] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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
