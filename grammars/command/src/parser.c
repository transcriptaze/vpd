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
#define STATE_COUNT 319
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 1
#define TOKEN_COUNT 89
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
  anon_sym_id = 20,
  anon_sym_AT = 21,
  aux_sym__absolute_attr_token1 = 22,
  anon_sym_COMMA = 23,
  aux_sym__relative_attr_token1 = 24,
  anon_sym_left = 25,
  anon_sym_centre = 26,
  anon_sym_center = 27,
  anon_sym_right = 28,
  aux_sym__geometry_x_attr_token1 = 29,
  anon_sym_top = 30,
  anon_sym_middle = 31,
  anon_sym_bottom = 32,
  aux_sym__guide_attr_token1 = 33,
  aux_sym__guide_attr_token2 = 34,
  anon_sym_decorate = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_with = 38,
  anon_sym_delete = 39,
  anon_sym_guide = 40,
  aux_sym__guide_id_token1 = 41,
  anon_sym_input = 42,
  aux_sym__input_id_token1 = 43,
  anon_sym_output = 44,
  anon_sym_parameter = 45,
  anon_sym_light = 46,
  anon_sym_widget = 47,
  anon_sym_label = 48,
  aux_sym__label_id_token1 = 49,
  anon_sym_DQUOTE = 50,
  aux_sym__label_id_token2 = 51,
  anon_sym_SQUOTE = 52,
  aux_sym__label_id_token3 = 53,
  anon_sym_decoration = 54,
  anon_sym_load = 55,
  anon_sym_project = 56,
  anon_sym_script = 57,
  anon_sym_save = 58,
  anon_sym_export = 59,
  anon_sym_DOTh = 60,
  anon_sym_GT_GT = 61,
  anon_sym_timestamp = 62,
  anon_sym_gzip = 63,
  aux_sym_parameter_token1 = 64,
  sym_fontsize = 65,
  anon_sym_baseline = 66,
  anon_sym_scale = 67,
  aux_sym__scale_token1 = 68,
  anon_sym_stretch = 69,
  anon_sym_origin = 70,
  aux_sym_origin_token1 = 71,
  aux_sym__originx_token1 = 72,
  aux_sym__originy_token1 = 73,
  anon_sym_background = 74,
  anon_sym_none = 75,
  sym_rgb = 76,
  sym_rgba = 77,
  anon_sym_panel = 78,
  anon_sym_svg = 79,
  anon_sym_dark = 80,
  sym_height = 81,
  sym_width = 82,
  anon_sym_vertical = 83,
  anon_sym_horizontal = 84,
  aux_sym_offset_token1 = 85,
  aux_sym__string_token1 = 86,
  aux_sym_absolute_token1 = 87,
  aux_sym_relative_token1 = 88,
  sym_command = 89,
  sym_new = 90,
  sym_set = 91,
  sym__module_attr = 92,
  sym__component_attr = 93,
  sym__label_attr = 94,
  sym__guideline_attr = 95,
  sym__x_attr = 96,
  sym__y_attr = 97,
  sym__xy_attr = 98,
  sym__absolute_attr = 99,
  sym__absolute_x_attr = 100,
  sym__absolute_y_attr = 101,
  sym__absolute_xy_attr = 102,
  sym__relative_attr = 103,
  sym__relative_xy_attr = 104,
  sym__geometry_x_attr = 105,
  sym__geometry_y_attr = 106,
  sym__geometry_xy_attr = 107,
  sym__guide_attr = 108,
  sym__guide_xy_attr = 109,
  sym_decorate = 110,
  sym_delete = 111,
  sym__guide_id = 112,
  sym__input_id = 113,
  sym__output_id = 114,
  sym__parameter_id = 115,
  sym__light_id = 116,
  sym__widget_id = 117,
  sym__label_id = 118,
  sym__decoration_id = 119,
  sym__component_id = 120,
  sym_load = 121,
  sym_save = 122,
  sym_export = 123,
  sym__module_export = 124,
  sym_project = 125,
  sym_script = 126,
  sym__entity = 127,
  sym__input = 128,
  sym__output = 129,
  sym__parameter = 130,
  sym__light = 131,
  sym__widget = 132,
  sym_module = 133,
  sym_input = 134,
  sym_output = 135,
  sym_parameter = 136,
  sym_light = 137,
  sym_widget = 138,
  sym__component = 139,
  sym_label = 140,
  sym_font = 141,
  sym__align = 142,
  sym_halign = 143,
  sym_valign = 144,
  sym_colour = 145,
  sym_decoration = 146,
  sym__scale = 147,
  sym_stretch = 148,
  sym_origin = 149,
  sym__originx = 150,
  sym__originy = 151,
  sym_background = 152,
  sym_panel = 153,
  sym_svg = 154,
  sym_name = 155,
  sym_part = 156,
  sym_guide = 157,
  sym_identifier = 158,
  sym_vertical = 159,
  sym_horizontal = 160,
  sym_geometry = 161,
  sym_offset = 162,
  sym__offset = 163,
  sym_guideline = 164,
  sym__string = 165,
  sym_absolute = 166,
  sym_relative = 167,
  sym__decorate = 168,
  sym__relative = 169,
  sym_x = 170,
  sym_y = 171,
  aux_sym_command_repeat1 = 172,
  alias_sym_dy = 173,
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
  [anon_sym_id] = "id",
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
  [anon_sym_id] = anon_sym_id,
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
  [anon_sym_id] = {
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 7,
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
  [73] = 13,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 14,
  [84] = 15,
  [85] = 85,
  [86] = 86,
  [87] = 15,
  [88] = 12,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 66,
  [97] = 61,
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
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 39,
  [166] = 153,
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
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 277,
  [310] = 245,
  [311] = 244,
  [312] = 251,
  [313] = 243,
  [314] = 247,
  [315] = 307,
  [316] = 249,
  [317] = 276,
  [318] = 250,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(321);
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 'g') ADVANCE(279);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(331);
      if (lookahead == 'y') ADVANCE(332);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(560);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(504);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'h') ADVANCE(409);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == 'v') ADVANCE(393);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(439);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(553);
      if (lookahead == 'U') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(553);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(553);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(553);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(553);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(553);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(553);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(182);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(182);
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 26:
      if (lookahead == ';') ADVANCE(322);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(526);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(543);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(250);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(262);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(550);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(525);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(330);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(538);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(256);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(262);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == 'j') ADVANCE(83);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(551);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(555);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(557);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(562);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(563);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(542);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'z') ADVANCE(137);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 285:
      if (lookahead == 'w') ADVANCE(323);
      END_STATE();
    case 286:
      if (lookahead == 'x') ADVANCE(226);
      END_STATE();
    case 287:
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 288:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 289:
      if (lookahead == 'z') ADVANCE(215);
      END_STATE();
    case 290:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 314:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 315:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 316:
      if (eof) ADVANCE(321);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(449);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == 't') ADVANCE(477);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 317:
      if (eof) ADVANCE(321);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(449);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 318:
      if (eof) ADVANCE(321);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ')') ADVANCE(432);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(143);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 319:
      if (eof) ADVANCE(321);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(143);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 320:
      if (eof) ADVANCE(321);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(38);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == 'H') ADVANCE(354);
      if (lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H') ADVANCE(354);
      if (lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__relative_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(508);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(561);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(505);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(561);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(505);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(182);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 316},
  [3] = {.lex_state = 316},
  [4] = {.lex_state = 318},
  [5] = {.lex_state = 318},
  [6] = {.lex_state = 318},
  [7] = {.lex_state = 316},
  [8] = {.lex_state = 318},
  [9] = {.lex_state = 318},
  [10] = {.lex_state = 318},
  [11] = {.lex_state = 318},
  [12] = {.lex_state = 316},
  [13] = {.lex_state = 316},
  [14] = {.lex_state = 316},
  [15] = {.lex_state = 316},
  [16] = {.lex_state = 316},
  [17] = {.lex_state = 316},
  [18] = {.lex_state = 316},
  [19] = {.lex_state = 316},
  [20] = {.lex_state = 316},
  [21] = {.lex_state = 316},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 318},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 319},
  [29] = {.lex_state = 318},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 318},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 317},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 318},
  [52] = {.lex_state = 318},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 317},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 318},
  [59] = {.lex_state = 319},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 318},
  [64] = {.lex_state = 317},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 318},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 320},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 317},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 318},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 318},
  [83] = {.lex_state = 317},
  [84] = {.lex_state = 317},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 320},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 317},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 318},
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
  [143] = {.lex_state = 30},
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
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 30},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 318},
  [168] = {.lex_state = 318},
  [169] = {.lex_state = 29},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 318},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 319},
  [175] = {.lex_state = 318},
  [176] = {.lex_state = 318},
  [177] = {.lex_state = 318},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 316},
  [180] = {.lex_state = 316},
  [181] = {.lex_state = 316},
  [182] = {.lex_state = 316},
  [183] = {.lex_state = 316},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 316},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 316},
  [197] = {.lex_state = 316},
  [198] = {.lex_state = 316},
  [199] = {.lex_state = 316},
  [200] = {.lex_state = 316},
  [201] = {.lex_state = 316},
  [202] = {.lex_state = 316},
  [203] = {.lex_state = 316},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 294},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 319},
  [215] = {.lex_state = 319},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 28},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 294},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 318},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 316},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 316},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 319},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 509},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 319},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 316},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 316},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 318},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 316},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 317},
  [287] = {.lex_state = 317},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 316},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 317},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 316},
  [300] = {.lex_state = 514},
  [301] = {.lex_state = 509},
  [302] = {.lex_state = 318},
  [303] = {.lex_state = 318},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 514},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 8},
  [313] = {.lex_state = 319},
  [314] = {.lex_state = 509},
  [315] = {.lex_state = 514},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 319},
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
    [anon_sym_id] = ACTIONS(1),
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
    [sym_command] = STATE(305),
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
    STATE(40), 1,
      sym__align,
    STATE(41), 1,
      sym_halign,
    STATE(48), 1,
      sym_valign,
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
    STATE(5), 1,
      sym_font,
    STATE(41), 1,
      sym_halign,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym__align,
    STATE(114), 1,
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
    STATE(41), 1,
      sym_halign,
    STATE(44), 1,
      sym__align,
    STATE(48), 1,
      sym_valign,
    STATE(134), 1,
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
      sym_halign,
    STATE(45), 1,
      sym__align,
    STATE(48), 1,
      sym_valign,
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
      sym_halign,
    STATE(44), 1,
      sym__align,
    STATE(48), 1,
      sym_valign,
    STATE(134), 1,
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
  [238] = 4,
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
  [270] = 14,
    ACTIONS(61), 1,
      anon_sym_module,
    ACTIONS(63), 1,
      anon_sym_guide,
    ACTIONS(65), 1,
      anon_sym_input,
    ACTIONS(67), 1,
      anon_sym_output,
    ACTIONS(69), 1,
      anon_sym_parameter,
    ACTIONS(71), 1,
      anon_sym_light,
    ACTIONS(73), 1,
      anon_sym_widget,
    ACTIONS(75), 1,
      anon_sym_label,
    ACTIONS(77), 1,
      anon_sym_origin,
    ACTIONS(79), 1,
      anon_sym_background,
    STATE(30), 1,
      sym__guide_id,
    STATE(72), 1,
      sym__label_id,
    STATE(172), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(137), 6,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [322] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(41), 1,
      sym_halign,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym__align,
    STATE(114), 1,
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
  [364] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(41), 1,
      sym_halign,
    STATE(48), 1,
      sym_valign,
    STATE(55), 1,
      sym__align,
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
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [406] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(41), 1,
      sym_halign,
    STATE(45), 1,
      sym__align,
    STATE(48), 1,
      sym_valign,
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
      anon_sym_x,
    ACTIONS(123), 19,
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
      sym_rgb,
    ACTIONS(131), 19,
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
    STATE(27), 8,
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
    STATE(133), 1,
      sym_offset,
    STATE(234), 1,
      sym_identifier,
    STATE(132), 4,
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
  [855] = 10,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_new,
    ACTIONS(157), 1,
      anon_sym_set,
    ACTIONS(160), 1,
      anon_sym_decorate,
    ACTIONS(163), 1,
      anon_sym_delete,
    ACTIONS(166), 1,
      anon_sym_load,
    ACTIONS(169), 1,
      anon_sym_save,
    ACTIONS(172), 1,
      anon_sym_export,
    STATE(27), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [893] = 9,
    ACTIONS(175), 1,
      anon_sym_module,
    ACTIONS(177), 1,
      anon_sym_guide,
    ACTIONS(179), 1,
      anon_sym_input,
    ACTIONS(181), 1,
      anon_sym_output,
    ACTIONS(183), 1,
      anon_sym_light,
    ACTIONS(185), 1,
      anon_sym_widget,
    ACTIONS(187), 1,
      anon_sym_label,
    ACTIONS(189), 1,
      aux_sym_parameter_token1,
    STATE(108), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [929] = 9,
    ACTIONS(65), 1,
      anon_sym_input,
    ACTIONS(67), 1,
      anon_sym_output,
    ACTIONS(69), 1,
      anon_sym_parameter,
    ACTIONS(71), 1,
      anon_sym_light,
    ACTIONS(73), 1,
      anon_sym_widget,
    ACTIONS(75), 1,
      anon_sym_label,
    ACTIONS(191), 1,
      anon_sym_guide,
    ACTIONS(193), 1,
      anon_sym_decoration,
    STATE(152), 8,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [964] = 7,
    ACTIONS(195), 1,
      anon_sym_id,
    ACTIONS(197), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(203), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(201), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(104), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [995] = 6,
    ACTIONS(141), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(143), 1,
      anon_sym_vertical,
    ACTIONS(145), 1,
      anon_sym_horizontal,
    STATE(26), 1,
      sym_identifier,
    STATE(136), 4,
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
  [1023] = 2,
    ACTIONS(209), 1,
      anon_sym_x,
    ACTIONS(207), 14,
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
  [1043] = 2,
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
  [1063] = 2,
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
  [1083] = 9,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_AT,
    STATE(160), 1,
      sym__xy_attr,
    STATE(246), 1,
      sym__guide_attr,
    STATE(306), 1,
      sym__relative_attr,
    STATE(308), 1,
      sym__geometry_x_attr,
    ACTIONS(201), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(95), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1117] = 9,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(219), 1,
      anon_sym_AT,
    STATE(146), 1,
      sym__xy_attr,
    STATE(246), 1,
      sym__guide_attr,
    STATE(306), 1,
      sym__relative_attr,
    STATE(308), 1,
      sym__geometry_x_attr,
    ACTIONS(201), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(95), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1151] = 2,
    ACTIONS(223), 1,
      anon_sym_x,
    ACTIONS(221), 14,
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
  [1171] = 2,
    ACTIONS(227), 1,
      anon_sym_x,
    ACTIONS(225), 14,
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
  [1191] = 2,
    ACTIONS(231), 1,
      sym_width,
    ACTIONS(229), 13,
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
  [1210] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(134), 1,
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
  [1231] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      sym_rgb,
    ACTIONS(233), 10,
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
  [1250] = 2,
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
  [1267] = 2,
    ACTIONS(245), 1,
      sym_rgb,
    ACTIONS(243), 11,
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
  [1284] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(114), 1,
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
  [1305] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(102), 1,
      sym_colour,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1326] = 4,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(83), 1,
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
  [1347] = 6,
    ACTIONS(197), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    STATE(146), 1,
      sym__x_attr,
    ACTIONS(201), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(161), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1372] = 3,
    ACTIONS(237), 1,
      sym_rgb,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(233), 10,
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
  [1391] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(105), 1,
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
  [1412] = 4,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym__scale,
    STATE(94), 1,
      sym_stretch,
    ACTIONS(251), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1433] = 3,
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
  [1452] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(78), 1,
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
  [1471] = 6,
    ACTIONS(197), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    STATE(160), 1,
      sym__x_attr,
    ACTIONS(201), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(161), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1496] = 6,
    ACTIONS(259), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      aux_sym_relative_token1,
    STATE(239), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(261), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1521] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(100), 1,
      sym_colour,
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
  [1542] = 4,
    ACTIONS(273), 1,
      aux_sym__input_id_token1,
    STATE(115), 1,
      sym_part,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(271), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1562] = 3,
    ACTIONS(277), 1,
      anon_sym_light,
    ACTIONS(279), 1,
      anon_sym_dark,
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
  [1580] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(129), 1,
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
  [1598] = 2,
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
  [1614] = 6,
    ACTIONS(197), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    STATE(160), 1,
      sym__y_attr,
    ACTIONS(203), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(162), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1638] = 2,
    ACTIONS(289), 1,
      aux_sym_offset_token1,
    ACTIONS(287), 10,
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
  [1654] = 6,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      aux_sym_relative_token1,
    STATE(248), 1,
      sym_x,
    STATE(64), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(261), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1678] = 5,
    STATE(41), 1,
      sym_halign,
    STATE(48), 1,
      sym_valign,
    STATE(146), 1,
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
  [1700] = 4,
    ACTIONS(273), 1,
      aux_sym__input_id_token1,
    STATE(144), 1,
      sym_part,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(299), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1720] = 6,
    ACTIONS(197), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    STATE(146), 1,
      sym__y_attr,
    ACTIONS(203), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(162), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1744] = 2,
    ACTIONS(303), 2,
      anon_sym_AT,
      aux_sym__relative_attr_token1,
    ACTIONS(301), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [1760] = 2,
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
  [1776] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(124), 1,
      sym_offset,
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
  [1794] = 3,
    ACTIONS(313), 1,
      anon_sym_timestamp,
    ACTIONS(315), 1,
      anon_sym_gzip,
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
  [1812] = 2,
    ACTIONS(319), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(317), 10,
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
  [1828] = 3,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_stretch,
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
  [1846] = 10,
    ACTIONS(325), 1,
      anon_sym_x,
    ACTIONS(327), 1,
      anon_sym_y,
    ACTIONS(329), 1,
      anon_sym_xy,
    ACTIONS(331), 1,
      anon_sym_text,
    ACTIONS(333), 1,
      anon_sym_font,
    ACTIONS(335), 1,
      anon_sym_size,
    ACTIONS(337), 1,
      anon_sym_halign,
    ACTIONS(339), 1,
      anon_sym_valign,
    ACTIONS(341), 1,
      anon_sym_align,
    ACTIONS(343), 2,
      anon_sym_colour,
      anon_sym_color,
  [1878] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(89), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1893] = 2,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(345), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1908] = 2,
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
  [1923] = 1,
    ACTIONS(353), 10,
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
  [1936] = 1,
    ACTIONS(355), 10,
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
  [1949] = 1,
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
  [1962] = 1,
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
  [1975] = 6,
    ACTIONS(361), 1,
      anon_sym_input,
    ACTIONS(363), 1,
      anon_sym_output,
    ACTIONS(365), 1,
      anon_sym_parameter,
    ACTIONS(367), 1,
      anon_sym_light,
    ACTIONS(369), 1,
      anon_sym_widget,
    STATE(258), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1998] = 2,
    ACTIONS(373), 1,
      anon_sym_timestamp,
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
  [2013] = 6,
    ACTIONS(361), 1,
      anon_sym_input,
    ACTIONS(363), 1,
      anon_sym_output,
    ACTIONS(365), 1,
      anon_sym_parameter,
    ACTIONS(367), 1,
      anon_sym_light,
    ACTIONS(369), 1,
      anon_sym_widget,
    STATE(253), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2036] = 2,
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
  [2051] = 2,
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
  [2066] = 1,
    ACTIONS(375), 10,
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
  [2079] = 2,
    ACTIONS(379), 1,
      aux_sym__geometry_x_attr_token1,
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
  [2094] = 1,
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
  [2107] = 2,
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
  [2122] = 1,
    ACTIONS(381), 10,
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
  [2135] = 2,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(345), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2150] = 6,
    ACTIONS(65), 1,
      anon_sym_input,
    ACTIONS(67), 1,
      anon_sym_output,
    ACTIONS(69), 1,
      anon_sym_parameter,
    ACTIONS(71), 1,
      anon_sym_light,
    ACTIONS(73), 1,
      anon_sym_widget,
    STATE(282), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [2173] = 2,
    ACTIONS(387), 1,
      anon_sym_COMMA,
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
  [2188] = 2,
    ACTIONS(389), 1,
      anon_sym_COMMA,
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
  [2203] = 1,
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
  [2215] = 1,
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
  [2227] = 1,
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
  [2239] = 1,
    ACTIONS(289), 9,
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
  [2263] = 1,
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
  [2275] = 1,
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
  [2287] = 1,
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
  [2299] = 1,
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
  [2311] = 1,
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
  [2323] = 1,
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
  [2335] = 1,
    ACTIONS(81), 9,
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
  [2359] = 1,
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
  [2371] = 1,
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
  [2383] = 1,
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
  [2395] = 1,
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
  [2407] = 1,
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
  [2419] = 1,
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
  [2431] = 1,
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
  [2443] = 1,
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
  [2455] = 1,
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
  [2467] = 1,
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
  [2479] = 1,
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
  [2491] = 1,
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
  [2503] = 1,
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
  [2515] = 1,
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
  [2527] = 1,
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
  [2539] = 1,
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
  [2551] = 1,
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
  [2563] = 1,
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
  [2575] = 1,
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
  [2587] = 1,
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
  [2599] = 1,
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
  [2611] = 1,
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
  [2623] = 1,
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
  [2635] = 1,
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
  [2647] = 1,
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
  [2659] = 1,
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
  [2671] = 1,
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
  [2683] = 1,
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
  [2695] = 1,
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
  [2707] = 1,
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
  [2719] = 1,
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
  [2731] = 1,
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
  [2743] = 1,
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
  [2755] = 1,
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
  [2767] = 1,
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
  [2779] = 1,
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
  [2791] = 6,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(473), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_origin,
    ACTIONS(479), 1,
      aux_sym_origin_token1,
    STATE(127), 1,
      sym_offset,
    ACTIONS(475), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2813] = 1,
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
  [2825] = 1,
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
  [2837] = 1,
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
  [2849] = 1,
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
  [2861] = 1,
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
  [2873] = 1,
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
  [2885] = 1,
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
  [2897] = 1,
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
  [2909] = 1,
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
  [2921] = 1,
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
  [2933] = 1,
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
  [2945] = 1,
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
  [2957] = 1,
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
  [2969] = 1,
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
  [2981] = 1,
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
  [2993] = 1,
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
  [3005] = 1,
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
  [3017] = 1,
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
  [3029] = 1,
    ACTIONS(515), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3041] = 1,
    ACTIONS(517), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3053] = 6,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(519), 1,
      anon_sym_AT,
    ACTIONS(521), 1,
      anon_sym_origin,
    ACTIONS(523), 1,
      aux_sym_origin_token1,
    STATE(130), 1,
      sym_offset,
    ACTIONS(475), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3074] = 2,
    ACTIONS(229), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(231), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3087] = 2,
    ACTIONS(499), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(525), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3100] = 6,
    ACTIONS(527), 1,
      anon_sym_input,
    ACTIONS(529), 1,
      anon_sym_output,
    ACTIONS(531), 1,
      anon_sym_parameter,
    ACTIONS(533), 1,
      anon_sym_light,
    ACTIONS(535), 1,
      anon_sym_widget,
    ACTIONS(537), 1,
      anon_sym_label,
  [3119] = 2,
    STATE(67), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3129] = 2,
    STATE(56), 1,
      sym_y,
    ACTIONS(539), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3139] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(541), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3149] = 2,
    STATE(67), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3159] = 5,
    ACTIONS(543), 1,
      anon_sym_name,
    ACTIONS(545), 1,
      anon_sym_x,
    ACTIONS(547), 1,
      anon_sym_y,
    ACTIONS(549), 1,
      anon_sym_xy,
    ACTIONS(551), 1,
      anon_sym_part,
  [3175] = 5,
    ACTIONS(553), 1,
      aux_sym__input_id_token1,
    ACTIONS(555), 1,
      anon_sym_none,
    ACTIONS(557), 1,
      sym_rgb,
    ACTIONS(559), 1,
      sym_rgba,
    STATE(101), 1,
      sym_name,
  [3191] = 5,
    ACTIONS(561), 1,
      anon_sym_AT,
    ACTIONS(563), 1,
      aux_sym__originx_token1,
    ACTIONS(565), 1,
      aux_sym__originy_token1,
    STATE(295), 1,
      sym__originy,
    STATE(298), 1,
      sym__originx,
  [3207] = 2,
    STATE(146), 1,
      sym_valign,
    ACTIONS(47), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3217] = 2,
    STATE(146), 1,
      sym_halign,
    ACTIONS(45), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3227] = 2,
    STATE(125), 1,
      sym__geometry_y_attr,
    ACTIONS(567), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3236] = 3,
    ACTIONS(569), 1,
      anon_sym_module,
    ACTIONS(571), 1,
      anon_sym_panel,
    STATE(142), 2,
      sym__module_export,
      sym_panel,
  [3247] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(271), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3260] = 4,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3273] = 4,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3286] = 4,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym__offset,
    STATE(278), 1,
      sym__relative,
  [3299] = 4,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3312] = 4,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      aux_sym__string_token1,
    STATE(146), 1,
      sym__string,
  [3325] = 4,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    ACTIONS(595), 1,
      aux_sym__string_token1,
    STATE(54), 1,
      sym__string,
  [3338] = 3,
    ACTIONS(597), 1,
      anon_sym_project,
    ACTIONS(599), 1,
      anon_sym_script,
    STATE(135), 2,
      sym_project,
      sym_script,
  [3349] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      sym_offset,
  [3359] = 3,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(62), 1,
      sym_name,
    STATE(159), 1,
      sym__component,
  [3369] = 3,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(62), 1,
      sym_name,
    STATE(131), 1,
      sym__component,
  [3379] = 3,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(62), 1,
      sym_name,
    STATE(157), 1,
      sym__component,
  [3389] = 3,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(62), 1,
      sym_name,
    STATE(150), 1,
      sym__component,
  [3399] = 3,
    ACTIONS(603), 1,
      aux_sym__input_id_token1,
    STATE(62), 1,
      sym_name,
    STATE(138), 1,
      sym__component,
  [3409] = 3,
    ACTIONS(605), 1,
      anon_sym_name,
    ACTIONS(607), 1,
      anon_sym_height,
    ACTIONS(609), 1,
      anon_sym_width,
  [3419] = 3,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(146), 1,
      sym_colour,
  [3429] = 3,
    ACTIONS(611), 1,
      aux_sym__label_id_token1,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
  [3439] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(617), 1,
      aux_sym_origin_token1,
    STATE(111), 1,
      sym_offset,
  [3449] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(619), 1,
      aux_sym_origin_token1,
    STATE(106), 1,
      sym_offset,
  [3459] = 3,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(266), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3469] = 3,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(265), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3479] = 3,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(264), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3489] = 3,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(263), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3499] = 3,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(262), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3509] = 3,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__relative,
    STATE(272), 1,
      sym__offset,
  [3519] = 3,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      aux_sym__guide_id_token1,
    STATE(230), 1,
      sym__component_id,
  [3529] = 3,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(50), 1,
      sym_name,
    STATE(116), 1,
      sym_decoration,
  [3539] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(202), 1,
      sym_name,
  [3546] = 2,
    ACTIONS(627), 1,
      anon_sym_project,
    ACTIONS(629), 1,
      anon_sym_script,
  [3553] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(145), 1,
      sym_name,
  [3560] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
  [3567] = 2,
    ACTIONS(631), 1,
      aux_sym__absolute_attr_token1,
    STATE(285), 1,
      sym__absolute_x_attr,
  [3574] = 2,
    ACTIONS(633), 1,
      aux_sym__guide_attr_token1,
    STATE(155), 1,
      sym_identifier,
  [3581] = 1,
    ACTIONS(635), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [3586] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(160), 1,
      sym_name,
  [3593] = 2,
    ACTIONS(563), 1,
      aux_sym__originx_token1,
    STATE(151), 1,
      sym__originx,
  [3600] = 2,
    ACTIONS(565), 1,
      aux_sym__originy_token1,
    STATE(151), 1,
      sym__originy,
  [3607] = 2,
    ACTIONS(637), 1,
      anon_sym_svg,
    STATE(121), 1,
      sym_svg,
  [3614] = 2,
    ACTIONS(639), 1,
      aux_sym__input_id_token1,
    STATE(160), 1,
      sym_part,
  [3621] = 2,
    ACTIONS(199), 1,
      aux_sym__relative_attr_token1,
    STATE(126), 1,
      sym__relative_attr,
  [3628] = 2,
    ACTIONS(641), 1,
      aux_sym__input_id_token1,
    STATE(146), 1,
      sym_font,
  [3635] = 2,
    ACTIONS(643), 1,
      aux_sym__guide_attr_token1,
    STATE(122), 1,
      sym__guide_attr,
  [3642] = 2,
    ACTIONS(645), 1,
      anon_sym_scale,
    ACTIONS(647), 1,
      anon_sym_stretch,
  [3649] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(179), 1,
      sym_name,
  [3656] = 2,
    ACTIONS(649), 1,
      sym_rgb,
    ACTIONS(651), 1,
      sym_rgba,
  [3663] = 1,
    ACTIONS(653), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3668] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(180), 1,
      sym_name,
  [3675] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(181), 1,
      sym_name,
  [3682] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(182), 1,
      sym_name,
  [3689] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(183), 1,
      sym_name,
  [3696] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(203), 1,
      sym_name,
  [3703] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(110), 1,
      sym_name,
  [3710] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(199), 1,
      sym_name,
  [3717] = 2,
    ACTIONS(655), 1,
      sym_height,
    ACTIONS(657), 1,
      sym_width,
  [3724] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(198), 1,
      sym_name,
  [3731] = 2,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(133), 1,
      sym_offset,
  [3738] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(200), 1,
      sym_name,
  [3745] = 2,
    ACTIONS(575), 1,
      aux_sym_offset_token1,
    STATE(273), 1,
      sym__offset,
  [3752] = 2,
    ACTIONS(659), 1,
      aux_sym__absolute_attr_token1,
    STATE(112), 1,
      sym__absolute_y_attr,
  [3759] = 2,
    ACTIONS(625), 1,
      aux_sym__input_id_token1,
    STATE(201), 1,
      sym_name,
  [3766] = 1,
    ACTIONS(661), 1,
      anon_sym_COMMA,
  [3770] = 1,
    ACTIONS(663), 1,
      anon_sym_timestamp,
  [3774] = 1,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [3778] = 1,
    ACTIONS(667), 1,
      aux_sym__input_id_token1,
  [3782] = 1,
    ACTIONS(669), 1,
      aux_sym_absolute_token1,
  [3786] = 1,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
  [3790] = 1,
    ACTIONS(671), 1,
      anon_sym_DQUOTE,
  [3794] = 1,
    ACTIONS(673), 1,
      anon_sym_COMMA,
  [3798] = 1,
    ACTIONS(675), 1,
      aux_sym__label_id_token2,
  [3802] = 1,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [3806] = 1,
    ACTIONS(679), 1,
      anon_sym_COMMA,
  [3810] = 1,
    ACTIONS(681), 1,
      aux_sym_absolute_token1,
  [3814] = 1,
    ACTIONS(683), 1,
      aux_sym_relative_token1,
  [3818] = 1,
    ACTIONS(685), 1,
      aux_sym_origin_token1,
  [3822] = 1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [3826] = 1,
    ACTIONS(689), 1,
      aux_sym_origin_token1,
  [3830] = 1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
  [3834] = 1,
    ACTIONS(693), 1,
      sym_width,
  [3838] = 1,
    ACTIONS(695), 1,
      aux_sym__input_id_token1,
  [3842] = 1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [3846] = 1,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
  [3850] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [3854] = 1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [3858] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [3862] = 1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [3866] = 1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [3870] = 1,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [3874] = 1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [3878] = 1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [3882] = 1,
    ACTIONS(717), 1,
      aux_sym__input_id_token1,
  [3886] = 1,
    ACTIONS(719), 1,
      aux_sym__input_id_token1,
  [3890] = 1,
    ACTIONS(721), 1,
      aux_sym__input_id_token1,
  [3894] = 1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [3898] = 1,
    ACTIONS(725), 1,
      anon_sym_COMMA,
  [3902] = 1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [3906] = 1,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
  [3910] = 1,
    ACTIONS(731), 1,
      aux_sym__input_id_token1,
  [3914] = 1,
    ACTIONS(733), 1,
      anon_sym_COMMA,
  [3918] = 1,
    ACTIONS(735), 1,
      aux_sym__guide_id_token1,
  [3922] = 1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [3926] = 1,
    ACTIONS(739), 1,
      sym_fontsize,
  [3930] = 1,
    ACTIONS(663), 1,
      anon_sym_gzip,
  [3934] = 1,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
  [3938] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [3942] = 1,
    ACTIONS(743), 1,
      anon_sym_COMMA,
  [3946] = 1,
    ACTIONS(745), 1,
      anon_sym_with,
  [3950] = 1,
    ACTIONS(747), 1,
      anon_sym_COMMA,
  [3954] = 1,
    ACTIONS(749), 1,
      aux_sym__scale_token1,
  [3958] = 1,
    ACTIONS(751), 1,
      aux_sym__scale_token1,
  [3962] = 1,
    ACTIONS(647), 1,
      anon_sym_stretch,
  [3966] = 1,
    ACTIONS(753), 1,
      anon_sym_COMMA,
  [3970] = 1,
    ACTIONS(755), 1,
      aux_sym__absolute_attr_token1,
  [3974] = 1,
    ACTIONS(757), 1,
      aux_sym_origin_token1,
  [3978] = 1,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
  [3982] = 1,
    ACTIONS(761), 1,
      anon_sym_COMMA,
  [3986] = 1,
    ACTIONS(763), 1,
      sym_rgb,
  [3990] = 1,
    ACTIONS(765), 1,
      anon_sym_COMMA,
  [3994] = 1,
    ACTIONS(767), 1,
      aux_sym__scale_token1,
  [3998] = 1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
  [4002] = 1,
    ACTIONS(771), 1,
      anon_sym_COMMA,
  [4006] = 1,
    ACTIONS(773), 1,
      aux_sym_origin_token1,
  [4010] = 1,
    ACTIONS(775), 1,
      aux_sym__label_id_token3,
  [4014] = 1,
    ACTIONS(777), 1,
      aux_sym__label_id_token2,
  [4018] = 1,
    ACTIONS(779), 1,
      sym_width,
  [4022] = 1,
    ACTIONS(779), 1,
      sym_height,
  [4026] = 1,
    ACTIONS(763), 1,
      sym_rgba,
  [4030] = 1,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
  [4034] = 1,
    ACTIONS(783), 1,
      anon_sym_COMMA,
  [4038] = 1,
    ACTIONS(785), 1,
      aux_sym__label_id_token3,
  [4042] = 1,
    ACTIONS(787), 1,
      anon_sym_COMMA,
  [4046] = 1,
    ACTIONS(789), 1,
      aux_sym__guide_id_token1,
  [4050] = 1,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
  [4054] = 1,
    ACTIONS(791), 1,
      anon_sym_SQUOTE,
  [4058] = 1,
    ACTIONS(793), 1,
      aux_sym_relative_token1,
  [4062] = 1,
    ACTIONS(795), 1,
      aux_sym_absolute_token1,
  [4066] = 1,
    ACTIONS(797), 1,
      aux_sym__label_id_token2,
  [4070] = 1,
    ACTIONS(799), 1,
      aux_sym__label_id_token3,
  [4074] = 1,
    ACTIONS(801), 1,
      anon_sym_COMMA,
  [4078] = 1,
    ACTIONS(803), 1,
      anon_sym_COMMA,
  [4082] = 1,
    ACTIONS(805), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 322,
  [SMALL_STATE(10)] = 364,
  [SMALL_STATE(11)] = 406,
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
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 929,
  [SMALL_STATE(30)] = 964,
  [SMALL_STATE(31)] = 995,
  [SMALL_STATE(32)] = 1023,
  [SMALL_STATE(33)] = 1043,
  [SMALL_STATE(34)] = 1063,
  [SMALL_STATE(35)] = 1083,
  [SMALL_STATE(36)] = 1117,
  [SMALL_STATE(37)] = 1151,
  [SMALL_STATE(38)] = 1171,
  [SMALL_STATE(39)] = 1191,
  [SMALL_STATE(40)] = 1210,
  [SMALL_STATE(41)] = 1231,
  [SMALL_STATE(42)] = 1250,
  [SMALL_STATE(43)] = 1267,
  [SMALL_STATE(44)] = 1284,
  [SMALL_STATE(45)] = 1305,
  [SMALL_STATE(46)] = 1326,
  [SMALL_STATE(47)] = 1347,
  [SMALL_STATE(48)] = 1372,
  [SMALL_STATE(49)] = 1391,
  [SMALL_STATE(50)] = 1412,
  [SMALL_STATE(51)] = 1433,
  [SMALL_STATE(52)] = 1452,
  [SMALL_STATE(53)] = 1471,
  [SMALL_STATE(54)] = 1496,
  [SMALL_STATE(55)] = 1521,
  [SMALL_STATE(56)] = 1542,
  [SMALL_STATE(57)] = 1562,
  [SMALL_STATE(58)] = 1580,
  [SMALL_STATE(59)] = 1598,
  [SMALL_STATE(60)] = 1614,
  [SMALL_STATE(61)] = 1638,
  [SMALL_STATE(62)] = 1654,
  [SMALL_STATE(63)] = 1678,
  [SMALL_STATE(64)] = 1700,
  [SMALL_STATE(65)] = 1720,
  [SMALL_STATE(66)] = 1744,
  [SMALL_STATE(67)] = 1760,
  [SMALL_STATE(68)] = 1776,
  [SMALL_STATE(69)] = 1794,
  [SMALL_STATE(70)] = 1812,
  [SMALL_STATE(71)] = 1828,
  [SMALL_STATE(72)] = 1846,
  [SMALL_STATE(73)] = 1878,
  [SMALL_STATE(74)] = 1893,
  [SMALL_STATE(75)] = 1908,
  [SMALL_STATE(76)] = 1923,
  [SMALL_STATE(77)] = 1936,
  [SMALL_STATE(78)] = 1949,
  [SMALL_STATE(79)] = 1962,
  [SMALL_STATE(80)] = 1975,
  [SMALL_STATE(81)] = 1998,
  [SMALL_STATE(82)] = 2013,
  [SMALL_STATE(83)] = 2036,
  [SMALL_STATE(84)] = 2051,
  [SMALL_STATE(85)] = 2066,
  [SMALL_STATE(86)] = 2079,
  [SMALL_STATE(87)] = 2094,
  [SMALL_STATE(88)] = 2107,
  [SMALL_STATE(89)] = 2122,
  [SMALL_STATE(90)] = 2135,
  [SMALL_STATE(91)] = 2150,
  [SMALL_STATE(92)] = 2173,
  [SMALL_STATE(93)] = 2188,
  [SMALL_STATE(94)] = 2203,
  [SMALL_STATE(95)] = 2215,
  [SMALL_STATE(96)] = 2227,
  [SMALL_STATE(97)] = 2239,
  [SMALL_STATE(98)] = 2251,
  [SMALL_STATE(99)] = 2263,
  [SMALL_STATE(100)] = 2275,
  [SMALL_STATE(101)] = 2287,
  [SMALL_STATE(102)] = 2299,
  [SMALL_STATE(103)] = 2311,
  [SMALL_STATE(104)] = 2323,
  [SMALL_STATE(105)] = 2335,
  [SMALL_STATE(106)] = 2347,
  [SMALL_STATE(107)] = 2359,
  [SMALL_STATE(108)] = 2371,
  [SMALL_STATE(109)] = 2383,
  [SMALL_STATE(110)] = 2395,
  [SMALL_STATE(111)] = 2407,
  [SMALL_STATE(112)] = 2419,
  [SMALL_STATE(113)] = 2431,
  [SMALL_STATE(114)] = 2443,
  [SMALL_STATE(115)] = 2455,
  [SMALL_STATE(116)] = 2467,
  [SMALL_STATE(117)] = 2479,
  [SMALL_STATE(118)] = 2491,
  [SMALL_STATE(119)] = 2503,
  [SMALL_STATE(120)] = 2515,
  [SMALL_STATE(121)] = 2527,
  [SMALL_STATE(122)] = 2539,
  [SMALL_STATE(123)] = 2551,
  [SMALL_STATE(124)] = 2563,
  [SMALL_STATE(125)] = 2575,
  [SMALL_STATE(126)] = 2587,
  [SMALL_STATE(127)] = 2599,
  [SMALL_STATE(128)] = 2611,
  [SMALL_STATE(129)] = 2623,
  [SMALL_STATE(130)] = 2635,
  [SMALL_STATE(131)] = 2647,
  [SMALL_STATE(132)] = 2659,
  [SMALL_STATE(133)] = 2671,
  [SMALL_STATE(134)] = 2683,
  [SMALL_STATE(135)] = 2695,
  [SMALL_STATE(136)] = 2707,
  [SMALL_STATE(137)] = 2719,
  [SMALL_STATE(138)] = 2731,
  [SMALL_STATE(139)] = 2743,
  [SMALL_STATE(140)] = 2755,
  [SMALL_STATE(141)] = 2767,
  [SMALL_STATE(142)] = 2779,
  [SMALL_STATE(143)] = 2791,
  [SMALL_STATE(144)] = 2813,
  [SMALL_STATE(145)] = 2825,
  [SMALL_STATE(146)] = 2837,
  [SMALL_STATE(147)] = 2849,
  [SMALL_STATE(148)] = 2861,
  [SMALL_STATE(149)] = 2873,
  [SMALL_STATE(150)] = 2885,
  [SMALL_STATE(151)] = 2897,
  [SMALL_STATE(152)] = 2909,
  [SMALL_STATE(153)] = 2921,
  [SMALL_STATE(154)] = 2933,
  [SMALL_STATE(155)] = 2945,
  [SMALL_STATE(156)] = 2957,
  [SMALL_STATE(157)] = 2969,
  [SMALL_STATE(158)] = 2981,
  [SMALL_STATE(159)] = 2993,
  [SMALL_STATE(160)] = 3005,
  [SMALL_STATE(161)] = 3017,
  [SMALL_STATE(162)] = 3029,
  [SMALL_STATE(163)] = 3041,
  [SMALL_STATE(164)] = 3053,
  [SMALL_STATE(165)] = 3074,
  [SMALL_STATE(166)] = 3087,
  [SMALL_STATE(167)] = 3100,
  [SMALL_STATE(168)] = 3119,
  [SMALL_STATE(169)] = 3129,
  [SMALL_STATE(170)] = 3139,
  [SMALL_STATE(171)] = 3149,
  [SMALL_STATE(172)] = 3159,
  [SMALL_STATE(173)] = 3175,
  [SMALL_STATE(174)] = 3191,
  [SMALL_STATE(175)] = 3207,
  [SMALL_STATE(176)] = 3217,
  [SMALL_STATE(177)] = 3227,
  [SMALL_STATE(178)] = 3236,
  [SMALL_STATE(179)] = 3247,
  [SMALL_STATE(180)] = 3260,
  [SMALL_STATE(181)] = 3273,
  [SMALL_STATE(182)] = 3286,
  [SMALL_STATE(183)] = 3299,
  [SMALL_STATE(184)] = 3312,
  [SMALL_STATE(185)] = 3325,
  [SMALL_STATE(186)] = 3338,
  [SMALL_STATE(187)] = 3349,
  [SMALL_STATE(188)] = 3359,
  [SMALL_STATE(189)] = 3369,
  [SMALL_STATE(190)] = 3379,
  [SMALL_STATE(191)] = 3389,
  [SMALL_STATE(192)] = 3399,
  [SMALL_STATE(193)] = 3409,
  [SMALL_STATE(194)] = 3419,
  [SMALL_STATE(195)] = 3429,
  [SMALL_STATE(196)] = 3439,
  [SMALL_STATE(197)] = 3449,
  [SMALL_STATE(198)] = 3459,
  [SMALL_STATE(199)] = 3469,
  [SMALL_STATE(200)] = 3479,
  [SMALL_STATE(201)] = 3489,
  [SMALL_STATE(202)] = 3499,
  [SMALL_STATE(203)] = 3509,
  [SMALL_STATE(204)] = 3519,
  [SMALL_STATE(205)] = 3529,
  [SMALL_STATE(206)] = 3539,
  [SMALL_STATE(207)] = 3546,
  [SMALL_STATE(208)] = 3553,
  [SMALL_STATE(209)] = 3560,
  [SMALL_STATE(210)] = 3567,
  [SMALL_STATE(211)] = 3574,
  [SMALL_STATE(212)] = 3581,
  [SMALL_STATE(213)] = 3586,
  [SMALL_STATE(214)] = 3593,
  [SMALL_STATE(215)] = 3600,
  [SMALL_STATE(216)] = 3607,
  [SMALL_STATE(217)] = 3614,
  [SMALL_STATE(218)] = 3621,
  [SMALL_STATE(219)] = 3628,
  [SMALL_STATE(220)] = 3635,
  [SMALL_STATE(221)] = 3642,
  [SMALL_STATE(222)] = 3649,
  [SMALL_STATE(223)] = 3656,
  [SMALL_STATE(224)] = 3663,
  [SMALL_STATE(225)] = 3668,
  [SMALL_STATE(226)] = 3675,
  [SMALL_STATE(227)] = 3682,
  [SMALL_STATE(228)] = 3689,
  [SMALL_STATE(229)] = 3696,
  [SMALL_STATE(230)] = 3703,
  [SMALL_STATE(231)] = 3710,
  [SMALL_STATE(232)] = 3717,
  [SMALL_STATE(233)] = 3724,
  [SMALL_STATE(234)] = 3731,
  [SMALL_STATE(235)] = 3738,
  [SMALL_STATE(236)] = 3745,
  [SMALL_STATE(237)] = 3752,
  [SMALL_STATE(238)] = 3759,
  [SMALL_STATE(239)] = 3766,
  [SMALL_STATE(240)] = 3770,
  [SMALL_STATE(241)] = 3774,
  [SMALL_STATE(242)] = 3778,
  [SMALL_STATE(243)] = 3782,
  [SMALL_STATE(244)] = 3786,
  [SMALL_STATE(245)] = 3790,
  [SMALL_STATE(246)] = 3794,
  [SMALL_STATE(247)] = 3798,
  [SMALL_STATE(248)] = 3802,
  [SMALL_STATE(249)] = 3806,
  [SMALL_STATE(250)] = 3810,
  [SMALL_STATE(251)] = 3814,
  [SMALL_STATE(252)] = 3818,
  [SMALL_STATE(253)] = 3822,
  [SMALL_STATE(254)] = 3826,
  [SMALL_STATE(255)] = 3830,
  [SMALL_STATE(256)] = 3834,
  [SMALL_STATE(257)] = 3838,
  [SMALL_STATE(258)] = 3842,
  [SMALL_STATE(259)] = 3846,
  [SMALL_STATE(260)] = 3850,
  [SMALL_STATE(261)] = 3854,
  [SMALL_STATE(262)] = 3858,
  [SMALL_STATE(263)] = 3862,
  [SMALL_STATE(264)] = 3866,
  [SMALL_STATE(265)] = 3870,
  [SMALL_STATE(266)] = 3874,
  [SMALL_STATE(267)] = 3878,
  [SMALL_STATE(268)] = 3882,
  [SMALL_STATE(269)] = 3886,
  [SMALL_STATE(270)] = 3890,
  [SMALL_STATE(271)] = 3894,
  [SMALL_STATE(272)] = 3898,
  [SMALL_STATE(273)] = 3902,
  [SMALL_STATE(274)] = 3906,
  [SMALL_STATE(275)] = 3910,
  [SMALL_STATE(276)] = 3914,
  [SMALL_STATE(277)] = 3918,
  [SMALL_STATE(278)] = 3922,
  [SMALL_STATE(279)] = 3926,
  [SMALL_STATE(280)] = 3930,
  [SMALL_STATE(281)] = 3934,
  [SMALL_STATE(282)] = 3938,
  [SMALL_STATE(283)] = 3942,
  [SMALL_STATE(284)] = 3946,
  [SMALL_STATE(285)] = 3950,
  [SMALL_STATE(286)] = 3954,
  [SMALL_STATE(287)] = 3958,
  [SMALL_STATE(288)] = 3962,
  [SMALL_STATE(289)] = 3966,
  [SMALL_STATE(290)] = 3970,
  [SMALL_STATE(291)] = 3974,
  [SMALL_STATE(292)] = 3978,
  [SMALL_STATE(293)] = 3982,
  [SMALL_STATE(294)] = 3986,
  [SMALL_STATE(295)] = 3990,
  [SMALL_STATE(296)] = 3994,
  [SMALL_STATE(297)] = 3998,
  [SMALL_STATE(298)] = 4002,
  [SMALL_STATE(299)] = 4006,
  [SMALL_STATE(300)] = 4010,
  [SMALL_STATE(301)] = 4014,
  [SMALL_STATE(302)] = 4018,
  [SMALL_STATE(303)] = 4022,
  [SMALL_STATE(304)] = 4026,
  [SMALL_STATE(305)] = 4030,
  [SMALL_STATE(306)] = 4034,
  [SMALL_STATE(307)] = 4038,
  [SMALL_STATE(308)] = 4042,
  [SMALL_STATE(309)] = 4046,
  [SMALL_STATE(310)] = 4050,
  [SMALL_STATE(311)] = 4054,
  [SMALL_STATE(312)] = 4058,
  [SMALL_STATE(313)] = 4062,
  [SMALL_STATE(314)] = 4066,
  [SMALL_STATE(315)] = 4070,
  [SMALL_STATE(316)] = 4074,
  [SMALL_STATE(317)] = 4078,
  [SMALL_STATE(318)] = 4082,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 11),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(259),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(207),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(186),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(178),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 8),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 21),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 9),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 7),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 13),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 13),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 13),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 12),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 9),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 10),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 10),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 15),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [781] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
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
