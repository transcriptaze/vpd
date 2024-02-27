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
#define STATE_COUNT 333
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 179
#define ALIAS_COUNT 1
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 23

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
  anon_sym_list = 62,
  anon_sym_fonts = 63,
  anon_sym_timestamp = 64,
  anon_sym_gzip = 65,
  aux_sym_parameter_token1 = 66,
  sym_fontsize = 67,
  anon_sym_baseline = 68,
  anon_sym_scale = 69,
  aux_sym__scale_token1 = 70,
  anon_sym_stretch = 71,
  anon_sym_origin = 72,
  aux_sym_origin_token1 = 73,
  aux_sym__originx_token1 = 74,
  aux_sym__originy_token1 = 75,
  anon_sym_background = 76,
  anon_sym_none = 77,
  sym_rgb = 78,
  sym_rgba = 79,
  anon_sym_panel = 80,
  anon_sym_svg = 81,
  anon_sym_dark = 82,
  sym_height = 83,
  sym_width = 84,
  anon_sym_vertical = 85,
  anon_sym_horizontal = 86,
  aux_sym_offset_token1 = 87,
  aux_sym__string_token1 = 88,
  aux_sym_absolute_token1 = 89,
  aux_sym_relative_token1 = 90,
  sym_command = 91,
  sym_new = 92,
  sym_set = 93,
  sym__module_attr = 94,
  sym__component_attr = 95,
  sym__label_attr = 96,
  sym__decoration_attr = 97,
  sym__guideline_attr = 98,
  sym__x_attr = 99,
  sym__y_attr = 100,
  sym__xy_attr = 101,
  sym__offset_attr = 102,
  sym__offset_xy_attr = 103,
  sym__absolute_attr = 104,
  sym__absolute_x_attr = 105,
  sym__absolute_y_attr = 106,
  sym__absolute_xy_attr = 107,
  sym__relative_attr = 108,
  sym__relative_xy_attr = 109,
  sym__geometry_x_attr = 110,
  sym__geometry_y_attr = 111,
  sym__geometry_xy_attr = 112,
  sym__guide_attr = 113,
  sym__guide_xy_attr = 114,
  sym_decorate = 115,
  sym_delete = 116,
  sym__guide_id = 117,
  sym__input_id = 118,
  sym__output_id = 119,
  sym__parameter_id = 120,
  sym__light_id = 121,
  sym__widget_id = 122,
  sym__label_id = 123,
  sym__decoration_id = 124,
  sym__component_id = 125,
  sym_load = 126,
  sym_save = 127,
  sym_export = 128,
  sym__module_export = 129,
  sym_list = 130,
  sym_project = 131,
  sym_script = 132,
  sym__entity = 133,
  sym__input = 134,
  sym__output = 135,
  sym__parameter = 136,
  sym__light = 137,
  sym__widget = 138,
  sym_module = 139,
  sym_input = 140,
  sym_output = 141,
  sym_parameter = 142,
  sym_light = 143,
  sym_widget = 144,
  sym__component = 145,
  sym_label = 146,
  sym_font = 147,
  sym__align = 148,
  sym_halign = 149,
  sym_valign = 150,
  sym_colour = 151,
  sym_decoration = 152,
  sym__scale = 153,
  sym_stretch = 154,
  sym_origin = 155,
  sym__originx = 156,
  sym__originy = 157,
  sym_background = 158,
  sym_panel = 159,
  sym_svg = 160,
  sym_name = 161,
  sym_part = 162,
  sym_guide = 163,
  sym_identifier = 164,
  sym_vertical = 165,
  sym_horizontal = 166,
  sym_geometry = 167,
  sym_offset = 168,
  sym__offset = 169,
  sym_guideline = 170,
  sym__string = 171,
  sym_absolute = 172,
  sym_relative = 173,
  sym__decorate = 174,
  sym__relative = 175,
  sym_x = 176,
  sym_y = 177,
  aux_sym_command_repeat1 = 178,
  alias_sym_dy = 179,
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
  [anon_sym_list] = "list",
  [anon_sym_fonts] = "fonts",
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
  [sym_list] = "list",
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
  [anon_sym_list] = anon_sym_list,
  [anon_sym_fonts] = anon_sym_fonts,
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
  [sym_list] = sym_list,
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
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fonts] = {
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
  [sym_list] = {
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
    [1] = sym_font,
  },
  [2] = {
    [1] = sym_project,
  },
  [3] = {
    [1] = sym_script,
  },
  [4] = {
    [0] = aux_sym__originx_token1,
  },
  [5] = {
    [1] = sym_identifier,
  },
  [6] = {
    [1] = sym__xy_attr,
  },
  [7] = {
    [1] = aux_sym__originx_token1,
  },
  [8] = {
    [0] = sym_absolute,
  },
  [9] = {
    [2] = sym_y,
  },
  [10] = {
    [1] = sym_light,
  },
  [11] = {
    [1] = sym_absolute,
  },
  [12] = {
    [1] = aux_sym__string_token1,
  },
  [13] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [14] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [15] = {
    [3] = sym_y,
  },
  [16] = {
    [2] = alias_sym_dy,
  },
  [17] = {
    [1] = sym_input,
  },
  [18] = {
    [1] = sym_output,
  },
  [19] = {
    [1] = sym_parameter,
  },
  [20] = {
    [1] = sym_widget,
  },
  [21] = {
    [1] = sym_label,
  },
  [22] = {
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
  [53] = 53,
  [54] = 10,
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
  [77] = 19,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 19,
  [83] = 20,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 12,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 21,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 70,
  [98] = 74,
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
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 96,
  [173] = 27,
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
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 298,
  [324] = 254,
  [325] = 256,
  [326] = 274,
  [327] = 292,
  [328] = 309,
  [329] = 314,
  [330] = 272,
  [331] = 278,
  [332] = 270,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(327);
      if (lookahead == '"') ADVANCE(512);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '0') ADVANCE(352);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(338);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(512);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(569);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(514);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(510);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(443);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'v') ADVANCE(397);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'U') ADVANCE(561);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '5') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(563);
      if (lookahead == 'p') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '8') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(572);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(183);
      END_STATE();
    case 25:
      if (lookahead == '5') ADVANCE(183);
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 26:
      if (lookahead == ';') ADVANCE(328);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(532);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(203);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(236);
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
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(552);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(289);
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
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(254);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(267);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(126);
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(238);
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
      if (lookahead == 'h') ADVANCE(531);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(437);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(336);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(547);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 150:
      if (lookahead == 'j') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(560);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(568);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(562);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(571);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(430);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(522);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(537);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(536);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(551);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'z') ADVANCE(138);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 290:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 291:
      if (lookahead == 'w') ADVANCE(329);
      END_STATE();
    case 292:
      if (lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 293:
      if (lookahead == 'x') ADVANCE(256);
      END_STATE();
    case 294:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 295:
      if (lookahead == 'z') ADVANCE(217);
      END_STATE();
    case 296:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(572);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(300)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(556);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(557);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(555);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 320:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 321:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 322:
      if (eof) ADVANCE(327);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(444);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == 't') ADVANCE(481);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 323:
      if (eof) ADVANCE(327);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 324:
      if (eof) ADVANCE(327);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(436);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(338);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 325:
      if (eof) ADVANCE(327);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(143);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 326:
      if (eof) ADVANCE(327);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(38);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == 'H') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(432);
      if (lookahead == 'H') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(514);
      if (lookahead == '\'') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(570);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(511);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(516);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(570);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(511);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(183);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(513);
      if (lookahead == '\'') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(570);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 322},
  [3] = {.lex_state = 322},
  [4] = {.lex_state = 324},
  [5] = {.lex_state = 324},
  [6] = {.lex_state = 324},
  [7] = {.lex_state = 324},
  [8] = {.lex_state = 324},
  [9] = {.lex_state = 324},
  [10] = {.lex_state = 322},
  [11] = {.lex_state = 324},
  [12] = {.lex_state = 322},
  [13] = {.lex_state = 322},
  [14] = {.lex_state = 322},
  [15] = {.lex_state = 322},
  [16] = {.lex_state = 322},
  [17] = {.lex_state = 322},
  [18] = {.lex_state = 322},
  [19] = {.lex_state = 322},
  [20] = {.lex_state = 322},
  [21] = {.lex_state = 322},
  [22] = {.lex_state = 324},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 324},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 325},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 324},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 324},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 324},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 323},
  [55] = {.lex_state = 325},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 324},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 323},
  [61] = {.lex_state = 324},
  [62] = {.lex_state = 326},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 323},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 31},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 323},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 325},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 323},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 323},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 324},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 323},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 324},
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
  [125] = {.lex_state = 324},
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
  [145] = {.lex_state = 324},
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
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 30},
  [171] = {.lex_state = 30},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 324},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 325},
  [181] = {.lex_state = 324},
  [182] = {.lex_state = 324},
  [183] = {.lex_state = 324},
  [184] = {.lex_state = 324},
  [185] = {.lex_state = 322},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 322},
  [190] = {.lex_state = 322},
  [191] = {.lex_state = 322},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 322},
  [194] = {.lex_state = 324},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 322},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 322},
  [200] = {.lex_state = 322},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 322},
  [204] = {.lex_state = 28},
  [205] = {.lex_state = 322},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 322},
  [211] = {.lex_state = 322},
  [212] = {.lex_state = 322},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 322},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 322},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 322},
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 300},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 28},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 324},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 325},
  [248] = {.lex_state = 325},
  [249] = {.lex_state = 300},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 324},
  [252] = {.lex_state = 322},
  [253] = {.lex_state = 322},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
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
  [267] = {.lex_state = 322},
  [268] = {.lex_state = 322},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 323},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 324},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 326},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 324},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 323},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 326},
  [300] = {.lex_state = 326},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 515},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 322},
  [314] = {.lex_state = 520},
  [315] = {.lex_state = 520},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 515},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 324},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 323},
  [328] = {.lex_state = 515},
  [329] = {.lex_state = 520},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 323},
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
    [anon_sym_list] = ACTIONS(1),
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
    [sym_command] = STATE(318),
    [sym_new] = STATE(25),
    [sym_set] = STATE(25),
    [sym_decorate] = STATE(25),
    [sym_delete] = STATE(25),
    [sym_load] = STATE(25),
    [sym_save] = STATE(25),
    [sym_export] = STATE(25),
    [sym_list] = STATE(25),
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
    [anon_sym_list] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(31), 1,
      aux_sym__input_id_token1,
    ACTIONS(33), 1,
      sym_fontsize,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(6), 1,
      sym_font,
    STATE(46), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(112), 1,
      sym_colour,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(29), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(25), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [54] = 13,
    ACTIONS(31), 1,
      aux_sym__input_id_token1,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    ACTIONS(43), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(49), 1,
      sym__align,
    STATE(138), 1,
      sym_colour,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(29), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(41), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [108] = 16,
    ACTIONS(45), 1,
      anon_sym_module,
    ACTIONS(47), 1,
      anon_sym_guide,
    ACTIONS(49), 1,
      anon_sym_input,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light,
    ACTIONS(57), 1,
      anon_sym_widget,
    ACTIONS(59), 1,
      anon_sym_label,
    ACTIONS(61), 1,
      anon_sym_decoration,
    ACTIONS(63), 1,
      anon_sym_origin,
    ACTIONS(65), 1,
      anon_sym_background,
    STATE(32), 1,
      sym__guide_id,
    STATE(84), 1,
      sym__label_id,
    STATE(175), 1,
      sym__decoration_id,
    STATE(177), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(122), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [167] = 10,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    ACTIONS(73), 1,
      sym_fontsize,
    STATE(42), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(123), 1,
      sym_colour,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [213] = 10,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    ACTIONS(77), 1,
      sym_fontsize,
    STATE(45), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(106), 1,
      sym_colour,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [259] = 9,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(44), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(101), 1,
      sym_colour,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [302] = 9,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(42), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(123), 1,
      sym_colour,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [345] = 9,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(46), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(112), 1,
      sym_colour,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [388] = 4,
    ACTIONS(85), 1,
      aux_sym_offset_token1,
    STATE(21), 1,
      sym_offset,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(83), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [421] = 9,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(45), 1,
      sym__align,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(106), 1,
      sym_colour,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [464] = 2,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(89), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [491] = 2,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(93), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [518] = 2,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(97), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [545] = 2,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(101), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [572] = 2,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(105), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [599] = 2,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(109), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [626] = 2,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(113), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [653] = 2,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(117), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [680] = 2,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(121), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [707] = 2,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(125), 18,
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
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [734] = 2,
    ACTIONS(129), 1,
      sym_rgb,
    ACTIONS(127), 20,
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
      anon_sym_list,
      sym_fontsize,
      anon_sym_baseline,
      sym_rgba,
  [760] = 2,
    ACTIONS(133), 1,
      anon_sym_x,
    ACTIONS(131), 20,
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
      anon_sym_list,
  [786] = 2,
    ACTIONS(137), 1,
      anon_sym_x,
    ACTIONS(135), 20,
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
      anon_sym_list,
  [812] = 11,
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
    ACTIONS(21), 1,
      anon_sym_list,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_comment,
    STATE(26), 9,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [854] = 11,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_new,
    ACTIONS(151), 1,
      anon_sym_set,
    ACTIONS(154), 1,
      anon_sym_decorate,
    ACTIONS(157), 1,
      anon_sym_delete,
    ACTIONS(160), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_save,
    ACTIONS(166), 1,
      anon_sym_export,
    ACTIONS(169), 1,
      anon_sym_list,
    STATE(26), 9,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [896] = 2,
    ACTIONS(174), 2,
      anon_sym_x,
      sym_width,
    ACTIONS(172), 16,
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
      anon_sym_list,
      sym_height,
      aux_sym_offset_token1,
  [919] = 8,
    ACTIONS(178), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(180), 1,
      anon_sym_vertical,
    ACTIONS(182), 1,
      anon_sym_horizontal,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    STATE(142), 1,
      sym_offset,
    STATE(225), 1,
      sym_identifier,
    STATE(141), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(176), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [953] = 9,
    ACTIONS(186), 1,
      anon_sym_module,
    ACTIONS(188), 1,
      anon_sym_guide,
    ACTIONS(190), 1,
      anon_sym_input,
    ACTIONS(192), 1,
      anon_sym_output,
    ACTIONS(194), 1,
      anon_sym_light,
    ACTIONS(196), 1,
      anon_sym_widget,
    ACTIONS(198), 1,
      anon_sym_label,
    ACTIONS(200), 1,
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
  [989] = 2,
    ACTIONS(204), 1,
      anon_sym_x,
    ACTIONS(202), 15,
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
      anon_sym_list,
  [1010] = 2,
    ACTIONS(208), 1,
      anon_sym_x,
    ACTIONS(206), 15,
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
      anon_sym_list,
  [1031] = 7,
    ACTIONS(210), 1,
      anon_sym_id,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(220), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(218), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(216), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(107), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1062] = 2,
    ACTIONS(224), 1,
      anon_sym_x,
    ACTIONS(222), 15,
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
      anon_sym_list,
  [1083] = 2,
    ACTIONS(228), 1,
      anon_sym_x,
    ACTIONS(226), 15,
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
      anon_sym_list,
  [1104] = 2,
    ACTIONS(232), 1,
      anon_sym_x,
    ACTIONS(230), 15,
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
      anon_sym_list,
  [1125] = 9,
    ACTIONS(49), 1,
      anon_sym_input,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light,
    ACTIONS(57), 1,
      anon_sym_widget,
    ACTIONS(59), 1,
      anon_sym_label,
    ACTIONS(61), 1,
      anon_sym_decoration,
    ACTIONS(234), 1,
      anon_sym_guide,
    STATE(126), 8,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [1160] = 9,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(220), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(236), 1,
      anon_sym_AT,
    STATE(155), 1,
      sym__xy_attr,
    STATE(302), 1,
      sym__guide_attr,
    STATE(303), 1,
      sym__geometry_x_attr,
    STATE(304), 1,
      sym__relative_attr,
    ACTIONS(216), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(105), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1194] = 6,
    ACTIONS(178), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(180), 1,
      anon_sym_vertical,
    ACTIONS(182), 1,
      anon_sym_horizontal,
    STATE(28), 1,
      sym_identifier,
    STATE(156), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(176), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1222] = 9,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(220), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(236), 1,
      anon_sym_AT,
    STATE(157), 1,
      sym__xy_attr,
    STATE(302), 1,
      sym__guide_attr,
    STATE(303), 1,
      sym__geometry_x_attr,
    STATE(304), 1,
      sym__relative_attr,
    ACTIONS(216), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(105), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1256] = 2,
    ACTIONS(240), 1,
      anon_sym_x,
    ACTIONS(238), 13,
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
      anon_sym_list,
  [1275] = 2,
    ACTIONS(244), 1,
      anon_sym_x,
    ACTIONS(242), 13,
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
      anon_sym_list,
  [1294] = 4,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(112), 1,
      sym_colour,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1316] = 3,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    STATE(76), 1,
      sym_offset,
    ACTIONS(246), 11,
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
      anon_sym_list,
  [1336] = 4,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(100), 1,
      sym_colour,
    ACTIONS(248), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1358] = 4,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(101), 1,
      sym_colour,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1380] = 4,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(106), 1,
      sym_colour,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1402] = 3,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      sym_rgb,
    ACTIONS(250), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1422] = 3,
    ACTIONS(254), 1,
      sym_rgb,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(250), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1442] = 4,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(123), 1,
      sym_colour,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1464] = 4,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym__scale,
    STATE(109), 1,
      sym_stretch,
    ACTIONS(258), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1486] = 2,
    ACTIONS(264), 1,
      sym_rgb,
    ACTIONS(262), 12,
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
      anon_sym_list,
      sym_rgba,
  [1504] = 3,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    STATE(75), 1,
      sym_offset,
    ACTIONS(266), 11,
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
      anon_sym_list,
  [1524] = 2,
    ACTIONS(270), 1,
      sym_rgb,
    ACTIONS(268), 12,
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
      anon_sym_list,
      sym_rgba,
  [1542] = 4,
    ACTIONS(272), 1,
      aux_sym_offset_token1,
    STATE(93), 1,
      sym_offset,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(83), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1564] = 2,
    ACTIONS(276), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(274), 11,
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
      anon_sym_list,
  [1581] = 2,
    ACTIONS(280), 1,
      sym_rgb,
    ACTIONS(278), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1598] = 3,
    ACTIONS(284), 1,
      anon_sym_timestamp,
    ACTIONS(286), 1,
      anon_sym_gzip,
    ACTIONS(282), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1617] = 3,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    STATE(132), 1,
      sym_offset,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1636] = 6,
    ACTIONS(290), 1,
      anon_sym_AT,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      aux_sym_relative_token1,
    STATE(322), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(292), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1661] = 4,
    ACTIONS(302), 1,
      aux_sym__input_id_token1,
    STATE(146), 1,
      sym_part,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(300), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1682] = 3,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    STATE(150), 1,
      sym_offset,
    ACTIONS(304), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1701] = 2,
    ACTIONS(308), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(306), 11,
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
      anon_sym_list,
  [1718] = 6,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(220), 1,
      aux_sym__guide_attr_token1,
    STATE(155), 1,
      sym__x_attr,
    ACTIONS(216), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(151), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1743] = 4,
    ACTIONS(302), 1,
      aux_sym__input_id_token1,
    STATE(113), 1,
      sym_part,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(312), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1764] = 3,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_stretch,
    ACTIONS(314), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1783] = 3,
    ACTIONS(320), 1,
      anon_sym_light,
    ACTIONS(322), 1,
      anon_sym_dark,
    ACTIONS(318), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1802] = 6,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(220), 1,
      aux_sym__guide_attr_token1,
    STATE(157), 1,
      sym__x_attr,
    ACTIONS(216), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(151), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1827] = 1,
    ACTIONS(324), 11,
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
      anon_sym_list,
  [1841] = 2,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(326), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1857] = 2,
    ACTIONS(332), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(330), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [1873] = 1,
    ACTIONS(334), 11,
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
      anon_sym_list,
  [1887] = 1,
    ACTIONS(336), 11,
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
      anon_sym_list,
  [1901] = 6,
    ACTIONS(338), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      aux_sym_relative_token1,
    STATE(279), 1,
      sym_x,
    STATE(60), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(292), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1925] = 2,
    ACTIONS(346), 1,
      aux_sym_offset_token1,
    ACTIONS(344), 10,
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
  [1941] = 1,
    ACTIONS(348), 11,
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
      anon_sym_list,
  [1955] = 1,
    ACTIONS(350), 11,
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
      anon_sym_list,
  [1969] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(117), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1985] = 2,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(352), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2001] = 6,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(220), 1,
      aux_sym__guide_attr_token1,
    STATE(157), 1,
      sym__y_attr,
    ACTIONS(218), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(144), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2025] = 2,
    ACTIONS(358), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(356), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2041] = 2,
    ACTIONS(362), 1,
      anon_sym_timestamp,
    ACTIONS(360), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2057] = 1,
    ACTIONS(115), 11,
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
      anon_sym_list,
  [2071] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(121), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2087] = 10,
    ACTIONS(364), 1,
      anon_sym_x,
    ACTIONS(366), 1,
      anon_sym_y,
    ACTIONS(368), 1,
      anon_sym_xy,
    ACTIONS(370), 1,
      anon_sym_text,
    ACTIONS(372), 1,
      anon_sym_font,
    ACTIONS(374), 1,
      anon_sym_size,
    ACTIONS(376), 1,
      anon_sym_halign,
    ACTIONS(378), 1,
      anon_sym_valign,
    ACTIONS(380), 1,
      anon_sym_align,
    ACTIONS(382), 2,
      anon_sym_colour,
      anon_sym_color,
  [2119] = 1,
    ACTIONS(384), 11,
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
      anon_sym_list,
  [2133] = 6,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(214), 1,
      anon_sym_AT,
    ACTIONS(220), 1,
      aux_sym__guide_attr_token1,
    STATE(155), 1,
      sym__y_attr,
    ACTIONS(218), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(144), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2157] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(89), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2173] = 2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(386), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2189] = 2,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(386), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2205] = 5,
    STATE(47), 1,
      sym_valign,
    STATE(48), 1,
      sym_halign,
    STATE(155), 1,
      sym__align,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2227] = 1,
    ACTIONS(392), 11,
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
      anon_sym_list,
  [2241] = 2,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(326), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2257] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(125), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2273] = 1,
    ACTIONS(396), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2286] = 1,
    ACTIONS(398), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2299] = 1,
    ACTIONS(400), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2312] = 1,
    ACTIONS(332), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2325] = 1,
    ACTIONS(346), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2338] = 6,
    ACTIONS(49), 1,
      anon_sym_input,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light,
    ACTIONS(57), 1,
      anon_sym_widget,
    STATE(316), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [2361] = 1,
    ACTIONS(402), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2374] = 1,
    ACTIONS(248), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2387] = 1,
    ACTIONS(404), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2400] = 1,
    ACTIONS(386), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2413] = 1,
    ACTIONS(406), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2426] = 1,
    ACTIONS(408), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2439] = 1,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2452] = 1,
    ACTIONS(410), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2465] = 1,
    ACTIONS(412), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2478] = 1,
    ACTIONS(314), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2491] = 1,
    ACTIONS(414), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2504] = 1,
    ACTIONS(416), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2517] = 1,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2530] = 1,
    ACTIONS(418), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2543] = 1,
    ACTIONS(420), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2556] = 1,
    ACTIONS(422), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2569] = 1,
    ACTIONS(424), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2582] = 1,
    ACTIONS(426), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2595] = 1,
    ACTIONS(428), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2608] = 1,
    ACTIONS(430), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2621] = 1,
    ACTIONS(432), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2634] = 1,
    ACTIONS(434), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2647] = 1,
    ACTIONS(436), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2660] = 1,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2673] = 1,
    ACTIONS(438), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2686] = 6,
    ACTIONS(440), 1,
      anon_sym_input,
    ACTIONS(442), 1,
      anon_sym_output,
    ACTIONS(444), 1,
      anon_sym_parameter,
    ACTIONS(446), 1,
      anon_sym_light,
    ACTIONS(448), 1,
      anon_sym_widget,
    STATE(255), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2709] = 1,
    ACTIONS(450), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2722] = 1,
    ACTIONS(452), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2735] = 1,
    ACTIONS(454), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2748] = 1,
    ACTIONS(456), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2761] = 1,
    ACTIONS(458), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2774] = 1,
    ACTIONS(460), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2787] = 1,
    ACTIONS(462), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2800] = 1,
    ACTIONS(464), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2813] = 1,
    ACTIONS(466), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2826] = 1,
    ACTIONS(468), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2839] = 1,
    ACTIONS(470), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2852] = 1,
    ACTIONS(472), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2865] = 1,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2878] = 1,
    ACTIONS(474), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2891] = 1,
    ACTIONS(476), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2904] = 1,
    ACTIONS(478), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2917] = 1,
    ACTIONS(480), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2930] = 1,
    ACTIONS(482), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2943] = 1,
    ACTIONS(484), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2956] = 6,
    ACTIONS(440), 1,
      anon_sym_input,
    ACTIONS(442), 1,
      anon_sym_output,
    ACTIONS(444), 1,
      anon_sym_parameter,
    ACTIONS(446), 1,
      anon_sym_light,
    ACTIONS(448), 1,
      anon_sym_widget,
    STATE(276), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2979] = 1,
    ACTIONS(486), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2992] = 1,
    ACTIONS(488), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3005] = 1,
    ACTIONS(490), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3018] = 1,
    ACTIONS(492), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3031] = 1,
    ACTIONS(494), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3044] = 1,
    ACTIONS(496), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3057] = 1,
    ACTIONS(498), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3070] = 1,
    ACTIONS(500), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3083] = 1,
    ACTIONS(502), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3096] = 1,
    ACTIONS(504), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3109] = 1,
    ACTIONS(506), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3122] = 1,
    ACTIONS(508), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3135] = 1,
    ACTIONS(510), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3148] = 1,
    ACTIONS(512), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3161] = 1,
    ACTIONS(514), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3174] = 1,
    ACTIONS(516), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3187] = 1,
    ACTIONS(518), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3200] = 1,
    ACTIONS(520), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3213] = 1,
    ACTIONS(522), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3226] = 1,
    ACTIONS(524), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3239] = 1,
    ACTIONS(526), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3252] = 1,
    ACTIONS(528), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3265] = 1,
    ACTIONS(530), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3278] = 1,
    ACTIONS(532), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3291] = 6,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    ACTIONS(534), 1,
      anon_sym_AT,
    ACTIONS(538), 1,
      anon_sym_origin,
    ACTIONS(540), 1,
      aux_sym_origin_token1,
    STATE(136), 1,
      sym_offset,
    ACTIONS(536), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3313] = 6,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    ACTIONS(542), 1,
      anon_sym_AT,
    ACTIONS(544), 1,
      anon_sym_origin,
    ACTIONS(546), 1,
      aux_sym_origin_token1,
    STATE(139), 1,
      sym_offset,
    ACTIONS(536), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3334] = 2,
    ACTIONS(400), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(548), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3347] = 2,
    ACTIONS(172), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(174), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3360] = 6,
    ACTIONS(550), 1,
      anon_sym_input,
    ACTIONS(552), 1,
      anon_sym_output,
    ACTIONS(554), 1,
      anon_sym_parameter,
    ACTIONS(556), 1,
      anon_sym_light,
    ACTIONS(558), 1,
      anon_sym_widget,
    ACTIONS(560), 1,
      anon_sym_label,
  [3379] = 5,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_x,
    ACTIONS(564), 1,
      anon_sym_y,
    ACTIONS(566), 1,
      anon_sym_xy,
    STATE(120), 2,
      sym__scale,
      sym_stretch,
  [3396] = 2,
    STATE(64), 1,
      sym_y,
    ACTIONS(568), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3406] = 5,
    ACTIONS(570), 1,
      anon_sym_name,
    ACTIONS(572), 1,
      anon_sym_x,
    ACTIONS(574), 1,
      anon_sym_y,
    ACTIONS(576), 1,
      anon_sym_xy,
    ACTIONS(578), 1,
      anon_sym_part,
  [3422] = 5,
    ACTIONS(580), 1,
      aux_sym__input_id_token1,
    ACTIONS(582), 1,
      anon_sym_none,
    ACTIONS(584), 1,
      sym_rgb,
    ACTIONS(586), 1,
      sym_rgba,
    STATE(103), 1,
      sym_name,
  [3438] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(588), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3448] = 5,
    ACTIONS(590), 1,
      anon_sym_AT,
    ACTIONS(592), 1,
      aux_sym__originx_token1,
    ACTIONS(594), 1,
      aux_sym__originy_token1,
    STATE(310), 1,
      sym__originy,
    STATE(312), 1,
      sym__originx,
  [3464] = 2,
    STATE(155), 1,
      sym_valign,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3474] = 2,
    STATE(155), 1,
      sym_halign,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3484] = 2,
    STATE(56), 1,
      sym_valign,
    ACTIONS(71), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3494] = 2,
    STATE(56), 1,
      sym_halign,
    ACTIONS(69), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3504] = 4,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(261), 1,
      sym__relative,
    STATE(262), 1,
      sym__offset,
  [3517] = 4,
    ACTIONS(600), 1,
      anon_sym_DQUOTE,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      aux_sym__string_token1,
    STATE(155), 1,
      sym__string,
  [3530] = 3,
    ACTIONS(606), 1,
      anon_sym_project,
    ACTIONS(608), 1,
      anon_sym_script,
    STATE(143), 2,
      sym_project,
      sym_script,
  [3541] = 3,
    ACTIONS(610), 1,
      anon_sym_module,
    ACTIONS(612), 1,
      anon_sym_panel,
    STATE(162), 2,
      sym__module_export,
      sym_panel,
  [3552] = 4,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      sym__relative,
    STATE(262), 1,
      sym__offset,
  [3565] = 4,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym__relative,
    STATE(262), 1,
      sym__offset,
  [3578] = 4,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      sym__relative,
    STATE(262), 1,
      sym__offset,
  [3591] = 4,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_SQUOTE,
    ACTIONS(624), 1,
      aux_sym__string_token1,
    STATE(59), 1,
      sym__string,
  [3604] = 4,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      sym__relative,
    STATE(262), 1,
      sym__offset,
  [3617] = 2,
    STATE(118), 1,
      sym__geometry_y_attr,
    ACTIONS(628), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3626] = 3,
    ACTIONS(630), 1,
      aux_sym__input_id_token1,
    STATE(73), 1,
      sym_name,
    STATE(152), 1,
      sym__component,
  [3636] = 3,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(262), 1,
      sym__offset,
    STATE(283), 1,
      sym__relative,
  [3646] = 3,
    ACTIONS(630), 1,
      aux_sym__input_id_token1,
    STATE(73), 1,
      sym_name,
    STATE(158), 1,
      sym__component,
  [3656] = 3,
    ACTIONS(632), 1,
      anon_sym_name,
    ACTIONS(634), 1,
      anon_sym_height,
    ACTIONS(636), 1,
      anon_sym_width,
  [3666] = 3,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(262), 1,
      sym__offset,
    STATE(284), 1,
      sym__relative,
  [3676] = 3,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(262), 1,
      sym__offset,
    STATE(285), 1,
      sym__relative,
  [3686] = 3,
    ACTIONS(630), 1,
      aux_sym__input_id_token1,
    STATE(73), 1,
      sym_name,
    STATE(168), 1,
      sym__component,
  [3696] = 3,
    ACTIONS(630), 1,
      aux_sym__input_id_token1,
    STATE(73), 1,
      sym_name,
    STATE(161), 1,
      sym__component,
  [3706] = 3,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(262), 1,
      sym__offset,
    STATE(287), 1,
      sym__relative,
  [3716] = 3,
    ACTIONS(638), 1,
      aux_sym__offset_attr_token1,
    STATE(164), 1,
      sym__offset_xy_attr,
    STATE(301), 1,
      sym__offset_attr,
  [3726] = 3,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(262), 1,
      sym__offset,
    STATE(282), 1,
      sym__relative,
  [3736] = 3,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(50), 1,
      sym_name,
    STATE(114), 1,
      sym_decoration,
  [3746] = 3,
    ACTIONS(642), 1,
      aux_sym__label_id_token1,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
  [3756] = 3,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    ACTIONS(650), 1,
      aux_sym__guide_id_token1,
    STATE(250), 1,
      sym__component_id,
  [3766] = 3,
    ACTIONS(35), 1,
      sym_rgb,
    ACTIONS(37), 1,
      sym_rgba,
    STATE(155), 1,
      sym_colour,
  [3776] = 3,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    ACTIONS(652), 1,
      aux_sym_origin_token1,
    STATE(159), 1,
      sym_offset,
  [3786] = 3,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(262), 1,
      sym__offset,
    STATE(286), 1,
      sym__relative,
  [3796] = 3,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    ACTIONS(654), 1,
      aux_sym_origin_token1,
    STATE(147), 1,
      sym_offset,
  [3806] = 3,
    ACTIONS(630), 1,
      aux_sym__input_id_token1,
    STATE(73), 1,
      sym_name,
    STATE(167), 1,
      sym__component,
  [3816] = 3,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      sym_offset,
  [3826] = 3,
    ACTIONS(658), 1,
      anon_sym_font,
    ACTIONS(660), 1,
      anon_sym_project,
    ACTIONS(662), 1,
      anon_sym_script,
  [3836] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(154), 1,
      sym_name,
  [3843] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(196), 1,
      sym_name,
  [3850] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(199), 1,
      sym_name,
  [3857] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(200), 1,
      sym_name,
  [3864] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(211), 1,
      sym_name,
  [3871] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(203), 1,
      sym_name,
  [3878] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [3885] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(244), 1,
      sym_name,
  [3892] = 2,
    ACTIONS(664), 1,
      anon_sym_scale,
    ACTIONS(666), 1,
      anon_sym_stretch,
  [3899] = 2,
    ACTIONS(184), 1,
      aux_sym_offset_token1,
    STATE(142), 1,
      sym_offset,
  [3906] = 2,
    ACTIONS(638), 1,
      aux_sym__offset_attr_token1,
    STATE(165), 1,
      sym__offset_attr,
  [3913] = 1,
    ACTIONS(668), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [3918] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(185), 1,
      sym_name,
  [3925] = 2,
    ACTIONS(670), 1,
      aux_sym__absolute_attr_token1,
    STATE(110), 1,
      sym__absolute_y_attr,
  [3932] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(189), 1,
      sym_name,
  [3939] = 2,
    ACTIONS(638), 1,
      aux_sym__offset_attr_token1,
    STATE(164), 1,
      sym__offset_attr,
  [3946] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(193), 1,
      sym_name,
  [3953] = 2,
    ACTIONS(598), 1,
      aux_sym_offset_token1,
    STATE(295), 1,
      sym__offset,
  [3960] = 2,
    ACTIONS(212), 1,
      aux_sym__offset_attr_token1,
    STATE(119), 1,
      sym__relative_attr,
  [3967] = 2,
    ACTIONS(672), 1,
      aux_sym__input_id_token1,
    STATE(155), 1,
      sym_font,
  [3974] = 2,
    ACTIONS(674), 1,
      aux_sym__guide_attr_token1,
    STATE(117), 1,
      sym__guide_attr,
  [3981] = 2,
    ACTIONS(676), 1,
      aux_sym__input_id_token1,
    STATE(157), 1,
      sym_part,
  [3988] = 2,
    ACTIONS(678), 1,
      anon_sym_svg,
    STATE(129), 1,
      sym_svg,
  [3995] = 2,
    ACTIONS(680), 1,
      sym_rgb,
    ACTIONS(682), 1,
      sym_rgba,
  [4002] = 2,
    ACTIONS(638), 1,
      aux_sym__offset_attr_token1,
    STATE(115), 1,
      sym__offset_attr,
  [4009] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(190), 1,
      sym_name,
  [4016] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(191), 1,
      sym_name,
  [4023] = 1,
    ACTIONS(684), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4028] = 2,
    ACTIONS(686), 1,
      sym_height,
    ACTIONS(688), 1,
      sym_width,
  [4035] = 2,
    ACTIONS(690), 1,
      aux_sym__absolute_attr_token1,
    STATE(265), 1,
      sym__absolute_x_attr,
  [4042] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(157), 1,
      sym_name,
  [4049] = 2,
    ACTIONS(592), 1,
      aux_sym__originx_token1,
    STATE(95), 1,
      sym__originx,
  [4056] = 2,
    ACTIONS(594), 1,
      aux_sym__originy_token1,
    STATE(95), 1,
      sym__originy,
  [4063] = 2,
    ACTIONS(692), 1,
      aux_sym__guide_attr_token1,
    STATE(166), 1,
      sym_identifier,
  [4070] = 2,
    ACTIONS(640), 1,
      aux_sym__input_id_token1,
    STATE(40), 1,
      sym_name,
  [4077] = 1,
    ACTIONS(694), 1,
      sym_width,
  [4081] = 1,
    ACTIONS(696), 1,
      sym_fontsize,
  [4085] = 1,
    ACTIONS(698), 1,
      aux_sym_origin_token1,
  [4089] = 1,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
  [4093] = 1,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [4097] = 1,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
  [4101] = 1,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [4105] = 1,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [4109] = 1,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [4113] = 1,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
  [4117] = 1,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [4121] = 1,
    ACTIONS(714), 1,
      anon_sym_COMMA,
  [4125] = 1,
    ACTIONS(716), 1,
      anon_sym_COMMA,
  [4129] = 1,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
  [4133] = 1,
    ACTIONS(720), 1,
      anon_sym_COMMA,
  [4137] = 1,
    ACTIONS(722), 1,
      anon_sym_COMMA,
  [4141] = 1,
    ACTIONS(724), 1,
      aux_sym_origin_token1,
  [4145] = 1,
    ACTIONS(726), 1,
      aux_sym_origin_token1,
  [4149] = 1,
    ACTIONS(728), 1,
      aux_sym__input_id_token1,
  [4153] = 1,
    ACTIONS(730), 1,
      aux_sym_absolute_token1,
  [4157] = 1,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [4161] = 1,
    ACTIONS(734), 1,
      anon_sym_COMMA,
  [4165] = 1,
    ACTIONS(736), 1,
      sym_height,
  [4169] = 1,
    ACTIONS(738), 1,
      aux_sym_relative_token1,
  [4173] = 1,
    ACTIONS(740), 1,
      aux_sym__scale_token1,
  [4177] = 1,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [4181] = 1,
    ACTIONS(744), 1,
      anon_sym_COMMA,
  [4185] = 1,
    ACTIONS(746), 1,
      anon_sym_COMMA,
  [4189] = 1,
    ACTIONS(748), 1,
      anon_sym_COMMA,
  [4193] = 1,
    ACTIONS(736), 1,
      sym_width,
  [4197] = 1,
    ACTIONS(750), 1,
      aux_sym__input_id_token1,
  [4201] = 1,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [4205] = 1,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
  [4209] = 1,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [4213] = 1,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
  [4217] = 1,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
  [4221] = 1,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
  [4225] = 1,
    ACTIONS(764), 1,
      anon_sym_timestamp,
  [4229] = 1,
    ACTIONS(766), 1,
      aux_sym__input_id_token1,
  [4233] = 1,
    ACTIONS(768), 1,
      aux_sym__input_id_token1,
  [4237] = 1,
    ACTIONS(770), 1,
      aux_sym__input_id_token1,
  [4241] = 1,
    ACTIONS(772), 1,
      aux_sym_absolute_token1,
  [4245] = 1,
    ACTIONS(764), 1,
      anon_sym_gzip,
  [4249] = 1,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [4253] = 1,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [4257] = 1,
    ACTIONS(778), 1,
      aux_sym__input_id_token1,
  [4261] = 1,
    ACTIONS(780), 1,
      anon_sym_with,
  [4265] = 1,
    ACTIONS(782), 1,
      aux_sym__guide_id_token1,
  [4269] = 1,
    ACTIONS(784), 1,
      aux_sym__scale_token1,
  [4273] = 1,
    ACTIONS(786), 1,
      aux_sym__scale_token1,
  [4277] = 1,
    ACTIONS(788), 1,
      anon_sym_COMMA,
  [4281] = 1,
    ACTIONS(790), 1,
      anon_sym_COMMA,
  [4285] = 1,
    ACTIONS(792), 1,
      anon_sym_COMMA,
  [4289] = 1,
    ACTIONS(794), 1,
      anon_sym_COMMA,
  [4293] = 1,
    ACTIONS(796), 1,
      sym_rgba,
  [4297] = 1,
    ACTIONS(796), 1,
      sym_rgb,
  [4301] = 1,
    ACTIONS(798), 1,
      aux_sym__absolute_attr_token1,
  [4305] = 1,
    ACTIONS(666), 1,
      anon_sym_stretch,
  [4309] = 1,
    ACTIONS(800), 1,
      aux_sym__label_id_token2,
  [4313] = 1,
    ACTIONS(802), 1,
      anon_sym_COMMA,
  [4317] = 1,
    ACTIONS(804), 1,
      anon_sym_COMMA,
  [4321] = 1,
    ACTIONS(806), 1,
      anon_sym_COMMA,
  [4325] = 1,
    ACTIONS(808), 1,
      aux_sym_origin_token1,
  [4329] = 1,
    ACTIONS(810), 1,
      aux_sym__label_id_token3,
  [4333] = 1,
    ACTIONS(812), 1,
      aux_sym__label_id_token3,
  [4337] = 1,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [4341] = 1,
    ACTIONS(816), 1,
      aux_sym__label_id_token2,
  [4345] = 1,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
  [4349] = 1,
    ACTIONS(820), 1,
      anon_sym_fonts,
  [4353] = 1,
    ACTIONS(822), 1,
      anon_sym_SQUOTE,
  [4357] = 1,
    ACTIONS(822), 1,
      anon_sym_DQUOTE,
  [4361] = 1,
    ACTIONS(824), 1,
      anon_sym_COMMA,
  [4365] = 1,
    ACTIONS(826), 1,
      aux_sym__guide_id_token1,
  [4369] = 1,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
  [4373] = 1,
    ACTIONS(828), 1,
      anon_sym_SQUOTE,
  [4377] = 1,
    ACTIONS(830), 1,
      aux_sym_relative_token1,
  [4381] = 1,
    ACTIONS(832), 1,
      aux_sym_absolute_token1,
  [4385] = 1,
    ACTIONS(834), 1,
      aux_sym__label_id_token2,
  [4389] = 1,
    ACTIONS(836), 1,
      aux_sym__label_id_token3,
  [4393] = 1,
    ACTIONS(838), 1,
      anon_sym_COMMA,
  [4397] = 1,
    ACTIONS(840), 1,
      anon_sym_COMMA,
  [4401] = 1,
    ACTIONS(842), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 302,
  [SMALL_STATE(9)] = 345,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 421,
  [SMALL_STATE(12)] = 464,
  [SMALL_STATE(13)] = 491,
  [SMALL_STATE(14)] = 518,
  [SMALL_STATE(15)] = 545,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 626,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 680,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 734,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 786,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 854,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 919,
  [SMALL_STATE(29)] = 953,
  [SMALL_STATE(30)] = 989,
  [SMALL_STATE(31)] = 1010,
  [SMALL_STATE(32)] = 1031,
  [SMALL_STATE(33)] = 1062,
  [SMALL_STATE(34)] = 1083,
  [SMALL_STATE(35)] = 1104,
  [SMALL_STATE(36)] = 1125,
  [SMALL_STATE(37)] = 1160,
  [SMALL_STATE(38)] = 1194,
  [SMALL_STATE(39)] = 1222,
  [SMALL_STATE(40)] = 1256,
  [SMALL_STATE(41)] = 1275,
  [SMALL_STATE(42)] = 1294,
  [SMALL_STATE(43)] = 1316,
  [SMALL_STATE(44)] = 1336,
  [SMALL_STATE(45)] = 1358,
  [SMALL_STATE(46)] = 1380,
  [SMALL_STATE(47)] = 1402,
  [SMALL_STATE(48)] = 1422,
  [SMALL_STATE(49)] = 1442,
  [SMALL_STATE(50)] = 1464,
  [SMALL_STATE(51)] = 1486,
  [SMALL_STATE(52)] = 1504,
  [SMALL_STATE(53)] = 1524,
  [SMALL_STATE(54)] = 1542,
  [SMALL_STATE(55)] = 1564,
  [SMALL_STATE(56)] = 1581,
  [SMALL_STATE(57)] = 1598,
  [SMALL_STATE(58)] = 1617,
  [SMALL_STATE(59)] = 1636,
  [SMALL_STATE(60)] = 1661,
  [SMALL_STATE(61)] = 1682,
  [SMALL_STATE(62)] = 1701,
  [SMALL_STATE(63)] = 1718,
  [SMALL_STATE(64)] = 1743,
  [SMALL_STATE(65)] = 1764,
  [SMALL_STATE(66)] = 1783,
  [SMALL_STATE(67)] = 1802,
  [SMALL_STATE(68)] = 1827,
  [SMALL_STATE(69)] = 1841,
  [SMALL_STATE(70)] = 1857,
  [SMALL_STATE(71)] = 1873,
  [SMALL_STATE(72)] = 1887,
  [SMALL_STATE(73)] = 1901,
  [SMALL_STATE(74)] = 1925,
  [SMALL_STATE(75)] = 1941,
  [SMALL_STATE(76)] = 1955,
  [SMALL_STATE(77)] = 1969,
  [SMALL_STATE(78)] = 1985,
  [SMALL_STATE(79)] = 2001,
  [SMALL_STATE(80)] = 2025,
  [SMALL_STATE(81)] = 2041,
  [SMALL_STATE(82)] = 2057,
  [SMALL_STATE(83)] = 2071,
  [SMALL_STATE(84)] = 2087,
  [SMALL_STATE(85)] = 2119,
  [SMALL_STATE(86)] = 2133,
  [SMALL_STATE(87)] = 2157,
  [SMALL_STATE(88)] = 2173,
  [SMALL_STATE(89)] = 2189,
  [SMALL_STATE(90)] = 2205,
  [SMALL_STATE(91)] = 2227,
  [SMALL_STATE(92)] = 2241,
  [SMALL_STATE(93)] = 2257,
  [SMALL_STATE(94)] = 2273,
  [SMALL_STATE(95)] = 2286,
  [SMALL_STATE(96)] = 2299,
  [SMALL_STATE(97)] = 2312,
  [SMALL_STATE(98)] = 2325,
  [SMALL_STATE(99)] = 2338,
  [SMALL_STATE(100)] = 2361,
  [SMALL_STATE(101)] = 2374,
  [SMALL_STATE(102)] = 2387,
  [SMALL_STATE(103)] = 2400,
  [SMALL_STATE(104)] = 2413,
  [SMALL_STATE(105)] = 2426,
  [SMALL_STATE(106)] = 2439,
  [SMALL_STATE(107)] = 2452,
  [SMALL_STATE(108)] = 2465,
  [SMALL_STATE(109)] = 2478,
  [SMALL_STATE(110)] = 2491,
  [SMALL_STATE(111)] = 2504,
  [SMALL_STATE(112)] = 2517,
  [SMALL_STATE(113)] = 2530,
  [SMALL_STATE(114)] = 2543,
  [SMALL_STATE(115)] = 2556,
  [SMALL_STATE(116)] = 2569,
  [SMALL_STATE(117)] = 2582,
  [SMALL_STATE(118)] = 2595,
  [SMALL_STATE(119)] = 2608,
  [SMALL_STATE(120)] = 2621,
  [SMALL_STATE(121)] = 2634,
  [SMALL_STATE(122)] = 2647,
  [SMALL_STATE(123)] = 2660,
  [SMALL_STATE(124)] = 2673,
  [SMALL_STATE(125)] = 2686,
  [SMALL_STATE(126)] = 2709,
  [SMALL_STATE(127)] = 2722,
  [SMALL_STATE(128)] = 2735,
  [SMALL_STATE(129)] = 2748,
  [SMALL_STATE(130)] = 2761,
  [SMALL_STATE(131)] = 2774,
  [SMALL_STATE(132)] = 2787,
  [SMALL_STATE(133)] = 2800,
  [SMALL_STATE(134)] = 2813,
  [SMALL_STATE(135)] = 2826,
  [SMALL_STATE(136)] = 2839,
  [SMALL_STATE(137)] = 2852,
  [SMALL_STATE(138)] = 2865,
  [SMALL_STATE(139)] = 2878,
  [SMALL_STATE(140)] = 2891,
  [SMALL_STATE(141)] = 2904,
  [SMALL_STATE(142)] = 2917,
  [SMALL_STATE(143)] = 2930,
  [SMALL_STATE(144)] = 2943,
  [SMALL_STATE(145)] = 2956,
  [SMALL_STATE(146)] = 2979,
  [SMALL_STATE(147)] = 2992,
  [SMALL_STATE(148)] = 3005,
  [SMALL_STATE(149)] = 3018,
  [SMALL_STATE(150)] = 3031,
  [SMALL_STATE(151)] = 3044,
  [SMALL_STATE(152)] = 3057,
  [SMALL_STATE(153)] = 3070,
  [SMALL_STATE(154)] = 3083,
  [SMALL_STATE(155)] = 3096,
  [SMALL_STATE(156)] = 3109,
  [SMALL_STATE(157)] = 3122,
  [SMALL_STATE(158)] = 3135,
  [SMALL_STATE(159)] = 3148,
  [SMALL_STATE(160)] = 3161,
  [SMALL_STATE(161)] = 3174,
  [SMALL_STATE(162)] = 3187,
  [SMALL_STATE(163)] = 3200,
  [SMALL_STATE(164)] = 3213,
  [SMALL_STATE(165)] = 3226,
  [SMALL_STATE(166)] = 3239,
  [SMALL_STATE(167)] = 3252,
  [SMALL_STATE(168)] = 3265,
  [SMALL_STATE(169)] = 3278,
  [SMALL_STATE(170)] = 3291,
  [SMALL_STATE(171)] = 3313,
  [SMALL_STATE(172)] = 3334,
  [SMALL_STATE(173)] = 3347,
  [SMALL_STATE(174)] = 3360,
  [SMALL_STATE(175)] = 3379,
  [SMALL_STATE(176)] = 3396,
  [SMALL_STATE(177)] = 3406,
  [SMALL_STATE(178)] = 3422,
  [SMALL_STATE(179)] = 3438,
  [SMALL_STATE(180)] = 3448,
  [SMALL_STATE(181)] = 3464,
  [SMALL_STATE(182)] = 3474,
  [SMALL_STATE(183)] = 3484,
  [SMALL_STATE(184)] = 3494,
  [SMALL_STATE(185)] = 3504,
  [SMALL_STATE(186)] = 3517,
  [SMALL_STATE(187)] = 3530,
  [SMALL_STATE(188)] = 3541,
  [SMALL_STATE(189)] = 3552,
  [SMALL_STATE(190)] = 3565,
  [SMALL_STATE(191)] = 3578,
  [SMALL_STATE(192)] = 3591,
  [SMALL_STATE(193)] = 3604,
  [SMALL_STATE(194)] = 3617,
  [SMALL_STATE(195)] = 3626,
  [SMALL_STATE(196)] = 3636,
  [SMALL_STATE(197)] = 3646,
  [SMALL_STATE(198)] = 3656,
  [SMALL_STATE(199)] = 3666,
  [SMALL_STATE(200)] = 3676,
  [SMALL_STATE(201)] = 3686,
  [SMALL_STATE(202)] = 3696,
  [SMALL_STATE(203)] = 3706,
  [SMALL_STATE(204)] = 3716,
  [SMALL_STATE(205)] = 3726,
  [SMALL_STATE(206)] = 3736,
  [SMALL_STATE(207)] = 3746,
  [SMALL_STATE(208)] = 3756,
  [SMALL_STATE(209)] = 3766,
  [SMALL_STATE(210)] = 3776,
  [SMALL_STATE(211)] = 3786,
  [SMALL_STATE(212)] = 3796,
  [SMALL_STATE(213)] = 3806,
  [SMALL_STATE(214)] = 3816,
  [SMALL_STATE(215)] = 3826,
  [SMALL_STATE(216)] = 3836,
  [SMALL_STATE(217)] = 3843,
  [SMALL_STATE(218)] = 3850,
  [SMALL_STATE(219)] = 3857,
  [SMALL_STATE(220)] = 3864,
  [SMALL_STATE(221)] = 3871,
  [SMALL_STATE(222)] = 3878,
  [SMALL_STATE(223)] = 3885,
  [SMALL_STATE(224)] = 3892,
  [SMALL_STATE(225)] = 3899,
  [SMALL_STATE(226)] = 3906,
  [SMALL_STATE(227)] = 3913,
  [SMALL_STATE(228)] = 3918,
  [SMALL_STATE(229)] = 3925,
  [SMALL_STATE(230)] = 3932,
  [SMALL_STATE(231)] = 3939,
  [SMALL_STATE(232)] = 3946,
  [SMALL_STATE(233)] = 3953,
  [SMALL_STATE(234)] = 3960,
  [SMALL_STATE(235)] = 3967,
  [SMALL_STATE(236)] = 3974,
  [SMALL_STATE(237)] = 3981,
  [SMALL_STATE(238)] = 3988,
  [SMALL_STATE(239)] = 3995,
  [SMALL_STATE(240)] = 4002,
  [SMALL_STATE(241)] = 4009,
  [SMALL_STATE(242)] = 4016,
  [SMALL_STATE(243)] = 4023,
  [SMALL_STATE(244)] = 4028,
  [SMALL_STATE(245)] = 4035,
  [SMALL_STATE(246)] = 4042,
  [SMALL_STATE(247)] = 4049,
  [SMALL_STATE(248)] = 4056,
  [SMALL_STATE(249)] = 4063,
  [SMALL_STATE(250)] = 4070,
  [SMALL_STATE(251)] = 4077,
  [SMALL_STATE(252)] = 4081,
  [SMALL_STATE(253)] = 4085,
  [SMALL_STATE(254)] = 4089,
  [SMALL_STATE(255)] = 4093,
  [SMALL_STATE(256)] = 4097,
  [SMALL_STATE(257)] = 4101,
  [SMALL_STATE(258)] = 4105,
  [SMALL_STATE(259)] = 4109,
  [SMALL_STATE(260)] = 4113,
  [SMALL_STATE(261)] = 4117,
  [SMALL_STATE(262)] = 4121,
  [SMALL_STATE(263)] = 4125,
  [SMALL_STATE(264)] = 4129,
  [SMALL_STATE(265)] = 4133,
  [SMALL_STATE(266)] = 4137,
  [SMALL_STATE(267)] = 4141,
  [SMALL_STATE(268)] = 4145,
  [SMALL_STATE(269)] = 4149,
  [SMALL_STATE(270)] = 4153,
  [SMALL_STATE(271)] = 4157,
  [SMALL_STATE(272)] = 4161,
  [SMALL_STATE(273)] = 4165,
  [SMALL_STATE(274)] = 4169,
  [SMALL_STATE(275)] = 4173,
  [SMALL_STATE(276)] = 4177,
  [SMALL_STATE(277)] = 4181,
  [SMALL_STATE(278)] = 4185,
  [SMALL_STATE(279)] = 4189,
  [SMALL_STATE(280)] = 4193,
  [SMALL_STATE(281)] = 4197,
  [SMALL_STATE(282)] = 4201,
  [SMALL_STATE(283)] = 4205,
  [SMALL_STATE(284)] = 4209,
  [SMALL_STATE(285)] = 4213,
  [SMALL_STATE(286)] = 4217,
  [SMALL_STATE(287)] = 4221,
  [SMALL_STATE(288)] = 4225,
  [SMALL_STATE(289)] = 4229,
  [SMALL_STATE(290)] = 4233,
  [SMALL_STATE(291)] = 4237,
  [SMALL_STATE(292)] = 4241,
  [SMALL_STATE(293)] = 4245,
  [SMALL_STATE(294)] = 4249,
  [SMALL_STATE(295)] = 4253,
  [SMALL_STATE(296)] = 4257,
  [SMALL_STATE(297)] = 4261,
  [SMALL_STATE(298)] = 4265,
  [SMALL_STATE(299)] = 4269,
  [SMALL_STATE(300)] = 4273,
  [SMALL_STATE(301)] = 4277,
  [SMALL_STATE(302)] = 4281,
  [SMALL_STATE(303)] = 4285,
  [SMALL_STATE(304)] = 4289,
  [SMALL_STATE(305)] = 4293,
  [SMALL_STATE(306)] = 4297,
  [SMALL_STATE(307)] = 4301,
  [SMALL_STATE(308)] = 4305,
  [SMALL_STATE(309)] = 4309,
  [SMALL_STATE(310)] = 4313,
  [SMALL_STATE(311)] = 4317,
  [SMALL_STATE(312)] = 4321,
  [SMALL_STATE(313)] = 4325,
  [SMALL_STATE(314)] = 4329,
  [SMALL_STATE(315)] = 4333,
  [SMALL_STATE(316)] = 4337,
  [SMALL_STATE(317)] = 4341,
  [SMALL_STATE(318)] = 4345,
  [SMALL_STATE(319)] = 4349,
  [SMALL_STATE(320)] = 4353,
  [SMALL_STATE(321)] = 4357,
  [SMALL_STATE(322)] = 4361,
  [SMALL_STATE(323)] = 4365,
  [SMALL_STATE(324)] = 4369,
  [SMALL_STATE(325)] = 4373,
  [SMALL_STATE(326)] = 4377,
  [SMALL_STATE(327)] = 4381,
  [SMALL_STATE(328)] = 4385,
  [SMALL_STATE(329)] = 4389,
  [SMALL_STATE(330)] = 4393,
  [SMALL_STATE(331)] = 4397,
  [SMALL_STATE(332)] = 4401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 21),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 21),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 9),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(271),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(215),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(187),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(188),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(319),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 12),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 22),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 9),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 14),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 14),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 14),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 13),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 11),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 11),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 10),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 9),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 12),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 16),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [818] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
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
