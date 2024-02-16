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
#define STATE_COUNT 312
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 170
#define ALIAS_COUNT 1
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_text = 12,
  anon_sym_font = 13,
  anon_sym_size = 14,
  anon_sym_halign = 15,
  anon_sym_valign = 16,
  anon_sym_align = 17,
  anon_sym_colour = 18,
  anon_sym_color = 19,
  anon_sym_AT = 20,
  aux_sym__absolute_attr_token1 = 21,
  anon_sym_COMMA = 22,
  aux_sym__relative_attr_token1 = 23,
  anon_sym_left = 24,
  anon_sym_centre = 25,
  anon_sym_center = 26,
  anon_sym_right = 27,
  aux_sym__geometry_x_attr_token1 = 28,
  anon_sym_top = 29,
  anon_sym_middle = 30,
  anon_sym_bottom = 31,
  aux_sym__guide_attr_token1 = 32,
  aux_sym__guide_attr_token2 = 33,
  anon_sym_decorate = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  anon_sym_with = 37,
  anon_sym_delete = 38,
  anon_sym_guide = 39,
  anon_sym_input = 40,
  aux_sym__input_id_token1 = 41,
  anon_sym_output = 42,
  anon_sym_parameter = 43,
  anon_sym_light = 44,
  anon_sym_widget = 45,
  anon_sym_label = 46,
  aux_sym__label_id_token1 = 47,
  anon_sym_DQUOTE = 48,
  aux_sym__label_id_token2 = 49,
  anon_sym_SQUOTE = 50,
  aux_sym__label_id_token3 = 51,
  anon_sym_decoration = 52,
  aux_sym__decoration_id_token1 = 53,
  anon_sym_load = 54,
  anon_sym_project = 55,
  anon_sym_script = 56,
  anon_sym_save = 57,
  anon_sym_export = 58,
  anon_sym_timestamp = 59,
  anon_sym_gzip = 60,
  aux_sym_parameter_token1 = 61,
  sym_fontsize = 62,
  anon_sym_baseline = 63,
  anon_sym_scale = 64,
  aux_sym__scale_token1 = 65,
  anon_sym_stretch = 66,
  anon_sym_origin = 67,
  aux_sym_origin_token1 = 68,
  aux_sym__originx_token1 = 69,
  aux_sym__originy_token1 = 70,
  anon_sym_background = 71,
  anon_sym_none = 72,
  sym_rgb = 73,
  sym_rgba = 74,
  anon_sym_panel = 75,
  anon_sym_svg = 76,
  anon_sym_dark = 77,
  anon_sym_DOTh = 78,
  sym_height = 79,
  sym_width = 80,
  anon_sym_vertical = 81,
  anon_sym_horizontal = 82,
  aux_sym_offset_token1 = 83,
  aux_sym__string_token1 = 84,
  aux_sym_absolute_token1 = 85,
  aux_sym_relative_token1 = 86,
  sym_command = 87,
  sym_new = 88,
  sym_set = 89,
  sym__module_attr = 90,
  sym__component_attr = 91,
  sym__label_attr = 92,
  sym__x_attr = 93,
  sym__y_attr = 94,
  sym__xy_attr = 95,
  sym__absolute_attr = 96,
  sym__absolute_x_attr = 97,
  sym__absolute_y_attr = 98,
  sym__absolute_xy_attr = 99,
  sym__relative_attr = 100,
  sym__relative_xy_attr = 101,
  sym__geometry_x_attr = 102,
  sym__geometry_y_attr = 103,
  sym__geometry_xy_attr = 104,
  sym__guide_attr = 105,
  sym__guide_xy_attr = 106,
  sym_decorate = 107,
  sym_delete = 108,
  sym__guideline_id = 109,
  sym__input_id = 110,
  sym__output_id = 111,
  sym__parameter_id = 112,
  sym__light_id = 113,
  sym__widget_id = 114,
  sym__label_id = 115,
  sym__decoration_id = 116,
  sym__component_id = 117,
  sym_load = 118,
  sym_save = 119,
  sym_export = 120,
  sym_project = 121,
  sym_script = 122,
  sym__entity = 123,
  sym__input = 124,
  sym__output = 125,
  sym__parameter = 126,
  sym__light = 127,
  sym__widget = 128,
  sym_module = 129,
  sym_input = 130,
  sym_output = 131,
  sym_parameter = 132,
  sym_light = 133,
  sym_widget = 134,
  sym__component = 135,
  sym_label = 136,
  sym_font = 137,
  sym__align = 138,
  sym_halign = 139,
  sym_valign = 140,
  sym_colour = 141,
  sym_decoration = 142,
  sym__scale = 143,
  sym_stretch = 144,
  sym_origin = 145,
  sym__originx = 146,
  sym__originy = 147,
  sym_background = 148,
  sym_panel = 149,
  sym_svg = 150,
  sym_header = 151,
  sym_name = 152,
  sym_part = 153,
  sym_guide = 154,
  sym_identifier = 155,
  sym_vertical = 156,
  sym_horizontal = 157,
  sym_geometry = 158,
  sym_offset = 159,
  sym__offset = 160,
  sym_guideline = 161,
  sym__string = 162,
  sym_absolute = 163,
  sym_relative = 164,
  sym__decorate = 165,
  sym__relative = 166,
  sym_x = 167,
  sym_y = 168,
  aux_sym_command_repeat1 = 169,
  alias_sym_dy = 170,
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
  [anon_sym_text] = "text",
  [anon_sym_font] = "font",
  [anon_sym_size] = "size",
  [anon_sym_halign] = "halign",
  [anon_sym_valign] = "valign",
  [anon_sym_align] = "align",
  [anon_sym_colour] = "colour",
  [anon_sym_color] = "color",
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__label_id_token2] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__label_id_token3] = "identifier",
  [anon_sym_decoration] = "decoration",
  [aux_sym__decoration_id_token1] = "identifier",
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
  [aux_sym__string_token1] = "string",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_relative_token1] = "x",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__component_attr] = "_component_attr",
  [sym__label_attr] = "_label_attr",
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
  [anon_sym_text] = anon_sym_text,
  [anon_sym_font] = anon_sym_font,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_halign] = anon_sym_halign,
  [anon_sym_valign] = anon_sym_valign,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_colour] = anon_sym_colour,
  [anon_sym_color] = anon_sym_color,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__label_id_token2] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__label_id_token3] = sym_identifier,
  [anon_sym_decoration] = anon_sym_decoration,
  [aux_sym__decoration_id_token1] = sym_identifier,
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
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_relative_token1] = sym_x,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__component_attr] = sym__component_attr,
  [sym__label_attr] = sym__label_attr,
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
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_halign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_id_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_id_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_decoration] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__decoration_id_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym__string_token1] = {
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
  [sym__label_attr] = {
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
    [1] = aux_sym__string_token1,
  },
  [9] = {
    [0] = sym_absolute,
  },
  [10] = {
    [2] = sym_y,
  },
  [11] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [12] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [13] = {
    [3] = sym_y,
  },
  [14] = {
    [2] = alias_sym_dy,
  },
  [15] = {
    [1] = sym_input,
  },
  [16] = {
    [1] = sym_output,
  },
  [17] = {
    [1] = sym_parameter,
  },
  [18] = {
    [1] = sym_widget,
  },
  [19] = {
    [1] = sym_label,
  },
  [20] = {
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
  [51] = 9,
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
  [71] = 13,
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
  [83] = 16,
  [84] = 84,
  [85] = 85,
  [86] = 16,
  [87] = 87,
  [88] = 19,
  [89] = 89,
  [90] = 12,
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
  [147] = 68,
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
  [160] = 38,
  [161] = 161,
  [162] = 135,
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
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 244,
  [304] = 294,
  [305] = 296,
  [306] = 245,
  [307] = 276,
  [308] = 275,
  [309] = 247,
  [310] = 250,
  [311] = 248,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(499);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(342);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'g') ADVANCE(276);
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(328);
      if (lookahead == 'y') ADVANCE(329);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(499);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(553);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(497);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'U') ADVANCE(545);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '5') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(552);
      if (lookahead == 'm') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '8') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == 'H') ADVANCE(546);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(179);
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 25:
      if (lookahead == ';') ADVANCE(319);
      END_STATE();
    case 26:
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'b') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == 'v') ADVANCE(387);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(542);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(544);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(427);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(530);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 146:
      if (lookahead == 'j') ADVANCE(78);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(543);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(532);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(366);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(534);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(556);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(519);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(534);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == 'z') ADVANCE(134);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 281:
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(320);
      END_STATE();
    case 283:
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 284:
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 285:
      if (lookahead == 'z') ADVANCE(75);
      END_STATE();
    case 286:
      if (lookahead == 'z') ADVANCE(212);
      END_STATE();
    case 287:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(552);
      if (lookahead == 'm') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(291)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 311:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 312:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 313:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == 't') ADVANCE(470);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 314:
      if (eof) ADVANCE(318);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 315:
      if (eof) ADVANCE(318);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'g') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == 'w') ADVANCE(138);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 316:
      if (eof) ADVANCE(318);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(340);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'g') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(138);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 317:
      if (eof) ADVANCE(318);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 's') ADVANCE(35);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'H') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'H') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == 'H') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H') ADVANCE(366);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(366);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == 'H') ADVANCE(420);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(420);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(554);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(554);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__decoration_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(179);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(500);
      if (lookahead == '\'') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 313},
  [3] = {.lex_state = 313},
  [4] = {.lex_state = 315},
  [5] = {.lex_state = 315},
  [6] = {.lex_state = 315},
  [7] = {.lex_state = 315},
  [8] = {.lex_state = 315},
  [9] = {.lex_state = 313},
  [10] = {.lex_state = 315},
  [11] = {.lex_state = 313},
  [12] = {.lex_state = 313},
  [13] = {.lex_state = 313},
  [14] = {.lex_state = 313},
  [15] = {.lex_state = 313},
  [16] = {.lex_state = 313},
  [17] = {.lex_state = 313},
  [18] = {.lex_state = 313},
  [19] = {.lex_state = 313},
  [20] = {.lex_state = 313},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 315},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 315},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 316},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 51},
  [29] = {.lex_state = 315},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 51},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 315},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 315},
  [49] = {.lex_state = 315},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 314},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 315},
  [59] = {.lex_state = 315},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 316},
  [63] = {.lex_state = 317},
  [64] = {.lex_state = 314},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 314},
  [67] = {.lex_state = 315},
  [68] = {.lex_state = 51},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 314},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 315},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 314},
  [84] = {.lex_state = 315},
  [85] = {.lex_state = 316},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 314},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 314},
  [91] = {.lex_state = 315},
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
  [128] = {.lex_state = 27},
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
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 27},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 315},
  [164] = {.lex_state = 26},
  [165] = {.lex_state = 316},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 26},
  [168] = {.lex_state = 315},
  [169] = {.lex_state = 315},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 315},
  [172] = {.lex_state = 315},
  [173] = {.lex_state = 315},
  [174] = {.lex_state = 313},
  [175] = {.lex_state = 313},
  [176] = {.lex_state = 313},
  [177] = {.lex_state = 313},
  [178] = {.lex_state = 313},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 313},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 313},
  [195] = {.lex_state = 313},
  [196] = {.lex_state = 313},
  [197] = {.lex_state = 313},
  [198] = {.lex_state = 313},
  [199] = {.lex_state = 313},
  [200] = {.lex_state = 313},
  [201] = {.lex_state = 313},
  [202] = {.lex_state = 291},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 51},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 315},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 316},
  [216] = {.lex_state = 316},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 291},
  [224] = {.lex_state = 51},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 313},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 313},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 315},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 314},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 314},
  [249] = {.lex_state = 313},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 313},
  [252] = {.lex_state = 315},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 313},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 313},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 507},
  [271] = {.lex_state = 502},
  [272] = {.lex_state = 315},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 316},
  [275] = {.lex_state = 507},
  [276] = {.lex_state = 502},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 313},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 51},
  [281] = {.lex_state = 317},
  [282] = {.lex_state = 317},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 317},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 314},
  [307] = {.lex_state = 502},
  [308] = {.lex_state = 507},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 314},
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
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_halign] = ACTIONS(1),
    [anon_sym_valign] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_colour] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(300),
    [sym_new] = STATE(27),
    [sym_set] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym_delete] = STATE(27),
    [sym_load] = STATE(27),
    [sym_save] = STATE(27),
    [sym_export] = STATE(27),
    [aux_sym_command_repeat1] = STATE(27),
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
    STATE(39), 1,
      sym__align,
    STATE(42), 1,
      sym_valign,
    STATE(46), 1,
      sym_halign,
    STATE(154), 1,
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
      sym__align,
    STATE(46), 1,
      sym_halign,
    STATE(105), 1,
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
    STATE(42), 1,
      sym_valign,
    STATE(46), 1,
      sym_halign,
    STATE(53), 1,
      sym__align,
    STATE(145), 1,
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
    STATE(42), 1,
      sym_valign,
    STATE(46), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(119), 1,
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
    STATE(42), 1,
      sym_valign,
    STATE(45), 1,
      sym__align,
    STATE(46), 1,
      sym_halign,
    STATE(105), 1,
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
  [238] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(42), 1,
      sym_valign,
    STATE(46), 1,
      sym_halign,
    STATE(52), 1,
      sym__align,
    STATE(157), 1,
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
  [280] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(42), 1,
      sym_valign,
    STATE(46), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(119), 1,
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
  [322] = 4,
    ACTIONS(61), 1,
      aux_sym_offset_token1,
    STATE(19), 1,
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
    STATE(42), 1,
      sym_valign,
    STATE(46), 1,
      sym_halign,
    STATE(53), 1,
      sym__align,
    STATE(145), 1,
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
      anon_sym_x,
    ACTIONS(103), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_text,
      anon_sym_font,
      anon_sym_size,
      anon_sym_halign,
      anon_sym_valign,
      anon_sym_align,
      anon_sym_colour,
      anon_sym_color,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [681] = 2,
    ACTIONS(109), 1,
      sym_rgb,
    ACTIONS(107), 19,
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
  [706] = 2,
    ACTIONS(113), 1,
      anon_sym_x,
    ACTIONS(111), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_text,
      anon_sym_font,
      anon_sym_size,
      anon_sym_halign,
      anon_sym_valign,
      anon_sym_align,
      anon_sym_colour,
      anon_sym_color,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [731] = 12,
    ACTIONS(115), 1,
      anon_sym_module,
    ACTIONS(117), 1,
      anon_sym_input,
    ACTIONS(119), 1,
      anon_sym_output,
    ACTIONS(121), 1,
      anon_sym_parameter,
    ACTIONS(123), 1,
      anon_sym_light,
    ACTIONS(125), 1,
      anon_sym_widget,
    ACTIONS(127), 1,
      anon_sym_label,
    ACTIONS(129), 1,
      anon_sym_origin,
    ACTIONS(131), 1,
      anon_sym_background,
    STATE(60), 1,
      sym__label_id,
    STATE(149), 5,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym_origin,
      sym_background,
    STATE(170), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [776] = 10,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_new,
    ACTIONS(141), 1,
      anon_sym_set,
    ACTIONS(144), 1,
      anon_sym_decorate,
    ACTIONS(147), 1,
      anon_sym_delete,
    ACTIONS(150), 1,
      anon_sym_load,
    ACTIONS(153), 1,
      anon_sym_save,
    ACTIONS(156), 1,
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
  [814] = 9,
    ACTIONS(159), 1,
      anon_sym_module,
    ACTIONS(161), 1,
      anon_sym_guide,
    ACTIONS(163), 1,
      anon_sym_input,
    ACTIONS(165), 1,
      anon_sym_output,
    ACTIONS(167), 1,
      anon_sym_light,
    ACTIONS(169), 1,
      anon_sym_widget,
    ACTIONS(171), 1,
      anon_sym_label,
    ACTIONS(173), 1,
      aux_sym_parameter_token1,
    STATE(150), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [850] = 10,
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
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
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
  [888] = 8,
    ACTIONS(181), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(183), 1,
      anon_sym_vertical,
    ACTIONS(185), 1,
      anon_sym_horizontal,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    STATE(124), 1,
      sym_offset,
    STATE(231), 1,
      sym_identifier,
    STATE(123), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(179), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [922] = 9,
    ACTIONS(117), 1,
      anon_sym_input,
    ACTIONS(119), 1,
      anon_sym_output,
    ACTIONS(121), 1,
      anon_sym_parameter,
    ACTIONS(123), 1,
      anon_sym_light,
    ACTIONS(125), 1,
      anon_sym_widget,
    ACTIONS(127), 1,
      anon_sym_label,
    ACTIONS(189), 1,
      anon_sym_guide,
    ACTIONS(191), 1,
      anon_sym_decoration,
    STATE(141), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [957] = 2,
    ACTIONS(195), 1,
      anon_sym_x,
    ACTIONS(193), 14,
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
  [977] = 2,
    ACTIONS(199), 1,
      anon_sym_x,
    ACTIONS(197), 14,
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
  [997] = 2,
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
  [1017] = 9,
    ACTIONS(205), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(211), 1,
      aux_sym__guide_attr_token1,
    STATE(152), 1,
      sym__xy_attr,
    STATE(299), 1,
      sym__relative_attr,
    STATE(301), 1,
      sym__geometry_x_attr,
    STATE(302), 1,
      sym__guide_attr,
    ACTIONS(209), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(155), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1051] = 6,
    ACTIONS(181), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(183), 1,
      anon_sym_vertical,
    ACTIONS(185), 1,
      anon_sym_horizontal,
    STATE(28), 1,
      sym_identifier,
    STATE(126), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(179), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1079] = 2,
    ACTIONS(215), 1,
      anon_sym_x,
    ACTIONS(213), 14,
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
  [1099] = 2,
    ACTIONS(219), 1,
      anon_sym_x,
    ACTIONS(217), 14,
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
  [1119] = 9,
    ACTIONS(205), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(211), 1,
      aux_sym__guide_attr_token1,
    STATE(146), 1,
      sym__xy_attr,
    STATE(299), 1,
      sym__relative_attr,
    STATE(301), 1,
      sym__geometry_x_attr,
    STATE(302), 1,
      sym__guide_attr,
    ACTIONS(209), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(155), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1153] = 2,
    ACTIONS(223), 1,
      sym_width,
    ACTIONS(221), 13,
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
  [1172] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(119), 1,
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
  [1193] = 6,
    ACTIONS(225), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      aux_sym_relative_token1,
    STATE(273), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(227), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1218] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym__scale,
    STATE(115), 1,
      sym_stretch,
    ACTIONS(233), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1239] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      sym_rgb,
    ACTIONS(237), 10,
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
  [1258] = 6,
    ACTIONS(207), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(211), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_AT,
    STATE(152), 1,
      sym__x_attr,
    ACTIONS(209), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(151), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1283] = 6,
    ACTIONS(207), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(211), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_AT,
    STATE(146), 1,
      sym__x_attr,
    ACTIONS(209), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(151), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1308] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(145), 1,
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
  [1329] = 3,
    ACTIONS(241), 1,
      sym_rgb,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(237), 10,
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
  [1348] = 2,
    ACTIONS(249), 1,
      sym_rgb,
    ACTIONS(247), 11,
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
  [1365] = 3,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    STATE(74), 1,
      sym_offset,
    ACTIONS(251), 10,
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
  [1384] = 3,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    STATE(76), 1,
      sym_offset,
    ACTIONS(253), 10,
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
  [1403] = 2,
    ACTIONS(257), 1,
      sym_rgb,
    ACTIONS(255), 11,
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
  [1420] = 4,
    ACTIONS(259), 1,
      aux_sym_offset_token1,
    STATE(88), 1,
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
  [1441] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(158), 1,
      sym_colour,
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
  [1462] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(157), 1,
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
  [1483] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(105), 1,
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
  [1504] = 2,
    ACTIONS(265), 1,
      sym_rgb,
    ACTIONS(263), 10,
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
  [1520] = 3,
    ACTIONS(269), 1,
      anon_sym_light,
    ACTIONS(271), 1,
      anon_sym_dark,
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
  [1538] = 3,
    ACTIONS(275), 1,
      anon_sym_timestamp,
    ACTIONS(277), 1,
      anon_sym_gzip,
    ACTIONS(273), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1556] = 3,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    STATE(102), 1,
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
  [1574] = 5,
    STATE(42), 1,
      sym_valign,
    STATE(46), 1,
      sym_halign,
    STATE(152), 1,
      sym__align,
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
  [1596] = 10,
    ACTIONS(281), 1,
      anon_sym_x,
    ACTIONS(283), 1,
      anon_sym_y,
    ACTIONS(285), 1,
      anon_sym_xy,
    ACTIONS(287), 1,
      anon_sym_text,
    ACTIONS(289), 1,
      anon_sym_font,
    ACTIONS(291), 1,
      anon_sym_size,
    ACTIONS(293), 1,
      anon_sym_halign,
    ACTIONS(295), 1,
      anon_sym_valign,
    ACTIONS(297), 1,
      anon_sym_align,
    ACTIONS(299), 2,
      anon_sym_colour,
      anon_sym_color,
  [1628] = 6,
    ACTIONS(207), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(211), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_AT,
    STATE(152), 1,
      sym__y_attr,
    ACTIONS(301), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(153), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1652] = 2,
    ACTIONS(305), 1,
      aux_sym__geometry_x_attr_token1,
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
  [1668] = 2,
    ACTIONS(309), 1,
      aux_sym__guide_attr_token2,
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
  [1684] = 4,
    ACTIONS(315), 1,
      aux_sym__input_id_token1,
    STATE(137), 1,
      sym_part,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(313), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1704] = 6,
    ACTIONS(207), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(211), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_AT,
    STATE(146), 1,
      sym__y_attr,
    ACTIONS(301), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(153), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1728] = 4,
    ACTIONS(315), 1,
      aux_sym__input_id_token1,
    STATE(92), 1,
      sym_part,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(319), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1748] = 3,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    STATE(114), 1,
      sym_offset,
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
  [1766] = 2,
    ACTIONS(325), 1,
      aux_sym_offset_token1,
    ACTIONS(323), 10,
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
  [1782] = 6,
    ACTIONS(327), 1,
      anon_sym_AT,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      aux_sym_relative_token1,
    STATE(246), 1,
      sym_x,
    STATE(64), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(227), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1806] = 3,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_stretch,
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
  [1824] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(73), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1839] = 2,
    ACTIONS(339), 1,
      anon_sym_COMMA,
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
  [1854] = 2,
    ACTIONS(343), 1,
      anon_sym_COMMA,
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
  [1869] = 1,
    ACTIONS(345), 10,
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
  [1882] = 6,
    ACTIONS(347), 1,
      anon_sym_input,
    ACTIONS(349), 1,
      anon_sym_output,
    ACTIONS(351), 1,
      anon_sym_parameter,
    ACTIONS(353), 1,
      anon_sym_light,
    ACTIONS(355), 1,
      anon_sym_widget,
    STATE(297), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1905] = 1,
    ACTIONS(357), 10,
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
  [1918] = 2,
    ACTIONS(359), 1,
      anon_sym_COMMA,
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
  [1933] = 2,
    ACTIONS(363), 1,
      anon_sym_COMMA,
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
  [1948] = 2,
    ACTIONS(365), 1,
      anon_sym_COMMA,
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
  [1963] = 1,
    ACTIONS(367), 10,
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
  [1976] = 1,
    ACTIONS(369), 10,
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
  [1989] = 1,
    ACTIONS(371), 10,
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
  [2002] = 2,
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
  [2017] = 6,
    ACTIONS(117), 1,
      anon_sym_input,
    ACTIONS(119), 1,
      anon_sym_output,
    ACTIONS(121), 1,
      anon_sym_parameter,
    ACTIONS(123), 1,
      anon_sym_light,
    ACTIONS(125), 1,
      anon_sym_widget,
    STATE(293), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [2040] = 2,
    ACTIONS(375), 1,
      aux_sym__geometry_x_attr_token1,
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
  [2055] = 1,
    ACTIONS(83), 10,
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
  [2068] = 2,
    ACTIONS(379), 1,
      anon_sym_timestamp,
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
  [2083] = 2,
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
  [2098] = 1,
    ACTIONS(381), 10,
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
  [2111] = 2,
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
  [2126] = 6,
    ACTIONS(347), 1,
      anon_sym_input,
    ACTIONS(349), 1,
      anon_sym_output,
    ACTIONS(351), 1,
      anon_sym_parameter,
    ACTIONS(353), 1,
      anon_sym_light,
    ACTIONS(355), 1,
      anon_sym_widget,
    STATE(253), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2149] = 1,
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
  [2161] = 1,
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
  [2173] = 1,
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
  [2185] = 1,
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
  [2197] = 1,
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
  [2209] = 1,
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
  [2221] = 1,
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
  [2233] = 1,
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
  [2245] = 1,
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
  [2257] = 1,
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
  [2269] = 1,
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
  [2281] = 1,
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
  [2293] = 1,
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
  [2305] = 1,
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
  [2317] = 1,
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
  [2329] = 1,
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
  [2341] = 1,
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
  [2353] = 1,
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
  [2365] = 1,
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
  [2377] = 1,
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
  [2389] = 1,
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
  [2401] = 1,
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
  [2413] = 1,
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
  [2425] = 1,
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
  [2437] = 1,
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
  [2449] = 1,
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
  [2461] = 1,
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
  [2473] = 1,
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
  [2485] = 1,
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
  [2497] = 1,
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
  [2509] = 1,
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
  [2521] = 1,
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
  [2533] = 1,
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
  [2545] = 1,
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
  [2557] = 1,
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
  [2569] = 1,
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
  [2581] = 6,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    ACTIONS(447), 1,
      anon_sym_AT,
    ACTIONS(451), 1,
      anon_sym_origin,
    ACTIONS(453), 1,
      aux_sym_origin_token1,
    STATE(118), 1,
      sym_offset,
    ACTIONS(449), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2603] = 1,
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
  [2615] = 1,
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
  [2627] = 1,
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
  [2639] = 1,
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
  [2651] = 1,
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
  [2663] = 1,
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
  [2675] = 1,
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
  [2687] = 1,
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
  [2699] = 1,
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
  [2711] = 1,
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
  [2723] = 1,
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
  [2735] = 1,
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
  [2747] = 1,
    ACTIONS(479), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2759] = 1,
    ACTIONS(481), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2771] = 1,
    ACTIONS(483), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2783] = 1,
    ACTIONS(485), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2795] = 1,
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
  [2807] = 1,
    ACTIONS(487), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2819] = 1,
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
  [2831] = 1,
    ACTIONS(489), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2843] = 1,
    ACTIONS(491), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2855] = 1,
    ACTIONS(493), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2867] = 1,
    ACTIONS(495), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2879] = 1,
    ACTIONS(497), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2891] = 1,
    ACTIONS(499), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2903] = 1,
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
  [2915] = 1,
    ACTIONS(501), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2927] = 1,
    ACTIONS(503), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2939] = 1,
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
  [2951] = 1,
    ACTIONS(505), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2963] = 1,
    ACTIONS(507), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2975] = 2,
    ACTIONS(221), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(223), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2988] = 6,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      anon_sym_origin,
    ACTIONS(513), 1,
      aux_sym_origin_token1,
    STATE(121), 1,
      sym_offset,
    ACTIONS(449), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3009] = 2,
    ACTIONS(467), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(515), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3022] = 6,
    ACTIONS(517), 1,
      anon_sym_input,
    ACTIONS(519), 1,
      anon_sym_output,
    ACTIONS(521), 1,
      anon_sym_parameter,
    ACTIONS(523), 1,
      anon_sym_light,
    ACTIONS(525), 1,
      anon_sym_widget,
    ACTIONS(527), 1,
      anon_sym_label,
  [3041] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(529), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3051] = 5,
    ACTIONS(531), 1,
      anon_sym_AT,
    ACTIONS(533), 1,
      aux_sym__originx_token1,
    ACTIONS(535), 1,
      aux_sym__originy_token1,
    STATE(265), 1,
      sym__originy,
    STATE(266), 1,
      sym__originx,
  [3067] = 5,
    ACTIONS(537), 1,
      aux_sym__input_id_token1,
    ACTIONS(539), 1,
      anon_sym_none,
    ACTIONS(541), 1,
      sym_rgb,
    ACTIONS(543), 1,
      sym_rgba,
    STATE(106), 1,
      sym_name,
  [3083] = 2,
    STATE(66), 1,
      sym_y,
    ACTIONS(545), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3093] = 2,
    STATE(55), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3103] = 2,
    STATE(55), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3113] = 5,
    ACTIONS(547), 1,
      anon_sym_name,
    ACTIONS(549), 1,
      anon_sym_x,
    ACTIONS(551), 1,
      anon_sym_y,
    ACTIONS(553), 1,
      anon_sym_xy,
    ACTIONS(555), 1,
      anon_sym_part,
  [3129] = 2,
    STATE(152), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3139] = 2,
    STATE(152), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3149] = 2,
    STATE(100), 1,
      sym__geometry_y_attr,
    ACTIONS(557), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3158] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(237), 1,
      sym__offset,
    STATE(238), 1,
      sym__relative,
  [3171] = 4,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym__offset,
    STATE(239), 1,
      sym__relative,
  [3184] = 4,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym__offset,
    STATE(240), 1,
      sym__relative,
  [3197] = 4,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym__offset,
    STATE(241), 1,
      sym__relative,
  [3210] = 4,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym__offset,
    STATE(242), 1,
      sym__relative,
  [3223] = 3,
    ACTIONS(571), 1,
      anon_sym_svg,
    ACTIONS(573), 1,
      anon_sym_DOTh,
    STATE(110), 2,
      sym_svg,
      sym_header,
  [3234] = 4,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
    ACTIONS(579), 1,
      aux_sym__string_token1,
    STATE(40), 1,
      sym__string,
  [3247] = 3,
    ACTIONS(581), 1,
      anon_sym_project,
    ACTIONS(583), 1,
      anon_sym_script,
    STATE(138), 2,
      sym_project,
      sym_script,
  [3258] = 4,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      aux_sym__string_token1,
    STATE(152), 1,
      sym__string,
  [3271] = 3,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(234), 1,
      sym__relative,
    STATE(237), 1,
      sym__offset,
  [3281] = 3,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(41), 1,
      sym_name,
    STATE(94), 1,
      sym_decoration,
  [3291] = 3,
    ACTIONS(593), 1,
      aux_sym__input_id_token1,
    STATE(69), 1,
      sym_name,
    STATE(125), 1,
      sym__component,
  [3301] = 3,
    ACTIONS(593), 1,
      aux_sym__input_id_token1,
    STATE(69), 1,
      sym_name,
    STATE(122), 1,
      sym__component,
  [3311] = 3,
    ACTIONS(593), 1,
      aux_sym__input_id_token1,
    STATE(69), 1,
      sym_name,
    STATE(120), 1,
      sym__component,
  [3321] = 3,
    ACTIONS(593), 1,
      aux_sym__input_id_token1,
    STATE(69), 1,
      sym_name,
    STATE(117), 1,
      sym__component,
  [3331] = 3,
    ACTIONS(593), 1,
      aux_sym__input_id_token1,
    STATE(69), 1,
      sym_name,
    STATE(116), 1,
      sym__component,
  [3341] = 3,
    ACTIONS(595), 1,
      anon_sym_name,
    ACTIONS(597), 1,
      anon_sym_height,
    ACTIONS(599), 1,
      anon_sym_width,
  [3351] = 3,
    ACTIONS(601), 1,
      aux_sym__label_id_token1,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
  [3361] = 3,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      aux_sym__decoration_id_token1,
    STATE(228), 1,
      sym__component_id,
  [3371] = 3,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(152), 1,
      sym_colour,
  [3381] = 3,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    ACTIONS(611), 1,
      aux_sym_origin_token1,
    STATE(98), 1,
      sym_offset,
  [3391] = 3,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    ACTIONS(613), 1,
      aux_sym_origin_token1,
    STATE(96), 1,
      sym_offset,
  [3401] = 3,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(237), 1,
      sym__offset,
    STATE(258), 1,
      sym__relative,
  [3411] = 3,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(237), 1,
      sym__offset,
    STATE(259), 1,
      sym__relative,
  [3421] = 3,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(237), 1,
      sym__offset,
    STATE(260), 1,
      sym__relative,
  [3431] = 3,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(237), 1,
      sym__offset,
    STATE(261), 1,
      sym__relative,
  [3441] = 3,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      sym_offset,
  [3451] = 3,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(237), 1,
      sym__offset,
    STATE(256), 1,
      sym__relative,
  [3461] = 2,
    ACTIONS(617), 1,
      aux_sym__guide_attr_token1,
    STATE(101), 1,
      sym_identifier,
  [3468] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(176), 1,
      sym_name,
  [3475] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(198), 1,
      sym_name,
  [3482] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(199), 1,
      sym_name,
  [3489] = 2,
    ACTIONS(619), 1,
      anon_sym_project,
    ACTIONS(621), 1,
      anon_sym_script,
  [3496] = 2,
    ACTIONS(623), 1,
      anon_sym_panel,
    STATE(129), 1,
      sym_panel,
  [3503] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(212), 1,
      sym_name,
  [3510] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(201), 1,
      sym_name,
  [3517] = 2,
    ACTIONS(625), 1,
      aux_sym__absolute_attr_token1,
    STATE(262), 1,
      sym__absolute_x_attr,
  [3524] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(183), 1,
      sym_name,
  [3531] = 2,
    ACTIONS(627), 1,
      sym_height,
    ACTIONS(629), 1,
      sym_width,
  [3538] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(136), 1,
      sym_name,
  [3545] = 2,
    ACTIONS(631), 1,
      anon_sym_scale,
    ACTIONS(633), 1,
      anon_sym_stretch,
  [3552] = 2,
    ACTIONS(533), 1,
      aux_sym__originx_token1,
    STATE(144), 1,
      sym__originx,
  [3559] = 2,
    ACTIONS(535), 1,
      aux_sym__originy_token1,
    STATE(144), 1,
      sym__originy,
  [3566] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(146), 1,
      sym_name,
  [3573] = 2,
    ACTIONS(635), 1,
      aux_sym__input_id_token1,
    STATE(146), 1,
      sym_part,
  [3580] = 2,
    ACTIONS(637), 1,
      aux_sym__input_id_token1,
    STATE(152), 1,
      sym_font,
  [3587] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(197), 1,
      sym_name,
  [3594] = 2,
    ACTIONS(207), 1,
      aux_sym__relative_attr_token1,
    STATE(104), 1,
      sym__relative_attr,
  [3601] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(196), 1,
      sym_name,
  [3608] = 2,
    ACTIONS(639), 1,
      aux_sym__guide_attr_token1,
    STATE(99), 1,
      sym__guide_attr,
  [3615] = 2,
    ACTIONS(641), 1,
      aux_sym__absolute_attr_token1,
    STATE(113), 1,
      sym__absolute_y_attr,
  [3622] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(175), 1,
      sym_name,
  [3629] = 2,
    ACTIONS(643), 1,
      sym_rgb,
    ACTIONS(645), 1,
      sym_rgba,
  [3636] = 1,
    ACTIONS(647), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3641] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(134), 1,
      sym_name,
  [3648] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(174), 1,
      sym_name,
  [3655] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(178), 1,
      sym_name,
  [3662] = 2,
    ACTIONS(187), 1,
      aux_sym_offset_token1,
    STATE(124), 1,
      sym_offset,
  [3669] = 2,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
    STATE(177), 1,
      sym_name,
  [3676] = 2,
    ACTIONS(561), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
  [3683] = 1,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [3687] = 1,
    ACTIONS(651), 1,
      sym_height,
  [3691] = 1,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
  [3695] = 1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
  [3699] = 1,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [3703] = 1,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [3707] = 1,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
  [3711] = 1,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [3715] = 1,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [3719] = 1,
    ACTIONS(667), 1,
      aux_sym__input_id_token1,
  [3723] = 1,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
  [3727] = 1,
    ACTIONS(671), 1,
      aux_sym_absolute_token1,
  [3731] = 1,
    ACTIONS(673), 1,
      anon_sym_COMMA,
  [3735] = 1,
    ACTIONS(675), 1,
      anon_sym_COMMA,
  [3739] = 1,
    ACTIONS(677), 1,
      aux_sym_absolute_token1,
  [3743] = 1,
    ACTIONS(679), 1,
      aux_sym_origin_token1,
  [3747] = 1,
    ACTIONS(681), 1,
      anon_sym_COMMA,
  [3751] = 1,
    ACTIONS(683), 1,
      aux_sym_origin_token1,
  [3755] = 1,
    ACTIONS(685), 1,
      sym_width,
  [3759] = 1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [3763] = 1,
    ACTIONS(689), 1,
      anon_sym_with,
  [3767] = 1,
    ACTIONS(691), 1,
      sym_fontsize,
  [3771] = 1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [3775] = 1,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
  [3779] = 1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [3783] = 1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
  [3787] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [3791] = 1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [3795] = 1,
    ACTIONS(705), 1,
      anon_sym_COMMA,
  [3799] = 1,
    ACTIONS(707), 1,
      anon_sym_COMMA,
  [3803] = 1,
    ACTIONS(695), 1,
      anon_sym_SQUOTE,
  [3807] = 1,
    ACTIONS(709), 1,
      anon_sym_COMMA,
  [3811] = 1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [3815] = 1,
    ACTIONS(713), 1,
      aux_sym_origin_token1,
  [3819] = 1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [3823] = 1,
    ACTIONS(717), 1,
      anon_sym_COMMA,
  [3827] = 1,
    ACTIONS(719), 1,
      aux_sym__label_id_token3,
  [3831] = 1,
    ACTIONS(721), 1,
      aux_sym__label_id_token2,
  [3835] = 1,
    ACTIONS(651), 1,
      sym_width,
  [3839] = 1,
    ACTIONS(723), 1,
      anon_sym_COMMA,
  [3843] = 1,
    ACTIONS(725), 1,
      sym_rgb,
  [3847] = 1,
    ACTIONS(727), 1,
      aux_sym__label_id_token3,
  [3851] = 1,
    ACTIONS(729), 1,
      aux_sym__label_id_token2,
  [3855] = 1,
    ACTIONS(725), 1,
      sym_rgba,
  [3859] = 1,
    ACTIONS(731), 1,
      aux_sym_origin_token1,
  [3863] = 1,
    ACTIONS(733), 1,
      anon_sym_timestamp,
  [3867] = 1,
    ACTIONS(735), 1,
      aux_sym__absolute_attr_token1,
  [3871] = 1,
    ACTIONS(737), 1,
      aux_sym__scale_token1,
  [3875] = 1,
    ACTIONS(739), 1,
      aux_sym__scale_token1,
  [3879] = 1,
    ACTIONS(633), 1,
      anon_sym_stretch,
  [3883] = 1,
    ACTIONS(741), 1,
      aux_sym__input_id_token1,
  [3887] = 1,
    ACTIONS(743), 1,
      aux_sym__input_id_token1,
  [3891] = 1,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
  [3895] = 1,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
  [3899] = 1,
    ACTIONS(749), 1,
      anon_sym_COMMA,
  [3903] = 1,
    ACTIONS(751), 1,
      aux_sym__input_id_token1,
  [3907] = 1,
    ACTIONS(753), 1,
      aux_sym__input_id_token1,
  [3911] = 1,
    ACTIONS(755), 1,
      aux_sym__scale_token1,
  [3915] = 1,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
  [3919] = 1,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
  [3923] = 1,
    ACTIONS(669), 1,
      anon_sym_SQUOTE,
  [3927] = 1,
    ACTIONS(733), 1,
      anon_sym_gzip,
  [3931] = 1,
    ACTIONS(761), 1,
      aux_sym_relative_token1,
  [3935] = 1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
  [3939] = 1,
    ACTIONS(765), 1,
      anon_sym_COMMA,
  [3943] = 1,
    ACTIONS(767), 1,
      anon_sym_COMMA,
  [3947] = 1,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
  [3951] = 1,
    ACTIONS(771), 1,
      anon_sym_COMMA,
  [3955] = 1,
    ACTIONS(773), 1,
      anon_sym_COMMA,
  [3959] = 1,
    ACTIONS(775), 1,
      anon_sym_DQUOTE,
  [3963] = 1,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
  [3967] = 1,
    ACTIONS(777), 1,
      aux_sym_relative_token1,
  [3971] = 1,
    ACTIONS(779), 1,
      aux_sym_absolute_token1,
  [3975] = 1,
    ACTIONS(781), 1,
      aux_sym__label_id_token2,
  [3979] = 1,
    ACTIONS(783), 1,
      aux_sym__label_id_token3,
  [3983] = 1,
    ACTIONS(785), 1,
      anon_sym_COMMA,
  [3987] = 1,
    ACTIONS(787), 1,
      anon_sym_COMMA,
  [3991] = 1,
    ACTIONS(789), 1,
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
  [SMALL_STATE(23)] = 706,
  [SMALL_STATE(24)] = 731,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 814,
  [SMALL_STATE(27)] = 850,
  [SMALL_STATE(28)] = 888,
  [SMALL_STATE(29)] = 922,
  [SMALL_STATE(30)] = 957,
  [SMALL_STATE(31)] = 977,
  [SMALL_STATE(32)] = 997,
  [SMALL_STATE(33)] = 1017,
  [SMALL_STATE(34)] = 1051,
  [SMALL_STATE(35)] = 1079,
  [SMALL_STATE(36)] = 1099,
  [SMALL_STATE(37)] = 1119,
  [SMALL_STATE(38)] = 1153,
  [SMALL_STATE(39)] = 1172,
  [SMALL_STATE(40)] = 1193,
  [SMALL_STATE(41)] = 1218,
  [SMALL_STATE(42)] = 1239,
  [SMALL_STATE(43)] = 1258,
  [SMALL_STATE(44)] = 1283,
  [SMALL_STATE(45)] = 1308,
  [SMALL_STATE(46)] = 1329,
  [SMALL_STATE(47)] = 1348,
  [SMALL_STATE(48)] = 1365,
  [SMALL_STATE(49)] = 1384,
  [SMALL_STATE(50)] = 1403,
  [SMALL_STATE(51)] = 1420,
  [SMALL_STATE(52)] = 1441,
  [SMALL_STATE(53)] = 1462,
  [SMALL_STATE(54)] = 1483,
  [SMALL_STATE(55)] = 1504,
  [SMALL_STATE(56)] = 1520,
  [SMALL_STATE(57)] = 1538,
  [SMALL_STATE(58)] = 1556,
  [SMALL_STATE(59)] = 1574,
  [SMALL_STATE(60)] = 1596,
  [SMALL_STATE(61)] = 1628,
  [SMALL_STATE(62)] = 1652,
  [SMALL_STATE(63)] = 1668,
  [SMALL_STATE(64)] = 1684,
  [SMALL_STATE(65)] = 1704,
  [SMALL_STATE(66)] = 1728,
  [SMALL_STATE(67)] = 1748,
  [SMALL_STATE(68)] = 1766,
  [SMALL_STATE(69)] = 1782,
  [SMALL_STATE(70)] = 1806,
  [SMALL_STATE(71)] = 1824,
  [SMALL_STATE(72)] = 1839,
  [SMALL_STATE(73)] = 1854,
  [SMALL_STATE(74)] = 1869,
  [SMALL_STATE(75)] = 1882,
  [SMALL_STATE(76)] = 1905,
  [SMALL_STATE(77)] = 1918,
  [SMALL_STATE(78)] = 1933,
  [SMALL_STATE(79)] = 1948,
  [SMALL_STATE(80)] = 1963,
  [SMALL_STATE(81)] = 1976,
  [SMALL_STATE(82)] = 1989,
  [SMALL_STATE(83)] = 2002,
  [SMALL_STATE(84)] = 2017,
  [SMALL_STATE(85)] = 2040,
  [SMALL_STATE(86)] = 2055,
  [SMALL_STATE(87)] = 2068,
  [SMALL_STATE(88)] = 2083,
  [SMALL_STATE(89)] = 2098,
  [SMALL_STATE(90)] = 2111,
  [SMALL_STATE(91)] = 2126,
  [SMALL_STATE(92)] = 2149,
  [SMALL_STATE(93)] = 2161,
  [SMALL_STATE(94)] = 2173,
  [SMALL_STATE(95)] = 2185,
  [SMALL_STATE(96)] = 2197,
  [SMALL_STATE(97)] = 2209,
  [SMALL_STATE(98)] = 2221,
  [SMALL_STATE(99)] = 2233,
  [SMALL_STATE(100)] = 2245,
  [SMALL_STATE(101)] = 2257,
  [SMALL_STATE(102)] = 2269,
  [SMALL_STATE(103)] = 2281,
  [SMALL_STATE(104)] = 2293,
  [SMALL_STATE(105)] = 2305,
  [SMALL_STATE(106)] = 2317,
  [SMALL_STATE(107)] = 2329,
  [SMALL_STATE(108)] = 2341,
  [SMALL_STATE(109)] = 2353,
  [SMALL_STATE(110)] = 2365,
  [SMALL_STATE(111)] = 2377,
  [SMALL_STATE(112)] = 2389,
  [SMALL_STATE(113)] = 2401,
  [SMALL_STATE(114)] = 2413,
  [SMALL_STATE(115)] = 2425,
  [SMALL_STATE(116)] = 2437,
  [SMALL_STATE(117)] = 2449,
  [SMALL_STATE(118)] = 2461,
  [SMALL_STATE(119)] = 2473,
  [SMALL_STATE(120)] = 2485,
  [SMALL_STATE(121)] = 2497,
  [SMALL_STATE(122)] = 2509,
  [SMALL_STATE(123)] = 2521,
  [SMALL_STATE(124)] = 2533,
  [SMALL_STATE(125)] = 2545,
  [SMALL_STATE(126)] = 2557,
  [SMALL_STATE(127)] = 2569,
  [SMALL_STATE(128)] = 2581,
  [SMALL_STATE(129)] = 2603,
  [SMALL_STATE(130)] = 2615,
  [SMALL_STATE(131)] = 2627,
  [SMALL_STATE(132)] = 2639,
  [SMALL_STATE(133)] = 2651,
  [SMALL_STATE(134)] = 2663,
  [SMALL_STATE(135)] = 2675,
  [SMALL_STATE(136)] = 2687,
  [SMALL_STATE(137)] = 2699,
  [SMALL_STATE(138)] = 2711,
  [SMALL_STATE(139)] = 2723,
  [SMALL_STATE(140)] = 2735,
  [SMALL_STATE(141)] = 2747,
  [SMALL_STATE(142)] = 2759,
  [SMALL_STATE(143)] = 2771,
  [SMALL_STATE(144)] = 2783,
  [SMALL_STATE(145)] = 2795,
  [SMALL_STATE(146)] = 2807,
  [SMALL_STATE(147)] = 2819,
  [SMALL_STATE(148)] = 2831,
  [SMALL_STATE(149)] = 2843,
  [SMALL_STATE(150)] = 2855,
  [SMALL_STATE(151)] = 2867,
  [SMALL_STATE(152)] = 2879,
  [SMALL_STATE(153)] = 2891,
  [SMALL_STATE(154)] = 2903,
  [SMALL_STATE(155)] = 2915,
  [SMALL_STATE(156)] = 2927,
  [SMALL_STATE(157)] = 2939,
  [SMALL_STATE(158)] = 2951,
  [SMALL_STATE(159)] = 2963,
  [SMALL_STATE(160)] = 2975,
  [SMALL_STATE(161)] = 2988,
  [SMALL_STATE(162)] = 3009,
  [SMALL_STATE(163)] = 3022,
  [SMALL_STATE(164)] = 3041,
  [SMALL_STATE(165)] = 3051,
  [SMALL_STATE(166)] = 3067,
  [SMALL_STATE(167)] = 3083,
  [SMALL_STATE(168)] = 3093,
  [SMALL_STATE(169)] = 3103,
  [SMALL_STATE(170)] = 3113,
  [SMALL_STATE(171)] = 3129,
  [SMALL_STATE(172)] = 3139,
  [SMALL_STATE(173)] = 3149,
  [SMALL_STATE(174)] = 3158,
  [SMALL_STATE(175)] = 3171,
  [SMALL_STATE(176)] = 3184,
  [SMALL_STATE(177)] = 3197,
  [SMALL_STATE(178)] = 3210,
  [SMALL_STATE(179)] = 3223,
  [SMALL_STATE(180)] = 3234,
  [SMALL_STATE(181)] = 3247,
  [SMALL_STATE(182)] = 3258,
  [SMALL_STATE(183)] = 3271,
  [SMALL_STATE(184)] = 3281,
  [SMALL_STATE(185)] = 3291,
  [SMALL_STATE(186)] = 3301,
  [SMALL_STATE(187)] = 3311,
  [SMALL_STATE(188)] = 3321,
  [SMALL_STATE(189)] = 3331,
  [SMALL_STATE(190)] = 3341,
  [SMALL_STATE(191)] = 3351,
  [SMALL_STATE(192)] = 3361,
  [SMALL_STATE(193)] = 3371,
  [SMALL_STATE(194)] = 3381,
  [SMALL_STATE(195)] = 3391,
  [SMALL_STATE(196)] = 3401,
  [SMALL_STATE(197)] = 3411,
  [SMALL_STATE(198)] = 3421,
  [SMALL_STATE(199)] = 3431,
  [SMALL_STATE(200)] = 3441,
  [SMALL_STATE(201)] = 3451,
  [SMALL_STATE(202)] = 3461,
  [SMALL_STATE(203)] = 3468,
  [SMALL_STATE(204)] = 3475,
  [SMALL_STATE(205)] = 3482,
  [SMALL_STATE(206)] = 3489,
  [SMALL_STATE(207)] = 3496,
  [SMALL_STATE(208)] = 3503,
  [SMALL_STATE(209)] = 3510,
  [SMALL_STATE(210)] = 3517,
  [SMALL_STATE(211)] = 3524,
  [SMALL_STATE(212)] = 3531,
  [SMALL_STATE(213)] = 3538,
  [SMALL_STATE(214)] = 3545,
  [SMALL_STATE(215)] = 3552,
  [SMALL_STATE(216)] = 3559,
  [SMALL_STATE(217)] = 3566,
  [SMALL_STATE(218)] = 3573,
  [SMALL_STATE(219)] = 3580,
  [SMALL_STATE(220)] = 3587,
  [SMALL_STATE(221)] = 3594,
  [SMALL_STATE(222)] = 3601,
  [SMALL_STATE(223)] = 3608,
  [SMALL_STATE(224)] = 3615,
  [SMALL_STATE(225)] = 3622,
  [SMALL_STATE(226)] = 3629,
  [SMALL_STATE(227)] = 3636,
  [SMALL_STATE(228)] = 3641,
  [SMALL_STATE(229)] = 3648,
  [SMALL_STATE(230)] = 3655,
  [SMALL_STATE(231)] = 3662,
  [SMALL_STATE(232)] = 3669,
  [SMALL_STATE(233)] = 3676,
  [SMALL_STATE(234)] = 3683,
  [SMALL_STATE(235)] = 3687,
  [SMALL_STATE(236)] = 3691,
  [SMALL_STATE(237)] = 3695,
  [SMALL_STATE(238)] = 3699,
  [SMALL_STATE(239)] = 3703,
  [SMALL_STATE(240)] = 3707,
  [SMALL_STATE(241)] = 3711,
  [SMALL_STATE(242)] = 3715,
  [SMALL_STATE(243)] = 3719,
  [SMALL_STATE(244)] = 3723,
  [SMALL_STATE(245)] = 3727,
  [SMALL_STATE(246)] = 3731,
  [SMALL_STATE(247)] = 3735,
  [SMALL_STATE(248)] = 3739,
  [SMALL_STATE(249)] = 3743,
  [SMALL_STATE(250)] = 3747,
  [SMALL_STATE(251)] = 3751,
  [SMALL_STATE(252)] = 3755,
  [SMALL_STATE(253)] = 3759,
  [SMALL_STATE(254)] = 3763,
  [SMALL_STATE(255)] = 3767,
  [SMALL_STATE(256)] = 3771,
  [SMALL_STATE(257)] = 3775,
  [SMALL_STATE(258)] = 3779,
  [SMALL_STATE(259)] = 3783,
  [SMALL_STATE(260)] = 3787,
  [SMALL_STATE(261)] = 3791,
  [SMALL_STATE(262)] = 3795,
  [SMALL_STATE(263)] = 3799,
  [SMALL_STATE(264)] = 3803,
  [SMALL_STATE(265)] = 3807,
  [SMALL_STATE(266)] = 3811,
  [SMALL_STATE(267)] = 3815,
  [SMALL_STATE(268)] = 3819,
  [SMALL_STATE(269)] = 3823,
  [SMALL_STATE(270)] = 3827,
  [SMALL_STATE(271)] = 3831,
  [SMALL_STATE(272)] = 3835,
  [SMALL_STATE(273)] = 3839,
  [SMALL_STATE(274)] = 3843,
  [SMALL_STATE(275)] = 3847,
  [SMALL_STATE(276)] = 3851,
  [SMALL_STATE(277)] = 3855,
  [SMALL_STATE(278)] = 3859,
  [SMALL_STATE(279)] = 3863,
  [SMALL_STATE(280)] = 3867,
  [SMALL_STATE(281)] = 3871,
  [SMALL_STATE(282)] = 3875,
  [SMALL_STATE(283)] = 3879,
  [SMALL_STATE(284)] = 3883,
  [SMALL_STATE(285)] = 3887,
  [SMALL_STATE(286)] = 3891,
  [SMALL_STATE(287)] = 3895,
  [SMALL_STATE(288)] = 3899,
  [SMALL_STATE(289)] = 3903,
  [SMALL_STATE(290)] = 3907,
  [SMALL_STATE(291)] = 3911,
  [SMALL_STATE(292)] = 3915,
  [SMALL_STATE(293)] = 3919,
  [SMALL_STATE(294)] = 3923,
  [SMALL_STATE(295)] = 3927,
  [SMALL_STATE(296)] = 3931,
  [SMALL_STATE(297)] = 3935,
  [SMALL_STATE(298)] = 3939,
  [SMALL_STATE(299)] = 3943,
  [SMALL_STATE(300)] = 3947,
  [SMALL_STATE(301)] = 3951,
  [SMALL_STATE(302)] = 3955,
  [SMALL_STATE(303)] = 3959,
  [SMALL_STATE(304)] = 3963,
  [SMALL_STATE(305)] = 3967,
  [SMALL_STATE(306)] = 3971,
  [SMALL_STATE(307)] = 3975,
  [SMALL_STATE(308)] = 3979,
  [SMALL_STATE(309)] = 3983,
  [SMALL_STATE(310)] = 3987,
  [SMALL_STATE(311)] = 3991,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 13),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 10),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(236),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(206),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(181),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(207),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 7),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 12),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 12),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 11),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 8),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 20),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 8),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 14),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [769] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
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
