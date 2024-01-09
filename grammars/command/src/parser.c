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
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_set = 10,
  anon_sym_origin = 11,
  anon_sym_COMMA = 12,
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
  aux_sym_anchor_token1 = 40,
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
  sym__xy = 70,
  sym_x = 71,
  sym_y = 72,
  aux_sym_command_repeat1 = 73,
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
  [anon_sym_set] = "set",
  [anon_sym_origin] = "origin",
  [anon_sym_COMMA] = ",",
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
  [aux_sym_anchor_token1] = "x",
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
  [anon_sym_set] = anon_sym_set,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [aux_sym_anchor_token1] = sym_x,
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
  [anon_sym_set] = {
    .visible = true,
    .named = false,
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
  [17] = 14,
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
  [29] = 26,
  [30] = 30,
  [31] = 25,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 22,
  [40] = 10,
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
  [105] = 91,
  [106] = 97,
  [107] = 102,
  [108] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(190);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == 'w') ADVANCE(79);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == 'v') ADVANCE(251);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(215);
      if (lookahead == 'U') ADVANCE(238);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'H') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '8') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(239);
      if (lookahead == 'U') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '5') ADVANCE(161);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(100);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(256);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(226);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 158:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 159:
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 160:
      if (lookahead == 'z') ADVANCE(115);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 187:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 188:
      if (eof) ADVANCE(190);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 189:
      if (eof) ADVANCE(190);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(112);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(100);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'p') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'w') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'x') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(100);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 189},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 189},
  [8] = {.lex_state = 189},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 189},
  [12] = {.lex_state = 188},
  [13] = {.lex_state = 189},
  [14] = {.lex_state = 188},
  [15] = {.lex_state = 189},
  [16] = {.lex_state = 189},
  [17] = {.lex_state = 189},
  [18] = {.lex_state = 189},
  [19] = {.lex_state = 189},
  [20] = {.lex_state = 189},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 188},
  [23] = {.lex_state = 188},
  [24] = {.lex_state = 189},
  [25] = {.lex_state = 188},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 189},
  [28] = {.lex_state = 189},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 189},
  [31] = {.lex_state = 189},
  [32] = {.lex_state = 189},
  [33] = {.lex_state = 189},
  [34] = {.lex_state = 189},
  [35] = {.lex_state = 189},
  [36] = {.lex_state = 189},
  [37] = {.lex_state = 189},
  [38] = {.lex_state = 189},
  [39] = {.lex_state = 189},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 189},
  [42] = {.lex_state = 189},
  [43] = {.lex_state = 189},
  [44] = {.lex_state = 189},
  [45] = {.lex_state = 189},
  [46] = {.lex_state = 189},
  [47] = {.lex_state = 189},
  [48] = {.lex_state = 189},
  [49] = {.lex_state = 189},
  [50] = {.lex_state = 189},
  [51] = {.lex_state = 189},
  [52] = {.lex_state = 189},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 189},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 189},
  [59] = {.lex_state = 189},
  [60] = {.lex_state = 189},
  [61] = {.lex_state = 189},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 189},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 189},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 189},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 189},
  [75] = {.lex_state = 189},
  [76] = {.lex_state = 189},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 189},
  [81] = {.lex_state = 189},
  [82] = {.lex_state = 189},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 189},
  [88] = {.lex_state = 188},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 188},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 189},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 189},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 163},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 188},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 188},
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
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [aux_sym_anchor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(98),
    [sym_new] = STATE(8),
    [sym_set] = STATE(8),
    [sym_export] = STATE(8),
    [aux_sym_command_repeat1] = STATE(8),
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
    STATE(50), 9,
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
    STATE(92), 1,
      sym_identifier,
    STATE(64), 4,
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
    STATE(42), 4,
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
  [111] = 4,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_x,
    STATE(12), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(45), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [129] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_new,
    ACTIONS(55), 1,
      anon_sym_set,
    ACTIONS(58), 1,
      anon_sym_export,
    STATE(7), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [151] = 6,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_comment,
    STATE(7), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [173] = 4,
    ACTIONS(65), 1,
      anon_sym_AT,
    STATE(106), 1,
      sym_x,
    STATE(55), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(45), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [191] = 2,
    ACTIONS(67), 2,
      anon_sym_AT,
      sym_height,
    ACTIONS(69), 6,
      sym_width,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [204] = 2,
    ACTIONS(73), 1,
      sym_offset,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [216] = 4,
    ACTIONS(79), 1,
      aux_sym_name_token1,
    STATE(54), 1,
      sym_part,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [232] = 3,
    ACTIONS(83), 1,
      anon_sym_light,
    ACTIONS(85), 1,
      anon_sym_dark,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [246] = 3,
    ACTIONS(91), 1,
      sym_offset,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(89), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [260] = 2,
    ACTIONS(95), 1,
      sym_offset,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [272] = 1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [281] = 2,
    ACTIONS(99), 1,
      sym_offset,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [292] = 1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [301] = 2,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [312] = 2,
    ACTIONS(109), 1,
      sym_offset,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [323] = 2,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(113), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [334] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [345] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [356] = 2,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [367] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      aux_sym_name_token1,
  [378] = 2,
    STATE(22), 1,
      sym_y,
    ACTIONS(129), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [388] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [396] = 5,
    ACTIONS(133), 1,
      anon_sym_AT,
    ACTIONS(135), 1,
      aux_sym__originx_token1,
    ACTIONS(137), 1,
      aux_sym__originy_token1,
    STATE(90), 1,
      sym__originy,
    STATE(94), 1,
      sym__originx,
  [412] = 2,
    STATE(39), 1,
      sym_y,
    ACTIONS(139), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [422] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [430] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [438] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [446] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [454] = 1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [462] = 1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [470] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [478] = 1,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [486] = 1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [494] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [502] = 1,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [510] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [518] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [526] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [534] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [542] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [550] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [558] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [566] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [574] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [582] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [590] = 1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [598] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [606] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [614] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [622] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [630] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [638] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [646] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [654] = 1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [662] = 1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [670] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [678] = 1,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [686] = 1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [694] = 1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [702] = 3,
    ACTIONS(201), 1,
      anon_sym_origin,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(205), 2,
      aux_sym_origin_token1,
      sym_offset,
  [713] = 4,
    ACTIONS(207), 1,
      sym_rgb,
    ACTIONS(209), 1,
      sym_rgba,
    ACTIONS(211), 1,
      aux_sym_name_token1,
    STATE(46), 1,
      sym_name,
  [726] = 3,
    ACTIONS(213), 1,
      anon_sym_origin,
    ACTIONS(215), 1,
      anon_sym_background,
    STATE(30), 2,
      sym_origin,
      sym_background,
  [737] = 3,
    ACTIONS(217), 1,
      anon_sym_origin,
    ACTIONS(219), 1,
      anon_sym_AT,
    ACTIONS(221), 2,
      aux_sym_origin_token1,
      sym_offset,
  [748] = 3,
    ACTIONS(223), 1,
      aux_sym_name_token1,
    STATE(6), 1,
      sym_name,
    STATE(35), 1,
      sym__component,
  [758] = 3,
    ACTIONS(223), 1,
      aux_sym_name_token1,
    STATE(6), 1,
      sym_name,
    STATE(38), 1,
      sym__component,
  [768] = 3,
    ACTIONS(223), 1,
      aux_sym_name_token1,
    STATE(6), 1,
      sym_name,
    STATE(34), 1,
      sym__component,
  [778] = 3,
    ACTIONS(223), 1,
      aux_sym_name_token1,
    STATE(6), 1,
      sym_name,
    STATE(36), 1,
      sym__component,
  [788] = 3,
    ACTIONS(223), 1,
      aux_sym_name_token1,
    STATE(6), 1,
      sym_name,
    STATE(37), 1,
      sym__component,
  [798] = 2,
    ACTIONS(225), 1,
      anon_sym_AT,
    ACTIONS(227), 2,
      aux_sym_origin_token1,
      sym_offset,
  [806] = 2,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(231), 2,
      aux_sym_origin_token1,
      sym_offset,
  [814] = 2,
    ACTIONS(135), 1,
      aux_sym__originx_token1,
    STATE(48), 1,
      sym__originx,
  [821] = 2,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym__string,
  [828] = 2,
    ACTIONS(235), 1,
      anon_sym_module,
    STATE(32), 1,
      sym__exportable,
  [835] = 2,
    ACTIONS(223), 1,
      aux_sym_name_token1,
    STATE(83), 1,
      sym_name,
  [842] = 1,
    ACTIONS(237), 2,
      aux_sym_origin_token1,
      sym_offset,
  [847] = 1,
    ACTIONS(239), 2,
      aux_sym_origin_token1,
      sym_offset,
  [852] = 1,
    ACTIONS(241), 2,
      aux_sym_origin_token1,
      sym_offset,
  [857] = 2,
    ACTIONS(243), 1,
      sym_height,
    ACTIONS(245), 1,
      sym_width,
  [864] = 2,
    ACTIONS(247), 1,
      anon_sym_svg,
    STATE(47), 1,
      sym_svg,
  [871] = 1,
    ACTIONS(249), 2,
      aux_sym_origin_token1,
      sym_offset,
  [876] = 2,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      sym_offset,
  [883] = 2,
    ACTIONS(137), 1,
      aux_sym__originy_token1,
    STATE(48), 1,
      sym__originy,
  [890] = 1,
    ACTIONS(255), 1,
      aux_sym_anchor_token1,
  [894] = 1,
    ACTIONS(257), 1,
      sym_width,
  [898] = 1,
    ACTIONS(259), 1,
      anon_sym_COMMA,
  [902] = 1,
    ACTIONS(261), 1,
      aux_sym_anchor_token1,
  [906] = 1,
    ACTIONS(37), 1,
      sym_offset,
  [910] = 1,
    ACTIONS(263), 1,
      aux_sym_origin_token1,
  [914] = 1,
    ACTIONS(265), 1,
      anon_sym_COMMA,
  [918] = 1,
    ACTIONS(267), 1,
      aux_sym_origin_token1,
  [922] = 1,
    ACTIONS(269), 1,
      anon_sym_COMMA,
  [926] = 1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
  [930] = 1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
  [934] = 1,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
  [938] = 1,
    ACTIONS(277), 1,
      anon_sym_COMMA,
  [942] = 1,
    ACTIONS(279), 1,
      aux_sym__string_token1,
  [946] = 1,
    ACTIONS(281), 1,
      anon_sym_COMMA,
  [950] = 1,
    ACTIONS(283), 1,
      sym_rgba,
  [954] = 1,
    ACTIONS(283), 1,
      sym_rgb,
  [958] = 1,
    ACTIONS(285), 1,
      aux_sym_anchor_token1,
  [962] = 1,
    ACTIONS(287), 1,
      anon_sym_COMMA,
  [966] = 1,
    ACTIONS(289), 1,
      anon_sym_COMMA,
  [970] = 1,
    ACTIONS(291), 1,
      aux_sym_anchor_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 312,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 334,
  [SMALL_STATE(23)] = 345,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 367,
  [SMALL_STATE(26)] = 378,
  [SMALL_STATE(27)] = 388,
  [SMALL_STATE(28)] = 396,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 422,
  [SMALL_STATE(31)] = 430,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 446,
  [SMALL_STATE(34)] = 454,
  [SMALL_STATE(35)] = 462,
  [SMALL_STATE(36)] = 470,
  [SMALL_STATE(37)] = 478,
  [SMALL_STATE(38)] = 486,
  [SMALL_STATE(39)] = 494,
  [SMALL_STATE(40)] = 502,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 518,
  [SMALL_STATE(43)] = 526,
  [SMALL_STATE(44)] = 534,
  [SMALL_STATE(45)] = 542,
  [SMALL_STATE(46)] = 550,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 566,
  [SMALL_STATE(49)] = 574,
  [SMALL_STATE(50)] = 582,
  [SMALL_STATE(51)] = 590,
  [SMALL_STATE(52)] = 598,
  [SMALL_STATE(53)] = 606,
  [SMALL_STATE(54)] = 614,
  [SMALL_STATE(55)] = 622,
  [SMALL_STATE(56)] = 630,
  [SMALL_STATE(57)] = 638,
  [SMALL_STATE(58)] = 646,
  [SMALL_STATE(59)] = 654,
  [SMALL_STATE(60)] = 662,
  [SMALL_STATE(61)] = 670,
  [SMALL_STATE(62)] = 678,
  [SMALL_STATE(63)] = 686,
  [SMALL_STATE(64)] = 694,
  [SMALL_STATE(65)] = 702,
  [SMALL_STATE(66)] = 713,
  [SMALL_STATE(67)] = 726,
  [SMALL_STATE(68)] = 737,
  [SMALL_STATE(69)] = 748,
  [SMALL_STATE(70)] = 758,
  [SMALL_STATE(71)] = 768,
  [SMALL_STATE(72)] = 778,
  [SMALL_STATE(73)] = 788,
  [SMALL_STATE(74)] = 798,
  [SMALL_STATE(75)] = 806,
  [SMALL_STATE(76)] = 814,
  [SMALL_STATE(77)] = 821,
  [SMALL_STATE(78)] = 828,
  [SMALL_STATE(79)] = 835,
  [SMALL_STATE(80)] = 842,
  [SMALL_STATE(81)] = 847,
  [SMALL_STATE(82)] = 852,
  [SMALL_STATE(83)] = 857,
  [SMALL_STATE(84)] = 864,
  [SMALL_STATE(85)] = 871,
  [SMALL_STATE(86)] = 876,
  [SMALL_STATE(87)] = 883,
  [SMALL_STATE(88)] = 890,
  [SMALL_STATE(89)] = 894,
  [SMALL_STATE(90)] = 898,
  [SMALL_STATE(91)] = 902,
  [SMALL_STATE(92)] = 906,
  [SMALL_STATE(93)] = 910,
  [SMALL_STATE(94)] = 914,
  [SMALL_STATE(95)] = 918,
  [SMALL_STATE(96)] = 922,
  [SMALL_STATE(97)] = 926,
  [SMALL_STATE(98)] = 930,
  [SMALL_STATE(99)] = 934,
  [SMALL_STATE(100)] = 938,
  [SMALL_STATE(101)] = 942,
  [SMALL_STATE(102)] = 946,
  [SMALL_STATE(103)] = 950,
  [SMALL_STATE(104)] = 954,
  [SMALL_STATE(105)] = 958,
  [SMALL_STATE(106)] = 962,
  [SMALL_STATE(107)] = 966,
  [SMALL_STATE(108)] = 970,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(67),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(78),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
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
