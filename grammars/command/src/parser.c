#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_set = 7,
  anon_sym_export = 8,
  anon_sym_svg = 9,
  anon_sym_dark = 10,
  anon_sym_origin = 11,
  anon_sym_COMMA = 12,
  anon_sym_AT = 13,
  aux_sym_origin_token1 = 14,
  aux_sym__originx_token1 = 15,
  aux_sym__originy_token1 = 16,
  sym_name = 17,
  sym_height = 18,
  sym_width = 19,
  sym_part = 20,
  anon_sym_label = 21,
  anon_sym_guide = 22,
  aux_sym_identifier_token1 = 23,
  anon_sym_vertical = 24,
  anon_sym_horizontal = 25,
  anon_sym_left = 26,
  anon_sym_centre = 27,
  anon_sym_center = 28,
  anon_sym_right = 29,
  anon_sym_top = 30,
  anon_sym_middle = 31,
  anon_sym_bottom = 32,
  sym_offset = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_text_token1 = 35,
  aux_sym_anchor_token1 = 36,
  sym_command = 37,
  sym_new = 38,
  sym__entity = 39,
  sym_module = 40,
  sym_input = 41,
  sym_output = 42,
  sym_parameter = 43,
  sym_light = 44,
  sym_set = 45,
  sym_export = 46,
  sym__exportable = 47,
  sym_svg = 48,
  sym__attribute = 49,
  sym_origin = 50,
  sym__originx = 51,
  sym__originy = 52,
  sym_label = 53,
  sym_guide = 54,
  sym_identifier = 55,
  sym_vertical = 56,
  sym_horizontal = 57,
  sym_geometry = 58,
  sym_guideline = 59,
  sym_text = 60,
  sym_anchor = 61,
  sym_absolute = 62,
  sym__xy = 63,
  sym_x = 64,
  sym_y = 65,
  aux_sym_command_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_light] = "light",
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
  [20] = 12,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 22,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 16,
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
  [99] = 84,
  [100] = 86,
  [101] = 76,
  [102] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '@') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(41);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'H') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(166);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'H') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'H') ADVANCE(167);
      if (lookahead == 'U') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'H') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(241);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '@') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 14:
      if (lookahead == '@') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 15:
      if (lookahead == '@') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'z') ADVANCE(91);
      END_STATE();
    case 134:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(241);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 138:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 139:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 140:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 141:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_part);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'x') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 142},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 136},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 13},
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
    [sym_command] = STATE(83),
    [sym_new] = STATE(10),
    [sym_set] = STATE(10),
    [sym_export] = STATE(10),
    [aux_sym_command_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_vertical,
    ACTIONS(15), 1,
      anon_sym_horizontal,
    ACTIONS(19), 1,
      sym_offset,
    STATE(79), 1,
      sym_identifier,
    STATE(56), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(17), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [31] = 8,
    ACTIONS(21), 1,
      anon_sym_module,
    ACTIONS(23), 1,
      anon_sym_input,
    ACTIONS(25), 1,
      anon_sym_output,
    ACTIONS(27), 1,
      aux_sym_parameter_token1,
    ACTIONS(29), 1,
      anon_sym_light,
    ACTIONS(31), 1,
      anon_sym_label,
    ACTIONS(33), 1,
      anon_sym_guide,
    STATE(49), 8,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_label,
      sym_guide,
  [63] = 6,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_vertical,
    ACTIONS(15), 1,
      anon_sym_horizontal,
    STATE(2), 1,
      sym_identifier,
    STATE(34), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(17), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [91] = 2,
    ACTIONS(37), 1,
      sym_offset,
    ACTIONS(35), 10,
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
  [107] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_x,
    STATE(48), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [125] = 4,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(100), 1,
      sym_x,
    STATE(18), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [143] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_x,
    STATE(46), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [161] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_x,
    STATE(44), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [179] = 5,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(11), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [198] = 5,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_new,
    ACTIONS(52), 1,
      anon_sym_set,
    ACTIONS(55), 1,
      anon_sym_export,
    STATE(11), 4,
      sym_new,
      sym_set,
      sym_export,
      aux_sym_command_repeat1,
  [217] = 3,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_offset,
    ACTIONS(60), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [230] = 3,
    ACTIONS(66), 1,
      anon_sym_light,
    ACTIONS(68), 1,
      anon_sym_dark,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [243] = 2,
    ACTIONS(72), 1,
      sym_offset,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [254] = 2,
    ACTIONS(76), 1,
      sym_offset,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [265] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [275] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [283] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_part,
    ACTIONS(86), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [295] = 5,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      aux_sym__originx_token1,
    ACTIONS(94), 1,
      aux_sym__originy_token1,
    STATE(90), 1,
      sym__originy,
    STATE(91), 1,
      sym__originx,
  [311] = 2,
    ACTIONS(96), 1,
      sym_offset,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [321] = 2,
    STATE(42), 1,
      sym_y,
    ACTIONS(98), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [331] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [341] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [351] = 2,
    STATE(16), 1,
      sym_y,
    ACTIONS(108), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [361] = 2,
    ACTIONS(112), 1,
      sym_offset,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [371] = 1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [379] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [386] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [393] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [400] = 1,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [407] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [414] = 3,
    ACTIONS(124), 1,
      anon_sym_origin,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(128), 2,
      aux_sym_origin_token1,
      sym_offset,
  [425] = 3,
    ACTIONS(130), 1,
      anon_sym_origin,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(134), 2,
      aux_sym_origin_token1,
      sym_offset,
  [436] = 1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [443] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [450] = 1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [457] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [464] = 1,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [471] = 1,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [478] = 1,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [485] = 1,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [492] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [499] = 1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [506] = 1,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [513] = 1,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [520] = 1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [527] = 1,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [534] = 1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [541] = 1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [548] = 1,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [555] = 1,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [562] = 1,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [569] = 1,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [576] = 1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [583] = 1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [590] = 1,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [597] = 1,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [604] = 1,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [611] = 1,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [618] = 2,
    ACTIONS(184), 1,
      anon_sym_AT,
    ACTIONS(186), 2,
      aux_sym_origin_token1,
      sym_offset,
  [626] = 2,
    ACTIONS(188), 1,
      anon_sym_AT,
    ACTIONS(190), 2,
      aux_sym_origin_token1,
      sym_offset,
  [634] = 2,
    ACTIONS(192), 1,
      anon_sym_origin,
    STATE(47), 2,
      sym__attribute,
      sym_origin,
  [642] = 1,
    ACTIONS(194), 2,
      aux_sym_origin_token1,
      sym_offset,
  [647] = 2,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_text,
  [654] = 2,
    ACTIONS(94), 1,
      aux_sym__originy_token1,
    STATE(28), 1,
      sym__originy,
  [661] = 2,
    ACTIONS(92), 1,
      aux_sym__originx_token1,
    STATE(28), 1,
      sym__originx,
  [668] = 1,
    ACTIONS(198), 2,
      aux_sym_origin_token1,
      sym_offset,
  [673] = 2,
    ACTIONS(200), 1,
      anon_sym_svg,
    STATE(39), 1,
      sym_svg,
  [680] = 2,
    ACTIONS(202), 1,
      anon_sym_module,
    STATE(50), 1,
      sym__exportable,
  [687] = 2,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      sym_offset,
  [694] = 1,
    ACTIONS(208), 2,
      aux_sym_origin_token1,
      sym_offset,
  [699] = 2,
    ACTIONS(210), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_anchor,
  [706] = 1,
    ACTIONS(212), 2,
      aux_sym_origin_token1,
      sym_offset,
  [711] = 2,
    ACTIONS(214), 1,
      sym_height,
    ACTIONS(216), 1,
      sym_width,
  [718] = 1,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
  [722] = 1,
    ACTIONS(220), 1,
      anon_sym_COMMA,
  [726] = 1,
    ACTIONS(222), 1,
      anon_sym_COMMA,
  [730] = 1,
    ACTIONS(224), 1,
      anon_sym_COMMA,
  [734] = 1,
    ACTIONS(19), 1,
      sym_offset,
  [738] = 1,
    ACTIONS(226), 1,
      anon_sym_AT,
  [742] = 1,
    ACTIONS(228), 1,
      anon_sym_COMMA,
  [746] = 1,
    ACTIONS(230), 1,
      aux_sym_origin_token1,
  [750] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [754] = 1,
    ACTIONS(234), 1,
      aux_sym_anchor_token1,
  [758] = 1,
    ACTIONS(236), 1,
      aux_sym_anchor_token1,
  [762] = 1,
    ACTIONS(238), 1,
      anon_sym_COMMA,
  [766] = 1,
    ACTIONS(240), 1,
      aux_sym_anchor_token1,
  [770] = 1,
    ACTIONS(242), 1,
      aux_sym_anchor_token1,
  [774] = 1,
    ACTIONS(244), 1,
      sym_width,
  [778] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [782] = 1,
    ACTIONS(248), 1,
      anon_sym_COMMA,
  [786] = 1,
    ACTIONS(250), 1,
      aux_sym_origin_token1,
  [790] = 1,
    ACTIONS(252), 1,
      aux_sym_text_token1,
  [794] = 1,
    ACTIONS(254), 1,
      sym_name,
  [798] = 1,
    ACTIONS(256), 1,
      sym_name,
  [802] = 1,
    ACTIONS(258), 1,
      sym_name,
  [806] = 1,
    ACTIONS(260), 1,
      sym_name,
  [810] = 1,
    ACTIONS(262), 1,
      sym_name,
  [814] = 1,
    ACTIONS(264), 1,
      aux_sym_anchor_token1,
  [818] = 1,
    ACTIONS(266), 1,
      anon_sym_COMMA,
  [822] = 1,
    ACTIONS(268), 1,
      anon_sym_COMMA,
  [826] = 1,
    ACTIONS(270), 1,
      aux_sym_anchor_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 341,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 361,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 379,
  [SMALL_STATE(28)] = 386,
  [SMALL_STATE(29)] = 393,
  [SMALL_STATE(30)] = 400,
  [SMALL_STATE(31)] = 407,
  [SMALL_STATE(32)] = 414,
  [SMALL_STATE(33)] = 425,
  [SMALL_STATE(34)] = 436,
  [SMALL_STATE(35)] = 443,
  [SMALL_STATE(36)] = 450,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 464,
  [SMALL_STATE(39)] = 471,
  [SMALL_STATE(40)] = 478,
  [SMALL_STATE(41)] = 485,
  [SMALL_STATE(42)] = 492,
  [SMALL_STATE(43)] = 499,
  [SMALL_STATE(44)] = 506,
  [SMALL_STATE(45)] = 513,
  [SMALL_STATE(46)] = 520,
  [SMALL_STATE(47)] = 527,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 548,
  [SMALL_STATE(51)] = 555,
  [SMALL_STATE(52)] = 562,
  [SMALL_STATE(53)] = 569,
  [SMALL_STATE(54)] = 576,
  [SMALL_STATE(55)] = 583,
  [SMALL_STATE(56)] = 590,
  [SMALL_STATE(57)] = 597,
  [SMALL_STATE(58)] = 604,
  [SMALL_STATE(59)] = 611,
  [SMALL_STATE(60)] = 618,
  [SMALL_STATE(61)] = 626,
  [SMALL_STATE(62)] = 634,
  [SMALL_STATE(63)] = 642,
  [SMALL_STATE(64)] = 647,
  [SMALL_STATE(65)] = 654,
  [SMALL_STATE(66)] = 661,
  [SMALL_STATE(67)] = 668,
  [SMALL_STATE(68)] = 673,
  [SMALL_STATE(69)] = 680,
  [SMALL_STATE(70)] = 687,
  [SMALL_STATE(71)] = 694,
  [SMALL_STATE(72)] = 699,
  [SMALL_STATE(73)] = 706,
  [SMALL_STATE(74)] = 711,
  [SMALL_STATE(75)] = 718,
  [SMALL_STATE(76)] = 722,
  [SMALL_STATE(77)] = 726,
  [SMALL_STATE(78)] = 730,
  [SMALL_STATE(79)] = 734,
  [SMALL_STATE(80)] = 738,
  [SMALL_STATE(81)] = 742,
  [SMALL_STATE(82)] = 746,
  [SMALL_STATE(83)] = 750,
  [SMALL_STATE(84)] = 754,
  [SMALL_STATE(85)] = 758,
  [SMALL_STATE(86)] = 762,
  [SMALL_STATE(87)] = 766,
  [SMALL_STATE(88)] = 770,
  [SMALL_STATE(89)] = 774,
  [SMALL_STATE(90)] = 778,
  [SMALL_STATE(91)] = 782,
  [SMALL_STATE(92)] = 786,
  [SMALL_STATE(93)] = 790,
  [SMALL_STATE(94)] = 794,
  [SMALL_STATE(95)] = 798,
  [SMALL_STATE(96)] = 802,
  [SMALL_STATE(97)] = 806,
  [SMALL_STATE(98)] = 810,
  [SMALL_STATE(99)] = 814,
  [SMALL_STATE(100)] = 818,
  [SMALL_STATE(101)] = 822,
  [SMALL_STATE(102)] = 826,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(69),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [232] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
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
