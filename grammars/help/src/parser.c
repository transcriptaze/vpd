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
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
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
  sym__input_attr = 65,
  sym_decorate = 66,
  sym__component = 67,
  sym_decoration = 68,
  sym_delete = 69,
  sym__guideline_id = 70,
  sym__input_id = 71,
  sym__output_id = 72,
  sym__parameter_id = 73,
  sym__light_id = 74,
  sym__widget_id = 75,
  sym__label_id = 76,
  sym__decoration_id = 77,
  sym__component_id = 78,
  sym_load = 79,
  sym_save = 80,
  sym_project = 81,
  sym__save_options = 82,
  sym_script = 83,
  sym_export = 84,
  sym_panel = 85,
  sym_svg = 86,
  sym_origin = 87,
  sym_background = 88,
  sym_guide = 89,
  sym_output = 90,
  sym_parameter = 91,
  sym_light = 92,
  sym_widget = 93,
  sym_label = 94,
  sym__label_string = 95,
  sym__label_absolute = 96,
  sym__label_relative = 97,
  sym__label_geometry = 98,
  sym_font = 99,
  sym_fontsize = 100,
  sym_halign = 101,
  sym_valign = 102,
  sym_colour = 103,
  sym__rgb = 104,
  sym__rgba = 105,
  sym_name = 106,
  sym_part = 107,
  sym_rgb = 108,
  sym_rgba = 109,
  sym_absolute = 110,
  sym__absolute = 111,
  sym__relative = 112,
  sym__x = 113,
  sym__y = 114,
  sym_x = 115,
  sym_y = 116,
  sym_xy = 117,
  sym__xy = 118,
  sym__offset = 119,
  sym_offset = 120,
  sym_string = 121,
  sym__string = 122,
  aux_sym_command_repeat1 = 123,
  alias_sym_reference = 124,
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 18,
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
  [50] = 34,
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
  [131] = 131,
  [132] = 34,
  [133] = 133,
  [134] = 48,
  [135] = 61,
  [136] = 76,
  [137] = 137,
  [138] = 138,
  [139] = 47,
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
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
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
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '@') ADVANCE(305);
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
      if (lookahead == '"') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(309);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'U') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '5') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(262);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'H') ADVANCE(347);
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
          lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '8') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'h') ADVANCE(306);
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
      if (lookahead == 'H') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 31:
      if (lookahead == '5') ADVANCE(149);
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'H') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'H') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(306);
      if (lookahead == 'h') ADVANCE(306);
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
      if (lookahead == 'H') ADVANCE(347);
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
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(304);
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
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(348);
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
      if (lookahead == 'g') ADVANCE(301);
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
      if (lookahead == 'h') ADVANCE(279);
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
      if (lookahead == 'k') ADVANCE(302);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(300);
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
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(308);
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
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(285);
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
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(349);
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
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(348);
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
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(348);
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
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(180);
      END_STATE();
    case 226:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(350);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
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
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 248:
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '@') ADVANCE(305);
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
      if (eof) ADVANCE(254);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 250:
      if (eof) ADVANCE(254);
      if (lookahead == ')') ADVANCE(278);
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
      if (lookahead == '@') ADVANCE(305);
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
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_save);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__label_absolute_token1);
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__label_relative_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_font_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'w') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == 'x') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_font_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_fontsize_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__rgb_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__rgba_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__absolute_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__x_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__y_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__offset_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
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
  [6] = {.lex_state = 248},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 251},
  [9] = {.lex_state = 249},
  [10] = {.lex_state = 248},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 248},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 249},
  [18] = {.lex_state = 250},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 247},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 248},
  [24] = {.lex_state = 249},
  [25] = {.lex_state = 249},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 248},
  [28] = {.lex_state = 248},
  [29] = {.lex_state = 249},
  [30] = {.lex_state = 249},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 252},
  [35] = {.lex_state = 249},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 249},
  [40] = {.lex_state = 249},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 249},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 249},
  [45] = {.lex_state = 250},
  [46] = {.lex_state = 250},
  [47] = {.lex_state = 247},
  [48] = {.lex_state = 247},
  [49] = {.lex_state = 247},
  [50] = {.lex_state = 247},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 249},
  [55] = {.lex_state = 249},
  [56] = {.lex_state = 249},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 249},
  [59] = {.lex_state = 253},
  [60] = {.lex_state = 253},
  [61] = {.lex_state = 247},
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
  [76] = {.lex_state = 247},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 249},
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
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 251},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 248},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 248},
  [141] = {.lex_state = 248},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 249},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 249},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 247},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 248},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 251},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 248},
  [160] = {.lex_state = 248},
  [161] = {.lex_state = 247},
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
    [sym_command] = STATE(151),
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
    STATE(124), 8,
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
    STATE(103), 8,
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
    STATE(57), 1,
      sym__input_id,
    STATE(126), 4,
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
  [122] = 9,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_new,
    ACTIONS(70), 1,
      anon_sym_set,
    ACTIONS(73), 1,
      anon_sym_decorate,
    ACTIONS(76), 1,
      anon_sym_delete,
    ACTIONS(79), 1,
      anon_sym_load,
    ACTIONS(82), 1,
      anon_sym_save,
    ACTIONS(85), 1,
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
  [157] = 7,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      aux_sym__absolute_token1,
    ACTIONS(94), 1,
      aux_sym__x_token1,
    STATE(29), 1,
      sym_xy,
    STATE(152), 1,
      sym__x,
    STATE(79), 3,
      sym__absolute,
      sym__relative,
      sym__xy,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
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
    STATE(5), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [223] = 6,
    ACTIONS(94), 1,
      aux_sym__x_token1,
    ACTIONS(100), 1,
      anon_sym_AT,
    ACTIONS(102), 1,
      aux_sym__label_relative_token1,
    STATE(147), 1,
      sym__x,
    STATE(97), 3,
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
    STATE(67), 1,
      sym_rgb,
    STATE(68), 1,
      sym_rgba,
    STATE(110), 1,
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
    STATE(62), 1,
      sym_x,
    STATE(63), 1,
      sym_y,
    STATE(119), 1,
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
  [311] = 5,
    ACTIONS(124), 1,
      aux_sym__rgb_token1,
    ACTIONS(126), 1,
      aux_sym__rgba_token1,
    STATE(94), 1,
      sym_colour,
    STATE(51), 2,
      sym__rgb,
      sym__rgba,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [335] = 3,
    STATE(98), 1,
      sym_halign,
    ACTIONS(130), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [355] = 5,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(84), 1,
      sym_string,
    ACTIONS(136), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(134), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [378] = 4,
    STATE(8), 1,
      sym__string,
    STATE(117), 1,
      sym__label_string,
    ACTIONS(142), 2,
      aux_sym__string_token1,
      aux_sym__string_token2,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [399] = 4,
    ACTIONS(146), 1,
      anon_sym_project,
    ACTIONS(148), 1,
      anon_sym_script,
    STATE(100), 2,
      sym_project,
      sym_script,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [420] = 4,
    ACTIONS(152), 1,
      anon_sym_timestamp,
    ACTIONS(154), 1,
      anon_sym_gzip,
    STATE(86), 1,
      sym__save_options,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [440] = 4,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      aux_sym__offset_token1,
    STATE(54), 1,
      sym__offset,
    ACTIONS(158), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [460] = 2,
    ACTIONS(164), 1,
      sym_width,
    ACTIONS(162), 10,
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
  [476] = 3,
    ACTIONS(168), 1,
      aux_sym__offset_token1,
    STATE(75), 1,
      sym_offset,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [494] = 3,
    ACTIONS(168), 1,
      aux_sym__offset_token1,
    STATE(74), 1,
      sym_offset,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [512] = 5,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(85), 1,
      sym__component_id,
    ACTIONS(174), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [534] = 4,
    ACTIONS(182), 1,
      anon_sym_name,
    ACTIONS(184), 1,
      anon_sym_height,
    ACTIONS(186), 1,
      anon_sym_width,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [554] = 1,
    ACTIONS(162), 11,
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
  [568] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_name,
    ACTIONS(190), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [587] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_name,
    ACTIONS(194), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [606] = 3,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_decoration,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [623] = 3,
    ACTIONS(118), 1,
      aux_sym__x_token1,
    STATE(120), 1,
      sym_x,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [640] = 3,
    ACTIONS(120), 1,
      aux_sym__y_token1,
    STATE(120), 1,
      sym_y,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [657] = 4,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      aux_sym_font_token1,
    STATE(115), 1,
      sym_part,
    ACTIONS(204), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [676] = 4,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      aux_sym_font_token1,
    STATE(6), 1,
      sym_name,
    ACTIONS(210), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [695] = 3,
    ACTIONS(216), 1,
      anon_sym_light,
    ACTIONS(218), 1,
      anon_sym_dark,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [712] = 3,
    ACTIONS(222), 1,
      aux_sym_fontsize_token1,
    STATE(101), 1,
      sym_fontsize,
    ACTIONS(220), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [729] = 3,
    ACTIONS(226), 1,
      anon_sym_panel,
    STATE(116), 1,
      sym_panel,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [746] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(230), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [763] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_name,
    ACTIONS(236), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [782] = 3,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__component,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [799] = 1,
    ACTIONS(242), 10,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [812] = 6,
    ACTIONS(244), 1,
      anon_sym_input,
    ACTIONS(246), 1,
      anon_sym_output,
    ACTIONS(248), 1,
      anon_sym_parameter,
    ACTIONS(250), 1,
      anon_sym_light,
    ACTIONS(252), 1,
      anon_sym_widget,
    STATE(144), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [835] = 4,
    ACTIONS(108), 1,
      aux_sym_font_token1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_name,
    ACTIONS(256), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [854] = 4,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      aux_sym_font_token1,
    STATE(111), 1,
      sym_font,
    ACTIONS(260), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [873] = 3,
    ACTIONS(266), 1,
      anon_sym_svg,
    STATE(88), 1,
      sym_svg,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [890] = 4,
    ACTIONS(262), 1,
      aux_sym_font_token1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_font,
    ACTIONS(270), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [909] = 3,
    ACTIONS(274), 1,
      anon_sym_project,
    ACTIONS(276), 1,
      anon_sym_script,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [926] = 4,
    ACTIONS(262), 1,
      aux_sym_font_token1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_font,
    ACTIONS(280), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [945] = 3,
    ACTIONS(284), 1,
      sym_height,
    ACTIONS(286), 1,
      sym_width,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [962] = 2,
    ACTIONS(290), 1,
      sym_width,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [976] = 3,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(294), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [992] = 3,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(300), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1008] = 3,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(306), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1024] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(230), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1040] = 2,
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
  [1054] = 2,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1068] = 2,
    ACTIONS(320), 1,
      anon_sym_timestamp,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1082] = 2,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1096] = 2,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1110] = 2,
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
  [1124] = 2,
    ACTIONS(336), 1,
      anon_sym_name,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1138] = 2,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1152] = 2,
    ACTIONS(344), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1166] = 2,
    ACTIONS(348), 1,
      aux_sym__label_absolute_token1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1180] = 3,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(352), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1196] = 2,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1210] = 2,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1224] = 1,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1236] = 1,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1248] = 2,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1262] = 2,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1276] = 2,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1290] = 1,
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
  [1302] = 1,
    ACTIONS(378), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1314] = 1,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1326] = 1,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1338] = 1,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1350] = 1,
    ACTIONS(386), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1362] = 1,
    ACTIONS(388), 9,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_COMMA,
      anon_sym_export,
  [1374] = 3,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(392), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1390] = 2,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1404] = 2,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1418] = 2,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      aux_sym_font_token1,
  [1432] = 1,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1443] = 1,
    ACTIONS(408), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1454] = 1,
    ACTIONS(410), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1465] = 1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1476] = 1,
    ACTIONS(414), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1487] = 1,
    ACTIONS(416), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1498] = 1,
    ACTIONS(418), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1509] = 1,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1520] = 1,
    ACTIONS(422), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1531] = 1,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1542] = 1,
    ACTIONS(424), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1553] = 1,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1564] = 1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1575] = 1,
    ACTIONS(430), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1586] = 1,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1597] = 1,
    ACTIONS(434), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1608] = 1,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1619] = 1,
    ACTIONS(438), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1630] = 1,
    ACTIONS(440), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1641] = 1,
    ACTIONS(442), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1652] = 1,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1663] = 1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1674] = 1,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1685] = 1,
    ACTIONS(450), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1696] = 1,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1707] = 1,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1718] = 1,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1729] = 1,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1740] = 1,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1751] = 1,
    ACTIONS(462), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1762] = 1,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1773] = 1,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1784] = 1,
    ACTIONS(466), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1795] = 1,
    ACTIONS(468), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1806] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1817] = 1,
    ACTIONS(472), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1828] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1839] = 1,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1850] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1861] = 1,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1872] = 1,
    ACTIONS(480), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1883] = 1,
    ACTIONS(482), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1894] = 1,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1905] = 1,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1916] = 1,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1927] = 1,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1938] = 1,
    ACTIONS(492), 8,
      ts_builtin_sym_end,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1949] = 1,
    ACTIONS(494), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_parameter,
      anon_sym_light,
      anon_sym_widget,
  [1957] = 2,
    STATE(95), 1,
      sym_valign,
    ACTIONS(496), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [1967] = 3,
    ACTIONS(498), 1,
      aux_sym__rgb_token1,
    ACTIONS(500), 1,
      aux_sym__rgba_token1,
    STATE(92), 2,
      sym__rgb,
      sym__rgba,
  [1978] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      aux_sym__offset_token1,
    STATE(154), 1,
      sym__offset,
  [1988] = 2,
    ACTIONS(112), 1,
      aux_sym__rgba_token1,
    STATE(121), 1,
      sym_rgba,
  [1995] = 2,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      sym_identifier,
  [2002] = 2,
    ACTIONS(508), 1,
      aux_sym_font_token1,
    STATE(99), 1,
      sym_name,
  [2009] = 2,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      sym_identifier,
  [2016] = 2,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      sym_identifier,
  [2023] = 2,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(514), 1,
      sym_identifier,
  [2030] = 2,
    ACTIONS(508), 1,
      aux_sym_font_token1,
    STATE(106), 1,
      sym_name,
  [2037] = 2,
    ACTIONS(516), 1,
      aux_sym__y_token1,
    STATE(42), 1,
      sym__y,
  [2044] = 2,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      sym_identifier,
  [2051] = 2,
    ACTIONS(516), 1,
      aux_sym__y_token1,
    STATE(56), 1,
      sym__y,
  [2058] = 2,
    ACTIONS(520), 1,
      aux_sym__rgb_token1,
    STATE(121), 1,
      sym_rgb,
  [2065] = 1,
    ACTIONS(522), 1,
      anon_sym_gzip,
  [2069] = 1,
    ACTIONS(524), 1,
      sym_width,
  [2073] = 1,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [2077] = 1,
    ACTIONS(524), 1,
      sym_height,
  [2081] = 1,
    ACTIONS(522), 1,
      anon_sym_timestamp,
  [2085] = 1,
    ACTIONS(528), 1,
      anon_sym_COMMA,
  [2089] = 1,
    ACTIONS(530), 1,
      anon_sym_COMMA,
  [2093] = 1,
    ACTIONS(532), 1,
      anon_sym_COMMA,
  [2097] = 1,
    ACTIONS(534), 1,
      aux_sym__label_absolute_token1,
  [2101] = 1,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
  [2105] = 1,
    ACTIONS(538), 1,
      anon_sym_COMMA,
  [2109] = 1,
    ACTIONS(540), 1,
      aux_sym__absolute_token1,
  [2113] = 1,
    ACTIONS(542), 1,
      anon_sym_COMMA,
  [2117] = 1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
  [2121] = 1,
    ACTIONS(546), 1,
      anon_sym_COMMA,
  [2125] = 1,
    ACTIONS(548), 1,
      aux_sym__label_relative_token1,
  [2129] = 1,
    ACTIONS(550), 1,
      anon_sym_with,
  [2133] = 1,
    ACTIONS(552), 1,
      aux_sym__absolute_token1,
  [2137] = 1,
    ACTIONS(554), 1,
      aux_sym__absolute_token1,
  [2141] = 1,
    ACTIONS(556), 1,
      aux_sym__label_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 355,
  [SMALL_STATE(14)] = 378,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 440,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 494,
  [SMALL_STATE(21)] = 512,
  [SMALL_STATE(22)] = 534,
  [SMALL_STATE(23)] = 554,
  [SMALL_STATE(24)] = 568,
  [SMALL_STATE(25)] = 587,
  [SMALL_STATE(26)] = 606,
  [SMALL_STATE(27)] = 623,
  [SMALL_STATE(28)] = 640,
  [SMALL_STATE(29)] = 657,
  [SMALL_STATE(30)] = 676,
  [SMALL_STATE(31)] = 695,
  [SMALL_STATE(32)] = 712,
  [SMALL_STATE(33)] = 729,
  [SMALL_STATE(34)] = 746,
  [SMALL_STATE(35)] = 763,
  [SMALL_STATE(36)] = 782,
  [SMALL_STATE(37)] = 799,
  [SMALL_STATE(38)] = 812,
  [SMALL_STATE(39)] = 835,
  [SMALL_STATE(40)] = 854,
  [SMALL_STATE(41)] = 873,
  [SMALL_STATE(42)] = 890,
  [SMALL_STATE(43)] = 909,
  [SMALL_STATE(44)] = 926,
  [SMALL_STATE(45)] = 945,
  [SMALL_STATE(46)] = 962,
  [SMALL_STATE(47)] = 976,
  [SMALL_STATE(48)] = 992,
  [SMALL_STATE(49)] = 1008,
  [SMALL_STATE(50)] = 1024,
  [SMALL_STATE(51)] = 1040,
  [SMALL_STATE(52)] = 1054,
  [SMALL_STATE(53)] = 1068,
  [SMALL_STATE(54)] = 1082,
  [SMALL_STATE(55)] = 1096,
  [SMALL_STATE(56)] = 1110,
  [SMALL_STATE(57)] = 1124,
  [SMALL_STATE(58)] = 1138,
  [SMALL_STATE(59)] = 1152,
  [SMALL_STATE(60)] = 1166,
  [SMALL_STATE(61)] = 1180,
  [SMALL_STATE(62)] = 1196,
  [SMALL_STATE(63)] = 1210,
  [SMALL_STATE(64)] = 1224,
  [SMALL_STATE(65)] = 1236,
  [SMALL_STATE(66)] = 1248,
  [SMALL_STATE(67)] = 1262,
  [SMALL_STATE(68)] = 1276,
  [SMALL_STATE(69)] = 1290,
  [SMALL_STATE(70)] = 1302,
  [SMALL_STATE(71)] = 1314,
  [SMALL_STATE(72)] = 1326,
  [SMALL_STATE(73)] = 1338,
  [SMALL_STATE(74)] = 1350,
  [SMALL_STATE(75)] = 1362,
  [SMALL_STATE(76)] = 1374,
  [SMALL_STATE(77)] = 1390,
  [SMALL_STATE(78)] = 1404,
  [SMALL_STATE(79)] = 1418,
  [SMALL_STATE(80)] = 1432,
  [SMALL_STATE(81)] = 1443,
  [SMALL_STATE(82)] = 1454,
  [SMALL_STATE(83)] = 1465,
  [SMALL_STATE(84)] = 1476,
  [SMALL_STATE(85)] = 1487,
  [SMALL_STATE(86)] = 1498,
  [SMALL_STATE(87)] = 1509,
  [SMALL_STATE(88)] = 1520,
  [SMALL_STATE(89)] = 1531,
  [SMALL_STATE(90)] = 1542,
  [SMALL_STATE(91)] = 1553,
  [SMALL_STATE(92)] = 1564,
  [SMALL_STATE(93)] = 1575,
  [SMALL_STATE(94)] = 1586,
  [SMALL_STATE(95)] = 1597,
  [SMALL_STATE(96)] = 1608,
  [SMALL_STATE(97)] = 1619,
  [SMALL_STATE(98)] = 1630,
  [SMALL_STATE(99)] = 1641,
  [SMALL_STATE(100)] = 1652,
  [SMALL_STATE(101)] = 1663,
  [SMALL_STATE(102)] = 1674,
  [SMALL_STATE(103)] = 1685,
  [SMALL_STATE(104)] = 1696,
  [SMALL_STATE(105)] = 1707,
  [SMALL_STATE(106)] = 1718,
  [SMALL_STATE(107)] = 1729,
  [SMALL_STATE(108)] = 1740,
  [SMALL_STATE(109)] = 1751,
  [SMALL_STATE(110)] = 1762,
  [SMALL_STATE(111)] = 1773,
  [SMALL_STATE(112)] = 1784,
  [SMALL_STATE(113)] = 1795,
  [SMALL_STATE(114)] = 1806,
  [SMALL_STATE(115)] = 1817,
  [SMALL_STATE(116)] = 1828,
  [SMALL_STATE(117)] = 1839,
  [SMALL_STATE(118)] = 1850,
  [SMALL_STATE(119)] = 1861,
  [SMALL_STATE(120)] = 1872,
  [SMALL_STATE(121)] = 1883,
  [SMALL_STATE(122)] = 1894,
  [SMALL_STATE(123)] = 1905,
  [SMALL_STATE(124)] = 1916,
  [SMALL_STATE(125)] = 1927,
  [SMALL_STATE(126)] = 1938,
  [SMALL_STATE(127)] = 1949,
  [SMALL_STATE(128)] = 1957,
  [SMALL_STATE(129)] = 1967,
  [SMALL_STATE(130)] = 1978,
  [SMALL_STATE(131)] = 1988,
  [SMALL_STATE(132)] = 1995,
  [SMALL_STATE(133)] = 2002,
  [SMALL_STATE(134)] = 2009,
  [SMALL_STATE(135)] = 2016,
  [SMALL_STATE(136)] = 2023,
  [SMALL_STATE(137)] = 2030,
  [SMALL_STATE(138)] = 2037,
  [SMALL_STATE(139)] = 2044,
  [SMALL_STATE(140)] = 2051,
  [SMALL_STATE(141)] = 2058,
  [SMALL_STATE(142)] = 2065,
  [SMALL_STATE(143)] = 2069,
  [SMALL_STATE(144)] = 2073,
  [SMALL_STATE(145)] = 2077,
  [SMALL_STATE(146)] = 2081,
  [SMALL_STATE(147)] = 2085,
  [SMALL_STATE(148)] = 2089,
  [SMALL_STATE(149)] = 2093,
  [SMALL_STATE(150)] = 2097,
  [SMALL_STATE(151)] = 2101,
  [SMALL_STATE(152)] = 2105,
  [SMALL_STATE(153)] = 2109,
  [SMALL_STATE(154)] = 2113,
  [SMALL_STATE(155)] = 2117,
  [SMALL_STATE(156)] = 2121,
  [SMALL_STATE(157)] = 2125,
  [SMALL_STATE(158)] = 2129,
  [SMALL_STATE(159)] = 2133,
  [SMALL_STATE(160)] = 2137,
  [SMALL_STATE(161)] = 2141,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_attr, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_entity, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_id, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_relative, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_geometry, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_absolute, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guideline_id, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__y, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__absolute, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xy, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relative, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 3, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgba, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2, .production_id = 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xy, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xy, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_geometry, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_string, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fontsize, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_absolute, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_relative, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_entity, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 6),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__save_options, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [536] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
