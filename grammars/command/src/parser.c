#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 1
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_move = 1,
  anon_sym_delete = 2,
  anon_sym_new = 3,
  anon_sym_set = 4,
  anon_sym_param = 5,
  anon_sym_input = 6,
  anon_sym_output = 7,
  anon_sym_module = 8,
  anon_sym_origin = 9,
  aux_sym_origin_token1 = 10,
  anon_sym_COMMA = 11,
  aux_sym_origin_token2 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_name_token1 = 14,
  sym_height = 15,
  sym_width = 16,
  anon_sym_label = 17,
  anon_sym_guide = 18,
  sym_identifier = 19,
  anon_sym_vertical = 20,
  anon_sym_AT = 21,
  aux_sym_absolute_token1 = 22,
  aux_sym_relative_token1 = 23,
  aux_sym_guideline_token1 = 24,
  anon_sym_horizontal = 25,
  aux_sym_anchor_token1 = 26,
  sym_source_file = 27,
  sym__command = 28,
  sym_new = 29,
  sym_set = 30,
  sym_entity = 31,
  sym_attr = 32,
  sym_module = 33,
  sym_origin = 34,
  sym_name = 35,
  sym_label = 36,
  sym_guide = 37,
  sym_vertical = 38,
  sym_absolute = 39,
  sym_relative = 40,
  sym_guideline = 41,
  sym_horizontal = 42,
  sym_text = 43,
  sym_anchor = 44,
  aux_sym_source_file_repeat1 = 45,
  alias_sym_geometry = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_move] = "move",
  [anon_sym_delete] = "delete",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_param] = "param",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_module] = "module",
  [anon_sym_origin] = "origin",
  [aux_sym_origin_token1] = "y",
  [anon_sym_COMMA] = ",",
  [aux_sym_origin_token2] = "x",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_name_token1] = "value",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_label] = "label",
  [anon_sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [anon_sym_vertical] = "vertical",
  [anon_sym_AT] = "@",
  [aux_sym_absolute_token1] = "offset",
  [aux_sym_relative_token1] = "offset",
  [aux_sym_guideline_token1] = "offset",
  [anon_sym_horizontal] = "horizontal",
  [aux_sym_anchor_token1] = "x",
  [sym_source_file] = "source_file",
  [sym__command] = "_command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym_entity] = "entity",
  [sym_attr] = "attr",
  [sym_module] = "module",
  [sym_origin] = "origin",
  [sym_name] = "name",
  [sym_label] = "label",
  [sym_guide] = "guide",
  [sym_vertical] = "vertical",
  [sym_absolute] = "absolute",
  [sym_relative] = "relative",
  [sym_guideline] = "guideline",
  [sym_horizontal] = "horizontal",
  [sym_text] = "text",
  [sym_anchor] = "anchor",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [alias_sym_geometry] = "geometry",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_origin] = anon_sym_origin,
  [aux_sym_origin_token1] = aux_sym_origin_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_origin_token2] = aux_sym_origin_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_guide] = anon_sym_guide,
  [sym_identifier] = sym_identifier,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_absolute_token1] = aux_sym_absolute_token1,
  [aux_sym_relative_token1] = aux_sym_absolute_token1,
  [aux_sym_guideline_token1] = aux_sym_absolute_token1,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [aux_sym_anchor_token1] = aux_sym_origin_token2,
  [sym_source_file] = sym_source_file,
  [sym__command] = sym__command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym_entity] = sym_entity,
  [sym_attr] = sym_attr,
  [sym_module] = sym_module,
  [sym_origin] = sym_origin,
  [sym_name] = sym_name,
  [sym_label] = sym_label,
  [sym_guide] = sym_guide,
  [sym_vertical] = sym_vertical,
  [sym_absolute] = sym_absolute,
  [sym_relative] = sym_relative,
  [sym_guideline] = sym_guideline,
  [sym_horizontal] = sym_horizontal,
  [sym_text] = sym_text,
  [sym_anchor] = sym_anchor,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [alias_sym_geometry] = alias_sym_geometry,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_origin_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_name_token1] = {
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_absolute_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_relative_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_guideline_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_anchor_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
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
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [sym_vertical] = {
    .visible = true,
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
  [sym_guideline] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_geometry] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_geometry,
  },
  [2] = {
    [3] = aux_sym_origin_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'v') ADVANCE(33);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 94:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_origin_token2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_origin_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_guideline_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 170:
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
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 97},
  [34] = {.lex_state = 97},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 97},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_origin_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
    [aux_sym_guideline_token1] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [aux_sym_anchor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__command] = STATE(4),
    [sym_new] = STATE(4),
    [sym_set] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_move] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(15), 1,
      anon_sym_label,
    ACTIONS(17), 1,
      anon_sym_guide,
    STATE(11), 1,
      sym_entity,
    ACTIONS(11), 3,
      anon_sym_param,
      anon_sym_input,
      anon_sym_output,
    STATE(21), 3,
      sym_module,
      sym_label,
      sym_guide,
  [23] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_new,
    ACTIONS(27), 1,
      anon_sym_set,
    ACTIONS(21), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(3), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [43] = 5,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 2,
      anon_sym_move,
      anon_sym_delete,
    STATE(3), 4,
      sym__command,
      sym_new,
      sym_set,
      aux_sym_source_file_repeat1,
  [63] = 5,
    ACTIONS(34), 1,
      aux_sym_origin_token1,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_AT,
    ACTIONS(40), 1,
      aux_sym_relative_token1,
    STATE(20), 3,
      sym_absolute,
      sym_relative,
      sym_guideline,
  [81] = 5,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_AT,
    ACTIONS(40), 1,
      aux_sym_relative_token1,
    ACTIONS(42), 1,
      aux_sym_origin_token2,
    STATE(19), 3,
      sym_absolute,
      sym_relative,
      sym_guideline,
  [99] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [107] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [115] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [123] = 4,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_vertical,
    ACTIONS(54), 1,
      anon_sym_horizontal,
    STATE(22), 2,
      sym_vertical,
      sym_horizontal,
  [137] = 1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [145] = 1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [153] = 1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [161] = 1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [169] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [177] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [185] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [193] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [201] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [209] = 1,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [217] = 1,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [225] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [233] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [241] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_move,
      anon_sym_delete,
      anon_sym_new,
      anon_sym_set,
  [249] = 3,
    ACTIONS(84), 1,
      anon_sym_vertical,
    ACTIONS(86), 1,
      anon_sym_horizontal,
    STATE(9), 2,
      sym_vertical,
      sym_horizontal,
  [260] = 3,
    ACTIONS(88), 1,
      anon_sym_origin,
    STATE(13), 1,
      sym_attr,
    STATE(14), 1,
      sym_origin,
  [270] = 2,
    ACTIONS(90), 1,
      anon_sym_AT,
    STATE(12), 1,
      sym_anchor,
  [277] = 2,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_name,
  [284] = 2,
    ACTIONS(94), 1,
      aux_sym_origin_token1,
    ACTIONS(96), 1,
      aux_sym_origin_token2,
  [291] = 2,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_text,
  [298] = 1,
    ACTIONS(100), 1,
      aux_sym_anchor_token1,
  [302] = 1,
    ACTIONS(102), 1,
      aux_sym_guideline_token1,
  [306] = 1,
    ACTIONS(104), 1,
      aux_sym_absolute_token1,
  [310] = 1,
    ACTIONS(106), 1,
      aux_sym_name_token1,
  [314] = 1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
  [318] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(112), 1,
      sym_width,
  [326] = 1,
    ACTIONS(114), 1,
      aux_sym_origin_token2,
  [330] = 1,
    ACTIONS(114), 1,
      aux_sym_origin_token1,
  [334] = 1,
    ACTIONS(116), 1,
      sym_height,
  [338] = 1,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
  [342] = 1,
    ACTIONS(120), 1,
      anon_sym_AT,
  [346] = 1,
    ACTIONS(122), 1,
      anon_sym_COMMA,
  [350] = 1,
    ACTIONS(124), 1,
      anon_sym_COMMA,
  [354] = 1,
    ACTIONS(126), 1,
      anon_sym_COMMA,
  [358] = 1,
    ACTIONS(128), 1,
      aux_sym_name_token1,
  [362] = 1,
    ACTIONS(130), 1,
      aux_sym_anchor_token1,
  [366] = 1,
    ACTIONS(132), 1,
      sym_height,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 137,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 153,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 209,
  [SMALL_STATE(21)] = 217,
  [SMALL_STATE(22)] = 225,
  [SMALL_STATE(23)] = 233,
  [SMALL_STATE(24)] = 241,
  [SMALL_STATE(25)] = 249,
  [SMALL_STATE(26)] = 260,
  [SMALL_STATE(27)] = 270,
  [SMALL_STATE(28)] = 277,
  [SMALL_STATE(29)] = 284,
  [SMALL_STATE(30)] = 291,
  [SMALL_STATE(31)] = 298,
  [SMALL_STATE(32)] = 302,
  [SMALL_STATE(33)] = 306,
  [SMALL_STATE(34)] = 310,
  [SMALL_STATE(35)] = 314,
  [SMALL_STATE(36)] = 318,
  [SMALL_STATE(37)] = 322,
  [SMALL_STATE(38)] = 326,
  [SMALL_STATE(39)] = 330,
  [SMALL_STATE(40)] = 334,
  [SMALL_STATE(41)] = 338,
  [SMALL_STATE(42)] = 342,
  [SMALL_STATE(43)] = 346,
  [SMALL_STATE(44)] = 350,
  [SMALL_STATE(45)] = 354,
  [SMALL_STATE(46)] = 358,
  [SMALL_STATE(47)] = 362,
  [SMALL_STATE(48)] = 366,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 4, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
