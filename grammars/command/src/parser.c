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
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 9

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_load = 4,
  anon_sym_project = 5,
  anon_sym_script = 6,
  anon_sym_save = 7,
  anon_sym_export = 8,
  anon_sym_timestamp = 9,
  anon_sym_module = 10,
  anon_sym_input = 11,
  anon_sym_output = 12,
  aux_sym_parameter_token1 = 13,
  anon_sym_light = 14,
  anon_sym_widget = 15,
  anon_sym_COMMA = 16,
  anon_sym_label = 17,
  aux_sym_font_token1 = 18,
  sym_fontsize = 19,
  anon_sym_left = 20,
  anon_sym_centre = 21,
  anon_sym_center = 22,
  anon_sym_right = 23,
  anon_sym_top = 24,
  anon_sym_middle = 25,
  anon_sym_baseline = 26,
  anon_sym_bottom = 27,
  anon_sym_origin = 28,
  anon_sym_AT = 29,
  aux_sym_origin_token1 = 30,
  aux_sym__originx_token1 = 31,
  aux_sym__originy_token1 = 32,
  anon_sym_background = 33,
  sym_rgb = 34,
  sym_rgba = 35,
  anon_sym_panel = 36,
  anon_sym_svg = 37,
  anon_sym_dark = 38,
  sym_height = 39,
  sym_width = 40,
  anon_sym_guide = 41,
  aux_sym_identifier_token1 = 42,
  anon_sym_vertical = 43,
  anon_sym_horizontal = 44,
  sym_offset = 45,
  anon_sym_DQUOTE = 46,
  aux_sym__string_token1 = 47,
  aux_sym_absolute_token1 = 48,
  sym_command = 49,
  sym_new = 50,
  sym_set = 51,
  sym_load = 52,
  sym_save = 53,
  sym_export = 54,
  sym_project = 55,
  sym__entity = 56,
  sym_module = 57,
  sym_input = 58,
  sym_output = 59,
  sym_parameter = 60,
  sym_light = 61,
  sym_widget = 62,
  sym__component = 63,
  sym_label = 64,
  sym_font = 65,
  sym__align = 66,
  sym_halign = 67,
  sym_valign = 68,
  sym_colour = 69,
  sym_origin = 70,
  sym__originx = 71,
  sym__originy = 72,
  sym_background = 73,
  sym_panel = 74,
  sym_svg = 75,
  sym_name = 76,
  sym_part = 77,
  sym_guide = 78,
  sym_identifier = 79,
  sym_vertical = 80,
  sym_horizontal = 81,
  sym_geometry = 82,
  sym_guideline = 83,
  sym__string = 84,
  sym_absolute = 85,
  sym_relative = 86,
  sym_x = 87,
  sym_y = 88,
  aux_sym_command_repeat1 = 89,
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
  [anon_sym_timestamp] = "timestamp",
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
  [sym_project] = "project",
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
  [anon_sym_timestamp] = anon_sym_timestamp,
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
  [sym_project] = sym_project,
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
    .named = false,
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
  [anon_sym_timestamp] = {
    .visible = true,
    .named = true,
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
  [sym_project] = {
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
    [1] = sym_project,
  },
  [2] = {
    [0] = aux_sym__originx_token1,
  },
  [3] = {
    [1] = sym_light,
  },
  [4] = {
    [1] = sym_absolute,
  },
  [5] = {
    [2] = sym_y,
  },
  [6] = {
    [2] = sym_absolute,
  },
  [7] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [8] = {
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
  [40] = 12,
  [41] = 41,
  [42] = 13,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 11,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 35,
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
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 133,
  [147] = 127,
  [148] = 130,
  [149] = 137,
  [150] = 135,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(225);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'g') ADVANCE(196);
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(98);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == 'h') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == 'v') ADVANCE(346);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'U') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(323);
      if (lookahead == 'h') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'U') ADVANCE(333);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(202);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(125);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(226);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 'j') ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(332);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(317);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(334);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 199:
      if (lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 200:
      if (lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 201:
      if (lookahead == 'z') ADVANCE(145);
      END_STATE();
    case 202:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(205)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 220:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 221:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 222:
      if (eof) ADVANCE(225);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(222)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 223:
      if (eof) ADVANCE(225);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(223)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 224:
      if (eof) ADVANCE(225);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(224)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 224},
  [5] = {.lex_state = 224},
  [6] = {.lex_state = 224},
  [7] = {.lex_state = 224},
  [8] = {.lex_state = 224},
  [9] = {.lex_state = 224},
  [10] = {.lex_state = 222},
  [11] = {.lex_state = 222},
  [12] = {.lex_state = 222},
  [13] = {.lex_state = 222},
  [14] = {.lex_state = 224},
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
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 224},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 223},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 223},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 223},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 223},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 29},
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
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 42},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 224},
  [99] = {.lex_state = 224},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 28},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 222},
  [107] = {.lex_state = 222},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 222},
  [120] = {.lex_state = 224},
  [121] = {.lex_state = 222},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 222},
  [125] = {.lex_state = 222},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 222},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 205},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 224},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 222},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
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
    [anon_sym_timestamp] = ACTIONS(1),
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
    [sym_command] = STATE(142),
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
    STATE(23), 1,
      sym_valign,
    STATE(25), 1,
      sym_halign,
    STATE(31), 1,
      sym__align,
    STATE(61), 1,
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
    STATE(23), 1,
      sym_valign,
    STATE(25), 1,
      sym_halign,
    STATE(26), 1,
      sym__align,
    STATE(87), 1,
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
    STATE(22), 1,
      sym__align,
    STATE(23), 1,
      sym_valign,
    STATE(25), 1,
      sym_halign,
    STATE(59), 1,
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
    STATE(23), 1,
      sym_valign,
    STATE(25), 1,
      sym_halign,
    STATE(28), 1,
      sym__align,
    STATE(70), 1,
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
    STATE(23), 1,
      sym_valign,
    STATE(25), 1,
      sym_halign,
    STATE(31), 1,
      sym__align,
    STATE(61), 1,
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
  [228] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(23), 1,
      sym_valign,
    STATE(25), 1,
      sym_halign,
    STATE(28), 1,
      sym__align,
    STATE(70), 1,
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
  [268] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(22), 1,
      sym__align,
    STATE(23), 1,
      sym_valign,
    STATE(25), 1,
      sym_halign,
    STATE(59), 1,
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
    STATE(23), 1,
      sym_valign,
    STATE(24), 1,
      sym__align,
    STATE(25), 1,
      sym_halign,
    STATE(57), 1,
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
    STATE(63), 9,
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
    STATE(134), 1,
      sym_identifier,
    STATE(74), 4,
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
    STATE(77), 4,
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
  [641] = 2,
    ACTIONS(131), 1,
      sym_rgb,
    ACTIONS(129), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [656] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(57), 1,
      sym_colour,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [675] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      sym_rgb,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [692] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(53), 1,
      sym_colour,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [711] = 3,
    ACTIONS(137), 1,
      sym_rgb,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [728] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(70), 1,
      sym_colour,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [747] = 5,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      aux_sym_absolute_token1,
    STATE(129), 1,
      sym_x,
    STATE(32), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(143), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [768] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(61), 1,
      sym_colour,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [787] = 2,
    ACTIONS(151), 1,
      sym_rgb,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [802] = 5,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(155), 1,
      aux_sym_absolute_token1,
    STATE(139), 1,
      sym_x,
    STATE(3), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(143), 5,
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
    STATE(59), 1,
      sym_colour,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [842] = 4,
    ACTIONS(161), 1,
      aux_sym_font_token1,
    STATE(89), 1,
      sym_part,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(159), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [860] = 3,
    ACTIONS(163), 1,
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
  [876] = 3,
    ACTIONS(167), 1,
      anon_sym_light,
    ACTIONS(169), 1,
      anon_sym_dark,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [892] = 2,
    ACTIONS(173), 1,
      sym_width,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
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
      sym_offset,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [934] = 4,
    ACTIONS(161), 1,
      aux_sym_font_token1,
    STATE(62), 1,
      sym_part,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [952] = 2,
    ACTIONS(189), 1,
      sym_rgb,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [966] = 2,
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
  [979] = 1,
    ACTIONS(191), 8,
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
  [1003] = 1,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1014] = 2,
    ACTIONS(197), 1,
      sym_offset,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1027] = 2,
    ACTIONS(201), 1,
      anon_sym_timestamp,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1040] = 2,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1053] = 2,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1066] = 2,
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
  [1079] = 2,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1092] = 1,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1102] = 1,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1112] = 2,
    ACTIONS(171), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(173), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1124] = 1,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1134] = 1,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1144] = 1,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1154] = 1,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1164] = 1,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1174] = 1,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1184] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1194] = 1,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1204] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1214] = 1,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1224] = 1,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1234] = 1,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1244] = 1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1254] = 1,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1264] = 1,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1274] = 1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1284] = 1,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1294] = 1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1304] = 1,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1314] = 1,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1324] = 1,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1334] = 1,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1344] = 1,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1354] = 1,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1364] = 1,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1374] = 1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1384] = 1,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1394] = 1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1404] = 1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1414] = 1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1424] = 1,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1434] = 1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1444] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1454] = 1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1464] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1474] = 1,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1484] = 1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1494] = 1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1504] = 2,
    ACTIONS(283), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(281), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1516] = 1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1526] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1536] = 1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1546] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(291), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1556] = 5,
    ACTIONS(293), 1,
      anon_sym_AT,
    ACTIONS(295), 1,
      aux_sym__originx_token1,
    ACTIONS(297), 1,
      aux_sym__originy_token1,
    STATE(138), 1,
      sym__originx,
    STATE(141), 1,
      sym__originy,
  [1572] = 2,
    STATE(38), 1,
      sym_y,
    ACTIONS(299), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1582] = 2,
    STATE(39), 1,
      sym_halign,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1592] = 2,
    STATE(39), 1,
      sym_valign,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1602] = 3,
    ACTIONS(301), 1,
      anon_sym_origin,
    ACTIONS(303), 1,
      anon_sym_background,
    STATE(69), 2,
      sym_origin,
      sym_background,
  [1613] = 3,
    ACTIONS(305), 1,
      anon_sym_origin,
    ACTIONS(307), 1,
      anon_sym_AT,
    ACTIONS(309), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1624] = 3,
    ACTIONS(311), 1,
      anon_sym_origin,
    ACTIONS(313), 1,
      anon_sym_AT,
    ACTIONS(315), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1635] = 4,
    ACTIONS(317), 1,
      aux_sym_font_token1,
    ACTIONS(319), 1,
      sym_rgb,
    ACTIONS(321), 1,
      sym_rgba,
    STATE(54), 1,
      sym_name,
  [1648] = 3,
    ACTIONS(323), 1,
      aux_sym_font_token1,
    STATE(27), 1,
      sym_name,
    STATE(92), 1,
      sym__component,
  [1658] = 3,
    ACTIONS(323), 1,
      aux_sym_font_token1,
    STATE(27), 1,
      sym_name,
    STATE(51), 1,
      sym__component,
  [1668] = 2,
    ACTIONS(325), 1,
      anon_sym_AT,
    ACTIONS(327), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1676] = 2,
    ACTIONS(329), 1,
      anon_sym_AT,
    ACTIONS(331), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1684] = 3,
    ACTIONS(323), 1,
      aux_sym_font_token1,
    STATE(27), 1,
      sym_name,
    STATE(94), 1,
      sym__component,
  [1694] = 3,
    ACTIONS(323), 1,
      aux_sym_font_token1,
    STATE(27), 1,
      sym_name,
    STATE(93), 1,
      sym__component,
  [1704] = 3,
    ACTIONS(323), 1,
      aux_sym_font_token1,
    STATE(27), 1,
      sym_name,
    STATE(90), 1,
      sym__component,
  [1714] = 2,
    ACTIONS(295), 1,
      aux_sym__originx_token1,
    STATE(79), 1,
      sym__originx,
  [1721] = 2,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      sym_offset,
  [1728] = 2,
    ACTIONS(337), 1,
      anon_sym_svg,
    STATE(56), 1,
      sym_svg,
  [1735] = 2,
    ACTIONS(297), 1,
      aux_sym__originy_token1,
    STATE(79), 1,
      sym__originy,
  [1742] = 2,
    ACTIONS(317), 1,
      aux_sym_font_token1,
    STATE(120), 1,
      sym_name,
  [1749] = 2,
    ACTIONS(339), 1,
      anon_sym_panel,
    STATE(78), 1,
      sym_panel,
  [1756] = 2,
    ACTIONS(341), 1,
      anon_sym_project,
    STATE(76), 1,
      sym_project,
  [1763] = 2,
    ACTIONS(343), 1,
      sym_rgb,
    ACTIONS(345), 1,
      sym_rgba,
  [1770] = 1,
    ACTIONS(347), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1775] = 2,
    ACTIONS(349), 1,
      sym_height,
    ACTIONS(351), 1,
      sym_width,
  [1782] = 1,
    ACTIONS(353), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1787] = 2,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym__string,
  [1794] = 2,
    ACTIONS(357), 1,
      anon_sym_project,
    ACTIONS(359), 1,
      anon_sym_script,
  [1801] = 1,
    ACTIONS(361), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1806] = 1,
    ACTIONS(363), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1811] = 1,
    ACTIONS(365), 1,
      anon_sym_COMMA,
  [1815] = 1,
    ACTIONS(367), 1,
      aux_sym_absolute_token1,
  [1819] = 1,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
  [1823] = 1,
    ACTIONS(371), 1,
      anon_sym_COMMA,
  [1827] = 1,
    ACTIONS(373), 1,
      anon_sym_COMMA,
  [1831] = 1,
    ACTIONS(375), 1,
      anon_sym_COMMA,
  [1835] = 1,
    ACTIONS(377), 1,
      aux_sym_origin_token1,
  [1839] = 1,
    ACTIONS(379), 1,
      aux_sym_absolute_token1,
  [1843] = 1,
    ACTIONS(99), 1,
      sym_offset,
  [1847] = 1,
    ACTIONS(381), 1,
      aux_sym_absolute_token1,
  [1851] = 1,
    ACTIONS(383), 1,
      aux_sym__string_token1,
  [1855] = 1,
    ACTIONS(385), 1,
      anon_sym_COMMA,
  [1859] = 1,
    ACTIONS(387), 1,
      anon_sym_COMMA,
  [1863] = 1,
    ACTIONS(389), 1,
      anon_sym_COMMA,
  [1867] = 1,
    ACTIONS(391), 1,
      sym_width,
  [1871] = 1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
  [1875] = 1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [1879] = 1,
    ACTIONS(397), 1,
      sym_rgb,
  [1883] = 1,
    ACTIONS(399), 1,
      aux_sym_origin_token1,
  [1887] = 1,
    ACTIONS(397), 1,
      sym_rgba,
  [1891] = 1,
    ACTIONS(401), 1,
      aux_sym_absolute_token1,
  [1895] = 1,
    ACTIONS(403), 1,
      aux_sym_absolute_token1,
  [1899] = 1,
    ACTIONS(405), 1,
      anon_sym_COMMA,
  [1903] = 1,
    ACTIONS(407), 1,
      anon_sym_COMMA,
  [1907] = 1,
    ACTIONS(409), 1,
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
  [SMALL_STATE(22)] = 656,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 692,
  [SMALL_STATE(25)] = 711,
  [SMALL_STATE(26)] = 728,
  [SMALL_STATE(27)] = 747,
  [SMALL_STATE(28)] = 768,
  [SMALL_STATE(29)] = 787,
  [SMALL_STATE(30)] = 802,
  [SMALL_STATE(31)] = 823,
  [SMALL_STATE(32)] = 842,
  [SMALL_STATE(33)] = 860,
  [SMALL_STATE(34)] = 876,
  [SMALL_STATE(35)] = 892,
  [SMALL_STATE(36)] = 906,
  [SMALL_STATE(37)] = 920,
  [SMALL_STATE(38)] = 934,
  [SMALL_STATE(39)] = 952,
  [SMALL_STATE(40)] = 966,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 990,
  [SMALL_STATE(43)] = 1003,
  [SMALL_STATE(44)] = 1014,
  [SMALL_STATE(45)] = 1027,
  [SMALL_STATE(46)] = 1040,
  [SMALL_STATE(47)] = 1053,
  [SMALL_STATE(48)] = 1066,
  [SMALL_STATE(49)] = 1079,
  [SMALL_STATE(50)] = 1092,
  [SMALL_STATE(51)] = 1102,
  [SMALL_STATE(52)] = 1112,
  [SMALL_STATE(53)] = 1124,
  [SMALL_STATE(54)] = 1134,
  [SMALL_STATE(55)] = 1144,
  [SMALL_STATE(56)] = 1154,
  [SMALL_STATE(57)] = 1164,
  [SMALL_STATE(58)] = 1174,
  [SMALL_STATE(59)] = 1184,
  [SMALL_STATE(60)] = 1194,
  [SMALL_STATE(61)] = 1204,
  [SMALL_STATE(62)] = 1214,
  [SMALL_STATE(63)] = 1224,
  [SMALL_STATE(64)] = 1234,
  [SMALL_STATE(65)] = 1244,
  [SMALL_STATE(66)] = 1254,
  [SMALL_STATE(67)] = 1264,
  [SMALL_STATE(68)] = 1274,
  [SMALL_STATE(69)] = 1284,
  [SMALL_STATE(70)] = 1294,
  [SMALL_STATE(71)] = 1304,
  [SMALL_STATE(72)] = 1314,
  [SMALL_STATE(73)] = 1324,
  [SMALL_STATE(74)] = 1334,
  [SMALL_STATE(75)] = 1344,
  [SMALL_STATE(76)] = 1354,
  [SMALL_STATE(77)] = 1364,
  [SMALL_STATE(78)] = 1374,
  [SMALL_STATE(79)] = 1384,
  [SMALL_STATE(80)] = 1394,
  [SMALL_STATE(81)] = 1404,
  [SMALL_STATE(82)] = 1414,
  [SMALL_STATE(83)] = 1424,
  [SMALL_STATE(84)] = 1434,
  [SMALL_STATE(85)] = 1444,
  [SMALL_STATE(86)] = 1454,
  [SMALL_STATE(87)] = 1464,
  [SMALL_STATE(88)] = 1474,
  [SMALL_STATE(89)] = 1484,
  [SMALL_STATE(90)] = 1494,
  [SMALL_STATE(91)] = 1504,
  [SMALL_STATE(92)] = 1516,
  [SMALL_STATE(93)] = 1526,
  [SMALL_STATE(94)] = 1536,
  [SMALL_STATE(95)] = 1546,
  [SMALL_STATE(96)] = 1556,
  [SMALL_STATE(97)] = 1572,
  [SMALL_STATE(98)] = 1582,
  [SMALL_STATE(99)] = 1592,
  [SMALL_STATE(100)] = 1602,
  [SMALL_STATE(101)] = 1613,
  [SMALL_STATE(102)] = 1624,
  [SMALL_STATE(103)] = 1635,
  [SMALL_STATE(104)] = 1648,
  [SMALL_STATE(105)] = 1658,
  [SMALL_STATE(106)] = 1668,
  [SMALL_STATE(107)] = 1676,
  [SMALL_STATE(108)] = 1684,
  [SMALL_STATE(109)] = 1694,
  [SMALL_STATE(110)] = 1704,
  [SMALL_STATE(111)] = 1714,
  [SMALL_STATE(112)] = 1721,
  [SMALL_STATE(113)] = 1728,
  [SMALL_STATE(114)] = 1735,
  [SMALL_STATE(115)] = 1742,
  [SMALL_STATE(116)] = 1749,
  [SMALL_STATE(117)] = 1756,
  [SMALL_STATE(118)] = 1763,
  [SMALL_STATE(119)] = 1770,
  [SMALL_STATE(120)] = 1775,
  [SMALL_STATE(121)] = 1782,
  [SMALL_STATE(122)] = 1787,
  [SMALL_STATE(123)] = 1794,
  [SMALL_STATE(124)] = 1801,
  [SMALL_STATE(125)] = 1806,
  [SMALL_STATE(126)] = 1811,
  [SMALL_STATE(127)] = 1815,
  [SMALL_STATE(128)] = 1819,
  [SMALL_STATE(129)] = 1823,
  [SMALL_STATE(130)] = 1827,
  [SMALL_STATE(131)] = 1831,
  [SMALL_STATE(132)] = 1835,
  [SMALL_STATE(133)] = 1839,
  [SMALL_STATE(134)] = 1843,
  [SMALL_STATE(135)] = 1847,
  [SMALL_STATE(136)] = 1851,
  [SMALL_STATE(137)] = 1855,
  [SMALL_STATE(138)] = 1859,
  [SMALL_STATE(139)] = 1863,
  [SMALL_STATE(140)] = 1867,
  [SMALL_STATE(141)] = 1871,
  [SMALL_STATE(142)] = 1875,
  [SMALL_STATE(143)] = 1879,
  [SMALL_STATE(144)] = 1883,
  [SMALL_STATE(145)] = 1887,
  [SMALL_STATE(146)] = 1891,
  [SMALL_STATE(147)] = 1895,
  [SMALL_STATE(148)] = 1899,
  [SMALL_STATE(149)] = 1903,
  [SMALL_STATE(150)] = 1907,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 8),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(100),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(123),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(117),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(116),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 7),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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
