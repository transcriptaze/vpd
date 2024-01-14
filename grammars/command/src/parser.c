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
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 8

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_load = 4,
  anon_sym_project = 5,
  anon_sym_script = 6,
  anon_sym_save = 7,
  anon_sym_export = 8,
  anon_sym_module = 9,
  anon_sym_input = 10,
  anon_sym_output = 11,
  aux_sym_parameter_token1 = 12,
  anon_sym_light = 13,
  anon_sym_widget = 14,
  anon_sym_COMMA = 15,
  anon_sym_label = 16,
  aux_sym_font_token1 = 17,
  sym_fontsize = 18,
  anon_sym_left = 19,
  anon_sym_centre = 20,
  anon_sym_center = 21,
  anon_sym_right = 22,
  anon_sym_top = 23,
  anon_sym_middle = 24,
  anon_sym_baseline = 25,
  anon_sym_bottom = 26,
  anon_sym_origin = 27,
  anon_sym_AT = 28,
  aux_sym_origin_token1 = 29,
  aux_sym__originx_token1 = 30,
  aux_sym__originy_token1 = 31,
  anon_sym_background = 32,
  sym_rgb = 33,
  sym_rgba = 34,
  anon_sym_panel = 35,
  anon_sym_svg = 36,
  anon_sym_dark = 37,
  sym_height = 38,
  sym_width = 39,
  anon_sym_guide = 40,
  aux_sym_identifier_token1 = 41,
  anon_sym_vertical = 42,
  anon_sym_horizontal = 43,
  sym_offset = 44,
  anon_sym_DQUOTE = 45,
  aux_sym__string_token1 = 46,
  aux_sym_absolute_token1 = 47,
  sym_command = 48,
  sym_new = 49,
  sym_set = 50,
  sym_load = 51,
  sym_save = 52,
  sym_export = 53,
  sym__entity = 54,
  sym_module = 55,
  sym_input = 56,
  sym_output = 57,
  sym_parameter = 58,
  sym_light = 59,
  sym_widget = 60,
  sym__component = 61,
  sym_label = 62,
  sym_font = 63,
  sym__align = 64,
  sym_halign = 65,
  sym_valign = 66,
  sym_colour = 67,
  sym_origin = 68,
  sym__originx = 69,
  sym__originy = 70,
  sym_background = 71,
  sym_panel = 72,
  sym_svg = 73,
  sym_name = 74,
  sym_part = 75,
  sym_guide = 76,
  sym_identifier = 77,
  sym_vertical = 78,
  sym_horizontal = 79,
  sym_geometry = 80,
  sym_guideline = 81,
  sym__string = 82,
  sym_absolute = 83,
  sym_relative = 84,
  sym_x = 85,
  sym_y = 86,
  aux_sym_command_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_COMMA] = ",",
  [anon_sym_label] = "label",
  [aux_sym_font_token1] = "font_token1",
  [sym_fontsize] = "fontsize",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_baseline] = "baseline",
  [anon_sym_bottom] = "bottom",
  [anon_sym_origin] = "origin",
  [anon_sym_AT] = "@",
  [aux_sym_origin_token1] = "offset",
  [aux_sym__originx_token1] = "reference",
  [aux_sym__originy_token1] = "reference",
  [anon_sym_background] = "background",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_guide] = "guide",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [sym_offset] = "offset",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "string",
  [aux_sym_absolute_token1] = "x",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_load] = "load",
  [sym_save] = "save",
  [sym_export] = "export",
  [sym__entity] = "_entity",
  [sym_module] = "module",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_widget] = "widget",
  [sym__component] = "_component",
  [sym_label] = "label",
  [sym_font] = "font",
  [sym__align] = "_align",
  [sym_halign] = "halign",
  [sym_valign] = "valign",
  [sym_colour] = "colour",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
  [sym_background] = "background",
  [sym_panel] = "panel",
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
  [anon_sym_set] = anon_sym_set,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_label] = anon_sym_label,
  [aux_sym_font_token1] = aux_sym_font_token1,
  [sym_fontsize] = sym_fontsize,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym__originx_token1] = aux_sym__originx_token1,
  [aux_sym__originy_token1] = aux_sym__originx_token1,
  [anon_sym_background] = anon_sym_background,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_guide] = anon_sym_guide,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [sym_offset] = sym_offset,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym_absolute_token1] = sym_x,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_load] = sym_load,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
  [sym__entity] = sym__entity,
  [sym_module] = sym_module,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym__component] = sym__component,
  [sym_label] = sym_label,
  [sym_font] = sym_font,
  [sym__align] = sym__align,
  [sym_halign] = sym_halign,
  [sym_valign] = sym_valign,
  [sym_colour] = sym_colour,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
  [sym_background] = sym_background,
  [sym_panel] = sym_panel,
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
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_project] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_font_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_middle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_baseline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
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
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_save] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
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
  [sym__component] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym__align] = {
    .visible = false,
    .named = true,
  },
  [sym_halign] = {
    .visible = true,
    .named = true,
  },
  [sym_valign] = {
    .visible = true,
    .named = true,
  },
  [sym_colour] = {
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 10,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 13,
  [43] = 12,
  [44] = 11,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 32,
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
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 136,
  [144] = 140,
  [145] = 127,
  [146] = 134,
  [147] = 132,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ',') ADVANCE(238);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(95);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'v') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'U') ADVANCE(324);
      if (lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'U') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(326);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(194);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(121);
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(218);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'j') ADVANCE(60);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(323);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(377);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 190:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 191:
      if (lookahead == 'w') ADVANCE(219);
      END_STATE();
    case 192:
      if (lookahead == 'x') ADVANCE(149);
      END_STATE();
    case 193:
      if (lookahead == 'z') ADVANCE(140);
      END_STATE();
    case 194:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 212:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 213:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 214:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(214)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 215:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 216:
      if (eof) ADVANCE(217);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(121);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(121);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 216},
  [5] = {.lex_state = 216},
  [6] = {.lex_state = 216},
  [7] = {.lex_state = 216},
  [8] = {.lex_state = 216},
  [9] = {.lex_state = 216},
  [10] = {.lex_state = 214},
  [11] = {.lex_state = 214},
  [12] = {.lex_state = 214},
  [13] = {.lex_state = 214},
  [14] = {.lex_state = 216},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 216},
  [33] = {.lex_state = 215},
  [34] = {.lex_state = 215},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 215},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 215},
  [43] = {.lex_state = 215},
  [44] = {.lex_state = 215},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
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
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 41},
  [93] = {.lex_state = 28},
  [94] = {.lex_state = 216},
  [95] = {.lex_state = 216},
  [96] = {.lex_state = 41},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 28},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 214},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 214},
  [108] = {.lex_state = 214},
  [109] = {.lex_state = 214},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 216},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 28},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 214},
  [121] = {.lex_state = 214},
  [122] = {.lex_state = 197},
  [123] = {.lex_state = 216},
  [124] = {.lex_state = 214},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 214},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [sym_fontsize] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym__originx_token1] = ACTIONS(1),
    [aux_sym__originy_token1] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(139),
    [sym_new] = STATE(18),
    [sym_set] = STATE(18),
    [sym_load] = STATE(18),
    [sym_save] = STATE(18),
    [sym_export] = STATE(18),
    [aux_sym_command_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(11),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_export] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(21), 1,
      aux_sym_font_token1,
    ACTIONS(23), 1,
      sym_fontsize,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(4), 1,
      sym_font,
    STATE(22), 1,
      sym_halign,
    STATE(25), 1,
      sym_valign,
    STATE(31), 1,
      sym__align,
    STATE(60), 1,
      sym_colour,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(27), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(19), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [51] = 13,
    ACTIONS(21), 1,
      aux_sym_font_token1,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    ACTIONS(37), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(22), 1,
      sym_halign,
    STATE(23), 1,
      sym__align,
    STATE(25), 1,
      sym_valign,
    STATE(56), 1,
      sym_colour,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(27), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(35), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [102] = 10,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    ACTIONS(41), 1,
      sym_fontsize,
    STATE(21), 1,
      sym__align,
    STATE(22), 1,
      sym_halign,
    STATE(25), 1,
      sym_valign,
    STATE(58), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [145] = 10,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    ACTIONS(49), 1,
      sym_fontsize,
    STATE(22), 1,
      sym_halign,
    STATE(25), 1,
      sym_valign,
    STATE(29), 1,
      sym__align,
    STATE(76), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [188] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(22), 1,
      sym_halign,
    STATE(25), 1,
      sym_valign,
    STATE(29), 1,
      sym__align,
    STATE(76), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [228] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(22), 1,
      sym_halign,
    STATE(25), 1,
      sym_valign,
    STATE(31), 1,
      sym__align,
    STATE(60), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [268] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(21), 1,
      sym__align,
    STATE(22), 1,
      sym_halign,
    STATE(25), 1,
      sym_valign,
    STATE(58), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [308] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(22), 1,
      sym_halign,
    STATE(24), 1,
      sym__align,
    STATE(25), 1,
      sym_valign,
    STATE(53), 1,
      sym_colour,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [348] = 3,
    ACTIONS(57), 1,
      sym_offset,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(55), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [375] = 2,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(61), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [399] = 2,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(65), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [423] = 2,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(69), 15,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [447] = 2,
    ACTIONS(73), 1,
      sym_rgb,
    ACTIONS(71), 17,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_fontsize,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgba,
  [470] = 9,
    ACTIONS(75), 1,
      anon_sym_module,
    ACTIONS(77), 1,
      anon_sym_input,
    ACTIONS(79), 1,
      anon_sym_output,
    ACTIONS(81), 1,
      aux_sym_parameter_token1,
    ACTIONS(83), 1,
      anon_sym_light,
    ACTIONS(85), 1,
      anon_sym_widget,
    ACTIONS(87), 1,
      anon_sym_label,
    ACTIONS(89), 1,
      anon_sym_guide,
    STATE(69), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [506] = 7,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    ACTIONS(95), 1,
      anon_sym_vertical,
    ACTIONS(97), 1,
      anon_sym_horizontal,
    ACTIONS(99), 1,
      sym_offset,
    STATE(128), 1,
      sym_identifier,
    STATE(73), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(91), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [537] = 6,
    ACTIONS(93), 1,
      aux_sym_identifier_token1,
    ACTIONS(95), 1,
      anon_sym_vertical,
    ACTIONS(97), 1,
      anon_sym_horizontal,
    STATE(16), 1,
      sym_identifier,
    STATE(75), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(91), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [565] = 8,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_save,
    ACTIONS(15), 1,
      anon_sym_export,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym_comment,
    STATE(19), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [595] = 8,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(113), 1,
      anon_sym_set,
    ACTIONS(116), 1,
      anon_sym_load,
    ACTIONS(119), 1,
      anon_sym_save,
    ACTIONS(122), 1,
      anon_sym_export,
    STATE(19), 6,
      sym_new,
      sym_set,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [625] = 2,
    ACTIONS(127), 1,
      sym_offset,
    ACTIONS(125), 10,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
      anon_sym_vertical,
      anon_sym_horizontal,
  [641] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(53), 1,
      sym_colour,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [660] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      sym_rgb,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [677] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(76), 1,
      sym_colour,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [696] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(52), 1,
      sym_colour,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [715] = 3,
    ACTIONS(133), 1,
      sym_rgb,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [732] = 2,
    ACTIONS(141), 1,
      sym_rgb,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [747] = 2,
    ACTIONS(145), 1,
      sym_rgb,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [762] = 5,
    ACTIONS(149), 1,
      anon_sym_AT,
    ACTIONS(151), 1,
      aux_sym_absolute_token1,
    STATE(126), 1,
      sym_x,
    STATE(39), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(147), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [783] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(60), 1,
      sym_colour,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [802] = 5,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(155), 1,
      aux_sym_absolute_token1,
    STATE(135), 1,
      sym_x,
    STATE(3), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(147), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [823] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(58), 1,
      sym_colour,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [842] = 2,
    ACTIONS(159), 1,
      sym_width,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
  [856] = 3,
    ACTIONS(161), 1,
      sym_offset,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [872] = 4,
    ACTIONS(167), 1,
      aux_sym_font_token1,
    STATE(61), 1,
      sym_part,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(165), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [890] = 3,
    ACTIONS(171), 1,
      anon_sym_light,
    ACTIONS(173), 1,
      anon_sym_dark,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [906] = 2,
    ACTIONS(177), 1,
      sym_offset,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [920] = 2,
    ACTIONS(181), 1,
      sym_rgb,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [934] = 2,
    ACTIONS(185), 1,
      sym_offset,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [948] = 4,
    ACTIONS(167), 1,
      aux_sym_font_token1,
    STATE(50), 1,
      sym_part,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(189), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [966] = 2,
    ACTIONS(193), 1,
      sym_offset,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [979] = 1,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [990] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(69), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1003] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(65), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1016] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1029] = 2,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1042] = 2,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1055] = 2,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1068] = 1,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1079] = 1,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1089] = 1,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1099] = 2,
    ACTIONS(157), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(159), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1111] = 1,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1121] = 1,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1131] = 1,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1141] = 1,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1151] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1161] = 1,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1171] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1181] = 1,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1191] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1201] = 1,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1211] = 1,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1221] = 1,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1231] = 1,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1241] = 1,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1251] = 1,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1261] = 1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1271] = 1,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1281] = 1,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1291] = 1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1301] = 1,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1311] = 1,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1321] = 1,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1331] = 1,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1341] = 1,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1351] = 1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1361] = 1,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1371] = 1,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1381] = 1,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1391] = 1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1401] = 1,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1411] = 1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1421] = 1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1431] = 1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1441] = 1,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1451] = 1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1461] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1471] = 2,
    ACTIONS(275), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(273), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1483] = 1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1493] = 1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1503] = 1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1513] = 2,
    STATE(34), 1,
      sym_y,
    ACTIONS(283), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1523] = 5,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      aux_sym__originx_token1,
    ACTIONS(289), 1,
      aux_sym__originy_token1,
    STATE(137), 1,
      sym__originy,
    STATE(138), 1,
      sym__originx,
  [1539] = 2,
    STATE(37), 1,
      sym_valign,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1549] = 2,
    STATE(37), 1,
      sym_halign,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1559] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(291), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1569] = 3,
    ACTIONS(293), 1,
      anon_sym_origin,
    ACTIONS(295), 1,
      anon_sym_background,
    STATE(78), 2,
      sym_origin,
      sym_background,
  [1580] = 3,
    ACTIONS(297), 1,
      anon_sym_origin,
    ACTIONS(299), 1,
      anon_sym_AT,
    ACTIONS(301), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1591] = 4,
    ACTIONS(303), 1,
      aux_sym_font_token1,
    ACTIONS(305), 1,
      sym_rgb,
    ACTIONS(307), 1,
      sym_rgba,
    STATE(54), 1,
      sym_name,
  [1604] = 3,
    ACTIONS(309), 1,
      anon_sym_origin,
    ACTIONS(311), 1,
      anon_sym_AT,
    ACTIONS(313), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1615] = 3,
    ACTIONS(315), 1,
      aux_sym_font_token1,
    STATE(28), 1,
      sym_name,
    STATE(91), 1,
      sym__component,
  [1625] = 2,
    ACTIONS(317), 1,
      anon_sym_AT,
    ACTIONS(319), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1633] = 3,
    ACTIONS(315), 1,
      aux_sym_font_token1,
    STATE(28), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [1643] = 3,
    ACTIONS(315), 1,
      aux_sym_font_token1,
    STATE(28), 1,
      sym_name,
    STATE(90), 1,
      sym__component,
  [1653] = 3,
    ACTIONS(315), 1,
      aux_sym_font_token1,
    STATE(28), 1,
      sym_name,
    STATE(68), 1,
      sym__component,
  [1663] = 3,
    ACTIONS(315), 1,
      aux_sym_font_token1,
    STATE(28), 1,
      sym_name,
    STATE(87), 1,
      sym__component,
  [1673] = 2,
    ACTIONS(321), 1,
      anon_sym_AT,
    ACTIONS(323), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1681] = 1,
    ACTIONS(325), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1686] = 1,
    ACTIONS(327), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1691] = 2,
    ACTIONS(329), 1,
      anon_sym_svg,
    STATE(55), 1,
      sym_svg,
  [1698] = 1,
    ACTIONS(331), 2,
      anon_sym_project,
      anon_sym_script,
  [1703] = 2,
    ACTIONS(333), 1,
      anon_sym_panel,
    STATE(77), 1,
      sym_panel,
  [1710] = 2,
    ACTIONS(335), 1,
      sym_height,
    ACTIONS(337), 1,
      sym_width,
  [1717] = 2,
    ACTIONS(303), 1,
      aux_sym_font_token1,
    STATE(113), 1,
      sym_name,
  [1724] = 2,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      sym_offset,
  [1731] = 2,
    ACTIONS(343), 1,
      sym_rgb,
    ACTIONS(345), 1,
      sym_rgba,
  [1738] = 2,
    ACTIONS(287), 1,
      aux_sym__originx_token1,
    STATE(83), 1,
      sym__originx,
  [1745] = 2,
    ACTIONS(289), 1,
      aux_sym__originy_token1,
    STATE(83), 1,
      sym__originy,
  [1752] = 2,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym__string,
  [1759] = 1,
    ACTIONS(349), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1764] = 1,
    ACTIONS(351), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1769] = 1,
    ACTIONS(353), 1,
      aux_sym__string_token1,
  [1773] = 1,
    ACTIONS(355), 1,
      sym_width,
  [1777] = 1,
    ACTIONS(357), 1,
      aux_sym_origin_token1,
  [1781] = 1,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
  [1785] = 1,
    ACTIONS(361), 1,
      anon_sym_COMMA,
  [1789] = 1,
    ACTIONS(363), 1,
      anon_sym_COMMA,
  [1793] = 1,
    ACTIONS(99), 1,
      sym_offset,
  [1797] = 1,
    ACTIONS(365), 1,
      anon_sym_COMMA,
  [1801] = 1,
    ACTIONS(367), 1,
      sym_rgb,
  [1805] = 1,
    ACTIONS(367), 1,
      sym_rgba,
  [1809] = 1,
    ACTIONS(369), 1,
      aux_sym_absolute_token1,
  [1813] = 1,
    ACTIONS(371), 1,
      anon_sym_COMMA,
  [1817] = 1,
    ACTIONS(373), 1,
      anon_sym_COMMA,
  [1821] = 1,
    ACTIONS(375), 1,
      anon_sym_COMMA,
  [1825] = 1,
    ACTIONS(377), 1,
      aux_sym_absolute_token1,
  [1829] = 1,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [1833] = 1,
    ACTIONS(381), 1,
      anon_sym_COMMA,
  [1837] = 1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [1841] = 1,
    ACTIONS(385), 1,
      aux_sym_absolute_token1,
  [1845] = 1,
    ACTIONS(387), 1,
      anon_sym_project,
  [1849] = 1,
    ACTIONS(389), 1,
      aux_sym_origin_token1,
  [1853] = 1,
    ACTIONS(391), 1,
      aux_sym_absolute_token1,
  [1857] = 1,
    ACTIONS(393), 1,
      aux_sym_absolute_token1,
  [1861] = 1,
    ACTIONS(395), 1,
      anon_sym_COMMA,
  [1865] = 1,
    ACTIONS(397), 1,
      anon_sym_COMMA,
  [1869] = 1,
    ACTIONS(399), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 268,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 348,
  [SMALL_STATE(11)] = 375,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 447,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 506,
  [SMALL_STATE(17)] = 537,
  [SMALL_STATE(18)] = 565,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 625,
  [SMALL_STATE(21)] = 641,
  [SMALL_STATE(22)] = 660,
  [SMALL_STATE(23)] = 677,
  [SMALL_STATE(24)] = 696,
  [SMALL_STATE(25)] = 715,
  [SMALL_STATE(26)] = 732,
  [SMALL_STATE(27)] = 747,
  [SMALL_STATE(28)] = 762,
  [SMALL_STATE(29)] = 783,
  [SMALL_STATE(30)] = 802,
  [SMALL_STATE(31)] = 823,
  [SMALL_STATE(32)] = 842,
  [SMALL_STATE(33)] = 856,
  [SMALL_STATE(34)] = 872,
  [SMALL_STATE(35)] = 890,
  [SMALL_STATE(36)] = 906,
  [SMALL_STATE(37)] = 920,
  [SMALL_STATE(38)] = 934,
  [SMALL_STATE(39)] = 948,
  [SMALL_STATE(40)] = 966,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 990,
  [SMALL_STATE(43)] = 1003,
  [SMALL_STATE(44)] = 1016,
  [SMALL_STATE(45)] = 1029,
  [SMALL_STATE(46)] = 1042,
  [SMALL_STATE(47)] = 1055,
  [SMALL_STATE(48)] = 1068,
  [SMALL_STATE(49)] = 1079,
  [SMALL_STATE(50)] = 1089,
  [SMALL_STATE(51)] = 1099,
  [SMALL_STATE(52)] = 1111,
  [SMALL_STATE(53)] = 1121,
  [SMALL_STATE(54)] = 1131,
  [SMALL_STATE(55)] = 1141,
  [SMALL_STATE(56)] = 1151,
  [SMALL_STATE(57)] = 1161,
  [SMALL_STATE(58)] = 1171,
  [SMALL_STATE(59)] = 1181,
  [SMALL_STATE(60)] = 1191,
  [SMALL_STATE(61)] = 1201,
  [SMALL_STATE(62)] = 1211,
  [SMALL_STATE(63)] = 1221,
  [SMALL_STATE(64)] = 1231,
  [SMALL_STATE(65)] = 1241,
  [SMALL_STATE(66)] = 1251,
  [SMALL_STATE(67)] = 1261,
  [SMALL_STATE(68)] = 1271,
  [SMALL_STATE(69)] = 1281,
  [SMALL_STATE(70)] = 1291,
  [SMALL_STATE(71)] = 1301,
  [SMALL_STATE(72)] = 1311,
  [SMALL_STATE(73)] = 1321,
  [SMALL_STATE(74)] = 1331,
  [SMALL_STATE(75)] = 1341,
  [SMALL_STATE(76)] = 1351,
  [SMALL_STATE(77)] = 1361,
  [SMALL_STATE(78)] = 1371,
  [SMALL_STATE(79)] = 1381,
  [SMALL_STATE(80)] = 1391,
  [SMALL_STATE(81)] = 1401,
  [SMALL_STATE(82)] = 1411,
  [SMALL_STATE(83)] = 1421,
  [SMALL_STATE(84)] = 1431,
  [SMALL_STATE(85)] = 1441,
  [SMALL_STATE(86)] = 1451,
  [SMALL_STATE(87)] = 1461,
  [SMALL_STATE(88)] = 1471,
  [SMALL_STATE(89)] = 1483,
  [SMALL_STATE(90)] = 1493,
  [SMALL_STATE(91)] = 1503,
  [SMALL_STATE(92)] = 1513,
  [SMALL_STATE(93)] = 1523,
  [SMALL_STATE(94)] = 1539,
  [SMALL_STATE(95)] = 1549,
  [SMALL_STATE(96)] = 1559,
  [SMALL_STATE(97)] = 1569,
  [SMALL_STATE(98)] = 1580,
  [SMALL_STATE(99)] = 1591,
  [SMALL_STATE(100)] = 1604,
  [SMALL_STATE(101)] = 1615,
  [SMALL_STATE(102)] = 1625,
  [SMALL_STATE(103)] = 1633,
  [SMALL_STATE(104)] = 1643,
  [SMALL_STATE(105)] = 1653,
  [SMALL_STATE(106)] = 1663,
  [SMALL_STATE(107)] = 1673,
  [SMALL_STATE(108)] = 1681,
  [SMALL_STATE(109)] = 1686,
  [SMALL_STATE(110)] = 1691,
  [SMALL_STATE(111)] = 1698,
  [SMALL_STATE(112)] = 1703,
  [SMALL_STATE(113)] = 1710,
  [SMALL_STATE(114)] = 1717,
  [SMALL_STATE(115)] = 1724,
  [SMALL_STATE(116)] = 1731,
  [SMALL_STATE(117)] = 1738,
  [SMALL_STATE(118)] = 1745,
  [SMALL_STATE(119)] = 1752,
  [SMALL_STATE(120)] = 1759,
  [SMALL_STATE(121)] = 1764,
  [SMALL_STATE(122)] = 1769,
  [SMALL_STATE(123)] = 1773,
  [SMALL_STATE(124)] = 1777,
  [SMALL_STATE(125)] = 1781,
  [SMALL_STATE(126)] = 1785,
  [SMALL_STATE(127)] = 1789,
  [SMALL_STATE(128)] = 1793,
  [SMALL_STATE(129)] = 1797,
  [SMALL_STATE(130)] = 1801,
  [SMALL_STATE(131)] = 1805,
  [SMALL_STATE(132)] = 1809,
  [SMALL_STATE(133)] = 1813,
  [SMALL_STATE(134)] = 1817,
  [SMALL_STATE(135)] = 1821,
  [SMALL_STATE(136)] = 1825,
  [SMALL_STATE(137)] = 1829,
  [SMALL_STATE(138)] = 1833,
  [SMALL_STATE(139)] = 1837,
  [SMALL_STATE(140)] = 1841,
  [SMALL_STATE(141)] = 1845,
  [SMALL_STATE(142)] = 1849,
  [SMALL_STATE(143)] = 1853,
  [SMALL_STATE(144)] = 1857,
  [SMALL_STATE(145)] = 1861,
  [SMALL_STATE(146)] = 1865,
  [SMALL_STATE(147)] = 1869,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(97),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(111),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(141),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(112),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
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
