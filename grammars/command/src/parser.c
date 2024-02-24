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
#define STATE_COUNT 330
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 176
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
  aux_sym__offset_attr_token1 = 21,
  anon_sym_COMMA = 22,
  anon_sym_AT = 23,
  aux_sym__absolute_attr_token1 = 24,
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
  sym__decoration_attr = 95,
  sym__guideline_attr = 96,
  sym__x_attr = 97,
  sym__y_attr = 98,
  sym__xy_attr = 99,
  sym__offset_attr = 100,
  sym__offset_xy_attr = 101,
  sym__absolute_attr = 102,
  sym__absolute_x_attr = 103,
  sym__absolute_y_attr = 104,
  sym__absolute_xy_attr = 105,
  sym__relative_attr = 106,
  sym__relative_xy_attr = 107,
  sym__geometry_x_attr = 108,
  sym__geometry_y_attr = 109,
  sym__geometry_xy_attr = 110,
  sym__guide_attr = 111,
  sym__guide_xy_attr = 112,
  sym_decorate = 113,
  sym_delete = 114,
  sym__guide_id = 115,
  sym__input_id = 116,
  sym__output_id = 117,
  sym__parameter_id = 118,
  sym__light_id = 119,
  sym__widget_id = 120,
  sym__label_id = 121,
  sym__decoration_id = 122,
  sym__component_id = 123,
  sym_load = 124,
  sym_save = 125,
  sym_export = 126,
  sym__module_export = 127,
  sym_project = 128,
  sym_script = 129,
  sym__entity = 130,
  sym__input = 131,
  sym__output = 132,
  sym__parameter = 133,
  sym__light = 134,
  sym__widget = 135,
  sym_module = 136,
  sym_input = 137,
  sym_output = 138,
  sym_parameter = 139,
  sym_light = 140,
  sym_widget = 141,
  sym__component = 142,
  sym_label = 143,
  sym_font = 144,
  sym__align = 145,
  sym_halign = 146,
  sym_valign = 147,
  sym_colour = 148,
  sym_decoration = 149,
  sym__scale = 150,
  sym_stretch = 151,
  sym_origin = 152,
  sym__originx = 153,
  sym__originy = 154,
  sym_background = 155,
  sym_panel = 156,
  sym_svg = 157,
  sym_name = 158,
  sym_part = 159,
  sym_guide = 160,
  sym_identifier = 161,
  sym_vertical = 162,
  sym_horizontal = 163,
  sym_geometry = 164,
  sym_offset = 165,
  sym__offset = 166,
  sym_guideline = 167,
  sym__string = 168,
  sym_absolute = 169,
  sym_relative = 170,
  sym__decorate = 171,
  sym__relative = 172,
  sym_x = 173,
  sym_y = 174,
  aux_sym_command_repeat1 = 175,
  alias_sym_dy = 176,
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
  [aux_sym__offset_attr_token1] = "offset",
  [anon_sym_COMMA] = ",",
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
  [sym__decoration_attr] = "_decoration_attr",
  [sym__guideline_attr] = "_guideline_attr",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
  [sym__xy_attr] = "xy",
  [sym__offset_attr] = "x",
  [sym__offset_xy_attr] = "_offset_xy_attr",
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
  [aux_sym__offset_attr_token1] = sym_offset,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__decoration_attr] = sym__decoration_attr,
  [sym__guideline_attr] = sym__guideline_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym__xy_attr,
  [sym__offset_attr] = sym_x,
  [sym__offset_xy_attr] = sym__offset_xy_attr,
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
  [aux_sym__offset_attr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [sym__decoration_attr] = {
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
  [sym__offset_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__offset_xy_attr] = {
    .visible = false,
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
    [2] = sym_y,
  },
  [9] = {
    [1] = sym_light,
  },
  [10] = {
    [1] = sym_absolute,
  },
  [11] = {
    [1] = aux_sym__string_token1,
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
  sym__offset_attr, 2,
    sym_x,
    sym_y,
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 8,
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
  [77] = 21,
  [78] = 78,
  [79] = 19,
  [80] = 80,
  [81] = 81,
  [82] = 18,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 21,
  [93] = 93,
  [94] = 94,
  [95] = 17,
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
  [140] = 72,
  [141] = 67,
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
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 28,
  [170] = 132,
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
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 318,
  [321] = 294,
  [322] = 293,
  [323] = 254,
  [324] = 269,
  [325] = 312,
  [326] = 311,
  [327] = 296,
  [328] = 251,
  [329] = 297,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(321);
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '0') ADVANCE(346);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'g') ADVANCE(279);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(331);
      if (lookahead == 'y') ADVANCE(332);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(504);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(558);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(502);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'U') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(557);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '8') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(182);
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 25:
      if (lookahead == ';') ADVANCE(322);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(524);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(396);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == 'v') ADVANCE(391);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
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
      if (lookahead == 'c') ADVANCE(215);
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
      if (lookahead == 'd') ADVANCE(515);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(541);
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
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(181);
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
      if (lookahead == 'e') ADVANCE(269);
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
      if (lookahead == 'e') ADVANCE(270);
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
      if (lookahead == 'g') ADVANCE(548);
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
      if (lookahead == 'h') ADVANCE(523);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(431);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(330);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(536);
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
      if (lookahead == 'k') ADVANCE(549);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(553);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(555);
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
      if (lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(528);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(550);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(557);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(529);
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
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(514);
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
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(41);
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
      if (lookahead == 'o') ADVANCE(167);
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
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(372);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(47);
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
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(42);
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
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(275);
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
      if (lookahead == 'z') ADVANCE(216);
      END_STATE();
    case 290:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(557);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 316:
      if (eof) ADVANCE(321);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(438);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 317:
      if (eof) ADVANCE(321);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 318:
      if (eof) ADVANCE(321);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(331);
      if (lookahead == 'y') ADVANCE(332);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 319:
      if (eof) ADVANCE(321);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(143);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 320:
      if (eof) ADVANCE(321);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(37);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(345);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(354);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'H') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == 'H') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(503);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(503);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(182);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 318},
  [3] = {.lex_state = 316},
  [4] = {.lex_state = 316},
  [5] = {.lex_state = 318},
  [6] = {.lex_state = 318},
  [7] = {.lex_state = 318},
  [8] = {.lex_state = 316},
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
  [25] = {.lex_state = 319},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 318},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 318},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 318},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 318},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 317},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 318},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 319},
  [63] = {.lex_state = 318},
  [64] = {.lex_state = 320},
  [65] = {.lex_state = 318},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 317},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 317},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 317},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 317},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 318},
  [82] = {.lex_state = 317},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 318},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 318},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 320},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 317},
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
  [153] = {.lex_state = 29},
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
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 29},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 318},
  [174] = {.lex_state = 318},
  [175] = {.lex_state = 318},
  [176] = {.lex_state = 28},
  [177] = {.lex_state = 318},
  [178] = {.lex_state = 318},
  [179] = {.lex_state = 28},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 319},
  [183] = {.lex_state = 318},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 318},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 318},
  [189] = {.lex_state = 318},
  [190] = {.lex_state = 318},
  [191] = {.lex_state = 318},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 316},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 318},
  [196] = {.lex_state = 318},
  [197] = {.lex_state = 316},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 318},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 318},
  [203] = {.lex_state = 27},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 318},
  [207] = {.lex_state = 318},
  [208] = {.lex_state = 318},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 27},
  [218] = {.lex_state = 319},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 27},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 294},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 27},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 318},
  [237] = {.lex_state = 318},
  [238] = {.lex_state = 318},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 319},
  [244] = {.lex_state = 319},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 294},
  [248] = {.lex_state = 319},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 316},
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
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 53},
  [270] = {.lex_state = 316},
  [271] = {.lex_state = 317},
  [272] = {.lex_state = 317},
  [273] = {.lex_state = 317},
  [274] = {.lex_state = 0},
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
  [285] = {.lex_state = 319},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 316},
  [300] = {.lex_state = 318},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 318},
  [303] = {.lex_state = 319},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 316},
  [307] = {.lex_state = 512},
  [308] = {.lex_state = 507},
  [309] = {.lex_state = 318},
  [310] = {.lex_state = 318},
  [311] = {.lex_state = 512},
  [312] = {.lex_state = 507},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 53},
  [325] = {.lex_state = 507},
  [326] = {.lex_state = 512},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 53},
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
    [aux_sym__offset_attr_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_command] = STATE(319),
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
  [0] = 16,
    ACTIONS(21), 1,
      anon_sym_module,
    ACTIONS(23), 1,
      anon_sym_guide,
    ACTIONS(25), 1,
      anon_sym_input,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(29), 1,
      anon_sym_parameter,
    ACTIONS(31), 1,
      anon_sym_light,
    ACTIONS(33), 1,
      anon_sym_widget,
    ACTIONS(35), 1,
      anon_sym_label,
    ACTIONS(37), 1,
      anon_sym_decoration,
    ACTIONS(39), 1,
      anon_sym_origin,
    ACTIONS(41), 1,
      anon_sym_background,
    STATE(30), 1,
      sym__guide_id,
    STATE(66), 1,
      sym__label_id,
    STATE(172), 1,
      sym__decoration_id,
    STATE(180), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(148), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [59] = 13,
    ACTIONS(51), 1,
      aux_sym__input_id_token1,
    ACTIONS(53), 1,
      sym_fontsize,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(6), 1,
      sym_font,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(57), 1,
      sym__align,
    STATE(113), 1,
      sym_colour,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(45), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [112] = 13,
    ACTIONS(51), 1,
      aux_sym__input_id_token1,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    ACTIONS(63), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(42), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(156), 1,
      sym_colour,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(61), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [165] = 10,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    ACTIONS(71), 1,
      sym_fontsize,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(55), 1,
      sym__align,
    STATE(110), 1,
      sym_colour,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [210] = 10,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    ACTIONS(75), 1,
      sym_fontsize,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(54), 1,
      sym__align,
    STATE(108), 1,
      sym_colour,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [255] = 9,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(55), 1,
      sym__align,
    STATE(110), 1,
      sym_colour,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [297] = 4,
    ACTIONS(81), 1,
      aux_sym_offset_token1,
    STATE(18), 1,
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
  [329] = 9,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(42), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(156), 1,
      sym_colour,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(59), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [371] = 9,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(54), 1,
      sym__align,
    STATE(108), 1,
      sym_colour,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [413] = 9,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(56), 1,
      sym__align,
    STATE(99), 1,
      sym_colour,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [455] = 2,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(87), 17,
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
  [481] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(91), 17,
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
  [507] = 2,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(95), 17,
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
  [533] = 2,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(99), 17,
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
  [559] = 2,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(103), 17,
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
  [585] = 2,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(107), 17,
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
  [611] = 2,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(111), 17,
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
  [637] = 2,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(115), 17,
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
  [663] = 2,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(119), 17,
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
  [689] = 2,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(123), 17,
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
  [715] = 2,
    ACTIONS(127), 1,
      anon_sym_x,
    ACTIONS(125), 19,
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
  [740] = 2,
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
  [765] = 2,
    ACTIONS(135), 1,
      sym_rgb,
    ACTIONS(133), 19,
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
  [790] = 9,
    ACTIONS(137), 1,
      anon_sym_module,
    ACTIONS(139), 1,
      anon_sym_guide,
    ACTIONS(141), 1,
      anon_sym_input,
    ACTIONS(143), 1,
      anon_sym_output,
    ACTIONS(145), 1,
      anon_sym_light,
    ACTIONS(147), 1,
      anon_sym_widget,
    ACTIONS(149), 1,
      anon_sym_label,
    ACTIONS(151), 1,
      aux_sym_parameter_token1,
    STATE(114), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [826] = 10,
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
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_comment,
    STATE(29), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [864] = 8,
    ACTIONS(159), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(161), 1,
      anon_sym_vertical,
    ACTIONS(163), 1,
      anon_sym_horizontal,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    STATE(139), 1,
      sym_offset,
    STATE(237), 1,
      sym_identifier,
    STATE(138), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(157), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [898] = 2,
    ACTIONS(169), 2,
      anon_sym_x,
      sym_width,
    ACTIONS(167), 15,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_height,
      aux_sym_offset_token1,
  [920] = 10,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_new,
    ACTIONS(179), 1,
      anon_sym_set,
    ACTIONS(182), 1,
      anon_sym_decorate,
    ACTIONS(185), 1,
      anon_sym_delete,
    ACTIONS(188), 1,
      anon_sym_load,
    ACTIONS(191), 1,
      anon_sym_save,
    ACTIONS(194), 1,
      anon_sym_export,
    STATE(29), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [958] = 7,
    ACTIONS(197), 1,
      anon_sym_id,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(201), 1,
      anon_sym_AT,
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
    STATE(105), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [989] = 9,
    ACTIONS(25), 1,
      anon_sym_input,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(29), 1,
      anon_sym_parameter,
    ACTIONS(31), 1,
      anon_sym_light,
    ACTIONS(33), 1,
      anon_sym_widget,
    ACTIONS(35), 1,
      anon_sym_label,
    ACTIONS(37), 1,
      anon_sym_decoration,
    ACTIONS(209), 1,
      anon_sym_guide,
    STATE(159), 8,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [1024] = 2,
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
  [1044] = 2,
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
  [1064] = 2,
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
  [1084] = 2,
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
  [1104] = 6,
    ACTIONS(159), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(161), 1,
      anon_sym_vertical,
    ACTIONS(163), 1,
      anon_sym_horizontal,
    STATE(27), 1,
      sym_identifier,
    STATE(149), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(157), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1132] = 9,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(227), 1,
      anon_sym_AT,
    STATE(168), 1,
      sym__xy_attr,
    STATE(275), 1,
      sym__guide_attr,
    STATE(276), 1,
      sym__geometry_x_attr,
    STATE(277), 1,
      sym__relative_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(160), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1166] = 2,
    ACTIONS(231), 1,
      anon_sym_x,
    ACTIONS(229), 14,
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
  [1186] = 9,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(227), 1,
      anon_sym_AT,
    STATE(152), 1,
      sym__xy_attr,
    STATE(275), 1,
      sym__guide_attr,
    STATE(276), 1,
      sym__geometry_x_attr,
    STATE(277), 1,
      sym__relative_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(160), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1220] = 2,
    ACTIONS(235), 1,
      anon_sym_x,
    ACTIONS(233), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1238] = 2,
    ACTIONS(239), 1,
      anon_sym_x,
    ACTIONS(237), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1256] = 4,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(110), 1,
      sym_colour,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1277] = 3,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    STATE(75), 1,
      sym_offset,
    ACTIONS(241), 10,
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
  [1296] = 6,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(152), 1,
      sym__x_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(98), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1321] = 6,
    ACTIONS(243), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      aux_sym_relative_token1,
    STATE(290), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(245), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1346] = 6,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(168), 1,
      sym__x_attr,
    ACTIONS(203), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(98), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1371] = 2,
    ACTIONS(253), 1,
      sym_rgb,
    ACTIONS(251), 11,
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
  [1388] = 2,
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
  [1405] = 4,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym__scale,
    STATE(145), 1,
      sym_stretch,
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
  [1426] = 3,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    STATE(78), 1,
      sym_offset,
    ACTIONS(263), 10,
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
  [1445] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      sym_rgb,
    ACTIONS(265), 10,
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
  [1464] = 3,
    ACTIONS(269), 1,
      sym_rgb,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(265), 10,
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
  [1483] = 4,
    ACTIONS(273), 1,
      aux_sym_offset_token1,
    STATE(82), 1,
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
  [1504] = 4,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(156), 1,
      sym_colour,
    ACTIONS(59), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1525] = 4,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(99), 1,
      sym_colour,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1546] = 4,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(134), 1,
      sym_colour,
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
  [1567] = 4,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(108), 1,
      sym_colour,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1588] = 3,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    STATE(129), 1,
      sym_offset,
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
  [1606] = 6,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(152), 1,
      sym__y_attr,
    ACTIONS(205), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(158), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1630] = 6,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      aux_sym__guide_attr_token1,
    STATE(168), 1,
      sym__y_attr,
    ACTIONS(205), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(158), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1654] = 3,
    ACTIONS(281), 1,
      anon_sym_light,
    ACTIONS(283), 1,
      anon_sym_dark,
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
  [1672] = 2,
    ACTIONS(287), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(285), 10,
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
  [1688] = 3,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    STATE(120), 1,
      sym_offset,
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
  [1706] = 2,
    ACTIONS(293), 1,
      aux_sym__geometry_x_attr_token1,
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
  [1722] = 5,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(152), 1,
      sym__align,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [1744] = 10,
    ACTIONS(295), 1,
      anon_sym_x,
    ACTIONS(297), 1,
      anon_sym_y,
    ACTIONS(299), 1,
      anon_sym_xy,
    ACTIONS(301), 1,
      anon_sym_text,
    ACTIONS(303), 1,
      anon_sym_font,
    ACTIONS(305), 1,
      anon_sym_size,
    ACTIONS(307), 1,
      anon_sym_halign,
    ACTIONS(309), 1,
      anon_sym_valign,
    ACTIONS(311), 1,
      anon_sym_align,
    ACTIONS(313), 2,
      anon_sym_colour,
      anon_sym_color,
  [1776] = 2,
    ACTIONS(317), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(315), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [1792] = 6,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      aux_sym_relative_token1,
    STATE(295), 1,
      sym_x,
    STATE(69), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(245), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1816] = 4,
    ACTIONS(329), 1,
      aux_sym__input_id_token1,
    STATE(115), 1,
      sym_part,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(327), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1836] = 3,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_stretch,
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
  [1854] = 3,
    ACTIONS(337), 1,
      anon_sym_timestamp,
    ACTIONS(339), 1,
      anon_sym_gzip,
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
  [1872] = 2,
    ACTIONS(343), 1,
      aux_sym_offset_token1,
    ACTIONS(341), 10,
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
  [1888] = 4,
    ACTIONS(329), 1,
      aux_sym__input_id_token1,
    STATE(162), 1,
      sym_part,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(347), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1908] = 2,
    ACTIONS(351), 1,
      sym_rgb,
    ACTIONS(349), 10,
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
  [1924] = 1,
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
  [1937] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
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
  [1952] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(123), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1967] = 1,
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
  [1980] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(115), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1995] = 2,
    ACTIONS(363), 1,
      anon_sym_timestamp,
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
  [2010] = 6,
    ACTIONS(365), 1,
      anon_sym_input,
    ACTIONS(367), 1,
      anon_sym_output,
    ACTIONS(369), 1,
      anon_sym_parameter,
    ACTIONS(371), 1,
      anon_sym_light,
    ACTIONS(373), 1,
      anon_sym_widget,
    STATE(253), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2033] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(111), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2048] = 1,
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
  [2061] = 1,
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
  [2074] = 2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
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
  [2089] = 6,
    ACTIONS(25), 1,
      anon_sym_input,
    ACTIONS(27), 1,
      anon_sym_output,
    ACTIONS(29), 1,
      anon_sym_parameter,
    ACTIONS(31), 1,
      anon_sym_light,
    ACTIONS(33), 1,
      anon_sym_widget,
    STATE(287), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [2112] = 2,
    ACTIONS(383), 1,
      anon_sym_COMMA,
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
  [2127] = 1,
    ACTIONS(385), 10,
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
  [2140] = 6,
    ACTIONS(365), 1,
      anon_sym_input,
    ACTIONS(367), 1,
      anon_sym_output,
    ACTIONS(369), 1,
      anon_sym_parameter,
    ACTIONS(371), 1,
      anon_sym_light,
    ACTIONS(373), 1,
      anon_sym_widget,
    STATE(301), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2163] = 2,
    ACTIONS(389), 1,
      anon_sym_COMMA,
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
  [2178] = 2,
    ACTIONS(393), 1,
      aux_sym__geometry_x_attr_token1,
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
  [2193] = 1,
    ACTIONS(121), 10,
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
  [2206] = 2,
    ACTIONS(395), 1,
      anon_sym_COMMA,
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
  [2221] = 1,
    ACTIONS(397), 10,
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
  [2234] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(107), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2249] = 1,
    ACTIONS(399), 10,
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
  [2262] = 1,
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
  [2274] = 1,
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
  [2286] = 1,
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
  [2298] = 1,
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
  [2310] = 1,
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
  [2322] = 1,
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
  [2334] = 1,
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
  [2346] = 1,
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
  [2358] = 1,
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
  [2370] = 1,
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
  [2382] = 1,
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
  [2394] = 1,
    ACTIONS(59), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2406] = 1,
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
  [2418] = 1,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2430] = 1,
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
  [2442] = 1,
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
  [2454] = 1,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2466] = 1,
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
  [2478] = 1,
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
  [2490] = 1,
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
  [2502] = 1,
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
  [2514] = 1,
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
  [2526] = 1,
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
  [2538] = 1,
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
  [2550] = 1,
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
  [2562] = 1,
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
  [2574] = 1,
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
  [2586] = 1,
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
  [2598] = 1,
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
  [2610] = 1,
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
  [2622] = 1,
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
  [2634] = 1,
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
  [2646] = 1,
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
  [2658] = 1,
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
  [2670] = 1,
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
  [2682] = 1,
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
  [2694] = 1,
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
  [2706] = 1,
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
  [2718] = 1,
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
  [2730] = 1,
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
  [2742] = 1,
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
  [2754] = 1,
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
  [2766] = 1,
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
  [2778] = 1,
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
  [2790] = 1,
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
  [2802] = 1,
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
  [2814] = 1,
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
  [2826] = 1,
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
  [2838] = 1,
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
  [2850] = 1,
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
  [2862] = 1,
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
  [2874] = 1,
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
  [2886] = 1,
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
  [2898] = 1,
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
  [2910] = 1,
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
  [2922] = 1,
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
  [2934] = 6,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    ACTIONS(497), 1,
      anon_sym_AT,
    ACTIONS(501), 1,
      anon_sym_origin,
    ACTIONS(503), 1,
      aux_sym_origin_token1,
    STATE(133), 1,
      sym_offset,
    ACTIONS(499), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2956] = 1,
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
  [2968] = 1,
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
  [2980] = 1,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2992] = 1,
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
  [3004] = 1,
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
  [3016] = 1,
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
  [3028] = 1,
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
  [3040] = 1,
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
  [3052] = 1,
    ACTIONS(519), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3064] = 1,
    ACTIONS(521), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3076] = 1,
    ACTIONS(523), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3088] = 1,
    ACTIONS(525), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3100] = 1,
    ACTIONS(527), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3112] = 1,
    ACTIONS(529), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3124] = 1,
    ACTIONS(531), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [3136] = 2,
    ACTIONS(167), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(169), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3149] = 2,
    ACTIONS(461), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(533), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3162] = 6,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    ACTIONS(535), 1,
      anon_sym_AT,
    ACTIONS(537), 1,
      anon_sym_origin,
    ACTIONS(539), 1,
      aux_sym_origin_token1,
    STATE(136), 1,
      sym_offset,
    ACTIONS(499), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3183] = 5,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(541), 1,
      anon_sym_x,
    ACTIONS(543), 1,
      anon_sym_y,
    ACTIONS(545), 1,
      anon_sym_xy,
    STATE(118), 2,
      sym__scale,
      sym_stretch,
  [3200] = 6,
    ACTIONS(547), 1,
      anon_sym_input,
    ACTIONS(549), 1,
      anon_sym_output,
    ACTIONS(551), 1,
      anon_sym_parameter,
    ACTIONS(553), 1,
      anon_sym_light,
    ACTIONS(555), 1,
      anon_sym_widget,
    ACTIONS(557), 1,
      anon_sym_label,
  [3219] = 2,
    STATE(152), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3229] = 2,
    STATE(74), 1,
      sym_halign,
    ACTIONS(67), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3239] = 2,
    STATE(4), 1,
      sym_y,
    ACTIONS(559), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3249] = 2,
    STATE(152), 1,
      sym_valign,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3259] = 2,
    STATE(74), 1,
      sym_valign,
    ACTIONS(69), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3269] = 2,
    STATE(73), 1,
      sym_y,
    ACTIONS(561), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3279] = 5,
    ACTIONS(563), 1,
      anon_sym_name,
    ACTIONS(565), 1,
      anon_sym_x,
    ACTIONS(567), 1,
      anon_sym_y,
    ACTIONS(569), 1,
      anon_sym_xy,
    ACTIONS(571), 1,
      anon_sym_part,
  [3295] = 5,
    ACTIONS(573), 1,
      aux_sym__input_id_token1,
    ACTIONS(575), 1,
      anon_sym_none,
    ACTIONS(577), 1,
      sym_rgb,
    ACTIONS(579), 1,
      sym_rgba,
    STATE(103), 1,
      sym_name,
  [3311] = 5,
    ACTIONS(581), 1,
      anon_sym_AT,
    ACTIONS(583), 1,
      aux_sym__originx_token1,
    ACTIONS(585), 1,
      aux_sym__originy_token1,
    STATE(249), 1,
      sym__originx,
    STATE(304), 1,
      sym__originy,
  [3327] = 4,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__offset,
    STATE(262), 1,
      sym__relative,
  [3340] = 3,
    ACTIONS(591), 1,
      anon_sym_project,
    ACTIONS(593), 1,
      anon_sym_script,
    STATE(161), 2,
      sym_project,
      sym_script,
  [3351] = 2,
    STATE(104), 1,
      sym__geometry_y_attr,
    ACTIONS(595), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3360] = 3,
    ACTIONS(597), 1,
      anon_sym_module,
    ACTIONS(599), 1,
      anon_sym_panel,
    STATE(155), 2,
      sym__module_export,
      sym_panel,
  [3371] = 4,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      aux_sym__string_token1,
    STATE(45), 1,
      sym__string,
  [3384] = 4,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym__offset,
    STATE(266), 1,
      sym__relative,
  [3397] = 4,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym__offset,
    STATE(264), 1,
      sym__relative,
  [3410] = 4,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym__offset,
    STATE(265), 1,
      sym__relative,
  [3423] = 4,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym__offset,
    STATE(263), 1,
      sym__relative,
  [3436] = 4,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      anon_sym_SQUOTE,
    ACTIONS(619), 1,
      aux_sym__string_token1,
    STATE(152), 1,
      sym__string,
  [3449] = 3,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    ACTIONS(621), 1,
      aux_sym_origin_token1,
    STATE(119), 1,
      sym_offset,
  [3459] = 3,
    ACTIONS(623), 1,
      aux_sym__input_id_token1,
    STATE(68), 1,
      sym_name,
    STATE(144), 1,
      sym__component,
  [3469] = 3,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__offset,
    STATE(280), 1,
      sym__relative,
  [3479] = 3,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__offset,
    STATE(279), 1,
      sym__relative,
  [3489] = 3,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    ACTIONS(625), 1,
      aux_sym_origin_token1,
    STATE(116), 1,
      sym_offset,
  [3499] = 3,
    ACTIONS(623), 1,
      aux_sym__input_id_token1,
    STATE(68), 1,
      sym_name,
    STATE(143), 1,
      sym__component,
  [3509] = 3,
    ACTIONS(623), 1,
      aux_sym__input_id_token1,
    STATE(68), 1,
      sym_name,
    STATE(142), 1,
      sym__component,
  [3519] = 3,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__offset,
    STATE(281), 1,
      sym__relative,
  [3529] = 3,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(49), 1,
      sym_name,
    STATE(157), 1,
      sym_decoration,
  [3539] = 3,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__offset,
    STATE(282), 1,
      sym__relative,
  [3549] = 3,
    ACTIONS(629), 1,
      aux_sym__offset_attr_token1,
    STATE(137), 1,
      sym__offset_xy_attr,
    STATE(274), 1,
      sym__offset_attr,
  [3559] = 3,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      aux_sym__guide_id_token1,
    STATE(242), 1,
      sym__component_id,
  [3569] = 3,
    ACTIONS(635), 1,
      aux_sym__label_id_token1,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(639), 1,
      anon_sym_SQUOTE,
  [3579] = 3,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__offset,
    STATE(283), 1,
      sym__relative,
  [3589] = 3,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      sym_offset,
  [3599] = 3,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__offset,
    STATE(284), 1,
      sym__relative,
  [3609] = 3,
    ACTIONS(55), 1,
      sym_rgb,
    ACTIONS(57), 1,
      sym_rgba,
    STATE(152), 1,
      sym_colour,
  [3619] = 3,
    ACTIONS(643), 1,
      anon_sym_name,
    ACTIONS(645), 1,
      anon_sym_height,
    ACTIONS(647), 1,
      anon_sym_width,
  [3629] = 3,
    ACTIONS(623), 1,
      aux_sym__input_id_token1,
    STATE(68), 1,
      sym_name,
    STATE(131), 1,
      sym__component,
  [3639] = 3,
    ACTIONS(623), 1,
      aux_sym__input_id_token1,
    STATE(68), 1,
      sym_name,
    STATE(146), 1,
      sym__component,
  [3649] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(200), 1,
      sym_name,
  [3656] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(208), 1,
      sym_name,
  [3663] = 2,
    ACTIONS(629), 1,
      aux_sym__offset_attr_token1,
    STATE(137), 1,
      sym__offset_attr,
  [3670] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(206), 1,
      sym_name,
  [3677] = 2,
    ACTIONS(629), 1,
      aux_sym__offset_attr_token1,
    STATE(135), 1,
      sym__offset_attr,
  [3684] = 2,
    ACTIONS(585), 1,
      aux_sym__originy_token1,
    STATE(112), 1,
      sym__originy,
  [3691] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(202), 1,
      sym_name,
  [3698] = 2,
    ACTIONS(199), 1,
      aux_sym__offset_attr_token1,
    STATE(106), 1,
      sym__relative_attr,
  [3705] = 1,
    ACTIONS(649), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [3710] = 2,
    ACTIONS(651), 1,
      aux_sym__guide_attr_token1,
    STATE(101), 1,
      sym__guide_attr,
  [3717] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(195), 1,
      sym_name,
  [3724] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(196), 1,
      sym_name,
  [3731] = 2,
    ACTIONS(653), 1,
      sym_rgb,
    ACTIONS(655), 1,
      sym_rgba,
  [3738] = 2,
    ACTIONS(629), 1,
      aux_sym__offset_attr_token1,
    STATE(130), 1,
      sym__offset_attr,
  [3745] = 1,
    ACTIONS(657), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3750] = 2,
    ACTIONS(659), 1,
      anon_sym_scale,
    ACTIONS(661), 1,
      anon_sym_stretch,
  [3757] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(183), 1,
      sym_name,
  [3764] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(191), 1,
      sym_name,
  [3771] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(189), 1,
      sym_name,
  [3778] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(190), 1,
      sym_name,
  [3785] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [3792] = 2,
    ACTIONS(663), 1,
      anon_sym_project,
    ACTIONS(665), 1,
      anon_sym_script,
  [3799] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(151), 1,
      sym_name,
  [3806] = 2,
    ACTIONS(589), 1,
      aux_sym_offset_token1,
    STATE(292), 1,
      sym__offset,
  [3813] = 2,
    ACTIONS(165), 1,
      aux_sym_offset_token1,
    STATE(139), 1,
      sym_offset,
  [3820] = 2,
    ACTIONS(667), 1,
      sym_height,
    ACTIONS(669), 1,
      sym_width,
  [3827] = 2,
    ACTIONS(671), 1,
      anon_sym_svg,
    STATE(126), 1,
      sym_svg,
  [3834] = 2,
    ACTIONS(673), 1,
      aux_sym__input_id_token1,
    STATE(152), 1,
      sym_font,
  [3841] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(238), 1,
      sym_name,
  [3848] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(41), 1,
      sym_name,
  [3855] = 2,
    ACTIONS(675), 1,
      aux_sym__absolute_attr_token1,
    STATE(250), 1,
      sym__absolute_x_attr,
  [3862] = 2,
    ACTIONS(677), 1,
      aux_sym__absolute_attr_token1,
    STATE(147), 1,
      sym__absolute_y_attr,
  [3869] = 2,
    ACTIONS(679), 1,
      aux_sym__input_id_token1,
    STATE(168), 1,
      sym_part,
  [3876] = 2,
    ACTIONS(627), 1,
      aux_sym__input_id_token1,
    STATE(168), 1,
      sym_name,
  [3883] = 2,
    ACTIONS(681), 1,
      aux_sym__guide_attr_token1,
    STATE(163), 1,
      sym_identifier,
  [3890] = 2,
    ACTIONS(583), 1,
      aux_sym__originx_token1,
    STATE(112), 1,
      sym__originx,
  [3897] = 1,
    ACTIONS(683), 1,
      anon_sym_COMMA,
  [3901] = 1,
    ACTIONS(685), 1,
      anon_sym_COMMA,
  [3905] = 1,
    ACTIONS(687), 1,
      anon_sym_COMMA,
  [3909] = 1,
    ACTIONS(689), 1,
      anon_sym_COMMA,
  [3913] = 1,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [3917] = 1,
    ACTIONS(693), 1,
      aux_sym_relative_token1,
  [3921] = 1,
    ACTIONS(695), 1,
      anon_sym_timestamp,
  [3925] = 1,
    ACTIONS(697), 1,
      aux_sym__input_id_token1,
  [3929] = 1,
    ACTIONS(699), 1,
      aux_sym_origin_token1,
  [3933] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [3937] = 1,
    ACTIONS(703), 1,
      anon_sym_COMMA,
  [3941] = 1,
    ACTIONS(705), 1,
      anon_sym_with,
  [3945] = 1,
    ACTIONS(707), 1,
      anon_sym_COMMA,
  [3949] = 1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [3953] = 1,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [3957] = 1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [3961] = 1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [3965] = 1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [3969] = 1,
    ACTIONS(695), 1,
      anon_sym_gzip,
  [3973] = 1,
    ACTIONS(719), 1,
      anon_sym_COMMA,
  [3977] = 1,
    ACTIONS(721), 1,
      aux_sym_absolute_token1,
  [3981] = 1,
    ACTIONS(723), 1,
      aux_sym_origin_token1,
  [3985] = 1,
    ACTIONS(725), 1,
      aux_sym__scale_token1,
  [3989] = 1,
    ACTIONS(727), 1,
      aux_sym__scale_token1,
  [3993] = 1,
    ACTIONS(729), 1,
      aux_sym__scale_token1,
  [3997] = 1,
    ACTIONS(731), 1,
      anon_sym_COMMA,
  [4001] = 1,
    ACTIONS(733), 1,
      anon_sym_COMMA,
  [4005] = 1,
    ACTIONS(735), 1,
      anon_sym_COMMA,
  [4009] = 1,
    ACTIONS(737), 1,
      anon_sym_COMMA,
  [4013] = 1,
    ACTIONS(739), 1,
      sym_rgba,
  [4017] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [4021] = 1,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [4025] = 1,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
  [4029] = 1,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
  [4033] = 1,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
  [4037] = 1,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
  [4041] = 1,
    ACTIONS(739), 1,
      sym_rgb,
  [4045] = 1,
    ACTIONS(753), 1,
      anon_sym_COMMA,
  [4049] = 1,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
  [4053] = 1,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
  [4057] = 1,
    ACTIONS(757), 1,
      anon_sym_DQUOTE,
  [4061] = 1,
    ACTIONS(759), 1,
      anon_sym_COMMA,
  [4065] = 1,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
  [4069] = 1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
  [4073] = 1,
    ACTIONS(765), 1,
      anon_sym_SQUOTE,
  [4077] = 1,
    ACTIONS(765), 1,
      anon_sym_DQUOTE,
  [4081] = 1,
    ACTIONS(767), 1,
      anon_sym_COMMA,
  [4085] = 1,
    ACTIONS(769), 1,
      anon_sym_COMMA,
  [4089] = 1,
    ACTIONS(771), 1,
      aux_sym_absolute_token1,
  [4093] = 1,
    ACTIONS(773), 1,
      anon_sym_LPAREN,
  [4097] = 1,
    ACTIONS(775), 1,
      aux_sym_origin_token1,
  [4101] = 1,
    ACTIONS(777), 1,
      sym_width,
  [4105] = 1,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
  [4109] = 1,
    ACTIONS(781), 1,
      sym_fontsize,
  [4113] = 1,
    ACTIONS(783), 1,
      aux_sym__absolute_attr_token1,
  [4117] = 1,
    ACTIONS(785), 1,
      anon_sym_COMMA,
  [4121] = 1,
    ACTIONS(661), 1,
      anon_sym_stretch,
  [4125] = 1,
    ACTIONS(787), 1,
      aux_sym_origin_token1,
  [4129] = 1,
    ACTIONS(789), 1,
      aux_sym__label_id_token3,
  [4133] = 1,
    ACTIONS(791), 1,
      aux_sym__label_id_token2,
  [4137] = 1,
    ACTIONS(793), 1,
      sym_width,
  [4141] = 1,
    ACTIONS(793), 1,
      sym_height,
  [4145] = 1,
    ACTIONS(795), 1,
      aux_sym__label_id_token3,
  [4149] = 1,
    ACTIONS(797), 1,
      aux_sym__label_id_token2,
  [4153] = 1,
    ACTIONS(799), 1,
      aux_sym__input_id_token1,
  [4157] = 1,
    ACTIONS(801), 1,
      aux_sym__input_id_token1,
  [4161] = 1,
    ACTIONS(803), 1,
      aux_sym__input_id_token1,
  [4165] = 1,
    ACTIONS(805), 1,
      aux_sym__input_id_token1,
  [4169] = 1,
    ACTIONS(807), 1,
      aux_sym__input_id_token1,
  [4173] = 1,
    ACTIONS(809), 1,
      aux_sym__guide_id_token1,
  [4177] = 1,
    ACTIONS(811), 1,
      ts_builtin_sym_end,
  [4181] = 1,
    ACTIONS(813), 1,
      aux_sym__guide_id_token1,
  [4185] = 1,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
  [4189] = 1,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
  [4193] = 1,
    ACTIONS(817), 1,
      aux_sym_relative_token1,
  [4197] = 1,
    ACTIONS(819), 1,
      aux_sym_absolute_token1,
  [4201] = 1,
    ACTIONS(821), 1,
      aux_sym__label_id_token2,
  [4205] = 1,
    ACTIONS(823), 1,
      aux_sym__label_id_token3,
  [4209] = 1,
    ACTIONS(825), 1,
      anon_sym_COMMA,
  [4213] = 1,
    ACTIONS(827), 1,
      anon_sym_COMMA,
  [4217] = 1,
    ACTIONS(829), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 210,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 297,
  [SMALL_STATE(9)] = 329,
  [SMALL_STATE(10)] = 371,
  [SMALL_STATE(11)] = 413,
  [SMALL_STATE(12)] = 455,
  [SMALL_STATE(13)] = 481,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 533,
  [SMALL_STATE(16)] = 559,
  [SMALL_STATE(17)] = 585,
  [SMALL_STATE(18)] = 611,
  [SMALL_STATE(19)] = 637,
  [SMALL_STATE(20)] = 663,
  [SMALL_STATE(21)] = 689,
  [SMALL_STATE(22)] = 715,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 765,
  [SMALL_STATE(25)] = 790,
  [SMALL_STATE(26)] = 826,
  [SMALL_STATE(27)] = 864,
  [SMALL_STATE(28)] = 898,
  [SMALL_STATE(29)] = 920,
  [SMALL_STATE(30)] = 958,
  [SMALL_STATE(31)] = 989,
  [SMALL_STATE(32)] = 1024,
  [SMALL_STATE(33)] = 1044,
  [SMALL_STATE(34)] = 1064,
  [SMALL_STATE(35)] = 1084,
  [SMALL_STATE(36)] = 1104,
  [SMALL_STATE(37)] = 1132,
  [SMALL_STATE(38)] = 1166,
  [SMALL_STATE(39)] = 1186,
  [SMALL_STATE(40)] = 1220,
  [SMALL_STATE(41)] = 1238,
  [SMALL_STATE(42)] = 1256,
  [SMALL_STATE(43)] = 1277,
  [SMALL_STATE(44)] = 1296,
  [SMALL_STATE(45)] = 1321,
  [SMALL_STATE(46)] = 1346,
  [SMALL_STATE(47)] = 1371,
  [SMALL_STATE(48)] = 1388,
  [SMALL_STATE(49)] = 1405,
  [SMALL_STATE(50)] = 1426,
  [SMALL_STATE(51)] = 1445,
  [SMALL_STATE(52)] = 1464,
  [SMALL_STATE(53)] = 1483,
  [SMALL_STATE(54)] = 1504,
  [SMALL_STATE(55)] = 1525,
  [SMALL_STATE(56)] = 1546,
  [SMALL_STATE(57)] = 1567,
  [SMALL_STATE(58)] = 1588,
  [SMALL_STATE(59)] = 1606,
  [SMALL_STATE(60)] = 1630,
  [SMALL_STATE(61)] = 1654,
  [SMALL_STATE(62)] = 1672,
  [SMALL_STATE(63)] = 1688,
  [SMALL_STATE(64)] = 1706,
  [SMALL_STATE(65)] = 1722,
  [SMALL_STATE(66)] = 1744,
  [SMALL_STATE(67)] = 1776,
  [SMALL_STATE(68)] = 1792,
  [SMALL_STATE(69)] = 1816,
  [SMALL_STATE(70)] = 1836,
  [SMALL_STATE(71)] = 1854,
  [SMALL_STATE(72)] = 1872,
  [SMALL_STATE(73)] = 1888,
  [SMALL_STATE(74)] = 1908,
  [SMALL_STATE(75)] = 1924,
  [SMALL_STATE(76)] = 1937,
  [SMALL_STATE(77)] = 1952,
  [SMALL_STATE(78)] = 1967,
  [SMALL_STATE(79)] = 1980,
  [SMALL_STATE(80)] = 1995,
  [SMALL_STATE(81)] = 2010,
  [SMALL_STATE(82)] = 2033,
  [SMALL_STATE(83)] = 2048,
  [SMALL_STATE(84)] = 2061,
  [SMALL_STATE(85)] = 2074,
  [SMALL_STATE(86)] = 2089,
  [SMALL_STATE(87)] = 2112,
  [SMALL_STATE(88)] = 2127,
  [SMALL_STATE(89)] = 2140,
  [SMALL_STATE(90)] = 2163,
  [SMALL_STATE(91)] = 2178,
  [SMALL_STATE(92)] = 2193,
  [SMALL_STATE(93)] = 2206,
  [SMALL_STATE(94)] = 2221,
  [SMALL_STATE(95)] = 2234,
  [SMALL_STATE(96)] = 2249,
  [SMALL_STATE(97)] = 2262,
  [SMALL_STATE(98)] = 2274,
  [SMALL_STATE(99)] = 2286,
  [SMALL_STATE(100)] = 2298,
  [SMALL_STATE(101)] = 2310,
  [SMALL_STATE(102)] = 2322,
  [SMALL_STATE(103)] = 2334,
  [SMALL_STATE(104)] = 2346,
  [SMALL_STATE(105)] = 2358,
  [SMALL_STATE(106)] = 2370,
  [SMALL_STATE(107)] = 2382,
  [SMALL_STATE(108)] = 2394,
  [SMALL_STATE(109)] = 2406,
  [SMALL_STATE(110)] = 2418,
  [SMALL_STATE(111)] = 2430,
  [SMALL_STATE(112)] = 2442,
  [SMALL_STATE(113)] = 2454,
  [SMALL_STATE(114)] = 2466,
  [SMALL_STATE(115)] = 2478,
  [SMALL_STATE(116)] = 2490,
  [SMALL_STATE(117)] = 2502,
  [SMALL_STATE(118)] = 2514,
  [SMALL_STATE(119)] = 2526,
  [SMALL_STATE(120)] = 2538,
  [SMALL_STATE(121)] = 2550,
  [SMALL_STATE(122)] = 2562,
  [SMALL_STATE(123)] = 2574,
  [SMALL_STATE(124)] = 2586,
  [SMALL_STATE(125)] = 2598,
  [SMALL_STATE(126)] = 2610,
  [SMALL_STATE(127)] = 2622,
  [SMALL_STATE(128)] = 2634,
  [SMALL_STATE(129)] = 2646,
  [SMALL_STATE(130)] = 2658,
  [SMALL_STATE(131)] = 2670,
  [SMALL_STATE(132)] = 2682,
  [SMALL_STATE(133)] = 2694,
  [SMALL_STATE(134)] = 2706,
  [SMALL_STATE(135)] = 2718,
  [SMALL_STATE(136)] = 2730,
  [SMALL_STATE(137)] = 2742,
  [SMALL_STATE(138)] = 2754,
  [SMALL_STATE(139)] = 2766,
  [SMALL_STATE(140)] = 2778,
  [SMALL_STATE(141)] = 2790,
  [SMALL_STATE(142)] = 2802,
  [SMALL_STATE(143)] = 2814,
  [SMALL_STATE(144)] = 2826,
  [SMALL_STATE(145)] = 2838,
  [SMALL_STATE(146)] = 2850,
  [SMALL_STATE(147)] = 2862,
  [SMALL_STATE(148)] = 2874,
  [SMALL_STATE(149)] = 2886,
  [SMALL_STATE(150)] = 2898,
  [SMALL_STATE(151)] = 2910,
  [SMALL_STATE(152)] = 2922,
  [SMALL_STATE(153)] = 2934,
  [SMALL_STATE(154)] = 2956,
  [SMALL_STATE(155)] = 2968,
  [SMALL_STATE(156)] = 2980,
  [SMALL_STATE(157)] = 2992,
  [SMALL_STATE(158)] = 3004,
  [SMALL_STATE(159)] = 3016,
  [SMALL_STATE(160)] = 3028,
  [SMALL_STATE(161)] = 3040,
  [SMALL_STATE(162)] = 3052,
  [SMALL_STATE(163)] = 3064,
  [SMALL_STATE(164)] = 3076,
  [SMALL_STATE(165)] = 3088,
  [SMALL_STATE(166)] = 3100,
  [SMALL_STATE(167)] = 3112,
  [SMALL_STATE(168)] = 3124,
  [SMALL_STATE(169)] = 3136,
  [SMALL_STATE(170)] = 3149,
  [SMALL_STATE(171)] = 3162,
  [SMALL_STATE(172)] = 3183,
  [SMALL_STATE(173)] = 3200,
  [SMALL_STATE(174)] = 3219,
  [SMALL_STATE(175)] = 3229,
  [SMALL_STATE(176)] = 3239,
  [SMALL_STATE(177)] = 3249,
  [SMALL_STATE(178)] = 3259,
  [SMALL_STATE(179)] = 3269,
  [SMALL_STATE(180)] = 3279,
  [SMALL_STATE(181)] = 3295,
  [SMALL_STATE(182)] = 3311,
  [SMALL_STATE(183)] = 3327,
  [SMALL_STATE(184)] = 3340,
  [SMALL_STATE(185)] = 3351,
  [SMALL_STATE(186)] = 3360,
  [SMALL_STATE(187)] = 3371,
  [SMALL_STATE(188)] = 3384,
  [SMALL_STATE(189)] = 3397,
  [SMALL_STATE(190)] = 3410,
  [SMALL_STATE(191)] = 3423,
  [SMALL_STATE(192)] = 3436,
  [SMALL_STATE(193)] = 3449,
  [SMALL_STATE(194)] = 3459,
  [SMALL_STATE(195)] = 3469,
  [SMALL_STATE(196)] = 3479,
  [SMALL_STATE(197)] = 3489,
  [SMALL_STATE(198)] = 3499,
  [SMALL_STATE(199)] = 3509,
  [SMALL_STATE(200)] = 3519,
  [SMALL_STATE(201)] = 3529,
  [SMALL_STATE(202)] = 3539,
  [SMALL_STATE(203)] = 3549,
  [SMALL_STATE(204)] = 3559,
  [SMALL_STATE(205)] = 3569,
  [SMALL_STATE(206)] = 3579,
  [SMALL_STATE(207)] = 3589,
  [SMALL_STATE(208)] = 3599,
  [SMALL_STATE(209)] = 3609,
  [SMALL_STATE(210)] = 3619,
  [SMALL_STATE(211)] = 3629,
  [SMALL_STATE(212)] = 3639,
  [SMALL_STATE(213)] = 3649,
  [SMALL_STATE(214)] = 3656,
  [SMALL_STATE(215)] = 3663,
  [SMALL_STATE(216)] = 3670,
  [SMALL_STATE(217)] = 3677,
  [SMALL_STATE(218)] = 3684,
  [SMALL_STATE(219)] = 3691,
  [SMALL_STATE(220)] = 3698,
  [SMALL_STATE(221)] = 3705,
  [SMALL_STATE(222)] = 3710,
  [SMALL_STATE(223)] = 3717,
  [SMALL_STATE(224)] = 3724,
  [SMALL_STATE(225)] = 3731,
  [SMALL_STATE(226)] = 3738,
  [SMALL_STATE(227)] = 3745,
  [SMALL_STATE(228)] = 3750,
  [SMALL_STATE(229)] = 3757,
  [SMALL_STATE(230)] = 3764,
  [SMALL_STATE(231)] = 3771,
  [SMALL_STATE(232)] = 3778,
  [SMALL_STATE(233)] = 3785,
  [SMALL_STATE(234)] = 3792,
  [SMALL_STATE(235)] = 3799,
  [SMALL_STATE(236)] = 3806,
  [SMALL_STATE(237)] = 3813,
  [SMALL_STATE(238)] = 3820,
  [SMALL_STATE(239)] = 3827,
  [SMALL_STATE(240)] = 3834,
  [SMALL_STATE(241)] = 3841,
  [SMALL_STATE(242)] = 3848,
  [SMALL_STATE(243)] = 3855,
  [SMALL_STATE(244)] = 3862,
  [SMALL_STATE(245)] = 3869,
  [SMALL_STATE(246)] = 3876,
  [SMALL_STATE(247)] = 3883,
  [SMALL_STATE(248)] = 3890,
  [SMALL_STATE(249)] = 3897,
  [SMALL_STATE(250)] = 3901,
  [SMALL_STATE(251)] = 3905,
  [SMALL_STATE(252)] = 3909,
  [SMALL_STATE(253)] = 3913,
  [SMALL_STATE(254)] = 3917,
  [SMALL_STATE(255)] = 3921,
  [SMALL_STATE(256)] = 3925,
  [SMALL_STATE(257)] = 3929,
  [SMALL_STATE(258)] = 3933,
  [SMALL_STATE(259)] = 3937,
  [SMALL_STATE(260)] = 3941,
  [SMALL_STATE(261)] = 3945,
  [SMALL_STATE(262)] = 3949,
  [SMALL_STATE(263)] = 3953,
  [SMALL_STATE(264)] = 3957,
  [SMALL_STATE(265)] = 3961,
  [SMALL_STATE(266)] = 3965,
  [SMALL_STATE(267)] = 3969,
  [SMALL_STATE(268)] = 3973,
  [SMALL_STATE(269)] = 3977,
  [SMALL_STATE(270)] = 3981,
  [SMALL_STATE(271)] = 3985,
  [SMALL_STATE(272)] = 3989,
  [SMALL_STATE(273)] = 3993,
  [SMALL_STATE(274)] = 3997,
  [SMALL_STATE(275)] = 4001,
  [SMALL_STATE(276)] = 4005,
  [SMALL_STATE(277)] = 4009,
  [SMALL_STATE(278)] = 4013,
  [SMALL_STATE(279)] = 4017,
  [SMALL_STATE(280)] = 4021,
  [SMALL_STATE(281)] = 4025,
  [SMALL_STATE(282)] = 4029,
  [SMALL_STATE(283)] = 4033,
  [SMALL_STATE(284)] = 4037,
  [SMALL_STATE(285)] = 4041,
  [SMALL_STATE(286)] = 4045,
  [SMALL_STATE(287)] = 4049,
  [SMALL_STATE(288)] = 4053,
  [SMALL_STATE(289)] = 4057,
  [SMALL_STATE(290)] = 4061,
  [SMALL_STATE(291)] = 4065,
  [SMALL_STATE(292)] = 4069,
  [SMALL_STATE(293)] = 4073,
  [SMALL_STATE(294)] = 4077,
  [SMALL_STATE(295)] = 4081,
  [SMALL_STATE(296)] = 4085,
  [SMALL_STATE(297)] = 4089,
  [SMALL_STATE(298)] = 4093,
  [SMALL_STATE(299)] = 4097,
  [SMALL_STATE(300)] = 4101,
  [SMALL_STATE(301)] = 4105,
  [SMALL_STATE(302)] = 4109,
  [SMALL_STATE(303)] = 4113,
  [SMALL_STATE(304)] = 4117,
  [SMALL_STATE(305)] = 4121,
  [SMALL_STATE(306)] = 4125,
  [SMALL_STATE(307)] = 4129,
  [SMALL_STATE(308)] = 4133,
  [SMALL_STATE(309)] = 4137,
  [SMALL_STATE(310)] = 4141,
  [SMALL_STATE(311)] = 4145,
  [SMALL_STATE(312)] = 4149,
  [SMALL_STATE(313)] = 4153,
  [SMALL_STATE(314)] = 4157,
  [SMALL_STATE(315)] = 4161,
  [SMALL_STATE(316)] = 4165,
  [SMALL_STATE(317)] = 4169,
  [SMALL_STATE(318)] = 4173,
  [SMALL_STATE(319)] = 4177,
  [SMALL_STATE(320)] = 4181,
  [SMALL_STATE(321)] = 4185,
  [SMALL_STATE(322)] = 4189,
  [SMALL_STATE(323)] = 4193,
  [SMALL_STATE(324)] = 4197,
  [SMALL_STATE(325)] = 4201,
  [SMALL_STATE(326)] = 4205,
  [SMALL_STATE(327)] = 4209,
  [SMALL_STATE(328)] = 4213,
  [SMALL_STATE(329)] = 4217,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 9),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 9),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(25),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(298),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(31),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(234),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(184),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(186),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 13),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 21),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 13),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 13),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 10),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 6),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 10),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 9),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 8),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 11),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 8),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 7),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 7),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 11),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 15),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [811] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
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
