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
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_new = 1,
  anon_sym_module = 2,
  anon_sym_input = 3,
  sym_height = 4,
  sym_width = 5,
  anon_sym_set = 6,
  anon_sym_name = 7,
  anon_sym_height = 8,
  anon_sym_width = 9,
  anon_sym_decorate = 10,
  anon_sym_LPAREN = 11,
  anon_sym_output = 12,
  anon_sym_parameter = 13,
  anon_sym_light = 14,
  anon_sym_widget = 15,
  anon_sym_RPAREN = 16,
  anon_sym_with = 17,
  anon_sym_delete = 18,
  anon_sym_guide = 19,
  anon_sym_label = 20,
  anon_sym_decoration = 21,
  anon_sym_load = 22,
  anon_sym_project = 23,
  anon_sym_script = 24,
  anon_sym_save = 25,
  anon_sym_timestamp = 26,
  anon_sym_COMMA = 27,
  anon_sym_gzip = 28,
  anon_sym_export = 29,
  anon_sym_panel = 30,
  anon_sym_svg = 31,
  anon_sym_dark = 32,
  anon_sym_origin = 33,
  anon_sym_background = 34,
  anon_sym_AT = 35,
  aux_sym__label_absolute_token1 = 36,
  aux_sym__label_relative_token1 = 37,
  aux_sym_font_token1 = 38,
  aux_sym_fontsize_token1 = 39,
  anon_sym_left = 40,
  anon_sym_centre = 41,
  anon_sym_center = 42,
  anon_sym_right = 43,
  anon_sym_top = 44,
  anon_sym_middle = 45,
  anon_sym_baseline = 46,
  anon_sym_bottom = 47,
  aux_sym__rgb_token1 = 48,
  aux_sym__rgba_token1 = 49,
  aux_sym__absolute_token1 = 50,
  aux_sym__x_token1 = 51,
  aux_sym__y_token1 = 52,
  aux_sym__offset_token1 = 53,
  aux_sym_string_token1 = 54,
  aux_sym_string_token2 = 55,
  aux_sym__string_token1 = 56,
  aux_sym__string_token2 = 57,
  sym_identifier = 58,
  sym_command = 59,
  sym_new = 60,
  sym_module = 61,
  sym__input_entity = 62,
  sym_set = 63,
  sym__module_attr = 64,
  sym_decorate = 65,
  sym__component = 66,
  sym_decoration = 67,
  sym_delete = 68,
  sym__guideline_id = 69,
  sym__input_id = 70,
  sym__output_id = 71,
  sym__parameter_id = 72,
  sym__light_id = 73,
  sym__widget_id = 74,
  sym__label_id = 75,
  sym__decoration_id = 76,
  sym__component_id = 77,
  sym_load = 78,
  sym_save = 79,
  sym_project = 80,
  sym__save_options = 81,
  sym_script = 82,
  sym_export = 83,
  sym_panel = 84,
  sym_svg = 85,
  sym_origin = 86,
  sym_background = 87,
  sym_guide = 88,
  sym_output = 89,
  sym_parameter = 90,
  sym_light = 91,
  sym_widget = 92,
  sym_label = 93,
  sym__label_string = 94,
  sym__label_absolute = 95,
  sym__label_relative = 96,
  sym__label_geometry = 97,
  sym_font = 98,
  sym_fontsize = 99,
  sym_halign = 100,
  sym_valign = 101,
  sym_colour = 102,
  sym__rgb = 103,
  sym__rgba = 104,
  sym_name = 105,
  sym_part = 106,
  sym_rgb = 107,
  sym_rgba = 108,
  sym_absolute = 109,
  sym__absolute = 110,
  sym__relative = 111,
  sym__x = 112,
  sym__y = 113,
  sym_x = 114,
  sym_y = 115,
  sym_xy = 116,
  sym__xy = 117,
  sym__offset = 118,
  sym_offset = 119,
  sym_string = 120,
  sym__string = 121,
  aux_sym_command_repeat1 = 122,
  alias_sym_reference = 123,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_input] = "input",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_set] = "set",
  [anon_sym_name] = "name",
  [anon_sym_height] = "height",
  [anon_sym_width] = "width",
  [anon_sym_decorate] = "decorate",
  [anon_sym_LPAREN] = "(",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_RPAREN] = ")",
  [anon_sym_with] = "with",
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [anon_sym_label] = "label",
  [anon_sym_decoration] = "decoration",
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
  [aux_sym__absolute_token1] = "_absolute_token1",
  [aux_sym__x_token1] = "_x_token1",
  [aux_sym__y_token1] = "_y_token1",
  [aux_sym__offset_token1] = "_offset_token1",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym__string_token2] = "_string_token2",
  [sym_identifier] = "identifier",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_module] = "module",
  [sym__input_entity] = "input",
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
  [sym__label_id] = "label",
  [sym__decoration_id] = "decoration",
  [sym__component_id] = "_component_id",
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
  [sym_part] = "part",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [sym_absolute] = "absolute",
  [sym__absolute] = "_absolute",
  [sym__relative] = "_relative",
  [sym__x] = "_x",
  [sym__y] = "_y",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym_xy] = "xy",
  [sym__xy] = "_xy",
  [sym__offset] = "_offset",
  [sym_offset] = "offset",
  [sym_string] = "string",
  [sym__string] = "_string",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_reference] = "reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_input] = anon_sym_input,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_decoration] = anon_sym_decoration,
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
  [aux_sym__absolute_token1] = aux_sym__absolute_token1,
  [aux_sym__x_token1] = aux_sym__x_token1,
  [aux_sym__y_token1] = aux_sym__y_token1,
  [aux_sym__offset_token1] = aux_sym__offset_token1,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [sym_identifier] = sym_identifier,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_module] = sym_module,
  [sym__input_entity] = sym__input_entity,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym_decorate] = sym_decorate,
  [sym__component] = sym__component,
  [sym_decoration] = sym_decoration,
  [sym_delete] = sym_delete,
  [sym__guideline_id] = sym_guide,
  [sym__input_id] = sym__input_entity,
  [sym__output_id] = sym_output,
  [sym__parameter_id] = sym_parameter,
  [sym__light_id] = sym_light,
  [sym__widget_id] = sym_widget,
  [sym__label_id] = sym_label,
  [sym__decoration_id] = sym_decoration,
  [sym__component_id] = sym__component_id,
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
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym_label] = sym_label,
  [sym__label_string] = sym_string,
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
  [sym_part] = sym_part,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [sym_absolute] = sym_absolute,
  [sym__absolute] = sym__absolute,
  [sym__relative] = sym__relative,
  [sym__x] = sym__x,
  [sym__y] = sym__y,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym_xy] = sym_xy,
  [sym__xy] = sym__xy,
  [sym__offset] = sym__offset,
  [sym_offset] = sym_offset,
  [sym_string] = sym_string,
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
  [anon_sym_input] = {
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decoration] = {
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
  [aux_sym__absolute_token1] = {
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_token2] = {
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
  [sym__input_entity] = {
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
  [sym__label_id] = {
    .visible = true,
    .named = true,
  },
  [sym__decoration_id] = {
    .visible = true,
    .named = true,
  },
  [sym__component_id] = {
    .visible = false,
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
  [sym_part] = {
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
  [sym__absolute] = {
    .visible = false,
    .named = true,
  },
  [sym__relative] = {
    .visible = false,
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
  [sym_xy] = {
    .visible = true,
    .named = true,
  },
  [sym__xy] = {
    .visible = false,
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
  [sym_string] = {
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
  [19] = 16,
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
  [128] = 45,
  [129] = 129,
  [130] = 52,
  [131] = 74,
  [132] = 58,
  [133] = 133,
  [134] = 134,
  [135] = 56,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(253);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(276);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(117);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(349);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(350);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'U') ADVANCE(259);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '5') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '8') ADVANCE(40);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '8') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'U') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == '5') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == '5') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 31:
      if (lookahead == '5') ADVANCE(149);
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'H') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(207);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(277);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 129:
      if (lookahead == 'j') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(259);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(338);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == 'z') ADVANCE(122);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 224:
      if (lookahead == 'w') ADVANCE(254);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(180);
      END_STATE();
    case 226:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 243:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 244:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 245:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 246:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 247:
      if (eof) ADVANCE(253);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 248:
      if (eof) ADVANCE(253);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 249:
      if (eof) ADVANCE(253);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 250:
      if (eof) ADVANCE(253);
      if (lookahead == ')') ADVANCE(276);
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 251:
      if (eof) ADVANCE(253);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 252:
      if (eof) ADVANCE(253);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
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
  [4] = {.lex_state = 248},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 251},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 249},
  [10] = {.lex_state = 248},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 248},
  [16] = {.lex_state = 250},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 248},
  [20] = {.lex_state = 247},
  [21] = {.lex_state = 249},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 249},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 248},
  [27] = {.lex_state = 249},
  [28] = {.lex_state = 249},
  [29] = {.lex_state = 250},
  [30] = {.lex_state = 249},
  [31] = {.lex_state = 248},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 249},
  [35] = {.lex_state = 249},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 249},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 249},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 250},
  [44] = {.lex_state = 249},
  [45] = {.lex_state = 247},
  [46] = {.lex_state = 247},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 249},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 249},
  [52] = {.lex_state = 247},
  [53] = {.lex_state = 249},
  [54] = {.lex_state = 249},
  [55] = {.lex_state = 252},
  [56] = {.lex_state = 247},
  [57] = {.lex_state = 252},
  [58] = {.lex_state = 247},
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
  [74] = {.lex_state = 247},
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
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 251},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 248},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 248},
  [137] = {.lex_state = 248},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 248},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 249},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 247},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 248},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 251},
  [154] = {.lex_state = 249},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 247},
  [157] = {.lex_state = 248},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [sym_height] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
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
    [aux_sym__absolute_token1] = ACTIONS(1),
    [aux_sym__x_token1] = ACTIONS(1),
    [aux_sym__y_token1] = ACTIONS(1),
    [aux_sym__offset_token1] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [aux_sym__string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(147),
    [sym_new] = STATE(6),
    [sym_set] = STATE(6),
    [sym_decorate] = STATE(6),
    [sym_delete] = STATE(6),
    [sym_load] = STATE(6),
    [sym_save] = STATE(6),
    [sym_export] = STATE(6),
    [aux_sym_command_repeat1] = STATE(6),
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
      anon_sym_input,
    ACTIONS(23), 1,
      anon_sym_output,
    ACTIONS(25), 1,
      anon_sym_parameter,
    ACTIONS(27), 1,
      anon_sym_light,
    ACTIONS(29), 1,
      anon_sym_widget,
    ACTIONS(31), 1,
      anon_sym_guide,
    ACTIONS(33), 1,
      anon_sym_label,
    ACTIONS(35), 1,
      anon_sym_decoration,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(100), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [45] = 10,
    ACTIONS(39), 1,
      anon_sym_module,
    ACTIONS(41), 1,
      anon_sym_input,
    ACTIONS(43), 1,
      anon_sym_output,
    ACTIONS(45), 1,
      anon_sym_parameter,
    ACTIONS(47), 1,
      anon_sym_light,
    ACTIONS(49), 1,
      anon_sym_widget,
    ACTIONS(51), 1,
      anon_sym_guide,
    ACTIONS(53), 1,
      anon_sym_label,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(77), 8,
      sym_module,
      sym__input_entity,
      sym_guide,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
  [90] = 7,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      aux_sym__absolute_token1,
    ACTIONS(61), 1,
      aux_sym__x_token1,
    STATE(24), 1,
      sym_xy,
    STATE(148), 1,
      sym__x,
    STATE(44), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [121] = 9,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_new,
    ACTIONS(68), 1,
      anon_sym_set,
    ACTIONS(71), 1,
      anon_sym_decorate,
    ACTIONS(74), 1,
      anon_sym_delete,
    ACTIONS(77), 1,
      anon_sym_load,
    ACTIONS(80), 1,
      anon_sym_save,
    ACTIONS(83), 1,
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
  [156] = 9,
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
    ACTIONS(86), 1,
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
  [191] = 6,
    ACTIONS(61), 1,
      aux_sym__x_token1,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      aux_sym__label_relative_token1,
    STATE(143), 1,
      sym__x,
    STATE(95), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [219] = 5,
    ACTIONS(96), 1,
      anon_sym_module,
    ACTIONS(98), 1,
      anon_sym_origin,
    ACTIONS(100), 1,
      anon_sym_background,
    STATE(119), 3,
      sym__module_attr,
      sym_origin,
      sym_background,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [244] = 8,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      aux_sym_font_token1,
    ACTIONS(108), 1,
      aux_sym__rgb_token1,
    ACTIONS(110), 1,
      aux_sym__rgba_token1,
    STATE(64), 1,
      sym_rgb,
    STATE(65), 1,
      sym_rgba,
    STATE(79), 1,
      sym_name,
    ACTIONS(104), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [275] = 7,
    ACTIONS(114), 1,
      anon_sym_AT,
    ACTIONS(116), 1,
      aux_sym__x_token1,
    ACTIONS(118), 1,
      aux_sym__y_token1,
    STATE(59), 1,
      sym_x,
    STATE(60), 1,
      sym_y,
    STATE(103), 1,
      sym_absolute,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [304] = 5,
    ACTIONS(122), 1,
      aux_sym__rgb_token1,
    ACTIONS(124), 1,
      aux_sym__rgba_token1,
    STATE(91), 1,
      sym_colour,
    STATE(47), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [328] = 3,
    STATE(94), 1,
      sym_halign,
    ACTIONS(128), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [348] = 5,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(82), 1,
      sym_string,
    ACTIONS(134), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(132), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [371] = 4,
    ACTIONS(140), 1,
      anon_sym_project,
    ACTIONS(142), 1,
      anon_sym_script,
    STATE(110), 2,
      sym_project,
      sym_script,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [392] = 4,
    STATE(7), 1,
      sym__string,
    STATE(116), 1,
      sym__label_string,
    ACTIONS(146), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [413] = 2,
    ACTIONS(150), 1,
      sym_width,
    ACTIONS(148), 10,
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
  [429] = 3,
    ACTIONS(154), 1,
      aux_sym__offset_token1,
    STATE(72), 1,
      sym_offset,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [447] = 4,
    ACTIONS(158), 1,
      anon_sym_timestamp,
    ACTIONS(160), 1,
      anon_sym_gzip,
    STATE(84), 1,
      sym__save_options,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [467] = 1,
    ACTIONS(148), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_AT,
      aux_sym__absolute_token1,
      aux_sym__x_token1,
  [481] = 5,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(83), 1,
      sym__component_id,
    ACTIONS(164), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [503] = 4,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym__offset_token1,
    STATE(49), 1,
      sym__offset,
    ACTIONS(172), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [523] = 3,
    ACTIONS(154), 1,
      aux_sym__offset_token1,
    STATE(73), 1,
      sym_offset,
    ACTIONS(176), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [541] = 4,
    ACTIONS(180), 1,
      anon_sym_name,
    ACTIONS(182), 1,
      anon_sym_height,
    ACTIONS(184), 1,
      anon_sym_width,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [561] = 4,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym_font_token1,
    STATE(112), 1,
      sym_part,
    ACTIONS(188), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [580] = 3,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_decoration,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [597] = 3,
    ACTIONS(116), 1,
      aux_sym__x_token1,
    STATE(117), 1,
      sym_x,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [614] = 4,
    ACTIONS(106), 1,
      aux_sym_font_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_name,
    ACTIONS(200), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [633] = 4,
    ACTIONS(106), 1,
      aux_sym_font_token1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_name,
    ACTIONS(204), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [652] = 3,
    ACTIONS(208), 1,
      sym_height,
    ACTIONS(210), 1,
      sym_width,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [669] = 4,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      aux_sym_font_token1,
    STATE(4), 1,
      sym_name,
    ACTIONS(214), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [688] = 3,
    ACTIONS(118), 1,
      aux_sym__y_token1,
    STATE(117), 1,
      sym_y,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [705] = 3,
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
  [722] = 3,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym__component,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [739] = 4,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    STATE(107), 1,
      sym_font,
    ACTIONS(230), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [758] = 4,
    ACTIONS(106), 1,
      aux_sym_font_token1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_name,
    ACTIONS(236), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [777] = 3,
    ACTIONS(240), 1,
      anon_sym_panel,
    STATE(113), 1,
      sym_panel,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [794] = 4,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_font,
    ACTIONS(244), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [813] = 3,
    ACTIONS(248), 1,
      anon_sym_light,
    ACTIONS(250), 1,
      anon_sym_dark,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [830] = 6,
    ACTIONS(252), 1,
      anon_sym_input,
    ACTIONS(254), 1,
      anon_sym_output,
    ACTIONS(256), 1,
      anon_sym_parameter,
    ACTIONS(258), 1,
      anon_sym_light,
    ACTIONS(260), 1,
      anon_sym_widget,
    STATE(140), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [853] = 3,
    ACTIONS(264), 1,
      anon_sym_svg,
    STATE(86), 1,
      sym_svg,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [870] = 4,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_font,
    ACTIONS(268), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [889] = 3,
    ACTIONS(272), 1,
      aux_sym_fontsize_token1,
    STATE(98), 1,
      sym_fontsize,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [906] = 2,
    ACTIONS(276), 1,
      sym_width,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [920] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [934] = 3,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(284), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [950] = 3,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(290), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [966] = 2,
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
  [980] = 2,
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
  [994] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1008] = 2,
    ACTIONS(308), 1,
      anon_sym_timestamp,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1022] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1036] = 3,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(316), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1052] = 2,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1066] = 2,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1080] = 2,
    ACTIONS(330), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1094] = 3,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(334), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1110] = 2,
    ACTIONS(340), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1124] = 3,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(344), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1140] = 2,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1154] = 2,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1168] = 1,
    ACTIONS(354), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1180] = 1,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1192] = 2,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1206] = 2,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1220] = 2,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1234] = 1,
    ACTIONS(368), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1246] = 1,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1258] = 1,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1270] = 1,
    ACTIONS(374), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1282] = 1,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1294] = 1,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1306] = 1,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1318] = 1,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1330] = 3,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(386), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1346] = 2,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1360] = 2,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1374] = 1,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1385] = 1,
    ACTIONS(398), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1396] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1407] = 1,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1418] = 1,
    ACTIONS(402), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1429] = 1,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1440] = 1,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1451] = 1,
    ACTIONS(408), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1462] = 1,
    ACTIONS(410), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1473] = 1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1484] = 1,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1495] = 1,
    ACTIONS(414), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1506] = 1,
    ACTIONS(416), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1517] = 1,
    ACTIONS(418), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1528] = 1,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1539] = 1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1550] = 1,
    ACTIONS(424), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1561] = 1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1572] = 1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1583] = 1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1594] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1605] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1616] = 1,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1627] = 1,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1638] = 1,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1649] = 1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1660] = 1,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1671] = 1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1682] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1693] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1704] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1715] = 1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1726] = 1,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1737] = 1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1748] = 1,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1759] = 1,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1770] = 1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1781] = 1,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1792] = 1,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1803] = 1,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1814] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1825] = 1,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1836] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1847] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1858] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1869] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1880] = 1,
    ACTIONS(482), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [1888] = 2,
    STATE(92), 1,
      sym_valign,
    ACTIONS(484), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1898] = 3,
    ACTIONS(486), 1,
      aux_sym__rgb_token1,
    ACTIONS(488), 1,
      aux_sym__rgba_token1,
    STATE(89), 2,
      sym__rgb,
      sym__rgba,
  [1909] = 3,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      aux_sym__offset_token1,
    STATE(150), 1,
      sym__offset,
  [1919] = 2,
    ACTIONS(110), 1,
      aux_sym__rgba_token1,
    STATE(118), 1,
      sym_rgba,
  [1926] = 2,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 1,
      sym_identifier,
  [1933] = 2,
    ACTIONS(496), 1,
      aux_sym_font_token1,
    STATE(97), 1,
      sym_name,
  [1940] = 2,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      sym_identifier,
  [1947] = 2,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(500), 1,
      sym_identifier,
  [1954] = 2,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      sym_identifier,
  [1961] = 2,
    ACTIONS(504), 1,
      aux_sym__y_token1,
    STATE(37), 1,
      sym__y,
  [1968] = 2,
    ACTIONS(496), 1,
      aux_sym_font_token1,
    STATE(102), 1,
      sym_name,
  [1975] = 2,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      sym_identifier,
  [1982] = 2,
    ACTIONS(504), 1,
      aux_sym__y_token1,
    STATE(53), 1,
      sym__y,
  [1989] = 2,
    ACTIONS(508), 1,
      aux_sym__rgb_token1,
    STATE(118), 1,
      sym_rgb,
  [1996] = 1,
    ACTIONS(510), 1,
      anon_sym_gzip,
  [2000] = 1,
    ACTIONS(512), 1,
      aux_sym__absolute_token1,
  [2004] = 1,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [2008] = 1,
    ACTIONS(516), 1,
      sym_height,
  [2012] = 1,
    ACTIONS(510), 1,
      anon_sym_timestamp,
  [2016] = 1,
    ACTIONS(518), 1,
      anon_sym_COMMA,
  [2020] = 1,
    ACTIONS(520), 1,
      anon_sym_COMMA,
  [2024] = 1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
  [2028] = 1,
    ACTIONS(524), 1,
      aux_sym__label_absolute_token1,
  [2032] = 1,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
  [2036] = 1,
    ACTIONS(528), 1,
      anon_sym_COMMA,
  [2040] = 1,
    ACTIONS(530), 1,
      aux_sym__absolute_token1,
  [2044] = 1,
    ACTIONS(532), 1,
      anon_sym_COMMA,
  [2048] = 1,
    ACTIONS(534), 1,
      anon_sym_COMMA,
  [2052] = 1,
    ACTIONS(536), 1,
      anon_sym_COMMA,
  [2056] = 1,
    ACTIONS(538), 1,
      aux_sym__label_relative_token1,
  [2060] = 1,
    ACTIONS(516), 1,
      sym_width,
  [2064] = 1,
    ACTIONS(540), 1,
      anon_sym_with,
  [2068] = 1,
    ACTIONS(542), 1,
      aux_sym__label_absolute_token1,
  [2072] = 1,
    ACTIONS(544), 1,
      aux_sym__absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 304,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 371,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 413,
  [SMALL_STATE(17)] = 429,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 467,
  [SMALL_STATE(20)] = 481,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 541,
  [SMALL_STATE(24)] = 561,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 597,
  [SMALL_STATE(27)] = 614,
  [SMALL_STATE(28)] = 633,
  [SMALL_STATE(29)] = 652,
  [SMALL_STATE(30)] = 669,
  [SMALL_STATE(31)] = 688,
  [SMALL_STATE(32)] = 705,
  [SMALL_STATE(33)] = 722,
  [SMALL_STATE(34)] = 739,
  [SMALL_STATE(35)] = 758,
  [SMALL_STATE(36)] = 777,
  [SMALL_STATE(37)] = 794,
  [SMALL_STATE(38)] = 813,
  [SMALL_STATE(39)] = 830,
  [SMALL_STATE(40)] = 853,
  [SMALL_STATE(41)] = 870,
  [SMALL_STATE(42)] = 889,
  [SMALL_STATE(43)] = 906,
  [SMALL_STATE(44)] = 920,
  [SMALL_STATE(45)] = 934,
  [SMALL_STATE(46)] = 950,
  [SMALL_STATE(47)] = 966,
  [SMALL_STATE(48)] = 980,
  [SMALL_STATE(49)] = 994,
  [SMALL_STATE(50)] = 1008,
  [SMALL_STATE(51)] = 1022,
  [SMALL_STATE(52)] = 1036,
  [SMALL_STATE(53)] = 1052,
  [SMALL_STATE(54)] = 1066,
  [SMALL_STATE(55)] = 1080,
  [SMALL_STATE(56)] = 1094,
  [SMALL_STATE(57)] = 1110,
  [SMALL_STATE(58)] = 1124,
  [SMALL_STATE(59)] = 1140,
  [SMALL_STATE(60)] = 1154,
  [SMALL_STATE(61)] = 1168,
  [SMALL_STATE(62)] = 1180,
  [SMALL_STATE(63)] = 1192,
  [SMALL_STATE(64)] = 1206,
  [SMALL_STATE(65)] = 1220,
  [SMALL_STATE(66)] = 1234,
  [SMALL_STATE(67)] = 1246,
  [SMALL_STATE(68)] = 1258,
  [SMALL_STATE(69)] = 1270,
  [SMALL_STATE(70)] = 1282,
  [SMALL_STATE(71)] = 1294,
  [SMALL_STATE(72)] = 1306,
  [SMALL_STATE(73)] = 1318,
  [SMALL_STATE(74)] = 1330,
  [SMALL_STATE(75)] = 1346,
  [SMALL_STATE(76)] = 1360,
  [SMALL_STATE(77)] = 1374,
  [SMALL_STATE(78)] = 1385,
  [SMALL_STATE(79)] = 1396,
  [SMALL_STATE(80)] = 1407,
  [SMALL_STATE(81)] = 1418,
  [SMALL_STATE(82)] = 1429,
  [SMALL_STATE(83)] = 1440,
  [SMALL_STATE(84)] = 1451,
  [SMALL_STATE(85)] = 1462,
  [SMALL_STATE(86)] = 1473,
  [SMALL_STATE(87)] = 1484,
  [SMALL_STATE(88)] = 1495,
  [SMALL_STATE(89)] = 1506,
  [SMALL_STATE(90)] = 1517,
  [SMALL_STATE(91)] = 1528,
  [SMALL_STATE(92)] = 1539,
  [SMALL_STATE(93)] = 1550,
  [SMALL_STATE(94)] = 1561,
  [SMALL_STATE(95)] = 1572,
  [SMALL_STATE(96)] = 1583,
  [SMALL_STATE(97)] = 1594,
  [SMALL_STATE(98)] = 1605,
  [SMALL_STATE(99)] = 1616,
  [SMALL_STATE(100)] = 1627,
  [SMALL_STATE(101)] = 1638,
  [SMALL_STATE(102)] = 1649,
  [SMALL_STATE(103)] = 1660,
  [SMALL_STATE(104)] = 1671,
  [SMALL_STATE(105)] = 1682,
  [SMALL_STATE(106)] = 1693,
  [SMALL_STATE(107)] = 1704,
  [SMALL_STATE(108)] = 1715,
  [SMALL_STATE(109)] = 1726,
  [SMALL_STATE(110)] = 1737,
  [SMALL_STATE(111)] = 1748,
  [SMALL_STATE(112)] = 1759,
  [SMALL_STATE(113)] = 1770,
  [SMALL_STATE(114)] = 1781,
  [SMALL_STATE(115)] = 1792,
  [SMALL_STATE(116)] = 1803,
  [SMALL_STATE(117)] = 1814,
  [SMALL_STATE(118)] = 1825,
  [SMALL_STATE(119)] = 1836,
  [SMALL_STATE(120)] = 1847,
  [SMALL_STATE(121)] = 1858,
  [SMALL_STATE(122)] = 1869,
  [SMALL_STATE(123)] = 1880,
  [SMALL_STATE(124)] = 1888,
  [SMALL_STATE(125)] = 1898,
  [SMALL_STATE(126)] = 1909,
  [SMALL_STATE(127)] = 1919,
  [SMALL_STATE(128)] = 1926,
  [SMALL_STATE(129)] = 1933,
  [SMALL_STATE(130)] = 1940,
  [SMALL_STATE(131)] = 1947,
  [SMALL_STATE(132)] = 1954,
  [SMALL_STATE(133)] = 1961,
  [SMALL_STATE(134)] = 1968,
  [SMALL_STATE(135)] = 1975,
  [SMALL_STATE(136)] = 1982,
  [SMALL_STATE(137)] = 1989,
  [SMALL_STATE(138)] = 1996,
  [SMALL_STATE(139)] = 2000,
  [SMALL_STATE(140)] = 2004,
  [SMALL_STATE(141)] = 2008,
  [SMALL_STATE(142)] = 2012,
  [SMALL_STATE(143)] = 2016,
  [SMALL_STATE(144)] = 2020,
  [SMALL_STATE(145)] = 2024,
  [SMALL_STATE(146)] = 2028,
  [SMALL_STATE(147)] = 2032,
  [SMALL_STATE(148)] = 2036,
  [SMALL_STATE(149)] = 2040,
  [SMALL_STATE(150)] = 2044,
  [SMALL_STATE(151)] = 2048,
  [SMALL_STATE(152)] = 2052,
  [SMALL_STATE(153)] = 2056,
  [SMALL_STATE(154)] = 2060,
  [SMALL_STATE(155)] = 2064,
  [SMALL_STATE(156)] = 2068,
  [SMALL_STATE(157)] = 2072,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [526] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
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
