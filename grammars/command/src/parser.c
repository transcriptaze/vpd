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
#define STATE_COUNT 314
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 2
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

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
  aux_sym_absolute_token1 = 84,
  aux_sym_relative_token1 = 85,
  sym_command = 86,
  sym_new = 87,
  sym_set = 88,
  sym__module_attr = 89,
  sym__component_attr = 90,
  sym__label_attr = 91,
  sym__x_attr = 92,
  sym__y_attr = 93,
  sym__xy_attr = 94,
  sym__absolute_attr = 95,
  sym__absolute_x_attr = 96,
  sym__absolute_y_attr = 97,
  sym__absolute_xy_attr = 98,
  sym__relative_attr = 99,
  sym__relative_xy_attr = 100,
  sym__geometry_x_attr = 101,
  sym__geometry_y_attr = 102,
  sym__geometry_xy_attr = 103,
  sym__guide_attr = 104,
  sym__guide_xy_attr = 105,
  sym_decorate = 106,
  sym_delete = 107,
  sym__guideline_id = 108,
  sym__input_id = 109,
  sym__output_id = 110,
  sym__parameter_id = 111,
  sym__light_id = 112,
  sym__widget_id = 113,
  sym__label_id = 114,
  sym__decoration_id = 115,
  sym__component_id = 116,
  sym_load = 117,
  sym_save = 118,
  sym_export = 119,
  sym_project = 120,
  sym_script = 121,
  sym__entity = 122,
  sym__input = 123,
  sym__output = 124,
  sym__parameter = 125,
  sym__light = 126,
  sym__widget = 127,
  sym_module = 128,
  sym_input = 129,
  sym_output = 130,
  sym_parameter = 131,
  sym_light = 132,
  sym_widget = 133,
  sym__component = 134,
  sym_label = 135,
  sym_font = 136,
  sym__align = 137,
  sym_halign = 138,
  sym_valign = 139,
  sym_colour = 140,
  sym_decoration = 141,
  sym__scale = 142,
  sym_stretch = 143,
  sym_origin = 144,
  sym__originx = 145,
  sym__originy = 146,
  sym_background = 147,
  sym_panel = 148,
  sym_svg = 149,
  sym_header = 150,
  sym_name = 151,
  sym_part = 152,
  sym_guide = 153,
  sym_identifier = 154,
  sym_vertical = 155,
  sym_horizontal = 156,
  sym_geometry = 157,
  sym_offset = 158,
  sym__offset = 159,
  sym_guideline = 160,
  sym__string = 161,
  sym_absolute = 162,
  sym_relative = 163,
  sym__decorate = 164,
  sym__relative = 165,
  sym_x = 166,
  sym_y = 167,
  aux_sym_command_repeat1 = 168,
  alias_sym_dy = 169,
  alias_sym_string = 170,
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
  [alias_sym_string] = "string",
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
  [alias_sym_string] = alias_sym_string,
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
  [alias_sym_string] = {
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
    [0] = alias_sym_string,
  },
  [5] = {
    [1] = sym_identifier,
  },
  [6] = {
    [1] = aux_sym__originx_token1,
  },
  [7] = {
    [1] = sym_light,
  },
  [8] = {
    [1] = sym_absolute,
  },
  [9] = {
    [1] = alias_sym_string,
  },
  [10] = {
    [0] = sym_absolute,
  },
  [11] = {
    [2] = sym_y,
  },
  [12] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [13] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [14] = {
    [3] = sym_y,
  },
  [15] = {
    [2] = alias_sym_dy,
  },
  [16] = {
    [1] = sym_input,
  },
  [17] = {
    [1] = sym_output,
  },
  [18] = {
    [1] = sym_parameter,
  },
  [19] = {
    [1] = sym_widget,
  },
  [20] = {
    [1] = sym_label,
  },
  [21] = {
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
  [50] = 10,
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
  [75] = 19,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 15,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 15,
  [89] = 13,
  [90] = 16,
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
  [147] = 147,
  [148] = 62,
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
  [161] = 38,
  [162] = 140,
  [163] = 163,
  [164] = 138,
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
  [303] = 303,
  [304] = 304,
  [305] = 300,
  [306] = 239,
  [307] = 303,
  [308] = 240,
  [309] = 278,
  [310] = 277,
  [311] = 243,
  [312] = 256,
  [313] = 244,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(317);
      if (lookahead == '"') ADVANCE(498);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(341);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(275);
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(327);
      if (lookahead == 'y') ADVANCE(328);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(499);
      if (lookahead == '\'') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(496);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == 'v') ADVANCE(386);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'U') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '5') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(544);
      if (lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '8') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(178);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(178);
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 25:
      if (lookahead == ';') ADVANCE(318);
      END_STATE();
    case 26:
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'b') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(391);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(258);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(539);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(541);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(527);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 145:
      if (lookahead == 'j') ADVANCE(77);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(540);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(340);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(519);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(550);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(419);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(368);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(531);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'z') ADVANCE(133);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 280:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 281:
      if (lookahead == 'w') ADVANCE(319);
      END_STATE();
    case 282:
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 283:
      if (lookahead == 'x') ADVANCE(247);
      END_STATE();
    case 284:
      if (lookahead == 'z') ADVANCE(74);
      END_STATE();
    case 285:
      if (lookahead == 'z') ADVANCE(211);
      END_STATE();
    case 286:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 311:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 312:
      if (eof) ADVANCE(317);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(432);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == 't') ADVANCE(469);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 313:
      if (eof) ADVANCE(317);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 314:
      if (eof) ADVANCE(317);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(425);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(137);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 315:
      if (eof) ADVANCE(317);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(339);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(137);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 316:
      if (eof) ADVANCE(317);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(35);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'H') ADVANCE(340);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == 'H') ADVANCE(340);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(340);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(340);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'H') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H') ADVANCE(365);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(365);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'H') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(499);
      if (lookahead == '\'') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(497);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(497);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__decoration_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(178);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 312},
  [3] = {.lex_state = 312},
  [4] = {.lex_state = 314},
  [5] = {.lex_state = 314},
  [6] = {.lex_state = 314},
  [7] = {.lex_state = 314},
  [8] = {.lex_state = 314},
  [9] = {.lex_state = 314},
  [10] = {.lex_state = 312},
  [11] = {.lex_state = 312},
  [12] = {.lex_state = 312},
  [13] = {.lex_state = 312},
  [14] = {.lex_state = 312},
  [15] = {.lex_state = 312},
  [16] = {.lex_state = 312},
  [17] = {.lex_state = 312},
  [18] = {.lex_state = 312},
  [19] = {.lex_state = 312},
  [20] = {.lex_state = 312},
  [21] = {.lex_state = 314},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 314},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 315},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 314},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 314},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 314},
  [42] = {.lex_state = 314},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 313},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 314},
  [56] = {.lex_state = 314},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 314},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 315},
  [65] = {.lex_state = 316},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 313},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 313},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 315},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 313},
  [76] = {.lex_state = 314},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 314},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 314},
  [88] = {.lex_state = 313},
  [89] = {.lex_state = 313},
  [90] = {.lex_state = 313},
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
  [129] = {.lex_state = 27},
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
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 27},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 314},
  [166] = {.lex_state = 314},
  [167] = {.lex_state = 315},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 314},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 314},
  [172] = {.lex_state = 314},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 314},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 312},
  [178] = {.lex_state = 312},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 312},
  [181] = {.lex_state = 312},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 312},
  [185] = {.lex_state = 312},
  [186] = {.lex_state = 312},
  [187] = {.lex_state = 312},
  [188] = {.lex_state = 312},
  [189] = {.lex_state = 312},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 312},
  [194] = {.lex_state = 312},
  [195] = {.lex_state = 312},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 312},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 315},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 314},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 315},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 28},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 290},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 290},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 312},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 312},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 314},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 313},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 313},
  [245] = {.lex_state = 312},
  [246] = {.lex_state = 312},
  [247] = {.lex_state = 314},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 312},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 312},
  [272] = {.lex_state = 504},
  [273] = {.lex_state = 500},
  [274] = {.lex_state = 314},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 504},
  [278] = {.lex_state = 500},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 312},
  [282] = {.lex_state = 316},
  [283] = {.lex_state = 316},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 3},
  [292] = {.lex_state = 316},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 313},
  [309] = {.lex_state = 500},
  [310] = {.lex_state = 504},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 313},
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
    [sym_command] = STATE(302),
    [sym_new] = STATE(26),
    [sym_set] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym_delete] = STATE(26),
    [sym_load] = STATE(26),
    [sym_save] = STATE(26),
    [sym_export] = STATE(26),
    [aux_sym_command_repeat1] = STATE(26),
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
    STATE(45), 1,
      sym__align,
    STATE(46), 1,
      sym_halign,
    STATE(54), 1,
      sym_valign,
    STATE(157), 1,
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
    STATE(46), 1,
      sym_halign,
    STATE(51), 1,
      sym__align,
    STATE(54), 1,
      sym_valign,
    STATE(94), 1,
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
    STATE(46), 1,
      sym_halign,
    STATE(52), 1,
      sym__align,
    STATE(54), 1,
      sym_valign,
    STATE(121), 1,
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
    STATE(40), 1,
      sym__align,
    STATE(46), 1,
      sym_halign,
    STATE(54), 1,
      sym_valign,
    STATE(143), 1,
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
    STATE(40), 1,
      sym__align,
    STATE(46), 1,
      sym_halign,
    STATE(54), 1,
      sym_valign,
    STATE(143), 1,
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
    STATE(46), 1,
      sym_halign,
    STATE(51), 1,
      sym__align,
    STATE(54), 1,
      sym_valign,
    STATE(94), 1,
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
  [280] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(39), 1,
      sym__align,
    STATE(46), 1,
      sym_halign,
    STATE(54), 1,
      sym_valign,
    STATE(158), 1,
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
  [322] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(46), 1,
      sym_halign,
    STATE(52), 1,
      sym__align,
    STATE(54), 1,
      sym_valign,
    STATE(121), 1,
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
  [364] = 4,
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
  [656] = 12,
    ACTIONS(103), 1,
      anon_sym_module,
    ACTIONS(105), 1,
      anon_sym_input,
    ACTIONS(107), 1,
      anon_sym_output,
    ACTIONS(109), 1,
      anon_sym_parameter,
    ACTIONS(111), 1,
      anon_sym_light,
    ACTIONS(113), 1,
      anon_sym_widget,
    ACTIONS(115), 1,
      anon_sym_label,
    ACTIONS(117), 1,
      anon_sym_origin,
    ACTIONS(119), 1,
      anon_sym_background,
    STATE(59), 1,
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
  [701] = 2,
    ACTIONS(123), 1,
      anon_sym_x,
    ACTIONS(121), 19,
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
  [726] = 2,
    ACTIONS(127), 1,
      sym_rgb,
    ACTIONS(125), 19,
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
  [751] = 2,
    ACTIONS(131), 1,
      anon_sym_x,
    ACTIONS(129), 19,
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
  [776] = 8,
    ACTIONS(135), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(137), 1,
      anon_sym_vertical,
    ACTIONS(139), 1,
      anon_sym_horizontal,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    STATE(125), 1,
      sym_offset,
    STATE(231), 1,
      sym_identifier,
    STATE(124), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(133), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [810] = 10,
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
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_comment,
    STATE(28), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [848] = 9,
    ACTIONS(147), 1,
      anon_sym_module,
    ACTIONS(149), 1,
      anon_sym_guide,
    ACTIONS(151), 1,
      anon_sym_input,
    ACTIONS(153), 1,
      anon_sym_output,
    ACTIONS(155), 1,
      anon_sym_light,
    ACTIONS(157), 1,
      anon_sym_widget,
    ACTIONS(159), 1,
      anon_sym_label,
    ACTIONS(161), 1,
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
  [884] = 10,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_new,
    ACTIONS(171), 1,
      anon_sym_set,
    ACTIONS(174), 1,
      anon_sym_decorate,
    ACTIONS(177), 1,
      anon_sym_delete,
    ACTIONS(180), 1,
      anon_sym_load,
    ACTIONS(183), 1,
      anon_sym_save,
    ACTIONS(186), 1,
      anon_sym_export,
    STATE(28), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [922] = 9,
    ACTIONS(105), 1,
      anon_sym_input,
    ACTIONS(107), 1,
      anon_sym_output,
    ACTIONS(109), 1,
      anon_sym_parameter,
    ACTIONS(111), 1,
      anon_sym_light,
    ACTIONS(113), 1,
      anon_sym_widget,
    ACTIONS(115), 1,
      anon_sym_label,
    ACTIONS(189), 1,
      anon_sym_guide,
    ACTIONS(191), 1,
      anon_sym_decoration,
    STATE(142), 8,
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
  [977] = 6,
    ACTIONS(135), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(137), 1,
      anon_sym_vertical,
    ACTIONS(139), 1,
      anon_sym_horizontal,
    STATE(25), 1,
      sym_identifier,
    STATE(127), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(133), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1005] = 2,
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
  [1025] = 2,
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
  [1045] = 2,
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
  [1065] = 2,
    ACTIONS(211), 1,
      anon_sym_x,
    ACTIONS(209), 14,
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
  [1085] = 9,
    ACTIONS(213), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(219), 1,
      aux_sym__guide_attr_token1,
    STATE(147), 1,
      sym__xy_attr,
    STATE(285), 1,
      sym__relative_attr,
    STATE(295), 1,
      sym__geometry_x_attr,
    STATE(296), 1,
      sym__guide_attr,
    ACTIONS(217), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(156), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1119] = 9,
    ACTIONS(213), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(219), 1,
      aux_sym__guide_attr_token1,
    STATE(155), 1,
      sym__xy_attr,
    STATE(285), 1,
      sym__relative_attr,
    STATE(295), 1,
      sym__geometry_x_attr,
    STATE(296), 1,
      sym__guide_attr,
    ACTIONS(217), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(156), 4,
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
    STATE(159), 1,
      sym_colour,
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
  [1193] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(158), 1,
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
  [1214] = 3,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    STATE(85), 1,
      sym_offset,
    ACTIONS(227), 10,
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
  [1233] = 3,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    STATE(72), 1,
      sym_offset,
    ACTIONS(229), 10,
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
  [1252] = 4,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym__scale,
    STATE(109), 1,
      sym_stretch,
    ACTIONS(231), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1273] = 2,
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
  [1290] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(121), 1,
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
  [1311] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      sym_rgb,
    ACTIONS(239), 10,
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
  [1330] = 2,
    ACTIONS(247), 1,
      sym_rgb,
    ACTIONS(245), 11,
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
  [1347] = 6,
    ACTIONS(249), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      aux_sym_relative_token1,
    STATE(255), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(251), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1372] = 6,
    ACTIONS(215), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(219), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(257), 1,
      anon_sym_AT,
    STATE(155), 1,
      sym__x_attr,
    ACTIONS(217), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(152), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1397] = 4,
    ACTIONS(259), 1,
      aux_sym_offset_token1,
    STATE(90), 1,
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
  [1418] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(143), 1,
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
  [1439] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(94), 1,
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
  [1460] = 6,
    ACTIONS(215), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(219), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(257), 1,
      anon_sym_AT,
    STATE(147), 1,
      sym__x_attr,
    ACTIONS(217), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(152), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1485] = 3,
    ACTIONS(243), 1,
      sym_rgb,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(239), 10,
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
  [1504] = 3,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    STATE(115), 1,
      sym_offset,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1522] = 3,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    STATE(117), 1,
      sym_offset,
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
  [1540] = 6,
    ACTIONS(215), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(219), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(257), 1,
      anon_sym_AT,
    STATE(147), 1,
      sym__y_attr,
    ACTIONS(267), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(154), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1564] = 5,
    STATE(46), 1,
      sym_halign,
    STATE(54), 1,
      sym_valign,
    STATE(155), 1,
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
  [1586] = 10,
    ACTIONS(269), 1,
      anon_sym_x,
    ACTIONS(271), 1,
      anon_sym_y,
    ACTIONS(273), 1,
      anon_sym_xy,
    ACTIONS(275), 1,
      anon_sym_text,
    ACTIONS(277), 1,
      anon_sym_font,
    ACTIONS(279), 1,
      anon_sym_size,
    ACTIONS(281), 1,
      anon_sym_halign,
    ACTIONS(283), 1,
      anon_sym_valign,
    ACTIONS(285), 1,
      anon_sym_align,
    ACTIONS(287), 2,
      anon_sym_colour,
      anon_sym_color,
  [1618] = 6,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      aux_sym_relative_token1,
    STATE(242), 1,
      sym_x,
    STATE(67), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(251), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1642] = 3,
    ACTIONS(297), 1,
      anon_sym_light,
    ACTIONS(299), 1,
      anon_sym_dark,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1660] = 2,
    ACTIONS(303), 1,
      aux_sym_offset_token1,
    ACTIONS(301), 10,
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
  [1676] = 2,
    ACTIONS(307), 1,
      sym_rgb,
    ACTIONS(305), 10,
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
  [1692] = 2,
    ACTIONS(311), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(309), 10,
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
  [1708] = 2,
    ACTIONS(315), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(313), 10,
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
  [1724] = 6,
    ACTIONS(215), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(219), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(257), 1,
      anon_sym_AT,
    STATE(155), 1,
      sym__y_attr,
    ACTIONS(267), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(154), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1748] = 4,
    ACTIONS(321), 1,
      aux_sym__input_id_token1,
    STATE(139), 1,
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
  [1768] = 3,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_stretch,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1786] = 4,
    ACTIONS(321), 1,
      aux_sym__input_id_token1,
    STATE(95), 1,
      sym_part,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(329), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1806] = 3,
    ACTIONS(333), 1,
      anon_sym_timestamp,
    ACTIONS(335), 1,
      anon_sym_gzip,
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
  [1824] = 2,
    ACTIONS(339), 1,
      aux_sym__geometry_x_attr_token1,
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
  [1839] = 1,
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
  [1852] = 2,
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
  [1867] = 1,
    ACTIONS(347), 10,
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
  [1880] = 2,
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
  [1895] = 6,
    ACTIONS(105), 1,
      anon_sym_input,
    ACTIONS(107), 1,
      anon_sym_output,
    ACTIONS(109), 1,
      anon_sym_parameter,
    ACTIONS(111), 1,
      anon_sym_light,
    ACTIONS(113), 1,
      anon_sym_widget,
    STATE(298), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1918] = 2,
    ACTIONS(349), 1,
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
  [1933] = 1,
    ACTIONS(351), 10,
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
  [1946] = 2,
    ACTIONS(355), 1,
      anon_sym_COMMA,
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
  [1961] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
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
  [1976] = 1,
    ACTIONS(359), 10,
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
    ACTIONS(361), 10,
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
  [2002] = 6,
    ACTIONS(363), 1,
      anon_sym_input,
    ACTIONS(365), 1,
      anon_sym_output,
    ACTIONS(367), 1,
      anon_sym_parameter,
    ACTIONS(369), 1,
      anon_sym_light,
    ACTIONS(371), 1,
      anon_sym_widget,
    STATE(249), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2025] = 1,
    ACTIONS(79), 10,
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
  [2038] = 1,
    ACTIONS(373), 10,
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
  [2051] = 2,
    ACTIONS(377), 1,
      anon_sym_COMMA,
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
  [2066] = 6,
    ACTIONS(363), 1,
      anon_sym_input,
    ACTIONS(365), 1,
      anon_sym_output,
    ACTIONS(367), 1,
      anon_sym_parameter,
    ACTIONS(369), 1,
      anon_sym_light,
    ACTIONS(371), 1,
      anon_sym_widget,
    STATE(304), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2089] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(81), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2104] = 2,
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
  [2119] = 2,
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
  [2134] = 2,
    ACTIONS(381), 1,
      anon_sym_timestamp,
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
  [2185] = 1,
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
  [2197] = 1,
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
  [2209] = 1,
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
  [2221] = 1,
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
  [2233] = 1,
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
  [2245] = 1,
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
  [2257] = 1,
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
  [2269] = 1,
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
  [2281] = 1,
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
  [2293] = 1,
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
  [2305] = 1,
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
  [2317] = 1,
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
    ACTIONS(323), 9,
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
  [2377] = 1,
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
  [2389] = 1,
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
  [2401] = 1,
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
  [2413] = 1,
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
  [2425] = 1,
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
  [2485] = 1,
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
  [2497] = 1,
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
  [2581] = 1,
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
  [2593] = 6,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    ACTIONS(449), 1,
      anon_sym_AT,
    ACTIONS(453), 1,
      anon_sym_origin,
    ACTIONS(455), 1,
      aux_sym_origin_token1,
    STATE(119), 1,
      sym_offset,
    ACTIONS(451), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
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
  [2783] = 1,
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
  [2795] = 1,
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
  [2831] = 1,
    ACTIONS(303), 9,
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
  [2915] = 1,
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
  [2927] = 1,
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
  [2939] = 1,
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
  [2951] = 1,
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
  [2975] = 1,
    ACTIONS(509), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2987] = 2,
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
  [3000] = 2,
    ACTIONS(477), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(511), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3013] = 6,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    ACTIONS(513), 1,
      anon_sym_AT,
    ACTIONS(515), 1,
      anon_sym_origin,
    ACTIONS(517), 1,
      aux_sym_origin_token1,
    STATE(122), 1,
      sym_offset,
    ACTIONS(451), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3034] = 2,
    ACTIONS(473), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(519), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3047] = 6,
    ACTIONS(521), 1,
      anon_sym_input,
    ACTIONS(523), 1,
      anon_sym_output,
    ACTIONS(525), 1,
      anon_sym_parameter,
    ACTIONS(527), 1,
      anon_sym_light,
    ACTIONS(529), 1,
      anon_sym_widget,
    ACTIONS(531), 1,
      anon_sym_label,
  [3066] = 2,
    STATE(63), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3076] = 5,
    ACTIONS(533), 1,
      anon_sym_AT,
    ACTIONS(535), 1,
      aux_sym__originx_token1,
    ACTIONS(537), 1,
      aux_sym__originy_token1,
    STATE(267), 1,
      sym__originy,
    STATE(268), 1,
      sym__originx,
  [3092] = 5,
    ACTIONS(539), 1,
      aux_sym__input_id_token1,
    ACTIONS(541), 1,
      anon_sym_none,
    ACTIONS(543), 1,
      sym_rgb,
    ACTIONS(545), 1,
      sym_rgba,
    STATE(103), 1,
      sym_name,
  [3108] = 2,
    STATE(155), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3118] = 5,
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
  [3134] = 2,
    STATE(155), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3144] = 2,
    STATE(63), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3154] = 2,
    STATE(69), 1,
      sym_y,
    ACTIONS(557), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3164] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(559), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3174] = 2,
    STATE(105), 1,
      sym__geometry_y_attr,
    ACTIONS(561), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3183] = 4,
    ACTIONS(563), 1,
      aux_sym__label_id_token1,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    ACTIONS(567), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      sym__string,
  [3196] = 4,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__offset,
    STATE(275), 1,
      sym__relative,
  [3209] = 4,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      sym__relative,
    STATE(254), 1,
      sym__offset,
  [3222] = 3,
    ACTIONS(575), 1,
      anon_sym_svg,
    ACTIONS(577), 1,
      anon_sym_DOTh,
    STATE(111), 2,
      sym_svg,
      sym_header,
  [3233] = 4,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym__relative,
    STATE(254), 1,
      sym__offset,
  [3246] = 4,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym__relative,
    STATE(254), 1,
      sym__offset,
  [3259] = 4,
    ACTIONS(583), 1,
      aux_sym__label_id_token1,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    STATE(155), 1,
      sym__string,
  [3272] = 3,
    ACTIONS(589), 1,
      anon_sym_project,
    ACTIONS(591), 1,
      anon_sym_script,
    STATE(135), 2,
      sym_project,
      sym_script,
  [3283] = 4,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym__relative,
    STATE(254), 1,
      sym__offset,
  [3296] = 3,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__offset,
    STATE(257), 1,
      sym__relative,
  [3306] = 3,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__offset,
    STATE(259), 1,
      sym__relative,
  [3316] = 3,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__offset,
    STATE(258), 1,
      sym__relative,
  [3326] = 3,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      sym_offset,
  [3336] = 3,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    ACTIONS(597), 1,
      aux_sym_origin_token1,
    STATE(96), 1,
      sym_offset,
  [3346] = 3,
    ACTIONS(599), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(126), 1,
      sym__component,
  [3356] = 3,
    ACTIONS(599), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(123), 1,
      sym__component,
  [3366] = 3,
    ACTIONS(599), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(120), 1,
      sym__component,
  [3376] = 3,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    ACTIONS(601), 1,
      aux_sym_origin_token1,
    STATE(100), 1,
      sym_offset,
  [3386] = 3,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__offset,
    STATE(262), 1,
      sym__relative,
  [3396] = 3,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__offset,
    STATE(261), 1,
      sym__relative,
  [3406] = 3,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(43), 1,
      sym_name,
    STATE(98), 1,
      sym_decoration,
  [3416] = 3,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(254), 1,
      sym__offset,
    STATE(260), 1,
      sym__relative,
  [3426] = 3,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(155), 1,
      sym_colour,
  [3436] = 3,
    ACTIONS(599), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(118), 1,
      sym__component,
  [3446] = 3,
    ACTIONS(599), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(114), 1,
      sym__component,
  [3456] = 3,
    ACTIONS(605), 1,
      anon_sym_name,
    ACTIONS(607), 1,
      anon_sym_height,
    ACTIONS(609), 1,
      anon_sym_width,
  [3466] = 3,
    ACTIONS(611), 1,
      aux_sym__label_id_token1,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
  [3476] = 3,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    ACTIONS(619), 1,
      aux_sym__decoration_id_token1,
    STATE(225), 1,
      sym__component_id,
  [3486] = 2,
    ACTIONS(537), 1,
      aux_sym__originy_token1,
    STATE(146), 1,
      sym__originy,
  [3493] = 2,
    ACTIONS(621), 1,
      sym_rgb,
    ACTIONS(623), 1,
      sym_rgba,
  [3500] = 2,
    ACTIONS(625), 1,
      aux_sym__absolute_attr_token1,
    STATE(265), 1,
      sym__absolute_x_attr,
  [3507] = 2,
    ACTIONS(627), 1,
      sym_height,
    ACTIONS(629), 1,
      sym_width,
  [3514] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(137), 1,
      sym_name,
  [3521] = 2,
    ACTIONS(631), 1,
      anon_sym_scale,
    ACTIONS(633), 1,
      anon_sym_stretch,
  [3528] = 2,
    ACTIONS(535), 1,
      aux_sym__originx_token1,
    STATE(146), 1,
      sym__originx,
  [3535] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(147), 1,
      sym_name,
  [3542] = 2,
    ACTIONS(635), 1,
      aux_sym__input_id_token1,
    STATE(147), 1,
      sym_part,
  [3549] = 2,
    ACTIONS(637), 1,
      aux_sym__input_id_token1,
    STATE(155), 1,
      sym_font,
  [3556] = 2,
    ACTIONS(215), 1,
      aux_sym__relative_attr_token1,
    STATE(112), 1,
      sym__relative_attr,
  [3563] = 2,
    ACTIONS(639), 1,
      anon_sym_project,
    ACTIONS(641), 1,
      anon_sym_script,
  [3570] = 2,
    ACTIONS(643), 1,
      aux_sym__guide_attr_token1,
    STATE(101), 1,
      sym__guide_attr,
  [3577] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(184), 1,
      sym_name,
  [3584] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(181), 1,
      sym_name,
  [3591] = 2,
    ACTIONS(645), 1,
      aux_sym__guide_attr_token1,
    STATE(102), 1,
      sym_identifier,
  [3598] = 1,
    ACTIONS(647), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3603] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(180), 1,
      sym_name,
  [3610] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(178), 1,
      sym_name,
  [3617] = 2,
    ACTIONS(571), 1,
      aux_sym_offset_token1,
    STATE(269), 1,
      sym__offset,
  [3624] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(177), 1,
      sym_name,
  [3631] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(136), 1,
      sym_name,
  [3638] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(194), 1,
      sym_name,
  [3645] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(195), 1,
      sym_name,
  [3652] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(197), 1,
      sym_name,
  [3659] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(186), 1,
      sym_name,
  [3666] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(187), 1,
      sym_name,
  [3673] = 2,
    ACTIONS(141), 1,
      aux_sym_offset_token1,
    STATE(125), 1,
      sym_offset,
  [3680] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(185), 1,
      sym_name,
  [3687] = 2,
    ACTIONS(649), 1,
      aux_sym__absolute_attr_token1,
    STATE(107), 1,
      sym__absolute_y_attr,
  [3694] = 2,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(207), 1,
      sym_name,
  [3701] = 2,
    ACTIONS(651), 1,
      anon_sym_panel,
    STATE(130), 1,
      sym_panel,
  [3708] = 1,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
  [3712] = 1,
    ACTIONS(655), 1,
      sym_height,
  [3716] = 1,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
  [3720] = 1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [3724] = 1,
    ACTIONS(661), 1,
      aux_sym_absolute_token1,
  [3728] = 1,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
  [3732] = 1,
    ACTIONS(665), 1,
      anon_sym_COMMA,
  [3736] = 1,
    ACTIONS(667), 1,
      anon_sym_COMMA,
  [3740] = 1,
    ACTIONS(669), 1,
      aux_sym_absolute_token1,
  [3744] = 1,
    ACTIONS(671), 1,
      aux_sym_origin_token1,
  [3748] = 1,
    ACTIONS(673), 1,
      aux_sym_origin_token1,
  [3752] = 1,
    ACTIONS(675), 1,
      sym_width,
  [3756] = 1,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [3760] = 1,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
  [3764] = 1,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [3768] = 1,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
  [3772] = 1,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [3776] = 1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [3780] = 1,
    ACTIONS(689), 1,
      anon_sym_COMMA,
  [3784] = 1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
  [3788] = 1,
    ACTIONS(693), 1,
      anon_sym_COMMA,
  [3792] = 1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [3796] = 1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [3800] = 1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
  [3804] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [3808] = 1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [3812] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [3816] = 1,
    ACTIONS(707), 1,
      sym_fontsize,
  [3820] = 1,
    ACTIONS(653), 1,
      anon_sym_SQUOTE,
  [3824] = 1,
    ACTIONS(709), 1,
      anon_sym_COMMA,
  [3828] = 1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [3832] = 1,
    ACTIONS(713), 1,
      anon_sym_COMMA,
  [3836] = 1,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [3840] = 1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [3844] = 1,
    ACTIONS(719), 1,
      anon_sym_COMMA,
  [3848] = 1,
    ACTIONS(721), 1,
      aux_sym_origin_token1,
  [3852] = 1,
    ACTIONS(723), 1,
      aux_sym__label_id_token3,
  [3856] = 1,
    ACTIONS(725), 1,
      aux_sym__label_id_token2,
  [3860] = 1,
    ACTIONS(655), 1,
      sym_width,
  [3864] = 1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [3868] = 1,
    ACTIONS(729), 1,
      sym_rgb,
  [3872] = 1,
    ACTIONS(731), 1,
      aux_sym__label_id_token3,
  [3876] = 1,
    ACTIONS(733), 1,
      aux_sym__label_id_token2,
  [3880] = 1,
    ACTIONS(729), 1,
      sym_rgba,
  [3884] = 1,
    ACTIONS(735), 1,
      aux_sym__absolute_attr_token1,
  [3888] = 1,
    ACTIONS(737), 1,
      aux_sym_origin_token1,
  [3892] = 1,
    ACTIONS(739), 1,
      aux_sym__scale_token1,
  [3896] = 1,
    ACTIONS(741), 1,
      aux_sym__scale_token1,
  [3900] = 1,
    ACTIONS(633), 1,
      anon_sym_stretch,
  [3904] = 1,
    ACTIONS(743), 1,
      anon_sym_COMMA,
  [3908] = 1,
    ACTIONS(745), 1,
      aux_sym__input_id_token1,
  [3912] = 1,
    ACTIONS(747), 1,
      aux_sym__input_id_token1,
  [3916] = 1,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
  [3920] = 1,
    ACTIONS(751), 1,
      anon_sym_COMMA,
  [3924] = 1,
    ACTIONS(753), 1,
      aux_sym__input_id_token1,
  [3928] = 1,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
  [3932] = 1,
    ACTIONS(757), 1,
      aux_sym__scale_token1,
  [3936] = 1,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
  [3940] = 1,
    ACTIONS(761), 1,
      aux_sym__input_id_token1,
  [3944] = 1,
    ACTIONS(763), 1,
      anon_sym_COMMA,
  [3948] = 1,
    ACTIONS(765), 1,
      anon_sym_COMMA,
  [3952] = 1,
    ACTIONS(767), 1,
      anon_sym_with,
  [3956] = 1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
  [3960] = 1,
    ACTIONS(771), 1,
      anon_sym_gzip,
  [3964] = 1,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
  [3968] = 1,
    ACTIONS(771), 1,
      anon_sym_timestamp,
  [3972] = 1,
    ACTIONS(773), 1,
      ts_builtin_sym_end,
  [3976] = 1,
    ACTIONS(775), 1,
      aux_sym_relative_token1,
  [3980] = 1,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [3984] = 1,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
  [3988] = 1,
    ACTIONS(779), 1,
      anon_sym_SQUOTE,
  [3992] = 1,
    ACTIONS(781), 1,
      aux_sym_relative_token1,
  [3996] = 1,
    ACTIONS(783), 1,
      aux_sym_absolute_token1,
  [4000] = 1,
    ACTIONS(785), 1,
      aux_sym__label_id_token2,
  [4004] = 1,
    ACTIONS(787), 1,
      aux_sym__label_id_token3,
  [4008] = 1,
    ACTIONS(789), 1,
      anon_sym_COMMA,
  [4012] = 1,
    ACTIONS(791), 1,
      anon_sym_COMMA,
  [4016] = 1,
    ACTIONS(793), 1,
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
  [SMALL_STATE(10)] = 364,
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
  [SMALL_STATE(22)] = 701,
  [SMALL_STATE(23)] = 726,
  [SMALL_STATE(24)] = 751,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 810,
  [SMALL_STATE(27)] = 848,
  [SMALL_STATE(28)] = 884,
  [SMALL_STATE(29)] = 922,
  [SMALL_STATE(30)] = 957,
  [SMALL_STATE(31)] = 977,
  [SMALL_STATE(32)] = 1005,
  [SMALL_STATE(33)] = 1025,
  [SMALL_STATE(34)] = 1045,
  [SMALL_STATE(35)] = 1065,
  [SMALL_STATE(36)] = 1085,
  [SMALL_STATE(37)] = 1119,
  [SMALL_STATE(38)] = 1153,
  [SMALL_STATE(39)] = 1172,
  [SMALL_STATE(40)] = 1193,
  [SMALL_STATE(41)] = 1214,
  [SMALL_STATE(42)] = 1233,
  [SMALL_STATE(43)] = 1252,
  [SMALL_STATE(44)] = 1273,
  [SMALL_STATE(45)] = 1290,
  [SMALL_STATE(46)] = 1311,
  [SMALL_STATE(47)] = 1330,
  [SMALL_STATE(48)] = 1347,
  [SMALL_STATE(49)] = 1372,
  [SMALL_STATE(50)] = 1397,
  [SMALL_STATE(51)] = 1418,
  [SMALL_STATE(52)] = 1439,
  [SMALL_STATE(53)] = 1460,
  [SMALL_STATE(54)] = 1485,
  [SMALL_STATE(55)] = 1504,
  [SMALL_STATE(56)] = 1522,
  [SMALL_STATE(57)] = 1540,
  [SMALL_STATE(58)] = 1564,
  [SMALL_STATE(59)] = 1586,
  [SMALL_STATE(60)] = 1618,
  [SMALL_STATE(61)] = 1642,
  [SMALL_STATE(62)] = 1660,
  [SMALL_STATE(63)] = 1676,
  [SMALL_STATE(64)] = 1692,
  [SMALL_STATE(65)] = 1708,
  [SMALL_STATE(66)] = 1724,
  [SMALL_STATE(67)] = 1748,
  [SMALL_STATE(68)] = 1768,
  [SMALL_STATE(69)] = 1786,
  [SMALL_STATE(70)] = 1806,
  [SMALL_STATE(71)] = 1824,
  [SMALL_STATE(72)] = 1839,
  [SMALL_STATE(73)] = 1852,
  [SMALL_STATE(74)] = 1867,
  [SMALL_STATE(75)] = 1880,
  [SMALL_STATE(76)] = 1895,
  [SMALL_STATE(77)] = 1918,
  [SMALL_STATE(78)] = 1933,
  [SMALL_STATE(79)] = 1946,
  [SMALL_STATE(80)] = 1961,
  [SMALL_STATE(81)] = 1976,
  [SMALL_STATE(82)] = 1989,
  [SMALL_STATE(83)] = 2002,
  [SMALL_STATE(84)] = 2025,
  [SMALL_STATE(85)] = 2038,
  [SMALL_STATE(86)] = 2051,
  [SMALL_STATE(87)] = 2066,
  [SMALL_STATE(88)] = 2089,
  [SMALL_STATE(89)] = 2104,
  [SMALL_STATE(90)] = 2119,
  [SMALL_STATE(91)] = 2134,
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
  [SMALL_STATE(129)] = 2593,
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
  [SMALL_STATE(161)] = 2987,
  [SMALL_STATE(162)] = 3000,
  [SMALL_STATE(163)] = 3013,
  [SMALL_STATE(164)] = 3034,
  [SMALL_STATE(165)] = 3047,
  [SMALL_STATE(166)] = 3066,
  [SMALL_STATE(167)] = 3076,
  [SMALL_STATE(168)] = 3092,
  [SMALL_STATE(169)] = 3108,
  [SMALL_STATE(170)] = 3118,
  [SMALL_STATE(171)] = 3134,
  [SMALL_STATE(172)] = 3144,
  [SMALL_STATE(173)] = 3154,
  [SMALL_STATE(174)] = 3164,
  [SMALL_STATE(175)] = 3174,
  [SMALL_STATE(176)] = 3183,
  [SMALL_STATE(177)] = 3196,
  [SMALL_STATE(178)] = 3209,
  [SMALL_STATE(179)] = 3222,
  [SMALL_STATE(180)] = 3233,
  [SMALL_STATE(181)] = 3246,
  [SMALL_STATE(182)] = 3259,
  [SMALL_STATE(183)] = 3272,
  [SMALL_STATE(184)] = 3283,
  [SMALL_STATE(185)] = 3296,
  [SMALL_STATE(186)] = 3306,
  [SMALL_STATE(187)] = 3316,
  [SMALL_STATE(188)] = 3326,
  [SMALL_STATE(189)] = 3336,
  [SMALL_STATE(190)] = 3346,
  [SMALL_STATE(191)] = 3356,
  [SMALL_STATE(192)] = 3366,
  [SMALL_STATE(193)] = 3376,
  [SMALL_STATE(194)] = 3386,
  [SMALL_STATE(195)] = 3396,
  [SMALL_STATE(196)] = 3406,
  [SMALL_STATE(197)] = 3416,
  [SMALL_STATE(198)] = 3426,
  [SMALL_STATE(199)] = 3436,
  [SMALL_STATE(200)] = 3446,
  [SMALL_STATE(201)] = 3456,
  [SMALL_STATE(202)] = 3466,
  [SMALL_STATE(203)] = 3476,
  [SMALL_STATE(204)] = 3486,
  [SMALL_STATE(205)] = 3493,
  [SMALL_STATE(206)] = 3500,
  [SMALL_STATE(207)] = 3507,
  [SMALL_STATE(208)] = 3514,
  [SMALL_STATE(209)] = 3521,
  [SMALL_STATE(210)] = 3528,
  [SMALL_STATE(211)] = 3535,
  [SMALL_STATE(212)] = 3542,
  [SMALL_STATE(213)] = 3549,
  [SMALL_STATE(214)] = 3556,
  [SMALL_STATE(215)] = 3563,
  [SMALL_STATE(216)] = 3570,
  [SMALL_STATE(217)] = 3577,
  [SMALL_STATE(218)] = 3584,
  [SMALL_STATE(219)] = 3591,
  [SMALL_STATE(220)] = 3598,
  [SMALL_STATE(221)] = 3603,
  [SMALL_STATE(222)] = 3610,
  [SMALL_STATE(223)] = 3617,
  [SMALL_STATE(224)] = 3624,
  [SMALL_STATE(225)] = 3631,
  [SMALL_STATE(226)] = 3638,
  [SMALL_STATE(227)] = 3645,
  [SMALL_STATE(228)] = 3652,
  [SMALL_STATE(229)] = 3659,
  [SMALL_STATE(230)] = 3666,
  [SMALL_STATE(231)] = 3673,
  [SMALL_STATE(232)] = 3680,
  [SMALL_STATE(233)] = 3687,
  [SMALL_STATE(234)] = 3694,
  [SMALL_STATE(235)] = 3701,
  [SMALL_STATE(236)] = 3708,
  [SMALL_STATE(237)] = 3712,
  [SMALL_STATE(238)] = 3716,
  [SMALL_STATE(239)] = 3720,
  [SMALL_STATE(240)] = 3724,
  [SMALL_STATE(241)] = 3728,
  [SMALL_STATE(242)] = 3732,
  [SMALL_STATE(243)] = 3736,
  [SMALL_STATE(244)] = 3740,
  [SMALL_STATE(245)] = 3744,
  [SMALL_STATE(246)] = 3748,
  [SMALL_STATE(247)] = 3752,
  [SMALL_STATE(248)] = 3756,
  [SMALL_STATE(249)] = 3760,
  [SMALL_STATE(250)] = 3764,
  [SMALL_STATE(251)] = 3768,
  [SMALL_STATE(252)] = 3772,
  [SMALL_STATE(253)] = 3776,
  [SMALL_STATE(254)] = 3780,
  [SMALL_STATE(255)] = 3784,
  [SMALL_STATE(256)] = 3788,
  [SMALL_STATE(257)] = 3792,
  [SMALL_STATE(258)] = 3796,
  [SMALL_STATE(259)] = 3800,
  [SMALL_STATE(260)] = 3804,
  [SMALL_STATE(261)] = 3808,
  [SMALL_STATE(262)] = 3812,
  [SMALL_STATE(263)] = 3816,
  [SMALL_STATE(264)] = 3820,
  [SMALL_STATE(265)] = 3824,
  [SMALL_STATE(266)] = 3828,
  [SMALL_STATE(267)] = 3832,
  [SMALL_STATE(268)] = 3836,
  [SMALL_STATE(269)] = 3840,
  [SMALL_STATE(270)] = 3844,
  [SMALL_STATE(271)] = 3848,
  [SMALL_STATE(272)] = 3852,
  [SMALL_STATE(273)] = 3856,
  [SMALL_STATE(274)] = 3860,
  [SMALL_STATE(275)] = 3864,
  [SMALL_STATE(276)] = 3868,
  [SMALL_STATE(277)] = 3872,
  [SMALL_STATE(278)] = 3876,
  [SMALL_STATE(279)] = 3880,
  [SMALL_STATE(280)] = 3884,
  [SMALL_STATE(281)] = 3888,
  [SMALL_STATE(282)] = 3892,
  [SMALL_STATE(283)] = 3896,
  [SMALL_STATE(284)] = 3900,
  [SMALL_STATE(285)] = 3904,
  [SMALL_STATE(286)] = 3908,
  [SMALL_STATE(287)] = 3912,
  [SMALL_STATE(288)] = 3916,
  [SMALL_STATE(289)] = 3920,
  [SMALL_STATE(290)] = 3924,
  [SMALL_STATE(291)] = 3928,
  [SMALL_STATE(292)] = 3932,
  [SMALL_STATE(293)] = 3936,
  [SMALL_STATE(294)] = 3940,
  [SMALL_STATE(295)] = 3944,
  [SMALL_STATE(296)] = 3948,
  [SMALL_STATE(297)] = 3952,
  [SMALL_STATE(298)] = 3956,
  [SMALL_STATE(299)] = 3960,
  [SMALL_STATE(300)] = 3964,
  [SMALL_STATE(301)] = 3968,
  [SMALL_STATE(302)] = 3972,
  [SMALL_STATE(303)] = 3976,
  [SMALL_STATE(304)] = 3980,
  [SMALL_STATE(305)] = 3984,
  [SMALL_STATE(306)] = 3988,
  [SMALL_STATE(307)] = 3992,
  [SMALL_STATE(308)] = 3996,
  [SMALL_STATE(309)] = 4000,
  [SMALL_STATE(310)] = 4004,
  [SMALL_STATE(311)] = 4008,
  [SMALL_STATE(312)] = 4012,
  [SMALL_STATE(313)] = 4016,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 7),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 11),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(241),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(215),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(183),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(235),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 6),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 8),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 13),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 13),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 10),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 13),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 12),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 6),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 8),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 9),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1, .production_id = 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 10),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 21),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1, .production_id = 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 15),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [773] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
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
