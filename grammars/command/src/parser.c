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
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym_fontsize = 28,
  anon_sym_guide = 29,
  aux_sym_identifier_token1 = 30,
  anon_sym_vertical = 31,
  anon_sym_horizontal = 32,
  anon_sym_left = 33,
  anon_sym_centre = 34,
  anon_sym_center = 35,
  anon_sym_right = 36,
  anon_sym_top = 37,
  anon_sym_middle = 38,
  anon_sym_bottom = 39,
  sym_offset = 40,
  anon_sym_DQUOTE = 41,
  aux_sym__string_token1 = 42,
  aux_sym_absolute_token1 = 43,
  sym_command = 44,
  sym_new = 45,
  sym__entity = 46,
  sym_module = 47,
  sym_input = 48,
  sym_output = 49,
  sym_parameter = 50,
  sym_light = 51,
  sym_widget = 52,
  sym_label = 53,
  sym__component = 54,
  sym_set = 55,
  sym_origin = 56,
  sym__originx = 57,
  sym__originy = 58,
  sym_background = 59,
  sym_load = 60,
  sym_export = 61,
  sym__exportable = 62,
  sym_svg = 63,
  sym_name = 64,
  sym_part = 65,
  sym_font = 66,
  sym_guide = 67,
  sym_identifier = 68,
  sym_vertical = 69,
  sym_horizontal = 70,
  sym_geometry = 71,
  sym_guideline = 72,
  sym__string = 73,
  sym_absolute = 74,
  sym_relative = 75,
  sym_x = 76,
  sym_y = 77,
  aux_sym_command_repeat1 = 78,
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
  [sym_fontsize] = "fontsize",
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
  [sym_font] = "font",
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
  [sym_fontsize] = sym_fontsize,
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
  [sym_font] = sym_font,
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
  [sym_fontsize] = {
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
  [sym_font] = {
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
  [26] = 13,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(204);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == 'v') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(85);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == 'v') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(229);
      if (lookahead == 'U') ADVANCE(258);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(229);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(229);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'H') ADVANCE(229);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(230);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'U') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '8') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(175);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == '5') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 27:
      if (lookahead == '5') ADVANCE(107);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(259);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 172:
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 173:
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 174:
      if (lookahead == 'z') ADVANCE(123);
      END_STATE();
    case 175:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 201:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 202:
      if (eof) ADVANCE(204);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(202)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 203:
      if (eof) ADVANCE(204);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(121);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(203)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
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
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(107);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(107);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 203},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 203},
  [6] = {.lex_state = 203},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 202},
  [11] = {.lex_state = 202},
  [12] = {.lex_state = 202},
  [13] = {.lex_state = 203},
  [14] = {.lex_state = 202},
  [15] = {.lex_state = 202},
  [16] = {.lex_state = 203},
  [17] = {.lex_state = 202},
  [18] = {.lex_state = 202},
  [19] = {.lex_state = 202},
  [20] = {.lex_state = 203},
  [21] = {.lex_state = 203},
  [22] = {.lex_state = 203},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 203},
  [25] = {.lex_state = 203},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 203},
  [28] = {.lex_state = 203},
  [29] = {.lex_state = 203},
  [30] = {.lex_state = 203},
  [31] = {.lex_state = 203},
  [32] = {.lex_state = 203},
  [33] = {.lex_state = 203},
  [34] = {.lex_state = 203},
  [35] = {.lex_state = 203},
  [36] = {.lex_state = 203},
  [37] = {.lex_state = 203},
  [38] = {.lex_state = 203},
  [39] = {.lex_state = 203},
  [40] = {.lex_state = 203},
  [41] = {.lex_state = 203},
  [42] = {.lex_state = 203},
  [43] = {.lex_state = 203},
  [44] = {.lex_state = 203},
  [45] = {.lex_state = 203},
  [46] = {.lex_state = 203},
  [47] = {.lex_state = 203},
  [48] = {.lex_state = 203},
  [49] = {.lex_state = 203},
  [50] = {.lex_state = 203},
  [51] = {.lex_state = 203},
  [52] = {.lex_state = 203},
  [53] = {.lex_state = 203},
  [54] = {.lex_state = 203},
  [55] = {.lex_state = 203},
  [56] = {.lex_state = 203},
  [57] = {.lex_state = 203},
  [58] = {.lex_state = 203},
  [59] = {.lex_state = 203},
  [60] = {.lex_state = 203},
  [61] = {.lex_state = 203},
  [62] = {.lex_state = 203},
  [63] = {.lex_state = 203},
  [64] = {.lex_state = 203},
  [65] = {.lex_state = 203},
  [66] = {.lex_state = 203},
  [67] = {.lex_state = 203},
  [68] = {.lex_state = 203},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 203},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 203},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 203},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 203},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 203},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 178},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
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
    [sym_fontsize] = ACTIONS(1),
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
    [sym_new] = STATE(5),
    [sym_set] = STATE(5),
    [sym_load] = STATE(5),
    [sym_export] = STATE(5),
    [aux_sym_command_repeat1] = STATE(5),
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
    STATE(45), 9,
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
    STATE(97), 1,
      sym_identifier,
    STATE(68), 4,
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
    STATE(46), 4,
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
  [95] = 7,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_load,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_comment,
    STATE(6), 5,
      sym_new,
      sym_set,
      sym_load,
      sym_export,
      aux_sym_command_repeat1,
  [121] = 7,
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
  [147] = 2,
    ACTIONS(64), 1,
      sym_offset,
    ACTIONS(62), 10,
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
  [163] = 5,
    ACTIONS(66), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      aux_sym_absolute_token1,
    STATE(102), 1,
      sym_x,
    STATE(14), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(68), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [184] = 5,
    ACTIONS(66), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      aux_sym_absolute_token1,
    STATE(99), 1,
      sym_x,
    STATE(10), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(68), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [205] = 5,
    ACTIONS(76), 1,
      aux_sym_name_token1,
    ACTIONS(78), 1,
      sym_fontsize,
    STATE(27), 1,
      sym_font,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(74), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [225] = 5,
    ACTIONS(76), 1,
      aux_sym_name_token1,
    ACTIONS(84), 1,
      sym_fontsize,
    STATE(31), 1,
      sym_font,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [245] = 3,
    ACTIONS(90), 1,
      sym_offset,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(88), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [261] = 2,
    ACTIONS(94), 1,
      sym_width,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      sym_height,
  [274] = 4,
    ACTIONS(100), 1,
      aux_sym_name_token1,
    STATE(55), 1,
      sym_part,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [291] = 2,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(104), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [304] = 3,
    ACTIONS(108), 1,
      anon_sym_light,
    ACTIONS(110), 1,
      anon_sym_dark,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [319] = 4,
    ACTIONS(100), 1,
      aux_sym_name_token1,
    STATE(43), 1,
      sym_part,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(114), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [336] = 2,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(118), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [349] = 2,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
    ACTIONS(122), 5,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      aux_sym_name_token1,
  [362] = 2,
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
  [375] = 2,
    ACTIONS(130), 1,
      sym_offset,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [388] = 1,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
      sym_fontsize,
  [398] = 2,
    ACTIONS(134), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(136), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [410] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [420] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [430] = 2,
    ACTIONS(92), 2,
      anon_sym_AT,
      aux_sym_absolute_token1,
    ACTIONS(94), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [442] = 2,
    ACTIONS(144), 1,
      sym_fontsize,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [454] = 2,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [466] = 2,
    ACTIONS(152), 1,
      sym_offset,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [478] = 2,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [490] = 2,
    ACTIONS(158), 1,
      sym_fontsize,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [502] = 1,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [511] = 1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [520] = 1,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [529] = 1,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [538] = 1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [547] = 1,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [556] = 1,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [565] = 1,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [574] = 1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [583] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [592] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [601] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [610] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [619] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [628] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [637] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [646] = 1,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [655] = 1,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [664] = 1,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [673] = 1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [682] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [691] = 1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [700] = 1,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [709] = 1,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [718] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [727] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [736] = 1,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [745] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [754] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [763] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [772] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [781] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [790] = 1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [799] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [808] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [817] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [826] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_load,
      anon_sym_export,
  [835] = 2,
    STATE(17), 1,
      sym_y,
    ACTIONS(226), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [845] = 5,
    ACTIONS(228), 1,
      anon_sym_AT,
    ACTIONS(230), 1,
      aux_sym__originx_token1,
    ACTIONS(232), 1,
      aux_sym__originy_token1,
    STATE(107), 1,
      sym__originy,
    STATE(108), 1,
      sym__originx,
  [861] = 2,
    STATE(11), 1,
      sym_y,
    ACTIONS(226), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [871] = 3,
    ACTIONS(234), 1,
      anon_sym_origin,
    ACTIONS(236), 1,
      anon_sym_AT,
    ACTIONS(238), 2,
      aux_sym_origin_token1,
      sym_offset,
  [882] = 4,
    ACTIONS(240), 1,
      sym_rgb,
    ACTIONS(242), 1,
      sym_rgba,
    ACTIONS(244), 1,
      aux_sym_name_token1,
    STATE(50), 1,
      sym_name,
  [895] = 3,
    ACTIONS(246), 1,
      anon_sym_origin,
    ACTIONS(248), 1,
      anon_sym_background,
    STATE(34), 2,
      sym_origin,
      sym_background,
  [906] = 3,
    ACTIONS(250), 1,
      anon_sym_origin,
    ACTIONS(252), 1,
      anon_sym_AT,
    ACTIONS(254), 2,
      aux_sym_origin_token1,
      sym_offset,
  [917] = 2,
    ACTIONS(256), 1,
      anon_sym_AT,
    ACTIONS(258), 2,
      aux_sym_origin_token1,
      sym_offset,
  [925] = 3,
    ACTIONS(260), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(42), 1,
      sym__component,
  [935] = 2,
    ACTIONS(262), 1,
      anon_sym_AT,
    ACTIONS(264), 2,
      aux_sym_origin_token1,
      sym_offset,
  [943] = 3,
    ACTIONS(260), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(41), 1,
      sym__component,
  [953] = 3,
    ACTIONS(260), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(32), 1,
      sym__component,
  [963] = 3,
    ACTIONS(260), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(40), 1,
      sym__component,
  [973] = 3,
    ACTIONS(260), 1,
      aux_sym_name_token1,
    STATE(8), 1,
      sym_name,
    STATE(39), 1,
      sym__component,
  [983] = 2,
    ACTIONS(232), 1,
      aux_sym__originy_token1,
    STATE(59), 1,
      sym__originy,
  [990] = 1,
    ACTIONS(266), 2,
      aux_sym_origin_token1,
      sym_offset,
  [995] = 2,
    ACTIONS(268), 1,
      sym_height,
    ACTIONS(270), 1,
      sym_width,
  [1002] = 2,
    ACTIONS(272), 1,
      anon_sym_module,
    STATE(37), 1,
      sym__exportable,
  [1009] = 2,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym__string,
  [1016] = 2,
    ACTIONS(244), 1,
      aux_sym_name_token1,
    STATE(85), 1,
      sym_name,
  [1023] = 2,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      sym_offset,
  [1030] = 2,
    ACTIONS(280), 1,
      anon_sym_svg,
    STATE(33), 1,
      sym_svg,
  [1037] = 1,
    ACTIONS(282), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1042] = 2,
    ACTIONS(230), 1,
      aux_sym__originx_token1,
    STATE(59), 1,
      sym__originx,
  [1049] = 1,
    ACTIONS(284), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1054] = 1,
    ACTIONS(286), 2,
      aux_sym_origin_token1,
      sym_offset,
  [1059] = 1,
    ACTIONS(288), 1,
      aux_sym_absolute_token1,
  [1063] = 1,
    ACTIONS(290), 1,
      anon_sym_COMMA,
  [1067] = 1,
    ACTIONS(39), 1,
      sym_offset,
  [1071] = 1,
    ACTIONS(292), 1,
      aux_sym_origin_token1,
  [1075] = 1,
    ACTIONS(294), 1,
      anon_sym_COMMA,
  [1079] = 1,
    ACTIONS(296), 1,
      sym_rgb,
  [1083] = 1,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
  [1087] = 1,
    ACTIONS(300), 1,
      anon_sym_COMMA,
  [1091] = 1,
    ACTIONS(302), 1,
      anon_sym_COMMA,
  [1095] = 1,
    ACTIONS(304), 1,
      anon_sym_COMMA,
  [1099] = 1,
    ACTIONS(306), 1,
      aux_sym_absolute_token1,
  [1103] = 1,
    ACTIONS(308), 1,
      sym_width,
  [1107] = 1,
    ACTIONS(310), 1,
      anon_sym_COMMA,
  [1111] = 1,
    ACTIONS(312), 1,
      anon_sym_COMMA,
  [1115] = 1,
    ACTIONS(296), 1,
      sym_rgba,
  [1119] = 1,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
  [1123] = 1,
    ACTIONS(316), 1,
      aux_sym_origin_token1,
  [1127] = 1,
    ACTIONS(318), 1,
      aux_sym__string_token1,
  [1131] = 1,
    ACTIONS(320), 1,
      aux_sym_absolute_token1,
  [1135] = 1,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [1139] = 1,
    ACTIONS(324), 1,
      anon_sym_script,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 261,
  [SMALL_STATE(14)] = 274,
  [SMALL_STATE(15)] = 291,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 319,
  [SMALL_STATE(18)] = 336,
  [SMALL_STATE(19)] = 349,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 430,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 454,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 490,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 511,
  [SMALL_STATE(34)] = 520,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 538,
  [SMALL_STATE(37)] = 547,
  [SMALL_STATE(38)] = 556,
  [SMALL_STATE(39)] = 565,
  [SMALL_STATE(40)] = 574,
  [SMALL_STATE(41)] = 583,
  [SMALL_STATE(42)] = 592,
  [SMALL_STATE(43)] = 601,
  [SMALL_STATE(44)] = 610,
  [SMALL_STATE(45)] = 619,
  [SMALL_STATE(46)] = 628,
  [SMALL_STATE(47)] = 637,
  [SMALL_STATE(48)] = 646,
  [SMALL_STATE(49)] = 655,
  [SMALL_STATE(50)] = 664,
  [SMALL_STATE(51)] = 673,
  [SMALL_STATE(52)] = 682,
  [SMALL_STATE(53)] = 691,
  [SMALL_STATE(54)] = 700,
  [SMALL_STATE(55)] = 709,
  [SMALL_STATE(56)] = 718,
  [SMALL_STATE(57)] = 727,
  [SMALL_STATE(58)] = 736,
  [SMALL_STATE(59)] = 745,
  [SMALL_STATE(60)] = 754,
  [SMALL_STATE(61)] = 763,
  [SMALL_STATE(62)] = 772,
  [SMALL_STATE(63)] = 781,
  [SMALL_STATE(64)] = 790,
  [SMALL_STATE(65)] = 799,
  [SMALL_STATE(66)] = 808,
  [SMALL_STATE(67)] = 817,
  [SMALL_STATE(68)] = 826,
  [SMALL_STATE(69)] = 835,
  [SMALL_STATE(70)] = 845,
  [SMALL_STATE(71)] = 861,
  [SMALL_STATE(72)] = 871,
  [SMALL_STATE(73)] = 882,
  [SMALL_STATE(74)] = 895,
  [SMALL_STATE(75)] = 906,
  [SMALL_STATE(76)] = 917,
  [SMALL_STATE(77)] = 925,
  [SMALL_STATE(78)] = 935,
  [SMALL_STATE(79)] = 943,
  [SMALL_STATE(80)] = 953,
  [SMALL_STATE(81)] = 963,
  [SMALL_STATE(82)] = 973,
  [SMALL_STATE(83)] = 983,
  [SMALL_STATE(84)] = 990,
  [SMALL_STATE(85)] = 995,
  [SMALL_STATE(86)] = 1002,
  [SMALL_STATE(87)] = 1009,
  [SMALL_STATE(88)] = 1016,
  [SMALL_STATE(89)] = 1023,
  [SMALL_STATE(90)] = 1030,
  [SMALL_STATE(91)] = 1037,
  [SMALL_STATE(92)] = 1042,
  [SMALL_STATE(93)] = 1049,
  [SMALL_STATE(94)] = 1054,
  [SMALL_STATE(95)] = 1059,
  [SMALL_STATE(96)] = 1063,
  [SMALL_STATE(97)] = 1067,
  [SMALL_STATE(98)] = 1071,
  [SMALL_STATE(99)] = 1075,
  [SMALL_STATE(100)] = 1079,
  [SMALL_STATE(101)] = 1083,
  [SMALL_STATE(102)] = 1087,
  [SMALL_STATE(103)] = 1091,
  [SMALL_STATE(104)] = 1095,
  [SMALL_STATE(105)] = 1099,
  [SMALL_STATE(106)] = 1103,
  [SMALL_STATE(107)] = 1107,
  [SMALL_STATE(108)] = 1111,
  [SMALL_STATE(109)] = 1115,
  [SMALL_STATE(110)] = 1119,
  [SMALL_STATE(111)] = 1123,
  [SMALL_STATE(112)] = 1127,
  [SMALL_STATE(113)] = 1131,
  [SMALL_STATE(114)] = 1135,
  [SMALL_STATE(115)] = 1139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(74),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(115),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(86),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [314] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
