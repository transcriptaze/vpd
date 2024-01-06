#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  anon_sym_export = 10,
  anon_sym_svg = 11,
  anon_sym_dark = 12,
  anon_sym_origin = 13,
  anon_sym_COMMA = 14,
  anon_sym_AT = 15,
  aux_sym_origin_token1 = 16,
  aux_sym__originx_token1 = 17,
  aux_sym__originy_token1 = 18,
  sym_name = 19,
  sym_height = 20,
  sym_width = 21,
  sym_part = 22,
  anon_sym_label = 23,
  anon_sym_guide = 24,
  aux_sym_identifier_token1 = 25,
  anon_sym_vertical = 26,
  anon_sym_horizontal = 27,
  anon_sym_left = 28,
  anon_sym_centre = 29,
  anon_sym_center = 30,
  anon_sym_right = 31,
  anon_sym_top = 32,
  anon_sym_middle = 33,
  anon_sym_bottom = 34,
  sym_offset = 35,
  anon_sym_DQUOTE = 36,
  aux_sym_text_token1 = 37,
  aux_sym_anchor_token1 = 38,
  sym_command = 39,
  sym_new = 40,
  sym__entity = 41,
  sym_module = 42,
  sym_input = 43,
  sym_output = 44,
  sym_parameter = 45,
  sym_light = 46,
  sym_widget = 47,
  sym__component = 48,
  sym_set = 49,
  sym_export = 50,
  sym__exportable = 51,
  sym_svg = 52,
  sym__attribute = 53,
  sym_origin = 54,
  sym__originx = 55,
  sym__originy = 56,
  sym_label = 57,
  sym_guide = 58,
  sym_identifier = 59,
  sym_vertical = 60,
  sym_horizontal = 61,
  sym_geometry = 62,
  sym_guideline = 63,
  sym_text = 64,
  sym_anchor = 65,
  sym_absolute = 66,
  sym__xy = 67,
  sym_x = 68,
  sym_y = 69,
  aux_sym_command_repeat1 = 70,
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
  [sym_comment] = sym_comment,
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
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '@') ADVANCE(184);
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
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(189);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'U') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(267);
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
      if (lookahead == '@') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'U') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(155);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 22:
      if (lookahead == '@') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 'h') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == 'v') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(184);
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
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(193);
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
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
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
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(187);
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
      if (lookahead == 'g') ADVANCE(180);
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
      if (lookahead == 'k') ADVANCE(181);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(251);
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
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(188);
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
      if (lookahead == 'n') ADVANCE(182);
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
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(188);
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
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(187);
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
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(187);
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
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 153:
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 154:
      if (lookahead == 'z') ADVANCE(111);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_part);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'x') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(269);
      END_STATE();
    case 270:
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 164},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 164},
  [14] = {.lex_state = 164},
  [15] = {.lex_state = 164},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 164},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 23},
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
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 34},
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
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 164},
  [84] = {.lex_state = 164},
  [85] = {.lex_state = 164},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 164},
  [88] = {.lex_state = 157},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
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
    STATE(24), 9,
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
    STATE(47), 4,
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
    STATE(39), 4,
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
    STATE(77), 1,
      sym_x,
    STATE(18), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(63), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [173] = 3,
    ACTIONS(69), 1,
      sym_offset,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(67), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [187] = 2,
    ACTIONS(73), 1,
      sym_offset,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [199] = 2,
    ACTIONS(77), 1,
      sym_offset,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [211] = 3,
    ACTIONS(81), 1,
      anon_sym_light,
    ACTIONS(83), 1,
      anon_sym_dark,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [225] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [236] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [247] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [258] = 1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [267] = 1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [276] = 3,
    ACTIONS(105), 1,
      sym_part,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [289] = 2,
    ACTIONS(109), 1,
      sym_offset,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [300] = 1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [308] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [316] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [324] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [332] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [340] = 5,
    ACTIONS(121), 1,
      anon_sym_AT,
    ACTIONS(123), 1,
      aux_sym__originx_token1,
    ACTIONS(125), 1,
      aux_sym__originy_token1,
    STATE(75), 1,
      sym__originy,
    STATE(90), 1,
      sym__originx,
  [356] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [364] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [372] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [380] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [388] = 1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
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
  [476] = 2,
    STATE(15), 1,
      sym_y,
    ACTIONS(157), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [486] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [494] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [502] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [510] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [518] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [526] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [534] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [542] = 1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [550] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [558] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [566] = 3,
    ACTIONS(179), 1,
      anon_sym_origin,
    ACTIONS(181), 1,
      anon_sym_AT,
    ACTIONS(183), 2,
      aux_sym_origin_token1,
      sym_offset,
  [577] = 3,
    ACTIONS(185), 1,
      anon_sym_origin,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(189), 2,
      aux_sym_origin_token1,
      sym_offset,
  [588] = 2,
    ACTIONS(191), 1,
      anon_sym_origin,
    STATE(26), 2,
      sym__attribute,
      sym_origin,
  [596] = 2,
    ACTIONS(193), 1,
      anon_sym_AT,
    ACTIONS(195), 2,
      aux_sym_origin_token1,
      sym_offset,
  [604] = 2,
    ACTIONS(197), 1,
      anon_sym_AT,
    ACTIONS(199), 2,
      aux_sym_origin_token1,
      sym_offset,
  [612] = 2,
    ACTIONS(201), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_anchor,
  [619] = 1,
    ACTIONS(203), 2,
      aux_sym_origin_token1,
      sym_offset,
  [624] = 2,
    ACTIONS(205), 1,
      sym_name,
    STATE(34), 1,
      sym__component,
  [631] = 2,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_text,
  [638] = 2,
    ACTIONS(209), 1,
      anon_sym_module,
    STATE(28), 1,
      sym__exportable,
  [645] = 2,
    ACTIONS(211), 1,
      anon_sym_svg,
    STATE(43), 1,
      sym_svg,
  [652] = 2,
    ACTIONS(213), 1,
      sym_height,
    ACTIONS(215), 1,
      sym_width,
  [659] = 2,
    ACTIONS(205), 1,
      sym_name,
    STATE(32), 1,
      sym__component,
  [666] = 2,
    ACTIONS(125), 1,
      aux_sym__originy_token1,
    STATE(35), 1,
      sym__originy,
  [673] = 2,
    ACTIONS(123), 1,
      aux_sym__originx_token1,
    STATE(35), 1,
      sym__originx,
  [680] = 2,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      sym_offset,
  [687] = 2,
    ACTIONS(205), 1,
      sym_name,
    STATE(30), 1,
      sym__component,
  [694] = 2,
    ACTIONS(205), 1,
      sym_name,
    STATE(31), 1,
      sym__component,
  [701] = 1,
    ACTIONS(221), 2,
      aux_sym_origin_token1,
      sym_offset,
  [706] = 2,
    ACTIONS(205), 1,
      sym_name,
    STATE(33), 1,
      sym__component,
  [713] = 1,
    ACTIONS(223), 2,
      aux_sym_origin_token1,
      sym_offset,
  [718] = 1,
    ACTIONS(225), 2,
      aux_sym_origin_token1,
      sym_offset,
  [723] = 1,
    ACTIONS(227), 1,
      anon_sym_AT,
  [727] = 1,
    ACTIONS(229), 1,
      anon_sym_COMMA,
  [731] = 1,
    ACTIONS(231), 1,
      anon_sym_COMMA,
  [735] = 1,
    ACTIONS(233), 1,
      anon_sym_COMMA,
  [739] = 1,
    ACTIONS(235), 1,
      aux_sym_origin_token1,
  [743] = 1,
    ACTIONS(237), 1,
      sym_width,
  [747] = 1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
  [751] = 1,
    ACTIONS(241), 1,
      anon_sym_COMMA,
  [755] = 1,
    ACTIONS(243), 1,
      aux_sym_origin_token1,
  [759] = 1,
    ACTIONS(245), 1,
      aux_sym_anchor_token1,
  [763] = 1,
    ACTIONS(247), 1,
      aux_sym_anchor_token1,
  [767] = 1,
    ACTIONS(249), 1,
      aux_sym_anchor_token1,
  [771] = 1,
    ACTIONS(251), 1,
      sym_name,
  [775] = 1,
    ACTIONS(253), 1,
      aux_sym_anchor_token1,
  [779] = 1,
    ACTIONS(255), 1,
      aux_sym_text_token1,
  [783] = 1,
    ACTIONS(257), 1,
      anon_sym_COMMA,
  [787] = 1,
    ACTIONS(259), 1,
      anon_sym_COMMA,
  [791] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [795] = 1,
    ACTIONS(37), 1,
      sym_offset,
  [799] = 1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
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
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 258,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 289,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 364,
  [SMALL_STATE(28)] = 372,
  [SMALL_STATE(29)] = 380,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 396,
  [SMALL_STATE(32)] = 404,
  [SMALL_STATE(33)] = 412,
  [SMALL_STATE(34)] = 420,
  [SMALL_STATE(35)] = 428,
  [SMALL_STATE(36)] = 436,
  [SMALL_STATE(37)] = 444,
  [SMALL_STATE(38)] = 452,
  [SMALL_STATE(39)] = 460,
  [SMALL_STATE(40)] = 468,
  [SMALL_STATE(41)] = 476,
  [SMALL_STATE(42)] = 486,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 502,
  [SMALL_STATE(45)] = 510,
  [SMALL_STATE(46)] = 518,
  [SMALL_STATE(47)] = 526,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 542,
  [SMALL_STATE(50)] = 550,
  [SMALL_STATE(51)] = 558,
  [SMALL_STATE(52)] = 566,
  [SMALL_STATE(53)] = 577,
  [SMALL_STATE(54)] = 588,
  [SMALL_STATE(55)] = 596,
  [SMALL_STATE(56)] = 604,
  [SMALL_STATE(57)] = 612,
  [SMALL_STATE(58)] = 619,
  [SMALL_STATE(59)] = 624,
  [SMALL_STATE(60)] = 631,
  [SMALL_STATE(61)] = 638,
  [SMALL_STATE(62)] = 645,
  [SMALL_STATE(63)] = 652,
  [SMALL_STATE(64)] = 659,
  [SMALL_STATE(65)] = 666,
  [SMALL_STATE(66)] = 673,
  [SMALL_STATE(67)] = 680,
  [SMALL_STATE(68)] = 687,
  [SMALL_STATE(69)] = 694,
  [SMALL_STATE(70)] = 701,
  [SMALL_STATE(71)] = 706,
  [SMALL_STATE(72)] = 713,
  [SMALL_STATE(73)] = 718,
  [SMALL_STATE(74)] = 723,
  [SMALL_STATE(75)] = 727,
  [SMALL_STATE(76)] = 731,
  [SMALL_STATE(77)] = 735,
  [SMALL_STATE(78)] = 739,
  [SMALL_STATE(79)] = 743,
  [SMALL_STATE(80)] = 747,
  [SMALL_STATE(81)] = 751,
  [SMALL_STATE(82)] = 755,
  [SMALL_STATE(83)] = 759,
  [SMALL_STATE(84)] = 763,
  [SMALL_STATE(85)] = 767,
  [SMALL_STATE(86)] = 771,
  [SMALL_STATE(87)] = 775,
  [SMALL_STATE(88)] = 779,
  [SMALL_STATE(89)] = 783,
  [SMALL_STATE(90)] = 787,
  [SMALL_STATE(91)] = 791,
  [SMALL_STATE(92)] = 795,
  [SMALL_STATE(93)] = 799,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(54),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(61),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
