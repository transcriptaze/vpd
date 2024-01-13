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
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  sym__align = 58,
  sym_font = 59,
  sym_halign = 60,
  sym_valign = 61,
  sym_origin = 62,
  sym__originx = 63,
  sym__originy = 64,
  sym_background = 65,
  sym_load = 66,
  sym_export = 67,
  sym_panel = 68,
  sym_svg = 69,
  sym_name = 70,
  sym_part = 71,
  sym_guide = 72,
  sym_identifier = 73,
  sym_vertical = 74,
  sym_horizontal = 75,
  sym_geometry = 76,
  sym_guideline = 77,
  sym__string = 78,
  sym_absolute = 79,
  sym_relative = 80,
  sym_x = 81,
  sym_y = 82,
  aux_sym_command_repeat1 = 83,
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
  [sym__align] = "_align",
  [sym_font] = "font",
  [sym_halign] = "halign",
  [sym_valign] = "valign",
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
  [sym__align] = sym__align,
  [sym_font] = sym_font,
  [sym_halign] = sym_halign,
  [sym_valign] = sym_valign,
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
  [sym__align] = {
    .visible = false,
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
  [sym_valign] = {
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
  [26] = 10,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 24,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 12,
  [42] = 15,
  [43] = 13,
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
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 125,
  [134] = 111,
  [135] = 119,
  [136] = 116,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(216);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'g') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'v') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(91);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == 'v') ADVANCE(339);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '8') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(311);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '5') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '8') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(186);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 27:
      if (lookahead == '5') ADVANCE(116);
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(344);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 183:
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 184:
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 185:
      if (lookahead == 'z') ADVANCE(134);
      END_STATE();
    case 186:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(376);
      if (lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 212:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 213:
      if (eof) ADVANCE(216);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(213)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 214:
      if (eof) ADVANCE(216);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(214)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'g') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 215},
  [2] = {.lex_state = 213},
  [3] = {.lex_state = 213},
  [4] = {.lex_state = 215},
  [5] = {.lex_state = 215},
  [6] = {.lex_state = 215},
  [7] = {.lex_state = 215},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 215},
  [10] = {.lex_state = 213},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 213},
  [13] = {.lex_state = 213},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 213},
  [16] = {.lex_state = 215},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 215},
  [19] = {.lex_state = 215},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 214},
  [24] = {.lex_state = 215},
  [25] = {.lex_state = 215},
  [26] = {.lex_state = 214},
  [27] = {.lex_state = 214},
  [28] = {.lex_state = 215},
  [29] = {.lex_state = 215},
  [30] = {.lex_state = 215},
  [31] = {.lex_state = 215},
  [32] = {.lex_state = 215},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 215},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 215},
  [37] = {.lex_state = 215},
  [38] = {.lex_state = 215},
  [39] = {.lex_state = 215},
  [40] = {.lex_state = 215},
  [41] = {.lex_state = 214},
  [42] = {.lex_state = 214},
  [43] = {.lex_state = 214},
  [44] = {.lex_state = 215},
  [45] = {.lex_state = 215},
  [46] = {.lex_state = 215},
  [47] = {.lex_state = 215},
  [48] = {.lex_state = 215},
  [49] = {.lex_state = 215},
  [50] = {.lex_state = 215},
  [51] = {.lex_state = 215},
  [52] = {.lex_state = 215},
  [53] = {.lex_state = 215},
  [54] = {.lex_state = 215},
  [55] = {.lex_state = 215},
  [56] = {.lex_state = 215},
  [57] = {.lex_state = 215},
  [58] = {.lex_state = 215},
  [59] = {.lex_state = 215},
  [60] = {.lex_state = 215},
  [61] = {.lex_state = 215},
  [62] = {.lex_state = 215},
  [63] = {.lex_state = 215},
  [64] = {.lex_state = 215},
  [65] = {.lex_state = 215},
  [66] = {.lex_state = 215},
  [67] = {.lex_state = 215},
  [68] = {.lex_state = 215},
  [69] = {.lex_state = 215},
  [70] = {.lex_state = 215},
  [71] = {.lex_state = 215},
  [72] = {.lex_state = 215},
  [73] = {.lex_state = 215},
  [74] = {.lex_state = 215},
  [75] = {.lex_state = 215},
  [76] = {.lex_state = 215},
  [77] = {.lex_state = 215},
  [78] = {.lex_state = 215},
  [79] = {.lex_state = 215},
  [80] = {.lex_state = 215},
  [81] = {.lex_state = 215},
  [82] = {.lex_state = 215},
  [83] = {.lex_state = 38},
  [84] = {.lex_state = 38},
  [85] = {.lex_state = 215},
  [86] = {.lex_state = 215},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 28},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 28},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 213},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 213},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 215},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 213},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 213},
  [106] = {.lex_state = 213},
  [107] = {.lex_state = 213},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 189},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 215},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 213},
  [127] = {.lex_state = 213},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
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
    [sym_command] = STATE(129),
    [sym_new] = STATE(19),
    [sym_set] = STATE(19),
    [sym_load] = STATE(19),
    [sym_export] = STATE(19),
    [aux_sym_command_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      aux_sym_font_token1,
    ACTIONS(21), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(72), 1,
      sym__align,
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
  [41] = 10,
    ACTIONS(19), 1,
      aux_sym_font_token1,
    ACTIONS(31), 1,
      sym_fontsize,
    STATE(4), 1,
      sym_font,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(52), 1,
      sym__align,
    ACTIONS(27), 2,
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
    ACTIONS(29), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [82] = 7,
    ACTIONS(35), 1,
      sym_fontsize,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(48), 1,
      sym__align,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(39), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [115] = 7,
    ACTIONS(43), 1,
      sym_fontsize,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(58), 1,
      sym__align,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(39), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [148] = 6,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(48), 1,
      sym__align,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(39), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [178] = 6,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(47), 1,
      sym__align,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(39), 4,
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
  [208] = 6,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(58), 1,
      sym__align,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(39), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [238] = 6,
    STATE(38), 1,
      sym_halign,
    STATE(40), 1,
      sym_valign,
    STATE(52), 1,
      sym__align,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(39), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [268] = 3,
    ACTIONS(51), 1,
      sym_offset,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(49), 13,
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
      anon_sym_load,
      anon_sym_export,
  [292] = 9,
    ACTIONS(53), 1,
      anon_sym_module,
    ACTIONS(55), 1,
      anon_sym_input,
    ACTIONS(57), 1,
      anon_sym_output,
    ACTIONS(59), 1,
      aux_sym_parameter_token1,
    ACTIONS(61), 1,
      anon_sym_light,
    ACTIONS(63), 1,
      anon_sym_widget,
    ACTIONS(65), 1,
      anon_sym_label,
    ACTIONS(67), 1,
      anon_sym_guide,
    STATE(57), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [328] = 2,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(71), 13,
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
      anon_sym_load,
      anon_sym_export,
  [349] = 2,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(75), 13,
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
      anon_sym_load,
      anon_sym_export,
  [370] = 7,
    ACTIONS(79), 1,
      aux_sym_identifier_token1,
    ACTIONS(81), 1,
      anon_sym_vertical,
    ACTIONS(83), 1,
      anon_sym_horizontal,
    ACTIONS(85), 1,
      sym_offset,
    STATE(128), 1,
      sym_identifier,
    STATE(44), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(77), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [401] = 2,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(89), 13,
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
      anon_sym_load,
      anon_sym_export,
  [422] = 1,
    ACTIONS(91), 15,
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
      anon_sym_load,
      anon_sym_export,
  [440] = 6,
    ACTIONS(79), 1,
      aux_sym_identifier_token1,
    ACTIONS(81), 1,
      anon_sym_vertical,
    ACTIONS(83), 1,
      anon_sym_horizontal,
    STATE(14), 1,
      sym_identifier,
    STATE(46), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(77), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [468] = 7,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_new,
    ACTIONS(101), 1,
      anon_sym_set,
    ACTIONS(104), 1,
      anon_sym_load,
    ACTIONS(107), 1,
      anon_sym_export,
    STATE(18), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [494] = 7,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym_comment,
    STATE(18), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [520] = 2,
    ACTIONS(116), 1,
      sym_offset,
    ACTIONS(114), 10,
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
  [536] = 5,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      aux_sym_absolute_token1,
    STATE(122), 1,
      sym_x,
    STATE(2), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(118), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [557] = 5,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      aux_sym_absolute_token1,
    STATE(113), 1,
      sym_x,
    STATE(23), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(118), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [578] = 4,
    ACTIONS(132), 1,
      aux_sym_font_token1,
    STATE(81), 1,
      sym_part,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [595] = 2,
    ACTIONS(136), 1,
      sym_width,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      sym_height,
  [608] = 3,
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
  [623] = 3,
    ACTIONS(144), 1,
      sym_offset,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(49), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [638] = 4,
    ACTIONS(132), 1,
      aux_sym_font_token1,
    STATE(54), 1,
      sym_part,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [655] = 2,
    ACTIONS(152), 1,
      sym_offset,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [668] = 2,
    ACTIONS(156), 1,
      sym_offset,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [681] = 1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [691] = 1,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [701] = 1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [711] = 2,
    ACTIONS(166), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(164), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [723] = 2,
    ACTIONS(170), 1,
      sym_offset,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [735] = 2,
    ACTIONS(134), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(136), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [747] = 1,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_load,
      anon_sym_export,
  [757] = 2,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [769] = 2,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [781] = 2,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [793] = 2,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [805] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(71), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [817] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(89), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [829] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(75), 5,
      anon_sym_new,
      anon_sym_set,
      aux_sym_font_token1,
      anon_sym_load,
      anon_sym_export,
  [841] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [850] = 1,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [859] = 1,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [868] = 1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [877] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [886] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [895] = 1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [904] = 1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [913] = 1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [922] = 1,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [931] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [940] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [949] = 1,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [958] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [967] = 1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [976] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [985] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [994] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1003] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1012] = 1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1021] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1030] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1039] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1048] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1057] = 1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1066] = 1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1075] = 1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1084] = 1,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1093] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1102] = 1,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1111] = 1,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1120] = 1,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1129] = 1,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1138] = 1,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1147] = 1,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1156] = 1,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1165] = 1,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1174] = 1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1183] = 1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [1192] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(254), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1202] = 2,
    STATE(27), 1,
      sym_y,
    ACTIONS(256), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [1212] = 2,
    STATE(49), 1,
      sym_halign,
    ACTIONS(37), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1222] = 2,
    STATE(49), 1,
      sym_valign,
    ACTIONS(39), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1232] = 5,
    ACTIONS(258), 1,
      anon_sym_AT,
    ACTIONS(260), 1,
      aux_sym__originx_token1,
    ACTIONS(262), 1,
      aux_sym__originy_token1,
    STATE(112), 1,
      sym__originx,
    STATE(121), 1,
      sym__originy,
  [1248] = 3,
    ACTIONS(264), 1,
      anon_sym_origin,
    ACTIONS(266), 1,
      anon_sym_AT,
    ACTIONS(268), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1259] = 4,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    ACTIONS(272), 1,
      sym_rgb,
    ACTIONS(274), 1,
      sym_rgba,
    STATE(50), 1,
      sym_name,
  [1272] = 3,
    ACTIONS(276), 1,
      anon_sym_origin,
    ACTIONS(278), 1,
      anon_sym_AT,
    ACTIONS(280), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1283] = 3,
    ACTIONS(282), 1,
      anon_sym_origin,
    ACTIONS(284), 1,
      anon_sym_background,
    STATE(59), 2,
      sym_origin,
      sym_background,
  [1294] = 3,
    ACTIONS(286), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(75), 1,
      sym__component,
  [1304] = 3,
    ACTIONS(286), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(73), 1,
      sym__component,
  [1314] = 3,
    ACTIONS(286), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(74), 1,
      sym__component,
  [1324] = 2,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(290), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1332] = 3,
    ACTIONS(286), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(76), 1,
      sym__component,
  [1342] = 2,
    ACTIONS(292), 1,
      anon_sym_AT,
    ACTIONS(294), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1350] = 3,
    ACTIONS(286), 1,
      aux_sym_font_token1,
    STATE(22), 1,
      sym_name,
    STATE(80), 1,
      sym__component,
  [1360] = 2,
    ACTIONS(262), 1,
      aux_sym__originy_token1,
    STATE(64), 1,
      sym__originy,
  [1367] = 2,
    ACTIONS(296), 1,
      anon_sym_panel,
    STATE(71), 1,
      sym_panel,
  [1374] = 2,
    ACTIONS(298), 1,
      sym_height,
    ACTIONS(300), 1,
      sym_width,
  [1381] = 2,
    ACTIONS(302), 1,
      anon_sym_svg,
    STATE(51), 1,
      sym_svg,
  [1388] = 1,
    ACTIONS(304), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1393] = 2,
    ACTIONS(270), 1,
      aux_sym_font_token1,
    STATE(101), 1,
      sym_name,
  [1400] = 1,
    ACTIONS(306), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1405] = 1,
    ACTIONS(308), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1410] = 1,
    ACTIONS(310), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1415] = 2,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      sym_offset,
  [1422] = 2,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym__string,
  [1429] = 2,
    ACTIONS(260), 1,
      aux_sym__originx_token1,
    STATE(64), 1,
      sym__originx,
  [1436] = 1,
    ACTIONS(318), 1,
      anon_sym_COMMA,
  [1440] = 1,
    ACTIONS(320), 1,
      anon_sym_COMMA,
  [1444] = 1,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [1448] = 1,
    ACTIONS(324), 1,
      anon_sym_COMMA,
  [1452] = 1,
    ACTIONS(326), 1,
      aux_sym__string_token1,
  [1456] = 1,
    ACTIONS(328), 1,
      aux_sym_absolute_token1,
  [1460] = 1,
    ACTIONS(330), 1,
      sym_rgb,
  [1464] = 1,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
  [1468] = 1,
    ACTIONS(334), 1,
      anon_sym_COMMA,
  [1472] = 1,
    ACTIONS(336), 1,
      sym_width,
  [1476] = 1,
    ACTIONS(338), 1,
      anon_sym_COMMA,
  [1480] = 1,
    ACTIONS(340), 1,
      anon_sym_COMMA,
  [1484] = 1,
    ACTIONS(342), 1,
      aux_sym_absolute_token1,
  [1488] = 1,
    ACTIONS(330), 1,
      sym_rgba,
  [1492] = 1,
    ACTIONS(344), 1,
      aux_sym_absolute_token1,
  [1496] = 1,
    ACTIONS(346), 1,
      aux_sym_origin_token1,
  [1500] = 1,
    ACTIONS(348), 1,
      aux_sym_origin_token1,
  [1504] = 1,
    ACTIONS(85), 1,
      sym_offset,
  [1508] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1512] = 1,
    ACTIONS(352), 1,
      anon_sym_COMMA,
  [1516] = 1,
    ACTIONS(354), 1,
      anon_sym_script,
  [1520] = 1,
    ACTIONS(356), 1,
      aux_sym_absolute_token1,
  [1524] = 1,
    ACTIONS(358), 1,
      aux_sym_absolute_token1,
  [1528] = 1,
    ACTIONS(360), 1,
      anon_sym_COMMA,
  [1532] = 1,
    ACTIONS(362), 1,
      anon_sym_COMMA,
  [1536] = 1,
    ACTIONS(364), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 349,
  [SMALL_STATE(14)] = 370,
  [SMALL_STATE(15)] = 401,
  [SMALL_STATE(16)] = 422,
  [SMALL_STATE(17)] = 440,
  [SMALL_STATE(18)] = 468,
  [SMALL_STATE(19)] = 494,
  [SMALL_STATE(20)] = 520,
  [SMALL_STATE(21)] = 536,
  [SMALL_STATE(22)] = 557,
  [SMALL_STATE(23)] = 578,
  [SMALL_STATE(24)] = 595,
  [SMALL_STATE(25)] = 608,
  [SMALL_STATE(26)] = 623,
  [SMALL_STATE(27)] = 638,
  [SMALL_STATE(28)] = 655,
  [SMALL_STATE(29)] = 668,
  [SMALL_STATE(30)] = 681,
  [SMALL_STATE(31)] = 691,
  [SMALL_STATE(32)] = 701,
  [SMALL_STATE(33)] = 711,
  [SMALL_STATE(34)] = 723,
  [SMALL_STATE(35)] = 735,
  [SMALL_STATE(36)] = 747,
  [SMALL_STATE(37)] = 757,
  [SMALL_STATE(38)] = 769,
  [SMALL_STATE(39)] = 781,
  [SMALL_STATE(40)] = 793,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 817,
  [SMALL_STATE(43)] = 829,
  [SMALL_STATE(44)] = 841,
  [SMALL_STATE(45)] = 850,
  [SMALL_STATE(46)] = 859,
  [SMALL_STATE(47)] = 868,
  [SMALL_STATE(48)] = 877,
  [SMALL_STATE(49)] = 886,
  [SMALL_STATE(50)] = 895,
  [SMALL_STATE(51)] = 904,
  [SMALL_STATE(52)] = 913,
  [SMALL_STATE(53)] = 922,
  [SMALL_STATE(54)] = 931,
  [SMALL_STATE(55)] = 940,
  [SMALL_STATE(56)] = 949,
  [SMALL_STATE(57)] = 958,
  [SMALL_STATE(58)] = 967,
  [SMALL_STATE(59)] = 976,
  [SMALL_STATE(60)] = 985,
  [SMALL_STATE(61)] = 994,
  [SMALL_STATE(62)] = 1003,
  [SMALL_STATE(63)] = 1012,
  [SMALL_STATE(64)] = 1021,
  [SMALL_STATE(65)] = 1030,
  [SMALL_STATE(66)] = 1039,
  [SMALL_STATE(67)] = 1048,
  [SMALL_STATE(68)] = 1057,
  [SMALL_STATE(69)] = 1066,
  [SMALL_STATE(70)] = 1075,
  [SMALL_STATE(71)] = 1084,
  [SMALL_STATE(72)] = 1093,
  [SMALL_STATE(73)] = 1102,
  [SMALL_STATE(74)] = 1111,
  [SMALL_STATE(75)] = 1120,
  [SMALL_STATE(76)] = 1129,
  [SMALL_STATE(77)] = 1138,
  [SMALL_STATE(78)] = 1147,
  [SMALL_STATE(79)] = 1156,
  [SMALL_STATE(80)] = 1165,
  [SMALL_STATE(81)] = 1174,
  [SMALL_STATE(82)] = 1183,
  [SMALL_STATE(83)] = 1192,
  [SMALL_STATE(84)] = 1202,
  [SMALL_STATE(85)] = 1212,
  [SMALL_STATE(86)] = 1222,
  [SMALL_STATE(87)] = 1232,
  [SMALL_STATE(88)] = 1248,
  [SMALL_STATE(89)] = 1259,
  [SMALL_STATE(90)] = 1272,
  [SMALL_STATE(91)] = 1283,
  [SMALL_STATE(92)] = 1294,
  [SMALL_STATE(93)] = 1304,
  [SMALL_STATE(94)] = 1314,
  [SMALL_STATE(95)] = 1324,
  [SMALL_STATE(96)] = 1332,
  [SMALL_STATE(97)] = 1342,
  [SMALL_STATE(98)] = 1350,
  [SMALL_STATE(99)] = 1360,
  [SMALL_STATE(100)] = 1367,
  [SMALL_STATE(101)] = 1374,
  [SMALL_STATE(102)] = 1381,
  [SMALL_STATE(103)] = 1388,
  [SMALL_STATE(104)] = 1393,
  [SMALL_STATE(105)] = 1400,
  [SMALL_STATE(106)] = 1405,
  [SMALL_STATE(107)] = 1410,
  [SMALL_STATE(108)] = 1415,
  [SMALL_STATE(109)] = 1422,
  [SMALL_STATE(110)] = 1429,
  [SMALL_STATE(111)] = 1436,
  [SMALL_STATE(112)] = 1440,
  [SMALL_STATE(113)] = 1444,
  [SMALL_STATE(114)] = 1448,
  [SMALL_STATE(115)] = 1452,
  [SMALL_STATE(116)] = 1456,
  [SMALL_STATE(117)] = 1460,
  [SMALL_STATE(118)] = 1464,
  [SMALL_STATE(119)] = 1468,
  [SMALL_STATE(120)] = 1472,
  [SMALL_STATE(121)] = 1476,
  [SMALL_STATE(122)] = 1480,
  [SMALL_STATE(123)] = 1484,
  [SMALL_STATE(124)] = 1488,
  [SMALL_STATE(125)] = 1492,
  [SMALL_STATE(126)] = 1496,
  [SMALL_STATE(127)] = 1500,
  [SMALL_STATE(128)] = 1504,
  [SMALL_STATE(129)] = 1508,
  [SMALL_STATE(130)] = 1512,
  [SMALL_STATE(131)] = 1516,
  [SMALL_STATE(132)] = 1520,
  [SMALL_STATE(133)] = 1524,
  [SMALL_STATE(134)] = 1528,
  [SMALL_STATE(135)] = 1532,
  [SMALL_STATE(136)] = 1536,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(18),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(91),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(131),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(100),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
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
