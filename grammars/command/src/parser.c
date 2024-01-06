#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  anon_sym_output = 4,
  aux_sym_parameter_token1 = 5,
  anon_sym_light = 6,
  anon_sym_widget = 7,
  anon_sym_set = 8,
  anon_sym_export = 9,
  anon_sym_svg = 10,
  anon_sym_dark = 11,
  anon_sym_origin = 12,
  anon_sym_COMMA = 13,
  anon_sym_AT = 14,
  aux_sym_origin_token1 = 15,
  aux_sym__originx_token1 = 16,
  aux_sym__originy_token1 = 17,
  sym_name = 18,
  sym_height = 19,
  sym_width = 20,
  sym_part = 21,
  anon_sym_label = 22,
  anon_sym_guide = 23,
  aux_sym_identifier_token1 = 24,
  anon_sym_vertical = 25,
  anon_sym_horizontal = 26,
  anon_sym_left = 27,
  anon_sym_centre = 28,
  anon_sym_center = 29,
  anon_sym_right = 30,
  anon_sym_top = 31,
  anon_sym_middle = 32,
  anon_sym_bottom = 33,
  sym_offset = 34,
  anon_sym_DQUOTE = 35,
  aux_sym_text_token1 = 36,
  aux_sym_anchor_token1 = 37,
  sym_command = 38,
  sym_new = 39,
  sym__entity = 40,
  sym_module = 41,
  sym_input = 42,
  sym_output = 43,
  sym_parameter = 44,
  sym_light = 45,
  sym_widget = 46,
  sym__component = 47,
  sym_set = 48,
  sym_export = 49,
  sym__exportable = 50,
  sym_svg = 51,
  sym__attribute = 52,
  sym_origin = 53,
  sym__originx = 54,
  sym__originy = 55,
  sym_label = 56,
  sym_guide = 57,
  sym_identifier = 58,
  sym_vertical = 59,
  sym_horizontal = 60,
  sym_geometry = 61,
  sym_guideline = 62,
  sym_text = 63,
  sym_anchor = 64,
  sym_absolute = 65,
  sym__xy = 66,
  sym_x = 67,
  sym_y = 68,
  aux_sym_command_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_set] = "set",
  [anon_sym_export] = "export",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [anon_sym_origin] = "origin",
  [anon_sym_COMMA] = ",",
  [anon_sym_AT] = "@",
  [aux_sym_origin_token1] = "offset",
  [aux_sym__originx_token1] = "reference",
  [aux_sym__originy_token1] = "reference",
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
  [sym_export] = "export",
  [sym__exportable] = "module",
  [sym_svg] = "svg",
  [sym__attribute] = "_attribute",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
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
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym__originx_token1] = aux_sym__originx_token1,
  [aux_sym__originy_token1] = aux_sym__originx_token1,
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
  [sym_export] = sym_export,
  [sym__exportable] = sym_module,
  [sym_svg] = sym_svg,
  [sym__attribute] = sym__attribute,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
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
  [sym__attribute] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(77);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'U') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'H') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(191);
      if (lookahead == 'U') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(155);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 22:
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'h') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(66);
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
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 152:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 153:
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 154:
      if (lookahead == 'z') ADVANCE(111);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 160:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 161:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 162:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 163:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_part);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 164},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 164},
  [14] = {.lex_state = 164},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 164},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 157},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 164},
  [84] = {.lex_state = 164},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 164},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 164},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym__originx_token1] = ACTIONS(1),
    [aux_sym__originy_token1] = ACTIONS(1),
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
    [sym_command] = STATE(91),
    [sym_new] = STATE(8),
    [sym_set] = STATE(8),
    [sym_export] = STATE(8),
    [aux_sym_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_input,
    ACTIONS(15), 1,
      anon_sym_output,
    ACTIONS(17), 1,
      aux_sym_parameter_token1,
    ACTIONS(19), 1,
      anon_sym_light,
    ACTIONS(21), 1,
      anon_sym_widget,
    ACTIONS(23), 1,
      anon_sym_label,
    ACTIONS(25), 1,
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
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(29), 1,
      anon_sym_vertical,
    ACTIONS(31), 1,
      anon_sym_horizontal,
    ACTIONS(35), 1,
      sym_offset,
    STATE(81), 1,
      sym_identifier,
    STATE(40), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(33), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [67] = 6,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(29), 1,
      anon_sym_vertical,
    ACTIONS(31), 1,
      anon_sym_horizontal,
    STATE(3), 1,
      sym_identifier,
    STATE(39), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(33), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [95] = 2,
    ACTIONS(39), 1,
      sym_offset,
    ACTIONS(37), 10,
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
    ACTIONS(41), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym_x,
    STATE(21), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(43), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [129] = 5,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_new,
    ACTIONS(50), 1,
      anon_sym_set,
    ACTIONS(53), 1,
      anon_sym_export,
    STATE(7), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [148] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(7), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [167] = 2,
    ACTIONS(60), 1,
      sym_offset,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [178] = 3,
    ACTIONS(64), 1,
      anon_sym_light,
    ACTIONS(66), 1,
      anon_sym_dark,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [191] = 3,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym_offset,
    ACTIONS(70), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [204] = 2,
    ACTIONS(76), 1,
      sym_offset,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [215] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [225] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [235] = 1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [243] = 5,
    ACTIONS(88), 1,
      anon_sym_AT,
    ACTIONS(90), 1,
      aux_sym__originx_token1,
    ACTIONS(92), 1,
      aux_sym__originy_token1,
    STATE(92), 1,
      sym__originy,
    STATE(93), 1,
      sym__originx,
  [259] = 2,
    ACTIONS(96), 1,
      sym_offset,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [269] = 1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [277] = 2,
    STATE(13), 1,
      sym_y,
    ACTIONS(100), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [287] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [297] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym_part,
    ACTIONS(108), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [309] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [316] = 1,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [323] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [330] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [337] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [344] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [351] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [358] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [365] = 1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [372] = 1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [379] = 1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [386] = 1,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [393] = 1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [400] = 1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [407] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [414] = 3,
    ACTIONS(142), 1,
      anon_sym_origin,
    ACTIONS(144), 1,
      anon_sym_AT,
    ACTIONS(146), 2,
      aux_sym_origin_token1,
      sym_offset,
  [425] = 3,
    ACTIONS(148), 1,
      anon_sym_origin,
    ACTIONS(150), 1,
      anon_sym_AT,
    ACTIONS(152), 2,
      aux_sym_origin_token1,
      sym_offset,
  [436] = 1,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [443] = 1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [450] = 1,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [457] = 1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [464] = 1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [471] = 1,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [478] = 1,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [485] = 1,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [492] = 1,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [499] = 1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [506] = 1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [513] = 1,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [520] = 1,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [527] = 1,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [534] = 1,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [541] = 2,
    ACTIONS(184), 1,
      anon_sym_AT,
    ACTIONS(186), 2,
      aux_sym_origin_token1,
      sym_offset,
  [549] = 2,
    ACTIONS(188), 1,
      anon_sym_AT,
    ACTIONS(190), 2,
      aux_sym_origin_token1,
      sym_offset,
  [557] = 2,
    ACTIONS(192), 1,
      anon_sym_origin,
    STATE(26), 2,
      sym__attribute,
      sym_origin,
  [565] = 1,
    ACTIONS(194), 2,
      aux_sym_origin_token1,
      sym_offset,
  [570] = 1,
    ACTIONS(196), 2,
      aux_sym_origin_token1,
      sym_offset,
  [575] = 2,
    ACTIONS(198), 1,
      sym_name,
    STATE(30), 1,
      sym__component,
  [582] = 2,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      sym_offset,
  [589] = 2,
    ACTIONS(204), 1,
      anon_sym_module,
    STATE(28), 1,
      sym__exportable,
  [596] = 2,
    ACTIONS(198), 1,
      sym_name,
    STATE(34), 1,
      sym__component,
  [603] = 1,
    ACTIONS(206), 2,
      aux_sym_origin_token1,
      sym_offset,
  [608] = 2,
    ACTIONS(198), 1,
      sym_name,
    STATE(33), 1,
      sym__component,
  [615] = 2,
    ACTIONS(92), 1,
      aux_sym__originy_token1,
    STATE(49), 1,
      sym__originy,
  [622] = 2,
    ACTIONS(90), 1,
      aux_sym__originx_token1,
    STATE(49), 1,
      sym__originx,
  [629] = 2,
    ACTIONS(208), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_anchor,
  [636] = 2,
    ACTIONS(210), 1,
      sym_height,
    ACTIONS(212), 1,
      sym_width,
  [643] = 2,
    ACTIONS(198), 1,
      sym_name,
    STATE(32), 1,
      sym__component,
  [650] = 2,
    ACTIONS(214), 1,
      anon_sym_svg,
    STATE(43), 1,
      sym_svg,
  [657] = 2,
    ACTIONS(198), 1,
      sym_name,
    STATE(31), 1,
      sym__component,
  [664] = 1,
    ACTIONS(216), 2,
      aux_sym_origin_token1,
      sym_offset,
  [669] = 2,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_text,
  [676] = 1,
    ACTIONS(220), 1,
      aux_sym_origin_token1,
  [680] = 1,
    ACTIONS(222), 1,
      anon_sym_COMMA,
  [684] = 1,
    ACTIONS(224), 1,
      anon_sym_COMMA,
  [688] = 1,
    ACTIONS(226), 1,
      anon_sym_COMMA,
  [692] = 1,
    ACTIONS(228), 1,
      anon_sym_AT,
  [696] = 1,
    ACTIONS(230), 1,
      aux_sym_text_token1,
  [700] = 1,
    ACTIONS(232), 1,
      anon_sym_COMMA,
  [704] = 1,
    ACTIONS(35), 1,
      sym_offset,
  [708] = 1,
    ACTIONS(234), 1,
      aux_sym_origin_token1,
  [712] = 1,
    ACTIONS(236), 1,
      aux_sym_anchor_token1,
  [716] = 1,
    ACTIONS(238), 1,
      aux_sym_anchor_token1,
  [720] = 1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
  [724] = 1,
    ACTIONS(242), 1,
      sym_name,
  [728] = 1,
    ACTIONS(244), 1,
      aux_sym_anchor_token1,
  [732] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [736] = 1,
    ACTIONS(248), 1,
      aux_sym_anchor_token1,
  [740] = 1,
    ACTIONS(250), 1,
      sym_width,
  [744] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [748] = 1,
    ACTIONS(254), 1,
      anon_sym_COMMA,
  [752] = 1,
    ACTIONS(256), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 243,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 287,
  [SMALL_STATE(21)] = 297,
  [SMALL_STATE(22)] = 309,
  [SMALL_STATE(23)] = 316,
  [SMALL_STATE(24)] = 323,
  [SMALL_STATE(25)] = 330,
  [SMALL_STATE(26)] = 337,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 351,
  [SMALL_STATE(29)] = 358,
  [SMALL_STATE(30)] = 365,
  [SMALL_STATE(31)] = 372,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 393,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 414,
  [SMALL_STATE(38)] = 425,
  [SMALL_STATE(39)] = 436,
  [SMALL_STATE(40)] = 443,
  [SMALL_STATE(41)] = 450,
  [SMALL_STATE(42)] = 457,
  [SMALL_STATE(43)] = 464,
  [SMALL_STATE(44)] = 471,
  [SMALL_STATE(45)] = 478,
  [SMALL_STATE(46)] = 485,
  [SMALL_STATE(47)] = 492,
  [SMALL_STATE(48)] = 499,
  [SMALL_STATE(49)] = 506,
  [SMALL_STATE(50)] = 513,
  [SMALL_STATE(51)] = 520,
  [SMALL_STATE(52)] = 527,
  [SMALL_STATE(53)] = 534,
  [SMALL_STATE(54)] = 541,
  [SMALL_STATE(55)] = 549,
  [SMALL_STATE(56)] = 557,
  [SMALL_STATE(57)] = 565,
  [SMALL_STATE(58)] = 570,
  [SMALL_STATE(59)] = 575,
  [SMALL_STATE(60)] = 582,
  [SMALL_STATE(61)] = 589,
  [SMALL_STATE(62)] = 596,
  [SMALL_STATE(63)] = 603,
  [SMALL_STATE(64)] = 608,
  [SMALL_STATE(65)] = 615,
  [SMALL_STATE(66)] = 622,
  [SMALL_STATE(67)] = 629,
  [SMALL_STATE(68)] = 636,
  [SMALL_STATE(69)] = 643,
  [SMALL_STATE(70)] = 650,
  [SMALL_STATE(71)] = 657,
  [SMALL_STATE(72)] = 664,
  [SMALL_STATE(73)] = 669,
  [SMALL_STATE(74)] = 676,
  [SMALL_STATE(75)] = 680,
  [SMALL_STATE(76)] = 684,
  [SMALL_STATE(77)] = 688,
  [SMALL_STATE(78)] = 692,
  [SMALL_STATE(79)] = 696,
  [SMALL_STATE(80)] = 700,
  [SMALL_STATE(81)] = 704,
  [SMALL_STATE(82)] = 708,
  [SMALL_STATE(83)] = 712,
  [SMALL_STATE(84)] = 716,
  [SMALL_STATE(85)] = 720,
  [SMALL_STATE(86)] = 724,
  [SMALL_STATE(87)] = 728,
  [SMALL_STATE(88)] = 732,
  [SMALL_STATE(89)] = 736,
  [SMALL_STATE(90)] = 740,
  [SMALL_STATE(91)] = 744,
  [SMALL_STATE(92)] = 748,
  [SMALL_STATE(93)] = 752,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(56),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(61),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
