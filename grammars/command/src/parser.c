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
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 1
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_module = 4,
  anon_sym_name = 5,
  anon_sym_height = 6,
  anon_sym_width = 7,
  anon_sym_x = 8,
  anon_sym_y = 9,
  anon_sym_part = 10,
  anon_sym_AT = 11,
  aux_sym__absolute_attr_token1 = 12,
  anon_sym_left = 13,
  anon_sym_centre = 14,
  anon_sym_center = 15,
  anon_sym_right = 16,
  aux_sym__geometry_x_attr_token1 = 17,
  anon_sym_top = 18,
  anon_sym_middle = 19,
  anon_sym_bottom = 20,
  aux_sym__guide_attr_token1 = 21,
  anon_sym_decorate = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_with = 25,
  anon_sym_delete = 26,
  anon_sym_guide = 27,
  anon_sym_input = 28,
  aux_sym__input_id_token1 = 29,
  anon_sym_output = 30,
  anon_sym_parameter = 31,
  anon_sym_light = 32,
  anon_sym_widget = 33,
  anon_sym_label = 34,
  aux_sym__label_id_token1 = 35,
  anon_sym_decoration = 36,
  anon_sym_load = 37,
  anon_sym_project = 38,
  anon_sym_script = 39,
  anon_sym_save = 40,
  anon_sym_export = 41,
  anon_sym_timestamp = 42,
  anon_sym_COMMA = 43,
  anon_sym_gzip = 44,
  aux_sym_parameter_token1 = 45,
  sym_fontsize = 46,
  anon_sym_baseline = 47,
  anon_sym_scale = 48,
  aux_sym__scale_token1 = 49,
  anon_sym_stretch = 50,
  anon_sym_origin = 51,
  aux_sym_origin_token1 = 52,
  aux_sym__originx_token1 = 53,
  aux_sym__originy_token1 = 54,
  anon_sym_background = 55,
  anon_sym_none = 56,
  sym_rgb = 57,
  sym_rgba = 58,
  anon_sym_panel = 59,
  anon_sym_svg = 60,
  anon_sym_dark = 61,
  sym_height = 62,
  sym_width = 63,
  anon_sym_vertical = 64,
  anon_sym_horizontal = 65,
  aux_sym_offset_token1 = 66,
  anon_sym_DQUOTE = 67,
  aux_sym__string_token1 = 68,
  anon_sym_SQUOTE = 69,
  aux_sym__string_token2 = 70,
  aux_sym_absolute_token1 = 71,
  aux_sym_relative_token1 = 72,
  sym_command = 73,
  sym_new = 74,
  sym_set = 75,
  sym__module_attr = 76,
  sym__input_attr = 77,
  sym__x_attr = 78,
  sym__y_attr = 79,
  sym__absolute_attr = 80,
  sym__relative_attr = 81,
  sym__geometry_x_attr = 82,
  sym__geometry_y_attr = 83,
  sym__guide_attr = 84,
  sym_decorate = 85,
  sym_delete = 86,
  sym__guideline_id = 87,
  sym__input_id = 88,
  sym__output_id = 89,
  sym__parameter_id = 90,
  sym__light_id = 91,
  sym__widget_id = 92,
  sym__label_id = 93,
  sym__decoration_id = 94,
  sym__component_id = 95,
  sym_load = 96,
  sym_save = 97,
  sym_export = 98,
  sym_project = 99,
  sym_script = 100,
  sym__entity = 101,
  sym__input = 102,
  sym__output = 103,
  sym__parameter = 104,
  sym__light = 105,
  sym__widget = 106,
  sym_module = 107,
  sym_input = 108,
  sym_output = 109,
  sym_parameter = 110,
  sym_light = 111,
  sym_widget = 112,
  sym__component = 113,
  sym_label = 114,
  sym_font = 115,
  sym__align = 116,
  sym_halign = 117,
  sym_valign = 118,
  sym_colour = 119,
  sym_decoration = 120,
  sym__scale = 121,
  sym_stretch = 122,
  sym_origin = 123,
  sym__originx = 124,
  sym__originy = 125,
  sym_background = 126,
  sym_panel = 127,
  sym_svg = 128,
  sym_name = 129,
  sym_part = 130,
  sym_guide = 131,
  sym_identifier = 132,
  sym_vertical = 133,
  sym_horizontal = 134,
  sym_geometry = 135,
  sym_offset = 136,
  sym__offset = 137,
  sym_guideline = 138,
  sym__string = 139,
  sym_absolute = 140,
  sym_relative = 141,
  sym__decorate = 142,
  sym__relative = 143,
  sym_x = 144,
  sym_y = 145,
  aux_sym_command_repeat1 = 146,
  alias_sym_dy = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_set] = "set",
  [anon_sym_module] = "module",
  [anon_sym_name] = "name",
  [anon_sym_height] = "height",
  [anon_sym_width] = "width",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_part] = "part",
  [anon_sym_AT] = "@",
  [aux_sym__absolute_attr_token1] = "offset",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [aux_sym__geometry_x_attr_token1] = "offset",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_bottom] = "bottom",
  [aux_sym__guide_attr_token1] = "_guide_attr_token1",
  [anon_sym_decorate] = "decorate",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_with] = "with",
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [anon_sym_input] = "input",
  [aux_sym__input_id_token1] = "_input_id_token1",
  [anon_sym_output] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light] = "light",
  [anon_sym_widget] = "widget",
  [anon_sym_label] = "label",
  [aux_sym__label_id_token1] = "identifier",
  [anon_sym_decoration] = "decoration",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [aux_sym_parameter_token1] = "parameter_token1",
  [sym_fontsize] = "fontsize",
  [anon_sym_baseline] = "baseline",
  [anon_sym_scale] = "scale",
  [aux_sym__scale_token1] = "scale",
  [anon_sym_stretch] = "stretch",
  [anon_sym_origin] = "origin",
  [aux_sym_origin_token1] = "offset",
  [aux_sym__originx_token1] = "reference",
  [aux_sym__originy_token1] = "reference",
  [anon_sym_background] = "background",
  [anon_sym_none] = "none",
  [sym_rgb] = "rgb",
  [sym_rgba] = "rgba",
  [anon_sym_panel] = "panel",
  [anon_sym_svg] = "svg",
  [anon_sym_dark] = "dark",
  [sym_height] = "height",
  [sym_width] = "width",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [aux_sym_offset_token1] = "offset_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_token2] = "string",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_relative_token1] = "x",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__input_attr] = "_input_attr",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
  [sym__absolute_attr] = "_absolute_attr",
  [sym__relative_attr] = "_relative_attr",
  [sym__geometry_x_attr] = "_geometry_x_attr",
  [sym__geometry_y_attr] = "_geometry_y_attr",
  [sym__guide_attr] = "_guide_attr",
  [sym_decorate] = "decorate",
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
  [sym_export] = "export",
  [sym_project] = "project",
  [sym_script] = "script",
  [sym__entity] = "_entity",
  [sym__input] = "input",
  [sym__output] = "output",
  [sym__parameter] = "parameter",
  [sym__light] = "light",
  [sym__widget] = "widget",
  [sym_module] = "module",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_parameter] = "parameter",
  [sym_light] = "light",
  [sym_widget] = "widget",
  [sym__component] = "_component",
  [sym_label] = "label",
  [sym_font] = "font",
  [sym__align] = "_align",
  [sym_halign] = "halign",
  [sym_valign] = "valign",
  [sym_colour] = "colour",
  [sym_decoration] = "decoration",
  [sym__scale] = "_scale",
  [sym_stretch] = "stretch",
  [sym_origin] = "origin",
  [sym__originx] = "x",
  [sym__originy] = "y",
  [sym_background] = "background",
  [sym_panel] = "panel",
  [sym_svg] = "svg",
  [sym_name] = "name",
  [sym_part] = "part",
  [sym_guide] = "guide",
  [sym_identifier] = "identifier",
  [sym_vertical] = "vertical",
  [sym_horizontal] = "horizontal",
  [sym_geometry] = "geometry",
  [sym_offset] = "offset",
  [sym__offset] = "dx",
  [sym_guideline] = "guideline",
  [sym__string] = "_string",
  [sym_absolute] = "absolute",
  [sym_relative] = "relative",
  [sym__decorate] = "decorate",
  [sym__relative] = "_relative",
  [sym_x] = "x",
  [sym_y] = "y",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_dy] = "dy",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_part] = anon_sym_part,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__absolute_attr_token1] = sym_offset,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [aux_sym__geometry_x_attr_token1] = sym_offset,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_bottom] = anon_sym_bottom,
  [aux_sym__guide_attr_token1] = aux_sym__guide_attr_token1,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [anon_sym_input] = anon_sym_input,
  [aux_sym__input_id_token1] = aux_sym__input_id_token1,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_label] = anon_sym_label,
  [aux_sym__label_id_token1] = sym_identifier,
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [sym_fontsize] = sym_fontsize,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_scale] = anon_sym_scale,
  [aux_sym__scale_token1] = aux_sym__scale_token1,
  [anon_sym_stretch] = anon_sym_stretch,
  [anon_sym_origin] = anon_sym_origin,
  [aux_sym_origin_token1] = sym_offset,
  [aux_sym__originx_token1] = aux_sym__originx_token1,
  [aux_sym__originy_token1] = aux_sym__originx_token1,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_none] = anon_sym_none,
  [sym_rgb] = sym_rgb,
  [sym_rgba] = sym_rgba,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_svg] = anon_sym_svg,
  [anon_sym_dark] = anon_sym_dark,
  [sym_height] = sym_height,
  [sym_width] = sym_width,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [aux_sym_offset_token1] = aux_sym_offset_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_token2] = aux_sym__string_token1,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_relative_token1] = sym_x,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__input_attr] = sym__input_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__absolute_attr] = sym__absolute_attr,
  [sym__relative_attr] = sym__relative_attr,
  [sym__geometry_x_attr] = sym__geometry_x_attr,
  [sym__geometry_y_attr] = sym__geometry_y_attr,
  [sym__guide_attr] = sym__guide_attr,
  [sym_decorate] = sym_decorate,
  [sym_delete] = sym_delete,
  [sym__guideline_id] = sym_guide,
  [sym__input_id] = sym_input,
  [sym__output_id] = sym_output,
  [sym__parameter_id] = sym_parameter,
  [sym__light_id] = sym_light,
  [sym__widget_id] = sym_widget,
  [sym__label_id] = sym_label,
  [sym__decoration_id] = sym_decoration,
  [sym__component_id] = sym__component_id,
  [sym_load] = sym_load,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
  [sym_project] = sym_project,
  [sym_script] = sym_script,
  [sym__entity] = sym__entity,
  [sym__input] = sym_input,
  [sym__output] = sym_output,
  [sym__parameter] = sym_parameter,
  [sym__light] = sym_light,
  [sym__widget] = sym_widget,
  [sym_module] = sym_module,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_parameter] = sym_parameter,
  [sym_light] = sym_light,
  [sym_widget] = sym_widget,
  [sym__component] = sym__component,
  [sym_label] = sym_label,
  [sym_font] = sym_font,
  [sym__align] = sym__align,
  [sym_halign] = sym_halign,
  [sym_valign] = sym_valign,
  [sym_colour] = sym_colour,
  [sym_decoration] = sym_decoration,
  [sym__scale] = sym__scale,
  [sym_stretch] = sym_stretch,
  [sym_origin] = sym_origin,
  [sym__originx] = sym_x,
  [sym__originy] = sym_y,
  [sym_background] = sym_background,
  [sym_panel] = sym_panel,
  [sym_svg] = sym_svg,
  [sym_name] = sym_name,
  [sym_part] = sym_part,
  [sym_guide] = sym_guide,
  [sym_identifier] = sym_identifier,
  [sym_vertical] = sym_vertical,
  [sym_horizontal] = sym_horizontal,
  [sym_geometry] = sym_geometry,
  [sym_offset] = sym_offset,
  [sym__offset] = sym__offset,
  [sym_guideline] = sym_guideline,
  [sym__string] = sym__string,
  [sym_absolute] = sym_absolute,
  [sym_relative] = sym_relative,
  [sym__decorate] = sym_decorate,
  [sym__relative] = sym__relative,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [alias_sym_dy] = alias_sym_dy,
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
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
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
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_part] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__absolute_attr_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym__geometry_x_attr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_middle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__guide_attr_token1] = {
    .visible = false,
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
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__input_id_token1] = {
    .visible = false,
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_id_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_export] = {
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
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_fontsize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_baseline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__scale_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_stretch] = {
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
  [aux_sym__originx_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__originy_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
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
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_offset_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_absolute_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_relative_token1] = {
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
  [sym__x_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__y_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__geometry_x_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__geometry_y_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__guide_attr] = {
    .visible = false,
    .named = true,
  },
  [sym_decorate] = {
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
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym__entity] = {
    .visible = false,
    .named = true,
  },
  [sym__input] = {
    .visible = true,
    .named = true,
  },
  [sym__output] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__light] = {
    .visible = true,
    .named = true,
  },
  [sym__widget] = {
    .visible = true,
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym__align] = {
    .visible = false,
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
  [sym_decoration] = {
    .visible = true,
    .named = true,
  },
  [sym__scale] = {
    .visible = false,
    .named = true,
  },
  [sym_stretch] = {
    .visible = true,
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
  [sym_background] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
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
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__offset] = {
    .visible = true,
    .named = true,
  },
  [sym_guideline] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
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
  [sym__decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__relative] = {
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
  [alias_sym_dy] = {
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
    [0] = aux_sym__originx_token1,
  },
  [4] = {
    [1] = sym_identifier,
  },
  [5] = {
    [1] = aux_sym__originx_token1,
  },
  [6] = {
    [1] = sym_light,
  },
  [7] = {
    [1] = sym_absolute,
  },
  [8] = {
    [0] = sym_absolute,
  },
  [9] = {
    [2] = sym_y,
  },
  [10] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [11] = {
    [3] = sym_y,
  },
  [12] = {
    [2] = alias_sym_dy,
  },
  [13] = {
    [1] = sym_input,
  },
  [14] = {
    [1] = sym_output,
  },
  [15] = {
    [1] = sym_parameter,
  },
  [16] = {
    [1] = sym_widget,
  },
  [17] = {
    [1] = sym_label,
  },
  [18] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    aux_sym__originx_token1,
  sym__offset, 2,
    sym__offset,
    alias_sym_dy,
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
  [42] = 9,
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
  [55] = 16,
  [56] = 56,
  [57] = 57,
  [58] = 20,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 12,
  [67] = 67,
  [68] = 20,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 11,
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
  [113] = 46,
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
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 90,
  [145] = 29,
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
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 238,
  [266] = 246,
  [267] = 264,
  [268] = 214,
  [269] = 234,
  [270] = 233,
  [271] = 207,
  [272] = 236,
  [273] = 213,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(494);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(497);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(379);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(297);
      if (lookahead == 'y') ADVANCE(298);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(494);
      if (lookahead == '\'') ADVANCE(497);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == 'b') ADVANCE(358);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(487);
      if (lookahead == 'U') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '5') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'H') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'H') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'H') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '8') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == 'H') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(163);
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 24:
      if (lookahead == ';') ADVANCE(288);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(358);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 26:
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(222);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(484);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(380);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(472);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 136:
      if (lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(485);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(474);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(500);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(501);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(462);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == 'z') ADVANCE(127);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 255:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 256:
      if (lookahead == 'w') ADVANCE(289);
      END_STATE();
    case 257:
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 258:
      if (lookahead == 'z') ADVANCE(187);
      END_STATE();
    case 259:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(481);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 281:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 282:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 283:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == ')') ADVANCE(379);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'm') ADVANCE(411);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 't') ADVANCE(423);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 284:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 285:
      if (eof) ADVANCE(287);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(379);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == 'w') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 286:
      if (eof) ADVANCE(287);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(163);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 283},
  [3] = {.lex_state = 283},
  [4] = {.lex_state = 285},
  [5] = {.lex_state = 285},
  [6] = {.lex_state = 285},
  [7] = {.lex_state = 285},
  [8] = {.lex_state = 285},
  [9] = {.lex_state = 283},
  [10] = {.lex_state = 285},
  [11] = {.lex_state = 283},
  [12] = {.lex_state = 283},
  [13] = {.lex_state = 283},
  [14] = {.lex_state = 283},
  [15] = {.lex_state = 283},
  [16] = {.lex_state = 283},
  [17] = {.lex_state = 283},
  [18] = {.lex_state = 283},
  [19] = {.lex_state = 283},
  [20] = {.lex_state = 283},
  [21] = {.lex_state = 285},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 285},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 286},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 285},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 285},
  [34] = {.lex_state = 285},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 284},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 285},
  [48] = {.lex_state = 285},
  [49] = {.lex_state = 284},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 284},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 284},
  [56] = {.lex_state = 286},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 284},
  [59] = {.lex_state = 286},
  [60] = {.lex_state = 286},
  [61] = {.lex_state = 286},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 284},
  [67] = {.lex_state = 286},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 284},
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
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 286},
  [147] = {.lex_state = 25},
  [148] = {.lex_state = 286},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 285},
  [152] = {.lex_state = 285},
  [153] = {.lex_state = 283},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 283},
  [158] = {.lex_state = 283},
  [159] = {.lex_state = 283},
  [160] = {.lex_state = 283},
  [161] = {.lex_state = 283},
  [162] = {.lex_state = 283},
  [163] = {.lex_state = 283},
  [164] = {.lex_state = 283},
  [165] = {.lex_state = 283},
  [166] = {.lex_state = 283},
  [167] = {.lex_state = 283},
  [168] = {.lex_state = 283},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 283},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 263},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 285},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 286},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 286},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 283},
  [196] = {.lex_state = 283},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 285},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 283},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 283},
  [228] = {.lex_state = 285},
  [229] = {.lex_state = 285},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 498},
  [234] = {.lex_state = 495},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 283},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 286},
  [244] = {.lex_state = 286},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 283},
  [253] = {.lex_state = 286},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 495},
  [270] = {.lex_state = 498},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_part] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__absolute_attr_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [aux_sym__geometry_x_attr_token1] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_widget] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [sym_fontsize] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [aux_sym__scale_token1] = ACTIONS(1),
    [anon_sym_stretch] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [aux_sym_origin_token1] = ACTIONS(1),
    [aux_sym__originx_token1] = ACTIONS(1),
    [aux_sym__originy_token1] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [sym_rgb] = ACTIONS(1),
    [sym_rgba] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_svg] = ACTIONS(1),
    [anon_sym_dark] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [aux_sym_offset_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(261),
    [sym_new] = STATE(24),
    [sym_set] = STATE(24),
    [sym_decorate] = STATE(24),
    [sym_delete] = STATE(24),
    [sym_load] = STATE(24),
    [sym_save] = STATE(24),
    [sym_export] = STATE(24),
    [aux_sym_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_decorate] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(13),
    [anon_sym_load] = ACTIONS(15),
    [anon_sym_save] = ACTIONS(17),
    [anon_sym_export] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(29), 1,
      aux_sym__input_id_token1,
    ACTIONS(31), 1,
      sym_fontsize,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(4), 1,
      sym_font,
    STATE(31), 1,
      sym_valign,
    STATE(36), 1,
      sym__align,
    STATE(43), 1,
      sym_halign,
    STATE(84), 1,
      sym_colour,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(27), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(23), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [53] = 13,
    ACTIONS(29), 1,
      aux_sym__input_id_token1,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    ACTIONS(41), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(31), 1,
      sym_valign,
    STATE(40), 1,
      sym__align,
    STATE(43), 1,
      sym_halign,
    STATE(124), 1,
      sym_colour,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(27), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(39), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [106] = 10,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    ACTIONS(49), 1,
      sym_fontsize,
    STATE(31), 1,
      sym_valign,
    STATE(37), 1,
      sym__align,
    STATE(43), 1,
      sym_halign,
    STATE(102), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [151] = 10,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    ACTIONS(53), 1,
      sym_fontsize,
    STATE(30), 1,
      sym__align,
    STATE(31), 1,
      sym_valign,
    STATE(43), 1,
      sym_halign,
    STATE(101), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [196] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(31), 1,
      sym_valign,
    STATE(36), 1,
      sym__align,
    STATE(43), 1,
      sym_halign,
    STATE(84), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [238] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(30), 1,
      sym__align,
    STATE(31), 1,
      sym_valign,
    STATE(43), 1,
      sym_halign,
    STATE(101), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [280] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(31), 1,
      sym_valign,
    STATE(43), 1,
      sym_halign,
    STATE(44), 1,
      sym__align,
    STATE(125), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [322] = 4,
    ACTIONS(61), 1,
      aux_sym_offset_token1,
    STATE(16), 1,
      sym_offset,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(59), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [354] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(31), 1,
      sym_valign,
    STATE(37), 1,
      sym__align,
    STATE(43), 1,
      sym_halign,
    STATE(102), 1,
      sym_colour,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [396] = 2,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(65), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [422] = 2,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(69), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [448] = 2,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(73), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [474] = 2,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(77), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [500] = 2,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(81), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [526] = 2,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(85), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [552] = 2,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(89), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [578] = 2,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(93), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [604] = 2,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(97), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [630] = 2,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(101), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_baseline,
      sym_rgb,
  [656] = 2,
    ACTIONS(105), 1,
      sym_rgb,
    ACTIONS(103), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_fontsize,
      anon_sym_baseline,
      sym_rgba,
  [681] = 8,
    ACTIONS(109), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(111), 1,
      anon_sym_vertical,
    ACTIONS(113), 1,
      anon_sym_horizontal,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    STATE(109), 1,
      sym_offset,
    STATE(196), 1,
      sym_identifier,
    STATE(108), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(107), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [715] = 9,
    ACTIONS(117), 1,
      anon_sym_module,
    ACTIONS(119), 1,
      anon_sym_guide,
    ACTIONS(121), 1,
      anon_sym_input,
    ACTIONS(123), 1,
      anon_sym_output,
    ACTIONS(125), 1,
      anon_sym_light,
    ACTIONS(127), 1,
      anon_sym_widget,
    ACTIONS(129), 1,
      anon_sym_label,
    ACTIONS(131), 1,
      aux_sym_parameter_token1,
    STATE(126), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [751] = 10,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_decorate,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(15), 1,
      anon_sym_load,
    ACTIONS(17), 1,
      anon_sym_save,
    ACTIONS(19), 1,
      anon_sym_export,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_comment,
    STATE(25), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [789] = 10,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_new,
    ACTIONS(145), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_decorate,
    ACTIONS(151), 1,
      anon_sym_delete,
    ACTIONS(154), 1,
      anon_sym_load,
    ACTIONS(157), 1,
      anon_sym_save,
    ACTIONS(160), 1,
      anon_sym_export,
    STATE(25), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [827] = 9,
    ACTIONS(163), 1,
      anon_sym_guide,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(167), 1,
      anon_sym_output,
    ACTIONS(169), 1,
      anon_sym_parameter,
    ACTIONS(171), 1,
      anon_sym_light,
    ACTIONS(173), 1,
      anon_sym_widget,
    ACTIONS(175), 1,
      anon_sym_label,
    ACTIONS(177), 1,
      anon_sym_decoration,
    STATE(98), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [862] = 6,
    ACTIONS(109), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(111), 1,
      anon_sym_vertical,
    ACTIONS(113), 1,
      anon_sym_horizontal,
    STATE(22), 1,
      sym_identifier,
    STATE(130), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(107), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [890] = 1,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_x,
      anon_sym_y,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [907] = 2,
    ACTIONS(183), 1,
      sym_width,
    ACTIONS(181), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
      aux_sym_offset_token1,
  [926] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(84), 1,
      sym_colour,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [947] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      sym_rgb,
    ACTIONS(185), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [966] = 2,
    ACTIONS(193), 1,
      sym_rgb,
    ACTIONS(191), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [983] = 3,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    STATE(63), 1,
      sym_offset,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1002] = 3,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    STATE(65), 1,
      sym_offset,
    ACTIONS(197), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1021] = 6,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      aux_sym__absolute_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    STATE(128), 1,
      sym__x_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(132), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1046] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(102), 1,
      sym_colour,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1067] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(125), 1,
      sym_colour,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1088] = 2,
    ACTIONS(209), 1,
      sym_rgb,
    ACTIONS(207), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [1105] = 6,
    ACTIONS(211), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      aux_sym_relative_token1,
    STATE(247), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(213), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1130] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(101), 1,
      sym_colour,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1151] = 4,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym__scale,
    STATE(81), 1,
      sym_stretch,
    ACTIONS(219), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1172] = 4,
    ACTIONS(223), 1,
      aux_sym_offset_token1,
    STATE(55), 1,
      sym_offset,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(59), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1193] = 3,
    ACTIONS(189), 1,
      sym_rgb,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(185), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1212] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(127), 1,
      sym_colour,
    ACTIONS(227), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1233] = 3,
    ACTIONS(231), 1,
      anon_sym_timestamp,
    ACTIONS(233), 1,
      anon_sym_gzip,
    ACTIONS(229), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1251] = 2,
    ACTIONS(237), 1,
      aux_sym_offset_token1,
    ACTIONS(235), 10,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
      anon_sym_vertical,
      anon_sym_horizontal,
  [1267] = 3,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    STATE(100), 1,
      sym_offset,
    ACTIONS(239), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1285] = 3,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    STATE(142), 1,
      sym_offset,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1303] = 4,
    ACTIONS(247), 1,
      aux_sym__input_id_token1,
    STATE(117), 1,
      sym_part,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(245), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1323] = 2,
    ACTIONS(251), 1,
      sym_rgb,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1339] = 4,
    ACTIONS(247), 1,
      aux_sym__input_id_token1,
    STATE(86), 1,
      sym_part,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(255), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1359] = 3,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_stretch,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1377] = 6,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(261), 1,
      aux_sym__absolute_attr_token1,
    STATE(128), 1,
      sym__y_attr,
    ACTIONS(263), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(134), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1401] = 3,
    ACTIONS(267), 1,
      anon_sym_light,
    ACTIONS(269), 1,
      anon_sym_dark,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1419] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(85), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1434] = 6,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(167), 1,
      anon_sym_output,
    ACTIONS(169), 1,
      anon_sym_parameter,
    ACTIONS(171), 1,
      anon_sym_light,
    ACTIONS(173), 1,
      anon_sym_widget,
    STATE(262), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1457] = 2,
    ACTIONS(273), 1,
      anon_sym_timestamp,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1472] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(101), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1487] = 2,
    ACTIONS(277), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1502] = 2,
    ACTIONS(281), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(279), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1517] = 2,
    ACTIONS(285), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1532] = 1,
    ACTIONS(287), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1545] = 1,
    ACTIONS(289), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1558] = 5,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      aux_sym_relative_token1,
    STATE(237), 1,
      sym_x,
    STATE(49), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(213), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1579] = 1,
    ACTIONS(295), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1592] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(69), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1607] = 6,
    ACTIONS(297), 1,
      anon_sym_input,
    ACTIONS(299), 1,
      anon_sym_output,
    ACTIONS(301), 1,
      anon_sym_parameter,
    ACTIONS(303), 1,
      anon_sym_light,
    ACTIONS(305), 1,
      anon_sym_widget,
    STATE(210), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1630] = 1,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1643] = 2,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1658] = 1,
    ACTIONS(311), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1671] = 1,
    ACTIONS(313), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1684] = 1,
    ACTIONS(315), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1697] = 2,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1712] = 2,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1727] = 1,
    ACTIONS(323), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1740] = 2,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1755] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(65), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1770] = 2,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1785] = 1,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1797] = 1,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1809] = 1,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1821] = 1,
    ACTIONS(335), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1833] = 1,
    ACTIONS(337), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1845] = 1,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1857] = 1,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1869] = 1,
    ACTIONS(339), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1881] = 1,
    ACTIONS(341), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1893] = 1,
    ACTIONS(343), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1905] = 6,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(345), 1,
      anon_sym_module,
    ACTIONS(347), 1,
      anon_sym_origin,
    ACTIONS(349), 1,
      anon_sym_background,
    STATE(155), 1,
      sym__input_id,
    STATE(105), 4,
      sym__module_attr,
      sym__input_attr,
      sym_origin,
      sym_background,
  [1927] = 1,
    ACTIONS(351), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1939] = 1,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1951] = 1,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1963] = 1,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1975] = 1,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1987] = 1,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1999] = 1,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2011] = 1,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2023] = 1,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2035] = 1,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2047] = 1,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2059] = 1,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2071] = 1,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2083] = 1,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2095] = 1,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2107] = 1,
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2119] = 1,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2131] = 1,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2143] = 1,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2155] = 1,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2167] = 1,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2179] = 1,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2191] = 1,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2203] = 1,
    ACTIONS(237), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2215] = 1,
    ACTIONS(393), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2227] = 1,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2239] = 1,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2251] = 1,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2263] = 1,
    ACTIONS(401), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2275] = 1,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2287] = 1,
    ACTIONS(405), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2299] = 1,
    ACTIONS(407), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2311] = 1,
    ACTIONS(409), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2323] = 1,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2335] = 1,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2347] = 1,
    ACTIONS(227), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2359] = 1,
    ACTIONS(413), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2371] = 1,
    ACTIONS(415), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2383] = 1,
    ACTIONS(417), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2395] = 1,
    ACTIONS(419), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2407] = 1,
    ACTIONS(421), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2419] = 1,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2431] = 1,
    ACTIONS(425), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2443] = 6,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(431), 1,
      anon_sym_origin,
    ACTIONS(433), 1,
      aux_sym_origin_token1,
    STATE(103), 1,
      sym_offset,
    ACTIONS(429), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2465] = 1,
    ACTIONS(435), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2477] = 1,
    ACTIONS(437), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2489] = 1,
    ACTIONS(439), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2501] = 1,
    ACTIONS(441), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2513] = 1,
    ACTIONS(443), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2525] = 1,
    ACTIONS(445), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2537] = 1,
    ACTIONS(447), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2549] = 1,
    ACTIONS(449), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2561] = 1,
    ACTIONS(451), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2573] = 6,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    ACTIONS(453), 1,
      anon_sym_AT,
    ACTIONS(455), 1,
      anon_sym_origin,
    ACTIONS(457), 1,
      aux_sym_origin_token1,
    STATE(106), 1,
      sym_offset,
    ACTIONS(429), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2594] = 2,
    ACTIONS(351), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(459), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2607] = 2,
    ACTIONS(181), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(183), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2619] = 6,
    ACTIONS(461), 1,
      anon_sym_input,
    ACTIONS(463), 1,
      anon_sym_output,
    ACTIONS(465), 1,
      anon_sym_parameter,
    ACTIONS(467), 1,
      anon_sym_light,
    ACTIONS(469), 1,
      anon_sym_widget,
    ACTIONS(471), 1,
      anon_sym_label,
  [2638] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(473), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2648] = 5,
    ACTIONS(475), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      aux_sym__originx_token1,
    ACTIONS(479), 1,
      aux_sym__originy_token1,
    STATE(225), 1,
      sym__originy,
    STATE(226), 1,
      sym__originx,
  [2664] = 2,
    STATE(51), 1,
      sym_y,
    ACTIONS(481), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2674] = 5,
    ACTIONS(483), 1,
      aux_sym__input_id_token1,
    ACTIONS(485), 1,
      anon_sym_none,
    ACTIONS(487), 1,
      sym_rgb,
    ACTIONS(489), 1,
      sym_rgba,
    STATE(85), 1,
      sym_name,
  [2690] = 2,
    STATE(50), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2700] = 2,
    STATE(50), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2710] = 4,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(232), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2723] = 4,
    ACTIONS(495), 1,
      aux_sym__label_id_token1,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym__string,
  [2736] = 4,
    ACTIONS(501), 1,
      anon_sym_name,
    ACTIONS(503), 1,
      anon_sym_x,
    ACTIONS(505), 1,
      anon_sym_y,
    ACTIONS(507), 1,
      anon_sym_part,
  [2749] = 3,
    ACTIONS(509), 1,
      anon_sym_project,
    ACTIONS(511), 1,
      anon_sym_script,
    STATE(107), 2,
      sym_project,
      sym_script,
  [2760] = 4,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2773] = 4,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2786] = 4,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2799] = 4,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2812] = 3,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    ACTIONS(521), 1,
      aux_sym_origin_token1,
    STATE(118), 1,
      sym_offset,
  [2822] = 3,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(222), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2832] = 3,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(221), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2842] = 3,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(220), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2852] = 3,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(219), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2862] = 3,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(218), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2872] = 3,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      sym_offset,
  [2882] = 3,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    ACTIONS(525), 1,
      aux_sym_origin_token1,
    STATE(131), 1,
      sym_offset,
  [2892] = 3,
    ACTIONS(527), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(129), 1,
      sym__component,
  [2902] = 3,
    ACTIONS(527), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(123), 1,
      sym__component,
  [2912] = 3,
    ACTIONS(527), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(122), 1,
      sym__component,
  [2922] = 3,
    ACTIONS(527), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(116), 1,
      sym__component,
  [2932] = 3,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym__string,
  [2942] = 3,
    ACTIONS(527), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(82), 1,
      sym__component,
  [2952] = 3,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(41), 1,
      sym_name,
    STATE(87), 1,
      sym_decoration,
  [2962] = 3,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(537), 1,
      aux_sym__label_id_token1,
    STATE(198), 1,
      sym__component_id,
  [2972] = 3,
    ACTIONS(539), 1,
      anon_sym_name,
    ACTIONS(541), 1,
      anon_sym_height,
    ACTIONS(543), 1,
      anon_sym_width,
  [2982] = 3,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(223), 1,
      sym__relative,
    STATE(235), 1,
      sym__offset,
  [2992] = 2,
    ACTIONS(545), 1,
      anon_sym_panel,
    STATE(94), 1,
      sym_panel,
  [2999] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(157), 1,
      sym_name,
  [3006] = 2,
    ACTIONS(547), 1,
      aux_sym__guide_attr_token1,
    STATE(91), 1,
      sym_identifier,
  [3013] = 2,
    ACTIONS(549), 1,
      anon_sym_svg,
    STATE(97), 1,
      sym_svg,
  [3020] = 2,
    ACTIONS(551), 1,
      sym_height,
    ACTIONS(553), 1,
      sym_width,
  [3027] = 1,
    ACTIONS(555), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3032] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(120), 1,
      sym_name,
  [3039] = 2,
    ACTIONS(557), 1,
      anon_sym_scale,
    ACTIONS(559), 1,
      anon_sym_stretch,
  [3046] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(128), 1,
      sym_name,
  [3053] = 2,
    ACTIONS(561), 1,
      aux_sym__input_id_token1,
    STATE(128), 1,
      sym_part,
  [3060] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(153), 1,
      sym_name,
  [3067] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(160), 1,
      sym_name,
  [3074] = 2,
    ACTIONS(479), 1,
      aux_sym__originy_token1,
    STATE(119), 1,
      sym__originy,
  [3081] = 2,
    ACTIONS(563), 1,
      anon_sym_project,
    ACTIONS(565), 1,
      anon_sym_script,
  [3088] = 2,
    ACTIONS(477), 1,
      aux_sym__originx_token1,
    STATE(119), 1,
      sym__originx,
  [3095] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(158), 1,
      sym_name,
  [3102] = 2,
    ACTIONS(493), 1,
      aux_sym_offset_token1,
    STATE(230), 1,
      sym__offset,
  [3109] = 2,
    ACTIONS(115), 1,
      aux_sym_offset_token1,
    STATE(109), 1,
      sym_offset,
  [3116] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(183), 1,
      sym_name,
  [3123] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(137), 1,
      sym_name,
  [3130] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(178), 1,
      sym_name,
  [3137] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(162), 1,
      sym_name,
  [3144] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(163), 1,
      sym_name,
  [3151] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(164), 1,
      sym_name,
  [3158] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(165), 1,
      sym_name,
  [3165] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(159), 1,
      sym_name,
  [3172] = 2,
    ACTIONS(533), 1,
      aux_sym__input_id_token1,
    STATE(166), 1,
      sym_name,
  [3179] = 2,
    ACTIONS(567), 1,
      sym_rgb,
    ACTIONS(569), 1,
      sym_rgba,
  [3186] = 1,
    ACTIONS(571), 1,
      anon_sym_COMMA,
  [3190] = 1,
    ACTIONS(573), 1,
      aux_sym__input_id_token1,
  [3194] = 1,
    ACTIONS(575), 1,
      sym_width,
  [3198] = 1,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [3202] = 1,
    ACTIONS(579), 1,
      anon_sym_COMMA,
  [3206] = 1,
    ACTIONS(581), 1,
      aux_sym_origin_token1,
  [3210] = 1,
    ACTIONS(583), 1,
      aux_sym_absolute_token1,
  [3214] = 1,
    ACTIONS(585), 1,
      aux_sym_absolute_token1,
  [3218] = 1,
    ACTIONS(587), 1,
      aux_sym__input_id_token1,
  [3222] = 1,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [3226] = 1,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [3230] = 1,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [3234] = 1,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [3238] = 1,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [3242] = 1,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [3246] = 1,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [3250] = 1,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [3254] = 1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [3258] = 1,
    ACTIONS(607), 1,
      anon_sym_COMMA,
  [3262] = 1,
    ACTIONS(609), 1,
      anon_sym_COMMA,
  [3266] = 1,
    ACTIONS(611), 1,
      aux_sym_origin_token1,
  [3270] = 1,
    ACTIONS(613), 1,
      sym_width,
  [3274] = 1,
    ACTIONS(613), 1,
      sym_height,
  [3278] = 1,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
  [3282] = 1,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [3286] = 1,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [3290] = 1,
    ACTIONS(621), 1,
      aux_sym__string_token2,
  [3294] = 1,
    ACTIONS(623), 1,
      aux_sym__string_token1,
  [3298] = 1,
    ACTIONS(625), 1,
      anon_sym_COMMA,
  [3302] = 1,
    ACTIONS(627), 1,
      anon_sym_COMMA,
  [3306] = 1,
    ACTIONS(629), 1,
      anon_sym_COMMA,
  [3310] = 1,
    ACTIONS(631), 1,
      anon_sym_DQUOTE,
  [3314] = 1,
    ACTIONS(633), 1,
      aux_sym__input_id_token1,
  [3318] = 1,
    ACTIONS(635), 1,
      aux_sym_origin_token1,
  [3322] = 1,
    ACTIONS(637), 1,
      aux_sym__input_id_token1,
  [3326] = 1,
    ACTIONS(639), 1,
      aux_sym__input_id_token1,
  [3330] = 1,
    ACTIONS(641), 1,
      aux_sym__scale_token1,
  [3334] = 1,
    ACTIONS(643), 1,
      aux_sym__scale_token1,
  [3338] = 1,
    ACTIONS(559), 1,
      anon_sym_stretch,
  [3342] = 1,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
  [3346] = 1,
    ACTIONS(645), 1,
      anon_sym_COMMA,
  [3350] = 1,
    ACTIONS(647), 1,
      aux_sym__input_id_token1,
  [3354] = 1,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [3358] = 1,
    ACTIONS(651), 1,
      anon_sym_COMMA,
  [3362] = 1,
    ACTIONS(653), 1,
      anon_sym_COMMA,
  [3366] = 1,
    ACTIONS(655), 1,
      aux_sym_origin_token1,
  [3370] = 1,
    ACTIONS(657), 1,
      aux_sym__scale_token1,
  [3374] = 1,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [3378] = 1,
    ACTIONS(661), 1,
      sym_rgb,
  [3382] = 1,
    ACTIONS(661), 1,
      sym_rgba,
  [3386] = 1,
    ACTIONS(663), 1,
      aux_sym__absolute_attr_token1,
  [3390] = 1,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
  [3394] = 1,
    ACTIONS(667), 1,
      anon_sym_timestamp,
  [3398] = 1,
    ACTIONS(667), 1,
      anon_sym_gzip,
  [3402] = 1,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
  [3406] = 1,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [3410] = 1,
    ACTIONS(673), 1,
      anon_sym_with,
  [3414] = 1,
    ACTIONS(675), 1,
      aux_sym_relative_token1,
  [3418] = 1,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
  [3422] = 1,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
  [3426] = 1,
    ACTIONS(679), 1,
      aux_sym_relative_token1,
  [3430] = 1,
    ACTIONS(681), 1,
      aux_sym_absolute_token1,
  [3434] = 1,
    ACTIONS(683), 1,
      aux_sym__string_token1,
  [3438] = 1,
    ACTIONS(685), 1,
      aux_sym__string_token2,
  [3442] = 1,
    ACTIONS(687), 1,
      anon_sym_COMMA,
  [3446] = 1,
    ACTIONS(689), 1,
      anon_sym_COMMA,
  [3450] = 1,
    ACTIONS(691), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 322,
  [SMALL_STATE(10)] = 354,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 448,
  [SMALL_STATE(14)] = 474,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 526,
  [SMALL_STATE(17)] = 552,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 630,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 715,
  [SMALL_STATE(24)] = 751,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 890,
  [SMALL_STATE(29)] = 907,
  [SMALL_STATE(30)] = 926,
  [SMALL_STATE(31)] = 947,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 983,
  [SMALL_STATE(34)] = 1002,
  [SMALL_STATE(35)] = 1021,
  [SMALL_STATE(36)] = 1046,
  [SMALL_STATE(37)] = 1067,
  [SMALL_STATE(38)] = 1088,
  [SMALL_STATE(39)] = 1105,
  [SMALL_STATE(40)] = 1130,
  [SMALL_STATE(41)] = 1151,
  [SMALL_STATE(42)] = 1172,
  [SMALL_STATE(43)] = 1193,
  [SMALL_STATE(44)] = 1212,
  [SMALL_STATE(45)] = 1233,
  [SMALL_STATE(46)] = 1251,
  [SMALL_STATE(47)] = 1267,
  [SMALL_STATE(48)] = 1285,
  [SMALL_STATE(49)] = 1303,
  [SMALL_STATE(50)] = 1323,
  [SMALL_STATE(51)] = 1339,
  [SMALL_STATE(52)] = 1359,
  [SMALL_STATE(53)] = 1377,
  [SMALL_STATE(54)] = 1401,
  [SMALL_STATE(55)] = 1419,
  [SMALL_STATE(56)] = 1434,
  [SMALL_STATE(57)] = 1457,
  [SMALL_STATE(58)] = 1472,
  [SMALL_STATE(59)] = 1487,
  [SMALL_STATE(60)] = 1502,
  [SMALL_STATE(61)] = 1517,
  [SMALL_STATE(62)] = 1532,
  [SMALL_STATE(63)] = 1545,
  [SMALL_STATE(64)] = 1558,
  [SMALL_STATE(65)] = 1579,
  [SMALL_STATE(66)] = 1592,
  [SMALL_STATE(67)] = 1607,
  [SMALL_STATE(68)] = 1630,
  [SMALL_STATE(69)] = 1643,
  [SMALL_STATE(70)] = 1658,
  [SMALL_STATE(71)] = 1671,
  [SMALL_STATE(72)] = 1684,
  [SMALL_STATE(73)] = 1697,
  [SMALL_STATE(74)] = 1712,
  [SMALL_STATE(75)] = 1727,
  [SMALL_STATE(76)] = 1740,
  [SMALL_STATE(77)] = 1755,
  [SMALL_STATE(78)] = 1770,
  [SMALL_STATE(79)] = 1785,
  [SMALL_STATE(80)] = 1797,
  [SMALL_STATE(81)] = 1809,
  [SMALL_STATE(82)] = 1821,
  [SMALL_STATE(83)] = 1833,
  [SMALL_STATE(84)] = 1845,
  [SMALL_STATE(85)] = 1857,
  [SMALL_STATE(86)] = 1869,
  [SMALL_STATE(87)] = 1881,
  [SMALL_STATE(88)] = 1893,
  [SMALL_STATE(89)] = 1905,
  [SMALL_STATE(90)] = 1927,
  [SMALL_STATE(91)] = 1939,
  [SMALL_STATE(92)] = 1951,
  [SMALL_STATE(93)] = 1963,
  [SMALL_STATE(94)] = 1975,
  [SMALL_STATE(95)] = 1987,
  [SMALL_STATE(96)] = 1999,
  [SMALL_STATE(97)] = 2011,
  [SMALL_STATE(98)] = 2023,
  [SMALL_STATE(99)] = 2035,
  [SMALL_STATE(100)] = 2047,
  [SMALL_STATE(101)] = 2059,
  [SMALL_STATE(102)] = 2071,
  [SMALL_STATE(103)] = 2083,
  [SMALL_STATE(104)] = 2095,
  [SMALL_STATE(105)] = 2107,
  [SMALL_STATE(106)] = 2119,
  [SMALL_STATE(107)] = 2131,
  [SMALL_STATE(108)] = 2143,
  [SMALL_STATE(109)] = 2155,
  [SMALL_STATE(110)] = 2167,
  [SMALL_STATE(111)] = 2179,
  [SMALL_STATE(112)] = 2191,
  [SMALL_STATE(113)] = 2203,
  [SMALL_STATE(114)] = 2215,
  [SMALL_STATE(115)] = 2227,
  [SMALL_STATE(116)] = 2239,
  [SMALL_STATE(117)] = 2251,
  [SMALL_STATE(118)] = 2263,
  [SMALL_STATE(119)] = 2275,
  [SMALL_STATE(120)] = 2287,
  [SMALL_STATE(121)] = 2299,
  [SMALL_STATE(122)] = 2311,
  [SMALL_STATE(123)] = 2323,
  [SMALL_STATE(124)] = 2335,
  [SMALL_STATE(125)] = 2347,
  [SMALL_STATE(126)] = 2359,
  [SMALL_STATE(127)] = 2371,
  [SMALL_STATE(128)] = 2383,
  [SMALL_STATE(129)] = 2395,
  [SMALL_STATE(130)] = 2407,
  [SMALL_STATE(131)] = 2419,
  [SMALL_STATE(132)] = 2431,
  [SMALL_STATE(133)] = 2443,
  [SMALL_STATE(134)] = 2465,
  [SMALL_STATE(135)] = 2477,
  [SMALL_STATE(136)] = 2489,
  [SMALL_STATE(137)] = 2501,
  [SMALL_STATE(138)] = 2513,
  [SMALL_STATE(139)] = 2525,
  [SMALL_STATE(140)] = 2537,
  [SMALL_STATE(141)] = 2549,
  [SMALL_STATE(142)] = 2561,
  [SMALL_STATE(143)] = 2573,
  [SMALL_STATE(144)] = 2594,
  [SMALL_STATE(145)] = 2607,
  [SMALL_STATE(146)] = 2619,
  [SMALL_STATE(147)] = 2638,
  [SMALL_STATE(148)] = 2648,
  [SMALL_STATE(149)] = 2664,
  [SMALL_STATE(150)] = 2674,
  [SMALL_STATE(151)] = 2690,
  [SMALL_STATE(152)] = 2700,
  [SMALL_STATE(153)] = 2710,
  [SMALL_STATE(154)] = 2723,
  [SMALL_STATE(155)] = 2736,
  [SMALL_STATE(156)] = 2749,
  [SMALL_STATE(157)] = 2760,
  [SMALL_STATE(158)] = 2773,
  [SMALL_STATE(159)] = 2786,
  [SMALL_STATE(160)] = 2799,
  [SMALL_STATE(161)] = 2812,
  [SMALL_STATE(162)] = 2822,
  [SMALL_STATE(163)] = 2832,
  [SMALL_STATE(164)] = 2842,
  [SMALL_STATE(165)] = 2852,
  [SMALL_STATE(166)] = 2862,
  [SMALL_STATE(167)] = 2872,
  [SMALL_STATE(168)] = 2882,
  [SMALL_STATE(169)] = 2892,
  [SMALL_STATE(170)] = 2902,
  [SMALL_STATE(171)] = 2912,
  [SMALL_STATE(172)] = 2922,
  [SMALL_STATE(173)] = 2932,
  [SMALL_STATE(174)] = 2942,
  [SMALL_STATE(175)] = 2952,
  [SMALL_STATE(176)] = 2962,
  [SMALL_STATE(177)] = 2972,
  [SMALL_STATE(178)] = 2982,
  [SMALL_STATE(179)] = 2992,
  [SMALL_STATE(180)] = 2999,
  [SMALL_STATE(181)] = 3006,
  [SMALL_STATE(182)] = 3013,
  [SMALL_STATE(183)] = 3020,
  [SMALL_STATE(184)] = 3027,
  [SMALL_STATE(185)] = 3032,
  [SMALL_STATE(186)] = 3039,
  [SMALL_STATE(187)] = 3046,
  [SMALL_STATE(188)] = 3053,
  [SMALL_STATE(189)] = 3060,
  [SMALL_STATE(190)] = 3067,
  [SMALL_STATE(191)] = 3074,
  [SMALL_STATE(192)] = 3081,
  [SMALL_STATE(193)] = 3088,
  [SMALL_STATE(194)] = 3095,
  [SMALL_STATE(195)] = 3102,
  [SMALL_STATE(196)] = 3109,
  [SMALL_STATE(197)] = 3116,
  [SMALL_STATE(198)] = 3123,
  [SMALL_STATE(199)] = 3130,
  [SMALL_STATE(200)] = 3137,
  [SMALL_STATE(201)] = 3144,
  [SMALL_STATE(202)] = 3151,
  [SMALL_STATE(203)] = 3158,
  [SMALL_STATE(204)] = 3165,
  [SMALL_STATE(205)] = 3172,
  [SMALL_STATE(206)] = 3179,
  [SMALL_STATE(207)] = 3186,
  [SMALL_STATE(208)] = 3190,
  [SMALL_STATE(209)] = 3194,
  [SMALL_STATE(210)] = 3198,
  [SMALL_STATE(211)] = 3202,
  [SMALL_STATE(212)] = 3206,
  [SMALL_STATE(213)] = 3210,
  [SMALL_STATE(214)] = 3214,
  [SMALL_STATE(215)] = 3218,
  [SMALL_STATE(216)] = 3222,
  [SMALL_STATE(217)] = 3226,
  [SMALL_STATE(218)] = 3230,
  [SMALL_STATE(219)] = 3234,
  [SMALL_STATE(220)] = 3238,
  [SMALL_STATE(221)] = 3242,
  [SMALL_STATE(222)] = 3246,
  [SMALL_STATE(223)] = 3250,
  [SMALL_STATE(224)] = 3254,
  [SMALL_STATE(225)] = 3258,
  [SMALL_STATE(226)] = 3262,
  [SMALL_STATE(227)] = 3266,
  [SMALL_STATE(228)] = 3270,
  [SMALL_STATE(229)] = 3274,
  [SMALL_STATE(230)] = 3278,
  [SMALL_STATE(231)] = 3282,
  [SMALL_STATE(232)] = 3286,
  [SMALL_STATE(233)] = 3290,
  [SMALL_STATE(234)] = 3294,
  [SMALL_STATE(235)] = 3298,
  [SMALL_STATE(236)] = 3302,
  [SMALL_STATE(237)] = 3306,
  [SMALL_STATE(238)] = 3310,
  [SMALL_STATE(239)] = 3314,
  [SMALL_STATE(240)] = 3318,
  [SMALL_STATE(241)] = 3322,
  [SMALL_STATE(242)] = 3326,
  [SMALL_STATE(243)] = 3330,
  [SMALL_STATE(244)] = 3334,
  [SMALL_STATE(245)] = 3338,
  [SMALL_STATE(246)] = 3342,
  [SMALL_STATE(247)] = 3346,
  [SMALL_STATE(248)] = 3350,
  [SMALL_STATE(249)] = 3354,
  [SMALL_STATE(250)] = 3358,
  [SMALL_STATE(251)] = 3362,
  [SMALL_STATE(252)] = 3366,
  [SMALL_STATE(253)] = 3370,
  [SMALL_STATE(254)] = 3374,
  [SMALL_STATE(255)] = 3378,
  [SMALL_STATE(256)] = 3382,
  [SMALL_STATE(257)] = 3386,
  [SMALL_STATE(258)] = 3390,
  [SMALL_STATE(259)] = 3394,
  [SMALL_STATE(260)] = 3398,
  [SMALL_STATE(261)] = 3402,
  [SMALL_STATE(262)] = 3406,
  [SMALL_STATE(263)] = 3410,
  [SMALL_STATE(264)] = 3414,
  [SMALL_STATE(265)] = 3418,
  [SMALL_STATE(266)] = 3422,
  [SMALL_STATE(267)] = 3426,
  [SMALL_STATE(268)] = 3430,
  [SMALL_STATE(269)] = 3434,
  [SMALL_STATE(270)] = 3438,
  [SMALL_STATE(271)] = 3442,
  [SMALL_STATE(272)] = 3446,
  [SMALL_STATE(273)] = 3450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 11),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 9),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(89),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(258),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(192),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(156),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(179),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 10),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 18),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 6),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 12),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [669] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
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
