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
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  anon_sym_set = 9,
  anon_sym_origin = 10,
  anon_sym_COMMA = 11,
  anon_sym_AT = 12,
  aux_sym_origin_token1 = 13,
  aux_sym__originx_token1 = 14,
  aux_sym__originy_token1 = 15,
  anon_sym_background = 16,
  sym_rgb = 17,
  sym_rgba = 18,
  anon_sym_export = 19,
  anon_sym_svg = 20,
  anon_sym_dark = 21,
  sym_name = 22,
  sym_height = 23,
  sym_width = 24,
  sym_part = 25,
  anon_sym_label = 26,
  anon_sym_guide = 27,
  aux_sym_identifier_token1 = 28,
  anon_sym_vertical = 29,
  anon_sym_horizontal = 30,
  anon_sym_left = 31,
  anon_sym_centre = 32,
  anon_sym_center = 33,
  anon_sym_right = 34,
  anon_sym_top = 35,
  anon_sym_middle = 36,
  anon_sym_bottom = 37,
  sym_offset = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_text_token1 = 40,
  aux_sym_anchor_token1 = 41,
  sym_command = 42,
  sym_new = 43,
  sym__entity = 44,
  sym_module = 45,
  sym_input = 46,
  sym_output = 47,
  sym_parameter = 48,
  sym_light = 49,
  sym_widget = 50,
  sym__component = 51,
  sym_set = 52,
  sym_origin = 53,
  sym__originx = 54,
  sym__originy = 55,
  sym_background = 56,
  sym_export = 57,
  sym__exportable = 58,
  sym_svg = 59,
  sym_label = 60,
  sym_guide = 61,
  sym_identifier = 62,
  sym_vertical = 63,
  sym_horizontal = 64,
  sym_geometry = 65,
  sym_guideline = 66,
  sym_text = 67,
  sym_anchor = 68,
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
  [sym_name] = "name",
  [sym_height] = "height",
  [sym_width] = "width",
  [sym_part] = "part",
  [anon_sym_label] = "label",
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
  [aux_sym_text_token1] = "value",
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
  [sym__component] = "_component",
  [sym_set] = "set",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
  [sym_background] = "background",
  [sym_export] = "export",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
  [sym_label] = "label",
  [sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_guideline] = "guideline",
  [sym_text] = "text",
  [sym_anchor] = "anchor",
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
  [sym_name] = sym_name,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [sym_part] = sym_part,
  [anon_sym_label] = anon_sym_label,
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
  [aux_sym_text_token1] = aux_sym_text_token1,
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
  [sym__component] = sym__component,
  [sym_set] = sym_set,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
  [sym_background] = sym_background,
  [sym_export] = sym_export,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
  [sym_label] = sym_label,
  [sym_guide] = sym_guide,
  [sym_identifier] = sym_identifier,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_guideline] = sym_guideline,
  [sym_text] = sym_text,
  [sym_anchor] = sym_anchor,
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
  [sym_name] = {
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
  [sym_part] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_label] = {
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
  [aux_sym_text_token1] = {
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
  [sym_label] = {
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_anchor] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(194);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(81);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == 'v') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'U') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '8') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'U') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(163);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(102);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(229);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 160:
      if (lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 162:
      if (lookahead == 'z') ADVANCE(117);
      END_STATE();
    case 163:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 189:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 190:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 191:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 192:
      if (eof) ADVANCE(194);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(192)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 193:
      if (eof) ADVANCE(194);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(114);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(102);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(102);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_part);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'x') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 193},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 193},
  [7] = {.lex_state = 193},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 193},
  [10] = {.lex_state = 193},
  [11] = {.lex_state = 193},
  [12] = {.lex_state = 192},
  [13] = {.lex_state = 193},
  [14] = {.lex_state = 192},
  [15] = {.lex_state = 193},
  [16] = {.lex_state = 193},
  [17] = {.lex_state = 192},
  [18] = {.lex_state = 193},
  [19] = {.lex_state = 193},
  [20] = {.lex_state = 192},
  [21] = {.lex_state = 192},
  [22] = {.lex_state = 193},
  [23] = {.lex_state = 193},
  [24] = {.lex_state = 193},
  [25] = {.lex_state = 193},
  [26] = {.lex_state = 193},
  [27] = {.lex_state = 193},
  [28] = {.lex_state = 193},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 193},
  [31] = {.lex_state = 193},
  [32] = {.lex_state = 193},
  [33] = {.lex_state = 193},
  [34] = {.lex_state = 193},
  [35] = {.lex_state = 193},
  [36] = {.lex_state = 193},
  [37] = {.lex_state = 193},
  [38] = {.lex_state = 193},
  [39] = {.lex_state = 193},
  [40] = {.lex_state = 193},
  [41] = {.lex_state = 193},
  [42] = {.lex_state = 193},
  [43] = {.lex_state = 193},
  [44] = {.lex_state = 193},
  [45] = {.lex_state = 193},
  [46] = {.lex_state = 193},
  [47] = {.lex_state = 193},
  [48] = {.lex_state = 193},
  [49] = {.lex_state = 193},
  [50] = {.lex_state = 193},
  [51] = {.lex_state = 193},
  [52] = {.lex_state = 193},
  [53] = {.lex_state = 193},
  [54] = {.lex_state = 193},
  [55] = {.lex_state = 193},
  [56] = {.lex_state = 193},
  [57] = {.lex_state = 193},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 193},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 193},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 193},
  [67] = {.lex_state = 193},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 193},
  [70] = {.lex_state = 193},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 193},
  [77] = {.lex_state = 193},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 193},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 193},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
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
    [anon_sym_label] = ACTIONS(1),
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
    STATE(25), 9,
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
    STATE(89), 1,
      sym_identifier,
    STATE(23), 4,
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
    STATE(41), 4,
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
  [111] = 6,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_new,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(54), 1,
      anon_sym_export,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [133] = 6,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_comment,
    STATE(6), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [155] = 4,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(95), 1,
      sym_x,
    STATE(17), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(63), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [173] = 2,
    ACTIONS(67), 1,
      sym_offset,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [185] = 2,
    ACTIONS(71), 1,
      sym_offset,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [197] = 3,
    ACTIONS(75), 1,
      anon_sym_light,
    ACTIONS(77), 1,
      anon_sym_dark,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [211] = 3,
    ACTIONS(83), 1,
      sym_offset,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(81), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [225] = 1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [234] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(89), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [245] = 2,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [256] = 2,
    ACTIONS(97), 1,
      sym_offset,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [267] = 3,
    ACTIONS(103), 1,
      sym_part,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [280] = 1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_export,
  [289] = 2,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [300] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [311] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [322] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [330] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [338] = 1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [346] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [354] = 5,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(127), 1,
      aux_sym__originx_token1,
    ACTIONS(129), 1,
      aux_sym__originy_token1,
    STATE(99), 1,
      sym__originy,
    STATE(100), 1,
      sym__originx,
  [370] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [378] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [386] = 2,
    STATE(20), 1,
      sym_y,
    ACTIONS(135), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [396] = 1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [404] = 1,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [412] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [420] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [428] = 1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [436] = 1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [444] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [452] = 1,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [460] = 1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [468] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [476] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [484] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [492] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [500] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [508] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [516] = 1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [524] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [532] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [540] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [548] = 1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [556] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [564] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [572] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [580] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [588] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [596] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [604] = 3,
    ACTIONS(187), 1,
      anon_sym_origin,
    ACTIONS(189), 1,
      anon_sym_AT,
    ACTIONS(191), 2,
      aux_sym_origin_token1,
      sym_offset,
  [615] = 3,
    ACTIONS(193), 1,
      anon_sym_origin,
    ACTIONS(195), 1,
      anon_sym_AT,
    ACTIONS(197), 2,
      aux_sym_origin_token1,
      sym_offset,
  [626] = 3,
    ACTIONS(199), 1,
      anon_sym_origin,
    ACTIONS(201), 1,
      anon_sym_background,
    STATE(28), 2,
      sym_origin,
      sym_background,
  [637] = 2,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(205), 2,
      aux_sym_origin_token1,
      sym_offset,
  [645] = 3,
    ACTIONS(207), 1,
      sym_rgb,
    ACTIONS(209), 1,
      sym_rgba,
    ACTIONS(211), 1,
      sym_name,
  [655] = 2,
    ACTIONS(213), 1,
      anon_sym_AT,
    ACTIONS(215), 2,
      aux_sym_origin_token1,
      sym_offset,
  [663] = 2,
    ACTIONS(217), 1,
      sym_name,
    STATE(36), 1,
      sym__component,
  [670] = 2,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      sym_offset,
  [677] = 2,
    ACTIONS(217), 1,
      sym_name,
    STATE(34), 1,
      sym__component,
  [684] = 2,
    ACTIONS(217), 1,
      sym_name,
    STATE(35), 1,
      sym__component,
  [691] = 1,
    ACTIONS(223), 2,
      aux_sym_origin_token1,
      sym_offset,
  [696] = 1,
    ACTIONS(225), 2,
      aux_sym_origin_token1,
      sym_offset,
  [701] = 2,
    ACTIONS(227), 1,
      anon_sym_module,
    STATE(30), 1,
      sym__exportable,
  [708] = 2,
    ACTIONS(129), 1,
      aux_sym__originy_token1,
    STATE(54), 1,
      sym__originy,
  [715] = 2,
    ACTIONS(127), 1,
      aux_sym__originx_token1,
    STATE(54), 1,
      sym__originx,
  [722] = 2,
    ACTIONS(217), 1,
      sym_name,
    STATE(32), 1,
      sym__component,
  [729] = 2,
    ACTIONS(229), 1,
      anon_sym_AT,
    STATE(55), 1,
      sym_anchor,
  [736] = 2,
    ACTIONS(217), 1,
      sym_name,
    STATE(33), 1,
      sym__component,
  [743] = 2,
    ACTIONS(231), 1,
      sym_height,
    ACTIONS(233), 1,
      sym_width,
  [750] = 2,
    ACTIONS(235), 1,
      anon_sym_svg,
    STATE(46), 1,
      sym_svg,
  [757] = 1,
    ACTIONS(237), 2,
      aux_sym_origin_token1,
      sym_offset,
  [762] = 1,
    ACTIONS(239), 2,
      aux_sym_origin_token1,
      sym_offset,
  [767] = 2,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_text,
  [774] = 1,
    ACTIONS(243), 1,
      aux_sym_origin_token1,
  [778] = 1,
    ACTIONS(245), 1,
      anon_sym_AT,
  [782] = 1,
    ACTIONS(247), 1,
      anon_sym_COMMA,
  [786] = 1,
    ACTIONS(249), 1,
      anon_sym_COMMA,
  [790] = 1,
    ACTIONS(251), 1,
      anon_sym_COMMA,
  [794] = 1,
    ACTIONS(253), 1,
      sym_rgba,
  [798] = 1,
    ACTIONS(253), 1,
      sym_rgb,
  [802] = 1,
    ACTIONS(255), 1,
      aux_sym_text_token1,
  [806] = 1,
    ACTIONS(257), 1,
      anon_sym_COMMA,
  [810] = 1,
    ACTIONS(259), 1,
      aux_sym_origin_token1,
  [814] = 1,
    ACTIONS(37), 1,
      sym_offset,
  [818] = 1,
    ACTIONS(261), 1,
      aux_sym_anchor_token1,
  [822] = 1,
    ACTIONS(263), 1,
      aux_sym_anchor_token1,
  [826] = 1,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
  [830] = 1,
    ACTIONS(267), 1,
      sym_name,
  [834] = 1,
    ACTIONS(269), 1,
      aux_sym_anchor_token1,
  [838] = 1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
  [842] = 1,
    ACTIONS(273), 1,
      aux_sym_anchor_token1,
  [846] = 1,
    ACTIONS(275), 1,
      sym_width,
  [850] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [854] = 1,
    ACTIONS(279), 1,
      anon_sym_COMMA,
  [858] = 1,
    ACTIONS(281), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 185,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 289,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 311,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 338,
  [SMALL_STATE(25)] = 346,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 370,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 386,
  [SMALL_STATE(30)] = 396,
  [SMALL_STATE(31)] = 404,
  [SMALL_STATE(32)] = 412,
  [SMALL_STATE(33)] = 420,
  [SMALL_STATE(34)] = 428,
  [SMALL_STATE(35)] = 436,
  [SMALL_STATE(36)] = 444,
  [SMALL_STATE(37)] = 452,
  [SMALL_STATE(38)] = 460,
  [SMALL_STATE(39)] = 468,
  [SMALL_STATE(40)] = 476,
  [SMALL_STATE(41)] = 484,
  [SMALL_STATE(42)] = 492,
  [SMALL_STATE(43)] = 500,
  [SMALL_STATE(44)] = 508,
  [SMALL_STATE(45)] = 516,
  [SMALL_STATE(46)] = 524,
  [SMALL_STATE(47)] = 532,
  [SMALL_STATE(48)] = 540,
  [SMALL_STATE(49)] = 548,
  [SMALL_STATE(50)] = 556,
  [SMALL_STATE(51)] = 564,
  [SMALL_STATE(52)] = 572,
  [SMALL_STATE(53)] = 580,
  [SMALL_STATE(54)] = 588,
  [SMALL_STATE(55)] = 596,
  [SMALL_STATE(56)] = 604,
  [SMALL_STATE(57)] = 615,
  [SMALL_STATE(58)] = 626,
  [SMALL_STATE(59)] = 637,
  [SMALL_STATE(60)] = 645,
  [SMALL_STATE(61)] = 655,
  [SMALL_STATE(62)] = 663,
  [SMALL_STATE(63)] = 670,
  [SMALL_STATE(64)] = 677,
  [SMALL_STATE(65)] = 684,
  [SMALL_STATE(66)] = 691,
  [SMALL_STATE(67)] = 696,
  [SMALL_STATE(68)] = 701,
  [SMALL_STATE(69)] = 708,
  [SMALL_STATE(70)] = 715,
  [SMALL_STATE(71)] = 722,
  [SMALL_STATE(72)] = 729,
  [SMALL_STATE(73)] = 736,
  [SMALL_STATE(74)] = 743,
  [SMALL_STATE(75)] = 750,
  [SMALL_STATE(76)] = 757,
  [SMALL_STATE(77)] = 762,
  [SMALL_STATE(78)] = 767,
  [SMALL_STATE(79)] = 774,
  [SMALL_STATE(80)] = 778,
  [SMALL_STATE(81)] = 782,
  [SMALL_STATE(82)] = 786,
  [SMALL_STATE(83)] = 790,
  [SMALL_STATE(84)] = 794,
  [SMALL_STATE(85)] = 798,
  [SMALL_STATE(86)] = 802,
  [SMALL_STATE(87)] = 806,
  [SMALL_STATE(88)] = 810,
  [SMALL_STATE(89)] = 814,
  [SMALL_STATE(90)] = 818,
  [SMALL_STATE(91)] = 822,
  [SMALL_STATE(92)] = 826,
  [SMALL_STATE(93)] = 830,
  [SMALL_STATE(94)] = 834,
  [SMALL_STATE(95)] = 838,
  [SMALL_STATE(96)] = 842,
  [SMALL_STATE(97)] = 846,
  [SMALL_STATE(98)] = 850,
  [SMALL_STATE(99)] = 854,
  [SMALL_STATE(100)] = 858,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
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
