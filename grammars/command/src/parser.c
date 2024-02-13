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
#define STATE_COUNT 295
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 159
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
  sym__component_attr = 81,
  sym__x_attr = 82,
  sym__y_attr = 83,
  sym__xy_attr = 84,
  sym__absolute_attr = 85,
  sym__absolute_x_attr = 86,
  sym__absolute_y_attr = 87,
  sym__absolute_xy_attr = 88,
  sym__relative_attr = 89,
  sym__relative_xy_attr = 90,
  sym__geometry_x_attr = 91,
  sym__geometry_y_attr = 92,
  sym__geometry_xy_attr = 93,
  sym__guide_attr = 94,
  sym__guide_xy_attr = 95,
  sym_decorate = 96,
  sym_delete = 97,
  sym__guideline_id = 98,
  sym__input_id = 99,
  sym__output_id = 100,
  sym__parameter_id = 101,
  sym__light_id = 102,
  sym__widget_id = 103,
  sym__label_id = 104,
  sym__decoration_id = 105,
  sym__component_id = 106,
  sym_load = 107,
  sym_save = 108,
  sym_export = 109,
  sym_project = 110,
  sym_script = 111,
  sym__entity = 112,
  sym__input = 113,
  sym__output = 114,
  sym__parameter = 115,
  sym__light = 116,
  sym__widget = 117,
  sym_module = 118,
  sym_input = 119,
  sym_output = 120,
  sym_parameter = 121,
  sym_light = 122,
  sym_widget = 123,
  sym__component = 124,
  sym_label = 125,
  sym_font = 126,
  sym__align = 127,
  sym_halign = 128,
  sym_valign = 129,
  sym_colour = 130,
  sym_decoration = 131,
  sym__scale = 132,
  sym_stretch = 133,
  sym_origin = 134,
  sym__originx = 135,
  sym__originy = 136,
  sym_background = 137,
  sym_panel = 138,
  sym_svg = 139,
  sym_header = 140,
  sym_name = 141,
  sym_part = 142,
  sym_guide = 143,
  sym_identifier = 144,
  sym_vertical = 145,
  sym_horizontal = 146,
  sym_geometry = 147,
  sym_offset = 148,
  sym__offset = 149,
  sym_guideline = 150,
  sym__string = 151,
  sym_absolute = 152,
  sym_relative = 153,
  sym__decorate = 154,
  sym__relative = 155,
  sym_x = 156,
  sym_y = 157,
  aux_sym_command_repeat1 = 158,
  alias_sym_dy = 159,
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
  [sym__component_attr] = "_component_attr",
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
  [sym__component_attr] = sym__component_attr,
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
  [sym__component_attr] = {
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 8,
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
  [65] = 12,
  [66] = 66,
  [67] = 67,
  [68] = 19,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 20,
  [76] = 11,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 20,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 51,
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
  [153] = 34,
  [154] = 154,
  [155] = 88,
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
  [286] = 254,
  [287] = 250,
  [288] = 246,
  [289] = 252,
  [290] = 272,
  [291] = 261,
  [292] = 223,
  [293] = 225,
  [294] = 260,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(295);
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(90);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(306);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(372);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(489);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(489);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'U') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '5') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(509);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '8') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'H') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(517);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(168);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(168);
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 24:
      if (lookahead == ';') ADVANCE(296);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 26:
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(499);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(501);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(396);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(487);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 139:
      if (lookahead == 'j') ADVANCE(76);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(500);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(503);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(502);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(338);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(491);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'z') ADVANCE(130);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 260:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 261:
      if (lookahead == 'w') ADVANCE(297);
      END_STATE();
    case 262:
      if (lookahead == 'x') ADVANCE(205);
      END_STATE();
    case 263:
      if (lookahead == 'z') ADVANCE(193);
      END_STATE();
    case 264:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(489);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(489);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(509);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(517);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(497);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 288:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 289:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 290:
      if (eof) ADVANCE(295);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == 'm') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == 't') ADVANCE(439);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 291:
      if (eof) ADVANCE(295);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(291)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 292:
      if (eof) ADVANCE(295);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 293:
      if (eof) ADVANCE(295);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 294:
      if (eof) ADVANCE(295);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(34);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(310);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == 'H') ADVANCE(318);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H') ADVANCE(318);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == 'H') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(391);
      if (lookahead == 'H') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(437);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(168);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 290},
  [3] = {.lex_state = 290},
  [4] = {.lex_state = 292},
  [5] = {.lex_state = 292},
  [6] = {.lex_state = 292},
  [7] = {.lex_state = 292},
  [8] = {.lex_state = 290},
  [9] = {.lex_state = 292},
  [10] = {.lex_state = 292},
  [11] = {.lex_state = 290},
  [12] = {.lex_state = 290},
  [13] = {.lex_state = 290},
  [14] = {.lex_state = 290},
  [15] = {.lex_state = 290},
  [16] = {.lex_state = 290},
  [17] = {.lex_state = 290},
  [18] = {.lex_state = 290},
  [19] = {.lex_state = 290},
  [20] = {.lex_state = 290},
  [21] = {.lex_state = 292},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 292},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 293},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 293},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 292},
  [35] = {.lex_state = 292},
  [36] = {.lex_state = 292},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 291},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 291},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 292},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 292},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 291},
  [60] = {.lex_state = 293},
  [61] = {.lex_state = 294},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 291},
  [66] = {.lex_state = 293},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 291},
  [69] = {.lex_state = 293},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 293},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 291},
  [77] = {.lex_state = 294},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 291},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 26},
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
  [135] = {.lex_state = 0},
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
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 26},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 293},
  [157] = {.lex_state = 292},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 25},
  [161] = {.lex_state = 293},
  [162] = {.lex_state = 25},
  [163] = {.lex_state = 292},
  [164] = {.lex_state = 290},
  [165] = {.lex_state = 290},
  [166] = {.lex_state = 290},
  [167] = {.lex_state = 290},
  [168] = {.lex_state = 290},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 292},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 290},
  [174] = {.lex_state = 290},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 290},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 290},
  [181] = {.lex_state = 290},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 290},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 290},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 290},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 290},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 27},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 268},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 290},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 293},
  [210] = {.lex_state = 293},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 292},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 290},
  [220] = {.lex_state = 268},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 290},
  [234] = {.lex_state = 292},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 292},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 290},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 293},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 293},
  [261] = {.lex_state = 514},
  [262] = {.lex_state = 290},
  [263] = {.lex_state = 290},
  [264] = {.lex_state = 291},
  [265] = {.lex_state = 291},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 292},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 511},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 291},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 293},
  [290] = {.lex_state = 511},
  [291] = {.lex_state = 514},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 293},
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
    [sym_command] = STATE(282),
    [sym_new] = STATE(22),
    [sym_set] = STATE(22),
    [sym_decorate] = STATE(22),
    [sym_delete] = STATE(22),
    [sym_load] = STATE(22),
    [sym_save] = STATE(22),
    [sym_export] = STATE(22),
    [aux_sym_command_repeat1] = STATE(22),
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
    STATE(43), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(96), 1,
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
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(49), 1,
      sym__align,
    STATE(130), 1,
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
    STATE(38), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(85), 1,
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
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(111), 1,
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
    STATE(41), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(111), 1,
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
  [238] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(49), 1,
      sym__align,
    STATE(130), 1,
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
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [280] = 4,
    ACTIONS(59), 1,
      aux_sym_offset_token1,
    STATE(11), 1,
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
  [312] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(46), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
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
  [354] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(38), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(85), 1,
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
  [681] = 10,
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
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
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
  [719] = 8,
    ACTIONS(113), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(115), 1,
      anon_sym_vertical,
    ACTIONS(117), 1,
      anon_sym_horizontal,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    STATE(116), 1,
      sym_offset,
    STATE(207), 1,
      sym_identifier,
    STATE(115), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(111), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [753] = 9,
    ACTIONS(121), 1,
      anon_sym_module,
    ACTIONS(123), 1,
      anon_sym_guide,
    ACTIONS(125), 1,
      anon_sym_input,
    ACTIONS(127), 1,
      anon_sym_output,
    ACTIONS(129), 1,
      anon_sym_light,
    ACTIONS(131), 1,
      anon_sym_widget,
    ACTIONS(133), 1,
      anon_sym_label,
    ACTIONS(135), 1,
      aux_sym_parameter_token1,
    STATE(117), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
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
    STATE(151), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [862] = 2,
    ACTIONS(181), 1,
      anon_sym_x,
    ACTIONS(179), 14,
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
  [882] = 2,
    ACTIONS(185), 1,
      anon_sym_x,
    ACTIONS(183), 14,
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
  [902] = 9,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(193), 1,
      aux_sym__guide_attr_token1,
    STATE(131), 1,
      sym__xy_attr,
    STATE(230), 1,
      sym__guide_attr,
    STATE(231), 1,
      sym__geometry_x_attr,
    STATE(232), 1,
      sym__relative_attr,
    ACTIONS(191), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(140), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [936] = 9,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(167), 1,
      anon_sym_output,
    ACTIONS(169), 1,
      anon_sym_parameter,
    ACTIONS(171), 1,
      anon_sym_light,
    ACTIONS(195), 1,
      anon_sym_module,
    ACTIONS(197), 1,
      anon_sym_origin,
    ACTIONS(199), 1,
      anon_sym_background,
    STATE(127), 4,
      sym__module_attr,
      sym__component_attr,
      sym_origin,
      sym_background,
    STATE(158), 4,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
  [970] = 6,
    ACTIONS(113), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(115), 1,
      anon_sym_vertical,
    ACTIONS(117), 1,
      anon_sym_horizontal,
    STATE(23), 1,
      sym_identifier,
    STATE(105), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(111), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [998] = 2,
    ACTIONS(203), 1,
      anon_sym_x,
    ACTIONS(201), 14,
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
  [1018] = 2,
    ACTIONS(207), 1,
      anon_sym_x,
    ACTIONS(205), 14,
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
  [1038] = 2,
    ACTIONS(211), 1,
      sym_width,
    ACTIONS(209), 13,
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
  [1057] = 3,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    STATE(63), 1,
      sym_offset,
    ACTIONS(213), 10,
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
  [1076] = 3,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    STATE(79), 1,
      sym_offset,
    ACTIONS(215), 10,
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
  [1095] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__scale,
    STATE(120), 1,
      sym_stretch,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1116] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(130), 1,
      sym_colour,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1137] = 4,
    ACTIONS(221), 1,
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
  [1158] = 6,
    ACTIONS(223), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_relative_token1,
    STATE(249), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(225), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1183] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(97), 1,
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
  [1204] = 2,
    ACTIONS(233), 1,
      sym_rgb,
    ACTIONS(231), 11,
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
  [1221] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(85), 1,
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
  [1242] = 2,
    ACTIONS(237), 1,
      sym_rgb,
    ACTIONS(235), 11,
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
  [1259] = 6,
    ACTIONS(189), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(193), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(239), 1,
      anon_sym_AT,
    STATE(131), 1,
      sym__x_attr,
    ACTIONS(191), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(136), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1284] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(95), 1,
      sym_colour,
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
  [1305] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      sym_rgb,
    ACTIONS(243), 10,
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
  [1324] = 3,
    ACTIONS(247), 1,
      sym_rgb,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(243), 10,
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
  [1343] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(111), 1,
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
  [1364] = 4,
    ACTIONS(255), 1,
      aux_sym__input_id_token1,
    STATE(132), 1,
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
  [1384] = 2,
    ACTIONS(259), 1,
      aux_sym_offset_token1,
    ACTIONS(257), 10,
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
  [1400] = 6,
    ACTIONS(261), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      aux_sym_relative_token1,
    STATE(258), 1,
      sym_x,
    STATE(59), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(225), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1424] = 3,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    STATE(145), 1,
      sym_offset,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1442] = 3,
    ACTIONS(271), 1,
      anon_sym_light,
    ACTIONS(273), 1,
      anon_sym_dark,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1460] = 3,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_stretch,
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
  [1478] = 3,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    STATE(107), 1,
      sym_offset,
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
  [1496] = 2,
    ACTIONS(283), 1,
      sym_rgb,
    ACTIONS(281), 10,
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
  [1512] = 6,
    ACTIONS(189), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(193), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(239), 1,
      anon_sym_AT,
    STATE(131), 1,
      sym__y_attr,
    ACTIONS(285), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(86), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1536] = 4,
    ACTIONS(255), 1,
      aux_sym__input_id_token1,
    STATE(124), 1,
      sym_part,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(289), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1556] = 2,
    ACTIONS(293), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(291), 10,
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
  [1572] = 2,
    ACTIONS(297), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(295), 10,
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
  [1588] = 3,
    ACTIONS(301), 1,
      anon_sym_timestamp,
    ACTIONS(303), 1,
      anon_sym_gzip,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1606] = 1,
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
  [1619] = 2,
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
  [1634] = 2,
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
  [1649] = 6,
    ACTIONS(311), 1,
      anon_sym_input,
    ACTIONS(313), 1,
      anon_sym_output,
    ACTIONS(315), 1,
      anon_sym_parameter,
    ACTIONS(317), 1,
      anon_sym_light,
    ACTIONS(319), 1,
      anon_sym_widget,
    STATE(259), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1672] = 2,
    ACTIONS(323), 1,
      anon_sym_timestamp,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1687] = 2,
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
  [1702] = 6,
    ACTIONS(311), 1,
      anon_sym_input,
    ACTIONS(313), 1,
      anon_sym_output,
    ACTIONS(315), 1,
      anon_sym_parameter,
    ACTIONS(317), 1,
      anon_sym_light,
    ACTIONS(319), 1,
      anon_sym_widget,
    STATE(269), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1725] = 1,
    ACTIONS(325), 10,
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
  [1738] = 2,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1753] = 6,
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
    STATE(228), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1776] = 2,
    ACTIONS(331), 1,
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
  [1791] = 1,
    ACTIONS(333), 10,
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
  [1804] = 1,
    ACTIONS(99), 10,
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
  [1817] = 2,
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
  [1832] = 2,
    ACTIONS(337), 1,
      aux_sym__geometry_x_attr_token1,
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
  [1847] = 1,
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
  [1860] = 1,
    ACTIONS(341), 10,
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
  [1873] = 2,
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
  [1888] = 2,
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
  [1903] = 2,
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
  [1918] = 1,
    ACTIONS(349), 10,
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
  [1931] = 1,
    ACTIONS(351), 10,
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
  [1944] = 1,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1956] = 1,
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
  [1968] = 6,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    ACTIONS(355), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      anon_sym_origin,
    ACTIONS(361), 1,
      aux_sym_origin_token1,
    STATE(110), 1,
      sym_offset,
    ACTIONS(357), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1990] = 1,
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
  [2002] = 1,
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
  [2014] = 1,
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
  [2026] = 1,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2038] = 1,
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
  [2050] = 1,
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
  [2062] = 1,
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
  [2074] = 1,
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
  [2086] = 1,
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
  [2098] = 1,
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
  [2110] = 1,
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
  [2122] = 1,
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
  [2134] = 1,
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
  [2146] = 1,
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
  [2158] = 1,
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
  [2170] = 1,
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
  [2182] = 1,
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
  [2194] = 1,
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
  [2206] = 1,
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
  [2218] = 1,
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
  [2230] = 1,
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
  [2242] = 1,
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
  [2254] = 1,
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
  [2266] = 1,
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
  [2278] = 1,
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
  [2290] = 1,
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
  [2302] = 1,
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
  [2314] = 1,
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
  [2326] = 1,
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
  [2338] = 1,
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
  [2350] = 1,
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
  [2362] = 1,
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
  [2374] = 1,
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
  [2386] = 1,
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
  [2398] = 1,
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
  [2410] = 1,
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
  [2422] = 1,
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
  [2434] = 1,
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
  [2446] = 1,
    ACTIONS(427), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2458] = 1,
    ACTIONS(429), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2470] = 1,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2482] = 1,
    ACTIONS(433), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2494] = 1,
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
  [2506] = 1,
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
  [2518] = 1,
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
  [2530] = 1,
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
  [2542] = 1,
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
  [2554] = 1,
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
  [2566] = 1,
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
  [2578] = 1,
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
  [2590] = 1,
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
  [2602] = 1,
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
  [2614] = 1,
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
  [2626] = 1,
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
  [2638] = 1,
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
  [2650] = 1,
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
  [2662] = 1,
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
  [2674] = 1,
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
  [2686] = 1,
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
  [2698] = 1,
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
  [2710] = 1,
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
  [2722] = 1,
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
  [2734] = 1,
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
  [2746] = 1,
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
  [2758] = 1,
    ACTIONS(477), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2770] = 2,
    ACTIONS(209), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(211), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2783] = 6,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    ACTIONS(479), 1,
      anon_sym_AT,
    ACTIONS(481), 1,
      anon_sym_origin,
    ACTIONS(483), 1,
      aux_sym_origin_token1,
    STATE(113), 1,
      sym_offset,
    ACTIONS(357), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2804] = 2,
    ACTIONS(363), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(485), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2817] = 6,
    ACTIONS(487), 1,
      anon_sym_input,
    ACTIONS(489), 1,
      anon_sym_output,
    ACTIONS(491), 1,
      anon_sym_parameter,
    ACTIONS(493), 1,
      anon_sym_light,
    ACTIONS(495), 1,
      anon_sym_widget,
    ACTIONS(497), 1,
      anon_sym_label,
  [2836] = 2,
    STATE(57), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2846] = 5,
    ACTIONS(499), 1,
      anon_sym_name,
    ACTIONS(501), 1,
      anon_sym_x,
    ACTIONS(503), 1,
      anon_sym_y,
    ACTIONS(505), 1,
      anon_sym_xy,
    ACTIONS(507), 1,
      anon_sym_part,
  [2862] = 5,
    ACTIONS(509), 1,
      aux_sym__input_id_token1,
    ACTIONS(511), 1,
      anon_sym_none,
    ACTIONS(513), 1,
      sym_rgb,
    ACTIONS(515), 1,
      sym_rgba,
    STATE(89), 1,
      sym_name,
  [2878] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(517), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2888] = 5,
    ACTIONS(519), 1,
      anon_sym_AT,
    ACTIONS(521), 1,
      aux_sym__originx_token1,
    ACTIONS(523), 1,
      aux_sym__originy_token1,
    STATE(281), 1,
      sym__originx,
    STATE(284), 1,
      sym__originy,
  [2904] = 2,
    STATE(50), 1,
      sym_y,
    ACTIONS(525), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2914] = 2,
    STATE(57), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2924] = 4,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(273), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [2937] = 4,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [2950] = 4,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [2963] = 4,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [2976] = 4,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [2989] = 3,
    ACTIONS(539), 1,
      anon_sym_project,
    ACTIONS(541), 1,
      anon_sym_script,
    STATE(123), 2,
      sym_project,
      sym_script,
  [3000] = 4,
    ACTIONS(543), 1,
      aux_sym__label_id_token1,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      sym__string,
  [3013] = 2,
    STATE(139), 1,
      sym__geometry_y_attr,
    ACTIONS(549), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3022] = 3,
    ACTIONS(551), 1,
      anon_sym_svg,
    ACTIONS(553), 1,
      anon_sym_DOTh,
    STATE(104), 2,
      sym_svg,
      sym_header,
  [3033] = 3,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(238), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [3043] = 3,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(237), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [3053] = 3,
    ACTIONS(555), 1,
      anon_sym_name,
    ACTIONS(557), 1,
      anon_sym_height,
    ACTIONS(559), 1,
      anon_sym_width,
  [3063] = 3,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      sym_offset,
  [3073] = 3,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(37), 1,
      sym_name,
    STATE(135), 1,
      sym_decoration,
  [3083] = 3,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      aux_sym__label_id_token1,
    STATE(206), 1,
      sym__component_id,
  [3093] = 3,
    ACTIONS(569), 1,
      aux_sym__input_id_token1,
    STATE(52), 1,
      sym_name,
    STATE(133), 1,
      sym__component,
  [3103] = 3,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    ACTIONS(571), 1,
      aux_sym_origin_token1,
    STATE(128), 1,
      sym_offset,
  [3113] = 3,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    ACTIONS(573), 1,
      aux_sym_origin_token1,
    STATE(143), 1,
      sym_offset,
  [3123] = 3,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym__string,
  [3133] = 3,
    ACTIONS(569), 1,
      aux_sym__input_id_token1,
    STATE(52), 1,
      sym_name,
    STATE(114), 1,
      sym__component,
  [3143] = 3,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(239), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [3153] = 3,
    ACTIONS(569), 1,
      aux_sym__input_id_token1,
    STATE(52), 1,
      sym_name,
    STATE(112), 1,
      sym__component,
  [3163] = 3,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(240), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [3173] = 3,
    ACTIONS(569), 1,
      aux_sym__input_id_token1,
    STATE(52), 1,
      sym_name,
    STATE(109), 1,
      sym__component,
  [3183] = 3,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(241), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [3193] = 3,
    ACTIONS(569), 1,
      aux_sym__input_id_token1,
    STATE(52), 1,
      sym_name,
    STATE(108), 1,
      sym__component,
  [3203] = 3,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(222), 1,
      sym__relative,
    STATE(280), 1,
      sym__offset,
  [3213] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(125), 1,
      sym_name,
  [3220] = 2,
    ACTIONS(579), 1,
      aux_sym__absolute_attr_token1,
    STATE(283), 1,
      sym__absolute_x_attr,
  [3227] = 2,
    ACTIONS(581), 1,
      anon_sym_project,
    ACTIONS(583), 1,
      anon_sym_script,
  [3234] = 2,
    ACTIONS(585), 1,
      anon_sym_panel,
    STATE(119), 1,
      sym_panel,
  [3241] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_name,
  [3248] = 2,
    ACTIONS(189), 1,
      aux_sym__relative_attr_token1,
    STATE(141), 1,
      sym__relative_attr,
  [3255] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(131), 1,
      sym_name,
  [3262] = 2,
    ACTIONS(587), 1,
      aux_sym__guide_attr_token1,
    STATE(137), 1,
      sym__guide_attr,
  [3269] = 1,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3274] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(131), 1,
      sym_part,
  [3281] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(168), 1,
      sym_name,
  [3288] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(167), 1,
      sym_name,
  [3295] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(166), 1,
      sym_name,
  [3302] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(165), 1,
      sym_name,
  [3309] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(164), 1,
      sym_name,
  [3316] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(152), 1,
      sym_name,
  [3323] = 2,
    ACTIONS(119), 1,
      aux_sym_offset_token1,
    STATE(116), 1,
      sym_offset,
  [3330] = 2,
    ACTIONS(593), 1,
      anon_sym_scale,
    ACTIONS(595), 1,
      anon_sym_stretch,
  [3337] = 2,
    ACTIONS(523), 1,
      aux_sym__originy_token1,
    STATE(94), 1,
      sym__originy,
  [3344] = 2,
    ACTIONS(521), 1,
      aux_sym__originx_token1,
    STATE(94), 1,
      sym__originx,
  [3351] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(190), 1,
      sym_name,
  [3358] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [3365] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(186), 1,
      sym_name,
  [3372] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(184), 1,
      sym_name,
  [3379] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(173), 1,
      sym_name,
  [3386] = 2,
    ACTIONS(563), 1,
      aux_sym__input_id_token1,
    STATE(174), 1,
      sym_name,
  [3393] = 2,
    ACTIONS(597), 1,
      sym_height,
    ACTIONS(599), 1,
      sym_width,
  [3400] = 2,
    ACTIONS(601), 1,
      aux_sym__absolute_attr_token1,
    STATE(121), 1,
      sym__absolute_y_attr,
  [3407] = 2,
    ACTIONS(529), 1,
      aux_sym_offset_token1,
    STATE(251), 1,
      sym__offset,
  [3414] = 2,
    ACTIONS(603), 1,
      aux_sym__guide_attr_token1,
    STATE(98), 1,
      sym_identifier,
  [3421] = 2,
    ACTIONS(605), 1,
      sym_rgb,
    ACTIONS(607), 1,
      sym_rgba,
  [3428] = 1,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [3432] = 1,
    ACTIONS(611), 1,
      anon_sym_COMMA,
  [3436] = 1,
    ACTIONS(613), 1,
      anon_sym_COMMA,
  [3440] = 1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
  [3444] = 1,
    ACTIONS(617), 1,
      anon_sym_timestamp,
  [3448] = 1,
    ACTIONS(617), 1,
      anon_sym_gzip,
  [3452] = 1,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [3456] = 1,
    ACTIONS(621), 1,
      anon_sym_with,
  [3460] = 1,
    ACTIONS(623), 1,
      anon_sym_COMMA,
  [3464] = 1,
    ACTIONS(625), 1,
      anon_sym_COMMA,
  [3468] = 1,
    ACTIONS(627), 1,
      anon_sym_COMMA,
  [3472] = 1,
    ACTIONS(629), 1,
      aux_sym_origin_token1,
  [3476] = 1,
    ACTIONS(631), 1,
      sym_height,
  [3480] = 1,
    ACTIONS(633), 1,
      aux_sym__input_id_token1,
  [3484] = 1,
    ACTIONS(631), 1,
      sym_width,
  [3488] = 1,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [3492] = 1,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
  [3496] = 1,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [3500] = 1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [3504] = 1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [3508] = 1,
    ACTIONS(645), 1,
      aux_sym_origin_token1,
  [3512] = 1,
    ACTIONS(647), 1,
      aux_sym__absolute_attr_token1,
  [3516] = 1,
    ACTIONS(649), 1,
      sym_rgba,
  [3520] = 1,
    ACTIONS(649), 1,
      sym_rgb,
  [3524] = 1,
    ACTIONS(651), 1,
      aux_sym_relative_token1,
  [3528] = 1,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
  [3532] = 1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
  [3536] = 1,
    ACTIONS(657), 1,
      anon_sym_COMMA,
  [3540] = 1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [3544] = 1,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
  [3548] = 1,
    ACTIONS(663), 1,
      aux_sym_absolute_token1,
  [3552] = 1,
    ACTIONS(665), 1,
      aux_sym__input_id_token1,
  [3556] = 1,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
  [3560] = 1,
    ACTIONS(667), 1,
      aux_sym__input_id_token1,
  [3564] = 1,
    ACTIONS(669), 1,
      aux_sym__input_id_token1,
  [3568] = 1,
    ACTIONS(671), 1,
      aux_sym__input_id_token1,
  [3572] = 1,
    ACTIONS(673), 1,
      anon_sym_COMMA,
  [3576] = 1,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
  [3580] = 1,
    ACTIONS(677), 1,
      aux_sym_absolute_token1,
  [3584] = 1,
    ACTIONS(679), 1,
      aux_sym__string_token2,
  [3588] = 1,
    ACTIONS(681), 1,
      aux_sym_origin_token1,
  [3592] = 1,
    ACTIONS(683), 1,
      aux_sym_origin_token1,
  [3596] = 1,
    ACTIONS(685), 1,
      aux_sym__scale_token1,
  [3600] = 1,
    ACTIONS(687), 1,
      aux_sym__scale_token1,
  [3604] = 1,
    ACTIONS(595), 1,
      anon_sym_stretch,
  [3608] = 1,
    ACTIONS(689), 1,
      sym_width,
  [3612] = 1,
    ACTIONS(691), 1,
      aux_sym__input_id_token1,
  [3616] = 1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [3620] = 1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [3624] = 1,
    ACTIONS(697), 1,
      anon_sym_COMMA,
  [3628] = 1,
    ACTIONS(699), 1,
      aux_sym__string_token1,
  [3632] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [3636] = 1,
    ACTIONS(703), 1,
      aux_sym__scale_token1,
  [3640] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [3644] = 1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [3648] = 1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [3652] = 1,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [3656] = 1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [3660] = 1,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [3664] = 1,
    ACTIONS(717), 1,
      anon_sym_COMMA,
  [3668] = 1,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
  [3672] = 1,
    ACTIONS(721), 1,
      anon_sym_COMMA,
  [3676] = 1,
    ACTIONS(723), 1,
      anon_sym_COMMA,
  [3680] = 1,
    ACTIONS(725), 1,
      anon_sym_COMMA,
  [3684] = 1,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
  [3688] = 1,
    ACTIONS(727), 1,
      anon_sym_SQUOTE,
  [3692] = 1,
    ACTIONS(729), 1,
      aux_sym_relative_token1,
  [3696] = 1,
    ACTIONS(731), 1,
      aux_sym_absolute_token1,
  [3700] = 1,
    ACTIONS(733), 1,
      aux_sym__string_token1,
  [3704] = 1,
    ACTIONS(735), 1,
      aux_sym__string_token2,
  [3708] = 1,
    ACTIONS(737), 1,
      anon_sym_COMMA,
  [3712] = 1,
    ACTIONS(739), 1,
      anon_sym_COMMA,
  [3716] = 1,
    ACTIONS(741), 1,
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
  [SMALL_STATE(23)] = 719,
  [SMALL_STATE(24)] = 753,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 902,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 970,
  [SMALL_STATE(32)] = 998,
  [SMALL_STATE(33)] = 1018,
  [SMALL_STATE(34)] = 1038,
  [SMALL_STATE(35)] = 1057,
  [SMALL_STATE(36)] = 1076,
  [SMALL_STATE(37)] = 1095,
  [SMALL_STATE(38)] = 1116,
  [SMALL_STATE(39)] = 1137,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1183,
  [SMALL_STATE(42)] = 1204,
  [SMALL_STATE(43)] = 1221,
  [SMALL_STATE(44)] = 1242,
  [SMALL_STATE(45)] = 1259,
  [SMALL_STATE(46)] = 1284,
  [SMALL_STATE(47)] = 1305,
  [SMALL_STATE(48)] = 1324,
  [SMALL_STATE(49)] = 1343,
  [SMALL_STATE(50)] = 1364,
  [SMALL_STATE(51)] = 1384,
  [SMALL_STATE(52)] = 1400,
  [SMALL_STATE(53)] = 1424,
  [SMALL_STATE(54)] = 1442,
  [SMALL_STATE(55)] = 1460,
  [SMALL_STATE(56)] = 1478,
  [SMALL_STATE(57)] = 1496,
  [SMALL_STATE(58)] = 1512,
  [SMALL_STATE(59)] = 1536,
  [SMALL_STATE(60)] = 1556,
  [SMALL_STATE(61)] = 1572,
  [SMALL_STATE(62)] = 1588,
  [SMALL_STATE(63)] = 1606,
  [SMALL_STATE(64)] = 1619,
  [SMALL_STATE(65)] = 1634,
  [SMALL_STATE(66)] = 1649,
  [SMALL_STATE(67)] = 1672,
  [SMALL_STATE(68)] = 1687,
  [SMALL_STATE(69)] = 1702,
  [SMALL_STATE(70)] = 1725,
  [SMALL_STATE(71)] = 1738,
  [SMALL_STATE(72)] = 1753,
  [SMALL_STATE(73)] = 1776,
  [SMALL_STATE(74)] = 1791,
  [SMALL_STATE(75)] = 1804,
  [SMALL_STATE(76)] = 1817,
  [SMALL_STATE(77)] = 1832,
  [SMALL_STATE(78)] = 1847,
  [SMALL_STATE(79)] = 1860,
  [SMALL_STATE(80)] = 1873,
  [SMALL_STATE(81)] = 1888,
  [SMALL_STATE(82)] = 1903,
  [SMALL_STATE(83)] = 1918,
  [SMALL_STATE(84)] = 1931,
  [SMALL_STATE(85)] = 1944,
  [SMALL_STATE(86)] = 1956,
  [SMALL_STATE(87)] = 1968,
  [SMALL_STATE(88)] = 1990,
  [SMALL_STATE(89)] = 2002,
  [SMALL_STATE(90)] = 2014,
  [SMALL_STATE(91)] = 2026,
  [SMALL_STATE(92)] = 2038,
  [SMALL_STATE(93)] = 2050,
  [SMALL_STATE(94)] = 2062,
  [SMALL_STATE(95)] = 2074,
  [SMALL_STATE(96)] = 2086,
  [SMALL_STATE(97)] = 2098,
  [SMALL_STATE(98)] = 2110,
  [SMALL_STATE(99)] = 2122,
  [SMALL_STATE(100)] = 2134,
  [SMALL_STATE(101)] = 2146,
  [SMALL_STATE(102)] = 2158,
  [SMALL_STATE(103)] = 2170,
  [SMALL_STATE(104)] = 2182,
  [SMALL_STATE(105)] = 2194,
  [SMALL_STATE(106)] = 2206,
  [SMALL_STATE(107)] = 2218,
  [SMALL_STATE(108)] = 2230,
  [SMALL_STATE(109)] = 2242,
  [SMALL_STATE(110)] = 2254,
  [SMALL_STATE(111)] = 2266,
  [SMALL_STATE(112)] = 2278,
  [SMALL_STATE(113)] = 2290,
  [SMALL_STATE(114)] = 2302,
  [SMALL_STATE(115)] = 2314,
  [SMALL_STATE(116)] = 2326,
  [SMALL_STATE(117)] = 2338,
  [SMALL_STATE(118)] = 2350,
  [SMALL_STATE(119)] = 2362,
  [SMALL_STATE(120)] = 2374,
  [SMALL_STATE(121)] = 2386,
  [SMALL_STATE(122)] = 2398,
  [SMALL_STATE(123)] = 2410,
  [SMALL_STATE(124)] = 2422,
  [SMALL_STATE(125)] = 2434,
  [SMALL_STATE(126)] = 2446,
  [SMALL_STATE(127)] = 2458,
  [SMALL_STATE(128)] = 2470,
  [SMALL_STATE(129)] = 2482,
  [SMALL_STATE(130)] = 2494,
  [SMALL_STATE(131)] = 2506,
  [SMALL_STATE(132)] = 2518,
  [SMALL_STATE(133)] = 2530,
  [SMALL_STATE(134)] = 2542,
  [SMALL_STATE(135)] = 2554,
  [SMALL_STATE(136)] = 2566,
  [SMALL_STATE(137)] = 2578,
  [SMALL_STATE(138)] = 2590,
  [SMALL_STATE(139)] = 2602,
  [SMALL_STATE(140)] = 2614,
  [SMALL_STATE(141)] = 2626,
  [SMALL_STATE(142)] = 2638,
  [SMALL_STATE(143)] = 2650,
  [SMALL_STATE(144)] = 2662,
  [SMALL_STATE(145)] = 2674,
  [SMALL_STATE(146)] = 2686,
  [SMALL_STATE(147)] = 2698,
  [SMALL_STATE(148)] = 2710,
  [SMALL_STATE(149)] = 2722,
  [SMALL_STATE(150)] = 2734,
  [SMALL_STATE(151)] = 2746,
  [SMALL_STATE(152)] = 2758,
  [SMALL_STATE(153)] = 2770,
  [SMALL_STATE(154)] = 2783,
  [SMALL_STATE(155)] = 2804,
  [SMALL_STATE(156)] = 2817,
  [SMALL_STATE(157)] = 2836,
  [SMALL_STATE(158)] = 2846,
  [SMALL_STATE(159)] = 2862,
  [SMALL_STATE(160)] = 2878,
  [SMALL_STATE(161)] = 2888,
  [SMALL_STATE(162)] = 2904,
  [SMALL_STATE(163)] = 2914,
  [SMALL_STATE(164)] = 2924,
  [SMALL_STATE(165)] = 2937,
  [SMALL_STATE(166)] = 2950,
  [SMALL_STATE(167)] = 2963,
  [SMALL_STATE(168)] = 2976,
  [SMALL_STATE(169)] = 2989,
  [SMALL_STATE(170)] = 3000,
  [SMALL_STATE(171)] = 3013,
  [SMALL_STATE(172)] = 3022,
  [SMALL_STATE(173)] = 3033,
  [SMALL_STATE(174)] = 3043,
  [SMALL_STATE(175)] = 3053,
  [SMALL_STATE(176)] = 3063,
  [SMALL_STATE(177)] = 3073,
  [SMALL_STATE(178)] = 3083,
  [SMALL_STATE(179)] = 3093,
  [SMALL_STATE(180)] = 3103,
  [SMALL_STATE(181)] = 3113,
  [SMALL_STATE(182)] = 3123,
  [SMALL_STATE(183)] = 3133,
  [SMALL_STATE(184)] = 3143,
  [SMALL_STATE(185)] = 3153,
  [SMALL_STATE(186)] = 3163,
  [SMALL_STATE(187)] = 3173,
  [SMALL_STATE(188)] = 3183,
  [SMALL_STATE(189)] = 3193,
  [SMALL_STATE(190)] = 3203,
  [SMALL_STATE(191)] = 3213,
  [SMALL_STATE(192)] = 3220,
  [SMALL_STATE(193)] = 3227,
  [SMALL_STATE(194)] = 3234,
  [SMALL_STATE(195)] = 3241,
  [SMALL_STATE(196)] = 3248,
  [SMALL_STATE(197)] = 3255,
  [SMALL_STATE(198)] = 3262,
  [SMALL_STATE(199)] = 3269,
  [SMALL_STATE(200)] = 3274,
  [SMALL_STATE(201)] = 3281,
  [SMALL_STATE(202)] = 3288,
  [SMALL_STATE(203)] = 3295,
  [SMALL_STATE(204)] = 3302,
  [SMALL_STATE(205)] = 3309,
  [SMALL_STATE(206)] = 3316,
  [SMALL_STATE(207)] = 3323,
  [SMALL_STATE(208)] = 3330,
  [SMALL_STATE(209)] = 3337,
  [SMALL_STATE(210)] = 3344,
  [SMALL_STATE(211)] = 3351,
  [SMALL_STATE(212)] = 3358,
  [SMALL_STATE(213)] = 3365,
  [SMALL_STATE(214)] = 3372,
  [SMALL_STATE(215)] = 3379,
  [SMALL_STATE(216)] = 3386,
  [SMALL_STATE(217)] = 3393,
  [SMALL_STATE(218)] = 3400,
  [SMALL_STATE(219)] = 3407,
  [SMALL_STATE(220)] = 3414,
  [SMALL_STATE(221)] = 3421,
  [SMALL_STATE(222)] = 3428,
  [SMALL_STATE(223)] = 3432,
  [SMALL_STATE(224)] = 3436,
  [SMALL_STATE(225)] = 3440,
  [SMALL_STATE(226)] = 3444,
  [SMALL_STATE(227)] = 3448,
  [SMALL_STATE(228)] = 3452,
  [SMALL_STATE(229)] = 3456,
  [SMALL_STATE(230)] = 3460,
  [SMALL_STATE(231)] = 3464,
  [SMALL_STATE(232)] = 3468,
  [SMALL_STATE(233)] = 3472,
  [SMALL_STATE(234)] = 3476,
  [SMALL_STATE(235)] = 3480,
  [SMALL_STATE(236)] = 3484,
  [SMALL_STATE(237)] = 3488,
  [SMALL_STATE(238)] = 3492,
  [SMALL_STATE(239)] = 3496,
  [SMALL_STATE(240)] = 3500,
  [SMALL_STATE(241)] = 3504,
  [SMALL_STATE(242)] = 3508,
  [SMALL_STATE(243)] = 3512,
  [SMALL_STATE(244)] = 3516,
  [SMALL_STATE(245)] = 3520,
  [SMALL_STATE(246)] = 3524,
  [SMALL_STATE(247)] = 3528,
  [SMALL_STATE(248)] = 3532,
  [SMALL_STATE(249)] = 3536,
  [SMALL_STATE(250)] = 3540,
  [SMALL_STATE(251)] = 3544,
  [SMALL_STATE(252)] = 3548,
  [SMALL_STATE(253)] = 3552,
  [SMALL_STATE(254)] = 3556,
  [SMALL_STATE(255)] = 3560,
  [SMALL_STATE(256)] = 3564,
  [SMALL_STATE(257)] = 3568,
  [SMALL_STATE(258)] = 3572,
  [SMALL_STATE(259)] = 3576,
  [SMALL_STATE(260)] = 3580,
  [SMALL_STATE(261)] = 3584,
  [SMALL_STATE(262)] = 3588,
  [SMALL_STATE(263)] = 3592,
  [SMALL_STATE(264)] = 3596,
  [SMALL_STATE(265)] = 3600,
  [SMALL_STATE(266)] = 3604,
  [SMALL_STATE(267)] = 3608,
  [SMALL_STATE(268)] = 3612,
  [SMALL_STATE(269)] = 3616,
  [SMALL_STATE(270)] = 3620,
  [SMALL_STATE(271)] = 3624,
  [SMALL_STATE(272)] = 3628,
  [SMALL_STATE(273)] = 3632,
  [SMALL_STATE(274)] = 3636,
  [SMALL_STATE(275)] = 3640,
  [SMALL_STATE(276)] = 3644,
  [SMALL_STATE(277)] = 3648,
  [SMALL_STATE(278)] = 3652,
  [SMALL_STATE(279)] = 3656,
  [SMALL_STATE(280)] = 3660,
  [SMALL_STATE(281)] = 3664,
  [SMALL_STATE(282)] = 3668,
  [SMALL_STATE(283)] = 3672,
  [SMALL_STATE(284)] = 3676,
  [SMALL_STATE(285)] = 3680,
  [SMALL_STATE(286)] = 3684,
  [SMALL_STATE(287)] = 3688,
  [SMALL_STATE(288)] = 3692,
  [SMALL_STATE(289)] = 3696,
  [SMALL_STATE(290)] = 3700,
  [SMALL_STATE(291)] = 3704,
  [SMALL_STATE(292)] = 3708,
  [SMALL_STATE(293)] = 3712,
  [SMALL_STATE(294)] = 3716,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 9),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 12),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 12),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(247),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(193),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(169),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(194),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 19),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 8),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 7),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 11),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 11),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 11),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 10),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 6),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 13),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [719] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
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
