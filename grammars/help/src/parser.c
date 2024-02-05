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
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 1
#define TOKEN_COUNT 60
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
  anon_sym_part = 10,
  anon_sym_decorate = 11,
  anon_sym_LPAREN = 12,
  anon_sym_output = 13,
  anon_sym_parameter = 14,
  anon_sym_light = 15,
  anon_sym_widget = 16,
  anon_sym_RPAREN = 17,
  anon_sym_with = 18,
  anon_sym_delete = 19,
  anon_sym_guide = 20,
  anon_sym_label = 21,
  anon_sym_decoration = 22,
  anon_sym_load = 23,
  anon_sym_project = 24,
  anon_sym_script = 25,
  anon_sym_save = 26,
  anon_sym_timestamp = 27,
  anon_sym_COMMA = 28,
  anon_sym_gzip = 29,
  anon_sym_export = 30,
  anon_sym_panel = 31,
  anon_sym_svg = 32,
  anon_sym_dark = 33,
  anon_sym_origin = 34,
  anon_sym_background = 35,
  anon_sym_AT = 36,
  aux_sym__label_absolute_token1 = 37,
  aux_sym__label_relative_token1 = 38,
  aux_sym_font_token1 = 39,
  aux_sym_fontsize_token1 = 40,
  anon_sym_left = 41,
  anon_sym_centre = 42,
  anon_sym_center = 43,
  anon_sym_right = 44,
  anon_sym_top = 45,
  anon_sym_middle = 46,
  anon_sym_baseline = 47,
  anon_sym_bottom = 48,
  aux_sym__rgb_token1 = 49,
  aux_sym__rgba_token1 = 50,
  aux_sym__absolute_token1 = 51,
  aux_sym__x_token1 = 52,
  aux_sym__y_token1 = 53,
  aux_sym__offset_token1 = 54,
  aux_sym_string_token1 = 55,
  aux_sym_string_token2 = 56,
  aux_sym__string_token1 = 57,
  aux_sym__string_token2 = 58,
  sym_identifier = 59,
  sym_command = 60,
  sym_new = 61,
  sym_module = 62,
  sym__input_entity = 63,
  sym_set = 64,
  sym__module_attr = 65,
  sym__input_attr = 66,
  sym_decorate = 67,
  sym__component = 68,
  sym_decoration = 69,
  sym_delete = 70,
  sym__guideline_id = 71,
  sym__input_id = 72,
  sym__output_id = 73,
  sym__parameter_id = 74,
  sym__light_id = 75,
  sym__widget_id = 76,
  sym__label_id = 77,
  sym__decoration_id = 78,
  sym__component_id = 79,
  sym_load = 80,
  sym_save = 81,
  sym_project = 82,
  sym__save_options = 83,
  sym_script = 84,
  sym_export = 85,
  sym_panel = 86,
  sym_svg = 87,
  sym_origin = 88,
  sym_background = 89,
  sym_guide = 90,
  sym_output = 91,
  sym_parameter = 92,
  sym_light = 93,
  sym_widget = 94,
  sym_label = 95,
  sym__label_string = 96,
  sym__label_absolute = 97,
  sym__label_relative = 98,
  sym__label_geometry = 99,
  sym_font = 100,
  sym_fontsize = 101,
  sym_halign = 102,
  sym_valign = 103,
  sym_colour = 104,
  sym__rgb = 105,
  sym__rgba = 106,
  sym_name = 107,
  sym_part = 108,
  sym_rgb = 109,
  sym_rgba = 110,
  sym_absolute = 111,
  sym__absolute = 112,
  sym__relative = 113,
  sym__x = 114,
  sym__y = 115,
  sym_x = 116,
  sym_y = 117,
  sym_xy = 118,
  sym__xy = 119,
  sym__offset = 120,
  sym_offset = 121,
  sym_string = 122,
  sym__string = 123,
  aux_sym_command_repeat1 = 124,
  alias_sym_reference = 125,
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
  [anon_sym_part] = "part",
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
  [sym__input_attr] = "_input_attr",
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
  [anon_sym_part] = anon_sym_part,
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
  [sym__input_attr] = sym__input_attr,
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
  [anon_sym_part] = {
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
  [sym__input_attr] = {
    .visible = false,
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
  [66] = 23,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 23,
  [135] = 49,
  [136] = 65,
  [137] = 137,
  [138] = 74,
  [139] = 139,
  [140] = 75,
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
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '@') ADVANCE(307);
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
      if (lookahead == '"') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(355);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(311);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'U') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '5') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(262);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'H') ADVANCE(349);
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
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '8') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'U') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == '5') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == '5') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 31:
      if (lookahead == '5') ADVANCE(149);
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'H') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'H') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(185);
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
      if (lookahead == 't') ADVANCE(270);
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
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(306);
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
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(350);
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
      if (lookahead == 'g') ADVANCE(303);
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
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(269);
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
      if (lookahead == 'k') ADVANCE(304);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(302);
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
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(352);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(310);
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
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(287);
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
      if (lookahead == 'o') ADVANCE(184);
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
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(351);
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
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(130);
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
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(209);
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
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(180);
      END_STATE();
    case 226:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
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
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 248:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '@') ADVANCE(307);
      if (lookahead == 'b') ADVANCE(172);
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
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 250:
      if (eof) ADVANCE(254);
      if (lookahead == ')') ADVANCE(280);
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
      if (eof) ADVANCE(254);
      if (lookahead == '@') ADVANCE(307);
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
      if (eof) ADVANCE(254);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 253:
      if (eof) ADVANCE(254);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
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
  [5] = {.lex_state = 248},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 251},
  [9] = {.lex_state = 249},
  [10] = {.lex_state = 248},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 248},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 250},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 248},
  [20] = {.lex_state = 247},
  [21] = {.lex_state = 249},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 252},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 249},
  [28] = {.lex_state = 249},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 249},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 249},
  [36] = {.lex_state = 249},
  [37] = {.lex_state = 249},
  [38] = {.lex_state = 249},
  [39] = {.lex_state = 248},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 249},
  [42] = {.lex_state = 249},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 248},
  [45] = {.lex_state = 250},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 249},
  [48] = {.lex_state = 247},
  [49] = {.lex_state = 247},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 249},
  [53] = {.lex_state = 253},
  [54] = {.lex_state = 250},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 249},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 253},
  [65] = {.lex_state = 247},
  [66] = {.lex_state = 247},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 247},
  [75] = {.lex_state = 247},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 249},
  [79] = {.lex_state = 249},
  [80] = {.lex_state = 249},
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
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 251},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 248},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 248},
  [142] = {.lex_state = 248},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 248},
  [145] = {.lex_state = 249},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 247},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 248},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 251},
  [160] = {.lex_state = 249},
  [161] = {.lex_state = 248},
  [162] = {.lex_state = 247},
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
    [anon_sym_part] = ACTIONS(1),
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
    [sym_command] = STATE(153),
    [sym_new] = STATE(7),
    [sym_set] = STATE(7),
    [sym_decorate] = STATE(7),
    [sym_delete] = STATE(7),
    [sym_load] = STATE(7),
    [sym_save] = STATE(7),
    [sym_export] = STATE(7),
    [aux_sym_command_repeat1] = STATE(7),
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
    STATE(105), 8,
      sym_module,
      sym__input_entity,
      sym_guide,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
  [45] = 10,
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
    ACTIONS(51), 1,
      anon_sym_label,
    ACTIONS(53), 1,
      anon_sym_decoration,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
    STATE(115), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [90] = 7,
    ACTIONS(57), 1,
      anon_sym_module,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_origin,
    ACTIONS(63), 1,
      anon_sym_background,
    STATE(29), 1,
      sym__input_id,
    STATE(113), 4,
      sym__module_attr,
      sym__input_attr,
      sym_origin,
      sym_background,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [122] = 7,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(69), 1,
      aux_sym__absolute_token1,
    ACTIONS(71), 1,
      aux_sym__x_token1,
    STATE(32), 1,
      sym_xy,
    STATE(152), 1,
      sym__x,
    STATE(78), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [153] = 9,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_new,
    ACTIONS(78), 1,
      anon_sym_set,
    ACTIONS(81), 1,
      anon_sym_decorate,
    ACTIONS(84), 1,
      anon_sym_delete,
    ACTIONS(87), 1,
      anon_sym_load,
    ACTIONS(90), 1,
      anon_sym_save,
    ACTIONS(93), 1,
      anon_sym_export,
    STATE(6), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [188] = 9,
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
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(6), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [223] = 6,
    ACTIONS(71), 1,
      aux_sym__x_token1,
    ACTIONS(100), 1,
      anon_sym_AT,
    ACTIONS(102), 1,
      aux_sym__label_relative_token1,
    STATE(148), 1,
      sym__x,
    STATE(92), 3,
      sym__label_absolute,
      sym__label_relative,
      sym__label_geometry,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [251] = 8,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(110), 1,
      aux_sym__rgb_token1,
    ACTIONS(112), 1,
      aux_sym__rgba_token1,
    STATE(62), 1,
      sym_rgb,
    STATE(63), 1,
      sym_rgba,
    STATE(99), 1,
      sym_name,
    ACTIONS(106), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [282] = 7,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      aux_sym__x_token1,
    ACTIONS(120), 1,
      aux_sym__y_token1,
    STATE(57), 1,
      sym_x,
    STATE(58), 1,
      sym_y,
    STATE(100), 1,
      sym_absolute,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [311] = 3,
    STATE(93), 1,
      sym_halign,
    ACTIONS(124), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [331] = 5,
    ACTIONS(128), 1,
      aux_sym__rgb_token1,
    ACTIONS(130), 1,
      aux_sym__rgba_token1,
    STATE(88), 1,
      sym_colour,
    STATE(50), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [355] = 4,
    STATE(8), 1,
      sym__string,
    STATE(127), 1,
      sym__label_string,
    ACTIONS(134), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [376] = 4,
    ACTIONS(138), 1,
      anon_sym_project,
    ACTIONS(140), 1,
      anon_sym_script,
    STATE(123), 2,
      sym_project,
      sym_script,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [397] = 5,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(96), 1,
      sym_string,
    ACTIONS(146), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(144), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [420] = 2,
    ACTIONS(152), 1,
      sym_width,
    ACTIONS(150), 10,
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
  [436] = 3,
    ACTIONS(156), 1,
      aux_sym__offset_token1,
    STATE(61), 1,
      sym_offset,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [454] = 1,
    ACTIONS(158), 11,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [468] = 1,
    ACTIONS(150), 11,
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
  [482] = 5,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(95), 1,
      sym__component_id,
    ACTIONS(162), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [504] = 4,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      aux_sym__offset_token1,
    STATE(80), 1,
      sym__offset,
    ACTIONS(170), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [524] = 4,
    ACTIONS(176), 1,
      anon_sym_name,
    ACTIONS(178), 1,
      anon_sym_height,
    ACTIONS(180), 1,
      anon_sym_width,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [544] = 3,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(184), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [562] = 3,
    ACTIONS(156), 1,
      aux_sym__offset_token1,
    STATE(71), 1,
      sym_offset,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [580] = 4,
    ACTIONS(192), 1,
      anon_sym_timestamp,
    ACTIONS(194), 1,
      anon_sym_gzip,
    STATE(89), 1,
      sym__save_options,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [600] = 3,
    ACTIONS(198), 1,
      anon_sym_svg,
    STATE(108), 1,
      sym_svg,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [617] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_name,
    ACTIONS(202), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [636] = 4,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      aux_sym_font_token1,
    STATE(106), 1,
      sym_font,
    ACTIONS(206), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [655] = 3,
    ACTIONS(212), 1,
      anon_sym_name,
    ACTIONS(214), 1,
      anon_sym_part,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [672] = 3,
    ACTIONS(218), 1,
      anon_sym_light,
    ACTIONS(220), 1,
      anon_sym_dark,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [689] = 3,
    ACTIONS(224), 1,
      anon_sym_project,
    ACTIONS(226), 1,
      anon_sym_script,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [706] = 4,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    STATE(116), 1,
      sym_part,
    ACTIONS(230), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [725] = 6,
    ACTIONS(234), 1,
      anon_sym_input,
    ACTIONS(236), 1,
      anon_sym_output,
    ACTIONS(238), 1,
      anon_sym_parameter,
    ACTIONS(240), 1,
      anon_sym_light,
    ACTIONS(242), 1,
      anon_sym_widget,
    STATE(143), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [748] = 3,
    ACTIONS(246), 1,
      aux_sym_fontsize_token1,
    STATE(102), 1,
      sym_fontsize,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [765] = 4,
    ACTIONS(232), 1,
      aux_sym_font_token1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_part,
    ACTIONS(250), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [784] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_name,
    ACTIONS(250), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [803] = 4,
    ACTIONS(208), 1,
      aux_sym_font_token1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_font,
    ACTIONS(254), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [822] = 4,
    ACTIONS(208), 1,
      aux_sym_font_token1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_font,
    ACTIONS(258), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [841] = 3,
    ACTIONS(120), 1,
      aux_sym__y_token1,
    STATE(121), 1,
      sym_y,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [858] = 3,
    ACTIONS(264), 1,
      anon_sym_panel,
    STATE(125), 1,
      sym_panel,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [875] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_name,
    ACTIONS(268), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [894] = 4,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      aux_sym_font_token1,
    STATE(5), 1,
      sym_name,
    ACTIONS(272), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [913] = 3,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym__component,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [930] = 3,
    ACTIONS(118), 1,
      aux_sym__x_token1,
    STATE(121), 1,
      sym_x,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [947] = 3,
    ACTIONS(282), 1,
      sym_height,
    ACTIONS(284), 1,
      sym_width,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [964] = 3,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_decoration,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [981] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_name,
    ACTIONS(292), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1000] = 3,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(296), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1016] = 3,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(302), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1032] = 2,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1046] = 2,
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
  [1060] = 2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1074] = 2,
    ACTIONS(320), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1088] = 2,
    ACTIONS(324), 1,
      sym_width,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1102] = 2,
    ACTIONS(328), 1,
      anon_sym_timestamp,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1116] = 2,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1130] = 2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1144] = 2,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1158] = 1,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1170] = 1,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1182] = 1,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1194] = 2,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1208] = 2,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1222] = 2,
    ACTIONS(354), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1236] = 3,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(358), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1252] = 3,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(184), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1268] = 1,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1280] = 1,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1292] = 1,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1304] = 1,
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
  [1316] = 1,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1328] = 1,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1340] = 2,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(374), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1354] = 3,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      sym_identifier,
    ACTIONS(380), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1370] = 3,
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
  [1386] = 2,
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
  [1400] = 2,
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
  [1414] = 2,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1428] = 2,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1442] = 2,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    ACTIONS(406), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1456] = 1,
    ACTIONS(408), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1467] = 1,
    ACTIONS(410), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1478] = 1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1489] = 1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1500] = 1,
    ACTIONS(414), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1511] = 1,
    ACTIONS(416), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1522] = 1,
    ACTIONS(418), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1533] = 1,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1544] = 1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1555] = 1,
    ACTIONS(424), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1566] = 1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1577] = 1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1588] = 1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1599] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1610] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1621] = 1,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1632] = 1,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1643] = 1,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1654] = 1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1665] = 1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1676] = 1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1687] = 1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1698] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1709] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1720] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1731] = 1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1742] = 1,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1753] = 1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1764] = 1,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1775] = 1,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1786] = 1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1797] = 1,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1808] = 1,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1819] = 1,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1830] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1841] = 1,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1852] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1863] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1874] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1885] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1896] = 1,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1907] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1918] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1929] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1940] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1951] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1962] = 1,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1973] = 1,
    ACTIONS(496), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [1981] = 2,
    STATE(90), 1,
      sym_valign,
    ACTIONS(498), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1991] = 3,
    ACTIONS(500), 1,
      aux_sym__rgb_token1,
    ACTIONS(502), 1,
      aux_sym__rgba_token1,
    STATE(86), 2,
      sym__rgb,
      sym__rgba,
  [2002] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      aux_sym__offset_token1,
    STATE(157), 1,
      sym__offset,
  [2012] = 2,
    ACTIONS(112), 1,
      aux_sym__rgba_token1,
    STATE(122), 1,
      sym_rgba,
  [2019] = 2,
    ACTIONS(508), 1,
      aux_sym_font_token1,
    STATE(94), 1,
      sym_name,
  [2026] = 2,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      sym_identifier,
  [2033] = 2,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      sym_identifier,
  [2040] = 2,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(514), 1,
      sym_identifier,
  [2047] = 2,
    ACTIONS(516), 1,
      aux_sym__y_token1,
    STATE(37), 1,
      sym__y,
  [2054] = 2,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      sym_identifier,
  [2061] = 2,
    ACTIONS(508), 1,
      aux_sym_font_token1,
    STATE(107), 1,
      sym_name,
  [2068] = 2,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      sym_identifier,
  [2075] = 2,
    ACTIONS(516), 1,
      aux_sym__y_token1,
    STATE(56), 1,
      sym__y,
  [2082] = 2,
    ACTIONS(522), 1,
      aux_sym__rgb_token1,
    STATE(122), 1,
      sym_rgb,
  [2089] = 1,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [2093] = 1,
    ACTIONS(526), 1,
      aux_sym__absolute_token1,
  [2097] = 1,
    ACTIONS(528), 1,
      sym_width,
  [2101] = 1,
    ACTIONS(530), 1,
      anon_sym_with,
  [2105] = 1,
    ACTIONS(532), 1,
      anon_sym_gzip,
  [2109] = 1,
    ACTIONS(534), 1,
      anon_sym_COMMA,
  [2113] = 1,
    ACTIONS(532), 1,
      anon_sym_timestamp,
  [2117] = 1,
    ACTIONS(536), 1,
      anon_sym_COMMA,
  [2121] = 1,
    ACTIONS(538), 1,
      aux_sym__label_absolute_token1,
  [2125] = 1,
    ACTIONS(540), 1,
      anon_sym_COMMA,
  [2129] = 1,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
  [2133] = 1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [2137] = 1,
    ACTIONS(546), 1,
      aux_sym__absolute_token1,
  [2141] = 1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [2145] = 1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
  [2149] = 1,
    ACTIONS(552), 1,
      anon_sym_COMMA,
  [2153] = 1,
    ACTIONS(554), 1,
      aux_sym__label_relative_token1,
  [2157] = 1,
    ACTIONS(528), 1,
      sym_height,
  [2161] = 1,
    ACTIONS(556), 1,
      aux_sym__absolute_token1,
  [2165] = 1,
    ACTIONS(558), 1,
      aux_sym__label_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 331,
  [SMALL_STATE(13)] = 355,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 436,
  [SMALL_STATE(18)] = 454,
  [SMALL_STATE(19)] = 468,
  [SMALL_STATE(20)] = 482,
  [SMALL_STATE(21)] = 504,
  [SMALL_STATE(22)] = 524,
  [SMALL_STATE(23)] = 544,
  [SMALL_STATE(24)] = 562,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 600,
  [SMALL_STATE(27)] = 617,
  [SMALL_STATE(28)] = 636,
  [SMALL_STATE(29)] = 655,
  [SMALL_STATE(30)] = 672,
  [SMALL_STATE(31)] = 689,
  [SMALL_STATE(32)] = 706,
  [SMALL_STATE(33)] = 725,
  [SMALL_STATE(34)] = 748,
  [SMALL_STATE(35)] = 765,
  [SMALL_STATE(36)] = 784,
  [SMALL_STATE(37)] = 803,
  [SMALL_STATE(38)] = 822,
  [SMALL_STATE(39)] = 841,
  [SMALL_STATE(40)] = 858,
  [SMALL_STATE(41)] = 875,
  [SMALL_STATE(42)] = 894,
  [SMALL_STATE(43)] = 913,
  [SMALL_STATE(44)] = 930,
  [SMALL_STATE(45)] = 947,
  [SMALL_STATE(46)] = 964,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 1000,
  [SMALL_STATE(49)] = 1016,
  [SMALL_STATE(50)] = 1032,
  [SMALL_STATE(51)] = 1046,
  [SMALL_STATE(52)] = 1060,
  [SMALL_STATE(53)] = 1074,
  [SMALL_STATE(54)] = 1088,
  [SMALL_STATE(55)] = 1102,
  [SMALL_STATE(56)] = 1116,
  [SMALL_STATE(57)] = 1130,
  [SMALL_STATE(58)] = 1144,
  [SMALL_STATE(59)] = 1158,
  [SMALL_STATE(60)] = 1170,
  [SMALL_STATE(61)] = 1182,
  [SMALL_STATE(62)] = 1194,
  [SMALL_STATE(63)] = 1208,
  [SMALL_STATE(64)] = 1222,
  [SMALL_STATE(65)] = 1236,
  [SMALL_STATE(66)] = 1252,
  [SMALL_STATE(67)] = 1268,
  [SMALL_STATE(68)] = 1280,
  [SMALL_STATE(69)] = 1292,
  [SMALL_STATE(70)] = 1304,
  [SMALL_STATE(71)] = 1316,
  [SMALL_STATE(72)] = 1328,
  [SMALL_STATE(73)] = 1340,
  [SMALL_STATE(74)] = 1354,
  [SMALL_STATE(75)] = 1370,
  [SMALL_STATE(76)] = 1386,
  [SMALL_STATE(77)] = 1400,
  [SMALL_STATE(78)] = 1414,
  [SMALL_STATE(79)] = 1428,
  [SMALL_STATE(80)] = 1442,
  [SMALL_STATE(81)] = 1456,
  [SMALL_STATE(82)] = 1467,
  [SMALL_STATE(83)] = 1478,
  [SMALL_STATE(84)] = 1489,
  [SMALL_STATE(85)] = 1500,
  [SMALL_STATE(86)] = 1511,
  [SMALL_STATE(87)] = 1522,
  [SMALL_STATE(88)] = 1533,
  [SMALL_STATE(89)] = 1544,
  [SMALL_STATE(90)] = 1555,
  [SMALL_STATE(91)] = 1566,
  [SMALL_STATE(92)] = 1577,
  [SMALL_STATE(93)] = 1588,
  [SMALL_STATE(94)] = 1599,
  [SMALL_STATE(95)] = 1610,
  [SMALL_STATE(96)] = 1621,
  [SMALL_STATE(97)] = 1632,
  [SMALL_STATE(98)] = 1643,
  [SMALL_STATE(99)] = 1654,
  [SMALL_STATE(100)] = 1665,
  [SMALL_STATE(101)] = 1676,
  [SMALL_STATE(102)] = 1687,
  [SMALL_STATE(103)] = 1698,
  [SMALL_STATE(104)] = 1709,
  [SMALL_STATE(105)] = 1720,
  [SMALL_STATE(106)] = 1731,
  [SMALL_STATE(107)] = 1742,
  [SMALL_STATE(108)] = 1753,
  [SMALL_STATE(109)] = 1764,
  [SMALL_STATE(110)] = 1775,
  [SMALL_STATE(111)] = 1786,
  [SMALL_STATE(112)] = 1797,
  [SMALL_STATE(113)] = 1808,
  [SMALL_STATE(114)] = 1819,
  [SMALL_STATE(115)] = 1830,
  [SMALL_STATE(116)] = 1841,
  [SMALL_STATE(117)] = 1852,
  [SMALL_STATE(118)] = 1863,
  [SMALL_STATE(119)] = 1874,
  [SMALL_STATE(120)] = 1885,
  [SMALL_STATE(121)] = 1896,
  [SMALL_STATE(122)] = 1907,
  [SMALL_STATE(123)] = 1918,
  [SMALL_STATE(124)] = 1929,
  [SMALL_STATE(125)] = 1940,
  [SMALL_STATE(126)] = 1951,
  [SMALL_STATE(127)] = 1962,
  [SMALL_STATE(128)] = 1973,
  [SMALL_STATE(129)] = 1981,
  [SMALL_STATE(130)] = 1991,
  [SMALL_STATE(131)] = 2002,
  [SMALL_STATE(132)] = 2012,
  [SMALL_STATE(133)] = 2019,
  [SMALL_STATE(134)] = 2026,
  [SMALL_STATE(135)] = 2033,
  [SMALL_STATE(136)] = 2040,
  [SMALL_STATE(137)] = 2047,
  [SMALL_STATE(138)] = 2054,
  [SMALL_STATE(139)] = 2061,
  [SMALL_STATE(140)] = 2068,
  [SMALL_STATE(141)] = 2075,
  [SMALL_STATE(142)] = 2082,
  [SMALL_STATE(143)] = 2089,
  [SMALL_STATE(144)] = 2093,
  [SMALL_STATE(145)] = 2097,
  [SMALL_STATE(146)] = 2101,
  [SMALL_STATE(147)] = 2105,
  [SMALL_STATE(148)] = 2109,
  [SMALL_STATE(149)] = 2113,
  [SMALL_STATE(150)] = 2117,
  [SMALL_STATE(151)] = 2121,
  [SMALL_STATE(152)] = 2125,
  [SMALL_STATE(153)] = 2129,
  [SMALL_STATE(154)] = 2133,
  [SMALL_STATE(155)] = 2137,
  [SMALL_STATE(156)] = 2141,
  [SMALL_STATE(157)] = 2145,
  [SMALL_STATE(158)] = 2149,
  [SMALL_STATE(159)] = 2153,
  [SMALL_STATE(160)] = 2157,
  [SMALL_STATE(161)] = 2161,
  [SMALL_STATE(162)] = 2165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(31),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_attr, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [542] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
