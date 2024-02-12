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
#define STATE_COUNT 302
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 1
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_xy = 10,
  anon_sym_part = 11,
  anon_sym_AT = 12,
  aux_sym__absolute_attr_token1 = 13,
  anon_sym_COMMA = 14,
  aux_sym__relative_attr_token1 = 15,
  anon_sym_left = 16,
  anon_sym_centre = 17,
  anon_sym_center = 18,
  anon_sym_right = 19,
  aux_sym__geometry_x_attr_token1 = 20,
  anon_sym_top = 21,
  anon_sym_middle = 22,
  anon_sym_bottom = 23,
  aux_sym__guide_attr_token1 = 24,
  aux_sym__guide_attr_token2 = 25,
  anon_sym_decorate = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_with = 29,
  anon_sym_delete = 30,
  anon_sym_guide = 31,
  anon_sym_input = 32,
  aux_sym__input_id_token1 = 33,
  anon_sym_output = 34,
  anon_sym_parameter = 35,
  anon_sym_light = 36,
  anon_sym_widget = 37,
  anon_sym_label = 38,
  aux_sym__label_id_token1 = 39,
  anon_sym_decoration = 40,
  anon_sym_load = 41,
  anon_sym_project = 42,
  anon_sym_script = 43,
  anon_sym_save = 44,
  anon_sym_export = 45,
  anon_sym_timestamp = 46,
  anon_sym_gzip = 47,
  aux_sym_parameter_token1 = 48,
  sym_fontsize = 49,
  anon_sym_baseline = 50,
  anon_sym_scale = 51,
  aux_sym__scale_token1 = 52,
  anon_sym_stretch = 53,
  anon_sym_origin = 54,
  aux_sym_origin_token1 = 55,
  aux_sym__originx_token1 = 56,
  aux_sym__originy_token1 = 57,
  anon_sym_background = 58,
  anon_sym_none = 59,
  sym_rgb = 60,
  sym_rgba = 61,
  anon_sym_panel = 62,
  anon_sym_svg = 63,
  anon_sym_dark = 64,
  anon_sym_DOTh = 65,
  sym_height = 66,
  sym_width = 67,
  anon_sym_vertical = 68,
  anon_sym_horizontal = 69,
  aux_sym_offset_token1 = 70,
  anon_sym_DQUOTE = 71,
  aux_sym__string_token1 = 72,
  anon_sym_SQUOTE = 73,
  aux_sym__string_token2 = 74,
  aux_sym_absolute_token1 = 75,
  aux_sym_relative_token1 = 76,
  sym_command = 77,
  sym_new = 78,
  sym_set = 79,
  sym__module_attr = 80,
  sym__input_attr = 81,
  sym__output_attr = 82,
  sym__x_attr = 83,
  sym__y_attr = 84,
  sym__xy_attr = 85,
  sym__absolute_attr = 86,
  sym__absolute_x_attr = 87,
  sym__absolute_y_attr = 88,
  sym__absolute_xy_attr = 89,
  sym__relative_attr = 90,
  sym__relative_xy_attr = 91,
  sym__geometry_x_attr = 92,
  sym__geometry_y_attr = 93,
  sym__geometry_xy_attr = 94,
  sym__guide_attr = 95,
  sym__guide_xy_attr = 96,
  sym_decorate = 97,
  sym_delete = 98,
  sym__guideline_id = 99,
  sym__input_id = 100,
  sym__output_id = 101,
  sym__parameter_id = 102,
  sym__light_id = 103,
  sym__widget_id = 104,
  sym__label_id = 105,
  sym__decoration_id = 106,
  sym__component_id = 107,
  sym_load = 108,
  sym_save = 109,
  sym_export = 110,
  sym_project = 111,
  sym_script = 112,
  sym__entity = 113,
  sym__input = 114,
  sym__output = 115,
  sym__parameter = 116,
  sym__light = 117,
  sym__widget = 118,
  sym_module = 119,
  sym_input = 120,
  sym_output = 121,
  sym_parameter = 122,
  sym_light = 123,
  sym_widget = 124,
  sym__component = 125,
  sym_label = 126,
  sym_font = 127,
  sym__align = 128,
  sym_halign = 129,
  sym_valign = 130,
  sym_colour = 131,
  sym_decoration = 132,
  sym__scale = 133,
  sym_stretch = 134,
  sym_origin = 135,
  sym__originx = 136,
  sym__originy = 137,
  sym_background = 138,
  sym_panel = 139,
  sym_svg = 140,
  sym_header = 141,
  sym_name = 142,
  sym_part = 143,
  sym_guide = 144,
  sym_identifier = 145,
  sym_vertical = 146,
  sym_horizontal = 147,
  sym_geometry = 148,
  sym_offset = 149,
  sym__offset = 150,
  sym_guideline = 151,
  sym__string = 152,
  sym_absolute = 153,
  sym_relative = 154,
  sym__decorate = 155,
  sym__relative = 156,
  sym_x = 157,
  sym_y = 158,
  aux_sym_command_repeat1 = 159,
  alias_sym_dy = 160,
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
  [anon_sym_xy] = "xy",
  [anon_sym_part] = "part",
  [anon_sym_AT] = "@",
  [aux_sym__absolute_attr_token1] = "offset",
  [anon_sym_COMMA] = ",",
  [aux_sym__relative_attr_token1] = "offset",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [aux_sym__geometry_x_attr_token1] = "offset",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_bottom] = "bottom",
  [aux_sym__guide_attr_token1] = "_guide_attr_token1",
  [aux_sym__guide_attr_token2] = "offset",
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
  [anon_sym_DOTh] = ".h",
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
  [sym__output_attr] = "_output_attr",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
  [sym__xy_attr] = "xy",
  [sym__absolute_attr] = "_absolute_attr",
  [sym__absolute_x_attr] = "x",
  [sym__absolute_y_attr] = "y",
  [sym__absolute_xy_attr] = "_absolute_xy_attr",
  [sym__relative_attr] = "_relative_attr",
  [sym__relative_xy_attr] = "_relative_xy_attr",
  [sym__geometry_x_attr] = "_geometry_x_attr",
  [sym__geometry_y_attr] = "_geometry_y_attr",
  [sym__geometry_xy_attr] = "_geometry_xy_attr",
  [sym__guide_attr] = "_guide_attr",
  [sym__guide_xy_attr] = "_guide_xy_attr",
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
  [sym_header] = "header",
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
  [anon_sym_xy] = anon_sym_xy,
  [anon_sym_part] = anon_sym_part,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__absolute_attr_token1] = sym_offset,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__relative_attr_token1] = sym_offset,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [aux_sym__geometry_x_attr_token1] = sym_offset,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_bottom] = anon_sym_bottom,
  [aux_sym__guide_attr_token1] = aux_sym__guide_attr_token1,
  [aux_sym__guide_attr_token2] = sym_offset,
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
  [anon_sym_DOTh] = anon_sym_DOTh,
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
  [sym__output_attr] = sym__output_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym__xy_attr,
  [sym__absolute_attr] = sym__absolute_attr,
  [sym__absolute_x_attr] = sym_x,
  [sym__absolute_y_attr] = sym_y,
  [sym__absolute_xy_attr] = sym__absolute_xy_attr,
  [sym__relative_attr] = sym__relative_attr,
  [sym__relative_xy_attr] = sym__relative_xy_attr,
  [sym__geometry_x_attr] = sym__geometry_x_attr,
  [sym__geometry_y_attr] = sym__geometry_y_attr,
  [sym__geometry_xy_attr] = sym__geometry_xy_attr,
  [sym__guide_attr] = sym__guide_attr,
  [sym__guide_xy_attr] = sym__guide_xy_attr,
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
  [sym_header] = sym_header,
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
  [anon_sym_xy] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__relative_attr_token1] = {
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
  [aux_sym__guide_attr_token2] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOTh] = {
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
  [sym__output_attr] = {
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
  [sym__xy_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__absolute_x_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_y_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__absolute_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__relative_xy_attr] = {
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
  [sym__geometry_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__guide_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__guide_xy_attr] = {
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
  [sym_header] = {
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
    [0] = sym_x,
    [2] = sym_y,
  },
  [12] = {
    [3] = sym_y,
  },
  [13] = {
    [2] = alias_sym_dy,
  },
  [14] = {
    [1] = sym_input,
  },
  [15] = {
    [1] = sym_output,
  },
  [16] = {
    [1] = sym_parameter,
  },
  [17] = {
    [1] = sym_widget,
  },
  [18] = {
    [1] = sym_label,
  },
  [19] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__relative_attr, 3,
    sym__relative_attr,
    sym_x,
    sym_y,
  sym__geometry_x_attr, 2,
    sym__geometry_x_attr,
    sym_x,
  sym__geometry_y_attr, 2,
    sym__geometry_y_attr,
    sym_y,
  sym__guide_attr, 3,
    sym__guide_attr,
    sym_x,
    sym_y,
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
  [35] = 6,
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
  [69] = 20,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 14,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 18,
  [82] = 82,
  [83] = 19,
  [84] = 19,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 59,
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
  [157] = 32,
  [158] = 90,
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
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 229,
  [294] = 231,
  [295] = 262,
  [296] = 266,
  [297] = 275,
  [298] = 284,
  [299] = 235,
  [300] = 269,
  [301] = 238,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(294);
      if (lookahead == '"') ADVANCE(509);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == ')') ADVANCE(394);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '0') ADVANCE(310);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(305);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(509);
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == 'b') ADVANCE(370);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(355);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '@') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead == 'U') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '5') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '8') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'H') ADVANCE(502);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(516);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(166);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(166);
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 24:
      if (lookahead == ';') ADVANCE(295);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(360);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 26:
      if (lookahead == '@') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'v') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(258);
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
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(148);
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
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(237);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(498);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(500);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(395);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(486);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 137:
      if (lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(499);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(317);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(502);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(501);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(490);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(334);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(337);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(475);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(490);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == 'z') ADVANCE(128);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 259:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 260:
      if (lookahead == 'w') ADVANCE(296);
      END_STATE();
    case 261:
      if (lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 262:
      if (lookahead == 'z') ADVANCE(191);
      END_STATE();
    case 263:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(516);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 287:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 288:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 289:
      if (eof) ADVANCE(294);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == ')') ADVANCE(394);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == 'm') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 's') ADVANCE(402);
      if (lookahead == 't') ADVANCE(438);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(289)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 290:
      if (eof) ADVANCE(294);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 's') ADVANCE(402);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 291:
      if (eof) ADVANCE(294);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == ')') ADVANCE(394);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'g') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(291)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 292:
      if (eof) ADVANCE(294);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'g') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 293:
      if (eof) ADVANCE(294);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 's') ADVANCE(34);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == 'H') ADVANCE(309);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == 'H') ADVANCE(309);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(309);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(309);
      if (lookahead == 'h') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'H') ADVANCE(317);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H') ADVANCE(317);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(166);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 289},
  [3] = {.lex_state = 289},
  [4] = {.lex_state = 291},
  [5] = {.lex_state = 291},
  [6] = {.lex_state = 289},
  [7] = {.lex_state = 291},
  [8] = {.lex_state = 291},
  [9] = {.lex_state = 291},
  [10] = {.lex_state = 291},
  [11] = {.lex_state = 289},
  [12] = {.lex_state = 289},
  [13] = {.lex_state = 289},
  [14] = {.lex_state = 289},
  [15] = {.lex_state = 289},
  [16] = {.lex_state = 289},
  [17] = {.lex_state = 289},
  [18] = {.lex_state = 289},
  [19] = {.lex_state = 289},
  [20] = {.lex_state = 289},
  [21] = {.lex_state = 291},
  [22] = {.lex_state = 291},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 292},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 291},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 290},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 291},
  [40] = {.lex_state = 291},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 292},
  [51] = {.lex_state = 291},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 290},
  [54] = {.lex_state = 290},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 291},
  [61] = {.lex_state = 293},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 293},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 290},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 290},
  [77] = {.lex_state = 292},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 292},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 290},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 290},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 292},
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
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 26},
  [160] = {.lex_state = 292},
  [161] = {.lex_state = 292},
  [162] = {.lex_state = 25},
  [163] = {.lex_state = 291},
  [164] = {.lex_state = 291},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 25},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 289},
  [170] = {.lex_state = 289},
  [171] = {.lex_state = 289},
  [172] = {.lex_state = 289},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 291},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 289},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 289},
  [180] = {.lex_state = 289},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 289},
  [185] = {.lex_state = 289},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 289},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 289},
  [192] = {.lex_state = 289},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 289},
  [195] = {.lex_state = 289},
  [196] = {.lex_state = 292},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 291},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 292},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 267},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 267},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 289},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 289},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 291},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 291},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 292},
  [239] = {.lex_state = 289},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 289},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 291},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 292},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 290},
  [272] = {.lex_state = 290},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 510},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 289},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 290},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 289},
  [284] = {.lex_state = 513},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 292},
  [297] = {.lex_state = 510},
  [298] = {.lex_state = 513},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 292},
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
    [anon_sym_xy] = ACTIONS(1),
    [anon_sym_part] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__absolute_attr_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__relative_attr_token1] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [aux_sym__geometry_x_attr_token1] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [aux_sym__guide_attr_token2] = ACTIONS(1),
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
    [anon_sym_DOTh] = ACTIONS(1),
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
    [sym_command] = STATE(289),
    [sym_new] = STATE(23),
    [sym_set] = STATE(23),
    [sym_decorate] = STATE(23),
    [sym_delete] = STATE(23),
    [sym_load] = STATE(23),
    [sym_save] = STATE(23),
    [sym_export] = STATE(23),
    [aux_sym_command_repeat1] = STATE(23),
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
    STATE(5), 1,
      sym_font,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(47), 1,
      sym__align,
    STATE(110), 1,
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
    STATE(4), 1,
      sym_font,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(48), 1,
      sym__align,
    STATE(134), 1,
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
    STATE(34), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(123), 1,
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
    STATE(41), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(97), 1,
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
  [196] = 4,
    ACTIONS(59), 1,
      aux_sym_offset_token1,
    STATE(14), 1,
      sym_offset,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(57), 17,
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
  [228] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(37), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(95), 1,
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
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [270] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(47), 1,
      sym__align,
    STATE(110), 1,
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
  [312] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(34), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(123), 1,
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
  [354] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(41), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym_halign,
    STATE(97), 1,
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
  [681] = 9,
    ACTIONS(107), 1,
      anon_sym_module,
    ACTIONS(109), 1,
      anon_sym_guide,
    ACTIONS(111), 1,
      anon_sym_input,
    ACTIONS(113), 1,
      anon_sym_output,
    ACTIONS(115), 1,
      anon_sym_light,
    ACTIONS(117), 1,
      anon_sym_widget,
    ACTIONS(119), 1,
      anon_sym_label,
    ACTIONS(121), 1,
      aux_sym_parameter_token1,
    STATE(98), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [717] = 10,
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
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
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
  [755] = 8,
    ACTIONS(129), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(131), 1,
      anon_sym_vertical,
    ACTIONS(133), 1,
      anon_sym_horizontal,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(121), 1,
      sym_offset,
    STATE(226), 1,
      sym_identifier,
    STATE(120), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(127), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
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
    STATE(124), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [862] = 9,
    ACTIONS(179), 1,
      anon_sym_AT,
    ACTIONS(181), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(185), 1,
      aux_sym__guide_attr_token1,
    STATE(88), 1,
      sym__xy_attr,
    STATE(270), 1,
      sym__relative_attr,
    STATE(276), 1,
      sym__geometry_x_attr,
    STATE(280), 1,
      sym__guide_attr,
    ACTIONS(183), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(146), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [896] = 6,
    ACTIONS(129), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(131), 1,
      anon_sym_vertical,
    ACTIONS(133), 1,
      anon_sym_horizontal,
    STATE(24), 1,
      sym_identifier,
    STATE(136), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(127), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [924] = 9,
    ACTIONS(179), 1,
      anon_sym_AT,
    ACTIONS(181), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(185), 1,
      aux_sym__guide_attr_token1,
    STATE(137), 1,
      sym__xy_attr,
    STATE(270), 1,
      sym__relative_attr,
    STATE(276), 1,
      sym__geometry_x_attr,
    STATE(280), 1,
      sym__guide_attr,
    ACTIONS(183), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(146), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [958] = 2,
    ACTIONS(189), 1,
      anon_sym_x,
    ACTIONS(187), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [978] = 2,
    ACTIONS(193), 1,
      anon_sym_x,
    ACTIONS(191), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [998] = 2,
    ACTIONS(197), 1,
      sym_width,
    ACTIONS(195), 13,
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
  [1017] = 2,
    ACTIONS(201), 1,
      sym_rgb,
    ACTIONS(199), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1034] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(110), 1,
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
  [1055] = 4,
    ACTIONS(203), 1,
      aux_sym_offset_token1,
    STATE(76), 1,
      sym_offset,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(57), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1076] = 6,
    ACTIONS(181), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(185), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym__x_attr,
    ACTIONS(183), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(142), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1101] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(94), 1,
      sym_colour,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1122] = 6,
    ACTIONS(181), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(185), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    STATE(137), 1,
      sym__x_attr,
    ACTIONS(183), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(142), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1147] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(80), 1,
      sym_offset,
    ACTIONS(209), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1166] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(66), 1,
      sym_offset,
    ACTIONS(211), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1185] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(95), 1,
      sym_colour,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1206] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      sym_rgb,
    ACTIONS(213), 10,
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
  [1225] = 8,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(167), 1,
      anon_sym_output,
    ACTIONS(219), 1,
      anon_sym_module,
    ACTIONS(221), 1,
      anon_sym_origin,
    ACTIONS(223), 1,
      anon_sym_background,
    STATE(166), 1,
      sym__input_id,
    STATE(168), 1,
      sym__output_id,
    STATE(102), 5,
      sym__module_attr,
      sym__input_attr,
      sym__output_attr,
      sym_origin,
      sym_background,
  [1254] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__scale,
    STATE(99), 1,
      sym_stretch,
    ACTIONS(225), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1275] = 3,
    ACTIONS(217), 1,
      sym_rgb,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(213), 10,
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
  [1294] = 6,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym_relative_token1,
    STATE(268), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(233), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1319] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(97), 1,
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
  [1340] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(123), 1,
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
  [1361] = 2,
    ACTIONS(241), 1,
      sym_rgb,
    ACTIONS(239), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_rgba,
  [1378] = 2,
    ACTIONS(245), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1394] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(151), 1,
      sym_offset,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1412] = 6,
    ACTIONS(181), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(185), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym__y_attr,
    ACTIONS(249), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(144), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1436] = 4,
    ACTIONS(255), 1,
      aux_sym__input_id_token1,
    STATE(113), 1,
      sym_part,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(253), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1456] = 4,
    ACTIONS(255), 1,
      aux_sym__input_id_token1,
    STATE(145), 1,
      sym_part,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(259), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1476] = 3,
    ACTIONS(263), 1,
      anon_sym_timestamp,
    ACTIONS(265), 1,
      anon_sym_gzip,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1494] = 6,
    ACTIONS(267), 1,
      anon_sym_AT,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      aux_sym_relative_token1,
    STATE(233), 1,
      sym_x,
    STATE(54), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(233), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1518] = 2,
    ACTIONS(275), 1,
      sym_rgb,
    ACTIONS(273), 10,
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
  [1534] = 6,
    ACTIONS(181), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(185), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(205), 1,
      anon_sym_AT,
    STATE(137), 1,
      sym__y_attr,
    ACTIONS(249), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(144), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1558] = 2,
    ACTIONS(279), 1,
      aux_sym_offset_token1,
    ACTIONS(277), 10,
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
  [1574] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(112), 1,
      sym_offset,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1592] = 2,
    ACTIONS(285), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(283), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1608] = 3,
    ACTIONS(289), 1,
      anon_sym_light,
    ACTIONS(291), 1,
      anon_sym_dark,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1626] = 3,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_stretch,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1644] = 2,
    ACTIONS(299), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1659] = 1,
    ACTIONS(301), 10,
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
  [1672] = 1,
    ACTIONS(303), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1685] = 1,
    ACTIONS(305), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1698] = 1,
    ACTIONS(307), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1711] = 2,
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
  [1726] = 2,
    ACTIONS(311), 1,
      anon_sym_timestamp,
    ACTIONS(309), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1741] = 1,
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
  [1754] = 2,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1769] = 2,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1784] = 1,
    ACTIONS(321), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1797] = 1,
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
  [1810] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(77), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1825] = 6,
    ACTIONS(325), 1,
      anon_sym_input,
    ACTIONS(327), 1,
      anon_sym_output,
    ACTIONS(329), 1,
      anon_sym_parameter,
    ACTIONS(331), 1,
      anon_sym_light,
    ACTIONS(333), 1,
      anon_sym_widget,
    STATE(255), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1848] = 2,
    ACTIONS(337), 1,
      anon_sym_COMMA,
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
  [1863] = 6,
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
    STATE(234), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1886] = 1,
    ACTIONS(339), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1899] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(93), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1914] = 1,
    ACTIONS(341), 10,
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
  [1927] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(97), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1942] = 1,
    ACTIONS(95), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1955] = 2,
    ACTIONS(345), 1,
      anon_sym_COMMA,
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
  [1970] = 2,
    ACTIONS(347), 1,
      anon_sym_COMMA,
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
  [1985] = 6,
    ACTIONS(325), 1,
      anon_sym_input,
    ACTIONS(327), 1,
      anon_sym_output,
    ACTIONS(329), 1,
      anon_sym_parameter,
    ACTIONS(331), 1,
      anon_sym_light,
    ACTIONS(333), 1,
      anon_sym_widget,
    STATE(265), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2008] = 1,
    ACTIONS(349), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2020] = 1,
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
  [2032] = 1,
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
  [2044] = 1,
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
  [2056] = 1,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2068] = 1,
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
  [2080] = 1,
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
  [2092] = 1,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2104] = 1,
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
  [2116] = 1,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2128] = 1,
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
  [2140] = 1,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2152] = 1,
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
  [2164] = 1,
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
  [2176] = 1,
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
  [2188] = 1,
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
  [2200] = 1,
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
  [2212] = 1,
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
  [2224] = 1,
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
  [2236] = 1,
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
  [2248] = 1,
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
  [2260] = 1,
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
  [2272] = 1,
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
  [2284] = 1,
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
  [2296] = 1,
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
  [2308] = 1,
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
  [2320] = 1,
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
  [2332] = 1,
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
  [2344] = 1,
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
  [2356] = 1,
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
  [2368] = 1,
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
  [2380] = 1,
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
  [2392] = 1,
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
  [2404] = 1,
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
  [2416] = 1,
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
  [2428] = 1,
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
  [2440] = 1,
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
  [2452] = 1,
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
  [2464] = 1,
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
  [2476] = 1,
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
  [2488] = 1,
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
  [2500] = 1,
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
  [2512] = 1,
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
  [2524] = 1,
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
  [2536] = 1,
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
  [2548] = 1,
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
  [2560] = 1,
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
  [2572] = 6,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(431), 1,
      anon_sym_origin,
    ACTIONS(433), 1,
      aux_sym_origin_token1,
    STATE(115), 1,
      sym_offset,
    ACTIONS(429), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2594] = 1,
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
  [2606] = 1,
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
  [2618] = 1,
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
  [2630] = 1,
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
  [2642] = 1,
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
  [2654] = 1,
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
  [2666] = 1,
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
  [2678] = 1,
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
  [2690] = 1,
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
  [2702] = 1,
    ACTIONS(453), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2714] = 1,
    ACTIONS(455), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2726] = 1,
    ACTIONS(457), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2738] = 1,
    ACTIONS(459), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2750] = 1,
    ACTIONS(461), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2762] = 1,
    ACTIONS(463), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2774] = 1,
    ACTIONS(465), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2786] = 1,
    ACTIONS(467), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2798] = 1,
    ACTIONS(469), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2810] = 1,
    ACTIONS(471), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2822] = 1,
    ACTIONS(473), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2834] = 1,
    ACTIONS(475), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2846] = 2,
    ACTIONS(195), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(197), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2859] = 2,
    ACTIONS(353), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(477), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2872] = 6,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(479), 1,
      anon_sym_AT,
    ACTIONS(481), 1,
      anon_sym_origin,
    ACTIONS(483), 1,
      aux_sym_origin_token1,
    STATE(118), 1,
      sym_offset,
    ACTIONS(429), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2893] = 6,
    ACTIONS(485), 1,
      anon_sym_input,
    ACTIONS(487), 1,
      anon_sym_output,
    ACTIONS(489), 1,
      anon_sym_parameter,
    ACTIONS(491), 1,
      anon_sym_light,
    ACTIONS(493), 1,
      anon_sym_widget,
    ACTIONS(495), 1,
      anon_sym_label,
  [2912] = 5,
    ACTIONS(497), 1,
      anon_sym_AT,
    ACTIONS(499), 1,
      aux_sym__originx_token1,
    ACTIONS(501), 1,
      aux_sym__originy_token1,
    STATE(285), 1,
      sym__originy,
    STATE(287), 1,
      sym__originx,
  [2928] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(503), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2938] = 2,
    STATE(57), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2948] = 2,
    STATE(57), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2958] = 5,
    ACTIONS(505), 1,
      aux_sym__input_id_token1,
    ACTIONS(507), 1,
      anon_sym_none,
    ACTIONS(509), 1,
      sym_rgb,
    ACTIONS(511), 1,
      sym_rgba,
    STATE(92), 1,
      sym_name,
  [2974] = 5,
    ACTIONS(513), 1,
      anon_sym_name,
    ACTIONS(515), 1,
      anon_sym_x,
    ACTIONS(517), 1,
      anon_sym_y,
    ACTIONS(519), 1,
      anon_sym_xy,
    ACTIONS(521), 1,
      anon_sym_part,
  [2990] = 2,
    STATE(53), 1,
      sym_y,
    ACTIONS(523), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3000] = 5,
    ACTIONS(525), 1,
      anon_sym_name,
    ACTIONS(527), 1,
      anon_sym_x,
    ACTIONS(529), 1,
      anon_sym_y,
    ACTIONS(531), 1,
      anon_sym_xy,
    ACTIONS(533), 1,
      anon_sym_part,
  [3016] = 4,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3029] = 4,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3042] = 4,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3055] = 4,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3068] = 3,
    ACTIONS(545), 1,
      anon_sym_project,
    ACTIONS(547), 1,
      anon_sym_script,
    STATE(127), 2,
      sym_project,
      sym_script,
  [3079] = 2,
    STATE(117), 1,
      sym__geometry_y_attr,
    ACTIONS(549), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3088] = 3,
    ACTIONS(551), 1,
      anon_sym_svg,
    ACTIONS(553), 1,
      anon_sym_DOTh,
    STATE(109), 2,
      sym_svg,
      sym_header,
  [3099] = 4,
    ACTIONS(555), 1,
      aux_sym__label_id_token1,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym__string,
  [3112] = 4,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3125] = 3,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(56), 1,
      sym_name,
    STATE(139), 1,
      sym__component,
  [3135] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(565), 1,
      aux_sym_origin_token1,
    STATE(147), 1,
      sym_offset,
  [3145] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(567), 1,
      aux_sym_origin_token1,
    STATE(149), 1,
      sym_offset,
  [3155] = 3,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(56), 1,
      sym_name,
    STATE(138), 1,
      sym__component,
  [3165] = 3,
    ACTIONS(569), 1,
      anon_sym_name,
    ACTIONS(571), 1,
      anon_sym_height,
    ACTIONS(573), 1,
      anon_sym_width,
  [3175] = 3,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      aux_sym__label_id_token1,
    STATE(220), 1,
      sym__component_id,
  [3185] = 3,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      sym_offset,
  [3195] = 3,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(249), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3205] = 3,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(44), 1,
      sym_name,
    STATE(114), 1,
      sym_decoration,
  [3215] = 3,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(244), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3225] = 3,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(56), 1,
      sym_name,
    STATE(143), 1,
      sym__component,
  [3235] = 3,
    ACTIONS(583), 1,
      anon_sym_DQUOTE,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      sym__string,
  [3245] = 3,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(56), 1,
      sym_name,
    STATE(141), 1,
      sym__component,
  [3255] = 3,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(245), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3265] = 3,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(246), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3275] = 3,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(56), 1,
      sym_name,
    STATE(140), 1,
      sym__component,
  [3285] = 3,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(247), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3295] = 3,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(248), 1,
      sym__relative,
    STATE(260), 1,
      sym__offset,
  [3305] = 2,
    ACTIONS(499), 1,
      aux_sym__originx_token1,
    STATE(133), 1,
      sym__originx,
  [3312] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(130), 1,
      sym_name,
  [3319] = 2,
    ACTIONS(587), 1,
      anon_sym_project,
    ACTIONS(589), 1,
      anon_sym_script,
  [3326] = 2,
    ACTIONS(591), 1,
      anon_sym_panel,
    STATE(131), 1,
      sym_panel,
  [3333] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(201), 1,
      sym_name,
  [3340] = 2,
    ACTIONS(593), 1,
      sym_height,
    ACTIONS(595), 1,
      sym_width,
  [3347] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(137), 1,
      sym_name,
  [3354] = 2,
    ACTIONS(597), 1,
      aux_sym__input_id_token1,
    STATE(137), 1,
      sym_part,
  [3361] = 2,
    ACTIONS(501), 1,
      aux_sym__originy_token1,
    STATE(133), 1,
      sym__originy,
  [3368] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(88), 1,
      sym_name,
  [3375] = 2,
    ACTIONS(597), 1,
      aux_sym__input_id_token1,
    STATE(88), 1,
      sym_part,
  [3382] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(172), 1,
      sym_name,
  [3389] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(171), 1,
      sym_name,
  [3396] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(170), 1,
      sym_name,
  [3403] = 2,
    ACTIONS(599), 1,
      aux_sym__absolute_attr_token1,
    STATE(261), 1,
      sym__absolute_x_attr,
  [3410] = 2,
    ACTIONS(181), 1,
      aux_sym__relative_attr_token1,
    STATE(119), 1,
      sym__relative_attr,
  [3417] = 2,
    ACTIONS(601), 1,
      aux_sym__guide_attr_token1,
    STATE(116), 1,
      sym__guide_attr,
  [3424] = 1,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3429] = 2,
    ACTIONS(605), 1,
      anon_sym_scale,
    ACTIONS(607), 1,
      anon_sym_stretch,
  [3436] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(169), 1,
      sym_name,
  [3443] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(177), 1,
      sym_name,
  [3450] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(187), 1,
      sym_name,
  [3457] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(191), 1,
      sym_name,
  [3464] = 2,
    ACTIONS(609), 1,
      aux_sym__guide_attr_token1,
    STATE(103), 1,
      sym_identifier,
  [3471] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(156), 1,
      sym_name,
  [3478] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(192), 1,
      sym_name,
  [3485] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(185), 1,
      sym_name,
  [3492] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(195), 1,
      sym_name,
  [3499] = 2,
    ACTIONS(537), 1,
      aux_sym_offset_token1,
    STATE(258), 1,
      sym__offset,
  [3506] = 2,
    ACTIONS(611), 1,
      aux_sym__absolute_attr_token1,
    STATE(100), 1,
      sym__absolute_y_attr,
  [3513] = 2,
    ACTIONS(135), 1,
      aux_sym_offset_token1,
    STATE(121), 1,
      sym_offset,
  [3520] = 2,
    ACTIONS(581), 1,
      aux_sym__input_id_token1,
    STATE(194), 1,
      sym_name,
  [3527] = 2,
    ACTIONS(613), 1,
      sym_rgb,
    ACTIONS(615), 1,
      sym_rgba,
  [3534] = 1,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
  [3538] = 1,
    ACTIONS(619), 1,
      anon_sym_COMMA,
  [3542] = 1,
    ACTIONS(617), 1,
      anon_sym_SQUOTE,
  [3546] = 1,
    ACTIONS(621), 1,
      sym_width,
  [3550] = 1,
    ACTIONS(623), 1,
      anon_sym_COMMA,
  [3554] = 1,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [3558] = 1,
    ACTIONS(627), 1,
      anon_sym_COMMA,
  [3562] = 1,
    ACTIONS(621), 1,
      sym_height,
  [3566] = 1,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
  [3570] = 1,
    ACTIONS(631), 1,
      aux_sym_absolute_token1,
  [3574] = 1,
    ACTIONS(633), 1,
      aux_sym_origin_token1,
  [3578] = 1,
    ACTIONS(635), 1,
      aux_sym__input_id_token1,
  [3582] = 1,
    ACTIONS(637), 1,
      aux_sym__input_id_token1,
  [3586] = 1,
    ACTIONS(639), 1,
      aux_sym_origin_token1,
  [3590] = 1,
    ACTIONS(641), 1,
      aux_sym__input_id_token1,
  [3594] = 1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [3598] = 1,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
  [3602] = 1,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [3606] = 1,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [3610] = 1,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [3614] = 1,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
  [3618] = 1,
    ACTIONS(655), 1,
      sym_width,
  [3622] = 1,
    ACTIONS(657), 1,
      aux_sym__absolute_attr_token1,
  [3626] = 1,
    ACTIONS(659), 1,
      aux_sym__input_id_token1,
  [3630] = 1,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
  [3634] = 1,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [3638] = 1,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [3642] = 1,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [3646] = 1,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [3650] = 1,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [3654] = 1,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [3658] = 1,
    ACTIONS(675), 1,
      anon_sym_COMMA,
  [3662] = 1,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [3666] = 1,
    ACTIONS(679), 1,
      aux_sym_relative_token1,
  [3670] = 1,
    ACTIONS(681), 1,
      aux_sym__input_id_token1,
  [3674] = 1,
    ACTIONS(683), 1,
      aux_sym__input_id_token1,
  [3678] = 1,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [3682] = 1,
    ACTIONS(687), 1,
      aux_sym_absolute_token1,
  [3686] = 1,
    ACTIONS(689), 1,
      anon_sym_COMMA,
  [3690] = 1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
  [3694] = 1,
    ACTIONS(693), 1,
      anon_sym_COMMA,
  [3698] = 1,
    ACTIONS(695), 1,
      anon_sym_COMMA,
  [3702] = 1,
    ACTIONS(697), 1,
      aux_sym__scale_token1,
  [3706] = 1,
    ACTIONS(699), 1,
      aux_sym__scale_token1,
  [3710] = 1,
    ACTIONS(607), 1,
      anon_sym_stretch,
  [3714] = 1,
    ACTIONS(701), 1,
      anon_sym_COMMA,
  [3718] = 1,
    ACTIONS(703), 1,
      aux_sym__string_token1,
  [3722] = 1,
    ACTIONS(705), 1,
      anon_sym_COMMA,
  [3726] = 1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [3730] = 1,
    ACTIONS(709), 1,
      anon_sym_COMMA,
  [3734] = 1,
    ACTIONS(711), 1,
      aux_sym_origin_token1,
  [3738] = 1,
    ACTIONS(713), 1,
      anon_sym_COMMA,
  [3742] = 1,
    ACTIONS(715), 1,
      aux_sym__scale_token1,
  [3746] = 1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [3750] = 1,
    ACTIONS(719), 1,
      aux_sym_origin_token1,
  [3754] = 1,
    ACTIONS(721), 1,
      aux_sym__string_token2,
  [3758] = 1,
    ACTIONS(723), 1,
      anon_sym_COMMA,
  [3762] = 1,
    ACTIONS(725), 1,
      anon_sym_timestamp,
  [3766] = 1,
    ACTIONS(727), 1,
      anon_sym_COMMA,
  [3770] = 1,
    ACTIONS(729), 1,
      anon_sym_with,
  [3774] = 1,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
  [3778] = 1,
    ACTIONS(733), 1,
      sym_rgb,
  [3782] = 1,
    ACTIONS(725), 1,
      anon_sym_gzip,
  [3786] = 1,
    ACTIONS(733), 1,
      sym_rgba,
  [3790] = 1,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
  [3794] = 1,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
  [3798] = 1,
    ACTIONS(737), 1,
      aux_sym_relative_token1,
  [3802] = 1,
    ACTIONS(739), 1,
      aux_sym_absolute_token1,
  [3806] = 1,
    ACTIONS(741), 1,
      aux_sym__string_token1,
  [3810] = 1,
    ACTIONS(743), 1,
      aux_sym__string_token2,
  [3814] = 1,
    ACTIONS(745), 1,
      anon_sym_COMMA,
  [3818] = 1,
    ACTIONS(747), 1,
      anon_sym_COMMA,
  [3822] = 1,
    ACTIONS(749), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 312,
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
  [SMALL_STATE(23)] = 717,
  [SMALL_STATE(24)] = 755,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 896,
  [SMALL_STATE(29)] = 924,
  [SMALL_STATE(30)] = 958,
  [SMALL_STATE(31)] = 978,
  [SMALL_STATE(32)] = 998,
  [SMALL_STATE(33)] = 1017,
  [SMALL_STATE(34)] = 1034,
  [SMALL_STATE(35)] = 1055,
  [SMALL_STATE(36)] = 1076,
  [SMALL_STATE(37)] = 1101,
  [SMALL_STATE(38)] = 1122,
  [SMALL_STATE(39)] = 1147,
  [SMALL_STATE(40)] = 1166,
  [SMALL_STATE(41)] = 1185,
  [SMALL_STATE(42)] = 1206,
  [SMALL_STATE(43)] = 1225,
  [SMALL_STATE(44)] = 1254,
  [SMALL_STATE(45)] = 1275,
  [SMALL_STATE(46)] = 1294,
  [SMALL_STATE(47)] = 1319,
  [SMALL_STATE(48)] = 1340,
  [SMALL_STATE(49)] = 1361,
  [SMALL_STATE(50)] = 1378,
  [SMALL_STATE(51)] = 1394,
  [SMALL_STATE(52)] = 1412,
  [SMALL_STATE(53)] = 1436,
  [SMALL_STATE(54)] = 1456,
  [SMALL_STATE(55)] = 1476,
  [SMALL_STATE(56)] = 1494,
  [SMALL_STATE(57)] = 1518,
  [SMALL_STATE(58)] = 1534,
  [SMALL_STATE(59)] = 1558,
  [SMALL_STATE(60)] = 1574,
  [SMALL_STATE(61)] = 1592,
  [SMALL_STATE(62)] = 1608,
  [SMALL_STATE(63)] = 1626,
  [SMALL_STATE(64)] = 1644,
  [SMALL_STATE(65)] = 1659,
  [SMALL_STATE(66)] = 1672,
  [SMALL_STATE(67)] = 1685,
  [SMALL_STATE(68)] = 1698,
  [SMALL_STATE(69)] = 1711,
  [SMALL_STATE(70)] = 1726,
  [SMALL_STATE(71)] = 1741,
  [SMALL_STATE(72)] = 1754,
  [SMALL_STATE(73)] = 1769,
  [SMALL_STATE(74)] = 1784,
  [SMALL_STATE(75)] = 1797,
  [SMALL_STATE(76)] = 1810,
  [SMALL_STATE(77)] = 1825,
  [SMALL_STATE(78)] = 1848,
  [SMALL_STATE(79)] = 1863,
  [SMALL_STATE(80)] = 1886,
  [SMALL_STATE(81)] = 1899,
  [SMALL_STATE(82)] = 1914,
  [SMALL_STATE(83)] = 1927,
  [SMALL_STATE(84)] = 1942,
  [SMALL_STATE(85)] = 1955,
  [SMALL_STATE(86)] = 1970,
  [SMALL_STATE(87)] = 1985,
  [SMALL_STATE(88)] = 2008,
  [SMALL_STATE(89)] = 2020,
  [SMALL_STATE(90)] = 2032,
  [SMALL_STATE(91)] = 2044,
  [SMALL_STATE(92)] = 2056,
  [SMALL_STATE(93)] = 2068,
  [SMALL_STATE(94)] = 2080,
  [SMALL_STATE(95)] = 2092,
  [SMALL_STATE(96)] = 2104,
  [SMALL_STATE(97)] = 2116,
  [SMALL_STATE(98)] = 2128,
  [SMALL_STATE(99)] = 2140,
  [SMALL_STATE(100)] = 2152,
  [SMALL_STATE(101)] = 2164,
  [SMALL_STATE(102)] = 2176,
  [SMALL_STATE(103)] = 2188,
  [SMALL_STATE(104)] = 2200,
  [SMALL_STATE(105)] = 2212,
  [SMALL_STATE(106)] = 2224,
  [SMALL_STATE(107)] = 2236,
  [SMALL_STATE(108)] = 2248,
  [SMALL_STATE(109)] = 2260,
  [SMALL_STATE(110)] = 2272,
  [SMALL_STATE(111)] = 2284,
  [SMALL_STATE(112)] = 2296,
  [SMALL_STATE(113)] = 2308,
  [SMALL_STATE(114)] = 2320,
  [SMALL_STATE(115)] = 2332,
  [SMALL_STATE(116)] = 2344,
  [SMALL_STATE(117)] = 2356,
  [SMALL_STATE(118)] = 2368,
  [SMALL_STATE(119)] = 2380,
  [SMALL_STATE(120)] = 2392,
  [SMALL_STATE(121)] = 2404,
  [SMALL_STATE(122)] = 2416,
  [SMALL_STATE(123)] = 2428,
  [SMALL_STATE(124)] = 2440,
  [SMALL_STATE(125)] = 2452,
  [SMALL_STATE(126)] = 2464,
  [SMALL_STATE(127)] = 2476,
  [SMALL_STATE(128)] = 2488,
  [SMALL_STATE(129)] = 2500,
  [SMALL_STATE(130)] = 2512,
  [SMALL_STATE(131)] = 2524,
  [SMALL_STATE(132)] = 2536,
  [SMALL_STATE(133)] = 2548,
  [SMALL_STATE(134)] = 2560,
  [SMALL_STATE(135)] = 2572,
  [SMALL_STATE(136)] = 2594,
  [SMALL_STATE(137)] = 2606,
  [SMALL_STATE(138)] = 2618,
  [SMALL_STATE(139)] = 2630,
  [SMALL_STATE(140)] = 2642,
  [SMALL_STATE(141)] = 2654,
  [SMALL_STATE(142)] = 2666,
  [SMALL_STATE(143)] = 2678,
  [SMALL_STATE(144)] = 2690,
  [SMALL_STATE(145)] = 2702,
  [SMALL_STATE(146)] = 2714,
  [SMALL_STATE(147)] = 2726,
  [SMALL_STATE(148)] = 2738,
  [SMALL_STATE(149)] = 2750,
  [SMALL_STATE(150)] = 2762,
  [SMALL_STATE(151)] = 2774,
  [SMALL_STATE(152)] = 2786,
  [SMALL_STATE(153)] = 2798,
  [SMALL_STATE(154)] = 2810,
  [SMALL_STATE(155)] = 2822,
  [SMALL_STATE(156)] = 2834,
  [SMALL_STATE(157)] = 2846,
  [SMALL_STATE(158)] = 2859,
  [SMALL_STATE(159)] = 2872,
  [SMALL_STATE(160)] = 2893,
  [SMALL_STATE(161)] = 2912,
  [SMALL_STATE(162)] = 2928,
  [SMALL_STATE(163)] = 2938,
  [SMALL_STATE(164)] = 2948,
  [SMALL_STATE(165)] = 2958,
  [SMALL_STATE(166)] = 2974,
  [SMALL_STATE(167)] = 2990,
  [SMALL_STATE(168)] = 3000,
  [SMALL_STATE(169)] = 3016,
  [SMALL_STATE(170)] = 3029,
  [SMALL_STATE(171)] = 3042,
  [SMALL_STATE(172)] = 3055,
  [SMALL_STATE(173)] = 3068,
  [SMALL_STATE(174)] = 3079,
  [SMALL_STATE(175)] = 3088,
  [SMALL_STATE(176)] = 3099,
  [SMALL_STATE(177)] = 3112,
  [SMALL_STATE(178)] = 3125,
  [SMALL_STATE(179)] = 3135,
  [SMALL_STATE(180)] = 3145,
  [SMALL_STATE(181)] = 3155,
  [SMALL_STATE(182)] = 3165,
  [SMALL_STATE(183)] = 3175,
  [SMALL_STATE(184)] = 3185,
  [SMALL_STATE(185)] = 3195,
  [SMALL_STATE(186)] = 3205,
  [SMALL_STATE(187)] = 3215,
  [SMALL_STATE(188)] = 3225,
  [SMALL_STATE(189)] = 3235,
  [SMALL_STATE(190)] = 3245,
  [SMALL_STATE(191)] = 3255,
  [SMALL_STATE(192)] = 3265,
  [SMALL_STATE(193)] = 3275,
  [SMALL_STATE(194)] = 3285,
  [SMALL_STATE(195)] = 3295,
  [SMALL_STATE(196)] = 3305,
  [SMALL_STATE(197)] = 3312,
  [SMALL_STATE(198)] = 3319,
  [SMALL_STATE(199)] = 3326,
  [SMALL_STATE(200)] = 3333,
  [SMALL_STATE(201)] = 3340,
  [SMALL_STATE(202)] = 3347,
  [SMALL_STATE(203)] = 3354,
  [SMALL_STATE(204)] = 3361,
  [SMALL_STATE(205)] = 3368,
  [SMALL_STATE(206)] = 3375,
  [SMALL_STATE(207)] = 3382,
  [SMALL_STATE(208)] = 3389,
  [SMALL_STATE(209)] = 3396,
  [SMALL_STATE(210)] = 3403,
  [SMALL_STATE(211)] = 3410,
  [SMALL_STATE(212)] = 3417,
  [SMALL_STATE(213)] = 3424,
  [SMALL_STATE(214)] = 3429,
  [SMALL_STATE(215)] = 3436,
  [SMALL_STATE(216)] = 3443,
  [SMALL_STATE(217)] = 3450,
  [SMALL_STATE(218)] = 3457,
  [SMALL_STATE(219)] = 3464,
  [SMALL_STATE(220)] = 3471,
  [SMALL_STATE(221)] = 3478,
  [SMALL_STATE(222)] = 3485,
  [SMALL_STATE(223)] = 3492,
  [SMALL_STATE(224)] = 3499,
  [SMALL_STATE(225)] = 3506,
  [SMALL_STATE(226)] = 3513,
  [SMALL_STATE(227)] = 3520,
  [SMALL_STATE(228)] = 3527,
  [SMALL_STATE(229)] = 3534,
  [SMALL_STATE(230)] = 3538,
  [SMALL_STATE(231)] = 3542,
  [SMALL_STATE(232)] = 3546,
  [SMALL_STATE(233)] = 3550,
  [SMALL_STATE(234)] = 3554,
  [SMALL_STATE(235)] = 3558,
  [SMALL_STATE(236)] = 3562,
  [SMALL_STATE(237)] = 3566,
  [SMALL_STATE(238)] = 3570,
  [SMALL_STATE(239)] = 3574,
  [SMALL_STATE(240)] = 3578,
  [SMALL_STATE(241)] = 3582,
  [SMALL_STATE(242)] = 3586,
  [SMALL_STATE(243)] = 3590,
  [SMALL_STATE(244)] = 3594,
  [SMALL_STATE(245)] = 3598,
  [SMALL_STATE(246)] = 3602,
  [SMALL_STATE(247)] = 3606,
  [SMALL_STATE(248)] = 3610,
  [SMALL_STATE(249)] = 3614,
  [SMALL_STATE(250)] = 3618,
  [SMALL_STATE(251)] = 3622,
  [SMALL_STATE(252)] = 3626,
  [SMALL_STATE(253)] = 3630,
  [SMALL_STATE(254)] = 3634,
  [SMALL_STATE(255)] = 3638,
  [SMALL_STATE(256)] = 3642,
  [SMALL_STATE(257)] = 3646,
  [SMALL_STATE(258)] = 3650,
  [SMALL_STATE(259)] = 3654,
  [SMALL_STATE(260)] = 3658,
  [SMALL_STATE(261)] = 3662,
  [SMALL_STATE(262)] = 3666,
  [SMALL_STATE(263)] = 3670,
  [SMALL_STATE(264)] = 3674,
  [SMALL_STATE(265)] = 3678,
  [SMALL_STATE(266)] = 3682,
  [SMALL_STATE(267)] = 3686,
  [SMALL_STATE(268)] = 3690,
  [SMALL_STATE(269)] = 3694,
  [SMALL_STATE(270)] = 3698,
  [SMALL_STATE(271)] = 3702,
  [SMALL_STATE(272)] = 3706,
  [SMALL_STATE(273)] = 3710,
  [SMALL_STATE(274)] = 3714,
  [SMALL_STATE(275)] = 3718,
  [SMALL_STATE(276)] = 3722,
  [SMALL_STATE(277)] = 3726,
  [SMALL_STATE(278)] = 3730,
  [SMALL_STATE(279)] = 3734,
  [SMALL_STATE(280)] = 3738,
  [SMALL_STATE(281)] = 3742,
  [SMALL_STATE(282)] = 3746,
  [SMALL_STATE(283)] = 3750,
  [SMALL_STATE(284)] = 3754,
  [SMALL_STATE(285)] = 3758,
  [SMALL_STATE(286)] = 3762,
  [SMALL_STATE(287)] = 3766,
  [SMALL_STATE(288)] = 3770,
  [SMALL_STATE(289)] = 3774,
  [SMALL_STATE(290)] = 3778,
  [SMALL_STATE(291)] = 3782,
  [SMALL_STATE(292)] = 3786,
  [SMALL_STATE(293)] = 3790,
  [SMALL_STATE(294)] = 3794,
  [SMALL_STATE(295)] = 3798,
  [SMALL_STATE(296)] = 3802,
  [SMALL_STATE(297)] = 3806,
  [SMALL_STATE(298)] = 3810,
  [SMALL_STATE(299)] = 3814,
  [SMALL_STATE(300)] = 3818,
  [SMALL_STATE(301)] = 3822,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 12),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 12),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(237),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(198),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(173),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(199),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_attr, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 19),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 8),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 11),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 11),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 11),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 10),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 7),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 7),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 13),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [731] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
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
