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
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_COMMA = 10,
  anon_sym_gzip = 11,
  anon_sym_module = 12,
  anon_sym_input = 13,
  anon_sym_output = 14,
  aux_sym_parameter_token1 = 15,
  anon_sym_light = 16,
  anon_sym_widget = 17,
  anon_sym_label = 18,
  aux_sym_font_token1 = 19,
  sym_fontsize = 20,
  anon_sym_left = 21,
  anon_sym_centre = 22,
  anon_sym_center = 23,
  anon_sym_right = 24,
  anon_sym_top = 25,
  anon_sym_middle = 26,
  anon_sym_baseline = 27,
  anon_sym_bottom = 28,
  anon_sym_origin = 29,
  anon_sym_AT = 30,
  aux_sym_origin_token1 = 31,
  aux_sym__originx_token1 = 32,
  aux_sym__originy_token1 = 33,
  anon_sym_background = 34,
  sym_rgb = 35,
  sym_rgba = 36,
  anon_sym_panel = 37,
  anon_sym_svg = 38,
  anon_sym_dark = 39,
  sym_height = 40,
  sym_width = 41,
  anon_sym_guide = 42,
  aux_sym_identifier_token1 = 43,
  anon_sym_vertical = 44,
  anon_sym_horizontal = 45,
  sym_offset = 46,
  anon_sym_DQUOTE = 47,
  aux_sym__string_token1 = 48,
  aux_sym_absolute_token1 = 49,
  sym_command = 50,
  sym_new = 51,
  sym_set = 52,
  sym_load = 53,
  sym_save = 54,
  sym_export = 55,
  sym_project = 56,
  sym__entity = 57,
  sym_module = 58,
  sym_input = 59,
  sym_output = 60,
  sym_parameter = 61,
  sym_light = 62,
  sym_widget = 63,
  sym__component = 64,
  sym_label = 65,
  sym_font = 66,
  sym__align = 67,
  sym_halign = 68,
  sym_valign = 69,
  sym_colour = 70,
  sym_origin = 71,
  sym__originx = 72,
  sym__originy = 73,
  sym_background = 74,
  sym_panel = 75,
  sym_svg = 76,
  sym_name = 77,
  sym_part = 78,
  sym_guide = 79,
  sym_identifier = 80,
  sym_vertical = 81,
  sym_horizontal = 82,
  sym_geometry = 83,
  sym_guideline = 84,
  sym__string = 85,
  sym_absolute = 86,
  sym_relative = 87,
  sym_x = 88,
  sym_y = 89,
  aux_sym_command_repeat1 = 90,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gzip] = {
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
  [40] = 40,
  [41] = 12,
  [42] = 42,
  [43] = 43,
  [44] = 13,
  [45] = 45,
  [46] = 46,
  [47] = 11,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 36,
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 143,
  [151] = 129,
  [152] = 132,
  [153] = 130,
  [154] = 133,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(227);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(98);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(364);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == 'v') ADVANCE(349);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'U') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'H') ADVANCE(325);
      if (lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(326);
      if (lookahead == 'h') ADVANCE(326);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(337);
      if (lookahead == 'U') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(337);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(337);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(337);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(338);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(204);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(126);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(228);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(364);
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(114);
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
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(164);
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
      if (lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 106:
      if (lookahead == 'j') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(335);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(336);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(328);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'z') ADVANCE(100);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 201:
      if (lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 202:
      if (lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 203:
      if (lookahead == 'z') ADVANCE(146);
      END_STATE();
    case 204:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(207)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 222:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 223:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 224:
      if (eof) ADVANCE(227);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(224)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 225:
      if (eof) ADVANCE(227);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(225)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 226:
      if (eof) ADVANCE(227);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 224},
  [3] = {.lex_state = 224},
  [4] = {.lex_state = 226},
  [5] = {.lex_state = 226},
  [6] = {.lex_state = 226},
  [7] = {.lex_state = 226},
  [8] = {.lex_state = 226},
  [9] = {.lex_state = 226},
  [10] = {.lex_state = 224},
  [11] = {.lex_state = 224},
  [12] = {.lex_state = 224},
  [13] = {.lex_state = 224},
  [14] = {.lex_state = 226},
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
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 225},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 226},
  [37] = {.lex_state = 225},
  [38] = {.lex_state = 225},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 225},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 225},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 225},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 29},
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
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 226},
  [100] = {.lex_state = 226},
  [101] = {.lex_state = 42},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 224},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 224},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 224},
  [120] = {.lex_state = 224},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 224},
  [124] = {.lex_state = 224},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 226},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 226},
  [140] = {.lex_state = 207},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 224},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 224},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
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
    [sym_command] = STATE(146),
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
    STATE(21), 1,
      sym_valign,
    STATE(23), 1,
      sym_halign,
    STATE(24), 1,
      sym__align,
    STATE(84), 1,
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
    STATE(21), 1,
      sym_valign,
    STATE(23), 1,
      sym_halign,
    STATE(31), 1,
      sym__align,
    STATE(62), 1,
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
      sym_valign,
    STATE(23), 1,
      sym_halign,
    STATE(29), 1,
      sym__align,
    STATE(71), 1,
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
    STATE(21), 1,
      sym_valign,
    STATE(22), 1,
      sym__align,
    STATE(23), 1,
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
    STATE(21), 1,
      sym_valign,
    STATE(23), 1,
      sym_halign,
    STATE(31), 1,
      sym__align,
    STATE(62), 1,
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
    ACTIONS(33), 7,
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
    STATE(21), 1,
      sym_valign,
    STATE(23), 1,
      sym_halign,
    STATE(29), 1,
      sym__align,
    STATE(71), 1,
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
  [268] = 9,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(21), 1,
      sym_valign,
    STATE(22), 1,
      sym__align,
    STATE(23), 1,
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
    ACTIONS(47), 7,
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
    STATE(21), 1,
      sym_valign,
    STATE(23), 1,
      sym_halign,
    STATE(25), 1,
      sym__align,
    STATE(56), 1,
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
    STATE(64), 9,
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
    STATE(52), 4,
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
    STATE(66), 4,
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
  [641] = 3,
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
  [658] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(56), 1,
      sym_colour,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [677] = 3,
    ACTIONS(133), 1,
      sym_rgb,
    ACTIONS(135), 1,
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
  [694] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(71), 1,
      sym_colour,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [713] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(55), 1,
      sym_colour,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [732] = 5,
    ACTIONS(141), 1,
      anon_sym_AT,
    ACTIONS(143), 1,
      aux_sym_absolute_token1,
    STATE(131), 1,
      sym_x,
    STATE(37), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(139), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [753] = 2,
    ACTIONS(147), 1,
      sym_rgb,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [768] = 2,
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
  [783] = 4,
    ACTIONS(29), 1,
      sym_rgb,
    ACTIONS(31), 1,
      sym_rgba,
    STATE(62), 1,
      sym_colour,
    ACTIONS(33), 7,
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
    STATE(2), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(139), 5,
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
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [842] = 2,
    ACTIONS(159), 1,
      sym_offset,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
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
  [872] = 3,
    ACTIONS(165), 1,
      anon_sym_timestamp,
    ACTIONS(167), 1,
      anon_sym_gzip,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [888] = 2,
    ACTIONS(171), 1,
      sym_rgb,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [902] = 2,
    ACTIONS(175), 1,
      sym_width,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
  [916] = 4,
    ACTIONS(181), 1,
      aux_sym_font_token1,
    STATE(92), 1,
      sym_part,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [934] = 4,
    ACTIONS(181), 1,
      aux_sym_font_token1,
    STATE(63), 1,
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
  [952] = 3,
    ACTIONS(189), 1,
      anon_sym_light,
    ACTIONS(191), 1,
      anon_sym_dark,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [968] = 2,
    ACTIONS(195), 1,
      sym_offset,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [982] = 2,
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
  [995] = 2,
    ACTIONS(199), 1,
      sym_offset,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1008] = 2,
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
  [1021] = 2,
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
  [1034] = 1,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1045] = 1,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1056] = 2,
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
  [1069] = 2,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1082] = 2,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1095] = 2,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1108] = 2,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1121] = 1,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1131] = 1,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1141] = 2,
    ACTIONS(173), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(175), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1153] = 1,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1163] = 1,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1173] = 1,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1183] = 1,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1193] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1203] = 1,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1213] = 1,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1223] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1233] = 1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1243] = 1,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1253] = 1,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1263] = 1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1273] = 1,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1283] = 1,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1293] = 1,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1303] = 1,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1313] = 1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1323] = 1,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1333] = 1,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1343] = 1,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1353] = 1,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1363] = 1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1373] = 1,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1383] = 1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1393] = 1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1403] = 1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1413] = 1,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1423] = 1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1433] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1443] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1453] = 1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1463] = 1,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1473] = 1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1483] = 1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1493] = 1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1503] = 1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1513] = 1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1523] = 1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1533] = 1,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1543] = 2,
    ACTIONS(293), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(291), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1555] = 1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1565] = 1,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1575] = 2,
    STATE(38), 1,
      sym_y,
    ACTIONS(299), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1585] = 5,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(303), 1,
      aux_sym__originx_token1,
    ACTIONS(305), 1,
      aux_sym__originy_token1,
    STATE(142), 1,
      sym__originy,
    STATE(144), 1,
      sym__originx,
  [1601] = 2,
    STATE(35), 1,
      sym_halign,
    ACTIONS(43), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1611] = 2,
    STATE(35), 1,
      sym_valign,
    ACTIONS(45), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1621] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(307), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1631] = 3,
    ACTIONS(309), 1,
      anon_sym_origin,
    ACTIONS(311), 1,
      anon_sym_AT,
    ACTIONS(313), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1642] = 3,
    ACTIONS(315), 1,
      anon_sym_origin,
    ACTIONS(317), 1,
      anon_sym_AT,
    ACTIONS(319), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1653] = 4,
    ACTIONS(321), 1,
      aux_sym_font_token1,
    ACTIONS(323), 1,
      sym_rgb,
    ACTIONS(325), 1,
      sym_rgba,
    STATE(57), 1,
      sym_name,
  [1666] = 3,
    ACTIONS(327), 1,
      anon_sym_origin,
    ACTIONS(329), 1,
      anon_sym_background,
    STATE(69), 2,
      sym_origin,
      sym_background,
  [1677] = 3,
    ACTIONS(331), 1,
      aux_sym_font_token1,
    STATE(26), 1,
      sym_name,
    STATE(90), 1,
      sym__component,
  [1687] = 3,
    ACTIONS(331), 1,
      aux_sym_font_token1,
    STATE(26), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [1697] = 2,
    ACTIONS(333), 1,
      anon_sym_AT,
    ACTIONS(335), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1705] = 3,
    ACTIONS(331), 1,
      aux_sym_font_token1,
    STATE(26), 1,
      sym_name,
    STATE(96), 1,
      sym__component,
  [1715] = 2,
    ACTIONS(337), 1,
      anon_sym_AT,
    ACTIONS(339), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1723] = 3,
    ACTIONS(331), 1,
      aux_sym_font_token1,
    STATE(26), 1,
      sym_name,
    STATE(95), 1,
      sym__component,
  [1733] = 3,
    ACTIONS(331), 1,
      aux_sym_font_token1,
    STATE(26), 1,
      sym_name,
    STATE(93), 1,
      sym__component,
  [1743] = 2,
    ACTIONS(341), 1,
      anon_sym_svg,
    STATE(58), 1,
      sym_svg,
  [1750] = 2,
    ACTIONS(303), 1,
      aux_sym__originx_token1,
    STATE(79), 1,
      sym__originx,
  [1757] = 2,
    ACTIONS(321), 1,
      aux_sym_font_token1,
    STATE(126), 1,
      sym_name,
  [1764] = 2,
    ACTIONS(305), 1,
      aux_sym__originy_token1,
    STATE(79), 1,
      sym__originy,
  [1771] = 2,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      sym_offset,
  [1778] = 2,
    ACTIONS(347), 1,
      anon_sym_project,
    ACTIONS(349), 1,
      anon_sym_script,
  [1785] = 1,
    ACTIONS(351), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1790] = 1,
    ACTIONS(353), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1795] = 2,
    ACTIONS(355), 1,
      anon_sym_panel,
    STATE(88), 1,
      sym_panel,
  [1802] = 2,
    ACTIONS(357), 1,
      sym_rgb,
    ACTIONS(359), 1,
      sym_rgba,
  [1809] = 1,
    ACTIONS(361), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1814] = 1,
    ACTIONS(363), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1819] = 2,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym__string,
  [1826] = 2,
    ACTIONS(367), 1,
      sym_height,
    ACTIONS(369), 1,
      sym_width,
  [1833] = 2,
    ACTIONS(371), 1,
      anon_sym_project,
    STATE(76), 1,
      sym_project,
  [1840] = 1,
    ACTIONS(99), 1,
      sym_offset,
  [1844] = 1,
    ACTIONS(373), 1,
      aux_sym_absolute_token1,
  [1848] = 1,
    ACTIONS(375), 1,
      anon_sym_COMMA,
  [1852] = 1,
    ACTIONS(377), 1,
      anon_sym_COMMA,
  [1856] = 1,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [1860] = 1,
    ACTIONS(381), 1,
      aux_sym_absolute_token1,
  [1864] = 1,
    ACTIONS(383), 1,
      anon_sym_gzip,
  [1868] = 1,
    ACTIONS(385), 1,
      anon_sym_COMMA,
  [1872] = 1,
    ACTIONS(387), 1,
      anon_sym_COMMA,
  [1876] = 1,
    ACTIONS(383), 1,
      anon_sym_timestamp,
  [1880] = 1,
    ACTIONS(389), 1,
      anon_sym_COMMA,
  [1884] = 1,
    ACTIONS(391), 1,
      sym_width,
  [1888] = 1,
    ACTIONS(393), 1,
      aux_sym__string_token1,
  [1892] = 1,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
  [1896] = 1,
    ACTIONS(397), 1,
      anon_sym_COMMA,
  [1900] = 1,
    ACTIONS(399), 1,
      aux_sym_absolute_token1,
  [1904] = 1,
    ACTIONS(401), 1,
      anon_sym_COMMA,
  [1908] = 1,
    ACTIONS(403), 1,
      aux_sym_origin_token1,
  [1912] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
  [1916] = 1,
    ACTIONS(407), 1,
      aux_sym_origin_token1,
  [1920] = 1,
    ACTIONS(409), 1,
      sym_rgb,
  [1924] = 1,
    ACTIONS(409), 1,
      sym_rgba,
  [1928] = 1,
    ACTIONS(411), 1,
      aux_sym_absolute_token1,
  [1932] = 1,
    ACTIONS(413), 1,
      aux_sym_absolute_token1,
  [1936] = 1,
    ACTIONS(415), 1,
      anon_sym_COMMA,
  [1940] = 1,
    ACTIONS(417), 1,
      anon_sym_COMMA,
  [1944] = 1,
    ACTIONS(419), 1,
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
  [SMALL_STATE(22)] = 658,
  [SMALL_STATE(23)] = 677,
  [SMALL_STATE(24)] = 694,
  [SMALL_STATE(25)] = 713,
  [SMALL_STATE(26)] = 732,
  [SMALL_STATE(27)] = 753,
  [SMALL_STATE(28)] = 768,
  [SMALL_STATE(29)] = 783,
  [SMALL_STATE(30)] = 802,
  [SMALL_STATE(31)] = 823,
  [SMALL_STATE(32)] = 842,
  [SMALL_STATE(33)] = 856,
  [SMALL_STATE(34)] = 872,
  [SMALL_STATE(35)] = 888,
  [SMALL_STATE(36)] = 902,
  [SMALL_STATE(37)] = 916,
  [SMALL_STATE(38)] = 934,
  [SMALL_STATE(39)] = 952,
  [SMALL_STATE(40)] = 968,
  [SMALL_STATE(41)] = 982,
  [SMALL_STATE(42)] = 995,
  [SMALL_STATE(43)] = 1008,
  [SMALL_STATE(44)] = 1021,
  [SMALL_STATE(45)] = 1034,
  [SMALL_STATE(46)] = 1045,
  [SMALL_STATE(47)] = 1056,
  [SMALL_STATE(48)] = 1069,
  [SMALL_STATE(49)] = 1082,
  [SMALL_STATE(50)] = 1095,
  [SMALL_STATE(51)] = 1108,
  [SMALL_STATE(52)] = 1121,
  [SMALL_STATE(53)] = 1131,
  [SMALL_STATE(54)] = 1141,
  [SMALL_STATE(55)] = 1153,
  [SMALL_STATE(56)] = 1163,
  [SMALL_STATE(57)] = 1173,
  [SMALL_STATE(58)] = 1183,
  [SMALL_STATE(59)] = 1193,
  [SMALL_STATE(60)] = 1203,
  [SMALL_STATE(61)] = 1213,
  [SMALL_STATE(62)] = 1223,
  [SMALL_STATE(63)] = 1233,
  [SMALL_STATE(64)] = 1243,
  [SMALL_STATE(65)] = 1253,
  [SMALL_STATE(66)] = 1263,
  [SMALL_STATE(67)] = 1273,
  [SMALL_STATE(68)] = 1283,
  [SMALL_STATE(69)] = 1293,
  [SMALL_STATE(70)] = 1303,
  [SMALL_STATE(71)] = 1313,
  [SMALL_STATE(72)] = 1323,
  [SMALL_STATE(73)] = 1333,
  [SMALL_STATE(74)] = 1343,
  [SMALL_STATE(75)] = 1353,
  [SMALL_STATE(76)] = 1363,
  [SMALL_STATE(77)] = 1373,
  [SMALL_STATE(78)] = 1383,
  [SMALL_STATE(79)] = 1393,
  [SMALL_STATE(80)] = 1403,
  [SMALL_STATE(81)] = 1413,
  [SMALL_STATE(82)] = 1423,
  [SMALL_STATE(83)] = 1433,
  [SMALL_STATE(84)] = 1443,
  [SMALL_STATE(85)] = 1453,
  [SMALL_STATE(86)] = 1463,
  [SMALL_STATE(87)] = 1473,
  [SMALL_STATE(88)] = 1483,
  [SMALL_STATE(89)] = 1493,
  [SMALL_STATE(90)] = 1503,
  [SMALL_STATE(91)] = 1513,
  [SMALL_STATE(92)] = 1523,
  [SMALL_STATE(93)] = 1533,
  [SMALL_STATE(94)] = 1543,
  [SMALL_STATE(95)] = 1555,
  [SMALL_STATE(96)] = 1565,
  [SMALL_STATE(97)] = 1575,
  [SMALL_STATE(98)] = 1585,
  [SMALL_STATE(99)] = 1601,
  [SMALL_STATE(100)] = 1611,
  [SMALL_STATE(101)] = 1621,
  [SMALL_STATE(102)] = 1631,
  [SMALL_STATE(103)] = 1642,
  [SMALL_STATE(104)] = 1653,
  [SMALL_STATE(105)] = 1666,
  [SMALL_STATE(106)] = 1677,
  [SMALL_STATE(107)] = 1687,
  [SMALL_STATE(108)] = 1697,
  [SMALL_STATE(109)] = 1705,
  [SMALL_STATE(110)] = 1715,
  [SMALL_STATE(111)] = 1723,
  [SMALL_STATE(112)] = 1733,
  [SMALL_STATE(113)] = 1743,
  [SMALL_STATE(114)] = 1750,
  [SMALL_STATE(115)] = 1757,
  [SMALL_STATE(116)] = 1764,
  [SMALL_STATE(117)] = 1771,
  [SMALL_STATE(118)] = 1778,
  [SMALL_STATE(119)] = 1785,
  [SMALL_STATE(120)] = 1790,
  [SMALL_STATE(121)] = 1795,
  [SMALL_STATE(122)] = 1802,
  [SMALL_STATE(123)] = 1809,
  [SMALL_STATE(124)] = 1814,
  [SMALL_STATE(125)] = 1819,
  [SMALL_STATE(126)] = 1826,
  [SMALL_STATE(127)] = 1833,
  [SMALL_STATE(128)] = 1840,
  [SMALL_STATE(129)] = 1844,
  [SMALL_STATE(130)] = 1848,
  [SMALL_STATE(131)] = 1852,
  [SMALL_STATE(132)] = 1856,
  [SMALL_STATE(133)] = 1860,
  [SMALL_STATE(134)] = 1864,
  [SMALL_STATE(135)] = 1868,
  [SMALL_STATE(136)] = 1872,
  [SMALL_STATE(137)] = 1876,
  [SMALL_STATE(138)] = 1880,
  [SMALL_STATE(139)] = 1884,
  [SMALL_STATE(140)] = 1888,
  [SMALL_STATE(141)] = 1892,
  [SMALL_STATE(142)] = 1896,
  [SMALL_STATE(143)] = 1900,
  [SMALL_STATE(144)] = 1904,
  [SMALL_STATE(145)] = 1908,
  [SMALL_STATE(146)] = 1912,
  [SMALL_STATE(147)] = 1916,
  [SMALL_STATE(148)] = 1920,
  [SMALL_STATE(149)] = 1924,
  [SMALL_STATE(150)] = 1928,
  [SMALL_STATE(151)] = 1932,
  [SMALL_STATE(152)] = 1936,
  [SMALL_STATE(153)] = 1940,
  [SMALL_STATE(154)] = 1944,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(105),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(118),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(127),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(121),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [405] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
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
