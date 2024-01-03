#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 104
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
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 15,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 19,
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
  [52] = 18,
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
  [100] = 85,
  [101] = 89,
  [102] = 99,
  [103] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(53);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == 'U') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(179);
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'U') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 22:
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 147:
      if (lookahead == 'w') ADVANCE(161);
      END_STATE();
    case 148:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 149:
      if (lookahead == 'z') ADVANCE(107);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 155:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 156:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 157:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 158:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (lookahead == '5') ADVANCE(93);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(93);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_part);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'w') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == 'x') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_part);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_offset);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_anchor_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 159},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 159},
  [19] = {.lex_state = 159},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 159},
  [24] = {.lex_state = 159},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 159},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 0},
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 159},
  [77] = {.lex_state = 152},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 159},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 159},
  [86] = {.lex_state = 22},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 159},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 159},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 159},
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
    [sym_command] = STATE(98),
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
    STATE(87), 1,
      sym_identifier,
    STATE(57), 4,
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
    STATE(59), 8,
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
    STATE(33), 4,
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
    STATE(89), 1,
      sym_x,
    STATE(23), 2,
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
    STATE(101), 1,
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
  [143] = 4,
    ACTIONS(39), 1,
      anon_sym_AT,
    STATE(89), 1,
      sym_x,
    STATE(24), 2,
      sym_absolute,
      sym__xy,
    ACTIONS(41), 5,
      aux_sym_identifier_token1,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [161] = 4,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(101), 1,
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
    ACTIONS(60), 1,
      anon_sym_light,
    ACTIONS(62), 1,
      anon_sym_dark,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [230] = 2,
    ACTIONS(66), 1,
      sym_offset,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [241] = 2,
    ACTIONS(70), 1,
      sym_offset,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [252] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_offset,
    ACTIONS(74), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [265] = 2,
    STATE(27), 1,
      sym_y,
    ACTIONS(78), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [275] = 2,
    STATE(35), 1,
      sym_y,
    ACTIONS(80), 4,
      aux_sym_identifier_token1,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [285] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [295] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [305] = 1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [313] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      anon_sym_COMMA,
  [321] = 5,
    ACTIONS(94), 1,
      anon_sym_AT,
    ACTIONS(96), 1,
      aux_sym__originx_token1,
    ACTIONS(98), 1,
      aux_sym__originy_token1,
    STATE(82), 1,
      sym__originy,
    STATE(84), 1,
      sym__originx,
  [337] = 3,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_part,
    ACTIONS(102), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [349] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym_part,
    ACTIONS(108), 3,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [361] = 2,
    ACTIONS(112), 1,
      sym_offset,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [371] = 2,
    ACTIONS(116), 1,
      sym_offset,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [381] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 4,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
      sym_part,
  [391] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [398] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [405] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [412] = 3,
    ACTIONS(128), 1,
      anon_sym_origin,
    ACTIONS(130), 1,
      anon_sym_AT,
    ACTIONS(132), 2,
      aux_sym_origin_token1,
      sym_offset,
  [423] = 3,
    ACTIONS(134), 1,
      anon_sym_origin,
    ACTIONS(136), 1,
      anon_sym_AT,
    ACTIONS(138), 2,
      aux_sym_origin_token1,
      sym_offset,
  [434] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [441] = 1,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [448] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [455] = 1,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [462] = 1,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [469] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [476] = 1,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [483] = 1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [490] = 1,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [497] = 1,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [504] = 1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [511] = 1,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [518] = 1,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [525] = 1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [532] = 1,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [539] = 1,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [546] = 1,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [553] = 1,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [560] = 1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [567] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [574] = 1,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [581] = 1,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [588] = 1,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [595] = 1,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [602] = 1,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [609] = 1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [616] = 1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [623] = 1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_export,
  [630] = 2,
    ACTIONS(190), 1,
      anon_sym_AT,
    ACTIONS(192), 2,
      aux_sym_origin_token1,
      sym_offset,
  [638] = 2,
    ACTIONS(194), 1,
      anon_sym_AT,
    ACTIONS(196), 2,
      aux_sym_origin_token1,
      sym_offset,
  [646] = 2,
    ACTIONS(198), 1,
      anon_sym_origin,
    STATE(58), 2,
      sym__attribute,
      sym_origin,
  [654] = 1,
    ACTIONS(200), 2,
      aux_sym_origin_token1,
      sym_offset,
  [659] = 1,
    ACTIONS(202), 2,
      aux_sym_origin_token1,
      sym_offset,
  [664] = 2,
    ACTIONS(98), 1,
      aux_sym__originy_token1,
    STATE(34), 1,
      sym__originy,
  [671] = 2,
    ACTIONS(96), 1,
      aux_sym__originx_token1,
    STATE(34), 1,
      sym__originx,
  [678] = 2,
    ACTIONS(204), 1,
      anon_sym_module,
    STATE(45), 1,
      sym__exportable,
  [685] = 1,
    ACTIONS(206), 2,
      aux_sym_origin_token1,
      sym_offset,
  [690] = 2,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_text,
  [697] = 2,
    ACTIONS(210), 1,
      anon_sym_svg,
    STATE(28), 1,
      sym_svg,
  [704] = 2,
    ACTIONS(212), 1,
      sym_height,
    ACTIONS(214), 1,
      sym_width,
  [711] = 2,
    ACTIONS(216), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_anchor,
  [718] = 1,
    ACTIONS(218), 2,
      aux_sym_origin_token1,
      sym_offset,
  [723] = 2,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      sym_offset,
  [730] = 1,
    ACTIONS(224), 1,
      aux_sym_anchor_token1,
  [734] = 1,
    ACTIONS(226), 1,
      aux_sym_text_token1,
  [738] = 1,
    ACTIONS(228), 1,
      anon_sym_AT,
  [742] = 1,
    ACTIONS(230), 1,
      anon_sym_COMMA,
  [746] = 1,
    ACTIONS(232), 1,
      aux_sym_anchor_token1,
  [750] = 1,
    ACTIONS(234), 1,
      sym_width,
  [754] = 1,
    ACTIONS(236), 1,
      anon_sym_COMMA,
  [758] = 1,
    ACTIONS(238), 1,
      aux_sym_origin_token1,
  [762] = 1,
    ACTIONS(240), 1,
      anon_sym_COMMA,
  [766] = 1,
    ACTIONS(242), 1,
      aux_sym_anchor_token1,
  [770] = 1,
    ACTIONS(244), 1,
      aux_sym_origin_token1,
  [774] = 1,
    ACTIONS(19), 1,
      sym_offset,
  [778] = 1,
    ACTIONS(246), 1,
      aux_sym_anchor_token1,
  [782] = 1,
    ACTIONS(248), 1,
      anon_sym_COMMA,
  [786] = 1,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
  [790] = 1,
    ACTIONS(252), 1,
      anon_sym_COMMA,
  [794] = 1,
    ACTIONS(254), 1,
      anon_sym_COMMA,
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
      sym_name,
  [818] = 1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [822] = 1,
    ACTIONS(268), 1,
      anon_sym_COMMA,
  [826] = 1,
    ACTIONS(270), 1,
      aux_sym_anchor_token1,
  [830] = 1,
    ACTIONS(272), 1,
      anon_sym_COMMA,
  [834] = 1,
    ACTIONS(274), 1,
      anon_sym_COMMA,
  [838] = 1,
    ACTIONS(276), 1,
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
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 305,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 361,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 391,
  [SMALL_STATE(29)] = 398,
  [SMALL_STATE(30)] = 405,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 441,
  [SMALL_STATE(35)] = 448,
  [SMALL_STATE(36)] = 455,
  [SMALL_STATE(37)] = 462,
  [SMALL_STATE(38)] = 469,
  [SMALL_STATE(39)] = 476,
  [SMALL_STATE(40)] = 483,
  [SMALL_STATE(41)] = 490,
  [SMALL_STATE(42)] = 497,
  [SMALL_STATE(43)] = 504,
  [SMALL_STATE(44)] = 511,
  [SMALL_STATE(45)] = 518,
  [SMALL_STATE(46)] = 525,
  [SMALL_STATE(47)] = 532,
  [SMALL_STATE(48)] = 539,
  [SMALL_STATE(49)] = 546,
  [SMALL_STATE(50)] = 553,
  [SMALL_STATE(51)] = 560,
  [SMALL_STATE(52)] = 567,
  [SMALL_STATE(53)] = 574,
  [SMALL_STATE(54)] = 581,
  [SMALL_STATE(55)] = 588,
  [SMALL_STATE(56)] = 595,
  [SMALL_STATE(57)] = 602,
  [SMALL_STATE(58)] = 609,
  [SMALL_STATE(59)] = 616,
  [SMALL_STATE(60)] = 623,
  [SMALL_STATE(61)] = 630,
  [SMALL_STATE(62)] = 638,
  [SMALL_STATE(63)] = 646,
  [SMALL_STATE(64)] = 654,
  [SMALL_STATE(65)] = 659,
  [SMALL_STATE(66)] = 664,
  [SMALL_STATE(67)] = 671,
  [SMALL_STATE(68)] = 678,
  [SMALL_STATE(69)] = 685,
  [SMALL_STATE(70)] = 690,
  [SMALL_STATE(71)] = 697,
  [SMALL_STATE(72)] = 704,
  [SMALL_STATE(73)] = 711,
  [SMALL_STATE(74)] = 718,
  [SMALL_STATE(75)] = 723,
  [SMALL_STATE(76)] = 730,
  [SMALL_STATE(77)] = 734,
  [SMALL_STATE(78)] = 738,
  [SMALL_STATE(79)] = 742,
  [SMALL_STATE(80)] = 746,
  [SMALL_STATE(81)] = 750,
  [SMALL_STATE(82)] = 754,
  [SMALL_STATE(83)] = 758,
  [SMALL_STATE(84)] = 762,
  [SMALL_STATE(85)] = 766,
  [SMALL_STATE(86)] = 770,
  [SMALL_STATE(87)] = 774,
  [SMALL_STATE(88)] = 778,
  [SMALL_STATE(89)] = 782,
  [SMALL_STATE(90)] = 786,
  [SMALL_STATE(91)] = 790,
  [SMALL_STATE(92)] = 794,
  [SMALL_STATE(93)] = 798,
  [SMALL_STATE(94)] = 802,
  [SMALL_STATE(95)] = 806,
  [SMALL_STATE(96)] = 810,
  [SMALL_STATE(97)] = 814,
  [SMALL_STATE(98)] = 818,
  [SMALL_STATE(99)] = 822,
  [SMALL_STATE(100)] = 826,
  [SMALL_STATE(101)] = 830,
  [SMALL_STATE(102)] = 834,
  [SMALL_STATE(103)] = 838,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(63),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(68),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exportable, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 4, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 4, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
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
