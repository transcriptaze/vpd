#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_decorate = 1,
  anon_sym_set = 2,
  anon_sym_delete = 3,
  anon_sym_load = 4,
  anon_sym_unload = 5,
  anon_sym_save = 6,
  anon_sym_export = 7,
  anon_sym_list = 8,
  anon_sym_help = 9,
  anon_sym_new = 10,
  anon_sym_output = 11,
  anon_sym_parameter = 12,
  anon_sym_light = 13,
  anon_sym_widget = 14,
  anon_sym_label = 15,
  anon_sym_decoration = 16,
  anon_sym_guide = 17,
  anon_sym_module = 18,
  anon_sym_1U = 19,
  anon_sym_128_DOT5mm = 20,
  anon_sym_COMMA = 21,
  aux_sym__module_width_token1 = 22,
  aux_sym__module_width_token2 = 23,
  anon_sym_input = 24,
  aux_sym_name_token1 = 25,
  anon_sym_AT = 26,
  aux_sym__xy_absolute_token1 = 27,
  aux_sym__xy_relative_token1 = 28,
  aux_sym__xy_guidelines_token1 = 29,
  sym_command = 30,
  sym__new = 31,
  sym__new_module = 32,
  sym__module_height = 33,
  sym__module_width = 34,
  sym__new_input = 35,
  sym_name = 36,
  sym_part = 37,
  sym_xy = 38,
  sym__xy_absolute = 39,
  sym__xy_relative = 40,
  sym__xy_guidelines = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_decorate] = "decorate",
  [anon_sym_set] = "set",
  [anon_sym_delete] = "delete",
  [anon_sym_load] = "load",
  [anon_sym_unload] = "unload",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_list] = "list",
  [anon_sym_help] = "help",
  [anon_sym_new] = "new",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_label] = "label",
  [anon_sym_decoration] = "decoration",
  [anon_sym_guide] = "guide",
  [anon_sym_module] = "module",
  [anon_sym_1U] = "height",
  [anon_sym_128_DOT5mm] = "height",
  [anon_sym_COMMA] = ",",
  [aux_sym__module_width_token1] = "width",
  [aux_sym__module_width_token2] = "width",
  [anon_sym_input] = "input",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_AT] = "@",
  [aux_sym__xy_absolute_token1] = "_xy_absolute_token1",
  [aux_sym__xy_relative_token1] = "_xy_relative_token1",
  [aux_sym__xy_guidelines_token1] = "_xy_guidelines_token1",
  [sym_command] = "command",
  [sym__new] = "_new",
  [sym__new_module] = "_new_module",
  [sym__module_height] = "_module_height",
  [sym__module_width] = "_module_width",
  [sym__new_input] = "_new_input",
  [sym_name] = "name",
  [sym_part] = "part",
  [sym_xy] = "xy",
  [sym__xy_absolute] = "_xy_absolute",
  [sym__xy_relative] = "_xy_relative",
  [sym__xy_guidelines] = "_xy_guidelines",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_unload] = anon_sym_unload,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_help] = anon_sym_help,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_1U] = anon_sym_1U,
  [anon_sym_128_DOT5mm] = anon_sym_1U,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__module_width_token1] = aux_sym__module_width_token1,
  [aux_sym__module_width_token2] = aux_sym__module_width_token1,
  [anon_sym_input] = anon_sym_input,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__xy_absolute_token1] = aux_sym__xy_absolute_token1,
  [aux_sym__xy_relative_token1] = aux_sym__xy_relative_token1,
  [aux_sym__xy_guidelines_token1] = aux_sym__xy_guidelines_token1,
  [sym_command] = sym_command,
  [sym__new] = sym__new,
  [sym__new_module] = sym__new_module,
  [sym__module_height] = sym__module_height,
  [sym__module_width] = sym__module_width,
  [sym__new_input] = sym__new_input,
  [sym_name] = sym_name,
  [sym_part] = sym_part,
  [sym_xy] = sym_xy,
  [sym__xy_absolute] = sym__xy_absolute,
  [sym__xy_relative] = sym__xy_relative,
  [sym__xy_guidelines] = sym__xy_guidelines,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unload] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_help] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_widget] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_decoration] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1U] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_128_DOT5mm] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__module_width_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__module_width_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__xy_absolute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__xy_relative_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__xy_guidelines_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__new] = {
    .visible = false,
    .named = true,
  },
  [sym__new_module] = {
    .visible = false,
    .named = true,
  },
  [sym__module_height] = {
    .visible = false,
    .named = true,
  },
  [sym__module_width] = {
    .visible = false,
    .named = true,
  },
  [sym__new_input] = {
    .visible = false,
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
  [sym_xy] = {
    .visible = true,
    .named = true,
  },
  [sym__xy_absolute] = {
    .visible = false,
    .named = true,
  },
  [sym__xy_relative] = {
    .visible = false,
    .named = true,
  },
  [sym__xy_guidelines] = {
    .visible = false,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [6] = 5,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(108);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(2);
      if (lookahead == '@') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(42);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '2') ADVANCE(3);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '8') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '8') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '5') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 88:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 89:
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 91:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(136);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(136);
      if (lookahead == '5') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(137);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(138);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == ' ' ||
          lookahead == 'H') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 103:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 104:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 105:
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 106:
      if (eof) ADVANCE(108);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 107:
      if (eof) ADVANCE(108);
      if (lookahead == '@') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_1U);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_128_DOT5mm);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__module_width_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__module_width_token2);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__xy_absolute_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__xy_relative_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__xy_guidelines_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__xy_guidelines_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__xy_guidelines_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 107},
  [4] = {.lex_state = 105},
  [5] = {.lex_state = 105},
  [6] = {.lex_state = 107},
  [7] = {.lex_state = 106},
  [8] = {.lex_state = 106},
  [9] = {.lex_state = 105},
  [10] = {.lex_state = 105},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 105},
  [13] = {.lex_state = 105},
  [14] = {.lex_state = 105},
  [15] = {.lex_state = 105},
  [16] = {.lex_state = 105},
  [17] = {.lex_state = 100},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 107},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 100},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_unload] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_help] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_1U] = ACTIONS(1),
    [anon_sym_128_DOT5mm] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__module_width_token1] = ACTIONS(1),
    [aux_sym__module_width_token2] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__xy_absolute_token1] = ACTIONS(1),
    [aux_sym__xy_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(30),
    [sym__new] = STATE(19),
    [anon_sym_decorate] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(3),
    [anon_sym_delete] = ACTIONS(3),
    [anon_sym_load] = ACTIONS(3),
    [anon_sym_unload] = ACTIONS(3),
    [anon_sym_save] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(3),
    [anon_sym_list] = ACTIONS(3),
    [anon_sym_help] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_input,
    STATE(29), 2,
      sym__new_module,
      sym__new_input,
    ACTIONS(9), 7,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
      anon_sym_label,
      anon_sym_decoration,
      anon_sym_guide,
  [23] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      aux_sym__xy_relative_token1,
    ACTIONS(21), 1,
      aux_sym__xy_guidelines_token1,
    STATE(12), 1,
      sym_xy,
    STATE(13), 3,
      sym__xy_absolute,
      sym__xy_relative,
      sym__xy_guidelines,
  [44] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym__module_width_token1,
    ACTIONS(29), 1,
      aux_sym__module_width_token2,
    STATE(8), 1,
      sym__module_height,
    STATE(28), 1,
      sym__module_width,
    ACTIONS(25), 2,
      anon_sym_1U,
      anon_sym_128_DOT5mm,
  [64] = 2,
    ACTIONS(33), 1,
      aux_sym__module_width_token2,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_1U,
      anon_sym_128_DOT5mm,
      aux_sym__module_width_token1,
  [74] = 1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym__xy_relative_token1,
      aux_sym__xy_guidelines_token1,
  [81] = 2,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      aux_sym__module_width_token1,
      aux_sym__module_width_token2,
  [90] = 3,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__module_width,
    ACTIONS(41), 2,
      aux_sym__module_width_token1,
      aux_sym__module_width_token2,
  [101] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_name_token1,
    STATE(4), 1,
      sym_name,
  [111] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_name_token1,
    STATE(3), 1,
      sym_name,
  [121] = 1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      aux_sym__module_width_token1,
      aux_sym__module_width_token2,
  [127] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      aux_sym_name_token1,
    STATE(25), 1,
      sym_part,
  [137] = 1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      aux_sym_name_token1,
  [142] = 1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym_name_token1,
  [147] = 1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym_name_token1,
  [152] = 1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_name_token1,
  [157] = 1,
    ACTIONS(65), 1,
      aux_sym__xy_absolute_token1,
  [161] = 1,
    ACTIONS(67), 1,
      anon_sym_COMMA,
  [165] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [169] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [173] = 1,
    ACTIONS(73), 1,
      anon_sym_COMMA,
  [177] = 1,
    ACTIONS(75), 1,
      aux_sym__xy_relative_token1,
  [181] = 1,
    ACTIONS(77), 1,
      aux_sym__xy_guidelines_token1,
  [185] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [189] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [193] = 1,
    ACTIONS(83), 1,
      aux_sym__xy_absolute_token1,
  [197] = 1,
    ACTIONS(85), 1,
      anon_sym_COMMA,
  [201] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [205] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [209] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 127,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 147,
  [SMALL_STATE(16)] = 152,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 161,
  [SMALL_STATE(19)] = 165,
  [SMALL_STATE(20)] = 169,
  [SMALL_STATE(21)] = 173,
  [SMALL_STATE(22)] = 177,
  [SMALL_STATE(23)] = 181,
  [SMALL_STATE(24)] = 185,
  [SMALL_STATE(25)] = 189,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 197,
  [SMALL_STATE(28)] = 201,
  [SMALL_STATE(29)] = 205,
  [SMALL_STATE(30)] = 209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_height, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_height, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_absolute, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_guidelines, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_relative, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new, 2),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hint(void) {
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
