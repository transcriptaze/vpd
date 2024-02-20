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
#define STATE_COUNT 316
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 1
#define TOKEN_COUNT 88
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
  aux_sym__guide_id_token1 = 40,
  anon_sym_input = 41,
  aux_sym__input_id_token1 = 42,
  anon_sym_output = 43,
  anon_sym_parameter = 44,
  anon_sym_light = 45,
  anon_sym_widget = 46,
  anon_sym_label = 47,
  aux_sym__label_id_token1 = 48,
  anon_sym_DQUOTE = 49,
  aux_sym__label_id_token2 = 50,
  anon_sym_SQUOTE = 51,
  aux_sym__label_id_token3 = 52,
  anon_sym_decoration = 53,
  anon_sym_load = 54,
  anon_sym_project = 55,
  anon_sym_script = 56,
  anon_sym_save = 57,
  anon_sym_export = 58,
  anon_sym_DOTh = 59,
  anon_sym_GT_GT = 60,
  anon_sym_timestamp = 61,
  anon_sym_gzip = 62,
  aux_sym_parameter_token1 = 63,
  sym_fontsize = 64,
  anon_sym_baseline = 65,
  anon_sym_scale = 66,
  aux_sym__scale_token1 = 67,
  anon_sym_stretch = 68,
  anon_sym_origin = 69,
  aux_sym_origin_token1 = 70,
  aux_sym__originx_token1 = 71,
  aux_sym__originy_token1 = 72,
  anon_sym_background = 73,
  anon_sym_none = 74,
  sym_rgb = 75,
  sym_rgba = 76,
  anon_sym_panel = 77,
  anon_sym_svg = 78,
  anon_sym_dark = 79,
  sym_height = 80,
  sym_width = 81,
  anon_sym_vertical = 82,
  anon_sym_horizontal = 83,
  aux_sym_offset_token1 = 84,
  aux_sym__string_token1 = 85,
  aux_sym_absolute_token1 = 86,
  aux_sym_relative_token1 = 87,
  sym_command = 88,
  sym_new = 89,
  sym_set = 90,
  sym__module_attr = 91,
  sym__component_attr = 92,
  sym__label_attr = 93,
  sym__guideline_attr = 94,
  sym__x_attr = 95,
  sym__y_attr = 96,
  sym__xy_attr = 97,
  sym__absolute_attr = 98,
  sym__absolute_x_attr = 99,
  sym__absolute_y_attr = 100,
  sym__absolute_xy_attr = 101,
  sym__relative_attr = 102,
  sym__relative_xy_attr = 103,
  sym__geometry_x_attr = 104,
  sym__geometry_y_attr = 105,
  sym__geometry_xy_attr = 106,
  sym__guide_attr = 107,
  sym__guide_xy_attr = 108,
  sym_decorate = 109,
  sym_delete = 110,
  sym__guide_id = 111,
  sym__input_id = 112,
  sym__output_id = 113,
  sym__parameter_id = 114,
  sym__light_id = 115,
  sym__widget_id = 116,
  sym__label_id = 117,
  sym__decoration_id = 118,
  sym__component_id = 119,
  sym_load = 120,
  sym_save = 121,
  sym_export = 122,
  sym__module_export = 123,
  sym_project = 124,
  sym_script = 125,
  sym__entity = 126,
  sym__input = 127,
  sym__output = 128,
  sym__parameter = 129,
  sym__light = 130,
  sym__widget = 131,
  sym_module = 132,
  sym_input = 133,
  sym_output = 134,
  sym_parameter = 135,
  sym_light = 136,
  sym_widget = 137,
  sym__component = 138,
  sym_label = 139,
  sym_font = 140,
  sym__align = 141,
  sym_halign = 142,
  sym_valign = 143,
  sym_colour = 144,
  sym_decoration = 145,
  sym__scale = 146,
  sym_stretch = 147,
  sym_origin = 148,
  sym__originx = 149,
  sym__originy = 150,
  sym_background = 151,
  sym_panel = 152,
  sym_svg = 153,
  sym_name = 154,
  sym_part = 155,
  sym_guide = 156,
  sym_identifier = 157,
  sym_vertical = 158,
  sym_horizontal = 159,
  sym_geometry = 160,
  sym_offset = 161,
  sym__offset = 162,
  sym_guideline = 163,
  sym__string = 164,
  sym_absolute = 165,
  sym_relative = 166,
  sym__decorate = 167,
  sym__relative = 168,
  sym_x = 169,
  sym_y = 170,
  aux_sym_command_repeat1 = 171,
  alias_sym_dy = 172,
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
  [aux_sym__guide_id_token1] = "identifier",
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
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_DOTh] = "header",
  [anon_sym_GT_GT] = "helper",
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
  [sym__guideline_attr] = "_guideline_attr",
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
  [sym__guide_id] = "guide",
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
  [sym__module_export] = "module",
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
  [aux_sym__guide_id_token1] = sym_identifier,
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
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_DOTh] = anon_sym_DOTh,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
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
  [sym__guideline_attr] = sym__guideline_attr,
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
  [sym__guide_id] = sym_guide,
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
  [sym__module_export] = sym_module,
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
  [aux_sym__guide_id_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOTh] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = true,
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
  [sym__guideline_attr] = {
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
  [sym__guide_id] = {
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
  [sym__module_export] = {
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
    [1] = sym__xy_attr,
  },
  [6] = {
    [1] = aux_sym__originx_token1,
  },
  [7] = {
    [0] = sym_absolute,
  },
  [8] = {
    [1] = sym_light,
  },
  [9] = {
    [1] = sym_absolute,
  },
  [10] = {
    [1] = aux_sym__string_token1,
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
  sym__absolute_attr, 2,
    sym__absolute_attr,
    sym__xy_attr,
  sym__relative_attr, 4,
    sym__relative_attr,
    sym__xy_attr,
    sym_x,
    sym_y,
  sym__geometry_x_attr, 3,
    sym__geometry_x_attr,
    sym__xy_attr,
    sym_x,
  sym__geometry_y_attr, 3,
    sym__geometry_y_attr,
    sym__xy_attr,
    sym_y,
  sym__guide_attr, 4,
    sym__guide_attr,
    sym__xy_attr,
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
  [40] = 11,
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
  [72] = 19,
  [73] = 73,
  [74] = 16,
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
  [88] = 14,
  [89] = 21,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 19,
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
  [139] = 77,
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
  [162] = 136,
  [163] = 39,
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
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 296,
  [307] = 238,
  [308] = 275,
  [309] = 282,
  [310] = 248,
  [311] = 278,
  [312] = 277,
  [313] = 247,
  [314] = 298,
  [315] = 300,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(320);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '0') ADVANCE(344);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(330);
      if (lookahead == 'y') ADVANCE(331);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(556);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(500);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(389);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(435);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(536);
      if (lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(536);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'U') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(555);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(181);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(181);
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 26:
      if (lookahead == ';') ADVANCE(321);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(522);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(249);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(546);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(102);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(521);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(429);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(534);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 148:
      if (lookahead == 'j') ADVANCE(80);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(547);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(553);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(377);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(536);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(548);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(558);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(368);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(371);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(538);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'z') ADVANCE(136);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 284:
      if (lookahead == 'w') ADVANCE(322);
      END_STATE();
    case 285:
      if (lookahead == 'x') ADVANCE(225);
      END_STATE();
    case 286:
      if (lookahead == 'x') ADVANCE(250);
      END_STATE();
    case 287:
      if (lookahead == 'z') ADVANCE(77);
      END_STATE();
    case 288:
      if (lookahead == 'z') ADVANCE(214);
      END_STATE();
    case 289:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(536);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(536);
      if (lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(555);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 313:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 314:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 315:
      if (eof) ADVANCE(320);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == 'r') ADVANCE(462);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == 't') ADVANCE(473);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 316:
      if (eof) ADVANCE(320);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 317:
      if (eof) ADVANCE(320);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(428);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'g') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(140);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 318:
      if (eof) ADVANCE(320);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '@') ADVANCE(342);
      if (lookahead == 'b') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'g') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(140);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 319:
      if (eof) ADVANCE(320);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 's') ADVANCE(38);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == 'H') ADVANCE(343);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == 'H') ADVANCE(343);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(343);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(343);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == 'H') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(424);
      if (lookahead == 'H') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(557);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(501);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(557);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(501);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(181);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(503);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 315},
  [3] = {.lex_state = 315},
  [4] = {.lex_state = 317},
  [5] = {.lex_state = 317},
  [6] = {.lex_state = 317},
  [7] = {.lex_state = 317},
  [8] = {.lex_state = 317},
  [9] = {.lex_state = 317},
  [10] = {.lex_state = 317},
  [11] = {.lex_state = 315},
  [12] = {.lex_state = 315},
  [13] = {.lex_state = 315},
  [14] = {.lex_state = 315},
  [15] = {.lex_state = 315},
  [16] = {.lex_state = 315},
  [17] = {.lex_state = 315},
  [18] = {.lex_state = 315},
  [19] = {.lex_state = 315},
  [20] = {.lex_state = 315},
  [21] = {.lex_state = 315},
  [22] = {.lex_state = 317},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 318},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 317},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 317},
  [40] = {.lex_state = 316},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 317},
  [50] = {.lex_state = 317},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 316},
  [58] = {.lex_state = 317},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 318},
  [62] = {.lex_state = 319},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 317},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 316},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 317},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 317},
  [74] = {.lex_state = 316},
  [75] = {.lex_state = 317},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 317},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 319},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 316},
  [89] = {.lex_state = 316},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 316},
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
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 30},
  [165] = {.lex_state = 317},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 317},
  [170] = {.lex_state = 317},
  [171] = {.lex_state = 317},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 318},
  [174] = {.lex_state = 317},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 315},
  [177] = {.lex_state = 315},
  [178] = {.lex_state = 315},
  [179] = {.lex_state = 315},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 315},
  [182] = {.lex_state = 317},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 315},
  [186] = {.lex_state = 315},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 315},
  [197] = {.lex_state = 315},
  [198] = {.lex_state = 315},
  [199] = {.lex_state = 315},
  [200] = {.lex_state = 315},
  [201] = {.lex_state = 315},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 315},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 318},
  [217] = {.lex_state = 318},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 317},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 28},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 293},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 315},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 315},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 317},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 318},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 315},
  [251] = {.lex_state = 315},
  [252] = {.lex_state = 317},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 315},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 315},
  [270] = {.lex_state = 510},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 505},
  [274] = {.lex_state = 317},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 510},
  [278] = {.lex_state = 505},
  [279] = {.lex_state = 315},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 316},
  [285] = {.lex_state = 316},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 316},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 318},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 318},
  [311] = {.lex_state = 505},
  [312] = {.lex_state = 510},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 318},
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
    [anon_sym_DOTh] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
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
    [sym_width] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [aux_sym_offset_token1] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(304),
    [sym_new] = STATE(25),
    [sym_set] = STATE(25),
    [sym_decorate] = STATE(25),
    [sym_delete] = STATE(25),
    [sym_load] = STATE(25),
    [sym_save] = STATE(25),
    [sym_export] = STATE(25),
    [aux_sym_command_repeat1] = STATE(25),
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
    STATE(41), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(53), 1,
      sym_halign,
    STATE(97), 1,
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
    STATE(53), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(147), 1,
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
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym__align,
    STATE(53), 1,
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
    STATE(47), 1,
      sym_valign,
    STATE(51), 1,
      sym__align,
    STATE(53), 1,
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
  [196] = 14,
    ACTIONS(55), 1,
      anon_sym_module,
    ACTIONS(57), 1,
      anon_sym_guide,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_output,
    ACTIONS(63), 1,
      anon_sym_parameter,
    ACTIONS(65), 1,
      anon_sym_light,
    ACTIONS(67), 1,
      anon_sym_widget,
    ACTIONS(69), 1,
      anon_sym_label,
    ACTIONS(71), 1,
      anon_sym_origin,
    ACTIONS(73), 1,
      anon_sym_background,
    STATE(31), 1,
      sym__guide_id,
    STATE(63), 1,
      sym__label_id,
    STATE(168), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(114), 6,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [248] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym__align,
    STATE(53), 1,
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
  [290] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(41), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(53), 1,
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
  [332] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(47), 1,
      sym_valign,
    STATE(52), 1,
      sym__align,
    STATE(53), 1,
      sym_halign,
    STATE(128), 1,
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
    ACTIONS(75), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [374] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(47), 1,
      sym_valign,
    STATE(51), 1,
      sym__align,
    STATE(53), 1,
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
  [416] = 4,
    ACTIONS(81), 1,
      aux_sym_offset_token1,
    STATE(21), 1,
      sym_offset,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(79), 17,
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
  [474] = 2,
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
  [500] = 2,
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
  [526] = 2,
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
  [552] = 2,
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
  [578] = 2,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(105), 17,
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
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(109), 17,
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
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(113), 17,
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
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(117), 17,
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
  [682] = 2,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(121), 17,
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
  [708] = 2,
    ACTIONS(125), 1,
      sym_rgb,
    ACTIONS(123), 19,
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
  [733] = 2,
    ACTIONS(129), 1,
      anon_sym_x,
    ACTIONS(127), 19,
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
  [758] = 2,
    ACTIONS(133), 1,
      anon_sym_x,
    ACTIONS(131), 19,
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
  [783] = 10,
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
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
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
  [821] = 8,
    ACTIONS(141), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(143), 1,
      anon_sym_vertical,
    ACTIONS(145), 1,
      anon_sym_horizontal,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(132), 1,
      sym_offset,
    STATE(234), 1,
      sym_identifier,
    STATE(131), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(139), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [855] = 9,
    ACTIONS(149), 1,
      anon_sym_module,
    ACTIONS(151), 1,
      anon_sym_guide,
    ACTIONS(153), 1,
      anon_sym_input,
    ACTIONS(155), 1,
      anon_sym_output,
    ACTIONS(157), 1,
      anon_sym_light,
    ACTIONS(159), 1,
      anon_sym_widget,
    ACTIONS(161), 1,
      anon_sym_label,
    ACTIONS(163), 1,
      aux_sym_parameter_token1,
    STATE(151), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [891] = 10,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_new,
    ACTIONS(173), 1,
      anon_sym_set,
    ACTIONS(176), 1,
      anon_sym_decorate,
    ACTIONS(179), 1,
      anon_sym_delete,
    ACTIONS(182), 1,
      anon_sym_load,
    ACTIONS(185), 1,
      anon_sym_save,
    ACTIONS(188), 1,
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
  [929] = 9,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_output,
    ACTIONS(63), 1,
      anon_sym_parameter,
    ACTIONS(65), 1,
      anon_sym_light,
    ACTIONS(67), 1,
      anon_sym_widget,
    ACTIONS(69), 1,
      anon_sym_label,
    ACTIONS(191), 1,
      anon_sym_guide,
    ACTIONS(193), 1,
      anon_sym_decoration,
    STATE(120), 8,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [964] = 2,
    ACTIONS(197), 1,
      anon_sym_x,
    ACTIONS(195), 14,
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
  [984] = 6,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(205), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(98), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1012] = 9,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(141), 1,
      sym__xy_attr,
    STATE(257), 1,
      sym__relative_attr,
    STATE(259), 1,
      sym__geometry_x_attr,
    STATE(299), 1,
      sym__guide_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(95), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1046] = 9,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(209), 1,
      anon_sym_AT,
    STATE(158), 1,
      sym__xy_attr,
    STATE(257), 1,
      sym__relative_attr,
    STATE(259), 1,
      sym__geometry_x_attr,
    STATE(299), 1,
      sym__guide_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(95), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1080] = 2,
    ACTIONS(213), 1,
      anon_sym_x,
    ACTIONS(211), 14,
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
  [1100] = 6,
    ACTIONS(141), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(143), 1,
      anon_sym_vertical,
    ACTIONS(145), 1,
      anon_sym_horizontal,
    STATE(26), 1,
      sym_identifier,
    STATE(148), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(139), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1128] = 2,
    ACTIONS(217), 1,
      anon_sym_x,
    ACTIONS(215), 14,
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
  [1148] = 2,
    ACTIONS(221), 1,
      anon_sym_x,
    ACTIONS(219), 14,
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
  [1168] = 2,
    ACTIONS(225), 1,
      anon_sym_x,
    ACTIONS(223), 14,
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
  [1188] = 2,
    ACTIONS(229), 1,
      sym_width,
    ACTIONS(227), 13,
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
  [1207] = 4,
    ACTIONS(231), 1,
      aux_sym_offset_token1,
    STATE(89), 1,
      sym_offset,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(79), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1228] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(101), 1,
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
  [1249] = 6,
    ACTIONS(233), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_relative_token1,
    STATE(272), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(235), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1274] = 2,
    ACTIONS(243), 1,
      sym_rgb,
    ACTIONS(241), 11,
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
  [1291] = 6,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(158), 1,
      sym__x_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(159), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1316] = 6,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(141), 1,
      sym__x_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(159), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1341] = 4,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym__scale,
    STATE(124), 1,
      sym_stretch,
    ACTIONS(245), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1362] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
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
  [1381] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(128), 1,
      sym_colour,
    ACTIONS(75), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1402] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(79), 1,
      sym_offset,
    ACTIONS(255), 10,
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
  [1421] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(80), 1,
      sym_offset,
    ACTIONS(257), 10,
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
  [1440] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(97), 1,
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
  [1461] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(142), 1,
      sym_colour,
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
  [1482] = 3,
    ACTIONS(253), 1,
      sym_rgb,
    ACTIONS(261), 1,
      anon_sym_COMMA,
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
  [1501] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(123), 1,
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
  [1522] = 2,
    ACTIONS(265), 1,
      sym_rgb,
    ACTIONS(263), 11,
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
  [1539] = 6,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(158), 1,
      sym__y_attr,
    ACTIONS(205), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(160), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1563] = 4,
    ACTIONS(271), 1,
      aux_sym__input_id_token1,
    STATE(102), 1,
      sym_part,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(269), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1583] = 5,
    STATE(47), 1,
      sym_valign,
    STATE(53), 1,
      sym_halign,
    STATE(141), 1,
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
  [1605] = 2,
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
  [1621] = 3,
    ACTIONS(279), 1,
      anon_sym_timestamp,
    ACTIONS(281), 1,
      anon_sym_gzip,
    ACTIONS(277), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1639] = 2,
    ACTIONS(285), 1,
      aux_sym__guide_attr_token2,
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
  [1655] = 2,
    ACTIONS(289), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(287), 10,
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
  [1671] = 10,
    ACTIONS(291), 1,
      anon_sym_x,
    ACTIONS(293), 1,
      anon_sym_y,
    ACTIONS(295), 1,
      anon_sym_xy,
    ACTIONS(297), 1,
      anon_sym_text,
    ACTIONS(299), 1,
      anon_sym_font,
    ACTIONS(301), 1,
      anon_sym_size,
    ACTIONS(303), 1,
      anon_sym_halign,
    ACTIONS(305), 1,
      anon_sym_valign,
    ACTIONS(307), 1,
      anon_sym_align,
    ACTIONS(309), 2,
      anon_sym_colour,
      anon_sym_color,
  [1703] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(122), 1,
      sym_offset,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1721] = 2,
    ACTIONS(315), 1,
      aux_sym_offset_token1,
    ACTIONS(313), 10,
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
  [1737] = 6,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(141), 1,
      sym__y_attr,
    ACTIONS(205), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(160), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1761] = 3,
    ACTIONS(319), 1,
      anon_sym_light,
    ACTIONS(321), 1,
      anon_sym_dark,
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
  [1779] = 3,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
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
  [1797] = 4,
    ACTIONS(271), 1,
      aux_sym__input_id_token1,
    STATE(153), 1,
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
  [1817] = 6,
    ACTIONS(331), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      aux_sym_relative_token1,
    STATE(239), 1,
      sym_x,
    STATE(69), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(235), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1841] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(99), 1,
      sym_offset,
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
  [1859] = 1,
    ACTIONS(111), 10,
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
  [1872] = 6,
    ACTIONS(59), 1,
      anon_sym_input,
    ACTIONS(61), 1,
      anon_sym_output,
    ACTIONS(63), 1,
      anon_sym_parameter,
    ACTIONS(65), 1,
      anon_sym_light,
    ACTIONS(67), 1,
      anon_sym_widget,
    STATE(302), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1895] = 2,
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
  [1910] = 6,
    ACTIONS(339), 1,
      anon_sym_input,
    ACTIONS(341), 1,
      anon_sym_output,
    ACTIONS(343), 1,
      anon_sym_parameter,
    ACTIONS(345), 1,
      anon_sym_light,
    ACTIONS(347), 1,
      anon_sym_widget,
    STATE(253), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1933] = 2,
    ACTIONS(351), 1,
      anon_sym_COMMA,
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
  [1948] = 2,
    ACTIONS(353), 2,
      anon_sym_AT,
      aux_sym__relative_attr_token1,
    ACTIONS(355), 8,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [1963] = 1,
    ACTIONS(357), 10,
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
  [2002] = 2,
    ACTIONS(365), 1,
      anon_sym_COMMA,
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
  [2017] = 2,
    ACTIONS(367), 1,
      anon_sym_COMMA,
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
  [2032] = 6,
    ACTIONS(339), 1,
      anon_sym_input,
    ACTIONS(341), 1,
      anon_sym_output,
    ACTIONS(343), 1,
      anon_sym_parameter,
    ACTIONS(345), 1,
      anon_sym_light,
    ACTIONS(347), 1,
      anon_sym_widget,
    STATE(283), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2055] = 1,
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
  [2068] = 1,
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
  [2081] = 2,
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
  [2096] = 1,
    ACTIONS(377), 10,
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
  [2109] = 2,
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
  [2124] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(121), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2139] = 2,
    ACTIONS(381), 1,
      anon_sym_COMMA,
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
  [2154] = 2,
    ACTIONS(385), 1,
      anon_sym_timestamp,
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
  [2169] = 2,
    ACTIONS(387), 1,
      anon_sym_COMMA,
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
  [2184] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(113), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2199] = 1,
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
  [2211] = 1,
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
  [2223] = 1,
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
  [2235] = 1,
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
  [2247] = 1,
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
  [2259] = 1,
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
  [2271] = 1,
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
  [2283] = 1,
    ACTIONS(75), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2295] = 1,
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
  [2307] = 1,
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
  [2319] = 1,
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
  [2331] = 1,
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
  [2343] = 1,
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
  [2355] = 1,
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
  [2367] = 1,
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
  [2379] = 1,
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
  [2391] = 1,
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
  [2403] = 1,
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
  [2415] = 1,
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
  [2427] = 1,
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
  [2439] = 1,
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
  [2451] = 1,
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
  [2463] = 1,
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
  [2475] = 1,
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
  [2487] = 1,
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
  [2499] = 1,
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
  [2511] = 1,
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
  [2523] = 1,
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
  [2535] = 1,
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
  [2547] = 1,
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
  [2559] = 1,
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
  [2571] = 1,
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
  [2583] = 1,
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
  [2595] = 1,
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
  [2607] = 1,
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
  [2619] = 1,
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
  [2631] = 1,
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
  [2643] = 1,
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
  [2655] = 1,
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
  [2667] = 1,
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
  [2679] = 1,
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
  [2691] = 1,
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
  [2703] = 1,
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
  [2715] = 1,
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
  [2727] = 1,
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
  [2739] = 1,
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
  [2751] = 1,
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
  [2763] = 1,
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
  [2775] = 1,
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
  [2787] = 1,
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
  [2799] = 1,
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
  [2811] = 1,
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
  [2823] = 1,
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
  [2835] = 1,
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
  [2847] = 1,
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
  [2859] = 1,
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
  [2871] = 1,
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
  [2883] = 1,
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
  [2895] = 1,
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
  [2907] = 1,
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
  [2919] = 1,
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
  [2931] = 6,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(495), 1,
      anon_sym_AT,
    ACTIONS(499), 1,
      anon_sym_origin,
    ACTIONS(501), 1,
      aux_sym_origin_token1,
    STATE(126), 1,
      sym_offset,
    ACTIONS(497), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2953] = 1,
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
  [2965] = 1,
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
  [2977] = 1,
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
  [2989] = 1,
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
  [3001] = 1,
    ACTIONS(511), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3013] = 1,
    ACTIONS(513), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3025] = 2,
    ACTIONS(461), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(515), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3038] = 2,
    ACTIONS(227), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(229), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3051] = 6,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(517), 1,
      anon_sym_AT,
    ACTIONS(519), 1,
      anon_sym_origin,
    ACTIONS(521), 1,
      aux_sym_origin_token1,
    STATE(129), 1,
      sym_offset,
    ACTIONS(497), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3072] = 6,
    ACTIONS(523), 1,
      anon_sym_input,
    ACTIONS(525), 1,
      anon_sym_output,
    ACTIONS(527), 1,
      anon_sym_parameter,
    ACTIONS(529), 1,
      anon_sym_light,
    ACTIONS(531), 1,
      anon_sym_widget,
    ACTIONS(533), 1,
      anon_sym_label,
  [3091] = 5,
    ACTIONS(535), 1,
      aux_sym__input_id_token1,
    ACTIONS(537), 1,
      anon_sym_none,
    ACTIONS(539), 1,
      sym_rgb,
    ACTIONS(541), 1,
      sym_rgba,
    STATE(96), 1,
      sym_name,
  [3107] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(543), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3117] = 5,
    ACTIONS(545), 1,
      anon_sym_name,
    ACTIONS(547), 1,
      anon_sym_x,
    ACTIONS(549), 1,
      anon_sym_y,
    ACTIONS(551), 1,
      anon_sym_xy,
    ACTIONS(553), 1,
      anon_sym_part,
  [3133] = 2,
    STATE(141), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3143] = 2,
    STATE(59), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3153] = 2,
    STATE(59), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3163] = 2,
    STATE(57), 1,
      sym_y,
    ACTIONS(555), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3173] = 5,
    ACTIONS(557), 1,
      anon_sym_AT,
    ACTIONS(559), 1,
      aux_sym__originx_token1,
    ACTIONS(561), 1,
      aux_sym__originy_token1,
    STATE(267), 1,
      sym__originy,
    STATE(268), 1,
      sym__originx,
  [3189] = 2,
    STATE(141), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3199] = 3,
    ACTIONS(563), 1,
      anon_sym_module,
    ACTIONS(565), 1,
      anon_sym_panel,
    STATE(157), 2,
      sym__module_export,
      sym_panel,
  [3210] = 4,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(240), 1,
      sym__offset,
    STATE(243), 1,
      sym__relative,
  [3223] = 4,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym__offset,
    STATE(244), 1,
      sym__relative,
  [3236] = 4,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym__offset,
    STATE(245), 1,
      sym__relative,
  [3249] = 4,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym__offset,
    STATE(242), 1,
      sym__relative,
  [3262] = 4,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      aux_sym__string_token1,
    STATE(42), 1,
      sym__string,
  [3275] = 4,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym__offset,
    STATE(241), 1,
      sym__relative,
  [3288] = 2,
    STATE(110), 1,
      sym__geometry_y_attr,
    ACTIONS(585), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3297] = 4,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    ACTIONS(589), 1,
      anon_sym_SQUOTE,
    ACTIONS(591), 1,
      aux_sym__string_token1,
    STATE(141), 1,
      sym__string,
  [3310] = 3,
    ACTIONS(593), 1,
      anon_sym_project,
    ACTIONS(595), 1,
      anon_sym_script,
    STATE(138), 2,
      sym_project,
      sym_script,
  [3321] = 3,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(240), 1,
      sym__offset,
    STATE(260), 1,
      sym__relative,
  [3331] = 3,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(240), 1,
      sym__offset,
    STATE(262), 1,
      sym__relative,
  [3341] = 3,
    ACTIONS(597), 1,
      aux_sym__input_id_token1,
    STATE(70), 1,
      sym_name,
    STATE(145), 1,
      sym__component,
  [3351] = 3,
    ACTIONS(597), 1,
      aux_sym__input_id_token1,
    STATE(70), 1,
      sym_name,
    STATE(137), 1,
      sym__component,
  [3361] = 3,
    ACTIONS(597), 1,
      aux_sym__input_id_token1,
    STATE(70), 1,
      sym_name,
    STATE(135), 1,
      sym__component,
  [3371] = 3,
    ACTIONS(597), 1,
      aux_sym__input_id_token1,
    STATE(70), 1,
      sym_name,
    STATE(133), 1,
      sym__component,
  [3381] = 3,
    ACTIONS(597), 1,
      aux_sym__input_id_token1,
    STATE(70), 1,
      sym_name,
    STATE(130), 1,
      sym__component,
  [3391] = 3,
    ACTIONS(599), 1,
      anon_sym_name,
    ACTIONS(601), 1,
      anon_sym_height,
    ACTIONS(603), 1,
      anon_sym_width,
  [3401] = 3,
    ACTIONS(605), 1,
      aux_sym__label_id_token1,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
  [3411] = 3,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    ACTIONS(613), 1,
      aux_sym__guide_id_token1,
    STATE(228), 1,
      sym__component_id,
  [3421] = 3,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(141), 1,
      sym_colour,
  [3431] = 3,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(240), 1,
      sym__offset,
    STATE(263), 1,
      sym__relative,
  [3441] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      sym_offset,
  [3451] = 3,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(240), 1,
      sym__offset,
    STATE(264), 1,
      sym__relative,
  [3461] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(617), 1,
      aux_sym_origin_token1,
    STATE(100), 1,
      sym_offset,
  [3471] = 3,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(236), 1,
      sym__relative,
    STATE(240), 1,
      sym__offset,
  [3481] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(619), 1,
      aux_sym_origin_token1,
    STATE(152), 1,
      sym_offset,
  [3491] = 3,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(46), 1,
      sym_name,
    STATE(107), 1,
      sym_decoration,
  [3501] = 3,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(240), 1,
      sym__offset,
    STATE(261), 1,
      sym__relative,
  [3511] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(177), 1,
      sym_name,
  [3518] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(176), 1,
      sym_name,
  [3525] = 2,
    ACTIONS(623), 1,
      anon_sym_project,
    ACTIONS(625), 1,
      anon_sym_script,
  [3532] = 2,
    ACTIONS(627), 1,
      aux_sym__absolute_attr_token1,
    STATE(258), 1,
      sym__absolute_x_attr,
  [3539] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(200), 1,
      sym_name,
  [3546] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(185), 1,
      sym_name,
  [3553] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(203), 1,
      sym_name,
  [3560] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(186), 1,
      sym_name,
  [3567] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(196), 1,
      sym_name,
  [3574] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(198), 1,
      sym_name,
  [3581] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(219), 1,
      sym_name,
  [3588] = 1,
    ACTIONS(629), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [3593] = 2,
    ACTIONS(559), 1,
      aux_sym__originx_token1,
    STATE(143), 1,
      sym__originx,
  [3600] = 2,
    ACTIONS(561), 1,
      aux_sym__originy_token1,
    STATE(143), 1,
      sym__originy,
  [3607] = 2,
    ACTIONS(631), 1,
      anon_sym_svg,
    STATE(118), 1,
      sym_svg,
  [3614] = 2,
    ACTIONS(633), 1,
      sym_height,
    ACTIONS(635), 1,
      sym_width,
  [3621] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(144), 1,
      sym_name,
  [3628] = 2,
    ACTIONS(637), 1,
      anon_sym_scale,
    ACTIONS(639), 1,
      anon_sym_stretch,
  [3635] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(158), 1,
      sym_name,
  [3642] = 2,
    ACTIONS(641), 1,
      aux_sym__input_id_token1,
    STATE(158), 1,
      sym_part,
  [3649] = 2,
    ACTIONS(643), 1,
      aux_sym__input_id_token1,
    STATE(141), 1,
      sym_font,
  [3656] = 2,
    ACTIONS(201), 1,
      aux_sym__relative_attr_token1,
    STATE(111), 1,
      sym__relative_attr,
  [3663] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(179), 1,
      sym_name,
  [3670] = 2,
    ACTIONS(645), 1,
      aux_sym__guide_attr_token1,
    STATE(109), 1,
      sym__guide_attr,
  [3677] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(119), 1,
      sym_name,
  [3684] = 2,
    ACTIONS(647), 1,
      aux_sym__absolute_attr_token1,
    STATE(121), 1,
      sym__absolute_y_attr,
  [3691] = 2,
    ACTIONS(649), 1,
      sym_rgb,
    ACTIONS(651), 1,
      sym_rgba,
  [3698] = 1,
    ACTIONS(653), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3703] = 2,
    ACTIONS(569), 1,
      aux_sym_offset_token1,
    STATE(271), 1,
      sym__offset,
  [3710] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(178), 1,
      sym_name,
  [3717] = 2,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(132), 1,
      sym_offset,
  [3724] = 2,
    ACTIONS(621), 1,
      aux_sym__input_id_token1,
    STATE(181), 1,
      sym_name,
  [3731] = 1,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [3735] = 1,
    ACTIONS(657), 1,
      sym_height,
  [3739] = 1,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
  [3743] = 1,
    ACTIONS(661), 1,
      anon_sym_COMMA,
  [3747] = 1,
    ACTIONS(663), 1,
      anon_sym_COMMA,
  [3751] = 1,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [3755] = 1,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [3759] = 1,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [3763] = 1,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [3767] = 1,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [3771] = 1,
    ACTIONS(675), 1,
      aux_sym__input_id_token1,
  [3775] = 1,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [3779] = 1,
    ACTIONS(679), 1,
      aux_sym_absolute_token1,
  [3783] = 1,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
  [3787] = 1,
    ACTIONS(683), 1,
      aux_sym_origin_token1,
  [3791] = 1,
    ACTIONS(685), 1,
      aux_sym_origin_token1,
  [3795] = 1,
    ACTIONS(687), 1,
      sym_width,
  [3799] = 1,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [3803] = 1,
    ACTIONS(691), 1,
      anon_sym_gzip,
  [3807] = 1,
    ACTIONS(691), 1,
      anon_sym_timestamp,
  [3811] = 1,
    ACTIONS(693), 1,
      sym_fontsize,
  [3815] = 1,
    ACTIONS(695), 1,
      anon_sym_COMMA,
  [3819] = 1,
    ACTIONS(697), 1,
      anon_sym_COMMA,
  [3823] = 1,
    ACTIONS(699), 1,
      anon_sym_COMMA,
  [3827] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [3831] = 1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [3835] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [3839] = 1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [3843] = 1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [3847] = 1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [3851] = 1,
    ACTIONS(713), 1,
      aux_sym__absolute_attr_token1,
  [3855] = 1,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [3859] = 1,
    ACTIONS(717), 1,
      anon_sym_COMMA,
  [3863] = 1,
    ACTIONS(719), 1,
      aux_sym_origin_token1,
  [3867] = 1,
    ACTIONS(721), 1,
      aux_sym__label_id_token3,
  [3871] = 1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [3875] = 1,
    ACTIONS(725), 1,
      anon_sym_COMMA,
  [3879] = 1,
    ACTIONS(727), 1,
      aux_sym__label_id_token2,
  [3883] = 1,
    ACTIONS(657), 1,
      sym_width,
  [3887] = 1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [3891] = 1,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
  [3895] = 1,
    ACTIONS(731), 1,
      aux_sym__label_id_token3,
  [3899] = 1,
    ACTIONS(733), 1,
      aux_sym__label_id_token2,
  [3903] = 1,
    ACTIONS(735), 1,
      aux_sym_origin_token1,
  [3907] = 1,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
  [3911] = 1,
    ACTIONS(737), 1,
      anon_sym_COMMA,
  [3915] = 1,
    ACTIONS(739), 1,
      aux_sym_relative_token1,
  [3919] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [3923] = 1,
    ACTIONS(743), 1,
      aux_sym__scale_token1,
  [3927] = 1,
    ACTIONS(745), 1,
      aux_sym__scale_token1,
  [3931] = 1,
    ACTIONS(639), 1,
      anon_sym_stretch,
  [3935] = 1,
    ACTIONS(747), 1,
      aux_sym__input_id_token1,
  [3939] = 1,
    ACTIONS(749), 1,
      aux_sym__input_id_token1,
  [3943] = 1,
    ACTIONS(751), 1,
      aux_sym__input_id_token1,
  [3947] = 1,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
  [3951] = 1,
    ACTIONS(755), 1,
      anon_sym_COMMA,
  [3955] = 1,
    ACTIONS(757), 1,
      aux_sym__input_id_token1,
  [3959] = 1,
    ACTIONS(759), 1,
      aux_sym__input_id_token1,
  [3963] = 1,
    ACTIONS(761), 1,
      aux_sym__scale_token1,
  [3967] = 1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
  [3971] = 1,
    ACTIONS(765), 1,
      aux_sym__guide_id_token1,
  [3975] = 1,
    ACTIONS(767), 1,
      anon_sym_COMMA,
  [3979] = 1,
    ACTIONS(769), 1,
      anon_sym_COMMA,
  [3983] = 1,
    ACTIONS(771), 1,
      anon_sym_COMMA,
  [3987] = 1,
    ACTIONS(773), 1,
      aux_sym_absolute_token1,
  [3991] = 1,
    ACTIONS(775), 1,
      anon_sym_with,
  [3995] = 1,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [3999] = 1,
    ACTIONS(779), 1,
      sym_rgb,
  [4003] = 1,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
  [4007] = 1,
    ACTIONS(779), 1,
      sym_rgba,
  [4011] = 1,
    ACTIONS(783), 1,
      aux_sym__guide_id_token1,
  [4015] = 1,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
  [4019] = 1,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
  [4023] = 1,
    ACTIONS(787), 1,
      aux_sym_relative_token1,
  [4027] = 1,
    ACTIONS(789), 1,
      aux_sym_absolute_token1,
  [4031] = 1,
    ACTIONS(791), 1,
      aux_sym__label_id_token2,
  [4035] = 1,
    ACTIONS(793), 1,
      aux_sym__label_id_token3,
  [4039] = 1,
    ACTIONS(795), 1,
      anon_sym_COMMA,
  [4043] = 1,
    ACTIONS(797), 1,
      anon_sym_COMMA,
  [4047] = 1,
    ACTIONS(799), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 332,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 416,
  [SMALL_STATE(12)] = 448,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 526,
  [SMALL_STATE(16)] = 552,
  [SMALL_STATE(17)] = 578,
  [SMALL_STATE(18)] = 604,
  [SMALL_STATE(19)] = 630,
  [SMALL_STATE(20)] = 656,
  [SMALL_STATE(21)] = 682,
  [SMALL_STATE(22)] = 708,
  [SMALL_STATE(23)] = 733,
  [SMALL_STATE(24)] = 758,
  [SMALL_STATE(25)] = 783,
  [SMALL_STATE(26)] = 821,
  [SMALL_STATE(27)] = 855,
  [SMALL_STATE(28)] = 891,
  [SMALL_STATE(29)] = 929,
  [SMALL_STATE(30)] = 964,
  [SMALL_STATE(31)] = 984,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1046,
  [SMALL_STATE(34)] = 1080,
  [SMALL_STATE(35)] = 1100,
  [SMALL_STATE(36)] = 1128,
  [SMALL_STATE(37)] = 1148,
  [SMALL_STATE(38)] = 1168,
  [SMALL_STATE(39)] = 1188,
  [SMALL_STATE(40)] = 1207,
  [SMALL_STATE(41)] = 1228,
  [SMALL_STATE(42)] = 1249,
  [SMALL_STATE(43)] = 1274,
  [SMALL_STATE(44)] = 1291,
  [SMALL_STATE(45)] = 1316,
  [SMALL_STATE(46)] = 1341,
  [SMALL_STATE(47)] = 1362,
  [SMALL_STATE(48)] = 1381,
  [SMALL_STATE(49)] = 1402,
  [SMALL_STATE(50)] = 1421,
  [SMALL_STATE(51)] = 1440,
  [SMALL_STATE(52)] = 1461,
  [SMALL_STATE(53)] = 1482,
  [SMALL_STATE(54)] = 1501,
  [SMALL_STATE(55)] = 1522,
  [SMALL_STATE(56)] = 1539,
  [SMALL_STATE(57)] = 1563,
  [SMALL_STATE(58)] = 1583,
  [SMALL_STATE(59)] = 1605,
  [SMALL_STATE(60)] = 1621,
  [SMALL_STATE(61)] = 1639,
  [SMALL_STATE(62)] = 1655,
  [SMALL_STATE(63)] = 1671,
  [SMALL_STATE(64)] = 1703,
  [SMALL_STATE(65)] = 1721,
  [SMALL_STATE(66)] = 1737,
  [SMALL_STATE(67)] = 1761,
  [SMALL_STATE(68)] = 1779,
  [SMALL_STATE(69)] = 1797,
  [SMALL_STATE(70)] = 1817,
  [SMALL_STATE(71)] = 1841,
  [SMALL_STATE(72)] = 1859,
  [SMALL_STATE(73)] = 1872,
  [SMALL_STATE(74)] = 1895,
  [SMALL_STATE(75)] = 1910,
  [SMALL_STATE(76)] = 1933,
  [SMALL_STATE(77)] = 1948,
  [SMALL_STATE(78)] = 1963,
  [SMALL_STATE(79)] = 1976,
  [SMALL_STATE(80)] = 1989,
  [SMALL_STATE(81)] = 2002,
  [SMALL_STATE(82)] = 2017,
  [SMALL_STATE(83)] = 2032,
  [SMALL_STATE(84)] = 2055,
  [SMALL_STATE(85)] = 2068,
  [SMALL_STATE(86)] = 2081,
  [SMALL_STATE(87)] = 2096,
  [SMALL_STATE(88)] = 2109,
  [SMALL_STATE(89)] = 2124,
  [SMALL_STATE(90)] = 2139,
  [SMALL_STATE(91)] = 2154,
  [SMALL_STATE(92)] = 2169,
  [SMALL_STATE(93)] = 2184,
  [SMALL_STATE(94)] = 2199,
  [SMALL_STATE(95)] = 2211,
  [SMALL_STATE(96)] = 2223,
  [SMALL_STATE(97)] = 2235,
  [SMALL_STATE(98)] = 2247,
  [SMALL_STATE(99)] = 2259,
  [SMALL_STATE(100)] = 2271,
  [SMALL_STATE(101)] = 2283,
  [SMALL_STATE(102)] = 2295,
  [SMALL_STATE(103)] = 2307,
  [SMALL_STATE(104)] = 2319,
  [SMALL_STATE(105)] = 2331,
  [SMALL_STATE(106)] = 2343,
  [SMALL_STATE(107)] = 2355,
  [SMALL_STATE(108)] = 2367,
  [SMALL_STATE(109)] = 2379,
  [SMALL_STATE(110)] = 2391,
  [SMALL_STATE(111)] = 2403,
  [SMALL_STATE(112)] = 2415,
  [SMALL_STATE(113)] = 2427,
  [SMALL_STATE(114)] = 2439,
  [SMALL_STATE(115)] = 2451,
  [SMALL_STATE(116)] = 2463,
  [SMALL_STATE(117)] = 2475,
  [SMALL_STATE(118)] = 2487,
  [SMALL_STATE(119)] = 2499,
  [SMALL_STATE(120)] = 2511,
  [SMALL_STATE(121)] = 2523,
  [SMALL_STATE(122)] = 2535,
  [SMALL_STATE(123)] = 2547,
  [SMALL_STATE(124)] = 2559,
  [SMALL_STATE(125)] = 2571,
  [SMALL_STATE(126)] = 2583,
  [SMALL_STATE(127)] = 2595,
  [SMALL_STATE(128)] = 2607,
  [SMALL_STATE(129)] = 2619,
  [SMALL_STATE(130)] = 2631,
  [SMALL_STATE(131)] = 2643,
  [SMALL_STATE(132)] = 2655,
  [SMALL_STATE(133)] = 2667,
  [SMALL_STATE(134)] = 2679,
  [SMALL_STATE(135)] = 2691,
  [SMALL_STATE(136)] = 2703,
  [SMALL_STATE(137)] = 2715,
  [SMALL_STATE(138)] = 2727,
  [SMALL_STATE(139)] = 2739,
  [SMALL_STATE(140)] = 2751,
  [SMALL_STATE(141)] = 2763,
  [SMALL_STATE(142)] = 2775,
  [SMALL_STATE(143)] = 2787,
  [SMALL_STATE(144)] = 2799,
  [SMALL_STATE(145)] = 2811,
  [SMALL_STATE(146)] = 2823,
  [SMALL_STATE(147)] = 2835,
  [SMALL_STATE(148)] = 2847,
  [SMALL_STATE(149)] = 2859,
  [SMALL_STATE(150)] = 2871,
  [SMALL_STATE(151)] = 2883,
  [SMALL_STATE(152)] = 2895,
  [SMALL_STATE(153)] = 2907,
  [SMALL_STATE(154)] = 2919,
  [SMALL_STATE(155)] = 2931,
  [SMALL_STATE(156)] = 2953,
  [SMALL_STATE(157)] = 2965,
  [SMALL_STATE(158)] = 2977,
  [SMALL_STATE(159)] = 2989,
  [SMALL_STATE(160)] = 3001,
  [SMALL_STATE(161)] = 3013,
  [SMALL_STATE(162)] = 3025,
  [SMALL_STATE(163)] = 3038,
  [SMALL_STATE(164)] = 3051,
  [SMALL_STATE(165)] = 3072,
  [SMALL_STATE(166)] = 3091,
  [SMALL_STATE(167)] = 3107,
  [SMALL_STATE(168)] = 3117,
  [SMALL_STATE(169)] = 3133,
  [SMALL_STATE(170)] = 3143,
  [SMALL_STATE(171)] = 3153,
  [SMALL_STATE(172)] = 3163,
  [SMALL_STATE(173)] = 3173,
  [SMALL_STATE(174)] = 3189,
  [SMALL_STATE(175)] = 3199,
  [SMALL_STATE(176)] = 3210,
  [SMALL_STATE(177)] = 3223,
  [SMALL_STATE(178)] = 3236,
  [SMALL_STATE(179)] = 3249,
  [SMALL_STATE(180)] = 3262,
  [SMALL_STATE(181)] = 3275,
  [SMALL_STATE(182)] = 3288,
  [SMALL_STATE(183)] = 3297,
  [SMALL_STATE(184)] = 3310,
  [SMALL_STATE(185)] = 3321,
  [SMALL_STATE(186)] = 3331,
  [SMALL_STATE(187)] = 3341,
  [SMALL_STATE(188)] = 3351,
  [SMALL_STATE(189)] = 3361,
  [SMALL_STATE(190)] = 3371,
  [SMALL_STATE(191)] = 3381,
  [SMALL_STATE(192)] = 3391,
  [SMALL_STATE(193)] = 3401,
  [SMALL_STATE(194)] = 3411,
  [SMALL_STATE(195)] = 3421,
  [SMALL_STATE(196)] = 3431,
  [SMALL_STATE(197)] = 3441,
  [SMALL_STATE(198)] = 3451,
  [SMALL_STATE(199)] = 3461,
  [SMALL_STATE(200)] = 3471,
  [SMALL_STATE(201)] = 3481,
  [SMALL_STATE(202)] = 3491,
  [SMALL_STATE(203)] = 3501,
  [SMALL_STATE(204)] = 3511,
  [SMALL_STATE(205)] = 3518,
  [SMALL_STATE(206)] = 3525,
  [SMALL_STATE(207)] = 3532,
  [SMALL_STATE(208)] = 3539,
  [SMALL_STATE(209)] = 3546,
  [SMALL_STATE(210)] = 3553,
  [SMALL_STATE(211)] = 3560,
  [SMALL_STATE(212)] = 3567,
  [SMALL_STATE(213)] = 3574,
  [SMALL_STATE(214)] = 3581,
  [SMALL_STATE(215)] = 3588,
  [SMALL_STATE(216)] = 3593,
  [SMALL_STATE(217)] = 3600,
  [SMALL_STATE(218)] = 3607,
  [SMALL_STATE(219)] = 3614,
  [SMALL_STATE(220)] = 3621,
  [SMALL_STATE(221)] = 3628,
  [SMALL_STATE(222)] = 3635,
  [SMALL_STATE(223)] = 3642,
  [SMALL_STATE(224)] = 3649,
  [SMALL_STATE(225)] = 3656,
  [SMALL_STATE(226)] = 3663,
  [SMALL_STATE(227)] = 3670,
  [SMALL_STATE(228)] = 3677,
  [SMALL_STATE(229)] = 3684,
  [SMALL_STATE(230)] = 3691,
  [SMALL_STATE(231)] = 3698,
  [SMALL_STATE(232)] = 3703,
  [SMALL_STATE(233)] = 3710,
  [SMALL_STATE(234)] = 3717,
  [SMALL_STATE(235)] = 3724,
  [SMALL_STATE(236)] = 3731,
  [SMALL_STATE(237)] = 3735,
  [SMALL_STATE(238)] = 3739,
  [SMALL_STATE(239)] = 3743,
  [SMALL_STATE(240)] = 3747,
  [SMALL_STATE(241)] = 3751,
  [SMALL_STATE(242)] = 3755,
  [SMALL_STATE(243)] = 3759,
  [SMALL_STATE(244)] = 3763,
  [SMALL_STATE(245)] = 3767,
  [SMALL_STATE(246)] = 3771,
  [SMALL_STATE(247)] = 3775,
  [SMALL_STATE(248)] = 3779,
  [SMALL_STATE(249)] = 3783,
  [SMALL_STATE(250)] = 3787,
  [SMALL_STATE(251)] = 3791,
  [SMALL_STATE(252)] = 3795,
  [SMALL_STATE(253)] = 3799,
  [SMALL_STATE(254)] = 3803,
  [SMALL_STATE(255)] = 3807,
  [SMALL_STATE(256)] = 3811,
  [SMALL_STATE(257)] = 3815,
  [SMALL_STATE(258)] = 3819,
  [SMALL_STATE(259)] = 3823,
  [SMALL_STATE(260)] = 3827,
  [SMALL_STATE(261)] = 3831,
  [SMALL_STATE(262)] = 3835,
  [SMALL_STATE(263)] = 3839,
  [SMALL_STATE(264)] = 3843,
  [SMALL_STATE(265)] = 3847,
  [SMALL_STATE(266)] = 3851,
  [SMALL_STATE(267)] = 3855,
  [SMALL_STATE(268)] = 3859,
  [SMALL_STATE(269)] = 3863,
  [SMALL_STATE(270)] = 3867,
  [SMALL_STATE(271)] = 3871,
  [SMALL_STATE(272)] = 3875,
  [SMALL_STATE(273)] = 3879,
  [SMALL_STATE(274)] = 3883,
  [SMALL_STATE(275)] = 3887,
  [SMALL_STATE(276)] = 3891,
  [SMALL_STATE(277)] = 3895,
  [SMALL_STATE(278)] = 3899,
  [SMALL_STATE(279)] = 3903,
  [SMALL_STATE(280)] = 3907,
  [SMALL_STATE(281)] = 3911,
  [SMALL_STATE(282)] = 3915,
  [SMALL_STATE(283)] = 3919,
  [SMALL_STATE(284)] = 3923,
  [SMALL_STATE(285)] = 3927,
  [SMALL_STATE(286)] = 3931,
  [SMALL_STATE(287)] = 3935,
  [SMALL_STATE(288)] = 3939,
  [SMALL_STATE(289)] = 3943,
  [SMALL_STATE(290)] = 3947,
  [SMALL_STATE(291)] = 3951,
  [SMALL_STATE(292)] = 3955,
  [SMALL_STATE(293)] = 3959,
  [SMALL_STATE(294)] = 3963,
  [SMALL_STATE(295)] = 3967,
  [SMALL_STATE(296)] = 3971,
  [SMALL_STATE(297)] = 3975,
  [SMALL_STATE(298)] = 3979,
  [SMALL_STATE(299)] = 3983,
  [SMALL_STATE(300)] = 3987,
  [SMALL_STATE(301)] = 3991,
  [SMALL_STATE(302)] = 3995,
  [SMALL_STATE(303)] = 3999,
  [SMALL_STATE(304)] = 4003,
  [SMALL_STATE(305)] = 4007,
  [SMALL_STATE(306)] = 4011,
  [SMALL_STATE(307)] = 4015,
  [SMALL_STATE(308)] = 4019,
  [SMALL_STATE(309)] = 4023,
  [SMALL_STATE(310)] = 4027,
  [SMALL_STATE(311)] = 4031,
  [SMALL_STATE(312)] = 4035,
  [SMALL_STATE(313)] = 4039,
  [SMALL_STATE(314)] = 4043,
  [SMALL_STATE(315)] = 4047,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 11),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 11),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 8),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(249),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(206),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(184),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(175),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 9),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 13),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 13),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 13),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 10),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 9),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 21),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 7),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 15),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [781] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
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
