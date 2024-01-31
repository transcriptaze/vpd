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
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  sym_height = 3,
  sym_width = 4,
  anon_sym_set = 5,
  anon_sym_name = 6,
  anon_sym_height = 7,
  anon_sym_width = 8,
  anon_sym_decorate = 9,
  anon_sym_LPAREN = 10,
  anon_sym_input = 11,
  anon_sym_output = 12,
  anon_sym_parameter = 13,
  anon_sym_light = 14,
  anon_sym_widget = 15,
  anon_sym_RPAREN = 16,
  anon_sym_with = 17,
  anon_sym_delete = 18,
  anon_sym_guide = 19,
  anon_sym_load = 20,
  anon_sym_project = 21,
  anon_sym_script = 22,
  anon_sym_save = 23,
  anon_sym_timestamp = 24,
  anon_sym_COMMA = 25,
  anon_sym_gzip = 26,
  anon_sym_export = 27,
  anon_sym_panel = 28,
  anon_sym_svg = 29,
  anon_sym_dark = 30,
  anon_sym_origin = 31,
  anon_sym_background = 32,
  anon_sym_label = 33,
  anon_sym_AT = 34,
  aux_sym__label_absolute_token1 = 35,
  aux_sym__label_relative_token1 = 36,
  aux_sym_font_token1 = 37,
  aux_sym_fontsize_token1 = 38,
  anon_sym_left = 39,
  anon_sym_centre = 40,
  anon_sym_center = 41,
  anon_sym_right = 42,
  anon_sym_top = 43,
  anon_sym_middle = 44,
  anon_sym_baseline = 45,
  anon_sym_bottom = 46,
  aux_sym__rgb_token1 = 47,
  aux_sym__rgba_token1 = 48,
  aux_sym__x_token1 = 49,
  aux_sym__y_token1 = 50,
  aux_sym__offset_token1 = 51,
  anon_sym_DQUOTE = 52,
  aux_sym__string_token1 = 53,
  sym_identifier = 54,
  sym_command = 55,
  sym_new = 56,
  sym_module = 57,
  sym_set = 58,
  sym__module_attr = 59,
  sym_decorate = 60,
  sym__component = 61,
  sym_decoration = 62,
  sym_delete = 63,
  sym__guideline_id = 64,
  sym__input_id = 65,
  sym__output_id = 66,
  sym__parameter_id = 67,
  sym__light_id = 68,
  sym__widget_id = 69,
  sym_load = 70,
  sym_save = 71,
  sym_project = 72,
  sym__save_options = 73,
  sym_script = 74,
  sym_export = 75,
  sym_panel = 76,
  sym_svg = 77,
  sym_origin = 78,
  sym_background = 79,
  sym_guide = 80,
  sym_input = 81,
  sym_output = 82,
  sym_parameter = 83,
  sym_light = 84,
  sym_widget = 85,
  sym_label = 86,
  sym__label_string = 87,
  sym__label_absolute = 88,
  sym__label_relative = 89,
  sym__label_geometry = 90,
  sym_font = 91,
  sym_fontsize = 92,
  sym_halign = 93,
  sym_valign = 94,
  sym_colour = 95,
  sym__rgb = 96,
  sym__rgba = 97,
  sym_name = 98,
  sym_rgb = 99,
  sym_rgba = 100,
  sym_absolute = 101,
  sym__x = 102,
  sym__y = 103,
  sym_x = 104,
  sym_y = 105,
  sym__offset = 106,
  sym_offset = 107,
  sym__string = 108,
  aux_sym_command_repeat1 = 109,
  alias_sym_reference = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_set] = "set",
  [anon_sym_name] = "name",
  [anon_sym_height] = "height",
  [anon_sym_width] = "width",
  [anon_sym_decorate] = "decorate",
  [anon_sym_LPAREN] = "(",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_RPAREN] = ")",
  [anon_sym_with] = "with",
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [anon_sym_export] = "export",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [anon_sym_origin] = "origin",
  [anon_sym_background] = "background",
  [anon_sym_label] = "label",
  [anon_sym_AT] = "@",
  [aux_sym__label_absolute_token1] = "_label_absolute_token1",
  [aux_sym__label_relative_token1] = "_label_relative_token1",
  [aux_sym_font_token1] = "font_token1",
  [aux_sym_fontsize_token1] = "fontsize_token1",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_baseline] = "baseline",
  [anon_sym_bottom] = "bottom",
  [aux_sym__rgb_token1] = "_rgb_token1",
  [aux_sym__rgba_token1] = "_rgba_token1",
  [aux_sym__x_token1] = "_x_token1",
  [aux_sym__y_token1] = "_y_token1",
  [aux_sym__offset_token1] = "_offset_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "_string_token1",
  [sym_identifier] = "identifier",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_module] = "module",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym_decorate] = "decorate",
  [sym__component] = "component",
  [sym_decoration] = "decoration",
  [sym_delete] = "delete",
  [sym__guideline_id] = "guide",
  [sym__input_id] = "input",
  [sym__output_id] = "output",
  [sym__parameter_id] = "parameter",
  [sym__light_id] = "light",
  [sym__widget_id] = "widget",
  [sym_load] = "load",
  [sym_save] = "save",
  [sym_project] = "project",
  [sym__save_options] = "_save_options",
  [sym_script] = "script",
  [sym_export] = "export",
  [sym_panel] = "panel",
  [sym_svg] = "svg",
  [sym_origin] = "origin",
  [sym_background] = "background",
  [sym_guide] = "guide",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_widget] = "widget",
  [sym_label] = "label",
  [sym__label_string] = "string",
  [sym__label_absolute] = "absolute",
  [sym__label_relative] = "relative",
  [sym__label_geometry] = "geometry",
  [sym_font] = "font",
  [sym_fontsize] = "fontsize",
  [sym_halign] = "halign",
  [sym_valign] = "valign",
  [sym_colour] = "colour",
  [sym__rgb] = "_rgb",
  [sym__rgba] = "_rgba",
  [sym_name] = "name",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [sym_absolute] = "absolute",
  [sym__x] = "_x",
  [sym__y] = "_y",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym__offset] = "_offset",
  [sym_offset] = "offset",
  [sym__string] = "_string",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_reference] = "reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__label_absolute_token1] = aux_sym__label_absolute_token1,
  [aux_sym__label_relative_token1] = aux_sym__label_relative_token1,
  [aux_sym_font_token1] = aux_sym_font_token1,
  [aux_sym_fontsize_token1] = aux_sym_fontsize_token1,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_bottom] = anon_sym_bottom,
  [aux_sym__rgb_token1] = aux_sym__rgb_token1,
  [aux_sym__rgba_token1] = aux_sym__rgba_token1,
  [aux_sym__x_token1] = aux_sym__x_token1,
  [aux_sym__y_token1] = aux_sym__y_token1,
  [aux_sym__offset_token1] = aux_sym__offset_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [sym_identifier] = sym_identifier,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_module] = sym_module,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym_decorate] = sym_decorate,
  [sym__component] = sym__component,
  [sym_decoration] = sym_decoration,
  [sym_delete] = sym_delete,
  [sym__guideline_id] = sym_guide,
  [sym__input_id] = sym_input,
  [sym__output_id] = sym_output,
  [sym__parameter_id] = sym_parameter,
  [sym__light_id] = sym_light,
  [sym__widget_id] = sym_widget,
  [sym_load] = sym_load,
  [sym_save] = sym_save,
  [sym_project] = sym_project,
  [sym__save_options] = sym__save_options,
  [sym_script] = sym_script,
  [sym_export] = sym_export,
  [sym_panel] = sym_panel,
  [sym_svg] = sym_svg,
  [sym_origin] = sym_origin,
  [sym_background] = sym_background,
  [sym_guide] = sym_guide,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym_label] = sym_label,
  [sym__label_string] = sym__label_string,
  [sym__label_absolute] = sym_absolute,
  [sym__label_relative] = sym__label_relative,
  [sym__label_geometry] = sym__label_geometry,
  [sym_font] = sym_font,
  [sym_fontsize] = sym_fontsize,
  [sym_halign] = sym_halign,
  [sym_valign] = sym_valign,
  [sym_colour] = sym_colour,
  [sym__rgb] = sym__rgb,
  [sym__rgba] = sym__rgba,
  [sym_name] = sym_name,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [sym_absolute] = sym_absolute,
  [sym__x] = sym__x,
  [sym__y] = sym__y,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym__offset] = sym__offset,
  [sym_offset] = sym_offset,
  [sym__string] = sym__string,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [alias_sym_reference] = alias_sym_reference,
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
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decorate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_parameter] = {
    .visible = true,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_project] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gzip] = {
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
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_absolute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_relative_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_font_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fontsize_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__rgb_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__rgba_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__x_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__y_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__offset_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym__module_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__component] = {
    .visible = true,
    .named = true,
  },
  [sym_decoration] = {
    .visible = true,
    .named = true,
  },
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym__guideline_id] = {
    .visible = true,
    .named = true,
  },
  [sym__input_id] = {
    .visible = true,
    .named = true,
  },
  [sym__output_id] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_id] = {
    .visible = true,
    .named = true,
  },
  [sym__light_id] = {
    .visible = true,
    .named = true,
  },
  [sym__widget_id] = {
    .visible = true,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_save] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym__save_options] = {
    .visible = false,
    .named = true,
  },
  [sym_script] = {
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
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_guide] = {
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
  [sym__label_string] = {
    .visible = true,
    .named = true,
  },
  [sym__label_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym__label_relative] = {
    .visible = true,
    .named = true,
  },
  [sym__label_geometry] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym_fontsize] = {
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
  [sym_colour] = {
    .visible = true,
    .named = true,
  },
  [sym__rgb] = {
    .visible = false,
    .named = true,
  },
  [sym__rgba] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_rgba] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym__x] = {
    .visible = false,
    .named = true,
  },
  [sym__y] = {
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
  [sym__offset] = {
    .visible = false,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_reference] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_project,
  },
  [2] = {
    [1] = sym_script,
  },
  [3] = {
    [0] = alias_sym_reference,
  },
  [4] = {
    [1] = sym_x,
  },
  [5] = {
    [1] = sym_light,
  },
  [6] = {
    [1] = sym_x,
    [3] = sym_y,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(231);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == ',') ADVANCE(269);
      if (lookahead == '0') ADVANCE(4);
      if (lookahead == '1') ADVANCE(5);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'w') ADVANCE(99);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'U') ADVANCE(236);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '5') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(238);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '8') ADVANCE(10);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'U') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '5') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(206);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(130);
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 111:
      if (lookahead == 'j') ADVANCE(60);
      END_STATE();
    case 112:
      if (lookahead == 'k') ADVANCE(276);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == 'z') ADVANCE(104);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 200:
      if (lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 201:
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 202:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 204:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 207:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(208)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 224:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 225:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 226:
      if (eof) ADVANCE(231);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 227:
      if (eof) ADVANCE(231);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(227)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 228:
      if (eof) ADVANCE(231);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(228)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 229:
      if (eof) ADVANCE(231);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(229)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 230:
      if (eof) ADVANCE(231);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(230)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 227},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 227},
  [9] = {.lex_state = 226},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 228},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 227},
  [15] = {.lex_state = 228},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 226},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 226},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 226},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 228},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 226},
  [30] = {.lex_state = 227},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 227},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 229},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 229},
  [41] = {.lex_state = 229},
  [42] = {.lex_state = 229},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 229},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 228},
  [48] = {.lex_state = 229},
  [49] = {.lex_state = 230},
  [50] = {.lex_state = 230},
  [51] = {.lex_state = 226},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 228},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 227},
  [112] = {.lex_state = 227},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 208},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 226},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 228},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 227},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 226},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 228},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__label_absolute_token1] = ACTIONS(1),
    [aux_sym__label_relative_token1] = ACTIONS(1),
    [aux_sym_fontsize_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [aux_sym__rgb_token1] = ACTIONS(1),
    [aux_sym__rgba_token1] = ACTIONS(1),
    [aux_sym__x_token1] = ACTIONS(1),
    [aux_sym__y_token1] = ACTIONS(1),
    [aux_sym__offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(130),
    [sym_new] = STATE(4),
    [sym_set] = STATE(4),
    [sym_decorate] = STATE(4),
    [sym_delete] = STATE(4),
    [sym_load] = STATE(4),
    [sym_save] = STATE(4),
    [sym_export] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_decorate] = ACTIONS(9),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(15),
    [anon_sym_export] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(21), 1,
      anon_sym_module,
    ACTIONS(23), 1,
      anon_sym_input,
    ACTIONS(25), 1,
      anon_sym_output,
    ACTIONS(27), 1,
      anon_sym_parameter,
    ACTIONS(29), 1,
      anon_sym_light,
    ACTIONS(31), 1,
      anon_sym_widget,
    ACTIONS(33), 1,
      anon_sym_guide,
    ACTIONS(35), 1,
      anon_sym_label,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(98), 8,
      sym_module,
      sym_guide,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
  [45] = 8,
    ACTIONS(39), 1,
      anon_sym_input,
    ACTIONS(41), 1,
      anon_sym_output,
    ACTIONS(43), 1,
      anon_sym_parameter,
    ACTIONS(45), 1,
      anon_sym_light,
    ACTIONS(47), 1,
      anon_sym_widget,
    ACTIONS(49), 1,
      anon_sym_guide,
    STATE(101), 6,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [82] = 9,
    ACTIONS(5), 1,
      anon_sym_new,
    ACTIONS(7), 1,
      anon_sym_set,
    ACTIONS(9), 1,
      anon_sym_decorate,
    ACTIONS(11), 1,
      anon_sym_delete,
    ACTIONS(13), 1,
      anon_sym_load,
    ACTIONS(15), 1,
      anon_sym_save,
    ACTIONS(17), 1,
      anon_sym_export,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(5), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [117] = 9,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_new,
    ACTIONS(58), 1,
      anon_sym_set,
    ACTIONS(61), 1,
      anon_sym_decorate,
    ACTIONS(64), 1,
      anon_sym_delete,
    ACTIONS(67), 1,
      anon_sym_load,
    ACTIONS(70), 1,
      anon_sym_save,
    ACTIONS(73), 1,
      anon_sym_export,
    STATE(5), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [152] = 6,
    ACTIONS(78), 1,
      anon_sym_AT,
    ACTIONS(80), 1,
      aux_sym__label_relative_token1,
    ACTIONS(82), 1,
      aux_sym__x_token1,
    STATE(122), 1,
      sym__x,
    STATE(79), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [180] = 5,
    ACTIONS(86), 1,
      anon_sym_module,
    ACTIONS(88), 1,
      anon_sym_origin,
    ACTIONS(90), 1,
      anon_sym_background,
    STATE(100), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [205] = 7,
    ACTIONS(94), 1,
      anon_sym_AT,
    ACTIONS(96), 1,
      aux_sym__x_token1,
    ACTIONS(98), 1,
      aux_sym__y_token1,
    STATE(53), 1,
      sym_x,
    STATE(54), 1,
      sym_y,
    STATE(97), 1,
      sym_absolute,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [234] = 8,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      aux_sym_font_token1,
    ACTIONS(106), 1,
      aux_sym__rgb_token1,
    ACTIONS(108), 1,
      aux_sym__rgba_token1,
    STATE(58), 1,
      sym_rgb,
    STATE(59), 1,
      sym_rgba,
    STATE(63), 1,
      sym_name,
    ACTIONS(102), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [265] = 5,
    ACTIONS(112), 1,
      aux_sym__rgb_token1,
    ACTIONS(114), 1,
      aux_sym__rgba_token1,
    STATE(75), 1,
      sym_colour,
    STATE(38), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [289] = 3,
    STATE(78), 1,
      sym_halign,
    ACTIONS(118), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [309] = 4,
    ACTIONS(122), 1,
      anon_sym_project,
    ACTIONS(124), 1,
      anon_sym_script,
    STATE(87), 2,
      sym_project,
      sym_script,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [330] = 4,
    ACTIONS(128), 1,
      anon_sym_timestamp,
    ACTIONS(130), 1,
      anon_sym_gzip,
    STATE(69), 1,
      sym__save_options,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [350] = 1,
    ACTIONS(132), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__label_relative_token1,
      aux_sym__x_token1,
  [364] = 2,
    ACTIONS(136), 1,
      sym_width,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      sym_height,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [380] = 3,
    ACTIONS(140), 1,
      aux_sym__offset_token1,
    STATE(39), 1,
      sym_offset,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [398] = 3,
    ACTIONS(140), 1,
      aux_sym__offset_token1,
    STATE(43), 1,
      sym_offset,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [416] = 4,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym__offset_token1,
    STATE(51), 1,
      sym__offset,
    ACTIONS(146), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [436] = 4,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym__string,
    STATE(84), 1,
      sym__label_string,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [456] = 4,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      anon_sym_height,
    ACTIONS(160), 1,
      anon_sym_width,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [476] = 4,
    ACTIONS(104), 1,
      aux_sym_font_token1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_name,
    ACTIONS(164), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [495] = 3,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym__component,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [512] = 4,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    STATE(89), 1,
      sym_font,
    ACTIONS(172), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [531] = 4,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_font,
    ACTIONS(178), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [550] = 3,
    ACTIONS(182), 1,
      anon_sym_light,
    ACTIONS(184), 1,
      anon_sym_dark,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [567] = 4,
    ACTIONS(174), 1,
      aux_sym_font_token1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_font,
    ACTIONS(188), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [586] = 3,
    ACTIONS(192), 1,
      sym_height,
    ACTIONS(194), 1,
      sym_width,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [603] = 3,
    ACTIONS(198), 1,
      aux_sym_fontsize_token1,
    STATE(82), 1,
      sym_fontsize,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [620] = 4,
    ACTIONS(104), 1,
      aux_sym_font_token1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_name,
    ACTIONS(202), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [639] = 3,
    ACTIONS(98), 1,
      aux_sym__y_token1,
    STATE(102), 1,
      sym_y,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [656] = 3,
    ACTIONS(208), 1,
      anon_sym_svg,
    STATE(72), 1,
      sym_svg,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [673] = 3,
    ACTIONS(212), 1,
      anon_sym_panel,
    STATE(86), 1,
      sym_panel,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [690] = 3,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_decoration,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [707] = 3,
    ACTIONS(96), 1,
      aux_sym__x_token1,
    STATE(102), 1,
      sym_x,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [724] = 3,
    ACTIONS(220), 1,
      anon_sym_project,
    ACTIONS(222), 1,
      anon_sym_script,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [741] = 3,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(226), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [757] = 2,
    ACTIONS(232), 1,
      anon_sym_timestamp,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [771] = 2,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [785] = 1,
    ACTIONS(238), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [797] = 3,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(242), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [813] = 3,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(248), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [829] = 3,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(254), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [845] = 1,
    ACTIONS(258), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [857] = 1,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [869] = 3,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(264), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [885] = 2,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [899] = 2,
    ACTIONS(274), 1,
      sym_width,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [913] = 3,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(278), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [929] = 2,
    ACTIONS(284), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [943] = 2,
    ACTIONS(288), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [957] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [971] = 2,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(294), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [985] = 2,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [999] = 2,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1013] = 1,
    ACTIONS(304), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1025] = 1,
    ACTIONS(306), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1037] = 2,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(294), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1051] = 2,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1065] = 2,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1079] = 2,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1093] = 1,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1104] = 1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1115] = 1,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1126] = 1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1137] = 1,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1148] = 1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1159] = 1,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1170] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1181] = 1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1192] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1203] = 1,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1214] = 1,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1225] = 1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1236] = 1,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1247] = 1,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1258] = 1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1269] = 1,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1280] = 1,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1291] = 1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1302] = 1,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1313] = 1,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1324] = 1,
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1335] = 1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1346] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1357] = 1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1368] = 1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1379] = 1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1390] = 1,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1401] = 1,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1412] = 1,
    ACTIONS(374), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1423] = 1,
    ACTIONS(376), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1434] = 1,
    ACTIONS(378), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1445] = 1,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1456] = 1,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1467] = 1,
    ACTIONS(384), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1478] = 1,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1489] = 1,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1500] = 1,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1511] = 1,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1522] = 1,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1533] = 1,
    ACTIONS(394), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1544] = 1,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1555] = 1,
    ACTIONS(398), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1566] = 1,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1577] = 1,
    ACTIONS(402), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1588] = 1,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1599] = 1,
    ACTIONS(406), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [1607] = 2,
    STATE(76), 1,
      sym_valign,
    ACTIONS(408), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1617] = 3,
    ACTIONS(410), 1,
      aux_sym__rgb_token1,
    ACTIONS(412), 1,
      aux_sym__rgba_token1,
    STATE(71), 2,
      sym__rgb,
      sym__rgba,
  [1628] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      aux_sym__offset_token1,
    STATE(129), 1,
      sym__offset,
  [1638] = 2,
    ACTIONS(418), 1,
      aux_sym__rgb_token1,
    STATE(103), 1,
      sym_rgb,
  [1645] = 2,
    ACTIONS(420), 1,
      aux_sym__y_token1,
    STATE(23), 1,
      sym__y,
  [1652] = 2,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(88), 1,
      sym_name,
  [1659] = 2,
    ACTIONS(422), 1,
      aux_sym_font_token1,
    STATE(81), 1,
      sym_name,
  [1666] = 2,
    ACTIONS(108), 1,
      aux_sym__rgba_token1,
    STATE(103), 1,
      sym_rgba,
  [1673] = 1,
    ACTIONS(424), 1,
      aux_sym__string_token1,
  [1677] = 1,
    ACTIONS(426), 1,
      anon_sym_timestamp,
  [1681] = 1,
    ACTIONS(426), 1,
      anon_sym_gzip,
  [1685] = 1,
    ACTIONS(428), 1,
      aux_sym__label_absolute_token1,
  [1689] = 1,
    ACTIONS(430), 1,
      anon_sym_with,
  [1693] = 1,
    ACTIONS(432), 1,
      sym_height,
  [1697] = 1,
    ACTIONS(434), 1,
      anon_sym_COMMA,
  [1701] = 1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
  [1705] = 1,
    ACTIONS(438), 1,
      aux_sym__label_relative_token1,
  [1709] = 1,
    ACTIONS(440), 1,
      anon_sym_COMMA,
  [1713] = 1,
    ACTIONS(442), 1,
      aux_sym__label_absolute_token1,
  [1717] = 1,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
  [1721] = 1,
    ACTIONS(432), 1,
      sym_width,
  [1725] = 1,
    ACTIONS(446), 1,
      anon_sym_COMMA,
  [1729] = 1,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 309,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 364,
  [SMALL_STATE(16)] = 380,
  [SMALL_STATE(17)] = 398,
  [SMALL_STATE(18)] = 416,
  [SMALL_STATE(19)] = 436,
  [SMALL_STATE(20)] = 456,
  [SMALL_STATE(21)] = 476,
  [SMALL_STATE(22)] = 495,
  [SMALL_STATE(23)] = 512,
  [SMALL_STATE(24)] = 531,
  [SMALL_STATE(25)] = 550,
  [SMALL_STATE(26)] = 567,
  [SMALL_STATE(27)] = 586,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 620,
  [SMALL_STATE(30)] = 639,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 673,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 707,
  [SMALL_STATE(35)] = 724,
  [SMALL_STATE(36)] = 741,
  [SMALL_STATE(37)] = 757,
  [SMALL_STATE(38)] = 771,
  [SMALL_STATE(39)] = 785,
  [SMALL_STATE(40)] = 797,
  [SMALL_STATE(41)] = 813,
  [SMALL_STATE(42)] = 829,
  [SMALL_STATE(43)] = 845,
  [SMALL_STATE(44)] = 857,
  [SMALL_STATE(45)] = 869,
  [SMALL_STATE(46)] = 885,
  [SMALL_STATE(47)] = 899,
  [SMALL_STATE(48)] = 913,
  [SMALL_STATE(49)] = 929,
  [SMALL_STATE(50)] = 943,
  [SMALL_STATE(51)] = 957,
  [SMALL_STATE(52)] = 971,
  [SMALL_STATE(53)] = 985,
  [SMALL_STATE(54)] = 999,
  [SMALL_STATE(55)] = 1013,
  [SMALL_STATE(56)] = 1025,
  [SMALL_STATE(57)] = 1037,
  [SMALL_STATE(58)] = 1051,
  [SMALL_STATE(59)] = 1065,
  [SMALL_STATE(60)] = 1079,
  [SMALL_STATE(61)] = 1093,
  [SMALL_STATE(62)] = 1104,
  [SMALL_STATE(63)] = 1115,
  [SMALL_STATE(64)] = 1126,
  [SMALL_STATE(65)] = 1137,
  [SMALL_STATE(66)] = 1148,
  [SMALL_STATE(67)] = 1159,
  [SMALL_STATE(68)] = 1170,
  [SMALL_STATE(69)] = 1181,
  [SMALL_STATE(70)] = 1192,
  [SMALL_STATE(71)] = 1203,
  [SMALL_STATE(72)] = 1214,
  [SMALL_STATE(73)] = 1225,
  [SMALL_STATE(74)] = 1236,
  [SMALL_STATE(75)] = 1247,
  [SMALL_STATE(76)] = 1258,
  [SMALL_STATE(77)] = 1269,
  [SMALL_STATE(78)] = 1280,
  [SMALL_STATE(79)] = 1291,
  [SMALL_STATE(80)] = 1302,
  [SMALL_STATE(81)] = 1313,
  [SMALL_STATE(82)] = 1324,
  [SMALL_STATE(83)] = 1335,
  [SMALL_STATE(84)] = 1346,
  [SMALL_STATE(85)] = 1357,
  [SMALL_STATE(86)] = 1368,
  [SMALL_STATE(87)] = 1379,
  [SMALL_STATE(88)] = 1390,
  [SMALL_STATE(89)] = 1401,
  [SMALL_STATE(90)] = 1412,
  [SMALL_STATE(91)] = 1423,
  [SMALL_STATE(92)] = 1434,
  [SMALL_STATE(93)] = 1445,
  [SMALL_STATE(94)] = 1456,
  [SMALL_STATE(95)] = 1467,
  [SMALL_STATE(96)] = 1478,
  [SMALL_STATE(97)] = 1489,
  [SMALL_STATE(98)] = 1500,
  [SMALL_STATE(99)] = 1511,
  [SMALL_STATE(100)] = 1522,
  [SMALL_STATE(101)] = 1533,
  [SMALL_STATE(102)] = 1544,
  [SMALL_STATE(103)] = 1555,
  [SMALL_STATE(104)] = 1566,
  [SMALL_STATE(105)] = 1577,
  [SMALL_STATE(106)] = 1588,
  [SMALL_STATE(107)] = 1599,
  [SMALL_STATE(108)] = 1607,
  [SMALL_STATE(109)] = 1617,
  [SMALL_STATE(110)] = 1628,
  [SMALL_STATE(111)] = 1638,
  [SMALL_STATE(112)] = 1645,
  [SMALL_STATE(113)] = 1652,
  [SMALL_STATE(114)] = 1659,
  [SMALL_STATE(115)] = 1666,
  [SMALL_STATE(116)] = 1673,
  [SMALL_STATE(117)] = 1677,
  [SMALL_STATE(118)] = 1681,
  [SMALL_STATE(119)] = 1685,
  [SMALL_STATE(120)] = 1689,
  [SMALL_STATE(121)] = 1693,
  [SMALL_STATE(122)] = 1697,
  [SMALL_STATE(123)] = 1701,
  [SMALL_STATE(124)] = 1705,
  [SMALL_STATE(125)] = 1709,
  [SMALL_STATE(126)] = 1713,
  [SMALL_STATE(127)] = 1717,
  [SMALL_STATE(128)] = 1721,
  [SMALL_STATE(129)] = 1725,
  [SMALL_STATE(130)] = 1729,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(35),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [448] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_help(void) {
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
