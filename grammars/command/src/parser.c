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
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 1
#define TOKEN_COUNT 92
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
  anon_sym_unload = 58,
  anon_sym_save = 59,
  anon_sym_export = 60,
  anon_sym_DOTh = 61,
  anon_sym_GT_GT = 62,
  anon_sym_list = 63,
  anon_sym_fonts = 64,
  anon_sym_timestamp = 65,
  anon_sym_gzip = 66,
  aux_sym_parameter_token1 = 67,
  sym_fontsize = 68,
  anon_sym_baseline = 69,
  anon_sym_scale = 70,
  aux_sym__scale_token1 = 71,
  anon_sym_stretch = 72,
  anon_sym_origin = 73,
  aux_sym_origin_token1 = 74,
  aux_sym__originx_token1 = 75,
  aux_sym__originy_token1 = 76,
  anon_sym_background = 77,
  anon_sym_none = 78,
  sym_rgb = 79,
  sym_rgba = 80,
  anon_sym_panel = 81,
  anon_sym_svg = 82,
  anon_sym_dark = 83,
  sym_height = 84,
  sym_width = 85,
  anon_sym_vertical = 86,
  anon_sym_horizontal = 87,
  aux_sym_offset_token1 = 88,
  aux_sym__string_token1 = 89,
  aux_sym_absolute_token1 = 90,
  aux_sym_relative_token1 = 91,
  sym_command = 92,
  sym_new = 93,
  sym_set = 94,
  sym__module_attr = 95,
  sym__component_attr = 96,
  sym__label_attr = 97,
  sym__decoration_attr = 98,
  sym__guideline_attr = 99,
  sym__x_attr = 100,
  sym__y_attr = 101,
  sym__xy_attr = 102,
  sym__offset_attr = 103,
  sym__offset_xy_attr = 104,
  sym__absolute_attr = 105,
  sym__absolute_x_attr = 106,
  sym__absolute_y_attr = 107,
  sym__absolute_xy_attr = 108,
  sym__relative_attr = 109,
  sym__relative_xy_attr = 110,
  sym__geometry_x_attr = 111,
  sym__geometry_y_attr = 112,
  sym__geometry_xy_attr = 113,
  sym__guide_attr = 114,
  sym__guide_xy_attr = 115,
  sym_decorate = 116,
  sym_delete = 117,
  sym__guide_id = 118,
  sym__input_id = 119,
  sym__output_id = 120,
  sym__parameter_id = 121,
  sym__light_id = 122,
  sym__widget_id = 123,
  sym__label_id = 124,
  sym__decoration_id = 125,
  sym__font_id = 126,
  sym__component_id = 127,
  sym_load = 128,
  sym_unload = 129,
  sym_save = 130,
  sym_export = 131,
  sym__module_export = 132,
  sym_list = 133,
  sym_project = 134,
  sym_script = 135,
  sym__entity = 136,
  sym__input = 137,
  sym__output = 138,
  sym__parameter = 139,
  sym__light = 140,
  sym__widget = 141,
  sym_module = 142,
  sym_input = 143,
  sym_output = 144,
  sym_parameter = 145,
  sym_light = 146,
  sym_widget = 147,
  sym__component = 148,
  sym_label = 149,
  sym_font = 150,
  sym__align = 151,
  sym_halign = 152,
  sym_valign = 153,
  sym_colour = 154,
  sym_decoration = 155,
  sym__scale = 156,
  sym_stretch = 157,
  sym_origin = 158,
  sym__originx = 159,
  sym__originy = 160,
  sym_background = 161,
  sym_panel = 162,
  sym_svg = 163,
  sym_name = 164,
  sym_part = 165,
  sym_guide = 166,
  sym_identifier = 167,
  sym_vertical = 168,
  sym_horizontal = 169,
  sym_geometry = 170,
  sym_offset = 171,
  sym__offset = 172,
  sym_guideline = 173,
  sym__string = 174,
  sym_absolute = 175,
  sym_relative = 176,
  sym__decorate = 177,
  sym__relative = 178,
  sym_x = 179,
  sym_y = 180,
  aux_sym_command_repeat1 = 181,
  alias_sym_dy = 182,
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
  [anon_sym_unload] = "unload",
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
  [sym__font_id] = "font",
  [sym__component_id] = "_component_id",
  [sym_load] = "load",
  [sym_unload] = "unload",
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
  [anon_sym_unload] = anon_sym_unload,
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
  [sym__font_id] = sym_font,
  [sym__component_id] = sym__component_id,
  [sym_load] = sym_load,
  [sym_unload] = sym_unload,
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
  [anon_sym_unload] = {
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
  [sym__font_id] = {
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
  [sym_unload] = {
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
  [67] = 20,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 12,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 15,
  [78] = 14,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 12,
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
  [148] = 100,
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
  [164] = 127,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 27,
  [175] = 147,
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
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 324,
  [328] = 296,
  [329] = 295,
  [330] = 261,
  [331] = 256,
  [332] = 317,
  [333] = 316,
  [334] = 300,
  [335] = 258,
  [336] = 301,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(527);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead == 'x') ADVANCE(342);
      if (lookahead == 'y') ADVANCE(343);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == '\'') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(581);
      if (lookahead != 0) ADVANCE(582);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(520);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(448);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'U') ADVANCE(573);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '5') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '8') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == 'H') ADVANCE(574);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(584);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(186);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(186);
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 25:
      if (lookahead == ';') ADVANCE(333);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(544);
      END_STATE();
    case 27:
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'b') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'b') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'v') ADVANCE(112);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == 'v') ADVANCE(402);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(564);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(543);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(341);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(559);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(264);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 152:
      if (lookahead == 'j') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(572);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(356);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(574);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(573);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(563);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(549);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(548);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(563);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == 'z') ADVANCE(140);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 295:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 296:
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 297:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 298:
      if (lookahead == 'x') ADVANCE(261);
      END_STATE();
    case 299:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 300:
      if (lookahead == 'z') ADVANCE(221);
      END_STATE();
    case 301:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(561);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(584);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(568);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(569);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(567);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 325:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 326:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 327:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(476);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == 'u') ADVANCE(484);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 328:
      if (eof) ADVANCE(332);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 329:
      if (eof) ADVANCE(332);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(342);
      if (lookahead == 'y') ADVANCE(343);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 330:
      if (eof) ADVANCE(332);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'b') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 331:
      if (eof) ADVANCE(332);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(204);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == 'H') ADVANCE(356);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(360);
      if (lookahead == 'H') ADVANCE(356);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(356);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(356);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(365);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(365);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(382);
      if (lookahead == 'H') ADVANCE(380);
      if (lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(380);
      if (lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(437);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(582);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(521);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(582);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(521);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(186);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '\'') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(582);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 327},
  [3] = {.lex_state = 327},
  [4] = {.lex_state = 329},
  [5] = {.lex_state = 329},
  [6] = {.lex_state = 329},
  [7] = {.lex_state = 327},
  [8] = {.lex_state = 329},
  [9] = {.lex_state = 329},
  [10] = {.lex_state = 329},
  [11] = {.lex_state = 329},
  [12] = {.lex_state = 327},
  [13] = {.lex_state = 327},
  [14] = {.lex_state = 327},
  [15] = {.lex_state = 327},
  [16] = {.lex_state = 327},
  [17] = {.lex_state = 327},
  [18] = {.lex_state = 327},
  [19] = {.lex_state = 327},
  [20] = {.lex_state = 327},
  [21] = {.lex_state = 327},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 329},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 329},
  [28] = {.lex_state = 329},
  [29] = {.lex_state = 330},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 328},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 329},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 329},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 330},
  [56] = {.lex_state = 328},
  [57] = {.lex_state = 329},
  [58] = {.lex_state = 331},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 329},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 328},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 328},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 328},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 328},
  [78] = {.lex_state = 328},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 331},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 329},
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
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 54},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 329},
  [170] = {.lex_state = 329},
  [171] = {.lex_state = 329},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 29},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 329},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 28},
  [181] = {.lex_state = 329},
  [182] = {.lex_state = 329},
  [183] = {.lex_state = 330},
  [184] = {.lex_state = 329},
  [185] = {.lex_state = 329},
  [186] = {.lex_state = 28},
  [187] = {.lex_state = 329},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 327},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 327},
  [193] = {.lex_state = 327},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 327},
  [196] = {.lex_state = 327},
  [197] = {.lex_state = 327},
  [198] = {.lex_state = 327},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 327},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 327},
  [203] = {.lex_state = 327},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 327},
  [206] = {.lex_state = 27},
  [207] = {.lex_state = 327},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 327},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 27},
  [228] = {.lex_state = 327},
  [229] = {.lex_state = 305},
  [230] = {.lex_state = 330},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 329},
  [233] = {.lex_state = 27},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 327},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 27},
  [241] = {.lex_state = 27},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 330},
  [247] = {.lex_state = 305},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 330},
  [252] = {.lex_state = 330},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 330},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 54},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 327},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 327},
  [276] = {.lex_state = 328},
  [277] = {.lex_state = 328},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 328},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
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
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 54},
  [302] = {.lex_state = 327},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 329},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 327},
  [307] = {.lex_state = 330},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 327},
  [311] = {.lex_state = 530},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 525},
  [314] = {.lex_state = 329},
  [315] = {.lex_state = 329},
  [316] = {.lex_state = 530},
  [317] = {.lex_state = 525},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 330},
  [327] = {.lex_state = 8},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 54},
  [332] = {.lex_state = 525},
  [333] = {.lex_state = 530},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 54},
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
    [anon_sym_unload] = ACTIONS(1),
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
    [sym_command] = STATE(325),
    [sym_new] = STATE(25),
    [sym_set] = STATE(25),
    [sym_decorate] = STATE(25),
    [sym_delete] = STATE(25),
    [sym_load] = STATE(25),
    [sym_unload] = STATE(25),
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
    [anon_sym_unload] = ACTIONS(17),
    [anon_sym_save] = ACTIONS(19),
    [anon_sym_export] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(35), 1,
      sym_fontsize,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(6), 1,
      sym_font,
    STATE(44), 1,
      sym_valign,
    STATE(47), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(114), 1,
      sym_colour,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(27), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [55] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(45), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(42), 1,
      sym__align,
    STATE(44), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(159), 1,
      sym_colour,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(31), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(43), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [110] = 16,
    ACTIONS(47), 1,
      anon_sym_module,
    ACTIONS(49), 1,
      anon_sym_guide,
    ACTIONS(51), 1,
      anon_sym_input,
    ACTIONS(53), 1,
      anon_sym_output,
    ACTIONS(55), 1,
      anon_sym_parameter,
    ACTIONS(57), 1,
      anon_sym_light,
    ACTIONS(59), 1,
      anon_sym_widget,
    ACTIONS(61), 1,
      anon_sym_label,
    ACTIONS(63), 1,
      anon_sym_decoration,
    ACTIONS(65), 1,
      anon_sym_origin,
    ACTIONS(67), 1,
      anon_sym_background,
    STATE(36), 1,
      sym__guide_id,
    STATE(151), 1,
      sym__label_id,
    STATE(177), 1,
      sym__decoration_id,
    STATE(178), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(154), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [169] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(75), 1,
      sym_fontsize,
    STATE(44), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(104), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [216] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(79), 1,
      sym_fontsize,
    STATE(44), 1,
      sym_valign,
    STATE(45), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(88), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [263] = 4,
    ACTIONS(85), 1,
      aux_sym_offset_token1,
    STATE(14), 1,
      sym_offset,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(83), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [297] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(44), 1,
      sym_valign,
    STATE(49), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(98), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [341] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(44), 1,
      sym_valign,
    STATE(45), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(88), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [385] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(44), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(104), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [429] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(42), 1,
      sym__align,
    STATE(44), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(159), 1,
      sym_colour,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [473] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(91), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [501] = 2,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(95), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [529] = 2,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(99), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [557] = 2,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(103), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [585] = 2,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(107), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [613] = 2,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(111), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [641] = 2,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(115), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [669] = 2,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(119), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [697] = 2,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(123), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [725] = 2,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(127), 19,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [753] = 2,
    ACTIONS(131), 1,
      anon_sym_x,
    ACTIONS(129), 21,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [780] = 2,
    ACTIONS(135), 1,
      anon_sym_x,
    ACTIONS(133), 21,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [807] = 2,
    ACTIONS(139), 1,
      sym_rgb,
    ACTIONS(137), 21,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_fontsize,
      anon_sym_baseline,
      sym_rgba,
  [834] = 12,
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
      anon_sym_unload,
    ACTIONS(19), 1,
      anon_sym_save,
    ACTIONS(21), 1,
      anon_sym_export,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym_comment,
    STATE(26), 10,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [880] = 12,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_new,
    ACTIONS(153), 1,
      anon_sym_set,
    ACTIONS(156), 1,
      anon_sym_decorate,
    ACTIONS(159), 1,
      anon_sym_delete,
    ACTIONS(162), 1,
      anon_sym_load,
    ACTIONS(165), 1,
      anon_sym_unload,
    ACTIONS(168), 1,
      anon_sym_save,
    ACTIONS(171), 1,
      anon_sym_export,
    ACTIONS(174), 1,
      anon_sym_list,
    STATE(26), 10,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [926] = 2,
    ACTIONS(179), 2,
      anon_sym_x,
      sym_width,
    ACTIONS(177), 17,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_height,
      aux_sym_offset_token1,
  [950] = 10,
    ACTIONS(51), 1,
      anon_sym_input,
    ACTIONS(53), 1,
      anon_sym_output,
    ACTIONS(55), 1,
      anon_sym_parameter,
    ACTIONS(57), 1,
      anon_sym_light,
    ACTIONS(59), 1,
      anon_sym_widget,
    ACTIONS(61), 1,
      anon_sym_label,
    ACTIONS(63), 1,
      anon_sym_decoration,
    ACTIONS(181), 1,
      anon_sym_font,
    ACTIONS(183), 1,
      anon_sym_guide,
    STATE(134), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [989] = 9,
    ACTIONS(185), 1,
      anon_sym_module,
    ACTIONS(187), 1,
      anon_sym_guide,
    ACTIONS(189), 1,
      anon_sym_input,
    ACTIONS(191), 1,
      anon_sym_output,
    ACTIONS(193), 1,
      anon_sym_light,
    ACTIONS(195), 1,
      anon_sym_widget,
    ACTIONS(197), 1,
      anon_sym_label,
    ACTIONS(199), 1,
      aux_sym_parameter_token1,
    STATE(144), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [1025] = 8,
    ACTIONS(203), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(205), 1,
      anon_sym_vertical,
    ACTIONS(207), 1,
      anon_sym_horizontal,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    STATE(146), 1,
      sym_offset,
    STATE(237), 1,
      sym_identifier,
    STATE(145), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(201), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1059] = 2,
    ACTIONS(213), 1,
      anon_sym_x,
    ACTIONS(211), 16,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1081] = 2,
    ACTIONS(217), 1,
      anon_sym_x,
    ACTIONS(215), 16,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1103] = 2,
    ACTIONS(221), 1,
      anon_sym_x,
    ACTIONS(219), 16,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1125] = 2,
    ACTIONS(225), 1,
      anon_sym_x,
    ACTIONS(223), 16,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1147] = 2,
    ACTIONS(229), 1,
      anon_sym_x,
    ACTIONS(227), 16,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1169] = 7,
    ACTIONS(231), 1,
      anon_sym_id,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(239), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(237), 4,
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
  [1200] = 2,
    ACTIONS(245), 1,
      anon_sym_x,
    ACTIONS(243), 14,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1220] = 9,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(247), 1,
      anon_sym_AT,
    STATE(149), 1,
      sym__xy_attr,
    STATE(280), 1,
      sym__guide_attr,
    STATE(281), 1,
      sym__geometry_x_attr,
    STATE(282), 1,
      sym__relative_attr,
    ACTIONS(237), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(156), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1254] = 2,
    ACTIONS(251), 1,
      anon_sym_x,
    ACTIONS(249), 14,
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
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1274] = 6,
    ACTIONS(203), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(205), 1,
      anon_sym_vertical,
    ACTIONS(207), 1,
      anon_sym_horizontal,
    STATE(30), 1,
      sym_identifier,
    STATE(89), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(201), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1302] = 9,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(247), 1,
      anon_sym_AT,
    STATE(163), 1,
      sym__xy_attr,
    STATE(280), 1,
      sym__guide_attr,
    STATE(281), 1,
      sym__geometry_x_attr,
    STATE(282), 1,
      sym__relative_attr,
    ACTIONS(237), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(156), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1336] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(104), 1,
      sym_colour,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1359] = 4,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__scale,
    STATE(168), 1,
      sym_stretch,
    ACTIONS(253), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1382] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_rgb,
    ACTIONS(257), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1403] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(159), 1,
      sym_colour,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1426] = 4,
    ACTIONS(263), 1,
      aux_sym_offset_token1,
    STATE(78), 1,
      sym_offset,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(83), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1449] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(88), 1,
      sym_colour,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1472] = 3,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    STATE(75), 1,
      sym_offset,
    ACTIONS(265), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1493] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(95), 1,
      sym_colour,
    ACTIONS(267), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1516] = 3,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    STATE(76), 1,
      sym_offset,
    ACTIONS(269), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1537] = 3,
    ACTIONS(261), 1,
      sym_rgb,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(257), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1558] = 2,
    ACTIONS(275), 1,
      sym_rgb,
    ACTIONS(273), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1577] = 2,
    ACTIONS(279), 1,
      sym_rgb,
    ACTIONS(277), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1596] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(98), 1,
      sym_colour,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1619] = 2,
    ACTIONS(283), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(281), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1637] = 4,
    ACTIONS(289), 1,
      aux_sym__input_id_token1,
    STATE(115), 1,
      sym_part,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(287), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1659] = 3,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    STATE(136), 1,
      sym_offset,
    ACTIONS(291), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1679] = 2,
    ACTIONS(295), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(293), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1697] = 3,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_stretch,
    ACTIONS(297), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1717] = 3,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    STATE(120), 1,
      sym_offset,
    ACTIONS(301), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1737] = 3,
    ACTIONS(305), 1,
      anon_sym_light,
    ACTIONS(307), 1,
      anon_sym_dark,
    ACTIONS(303), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1757] = 4,
    ACTIONS(289), 1,
      aux_sym__input_id_token1,
    STATE(161), 1,
      sym_part,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(311), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1779] = 3,
    ACTIONS(315), 1,
      anon_sym_timestamp,
    ACTIONS(317), 1,
      anon_sym_gzip,
    ACTIONS(313), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1799] = 2,
    ACTIONS(321), 1,
      sym_rgb,
    ACTIONS(319), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1817] = 2,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(323), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1834] = 6,
    ACTIONS(327), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      aux_sym_relative_token1,
    STATE(294), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(329), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1859] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(123), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1876] = 1,
    ACTIONS(335), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1891] = 2,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(337), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1908] = 2,
    ACTIONS(343), 1,
      anon_sym_timestamp,
    ACTIONS(341), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1925] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(91), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1942] = 1,
    ACTIONS(345), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1957] = 1,
    ACTIONS(347), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1972] = 1,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1987] = 1,
    ACTIONS(351), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2002] = 1,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2017] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(103), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2034] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(99), 10,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2051] = 6,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(149), 1,
      sym__x_attr,
    ACTIONS(237), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(162), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2076] = 6,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(163), 1,
      sym__x_attr,
    ACTIONS(237), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(162), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2101] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(355), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2118] = 2,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(355), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2135] = 1,
    ACTIONS(89), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2150] = 1,
    ACTIONS(361), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2165] = 2,
    ACTIONS(365), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(363), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2182] = 2,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(323), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2199] = 1,
    ACTIONS(369), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2213] = 1,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2227] = 1,
    ACTIONS(371), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2241] = 1,
    ACTIONS(373), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2255] = 6,
    ACTIONS(375), 1,
      anon_sym_AT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_relative_token1,
    STATE(297), 1,
      sym_x,
    STATE(56), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(329), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2279] = 1,
    ACTIONS(381), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2293] = 1,
    ACTIONS(383), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2307] = 1,
    ACTIONS(385), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2321] = 1,
    ACTIONS(387), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2335] = 1,
    ACTIONS(389), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2349] = 1,
    ACTIONS(391), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2363] = 1,
    ACTIONS(267), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2377] = 1,
    ACTIONS(393), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2391] = 2,
    ACTIONS(397), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(395), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2407] = 1,
    ACTIONS(399), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2421] = 1,
    ACTIONS(401), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2435] = 1,
    ACTIONS(403), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2449] = 1,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2463] = 1,
    ACTIONS(355), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2477] = 1,
    ACTIONS(405), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2491] = 1,
    ACTIONS(407), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2505] = 1,
    ACTIONS(409), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2519] = 6,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(163), 1,
      sym__y_attr,
    ACTIONS(239), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(157), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2543] = 1,
    ACTIONS(411), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2557] = 6,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(149), 1,
      sym__y_attr,
    ACTIONS(239), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(157), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2581] = 1,
    ACTIONS(413), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2595] = 1,
    ACTIONS(415), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2609] = 1,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2623] = 1,
    ACTIONS(417), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2637] = 5,
    STATE(44), 1,
      sym_valign,
    STATE(51), 1,
      sym_halign,
    STATE(149), 1,
      sym__align,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [2659] = 1,
    ACTIONS(419), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2673] = 1,
    ACTIONS(421), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2687] = 1,
    ACTIONS(423), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2701] = 1,
    ACTIONS(425), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2715] = 1,
    ACTIONS(427), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2729] = 1,
    ACTIONS(429), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2743] = 1,
    ACTIONS(431), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2757] = 1,
    ACTIONS(433), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2771] = 1,
    ACTIONS(435), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2785] = 1,
    ACTIONS(437), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2799] = 1,
    ACTIONS(439), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2813] = 1,
    ACTIONS(441), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2827] = 1,
    ACTIONS(443), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2841] = 1,
    ACTIONS(445), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2855] = 1,
    ACTIONS(447), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2869] = 1,
    ACTIONS(449), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2883] = 1,
    ACTIONS(451), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2897] = 1,
    ACTIONS(453), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2911] = 1,
    ACTIONS(455), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2925] = 1,
    ACTIONS(457), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2939] = 1,
    ACTIONS(459), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2953] = 1,
    ACTIONS(461), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2967] = 1,
    ACTIONS(463), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2981] = 1,
    ACTIONS(465), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2995] = 1,
    ACTIONS(467), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3009] = 1,
    ACTIONS(469), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3023] = 1,
    ACTIONS(471), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3037] = 1,
    ACTIONS(473), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3051] = 1,
    ACTIONS(475), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3065] = 1,
    ACTIONS(477), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3079] = 1,
    ACTIONS(479), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3093] = 1,
    ACTIONS(397), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3107] = 1,
    ACTIONS(481), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3121] = 1,
    ACTIONS(483), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3135] = 10,
    ACTIONS(485), 1,
      anon_sym_x,
    ACTIONS(487), 1,
      anon_sym_y,
    ACTIONS(489), 1,
      anon_sym_xy,
    ACTIONS(491), 1,
      anon_sym_text,
    ACTIONS(493), 1,
      anon_sym_font,
    ACTIONS(495), 1,
      anon_sym_size,
    ACTIONS(497), 1,
      anon_sym_halign,
    ACTIONS(499), 1,
      anon_sym_valign,
    ACTIONS(501), 1,
      anon_sym_align,
    ACTIONS(503), 2,
      anon_sym_colour,
      anon_sym_color,
  [3167] = 1,
    ACTIONS(505), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3181] = 1,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3195] = 1,
    ACTIONS(509), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3209] = 1,
    ACTIONS(511), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3223] = 1,
    ACTIONS(513), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3237] = 1,
    ACTIONS(515), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3251] = 1,
    ACTIONS(517), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3265] = 1,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3279] = 1,
    ACTIONS(519), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3293] = 1,
    ACTIONS(521), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3307] = 1,
    ACTIONS(523), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3321] = 1,
    ACTIONS(525), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3335] = 2,
    ACTIONS(439), 1,
      aux_sym_offset_token1,
    ACTIONS(527), 10,
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
  [3351] = 1,
    ACTIONS(529), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3365] = 1,
    ACTIONS(531), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3379] = 1,
    ACTIONS(533), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3393] = 1,
    ACTIONS(297), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3407] = 6,
    ACTIONS(51), 1,
      anon_sym_input,
    ACTIONS(53), 1,
      anon_sym_output,
    ACTIONS(55), 1,
      anon_sym_parameter,
    ACTIONS(57), 1,
      anon_sym_light,
    ACTIONS(59), 1,
      anon_sym_widget,
    STATE(285), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3430] = 6,
    ACTIONS(535), 1,
      anon_sym_input,
    ACTIONS(537), 1,
      anon_sym_output,
    ACTIONS(539), 1,
      anon_sym_parameter,
    ACTIONS(541), 1,
      anon_sym_light,
    ACTIONS(543), 1,
      anon_sym_widget,
    STATE(305), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3453] = 6,
    ACTIONS(535), 1,
      anon_sym_input,
    ACTIONS(537), 1,
      anon_sym_output,
    ACTIONS(539), 1,
      anon_sym_parameter,
    ACTIONS(541), 1,
      anon_sym_light,
    ACTIONS(543), 1,
      anon_sym_widget,
    STATE(260), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3476] = 6,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    ACTIONS(545), 1,
      anon_sym_AT,
    ACTIONS(549), 1,
      anon_sym_origin,
    ACTIONS(551), 1,
      aux_sym_origin_token1,
    STATE(140), 1,
      sym_offset,
    ACTIONS(547), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3498] = 6,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    ACTIONS(553), 1,
      anon_sym_AT,
    ACTIONS(555), 1,
      anon_sym_origin,
    ACTIONS(557), 1,
      aux_sym_origin_token1,
    STATE(143), 1,
      sym_offset,
    ACTIONS(547), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3519] = 2,
    ACTIONS(177), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(179), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3532] = 2,
    ACTIONS(479), 3,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_relative_token1,
    ACTIONS(559), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3545] = 6,
    ACTIONS(561), 1,
      anon_sym_input,
    ACTIONS(563), 1,
      anon_sym_output,
    ACTIONS(565), 1,
      anon_sym_parameter,
    ACTIONS(567), 1,
      anon_sym_light,
    ACTIONS(569), 1,
      anon_sym_widget,
    ACTIONS(571), 1,
      anon_sym_label,
  [3564] = 5,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      anon_sym_x,
    ACTIONS(575), 1,
      anon_sym_y,
    ACTIONS(577), 1,
      anon_sym_xy,
    STATE(122), 2,
      sym__scale,
      sym_stretch,
  [3581] = 5,
    ACTIONS(579), 1,
      anon_sym_name,
    ACTIONS(581), 1,
      anon_sym_x,
    ACTIONS(583), 1,
      anon_sym_y,
    ACTIONS(585), 1,
      anon_sym_xy,
    ACTIONS(587), 1,
      anon_sym_part,
  [3597] = 5,
    ACTIONS(589), 1,
      aux_sym__input_id_token1,
    ACTIONS(591), 1,
      anon_sym_none,
    ACTIONS(593), 1,
      sym_rgb,
    ACTIONS(595), 1,
      sym_rgba,
    STATE(105), 1,
      sym_name,
  [3613] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(597), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3623] = 2,
    STATE(149), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3633] = 2,
    STATE(64), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3643] = 5,
    ACTIONS(599), 1,
      anon_sym_AT,
    ACTIONS(601), 1,
      aux_sym__originx_token1,
    ACTIONS(603), 1,
      aux_sym__originy_token1,
    STATE(308), 1,
      sym__originy,
    STATE(309), 1,
      sym__originx,
  [3659] = 2,
    STATE(149), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3669] = 2,
    STATE(64), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3679] = 2,
    STATE(62), 1,
      sym_y,
    ACTIONS(605), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3689] = 2,
    STATE(97), 1,
      sym__geometry_y_attr,
    ACTIONS(607), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3698] = 4,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    ACTIONS(611), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      aux_sym__string_token1,
    STATE(149), 1,
      sym__string,
  [3711] = 4,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
    STATE(269), 1,
      sym__relative,
  [3724] = 3,
    ACTIONS(619), 1,
      anon_sym_module,
    ACTIONS(621), 1,
      anon_sym_panel,
    STATE(165), 2,
      sym__module_export,
      sym_panel,
  [3735] = 4,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      aux_sym__string_token1,
    STATE(66), 1,
      sym__string,
  [3748] = 4,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym__offset,
    STATE(270), 1,
      sym__relative,
  [3761] = 4,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym__offset,
    STATE(271), 1,
      sym__relative,
  [3774] = 3,
    ACTIONS(633), 1,
      anon_sym_project,
    ACTIONS(635), 1,
      anon_sym_script,
    STATE(142), 2,
      sym_project,
      sym_script,
  [3785] = 4,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym__offset,
    STATE(272), 1,
      sym__relative,
  [3798] = 4,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym__offset,
    STATE(273), 1,
      sym__relative,
  [3811] = 3,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    ACTIONS(641), 1,
      aux_sym_origin_token1,
    STATE(87), 1,
      sym_offset,
  [3821] = 3,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      sym_offset,
  [3831] = 3,
    ACTIONS(645), 1,
      anon_sym_font,
    ACTIONS(647), 1,
      anon_sym_project,
    ACTIONS(649), 1,
      anon_sym_script,
  [3841] = 3,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
    STATE(291), 1,
      sym__relative,
  [3851] = 3,
    ACTIONS(651), 1,
      aux_sym__input_id_token1,
    STATE(91), 1,
      sym_name,
    STATE(96), 1,
      sym__component,
  [3861] = 3,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
    STATE(290), 1,
      sym__relative,
  [3871] = 3,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
    STATE(289), 1,
      sym__relative,
  [3881] = 3,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
    STATE(288), 1,
      sym__relative,
  [3891] = 3,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
    STATE(287), 1,
      sym__relative,
  [3901] = 3,
    ACTIONS(653), 1,
      aux_sym__offset_attr_token1,
    STATE(138), 1,
      sym__offset_xy_attr,
    STATE(278), 1,
      sym__offset_attr,
  [3911] = 3,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(268), 1,
      sym__offset,
    STATE(286), 1,
      sym__relative,
  [3921] = 3,
    ACTIONS(651), 1,
      aux_sym__input_id_token1,
    STATE(90), 1,
      sym__component,
    STATE(91), 1,
      sym_name,
  [3931] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(149), 1,
      sym_colour,
  [3941] = 3,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    ACTIONS(655), 1,
      aux_sym_origin_token1,
    STATE(117), 1,
      sym_offset,
  [3951] = 3,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(43), 1,
      sym_name,
    STATE(155), 1,
      sym_decoration,
  [3961] = 3,
    ACTIONS(659), 1,
      aux_sym__label_id_token1,
    ACTIONS(661), 1,
      anon_sym_DQUOTE,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
  [3971] = 3,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    ACTIONS(667), 1,
      aux_sym__guide_id_token1,
    STATE(250), 1,
      sym__component_id,
  [3981] = 3,
    ACTIONS(651), 1,
      aux_sym__input_id_token1,
    STATE(91), 1,
      sym_name,
    STATE(92), 1,
      sym__component,
  [3991] = 3,
    ACTIONS(669), 1,
      anon_sym_name,
    ACTIONS(671), 1,
      anon_sym_height,
    ACTIONS(673), 1,
      anon_sym_width,
  [4001] = 3,
    ACTIONS(651), 1,
      aux_sym__input_id_token1,
    STATE(91), 1,
      sym_name,
    STATE(94), 1,
      sym__component,
  [4011] = 3,
    ACTIONS(651), 1,
      aux_sym__input_id_token1,
    STATE(91), 1,
      sym_name,
    STATE(93), 1,
      sym__component,
  [4021] = 2,
    ACTIONS(675), 1,
      sym_rgb,
    ACTIONS(677), 1,
      sym_rgba,
  [4028] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(207), 1,
      sym_name,
  [4035] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(203), 1,
      sym_name,
  [4042] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(202), 1,
      sym_name,
  [4049] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(200), 1,
      sym_name,
  [4056] = 1,
    ACTIONS(679), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [4061] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(196), 1,
      sym_name,
  [4068] = 2,
    ACTIONS(681), 1,
      aux_sym__input_id_token1,
    STATE(149), 1,
      sym_font,
  [4075] = 2,
    ACTIONS(683), 1,
      anon_sym_svg,
    STATE(133), 1,
      sym_svg,
  [4082] = 2,
    ACTIONS(233), 1,
      aux_sym__offset_attr_token1,
    STATE(102), 1,
      sym__relative_attr,
  [4089] = 2,
    ACTIONS(617), 1,
      aux_sym_offset_token1,
    STATE(299), 1,
      sym__offset,
  [4096] = 2,
    ACTIONS(685), 1,
      aux_sym__guide_attr_token1,
    STATE(129), 1,
      sym__guide_attr,
  [4103] = 2,
    ACTIONS(687), 1,
      aux_sym__absolute_attr_token1,
    STATE(257), 1,
      sym__absolute_x_attr,
  [4110] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [4117] = 2,
    ACTIONS(689), 1,
      sym_height,
    ACTIONS(691), 1,
      sym_width,
  [4124] = 2,
    ACTIONS(653), 1,
      aux_sym__offset_attr_token1,
    STATE(132), 1,
      sym__offset_attr,
  [4131] = 1,
    ACTIONS(693), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4136] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(204), 1,
      sym_name,
  [4143] = 2,
    ACTIONS(695), 1,
      aux_sym__input_id_token1,
    STATE(163), 1,
      sym_part,
  [4150] = 2,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    STATE(146), 1,
      sym_offset,
  [4157] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(163), 1,
      sym_name,
  [4164] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
  [4171] = 2,
    ACTIONS(653), 1,
      aux_sym__offset_attr_token1,
    STATE(138), 1,
      sym__offset_attr,
  [4178] = 2,
    ACTIONS(653), 1,
      aux_sym__offset_attr_token1,
    STATE(137), 1,
      sym__offset_attr,
  [4185] = 2,
    ACTIONS(697), 1,
      anon_sym_scale,
    ACTIONS(699), 1,
      anon_sym_stretch,
  [4192] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(189), 1,
      sym_name,
  [4199] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(192), 1,
      sym_name,
  [4206] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(193), 1,
      sym_name,
  [4213] = 2,
    ACTIONS(603), 1,
      aux_sym__originy_token1,
    STATE(113), 1,
      sym__originy,
  [4220] = 2,
    ACTIONS(701), 1,
      aux_sym__guide_attr_token1,
    STATE(141), 1,
      sym_identifier,
  [4227] = 2,
    ACTIONS(181), 1,
      anon_sym_font,
    STATE(139), 1,
      sym__font_id,
  [4234] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(195), 1,
      sym_name,
  [4241] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(39), 1,
      sym_name,
  [4248] = 2,
    ACTIONS(703), 1,
      aux_sym__absolute_attr_token1,
    STATE(150), 1,
      sym__absolute_y_attr,
  [4255] = 2,
    ACTIONS(601), 1,
      aux_sym__originx_token1,
    STATE(113), 1,
      sym__originx,
  [4262] = 2,
    ACTIONS(657), 1,
      aux_sym__input_id_token1,
    STATE(158), 1,
      sym_name,
  [4269] = 1,
    ACTIONS(705), 1,
      sym_rgb,
  [4273] = 1,
    ACTIONS(707), 1,
      anon_sym_COMMA,
  [4277] = 1,
    ACTIONS(709), 1,
      aux_sym_absolute_token1,
  [4281] = 1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [4285] = 1,
    ACTIONS(713), 1,
      anon_sym_COMMA,
  [4289] = 1,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [4293] = 1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [4297] = 1,
    ACTIONS(719), 1,
      aux_sym_relative_token1,
  [4301] = 1,
    ACTIONS(721), 1,
      anon_sym_timestamp,
  [4305] = 1,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
  [4309] = 1,
    ACTIONS(725), 1,
      aux_sym_origin_token1,
  [4313] = 1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [4317] = 1,
    ACTIONS(729), 1,
      anon_sym_COMMA,
  [4321] = 1,
    ACTIONS(731), 1,
      anon_sym_with,
  [4325] = 1,
    ACTIONS(733), 1,
      anon_sym_COMMA,
  [4329] = 1,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [4333] = 1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [4337] = 1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [4341] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [4345] = 1,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [4349] = 1,
    ACTIONS(721), 1,
      anon_sym_gzip,
  [4353] = 1,
    ACTIONS(745), 1,
      aux_sym_origin_token1,
  [4357] = 1,
    ACTIONS(747), 1,
      aux_sym__scale_token1,
  [4361] = 1,
    ACTIONS(749), 1,
      aux_sym__scale_token1,
  [4365] = 1,
    ACTIONS(751), 1,
      anon_sym_COMMA,
  [4369] = 1,
    ACTIONS(753), 1,
      aux_sym__scale_token1,
  [4373] = 1,
    ACTIONS(755), 1,
      anon_sym_COMMA,
  [4377] = 1,
    ACTIONS(757), 1,
      anon_sym_COMMA,
  [4381] = 1,
    ACTIONS(759), 1,
      anon_sym_COMMA,
  [4385] = 1,
    ACTIONS(705), 1,
      sym_rgba,
  [4389] = 1,
    ACTIONS(761), 1,
      anon_sym_COMMA,
  [4393] = 1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
  [4397] = 1,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
  [4401] = 1,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
  [4405] = 1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
  [4409] = 1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
  [4413] = 1,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [4417] = 1,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [4421] = 1,
    ACTIONS(777), 1,
      anon_sym_SQUOTE,
  [4425] = 1,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
  [4429] = 1,
    ACTIONS(779), 1,
      anon_sym_COMMA,
  [4433] = 1,
    ACTIONS(781), 1,
      anon_sym_SQUOTE,
  [4437] = 1,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
  [4441] = 1,
    ACTIONS(783), 1,
      anon_sym_COMMA,
  [4445] = 1,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [4449] = 1,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
  [4453] = 1,
    ACTIONS(789), 1,
      anon_sym_COMMA,
  [4457] = 1,
    ACTIONS(791), 1,
      aux_sym_absolute_token1,
  [4461] = 1,
    ACTIONS(793), 1,
      aux_sym_origin_token1,
  [4465] = 1,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
  [4469] = 1,
    ACTIONS(797), 1,
      sym_width,
  [4473] = 1,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
  [4477] = 1,
    ACTIONS(801), 1,
      sym_fontsize,
  [4481] = 1,
    ACTIONS(803), 1,
      aux_sym__absolute_attr_token1,
  [4485] = 1,
    ACTIONS(805), 1,
      anon_sym_COMMA,
  [4489] = 1,
    ACTIONS(807), 1,
      anon_sym_COMMA,
  [4493] = 1,
    ACTIONS(809), 1,
      aux_sym_origin_token1,
  [4497] = 1,
    ACTIONS(811), 1,
      aux_sym__label_id_token3,
  [4501] = 1,
    ACTIONS(699), 1,
      anon_sym_stretch,
  [4505] = 1,
    ACTIONS(813), 1,
      aux_sym__label_id_token2,
  [4509] = 1,
    ACTIONS(815), 1,
      sym_width,
  [4513] = 1,
    ACTIONS(815), 1,
      sym_height,
  [4517] = 1,
    ACTIONS(817), 1,
      aux_sym__label_id_token3,
  [4521] = 1,
    ACTIONS(819), 1,
      aux_sym__label_id_token2,
  [4525] = 1,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
  [4529] = 1,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
  [4533] = 1,
    ACTIONS(825), 1,
      aux_sym__input_id_token1,
  [4537] = 1,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
  [4541] = 1,
    ACTIONS(829), 1,
      aux_sym__input_id_token1,
  [4545] = 1,
    ACTIONS(831), 1,
      aux_sym__input_id_token1,
  [4549] = 1,
    ACTIONS(833), 1,
      aux_sym__guide_id_token1,
  [4553] = 1,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
  [4557] = 1,
    ACTIONS(837), 1,
      anon_sym_fonts,
  [4561] = 1,
    ACTIONS(839), 1,
      aux_sym__guide_id_token1,
  [4565] = 1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
  [4569] = 1,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
  [4573] = 1,
    ACTIONS(843), 1,
      aux_sym_relative_token1,
  [4577] = 1,
    ACTIONS(845), 1,
      aux_sym_absolute_token1,
  [4581] = 1,
    ACTIONS(847), 1,
      aux_sym__label_id_token2,
  [4585] = 1,
    ACTIONS(849), 1,
      aux_sym__label_id_token3,
  [4589] = 1,
    ACTIONS(851), 1,
      anon_sym_COMMA,
  [4593] = 1,
    ACTIONS(853), 1,
      anon_sym_COMMA,
  [4597] = 1,
    ACTIONS(855), 1,
      aux_sym_absolute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 263,
  [SMALL_STATE(8)] = 297,
  [SMALL_STATE(9)] = 341,
  [SMALL_STATE(10)] = 385,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 529,
  [SMALL_STATE(15)] = 557,
  [SMALL_STATE(16)] = 585,
  [SMALL_STATE(17)] = 613,
  [SMALL_STATE(18)] = 641,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 697,
  [SMALL_STATE(21)] = 725,
  [SMALL_STATE(22)] = 753,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 926,
  [SMALL_STATE(28)] = 950,
  [SMALL_STATE(29)] = 989,
  [SMALL_STATE(30)] = 1025,
  [SMALL_STATE(31)] = 1059,
  [SMALL_STATE(32)] = 1081,
  [SMALL_STATE(33)] = 1103,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1147,
  [SMALL_STATE(36)] = 1169,
  [SMALL_STATE(37)] = 1200,
  [SMALL_STATE(38)] = 1220,
  [SMALL_STATE(39)] = 1254,
  [SMALL_STATE(40)] = 1274,
  [SMALL_STATE(41)] = 1302,
  [SMALL_STATE(42)] = 1336,
  [SMALL_STATE(43)] = 1359,
  [SMALL_STATE(44)] = 1382,
  [SMALL_STATE(45)] = 1403,
  [SMALL_STATE(46)] = 1426,
  [SMALL_STATE(47)] = 1449,
  [SMALL_STATE(48)] = 1472,
  [SMALL_STATE(49)] = 1493,
  [SMALL_STATE(50)] = 1516,
  [SMALL_STATE(51)] = 1537,
  [SMALL_STATE(52)] = 1558,
  [SMALL_STATE(53)] = 1577,
  [SMALL_STATE(54)] = 1596,
  [SMALL_STATE(55)] = 1619,
  [SMALL_STATE(56)] = 1637,
  [SMALL_STATE(57)] = 1659,
  [SMALL_STATE(58)] = 1679,
  [SMALL_STATE(59)] = 1697,
  [SMALL_STATE(60)] = 1717,
  [SMALL_STATE(61)] = 1737,
  [SMALL_STATE(62)] = 1757,
  [SMALL_STATE(63)] = 1779,
  [SMALL_STATE(64)] = 1799,
  [SMALL_STATE(65)] = 1817,
  [SMALL_STATE(66)] = 1834,
  [SMALL_STATE(67)] = 1859,
  [SMALL_STATE(68)] = 1876,
  [SMALL_STATE(69)] = 1891,
  [SMALL_STATE(70)] = 1908,
  [SMALL_STATE(71)] = 1925,
  [SMALL_STATE(72)] = 1942,
  [SMALL_STATE(73)] = 1957,
  [SMALL_STATE(74)] = 1972,
  [SMALL_STATE(75)] = 1987,
  [SMALL_STATE(76)] = 2002,
  [SMALL_STATE(77)] = 2017,
  [SMALL_STATE(78)] = 2034,
  [SMALL_STATE(79)] = 2051,
  [SMALL_STATE(80)] = 2076,
  [SMALL_STATE(81)] = 2101,
  [SMALL_STATE(82)] = 2118,
  [SMALL_STATE(83)] = 2135,
  [SMALL_STATE(84)] = 2150,
  [SMALL_STATE(85)] = 2165,
  [SMALL_STATE(86)] = 2182,
  [SMALL_STATE(87)] = 2199,
  [SMALL_STATE(88)] = 2213,
  [SMALL_STATE(89)] = 2227,
  [SMALL_STATE(90)] = 2241,
  [SMALL_STATE(91)] = 2255,
  [SMALL_STATE(92)] = 2279,
  [SMALL_STATE(93)] = 2293,
  [SMALL_STATE(94)] = 2307,
  [SMALL_STATE(95)] = 2321,
  [SMALL_STATE(96)] = 2335,
  [SMALL_STATE(97)] = 2349,
  [SMALL_STATE(98)] = 2363,
  [SMALL_STATE(99)] = 2377,
  [SMALL_STATE(100)] = 2391,
  [SMALL_STATE(101)] = 2407,
  [SMALL_STATE(102)] = 2421,
  [SMALL_STATE(103)] = 2435,
  [SMALL_STATE(104)] = 2449,
  [SMALL_STATE(105)] = 2463,
  [SMALL_STATE(106)] = 2477,
  [SMALL_STATE(107)] = 2491,
  [SMALL_STATE(108)] = 2505,
  [SMALL_STATE(109)] = 2519,
  [SMALL_STATE(110)] = 2543,
  [SMALL_STATE(111)] = 2557,
  [SMALL_STATE(112)] = 2581,
  [SMALL_STATE(113)] = 2595,
  [SMALL_STATE(114)] = 2609,
  [SMALL_STATE(115)] = 2623,
  [SMALL_STATE(116)] = 2637,
  [SMALL_STATE(117)] = 2659,
  [SMALL_STATE(118)] = 2673,
  [SMALL_STATE(119)] = 2687,
  [SMALL_STATE(120)] = 2701,
  [SMALL_STATE(121)] = 2715,
  [SMALL_STATE(122)] = 2729,
  [SMALL_STATE(123)] = 2743,
  [SMALL_STATE(124)] = 2757,
  [SMALL_STATE(125)] = 2771,
  [SMALL_STATE(126)] = 2785,
  [SMALL_STATE(127)] = 2799,
  [SMALL_STATE(128)] = 2813,
  [SMALL_STATE(129)] = 2827,
  [SMALL_STATE(130)] = 2841,
  [SMALL_STATE(131)] = 2855,
  [SMALL_STATE(132)] = 2869,
  [SMALL_STATE(133)] = 2883,
  [SMALL_STATE(134)] = 2897,
  [SMALL_STATE(135)] = 2911,
  [SMALL_STATE(136)] = 2925,
  [SMALL_STATE(137)] = 2939,
  [SMALL_STATE(138)] = 2953,
  [SMALL_STATE(139)] = 2967,
  [SMALL_STATE(140)] = 2981,
  [SMALL_STATE(141)] = 2995,
  [SMALL_STATE(142)] = 3009,
  [SMALL_STATE(143)] = 3023,
  [SMALL_STATE(144)] = 3037,
  [SMALL_STATE(145)] = 3051,
  [SMALL_STATE(146)] = 3065,
  [SMALL_STATE(147)] = 3079,
  [SMALL_STATE(148)] = 3093,
  [SMALL_STATE(149)] = 3107,
  [SMALL_STATE(150)] = 3121,
  [SMALL_STATE(151)] = 3135,
  [SMALL_STATE(152)] = 3167,
  [SMALL_STATE(153)] = 3181,
  [SMALL_STATE(154)] = 3195,
  [SMALL_STATE(155)] = 3209,
  [SMALL_STATE(156)] = 3223,
  [SMALL_STATE(157)] = 3237,
  [SMALL_STATE(158)] = 3251,
  [SMALL_STATE(159)] = 3265,
  [SMALL_STATE(160)] = 3279,
  [SMALL_STATE(161)] = 3293,
  [SMALL_STATE(162)] = 3307,
  [SMALL_STATE(163)] = 3321,
  [SMALL_STATE(164)] = 3335,
  [SMALL_STATE(165)] = 3351,
  [SMALL_STATE(166)] = 3365,
  [SMALL_STATE(167)] = 3379,
  [SMALL_STATE(168)] = 3393,
  [SMALL_STATE(169)] = 3407,
  [SMALL_STATE(170)] = 3430,
  [SMALL_STATE(171)] = 3453,
  [SMALL_STATE(172)] = 3476,
  [SMALL_STATE(173)] = 3498,
  [SMALL_STATE(174)] = 3519,
  [SMALL_STATE(175)] = 3532,
  [SMALL_STATE(176)] = 3545,
  [SMALL_STATE(177)] = 3564,
  [SMALL_STATE(178)] = 3581,
  [SMALL_STATE(179)] = 3597,
  [SMALL_STATE(180)] = 3613,
  [SMALL_STATE(181)] = 3623,
  [SMALL_STATE(182)] = 3633,
  [SMALL_STATE(183)] = 3643,
  [SMALL_STATE(184)] = 3659,
  [SMALL_STATE(185)] = 3669,
  [SMALL_STATE(186)] = 3679,
  [SMALL_STATE(187)] = 3689,
  [SMALL_STATE(188)] = 3698,
  [SMALL_STATE(189)] = 3711,
  [SMALL_STATE(190)] = 3724,
  [SMALL_STATE(191)] = 3735,
  [SMALL_STATE(192)] = 3748,
  [SMALL_STATE(193)] = 3761,
  [SMALL_STATE(194)] = 3774,
  [SMALL_STATE(195)] = 3785,
  [SMALL_STATE(196)] = 3798,
  [SMALL_STATE(197)] = 3811,
  [SMALL_STATE(198)] = 3821,
  [SMALL_STATE(199)] = 3831,
  [SMALL_STATE(200)] = 3841,
  [SMALL_STATE(201)] = 3851,
  [SMALL_STATE(202)] = 3861,
  [SMALL_STATE(203)] = 3871,
  [SMALL_STATE(204)] = 3881,
  [SMALL_STATE(205)] = 3891,
  [SMALL_STATE(206)] = 3901,
  [SMALL_STATE(207)] = 3911,
  [SMALL_STATE(208)] = 3921,
  [SMALL_STATE(209)] = 3931,
  [SMALL_STATE(210)] = 3941,
  [SMALL_STATE(211)] = 3951,
  [SMALL_STATE(212)] = 3961,
  [SMALL_STATE(213)] = 3971,
  [SMALL_STATE(214)] = 3981,
  [SMALL_STATE(215)] = 3991,
  [SMALL_STATE(216)] = 4001,
  [SMALL_STATE(217)] = 4011,
  [SMALL_STATE(218)] = 4021,
  [SMALL_STATE(219)] = 4028,
  [SMALL_STATE(220)] = 4035,
  [SMALL_STATE(221)] = 4042,
  [SMALL_STATE(222)] = 4049,
  [SMALL_STATE(223)] = 4056,
  [SMALL_STATE(224)] = 4061,
  [SMALL_STATE(225)] = 4068,
  [SMALL_STATE(226)] = 4075,
  [SMALL_STATE(227)] = 4082,
  [SMALL_STATE(228)] = 4089,
  [SMALL_STATE(229)] = 4096,
  [SMALL_STATE(230)] = 4103,
  [SMALL_STATE(231)] = 4110,
  [SMALL_STATE(232)] = 4117,
  [SMALL_STATE(233)] = 4124,
  [SMALL_STATE(234)] = 4131,
  [SMALL_STATE(235)] = 4136,
  [SMALL_STATE(236)] = 4143,
  [SMALL_STATE(237)] = 4150,
  [SMALL_STATE(238)] = 4157,
  [SMALL_STATE(239)] = 4164,
  [SMALL_STATE(240)] = 4171,
  [SMALL_STATE(241)] = 4178,
  [SMALL_STATE(242)] = 4185,
  [SMALL_STATE(243)] = 4192,
  [SMALL_STATE(244)] = 4199,
  [SMALL_STATE(245)] = 4206,
  [SMALL_STATE(246)] = 4213,
  [SMALL_STATE(247)] = 4220,
  [SMALL_STATE(248)] = 4227,
  [SMALL_STATE(249)] = 4234,
  [SMALL_STATE(250)] = 4241,
  [SMALL_STATE(251)] = 4248,
  [SMALL_STATE(252)] = 4255,
  [SMALL_STATE(253)] = 4262,
  [SMALL_STATE(254)] = 4269,
  [SMALL_STATE(255)] = 4273,
  [SMALL_STATE(256)] = 4277,
  [SMALL_STATE(257)] = 4281,
  [SMALL_STATE(258)] = 4285,
  [SMALL_STATE(259)] = 4289,
  [SMALL_STATE(260)] = 4293,
  [SMALL_STATE(261)] = 4297,
  [SMALL_STATE(262)] = 4301,
  [SMALL_STATE(263)] = 4305,
  [SMALL_STATE(264)] = 4309,
  [SMALL_STATE(265)] = 4313,
  [SMALL_STATE(266)] = 4317,
  [SMALL_STATE(267)] = 4321,
  [SMALL_STATE(268)] = 4325,
  [SMALL_STATE(269)] = 4329,
  [SMALL_STATE(270)] = 4333,
  [SMALL_STATE(271)] = 4337,
  [SMALL_STATE(272)] = 4341,
  [SMALL_STATE(273)] = 4345,
  [SMALL_STATE(274)] = 4349,
  [SMALL_STATE(275)] = 4353,
  [SMALL_STATE(276)] = 4357,
  [SMALL_STATE(277)] = 4361,
  [SMALL_STATE(278)] = 4365,
  [SMALL_STATE(279)] = 4369,
  [SMALL_STATE(280)] = 4373,
  [SMALL_STATE(281)] = 4377,
  [SMALL_STATE(282)] = 4381,
  [SMALL_STATE(283)] = 4385,
  [SMALL_STATE(284)] = 4389,
  [SMALL_STATE(285)] = 4393,
  [SMALL_STATE(286)] = 4397,
  [SMALL_STATE(287)] = 4401,
  [SMALL_STATE(288)] = 4405,
  [SMALL_STATE(289)] = 4409,
  [SMALL_STATE(290)] = 4413,
  [SMALL_STATE(291)] = 4417,
  [SMALL_STATE(292)] = 4421,
  [SMALL_STATE(293)] = 4425,
  [SMALL_STATE(294)] = 4429,
  [SMALL_STATE(295)] = 4433,
  [SMALL_STATE(296)] = 4437,
  [SMALL_STATE(297)] = 4441,
  [SMALL_STATE(298)] = 4445,
  [SMALL_STATE(299)] = 4449,
  [SMALL_STATE(300)] = 4453,
  [SMALL_STATE(301)] = 4457,
  [SMALL_STATE(302)] = 4461,
  [SMALL_STATE(303)] = 4465,
  [SMALL_STATE(304)] = 4469,
  [SMALL_STATE(305)] = 4473,
  [SMALL_STATE(306)] = 4477,
  [SMALL_STATE(307)] = 4481,
  [SMALL_STATE(308)] = 4485,
  [SMALL_STATE(309)] = 4489,
  [SMALL_STATE(310)] = 4493,
  [SMALL_STATE(311)] = 4497,
  [SMALL_STATE(312)] = 4501,
  [SMALL_STATE(313)] = 4505,
  [SMALL_STATE(314)] = 4509,
  [SMALL_STATE(315)] = 4513,
  [SMALL_STATE(316)] = 4517,
  [SMALL_STATE(317)] = 4521,
  [SMALL_STATE(318)] = 4525,
  [SMALL_STATE(319)] = 4529,
  [SMALL_STATE(320)] = 4533,
  [SMALL_STATE(321)] = 4537,
  [SMALL_STATE(322)] = 4541,
  [SMALL_STATE(323)] = 4545,
  [SMALL_STATE(324)] = 4549,
  [SMALL_STATE(325)] = 4553,
  [SMALL_STATE(326)] = 4557,
  [SMALL_STATE(327)] = 4561,
  [SMALL_STATE(328)] = 4565,
  [SMALL_STATE(329)] = 4569,
  [SMALL_STATE(330)] = 4573,
  [SMALL_STATE(331)] = 4577,
  [SMALL_STATE(332)] = 4581,
  [SMALL_STATE(333)] = 4585,
  [SMALL_STATE(334)] = 4589,
  [SMALL_STATE(335)] = 4593,
  [SMALL_STATE(336)] = 4597,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 19),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 21),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 21),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 18),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 17),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(303),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(199),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(248),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(194),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(190),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(326),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 14),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 22),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 14),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 13),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 11),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 11),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 10),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 14),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 9),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 9),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 12),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 8),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 12),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 16),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [835] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
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
