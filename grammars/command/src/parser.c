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
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 8

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_module = 4,
  anon_sym_input = 5,
  anon_sym_output = 6,
  aux_sym_parameter_token1 = 7,
  anon_sym_light = 8,
  anon_sym_widget = 9,
  anon_sym_COMMA = 10,
  anon_sym_label = 11,
  aux_sym_font_token1 = 12,
  sym_fontsize = 13,
  anon_sym_left = 14,
  anon_sym_centre = 15,
  anon_sym_center = 16,
  anon_sym_right = 17,
  anon_sym_top = 18,
  anon_sym_middle = 19,
  anon_sym_baseline = 20,
  anon_sym_bottom = 21,
  anon_sym_origin = 22,
  anon_sym_AT = 23,
  aux_sym_origin_token1 = 24,
  aux_sym__originx_token1 = 25,
  aux_sym__originy_token1 = 26,
  anon_sym_background = 27,
  sym_rgb = 28,
  sym_rgba = 29,
  anon_sym_load = 30,
  anon_sym_script = 31,
  anon_sym_export = 32,
  anon_sym_panel = 33,
  anon_sym_svg = 34,
  anon_sym_dark = 35,
  sym_height = 36,
  sym_width = 37,
  anon_sym_guide = 38,
  aux_sym_identifier_token1 = 39,
  anon_sym_vertical = 40,
  anon_sym_horizontal = 41,
  sym_offset = 42,
  anon_sym_DQUOTE = 43,
  aux_sym__string_token1 = 44,
  aux_sym_absolute_token1 = 45,
  sym_command = 46,
  sym_new = 47,
  sym_set = 48,
  sym__entity = 49,
  sym_module = 50,
  sym_input = 51,
  sym_output = 52,
  sym_parameter = 53,
  sym_light = 54,
  sym_widget = 55,
  sym__component = 56,
  sym_label = 57,
  sym_font = 58,
  sym__align = 59,
  sym_halign = 60,
  sym_valign = 61,
  sym_colour = 62,
  sym_origin = 63,
  sym__originx = 64,
  sym__originy = 65,
  sym_background = 66,
  sym_load = 67,
  sym_export = 68,
  sym_panel = 69,
  sym_svg = 70,
  sym_name = 71,
  sym_part = 72,
  sym_guide = 73,
  sym_identifier = 74,
  sym_vertical = 75,
  sym_horizontal = 76,
  sym_geometry = 77,
  sym_guideline = 78,
  sym__string = 79,
  sym_absolute = 80,
  sym_relative = 81,
  sym_x = 82,
  sym_y = 83,
  aux_sym_command_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
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
  [anon_sym_load] = "load",
  [anon_sym_script] = "script",
  [anon_sym_export] = "export",
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
  [sym_load] = "load",
  [sym_export] = "export",
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
  [anon_sym_load] = anon_sym_load,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_export] = anon_sym_export,
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
  [sym_load] = sym_load,
  [sym_export] = sym_export,
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
  [33] = 33,
  [34] = 10,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 13,
  [41] = 41,
  [42] = 32,
  [43] = 11,
  [44] = 12,
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
  [141] = 128,
  [142] = 137,
  [143] = 134,
  [144] = 127,
  [145] = 135,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(210);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'g') ADVANCE(182);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(92);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == 'm') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == 'v') ADVANCE(325);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(296);
      if (lookahead == 'U') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(296);
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(296);
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'H') ADVANCE(296);
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'U') ADVANCE(312);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'H') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(187);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(117);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(211);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(330);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 184:
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 185:
      if (lookahead == 'x') ADVANCE(144);
      END_STATE();
    case 186:
      if (lookahead == 'z') ADVANCE(135);
      END_STATE();
    case 187:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 206:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 207:
      if (eof) ADVANCE(210);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(207)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 208:
      if (eof) ADVANCE(210);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(208)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 209:
      if (eof) ADVANCE(210);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(209)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 207},
  [3] = {.lex_state = 207},
  [4] = {.lex_state = 209},
  [5] = {.lex_state = 209},
  [6] = {.lex_state = 209},
  [7] = {.lex_state = 209},
  [8] = {.lex_state = 209},
  [9] = {.lex_state = 209},
  [10] = {.lex_state = 207},
  [11] = {.lex_state = 207},
  [12] = {.lex_state = 207},
  [13] = {.lex_state = 207},
  [14] = {.lex_state = 209},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 209},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 208},
  [35] = {.lex_state = 208},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 208},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 208},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 208},
  [44] = {.lex_state = 208},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 209},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 209},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 39},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 207},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 28},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 207},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 207},
  [116] = {.lex_state = 209},
  [117] = {.lex_state = 207},
  [118] = {.lex_state = 207},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 207},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 190},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 207},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 209},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
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
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
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
    [sym_command] = STATE(138),
    [sym_new] = STATE(18),
    [sym_set] = STATE(18),
    [sym_load] = STATE(18),
    [sym_export] = STATE(18),
    [aux_sym_command_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(19), 1,
      aux_sym_font_token1,
    ACTIONS(21), 1,
      sym_fontsize,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(4), 1,
      sym_font,
    STATE(24), 1,
      sym_halign,
    STATE(25), 1,
      sym__align,
    STATE(27), 1,
      sym_valign,
    STATE(87), 1,
      sym_colour,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(17), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
    ACTIONS(23), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(25), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [50] = 13,
    ACTIONS(19), 1,
      aux_sym_font_token1,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    ACTIONS(35), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(24), 1,
      sym_halign,
    STATE(27), 1,
      sym_valign,
    STATE(30), 1,
      sym__align,
    STATE(74), 1,
      sym_colour,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(23), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(25), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(33), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [100] = 10,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    ACTIONS(39), 1,
      sym_fontsize,
    STATE(24), 1,
      sym_halign,
    STATE(27), 1,
      sym_valign,
    STATE(29), 1,
      sym__align,
    STATE(55), 1,
      sym_colour,
    ACTIONS(41), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(43), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [142] = 10,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    ACTIONS(47), 1,
      sym_fontsize,
    STATE(24), 1,
      sym_halign,
    STATE(27), 1,
      sym_valign,
    STATE(31), 1,
      sym__align,
    STATE(62), 1,
      sym_colour,
    ACTIONS(41), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(43), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [184] = 9,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(24), 1,
      sym_halign,
    STATE(26), 1,
      sym__align,
    STATE(27), 1,
      sym_valign,
    STATE(59), 1,
      sym_colour,
    ACTIONS(41), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(43), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [223] = 9,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(24), 1,
      sym_halign,
    STATE(27), 1,
      sym_valign,
    STATE(31), 1,
      sym__align,
    STATE(62), 1,
      sym_colour,
    ACTIONS(41), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(43), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [262] = 9,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(24), 1,
      sym_halign,
    STATE(27), 1,
      sym_valign,
    STATE(29), 1,
      sym__align,
    STATE(55), 1,
      sym_colour,
    ACTIONS(41), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(43), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [301] = 9,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(24), 1,
      sym_halign,
    STATE(27), 1,
      sym_valign,
    STATE(30), 1,
      sym__align,
    STATE(74), 1,
      sym_colour,
    ACTIONS(41), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(43), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [340] = 3,
    ACTIONS(55), 1,
      sym_offset,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(53), 14,
      anon_sym_new,
      anon_sym_set,
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
      anon_sym_load,
      anon_sym_export,
  [366] = 2,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(59), 14,
      anon_sym_new,
      anon_sym_set,
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
      anon_sym_load,
      anon_sym_export,
  [389] = 2,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(63), 14,
      anon_sym_new,
      anon_sym_set,
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
      anon_sym_load,
      anon_sym_export,
  [412] = 2,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(67), 14,
      anon_sym_new,
      anon_sym_set,
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
      anon_sym_load,
      anon_sym_export,
  [435] = 2,
    ACTIONS(71), 1,
      sym_rgb,
    ACTIONS(69), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
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
      anon_sym_load,
      anon_sym_export,
  [457] = 9,
    ACTIONS(73), 1,
      anon_sym_module,
    ACTIONS(75), 1,
      anon_sym_input,
    ACTIONS(77), 1,
      anon_sym_output,
    ACTIONS(79), 1,
      aux_sym_parameter_token1,
    ACTIONS(81), 1,
      anon_sym_light,
    ACTIONS(83), 1,
      anon_sym_widget,
    ACTIONS(85), 1,
      anon_sym_label,
    ACTIONS(87), 1,
      anon_sym_guide,
    STATE(71), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [493] = 7,
    ACTIONS(91), 1,
      aux_sym_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_vertical,
    ACTIONS(95), 1,
      anon_sym_horizontal,
    ACTIONS(97), 1,
      sym_offset,
    STATE(139), 1,
      sym_identifier,
    STATE(72), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(89), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [524] = 6,
    ACTIONS(91), 1,
      aux_sym_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_vertical,
    ACTIONS(95), 1,
      anon_sym_horizontal,
    STATE(16), 1,
      sym_identifier,
    STATE(77), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(89), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [552] = 7,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_comment,
    STATE(20), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [578] = 2,
    ACTIONS(105), 1,
      sym_offset,
    ACTIONS(103), 10,
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
  [594] = 7,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_new,
    ACTIONS(115), 1,
      anon_sym_set,
    ACTIONS(118), 1,
      anon_sym_load,
    ACTIONS(121), 1,
      anon_sym_export,
    STATE(20), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [620] = 5,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      aux_sym_absolute_token1,
    STATE(131), 1,
      sym_x,
    STATE(2), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(124), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [641] = 5,
    ACTIONS(130), 1,
      anon_sym_AT,
    ACTIONS(132), 1,
      aux_sym_absolute_token1,
    STATE(121), 1,
      sym_x,
    STATE(38), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(124), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [662] = 2,
    ACTIONS(136), 1,
      sym_rgb,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      sym_rgba,
      anon_sym_load,
      anon_sym_export,
  [676] = 3,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      sym_rgb,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      sym_rgba,
      anon_sym_load,
      anon_sym_export,
  [692] = 4,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(55), 1,
      sym_colour,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [710] = 4,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(57), 1,
      sym_colour,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [728] = 3,
    ACTIONS(142), 1,
      sym_rgb,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      sym_rgba,
      anon_sym_load,
      anon_sym_export,
  [744] = 2,
    ACTIONS(150), 1,
      sym_rgb,
    ACTIONS(148), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      sym_rgba,
      anon_sym_load,
      anon_sym_export,
  [758] = 4,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(74), 1,
      sym_colour,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [776] = 4,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(62), 1,
      sym_colour,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [794] = 4,
    ACTIONS(27), 1,
      sym_rgb,
    ACTIONS(29), 1,
      sym_rgba,
    STATE(59), 1,
      sym_colour,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [812] = 2,
    ACTIONS(154), 1,
      sym_width,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      sym_height,
  [825] = 3,
    ACTIONS(158), 1,
      anon_sym_light,
    ACTIONS(160), 1,
      anon_sym_dark,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [840] = 3,
    ACTIONS(162), 1,
      sym_offset,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(53), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [855] = 4,
    ACTIONS(168), 1,
      aux_sym_font_token1,
    STATE(76), 1,
      sym_part,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [872] = 2,
    ACTIONS(172), 1,
      sym_offset,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [885] = 2,
    ACTIONS(176), 1,
      sym_offset,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [898] = 4,
    ACTIONS(168), 1,
      aux_sym_font_token1,
    STATE(85), 1,
      sym_part,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(180), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [915] = 2,
    ACTIONS(184), 1,
      sym_rgb,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      sym_rgba,
      anon_sym_load,
      anon_sym_export,
  [928] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [940] = 1,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [950] = 2,
    ACTIONS(152), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(154), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [962] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [974] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(63), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [986] = 2,
    ACTIONS(190), 1,
      sym_offset,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [998] = 2,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1010] = 2,
    ACTIONS(198), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(196), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1022] = 2,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1034] = 2,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1046] = 1,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [1056] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1065] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1074] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1083] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1092] = 1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1101] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1110] = 1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1119] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1128] = 1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1137] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1146] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1155] = 1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1164] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1173] = 1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1182] = 1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1191] = 1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1200] = 1,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1209] = 1,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1218] = 1,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1227] = 1,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1236] = 1,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1245] = 1,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1254] = 1,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1263] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1272] = 1,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1281] = 1,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1290] = 1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1299] = 1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1308] = 1,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1317] = 1,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1326] = 1,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1335] = 1,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1344] = 1,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1353] = 1,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1362] = 1,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1371] = 1,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1380] = 1,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1389] = 1,
    ACTIONS(270), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1398] = 1,
    ACTIONS(272), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1407] = 1,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1416] = 2,
    STATE(39), 1,
      sym_halign,
    ACTIONS(41), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1426] = 5,
    ACTIONS(276), 1,
      anon_sym_AT,
    ACTIONS(278), 1,
      aux_sym__originx_token1,
    ACTIONS(280), 1,
      aux_sym__originy_token1,
    STATE(126), 1,
      sym__originy,
    STATE(130), 1,
      sym__originx,
  [1442] = 2,
    STATE(39), 1,
      sym_valign,
    ACTIONS(43), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1452] = 2,
    STATE(35), 1,
      sym_y,
    ACTIONS(282), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1462] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(284), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1472] = 3,
    ACTIONS(286), 1,
      anon_sym_origin,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(290), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1483] = 4,
    ACTIONS(292), 1,
      aux_sym_font_token1,
    ACTIONS(294), 1,
      sym_rgb,
    ACTIONS(296), 1,
      sym_rgba,
    STATE(53), 1,
      sym_name,
  [1496] = 3,
    ACTIONS(298), 1,
      anon_sym_origin,
    ACTIONS(300), 1,
      anon_sym_background,
    STATE(58), 2,
      sym_origin,
      sym_background,
  [1507] = 3,
    ACTIONS(302), 1,
      anon_sym_origin,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(306), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1518] = 3,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [1528] = 2,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(312), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1536] = 3,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(90), 1,
      sym__component,
  [1546] = 2,
    ACTIONS(314), 1,
      anon_sym_AT,
    ACTIONS(316), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1554] = 3,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(52), 1,
      sym__component,
  [1564] = 3,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(51), 1,
      sym__component,
  [1574] = 3,
    ACTIONS(308), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(88), 1,
      sym__component,
  [1584] = 2,
    ACTIONS(278), 1,
      aux_sym__originx_token1,
    STATE(65), 1,
      sym__originx,
  [1591] = 2,
    ACTIONS(280), 1,
      aux_sym__originy_token1,
    STATE(65), 1,
      sym__originy,
  [1598] = 2,
    ACTIONS(318), 1,
      anon_sym_svg,
    STATE(54), 1,
      sym_svg,
  [1605] = 2,
    ACTIONS(320), 1,
      anon_sym_panel,
    STATE(61), 1,
      sym_panel,
  [1612] = 1,
    ACTIONS(322), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1617] = 2,
    ACTIONS(292), 1,
      aux_sym_font_token1,
    STATE(116), 1,
      sym_name,
  [1624] = 2,
    ACTIONS(324), 1,
      sym_rgb,
    ACTIONS(326), 1,
      sym_rgba,
  [1631] = 2,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      sym_offset,
  [1638] = 1,
    ACTIONS(332), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1643] = 2,
    ACTIONS(334), 1,
      sym_height,
    ACTIONS(336), 1,
      sym_width,
  [1650] = 1,
    ACTIONS(338), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1655] = 1,
    ACTIONS(340), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1660] = 2,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym__string,
  [1667] = 1,
    ACTIONS(344), 1,
      anon_sym_COMMA,
  [1671] = 1,
    ACTIONS(346), 1,
      anon_sym_COMMA,
  [1675] = 1,
    ACTIONS(348), 1,
      anon_sym_COMMA,
  [1679] = 1,
    ACTIONS(350), 1,
      sym_rgba,
  [1683] = 1,
    ACTIONS(350), 1,
      sym_rgb,
  [1687] = 1,
    ACTIONS(352), 1,
      aux_sym_origin_token1,
  [1691] = 1,
    ACTIONS(354), 1,
      anon_sym_COMMA,
  [1695] = 1,
    ACTIONS(356), 1,
      anon_sym_COMMA,
  [1699] = 1,
    ACTIONS(358), 1,
      aux_sym_absolute_token1,
  [1703] = 1,
    ACTIONS(360), 1,
      aux_sym__string_token1,
  [1707] = 1,
    ACTIONS(362), 1,
      anon_sym_COMMA,
  [1711] = 1,
    ACTIONS(364), 1,
      anon_sym_COMMA,
  [1715] = 1,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
  [1719] = 1,
    ACTIONS(368), 1,
      aux_sym_origin_token1,
  [1723] = 1,
    ACTIONS(370), 1,
      anon_sym_COMMA,
  [1727] = 1,
    ACTIONS(372), 1,
      aux_sym_absolute_token1,
  [1731] = 1,
    ACTIONS(374), 1,
      sym_width,
  [1735] = 1,
    ACTIONS(376), 1,
      aux_sym_absolute_token1,
  [1739] = 1,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
  [1743] = 1,
    ACTIONS(97), 1,
      sym_offset,
  [1747] = 1,
    ACTIONS(380), 1,
      anon_sym_script,
  [1751] = 1,
    ACTIONS(382), 1,
      aux_sym_absolute_token1,
  [1755] = 1,
    ACTIONS(384), 1,
      aux_sym_absolute_token1,
  [1759] = 1,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [1763] = 1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
  [1767] = 1,
    ACTIONS(390), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 412,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 457,
  [SMALL_STATE(16)] = 493,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 552,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 620,
  [SMALL_STATE(22)] = 641,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 676,
  [SMALL_STATE(25)] = 692,
  [SMALL_STATE(26)] = 710,
  [SMALL_STATE(27)] = 728,
  [SMALL_STATE(28)] = 744,
  [SMALL_STATE(29)] = 758,
  [SMALL_STATE(30)] = 776,
  [SMALL_STATE(31)] = 794,
  [SMALL_STATE(32)] = 812,
  [SMALL_STATE(33)] = 825,
  [SMALL_STATE(34)] = 840,
  [SMALL_STATE(35)] = 855,
  [SMALL_STATE(36)] = 872,
  [SMALL_STATE(37)] = 885,
  [SMALL_STATE(38)] = 898,
  [SMALL_STATE(39)] = 915,
  [SMALL_STATE(40)] = 928,
  [SMALL_STATE(41)] = 940,
  [SMALL_STATE(42)] = 950,
  [SMALL_STATE(43)] = 962,
  [SMALL_STATE(44)] = 974,
  [SMALL_STATE(45)] = 986,
  [SMALL_STATE(46)] = 998,
  [SMALL_STATE(47)] = 1010,
  [SMALL_STATE(48)] = 1022,
  [SMALL_STATE(49)] = 1034,
  [SMALL_STATE(50)] = 1046,
  [SMALL_STATE(51)] = 1056,
  [SMALL_STATE(52)] = 1065,
  [SMALL_STATE(53)] = 1074,
  [SMALL_STATE(54)] = 1083,
  [SMALL_STATE(55)] = 1092,
  [SMALL_STATE(56)] = 1101,
  [SMALL_STATE(57)] = 1110,
  [SMALL_STATE(58)] = 1119,
  [SMALL_STATE(59)] = 1128,
  [SMALL_STATE(60)] = 1137,
  [SMALL_STATE(61)] = 1146,
  [SMALL_STATE(62)] = 1155,
  [SMALL_STATE(63)] = 1164,
  [SMALL_STATE(64)] = 1173,
  [SMALL_STATE(65)] = 1182,
  [SMALL_STATE(66)] = 1191,
  [SMALL_STATE(67)] = 1200,
  [SMALL_STATE(68)] = 1209,
  [SMALL_STATE(69)] = 1218,
  [SMALL_STATE(70)] = 1227,
  [SMALL_STATE(71)] = 1236,
  [SMALL_STATE(72)] = 1245,
  [SMALL_STATE(73)] = 1254,
  [SMALL_STATE(74)] = 1263,
  [SMALL_STATE(75)] = 1272,
  [SMALL_STATE(76)] = 1281,
  [SMALL_STATE(77)] = 1290,
  [SMALL_STATE(78)] = 1299,
  [SMALL_STATE(79)] = 1308,
  [SMALL_STATE(80)] = 1317,
  [SMALL_STATE(81)] = 1326,
  [SMALL_STATE(82)] = 1335,
  [SMALL_STATE(83)] = 1344,
  [SMALL_STATE(84)] = 1353,
  [SMALL_STATE(85)] = 1362,
  [SMALL_STATE(86)] = 1371,
  [SMALL_STATE(87)] = 1380,
  [SMALL_STATE(88)] = 1389,
  [SMALL_STATE(89)] = 1398,
  [SMALL_STATE(90)] = 1407,
  [SMALL_STATE(91)] = 1416,
  [SMALL_STATE(92)] = 1426,
  [SMALL_STATE(93)] = 1442,
  [SMALL_STATE(94)] = 1452,
  [SMALL_STATE(95)] = 1462,
  [SMALL_STATE(96)] = 1472,
  [SMALL_STATE(97)] = 1483,
  [SMALL_STATE(98)] = 1496,
  [SMALL_STATE(99)] = 1507,
  [SMALL_STATE(100)] = 1518,
  [SMALL_STATE(101)] = 1528,
  [SMALL_STATE(102)] = 1536,
  [SMALL_STATE(103)] = 1546,
  [SMALL_STATE(104)] = 1554,
  [SMALL_STATE(105)] = 1564,
  [SMALL_STATE(106)] = 1574,
  [SMALL_STATE(107)] = 1584,
  [SMALL_STATE(108)] = 1591,
  [SMALL_STATE(109)] = 1598,
  [SMALL_STATE(110)] = 1605,
  [SMALL_STATE(111)] = 1612,
  [SMALL_STATE(112)] = 1617,
  [SMALL_STATE(113)] = 1624,
  [SMALL_STATE(114)] = 1631,
  [SMALL_STATE(115)] = 1638,
  [SMALL_STATE(116)] = 1643,
  [SMALL_STATE(117)] = 1650,
  [SMALL_STATE(118)] = 1655,
  [SMALL_STATE(119)] = 1660,
  [SMALL_STATE(120)] = 1667,
  [SMALL_STATE(121)] = 1671,
  [SMALL_STATE(122)] = 1675,
  [SMALL_STATE(123)] = 1679,
  [SMALL_STATE(124)] = 1683,
  [SMALL_STATE(125)] = 1687,
  [SMALL_STATE(126)] = 1691,
  [SMALL_STATE(127)] = 1695,
  [SMALL_STATE(128)] = 1699,
  [SMALL_STATE(129)] = 1703,
  [SMALL_STATE(130)] = 1707,
  [SMALL_STATE(131)] = 1711,
  [SMALL_STATE(132)] = 1715,
  [SMALL_STATE(133)] = 1719,
  [SMALL_STATE(134)] = 1723,
  [SMALL_STATE(135)] = 1727,
  [SMALL_STATE(136)] = 1731,
  [SMALL_STATE(137)] = 1735,
  [SMALL_STATE(138)] = 1739,
  [SMALL_STATE(139)] = 1743,
  [SMALL_STATE(140)] = 1747,
  [SMALL_STATE(141)] = 1751,
  [SMALL_STATE(142)] = 1755,
  [SMALL_STATE(143)] = 1759,
  [SMALL_STATE(144)] = 1763,
  [SMALL_STATE(145)] = 1767,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(98),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(140),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(110),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [378] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
