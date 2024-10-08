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
#define STATE_COUNT 497
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 1
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 29

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_module = 3,
  anon_sym_COMMA = 4,
  anon_sym_input = 5,
  anon_sym_output = 6,
  aux_sym__new_parameter_token1 = 7,
  anon_sym_light = 8,
  anon_sym_widget = 9,
  anon_sym_decoration = 10,
  anon_sym_decorate = 11,
  anon_sym_with = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_set = 15,
  anon_sym_module2 = 16,
  anon_sym_name = 17,
  anon_sym_height = 18,
  anon_sym_width = 19,
  anon_sym_x = 20,
  anon_sym_y = 21,
  anon_sym_xy = 22,
  anon_sym_part = 23,
  anon_sym_text = 24,
  anon_sym_font = 25,
  anon_sym_size = 26,
  anon_sym_halign = 27,
  anon_sym_valign = 28,
  anon_sym_align = 29,
  anon_sym_colour = 30,
  anon_sym_color = 31,
  anon_sym_dx = 32,
  anon_sym_dy = 33,
  anon_sym_dxy = 34,
  anon_sym_id = 35,
  anon_sym_input2 = 36,
  anon_sym_output2 = 37,
  anon_sym_parameter = 38,
  anon_sym_light2 = 39,
  anon_sym_widget2 = 40,
  aux_sym__offset_attr_token1 = 41,
  anon_sym_AT = 42,
  aux_sym__absolute_attr_token1 = 43,
  anon_sym_left = 44,
  anon_sym_centre = 45,
  anon_sym_center = 46,
  anon_sym_right = 47,
  aux_sym__geometry_x_attr_token1 = 48,
  anon_sym_top = 49,
  anon_sym_middle = 50,
  anon_sym_bottom = 51,
  aux_sym__guide_attr_token1 = 52,
  aux_sym__guide_attr_token2 = 53,
  anon_sym_delete = 54,
  anon_sym_guide = 55,
  aux_sym__guide_id_token1 = 56,
  aux_sym__input_id_token1 = 57,
  anon_sym_label = 58,
  aux_sym__label_id_token1 = 59,
  anon_sym_DQUOTE = 60,
  aux_sym__label_id_token2 = 61,
  anon_sym_SQUOTE = 62,
  aux_sym__label_id_token3 = 63,
  anon_sym_decoration2 = 64,
  anon_sym_load = 65,
  anon_sym_project = 66,
  anon_sym_script = 67,
  anon_sym_unload = 68,
  anon_sym_save = 69,
  anon_sym_export = 70,
  anon_sym_DOTh = 71,
  anon_sym_GT_GT = 72,
  anon_sym_list = 73,
  anon_sym_fonts = 74,
  anon_sym_parts = 75,
  anon_sym_decorations = 76,
  anon_sym_timestamp = 77,
  anon_sym_gzip = 78,
  sym_fontsize = 79,
  anon_sym_baseline = 80,
  anon_sym_scale = 81,
  aux_sym__scale_token1 = 82,
  anon_sym_stretch = 83,
  anon_sym_origin = 84,
  aux_sym_origin_token1 = 85,
  aux_sym__originx_token1 = 86,
  aux_sym__originy_token1 = 87,
  anon_sym_background = 88,
  anon_sym_none = 89,
  sym_rgb = 90,
  sym_rgba = 91,
  anon_sym_panel = 92,
  anon_sym_svg = 93,
  anon_sym_dark = 94,
  sym_height = 95,
  sym_width = 96,
  anon_sym_vertical = 97,
  anon_sym_horizontal = 98,
  aux_sym_offset_token1 = 99,
  aux_sym__string_token1 = 100,
  aux_sym_absolute_token1 = 101,
  aux_sym_relative_token1 = 102,
  sym_angle = 103,
  sym_command = 104,
  sym_new = 105,
  sym__new_module = 106,
  sym__new_input = 107,
  sym__new_output = 108,
  sym__new_parameter = 109,
  sym__new_light = 110,
  sym__new_widget = 111,
  sym__new_component = 112,
  sym__new_decoration = 113,
  sym_decorate = 114,
  sym__new_xy = 115,
  sym_set = 116,
  sym__module_attr = 117,
  sym__component_attr = 118,
  sym__label_attr = 119,
  sym__decoration_attr = 120,
  sym__guideline_attr = 121,
  sym__x_attr = 122,
  sym__y_attr = 123,
  sym__xy_attr = 124,
  sym__offset_attr = 125,
  sym__offset_xy_attr = 126,
  sym__offset_dxy_attr = 127,
  sym__absolute_attr = 128,
  sym__absolute_x_attr = 129,
  sym__absolute_y_attr = 130,
  sym__absolute_xy_attr = 131,
  sym__relative_attr = 132,
  sym__relative_xy_attr = 133,
  sym__geometry_x_attr = 134,
  sym__geometry_y_attr = 135,
  sym__geometry_xy_attr = 136,
  sym__guide_attr = 137,
  sym__guide_xy_attr = 138,
  sym__component_x_attr = 139,
  sym__component_y_attr = 140,
  sym__component_xy_attr = 141,
  sym_delete = 142,
  sym__guide_id = 143,
  sym__input_id = 144,
  sym__output_id = 145,
  sym__parameter_id = 146,
  sym__light_id = 147,
  sym__widget_id = 148,
  sym__label_id = 149,
  sym__decoration_id = 150,
  sym__font_id = 151,
  sym__component_id = 152,
  sym_load = 153,
  sym_unload = 154,
  sym_save = 155,
  sym_export = 156,
  sym__module_export = 157,
  sym_list = 158,
  sym_project = 159,
  sym_script = 160,
  sym__input = 161,
  sym__output = 162,
  sym__parameter = 163,
  sym__light = 164,
  sym__widget = 165,
  sym_label = 166,
  sym_font = 167,
  sym__align = 168,
  sym_halign = 169,
  sym_valign = 170,
  sym_colour = 171,
  sym_decoration = 172,
  sym__scale = 173,
  sym_stretch = 174,
  sym_origin = 175,
  sym__originx = 176,
  sym__originy = 177,
  sym_background = 178,
  sym_panel = 179,
  sym_svg = 180,
  sym_name = 181,
  sym_part = 182,
  sym_guide = 183,
  sym_identifier = 184,
  sym_vertical = 185,
  sym_horizontal = 186,
  sym_geometry = 187,
  sym_offset = 188,
  sym__offset = 189,
  sym_guideline = 190,
  sym__string = 191,
  sym_absolute = 192,
  sym_polar = 193,
  sym_relative = 194,
  sym__decorate = 195,
  sym__relative = 196,
  sym_x = 197,
  sym_y = 198,
  sym_radius = 199,
  aux_sym_command_repeat1 = 200,
  alias_sym_dy = 201,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new ",
  [anon_sym_module] = "module ",
  [anon_sym_COMMA] = ",",
  [anon_sym_input] = "input ",
  [anon_sym_output] = "output ",
  [aux_sym__new_parameter_token1] = "_new_parameter_token1",
  [anon_sym_light] = "light ",
  [anon_sym_widget] = "widget ",
  [anon_sym_decoration] = "decoration ",
  [anon_sym_decorate] = "decorate ",
  [anon_sym_with] = "with",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_set] = "set",
  [anon_sym_module2] = "module",
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
  [anon_sym_dx] = "dx",
  [anon_sym_dy] = "dy",
  [anon_sym_dxy] = "dxy",
  [anon_sym_id] = "id",
  [anon_sym_input2] = "input",
  [anon_sym_output2] = "output",
  [anon_sym_parameter] = "parameter",
  [anon_sym_light2] = "light",
  [anon_sym_widget2] = "widget",
  [aux_sym__offset_attr_token1] = "offset",
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
  [anon_sym_delete] = "delete",
  [anon_sym_guide] = "guide",
  [aux_sym__guide_id_token1] = "identifier",
  [aux_sym__input_id_token1] = "_input_id_token1",
  [anon_sym_label] = "label",
  [aux_sym__label_id_token1] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__label_id_token2] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__label_id_token3] = "identifier",
  [anon_sym_decoration2] = "decoration",
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
  [anon_sym_parts] = "parts",
  [anon_sym_decorations] = "decorations",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_gzip] = "gzip",
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
  [aux_sym_absolute_token1] = "absolute_token1",
  [aux_sym_relative_token1] = "x",
  [sym_angle] = "angle",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym__new_module] = "module",
  [sym__new_input] = "input",
  [sym__new_output] = "output",
  [sym__new_parameter] = "parameter",
  [sym__new_light] = "light",
  [sym__new_widget] = "widget",
  [sym__new_component] = "_new_component",
  [sym__new_decoration] = "decoration",
  [sym_decorate] = "decorate",
  [sym__new_xy] = "_new_xy",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__component_attr] = "_component_attr",
  [sym__label_attr] = "_label_attr",
  [sym__decoration_attr] = "_decoration_attr",
  [sym__guideline_attr] = "_guideline_attr",
  [sym__x_attr] = "x",
  [sym__y_attr] = "y",
  [sym__xy_attr] = "xy",
  [sym__offset_attr] = "_offset_attr",
  [sym__offset_xy_attr] = "_offset_xy_attr",
  [sym__offset_dxy_attr] = "_offset_dxy_attr",
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
  [sym__component_x_attr] = "input",
  [sym__component_y_attr] = "input",
  [sym__component_xy_attr] = "input",
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
  [sym__input] = "input",
  [sym__output] = "output",
  [sym__parameter] = "parameter",
  [sym__light] = "light",
  [sym__widget] = "widget",
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
  [sym_polar] = "polar",
  [sym_relative] = "relative",
  [sym__decorate] = "decorate",
  [sym__relative] = "_relative",
  [sym_x] = "x",
  [sym_y] = "y",
  [sym_radius] = "radius",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_dy] = "dy",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [aux_sym__new_parameter_token1] = aux_sym__new_parameter_token1,
  [anon_sym_light] = anon_sym_light,
  [anon_sym_widget] = anon_sym_widget,
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_module2] = anon_sym_module2,
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
  [anon_sym_dx] = anon_sym_dx,
  [anon_sym_dy] = anon_sym_dy,
  [anon_sym_dxy] = anon_sym_dxy,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_input2] = anon_sym_input2,
  [anon_sym_output2] = anon_sym_output2,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_light2] = anon_sym_light2,
  [anon_sym_widget2] = anon_sym_widget2,
  [aux_sym__offset_attr_token1] = sym_offset,
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
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_guide] = anon_sym_guide,
  [aux_sym__guide_id_token1] = sym_identifier,
  [aux_sym__input_id_token1] = aux_sym__input_id_token1,
  [anon_sym_label] = anon_sym_label,
  [aux_sym__label_id_token1] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__label_id_token2] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__label_id_token3] = sym_identifier,
  [anon_sym_decoration2] = anon_sym_decoration2,
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
  [anon_sym_parts] = anon_sym_parts,
  [anon_sym_decorations] = anon_sym_decorations,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_gzip] = anon_sym_gzip,
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
  [aux_sym_absolute_token1] = aux_sym_absolute_token1,
  [aux_sym_relative_token1] = sym_x,
  [sym_angle] = sym_angle,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym__new_module] = sym__new_module,
  [sym__new_input] = sym__new_input,
  [sym__new_output] = sym__new_output,
  [sym__new_parameter] = sym__new_parameter,
  [sym__new_light] = sym__new_light,
  [sym__new_widget] = sym__new_widget,
  [sym__new_component] = sym__new_component,
  [sym__new_decoration] = sym_decoration,
  [sym_decorate] = sym_decorate,
  [sym__new_xy] = sym__new_xy,
  [sym_set] = sym_set,
  [sym__module_attr] = sym__new_module,
  [sym__component_attr] = sym__component_attr,
  [sym__label_attr] = sym__label_attr,
  [sym__decoration_attr] = sym__decoration_attr,
  [sym__guideline_attr] = sym__guideline_attr,
  [sym__x_attr] = sym_x,
  [sym__y_attr] = sym_y,
  [sym__xy_attr] = sym__xy_attr,
  [sym__offset_attr] = sym__offset_attr,
  [sym__offset_xy_attr] = sym__offset_xy_attr,
  [sym__offset_dxy_attr] = sym__offset_dxy_attr,
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
  [sym__component_x_attr] = sym__new_input,
  [sym__component_y_attr] = sym__new_input,
  [sym__component_xy_attr] = sym__new_input,
  [sym_delete] = sym_delete,
  [sym__guide_id] = sym_guide,
  [sym__input_id] = sym__new_input,
  [sym__output_id] = sym__new_output,
  [sym__parameter_id] = sym__new_parameter,
  [sym__light_id] = sym__new_light,
  [sym__widget_id] = sym__new_widget,
  [sym__label_id] = sym_label,
  [sym__decoration_id] = sym_decoration,
  [sym__font_id] = sym_font,
  [sym__component_id] = sym__component_id,
  [sym_load] = sym_load,
  [sym_unload] = sym_unload,
  [sym_save] = sym_save,
  [sym_export] = sym_export,
  [sym__module_export] = sym__new_module,
  [sym_list] = sym_list,
  [sym_project] = sym_project,
  [sym_script] = sym_script,
  [sym__input] = sym__new_input,
  [sym__output] = sym__new_output,
  [sym__parameter] = sym__new_parameter,
  [sym__light] = sym__new_light,
  [sym__widget] = sym__new_widget,
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
  [sym_polar] = sym_polar,
  [sym_relative] = sym_relative,
  [sym__decorate] = sym_decorate,
  [sym__relative] = sym__relative,
  [sym_x] = sym_x,
  [sym_y] = sym_y,
  [sym_radius] = sym_radius,
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__new_parameter_token1] = {
    .visible = false,
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
  [anon_sym_decoration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decorate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
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
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module2] = {
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
  [anon_sym_dx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_light2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widget2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__offset_attr_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym__input_id_token1] = {
    .visible = false,
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
  [anon_sym_decoration2] = {
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
  [anon_sym_parts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_decorations] = {
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
    .visible = false,
    .named = false,
  },
  [aux_sym_relative_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_angle] = {
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
  [sym__new_module] = {
    .visible = true,
    .named = true,
  },
  [sym__new_input] = {
    .visible = true,
    .named = true,
  },
  [sym__new_output] = {
    .visible = true,
    .named = true,
  },
  [sym__new_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__new_light] = {
    .visible = true,
    .named = true,
  },
  [sym__new_widget] = {
    .visible = true,
    .named = true,
  },
  [sym__new_component] = {
    .visible = false,
    .named = true,
  },
  [sym__new_decoration] = {
    .visible = true,
    .named = true,
  },
  [sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__new_xy] = {
    .visible = false,
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
    .visible = false,
    .named = true,
  },
  [sym__offset_xy_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__offset_dxy_attr] = {
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
  [sym__component_x_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__component_y_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__component_xy_attr] = {
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
  [sym_polar] = {
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
  [sym_radius] = {
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
    [0] = aux_sym__originx_token1,
  },
  [2] = {
    [1] = sym_font,
  },
  [3] = {
    [1] = sym_project,
  },
  [4] = {
    [1] = sym_script,
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
    [2] = sym_y,
  },
  [9] = {
    [0] = sym_absolute,
  },
  [10] = {
    [2] = sym__offset,
  },
  [11] = {
    [2] = alias_sym_dy,
  },
  [12] = {
    [1] = sym__new_light,
  },
  [13] = {
    [1] = sym_absolute,
  },
  [14] = {
    [1] = aux_sym__string_token1,
  },
  [15] = {
    [1] = sym_x,
    [3] = sym_y,
  },
  [16] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [17] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [18] = {
    [0] = sym__offset,
    [2] = alias_sym_dy,
  },
  [19] = {
    [2] = sym__new_output,
  },
  [20] = {
    [2] = sym__new_parameter,
  },
  [21] = {
    [2] = sym__new_light,
  },
  [22] = {
    [2] = sym__new_widget,
  },
  [23] = {
    [1] = sym__new_input,
  },
  [24] = {
    [1] = sym__new_output,
  },
  [25] = {
    [1] = sym__new_parameter,
  },
  [26] = {
    [1] = sym__new_widget,
  },
  [27] = {
    [1] = sym_label,
  },
  [28] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__offset_attr, 5,
    sym__offset_attr,
    alias_sym_dy,
    sym__offset,
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
  sym__component_x_attr, 5,
    sym__new_input,
    sym__new_light,
    sym__new_output,
    sym__new_parameter,
    sym__new_widget,
  sym__component_y_attr, 5,
    sym__new_input,
    sym__new_light,
    sym__new_output,
    sym__new_parameter,
    sym__new_widget,
  sym__component_xy_attr, 5,
    sym__new_input,
    sym__new_light,
    sym__new_output,
    sym__new_parameter,
    sym__new_widget,
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
  [54] = 52,
  [55] = 52,
  [56] = 56,
  [57] = 31,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 15,
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
  [77] = 77,
  [78] = 78,
  [79] = 33,
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
  [93] = 22,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 20,
  [102] = 30,
  [103] = 31,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 32,
  [110] = 22,
  [111] = 33,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 29,
  [118] = 118,
  [119] = 19,
  [120] = 120,
  [121] = 92,
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
  [161] = 131,
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
  [208] = 132,
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
  [227] = 130,
  [228] = 228,
  [229] = 229,
  [230] = 21,
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
  [241] = 15,
  [242] = 242,
  [243] = 240,
  [244] = 240,
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
  [255] = 242,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 242,
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
  [292] = 19,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 294,
  [297] = 297,
  [298] = 298,
  [299] = 21,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 294,
  [305] = 305,
  [306] = 294,
  [307] = 307,
  [308] = 301,
  [309] = 301,
  [310] = 310,
  [311] = 311,
  [312] = 15,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 21,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 326,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 326,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 326,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 123,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 32,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 107,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 30,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 20,
  [416] = 416,
  [417] = 417,
  [418] = 30,
  [419] = 31,
  [420] = 420,
  [421] = 421,
  [422] = 107,
  [423] = 32,
  [424] = 22,
  [425] = 33,
  [426] = 426,
  [427] = 427,
  [428] = 29,
  [429] = 19,
  [430] = 122,
  [431] = 123,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 122,
  [436] = 436,
  [437] = 20,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 29,
  [456] = 410,
  [457] = 451,
  [458] = 383,
  [459] = 459,
  [460] = 460,
  [461] = 381,
  [462] = 380,
  [463] = 371,
  [464] = 464,
  [465] = 433,
  [466] = 466,
  [467] = 451,
  [468] = 383,
  [469] = 469,
  [470] = 470,
  [471] = 371,
  [472] = 472,
  [473] = 433,
  [474] = 474,
  [475] = 383,
  [476] = 476,
  [477] = 371,
  [478] = 478,
  [479] = 440,
  [480] = 439,
  [481] = 436,
  [482] = 472,
  [483] = 406,
  [484] = 357,
  [485] = 485,
  [486] = 486,
  [487] = 440,
  [488] = 439,
  [489] = 436,
  [490] = 357,
  [491] = 491,
  [492] = 440,
  [493] = 439,
  [494] = 357,
  [495] = 448,
  [496] = 448,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(400);
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(649);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '0') ADVANCE(449);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == 'x') ADVANCE(421);
      if (lookahead == 'y') ADVANCE(422);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(405);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(406);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(409);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '\'') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(702);
      if (lookahead != 0) ADVANCE(703);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(646);
      if (lookahead == '\'') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(642);
      if (lookahead != 0) ADVANCE(643);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == 'n') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(571);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(571);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(536);
      if (lookahead == 'm') ADVANCE(520);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(257);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == 'w') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == 'w') ADVANCE(523);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(682);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(682);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'U') ADVANCE(694);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '5') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'H') ADVANCE(696);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 176) ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(705);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(705);
      if (lookahead == 'm') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '8') ADVANCE(54);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == 'w') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'U') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == '5') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == '5') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == '5') ADVANCE(236);
      END_STATE();
    case 46:
      if (lookahead == '5') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 47:
      if (lookahead == '5') ADVANCE(236);
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 48:
      if (lookahead == ';') ADVANCE(401);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(666);
      END_STATE();
    case 50:
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'H') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'H') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 'H') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(433);
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(535);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead == 'v') ADVANCE(508);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(655);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(659);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(685);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(433);
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(314);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(327);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(692);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(708);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(665);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(412);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(680);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 201:
      if (lookahead == 'j') ADVANCE(119);
      END_STATE();
    case 202:
      if (lookahead == 'k') ADVANCE(693);
      END_STATE();
    case 203:
      if (lookahead == 'k') ADVANCE(161);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(682);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(701);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(695);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(460);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(684);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(564);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(704);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(705);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(477);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(673);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(672);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(684);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(669);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'z') ADVANCE(187);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 358:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 359:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 360:
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 361:
      if (lookahead == 'w') ADVANCE(1);
      END_STATE();
    case 362:
      if (lookahead == 'x') ADVANCE(283);
      END_STATE();
    case 363:
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 364:
      if (lookahead == 'z') ADVANCE(116);
      END_STATE();
    case 365:
      if (lookahead == 'z') ADVANCE(272);
      END_STATE();
    case 366:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(682);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(682);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(705);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(705);
      if (lookahead == 'm') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(371)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(690);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(688);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 385:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 387:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 388:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 389:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 390:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 391:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 392:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 393:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 394:
      if (eof) ADVANCE(400);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(574);
      if (lookahead == 'c') ADVANCE(593);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead == 'm') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(609);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 395:
      if (eof) ADVANCE(400);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(609);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 396:
      if (eof) ADVANCE(400);
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(421);
      if (lookahead == 'y') ADVANCE(422);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 397:
      if (eof) ADVANCE(400);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '@') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == 'w') ADVANCE(184);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 398:
      if (eof) ADVANCE(400);
      if (lookahead == ',') ADVANCE(404);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(254);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 399:
      if (eof) ADVANCE(400);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_module2);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_dy);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_dxy);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_input2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_output2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_light2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_widget2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(456);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(457);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'H') ADVANCE(477);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == 'H') ADVANCE(477);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(477);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 176) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(477);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'b') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == 'H') ADVANCE(564);
      if (lookahead == 'm') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(564);
      if (lookahead == 'm') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(646);
      if (lookahead == '\'') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(643);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(648);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(643);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(236);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(645);
      if (lookahead == '\'') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == '5') ADVANCE(236);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_angle);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 394},
  [3] = {.lex_state = 394},
  [4] = {.lex_state = 394},
  [5] = {.lex_state = 394},
  [6] = {.lex_state = 396},
  [7] = {.lex_state = 396},
  [8] = {.lex_state = 396},
  [9] = {.lex_state = 396},
  [10] = {.lex_state = 396},
  [11] = {.lex_state = 396},
  [12] = {.lex_state = 396},
  [13] = {.lex_state = 396},
  [14] = {.lex_state = 396},
  [15] = {.lex_state = 394},
  [16] = {.lex_state = 396},
  [17] = {.lex_state = 396},
  [18] = {.lex_state = 396},
  [19] = {.lex_state = 394},
  [20] = {.lex_state = 394},
  [21] = {.lex_state = 396},
  [22] = {.lex_state = 394},
  [23] = {.lex_state = 394},
  [24] = {.lex_state = 394},
  [25] = {.lex_state = 394},
  [26] = {.lex_state = 394},
  [27] = {.lex_state = 394},
  [28] = {.lex_state = 394},
  [29] = {.lex_state = 394},
  [30] = {.lex_state = 394},
  [31] = {.lex_state = 394},
  [32] = {.lex_state = 394},
  [33] = {.lex_state = 394},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 396},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 396},
  [42] = {.lex_state = 397},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 81},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 81},
  [57] = {.lex_state = 397},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 396},
  [63] = {.lex_state = 395},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 396},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 397},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 396},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 397},
  [86] = {.lex_state = 398},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 397},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 395},
  [91] = {.lex_state = 397},
  [92] = {.lex_state = 399},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 396},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 395},
  [102] = {.lex_state = 395},
  [103] = {.lex_state = 395},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 395},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 395},
  [110] = {.lex_state = 395},
  [111] = {.lex_state = 395},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 396},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 395},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 395},
  [120] = {.lex_state = 397},
  [121] = {.lex_state = 398},
  [122] = {.lex_state = 395},
  [123] = {.lex_state = 395},
  [124] = {.lex_state = 18},
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
  [136] = {.lex_state = 396},
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
  [161] = {.lex_state = 50},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 81},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
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
  [226] = {.lex_state = 396},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 22},
  [232] = {.lex_state = 16},
  [233] = {.lex_state = 394},
  [234] = {.lex_state = 394},
  [235] = {.lex_state = 394},
  [236] = {.lex_state = 394},
  [237] = {.lex_state = 394},
  [238] = {.lex_state = 13},
  [239] = {.lex_state = 396},
  [240] = {.lex_state = 18},
  [241] = {.lex_state = 22},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 397},
  [247] = {.lex_state = 396},
  [248] = {.lex_state = 396},
  [249] = {.lex_state = 396},
  [250] = {.lex_state = 18},
  [251] = {.lex_state = 394},
  [252] = {.lex_state = 394},
  [253] = {.lex_state = 394},
  [254] = {.lex_state = 394},
  [255] = {.lex_state = 18},
  [256] = {.lex_state = 396},
  [257] = {.lex_state = 394},
  [258] = {.lex_state = 394},
  [259] = {.lex_state = 18},
  [260] = {.lex_state = 396},
  [261] = {.lex_state = 396},
  [262] = {.lex_state = 18},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 397},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 396},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 397},
  [273] = {.lex_state = 394},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 14},
  [283] = {.lex_state = 14},
  [284] = {.lex_state = 14},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 14},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 397},
  [293] = {.lex_state = 394},
  [294] = {.lex_state = 81},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 81},
  [297] = {.lex_state = 21},
  [298] = {.lex_state = 23},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 394},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 81},
  [305] = {.lex_state = 394},
  [306] = {.lex_state = 81},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 394},
  [309] = {.lex_state = 394},
  [310] = {.lex_state = 14},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 14},
  [313] = {.lex_state = 394},
  [314] = {.lex_state = 14},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 394},
  [319] = {.lex_state = 23},
  [320] = {.lex_state = 14},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 14},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 81},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 23},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 371},
  [333] = {.lex_state = 81},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 23},
  [336] = {.lex_state = 23},
  [337] = {.lex_state = 81},
  [338] = {.lex_state = 14},
  [339] = {.lex_state = 396},
  [340] = {.lex_state = 395},
  [341] = {.lex_state = 371},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 23},
  [344] = {.lex_state = 397},
  [345] = {.lex_state = 397},
  [346] = {.lex_state = 394},
  [347] = {.lex_state = 14},
  [348] = {.lex_state = 81},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 14},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 41},
  [354] = {.lex_state = 14},
  [355] = {.lex_state = 14},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 13},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 81},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 41},
  [379] = {.lex_state = 396},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 13},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 394},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 394},
  [389] = {.lex_state = 647},
  [390] = {.lex_state = 652},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 394},
  [395] = {.lex_state = 14},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 652},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 21},
  [411] = {.lex_state = 14},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 14},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 14},
  [416] = {.lex_state = 394},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 14},
  [419] = {.lex_state = 14},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 14},
  [422] = {.lex_state = 14},
  [423] = {.lex_state = 14},
  [424] = {.lex_state = 14},
  [425] = {.lex_state = 14},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 14},
  [429] = {.lex_state = 14},
  [430] = {.lex_state = 14},
  [431] = {.lex_state = 14},
  [432] = {.lex_state = 14},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 14},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 395},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 13},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 394},
  [454] = {.lex_state = 14},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 21},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 81},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 20},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 81},
  [472] = {.lex_state = 647},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 20},
  [476] = {.lex_state = 396},
  [477] = {.lex_state = 81},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 647},
  [483] = {.lex_state = 652},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__new_parameter_token1] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_module2] = ACTIONS(1),
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
    [anon_sym_dx] = ACTIONS(1),
    [anon_sym_dy] = ACTIONS(1),
    [anon_sym_dxy] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_input2] = ACTIONS(1),
    [anon_sym_output2] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_light2] = ACTIONS(1),
    [anon_sym_widget2] = ACTIONS(1),
    [aux_sym__offset_attr_token1] = ACTIONS(1),
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
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_decoration2] = ACTIONS(1),
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
    [sym_angle] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(452),
    [sym_new] = STATE(38),
    [sym_decorate] = STATE(38),
    [sym_set] = STATE(38),
    [sym_delete] = STATE(38),
    [sym_load] = STATE(38),
    [sym_unload] = STATE(38),
    [sym_save] = STATE(38),
    [sym_export] = STATE(38),
    [sym_list] = STATE(38),
    [aux_sym_command_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_new] = ACTIONS(7),
    [anon_sym_decorate] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(11),
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
    STATE(9), 1,
      sym_font,
    STATE(59), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(192), 1,
      sym_colour,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
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
    ACTIONS(27), 7,
      anon_sym_set,
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
    STATE(7), 1,
      sym_font,
    STATE(71), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(221), 1,
      sym_colour,
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
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(43), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [110] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(51), 1,
      sym_fontsize,
    STATE(10), 1,
      sym_font,
    STATE(58), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(139), 1,
      sym_colour,
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
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(49), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [165] = 13,
    ACTIONS(33), 1,
      aux_sym__input_id_token1,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(57), 1,
      sym_fontsize,
    STATE(6), 1,
      sym_font,
    STATE(66), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(137), 1,
      sym_colour,
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
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(55), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [220] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(65), 1,
      sym_fontsize,
    STATE(68), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(135), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [267] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(69), 1,
      sym_fontsize,
    STATE(69), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(206), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [314] = 16,
    ACTIONS(71), 1,
      anon_sym_module2,
    ACTIONS(73), 1,
      anon_sym_input2,
    ACTIONS(75), 1,
      anon_sym_output2,
    ACTIONS(77), 1,
      anon_sym_parameter,
    ACTIONS(79), 1,
      anon_sym_light2,
    ACTIONS(81), 1,
      anon_sym_widget2,
    ACTIONS(83), 1,
      anon_sym_guide,
    ACTIONS(85), 1,
      anon_sym_label,
    ACTIONS(87), 1,
      anon_sym_decoration2,
    ACTIONS(89), 1,
      anon_sym_origin,
    ACTIONS(91), 1,
      anon_sym_background,
    STATE(53), 1,
      sym__guide_id,
    STATE(142), 1,
      sym__label_id,
    STATE(229), 1,
      sym__decoration_id,
    STATE(245), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(141), 7,
      sym__module_attr,
      sym__component_attr,
      sym__label_attr,
      sym__decoration_attr,
      sym__guideline_attr,
      sym_origin,
      sym_background,
  [373] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(95), 1,
      sym_fontsize,
    STATE(61), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(145), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [420] = 10,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    ACTIONS(57), 1,
      sym_fontsize,
    STATE(66), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(137), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [467] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(68), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(135), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [511] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(61), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(145), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [555] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(60), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(134), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(97), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [599] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(58), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(139), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [643] = 4,
    ACTIONS(103), 1,
      aux_sym_offset_token1,
    STATE(19), 1,
      sym_offset,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(101), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [677] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(66), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(137), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [721] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(59), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(192), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [765] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(69), 1,
      sym__align,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(206), 1,
      sym_colour,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [809] = 2,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(107), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [837] = 2,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(111), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [865] = 2,
    ACTIONS(115), 4,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
      sym_angle,
    ACTIONS(113), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_height,
      aux_sym_offset_token1,
  [893] = 2,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(119), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [921] = 2,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(123), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [949] = 2,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(127), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [977] = 2,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(131), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1005] = 2,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(135), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1033] = 2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(139), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1061] = 2,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(143), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1089] = 2,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(147), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1117] = 2,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(151), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1145] = 2,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(155), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1173] = 2,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(159), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1201] = 2,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(163), 17,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [1229] = 2,
    ACTIONS(167), 1,
      anon_sym_x,
    ACTIONS(165), 21,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
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
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1256] = 2,
    ACTIONS(171), 1,
      sym_rgb,
    ACTIONS(169), 21,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_fontsize,
      anon_sym_baseline,
      sym_rgba,
  [1283] = 2,
    ACTIONS(175), 1,
      anon_sym_x,
    ACTIONS(173), 21,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
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
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1310] = 12,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_new,
    ACTIONS(185), 1,
      anon_sym_decorate,
    ACTIONS(188), 1,
      anon_sym_set,
    ACTIONS(191), 1,
      anon_sym_delete,
    ACTIONS(194), 1,
      anon_sym_load,
    ACTIONS(197), 1,
      anon_sym_unload,
    ACTIONS(200), 1,
      anon_sym_save,
    ACTIONS(203), 1,
      anon_sym_export,
    ACTIONS(206), 1,
      anon_sym_list,
    STATE(37), 10,
      sym_new,
      sym_decorate,
      sym_set,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [1356] = 12,
    ACTIONS(7), 1,
      anon_sym_new,
    ACTIONS(9), 1,
      anon_sym_decorate,
    ACTIONS(11), 1,
      anon_sym_set,
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
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      sym_comment,
    STATE(37), 10,
      sym_new,
      sym_decorate,
      sym_set,
      sym_delete,
      sym_load,
      sym_unload,
      sym_save,
      sym_export,
      sym_list,
      aux_sym_command_repeat1,
  [1402] = 11,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      sym_angle,
    STATE(222), 1,
      sym__xy_attr,
    STATE(356), 1,
      sym__geometry_x_attr,
    STATE(443), 1,
      sym__relative_attr,
    STATE(445), 1,
      sym__guide_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1443] = 11,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      sym_angle,
    STATE(217), 1,
      sym__xy_attr,
    STATE(356), 1,
      sym__geometry_x_attr,
    STATE(443), 1,
      sym__relative_attr,
    STATE(445), 1,
      sym__guide_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1484] = 10,
    ACTIONS(73), 1,
      anon_sym_input2,
    ACTIONS(75), 1,
      anon_sym_output2,
    ACTIONS(77), 1,
      anon_sym_parameter,
    ACTIONS(79), 1,
      anon_sym_light2,
    ACTIONS(81), 1,
      anon_sym_widget2,
    ACTIONS(85), 1,
      anon_sym_label,
    ACTIONS(87), 1,
      anon_sym_decoration2,
    ACTIONS(225), 1,
      anon_sym_font,
    ACTIONS(227), 1,
      anon_sym_guide,
    STATE(148), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1523] = 10,
    ACTIONS(229), 1,
      anon_sym_module,
    ACTIONS(231), 1,
      anon_sym_input,
    ACTIONS(233), 1,
      anon_sym_output,
    ACTIONS(235), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(237), 1,
      anon_sym_light,
    ACTIONS(239), 1,
      anon_sym_widget,
    ACTIONS(241), 1,
      anon_sym_decoration,
    ACTIONS(243), 1,
      anon_sym_guide,
    ACTIONS(245), 1,
      anon_sym_label,
    STATE(128), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1562] = 11,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(223), 1,
      sym_angle,
    STATE(205), 1,
      sym__xy_attr,
    STATE(356), 1,
      sym__geometry_x_attr,
    STATE(443), 1,
      sym__relative_attr,
    STATE(445), 1,
      sym__guide_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(212), 5,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
      sym_polar,
  [1603] = 2,
    ACTIONS(249), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(247), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1626] = 2,
    ACTIONS(253), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(251), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_dy,
      anon_sym_dxy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1649] = 2,
    ACTIONS(257), 1,
      anon_sym_x,
    ACTIONS(255), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1671] = 8,
    ACTIONS(261), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(263), 1,
      anon_sym_vertical,
    ACTIONS(265), 1,
      anon_sym_horizontal,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
    STATE(346), 1,
      sym_identifier,
    STATE(168), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(259), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1705] = 2,
    ACTIONS(271), 1,
      anon_sym_x,
    ACTIONS(269), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1727] = 2,
    ACTIONS(275), 1,
      anon_sym_x,
    ACTIONS(273), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1749] = 2,
    ACTIONS(279), 1,
      anon_sym_x,
    ACTIONS(277), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1771] = 2,
    ACTIONS(283), 1,
      anon_sym_x,
    ACTIONS(281), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1793] = 8,
    ACTIONS(285), 1,
      anon_sym_input2,
    ACTIONS(287), 1,
      anon_sym_output2,
    ACTIONS(289), 1,
      anon_sym_parameter,
    ACTIONS(291), 1,
      anon_sym_light2,
    ACTIONS(293), 1,
      anon_sym_widget2,
    STATE(448), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(451), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1826] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(297), 1,
      anon_sym_id,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(303), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(129), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1857] = 8,
    ACTIONS(285), 1,
      anon_sym_input2,
    ACTIONS(287), 1,
      anon_sym_output2,
    ACTIONS(289), 1,
      anon_sym_parameter,
    ACTIONS(291), 1,
      anon_sym_light2,
    ACTIONS(293), 1,
      anon_sym_widget2,
    STATE(496), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(467), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1890] = 8,
    ACTIONS(285), 1,
      anon_sym_input2,
    ACTIONS(287), 1,
      anon_sym_output2,
    ACTIONS(289), 1,
      anon_sym_parameter,
    ACTIONS(291), 1,
      anon_sym_light2,
    ACTIONS(293), 1,
      anon_sym_widget2,
    STATE(495), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(457), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1923] = 6,
    ACTIONS(261), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(263), 1,
      anon_sym_vertical,
    ACTIONS(265), 1,
      anon_sym_horizontal,
    STATE(47), 1,
      sym_identifier,
    STATE(223), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(259), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1951] = 1,
    ACTIONS(153), 15,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [1969] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(137), 1,
      sym_colour,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1992] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(145), 1,
      sym_colour,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2015] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(133), 1,
      sym_colour,
    ACTIONS(305), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2038] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(139), 1,
      sym_colour,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2061] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(105), 1,
      sym_offset,
    ACTIONS(307), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2082] = 4,
    ACTIONS(309), 1,
      aux_sym_offset_token1,
    STATE(119), 1,
      sym_offset,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(101), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2105] = 8,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      aux_sym_relative_token1,
    ACTIONS(317), 1,
      sym_angle,
    STATE(101), 1,
      sym_polar,
    STATE(489), 1,
      sym_x,
    STATE(90), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2136] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(104), 1,
      sym_offset,
    ACTIONS(319), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2157] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(135), 1,
      sym_colour,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2180] = 2,
    ACTIONS(323), 1,
      sym_rgb,
    ACTIONS(321), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2199] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(134), 1,
      sym_colour,
    ACTIONS(97), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2222] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(192), 1,
      sym_colour,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2245] = 4,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__scale,
    STATE(224), 1,
      sym_stretch,
    ACTIONS(325), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2268] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(206), 1,
      sym_colour,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2291] = 8,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      aux_sym_relative_token1,
    STATE(436), 1,
      sym_x,
    STATE(437), 1,
      sym_polar,
    STATE(438), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2322] = 2,
    ACTIONS(337), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(335), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [2341] = 8,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      aux_sym_relative_token1,
    ACTIONS(345), 1,
      sym_angle,
    STATE(415), 1,
      sym_polar,
    STATE(481), 1,
      sym_x,
    STATE(310), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2372] = 8,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      aux_sym_relative_token1,
    ACTIONS(353), 1,
      sym_angle,
    STATE(20), 1,
      sym_polar,
    STATE(377), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2403] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      sym_rgb,
    ACTIONS(355), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2424] = 3,
    ACTIONS(359), 1,
      sym_rgb,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(355), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2445] = 2,
    ACTIONS(365), 1,
      sym_rgb,
    ACTIONS(363), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2464] = 1,
    ACTIONS(161), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2480] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym__x_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2508] = 1,
    ACTIONS(369), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2524] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(159), 1,
      sym_offset,
    ACTIONS(371), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2544] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__x_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2572] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__x_attr,
    ACTIONS(219), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(207), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2600] = 1,
    ACTIONS(373), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [2616] = 2,
    ACTIONS(377), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(375), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2634] = 3,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_stretch,
    ACTIONS(379), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2654] = 3,
    ACTIONS(223), 1,
      sym_angle,
    STATE(164), 1,
      sym_polar,
    ACTIONS(383), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2674] = 3,
    ACTIONS(387), 1,
      anon_sym_light2,
    ACTIONS(389), 1,
      anon_sym_dark,
    ACTIONS(385), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2694] = 4,
    ACTIONS(395), 1,
      aux_sym__input_id_token1,
    STATE(181), 1,
      sym_part,
    ACTIONS(391), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(393), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2716] = 3,
    ACTIONS(223), 1,
      sym_angle,
    STATE(162), 1,
      sym_polar,
    ACTIONS(397), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2736] = 2,
    ACTIONS(401), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(399), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [2754] = 1,
    ACTIONS(117), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2770] = 2,
    ACTIONS(405), 1,
      sym_rgb,
    ACTIONS(403), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [2788] = 3,
    ACTIONS(409), 1,
      anon_sym_timestamp,
    ACTIONS(411), 1,
      anon_sym_gzip,
    ACTIONS(407), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2808] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(178), 1,
      sym_offset,
    ACTIONS(413), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2828] = 1,
    ACTIONS(415), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2843] = 2,
    ACTIONS(419), 1,
      anon_sym_timestamp,
    ACTIONS(417), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2860] = 8,
    ACTIONS(421), 1,
      anon_sym_input2,
    ACTIONS(423), 1,
      anon_sym_output2,
    ACTIONS(425), 1,
      anon_sym_parameter,
    ACTIONS(427), 1,
      anon_sym_light2,
    ACTIONS(429), 1,
      anon_sym_widget2,
    ACTIONS(431), 1,
      anon_sym_label,
    STATE(474), 1,
      sym_x,
    ACTIONS(295), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2889] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__y_attr,
    ACTIONS(303), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2916] = 2,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(111), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2933] = 2,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(151), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2950] = 2,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(155), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2967] = 1,
    ACTIONS(435), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2982] = 1,
    ACTIONS(437), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2997] = 2,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(439), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3014] = 2,
    ACTIONS(443), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(445), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3031] = 2,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(439), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3048] = 2,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(159), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3065] = 2,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(119), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3082] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(163), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3099] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym__y_attr,
    ACTIONS(303), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3126] = 1,
    ACTIONS(449), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3141] = 8,
    ACTIONS(451), 1,
      anon_sym_input2,
    ACTIONS(453), 1,
      anon_sym_output2,
    ACTIONS(455), 1,
      anon_sym_parameter,
    ACTIONS(457), 1,
      anon_sym_light2,
    ACTIONS(459), 1,
      anon_sym_widget2,
    ACTIONS(461), 1,
      anon_sym_scale,
    ACTIONS(463), 1,
      anon_sym_stretch,
    STATE(491), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3170] = 2,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(465), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3187] = 2,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(465), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3204] = 2,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(147), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3221] = 1,
    ACTIONS(471), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3236] = 2,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(107), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3253] = 1,
    ACTIONS(473), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_angle,
  [3268] = 2,
    ACTIONS(475), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(399), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3285] = 2,
    ACTIONS(477), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(479), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3302] = 2,
    ACTIONS(481), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(483), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3319] = 7,
    ACTIONS(221), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__y_attr,
    ACTIONS(303), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(209), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [3346] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(485), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3363] = 1,
    ACTIONS(489), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3377] = 1,
    ACTIONS(491), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3391] = 1,
    ACTIONS(493), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3405] = 1,
    ACTIONS(495), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3419] = 1,
    ACTIONS(497), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3433] = 1,
    ACTIONS(499), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3447] = 1,
    ACTIONS(501), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3461] = 1,
    ACTIONS(503), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3475] = 1,
    ACTIONS(305), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3489] = 1,
    ACTIONS(97), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3503] = 5,
    STATE(76), 1,
      sym_valign,
    STATE(77), 1,
      sym_halign,
    STATE(217), 1,
      sym__align,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3525] = 1,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3539] = 1,
    ACTIONS(505), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3553] = 1,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3567] = 1,
    ACTIONS(465), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3581] = 1,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3595] = 10,
    ACTIONS(509), 1,
      anon_sym_x,
    ACTIONS(511), 1,
      anon_sym_y,
    ACTIONS(513), 1,
      anon_sym_xy,
    ACTIONS(515), 1,
      anon_sym_text,
    ACTIONS(517), 1,
      anon_sym_font,
    ACTIONS(519), 1,
      anon_sym_size,
    ACTIONS(521), 1,
      anon_sym_halign,
    ACTIONS(523), 1,
      anon_sym_valign,
    ACTIONS(525), 1,
      anon_sym_align,
    ACTIONS(527), 2,
      anon_sym_colour,
      anon_sym_color,
  [3627] = 1,
    ACTIONS(529), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3641] = 1,
    ACTIONS(531), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3655] = 1,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3669] = 1,
    ACTIONS(533), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3683] = 1,
    ACTIONS(535), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3697] = 1,
    ACTIONS(537), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3711] = 1,
    ACTIONS(539), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3725] = 1,
    ACTIONS(541), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3739] = 1,
    ACTIONS(543), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3753] = 1,
    ACTIONS(545), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3767] = 1,
    ACTIONS(547), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3781] = 1,
    ACTIONS(549), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3795] = 1,
    ACTIONS(551), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3809] = 1,
    ACTIONS(553), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3823] = 1,
    ACTIONS(555), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3837] = 1,
    ACTIONS(557), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3851] = 1,
    ACTIONS(559), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3865] = 1,
    ACTIONS(561), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3879] = 2,
    ACTIONS(499), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(563), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3895] = 1,
    ACTIONS(565), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3909] = 1,
    ACTIONS(567), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3923] = 1,
    ACTIONS(569), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3937] = 1,
    ACTIONS(571), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3951] = 1,
    ACTIONS(573), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3965] = 1,
    ACTIONS(575), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3979] = 1,
    ACTIONS(577), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [3993] = 1,
    ACTIONS(579), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4007] = 1,
    ACTIONS(581), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4021] = 1,
    ACTIONS(583), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4035] = 1,
    ACTIONS(585), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4049] = 1,
    ACTIONS(587), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4063] = 1,
    ACTIONS(589), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4077] = 1,
    ACTIONS(591), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4091] = 1,
    ACTIONS(593), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4105] = 1,
    ACTIONS(595), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4119] = 1,
    ACTIONS(597), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4133] = 1,
    ACTIONS(599), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4147] = 1,
    ACTIONS(601), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4161] = 1,
    ACTIONS(603), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4175] = 1,
    ACTIONS(605), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4189] = 1,
    ACTIONS(607), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4203] = 1,
    ACTIONS(609), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4217] = 1,
    ACTIONS(611), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4231] = 1,
    ACTIONS(613), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4245] = 1,
    ACTIONS(615), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4259] = 1,
    ACTIONS(617), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4273] = 1,
    ACTIONS(619), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4287] = 1,
    ACTIONS(621), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4301] = 1,
    ACTIONS(623), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4315] = 1,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4329] = 1,
    ACTIONS(625), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4343] = 1,
    ACTIONS(627), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4357] = 1,
    ACTIONS(629), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4371] = 1,
    ACTIONS(631), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4385] = 1,
    ACTIONS(633), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4399] = 1,
    ACTIONS(635), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4413] = 1,
    ACTIONS(637), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4427] = 1,
    ACTIONS(639), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4441] = 1,
    ACTIONS(641), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4455] = 1,
    ACTIONS(643), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4469] = 1,
    ACTIONS(645), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4483] = 1,
    ACTIONS(647), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4497] = 1,
    ACTIONS(649), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4511] = 1,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4525] = 1,
    ACTIONS(651), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4539] = 2,
    ACTIONS(501), 1,
      aux_sym_offset_token1,
    ACTIONS(653), 10,
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
  [4555] = 1,
    ACTIONS(655), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4569] = 1,
    ACTIONS(657), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4583] = 1,
    ACTIONS(659), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4597] = 1,
    ACTIONS(661), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4611] = 1,
    ACTIONS(663), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4625] = 1,
    ACTIONS(665), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4639] = 1,
    ACTIONS(667), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4653] = 1,
    ACTIONS(669), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4667] = 1,
    ACTIONS(671), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4681] = 1,
    ACTIONS(673), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4695] = 1,
    ACTIONS(675), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4709] = 1,
    ACTIONS(677), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4723] = 1,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4737] = 1,
    ACTIONS(679), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4751] = 1,
    ACTIONS(681), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4765] = 1,
    ACTIONS(379), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4779] = 1,
    ACTIONS(683), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [4793] = 6,
    ACTIONS(73), 1,
      anon_sym_input2,
    ACTIONS(75), 1,
      anon_sym_output2,
    ACTIONS(77), 1,
      anon_sym_parameter,
    ACTIONS(79), 1,
      anon_sym_light2,
    ACTIONS(81), 1,
      anon_sym_widget2,
    STATE(362), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [4816] = 2,
    ACTIONS(497), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(685), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4830] = 6,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(687), 1,
      anon_sym_AT,
    ACTIONS(691), 1,
      anon_sym_origin,
    ACTIONS(693), 1,
      aux_sym_origin_token1,
    STATE(163), 1,
      sym_offset,
    ACTIONS(689), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4852] = 8,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(697), 1,
      anon_sym_x,
    ACTIONS(699), 1,
      anon_sym_y,
    ACTIONS(701), 1,
      anon_sym_xy,
    ACTIONS(703), 1,
      anon_sym_dx,
    ACTIONS(705), 1,
      anon_sym_dy,
    ACTIONS(707), 1,
      anon_sym_dxy,
    STATE(146), 2,
      sym__scale,
      sym_stretch,
  [4878] = 2,
    ACTIONS(113), 4,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
      sym_angle,
    ACTIONS(115), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4892] = 6,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(709), 1,
      anon_sym_AT,
    ACTIONS(711), 1,
      anon_sym_origin,
    ACTIONS(713), 1,
      aux_sym_origin_token1,
    STATE(166), 1,
      sym_offset,
    ACTIONS(689), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4913] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(717), 1,
      aux_sym__offset_attr_token1,
    STATE(375), 1,
      sym__offset_attr,
    STATE(376), 2,
      sym__offset_xy_attr,
      sym_polar,
  [4930] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(470), 1,
      sym__offset,
    STATE(459), 2,
      sym_polar,
      sym__relative,
  [4947] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym__offset,
    STATE(460), 2,
      sym_polar,
      sym__relative,
  [4964] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym__offset,
    STATE(464), 2,
      sym_polar,
      sym__relative,
  [4981] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym__offset,
    STATE(466), 2,
      sym_polar,
      sym__relative,
  [4998] = 5,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym__offset,
    STATE(469), 2,
      sym_polar,
      sym__relative,
  [5015] = 5,
    ACTIONS(731), 1,
      aux_sym__input_id_token1,
    ACTIONS(733), 1,
      anon_sym_none,
    ACTIONS(735), 1,
      sym_rgb,
    ACTIONS(737), 1,
      sym_rgba,
    STATE(140), 1,
      sym_name,
  [5031] = 2,
    STATE(217), 1,
      sym_valign,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [5041] = 2,
    STATE(309), 1,
      sym_y,
    ACTIONS(739), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5051] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(292), 1,
      sym_offset,
    ACTIONS(99), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5063] = 2,
    STATE(374), 1,
      sym_y,
    ACTIONS(739), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5073] = 2,
    STATE(308), 1,
      sym_y,
    ACTIONS(739), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5083] = 2,
    STATE(301), 1,
      sym_y,
    ACTIONS(739), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5093] = 5,
    ACTIONS(741), 1,
      anon_sym_name,
    ACTIONS(743), 1,
      anon_sym_x,
    ACTIONS(745), 1,
      anon_sym_y,
    ACTIONS(747), 1,
      anon_sym_xy,
    ACTIONS(749), 1,
      anon_sym_part,
  [5109] = 5,
    ACTIONS(751), 1,
      anon_sym_AT,
    ACTIONS(753), 1,
      aux_sym__originx_token1,
    ACTIONS(755), 1,
      aux_sym__originy_token1,
    STATE(401), 1,
      sym__originx,
    STATE(402), 1,
      sym__originy,
  [5125] = 2,
    STATE(217), 1,
      sym_halign,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [5135] = 5,
    ACTIONS(757), 1,
      anon_sym_input2,
    ACTIONS(759), 1,
      anon_sym_output2,
    ACTIONS(761), 1,
      anon_sym_parameter,
    ACTIONS(763), 1,
      anon_sym_light2,
    ACTIONS(765), 1,
      anon_sym_widget2,
  [5151] = 5,
    ACTIONS(767), 1,
      anon_sym_input2,
    ACTIONS(769), 1,
      anon_sym_output2,
    ACTIONS(771), 1,
      anon_sym_parameter,
    ACTIONS(773), 1,
      anon_sym_light2,
    ACTIONS(775), 1,
      anon_sym_widget2,
  [5167] = 2,
    STATE(313), 1,
      sym_y,
    ACTIONS(739), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5177] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(470), 1,
      sym__offset,
    STATE(358), 2,
      sym_polar,
      sym__relative,
  [5191] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(470), 1,
      sym__offset,
    STATE(427), 2,
      sym_polar,
      sym__relative,
  [5205] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(470), 1,
      sym__offset,
    STATE(367), 2,
      sym_polar,
      sym__relative,
  [5219] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(470), 1,
      sym__offset,
    STATE(368), 2,
      sym_polar,
      sym__relative,
  [5233] = 2,
    STATE(107), 1,
      sym_y,
    ACTIONS(777), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5243] = 5,
    ACTIONS(779), 1,
      anon_sym_input2,
    ACTIONS(781), 1,
      anon_sym_output2,
    ACTIONS(783), 1,
      anon_sym_parameter,
    ACTIONS(785), 1,
      anon_sym_light2,
    ACTIONS(787), 1,
      anon_sym_widget2,
  [5259] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(470), 1,
      sym__offset,
    STATE(372), 2,
      sym_polar,
      sym__relative,
  [5273] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(470), 1,
      sym__offset,
    STATE(373), 2,
      sym_polar,
      sym__relative,
  [5287] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(789), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5297] = 2,
    STATE(94), 1,
      sym_halign,
    ACTIONS(61), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [5307] = 2,
    STATE(94), 1,
      sym_valign,
    ACTIONS(63), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [5317] = 2,
    STATE(422), 1,
      sym_y,
    ACTIONS(791), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [5327] = 3,
    ACTIONS(793), 1,
      anon_sym_project,
    ACTIONS(795), 1,
      anon_sym_script,
    STATE(160), 2,
      sym_project,
      sym_script,
  [5338] = 4,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      aux_sym__string_token1,
    STATE(217), 1,
      sym__string,
  [5351] = 4,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(803), 1,
      aux_sym__absolute_attr_token1,
    STATE(215), 1,
      sym_polar,
    STATE(449), 1,
      sym__absolute_x_attr,
  [5364] = 4,
    ACTIONS(805), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 1,
      aux_sym__string_token1,
    STATE(75), 1,
      sym__string,
  [5377] = 2,
    STATE(88), 1,
      sym__geometry_y_attr,
    ACTIONS(811), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [5386] = 3,
    ACTIONS(813), 1,
      anon_sym_module2,
    ACTIONS(815), 1,
      anon_sym_panel,
    STATE(225), 2,
      sym__module_export,
      sym_panel,
  [5397] = 3,
    ACTIONS(817), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
    STATE(397), 1,
      sym__component_xy_attr,
  [5407] = 3,
    ACTIONS(819), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(198), 1,
      sym__new_component,
  [5417] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(70), 1,
      sym_name,
    STATE(186), 1,
      sym_decoration,
  [5427] = 1,
    ACTIONS(823), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [5433] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(825), 1,
      aux_sym_origin_token1,
    STATE(144), 1,
      sym_offset,
  [5443] = 3,
    ACTIONS(819), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(194), 1,
      sym__new_component,
  [5453] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(287), 1,
      sym_name,
    STATE(426), 1,
      sym__component_x_attr,
  [5463] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(287), 1,
      sym_name,
    STATE(420), 1,
      sym__component_x_attr,
  [5473] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(287), 1,
      sym_name,
    STATE(417), 1,
      sym__component_x_attr,
  [5483] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(287), 1,
      sym_name,
    STATE(414), 1,
      sym__component_x_attr,
  [5493] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(287), 1,
      sym_name,
    STATE(412), 1,
      sym__component_x_attr,
  [5503] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(298), 1,
      sym_name,
    STATE(409), 1,
      sym__component_y_attr,
  [5513] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(298), 1,
      sym_name,
    STATE(408), 1,
      sym__component_y_attr,
  [5523] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(298), 1,
      sym_name,
    STATE(407), 1,
      sym__component_y_attr,
  [5533] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(298), 1,
      sym_name,
    STATE(405), 1,
      sym__component_y_attr,
  [5543] = 3,
    ACTIONS(827), 1,
      aux_sym__input_id_token1,
    STATE(298), 1,
      sym_name,
    STATE(403), 1,
      sym__component_y_attr,
  [5553] = 3,
    ACTIONS(817), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
    STATE(400), 1,
      sym__component_xy_attr,
  [5563] = 3,
    ACTIONS(817), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
    STATE(398), 1,
      sym__component_xy_attr,
  [5573] = 3,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(831), 1,
      aux_sym__offset_attr_token1,
    STATE(363), 1,
      sym__offset_attr,
  [5583] = 3,
    ACTIONS(817), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
    STATE(396), 1,
      sym__component_xy_attr,
  [5593] = 3,
    ACTIONS(817), 1,
      aux_sym__input_id_token1,
    STATE(232), 1,
      sym_name,
    STATE(392), 1,
      sym__component_xy_attr,
  [5603] = 3,
    ACTIONS(819), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(196), 1,
      sym__new_component,
  [5613] = 3,
    ACTIONS(819), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(197), 1,
      sym__new_component,
  [5623] = 1,
    ACTIONS(105), 3,
      anon_sym_with,
      anon_sym_RPAREN,
      sym_angle,
  [5629] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(833), 1,
      aux_sym_origin_token1,
    STATE(177), 1,
      sym_offset,
  [5639] = 3,
    ACTIONS(317), 1,
      sym_angle,
    ACTIONS(835), 1,
      aux_sym_absolute_token1,
    STATE(102), 1,
      sym_polar,
  [5649] = 3,
    ACTIONS(831), 1,
      aux_sym__offset_attr_token1,
    STATE(222), 1,
      sym__offset_dxy_attr,
    STATE(486), 1,
      sym__offset_attr,
  [5659] = 3,
    ACTIONS(353), 1,
      sym_angle,
    ACTIONS(837), 1,
      aux_sym_absolute_token1,
    STATE(30), 1,
      sym_polar,
  [5669] = 3,
    ACTIONS(839), 1,
      anon_sym_LPAREN,
    ACTIONS(841), 1,
      aux_sym__guide_id_token1,
    STATE(338), 1,
      sym__component_id,
  [5679] = 3,
    ACTIONS(831), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym__offset_attr,
  [5689] = 2,
    ACTIONS(115), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      sym_angle,
  [5697] = 3,
    ACTIONS(819), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(204), 1,
      sym__new_component,
  [5707] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      sym_polar,
  [5717] = 3,
    ACTIONS(847), 1,
      aux_sym__label_id_token1,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
  [5727] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(217), 1,
      sym_colour,
  [5737] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(853), 1,
      aux_sym_absolute_token1,
    STATE(399), 1,
      sym_polar,
  [5747] = 3,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      sym_offset,
  [5757] = 3,
    ACTIONS(345), 1,
      sym_angle,
    ACTIONS(857), 1,
      aux_sym_absolute_token1,
    STATE(418), 1,
      sym_polar,
  [5767] = 3,
    ACTIONS(859), 1,
      anon_sym_font,
    ACTIONS(861), 1,
      anon_sym_project,
    ACTIONS(863), 1,
      anon_sym_script,
  [5777] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym_polar,
  [5787] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      sym_polar,
  [5797] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(70), 1,
      sym_name,
    STATE(157), 1,
      sym_decoration,
  [5807] = 3,
    ACTIONS(869), 1,
      anon_sym_name,
    ACTIONS(871), 1,
      anon_sym_height,
    ACTIONS(873), 1,
      anon_sym_width,
  [5817] = 3,
    ACTIONS(99), 1,
      aux_sym__input_id_token1,
    ACTIONS(875), 1,
      aux_sym_offset_token1,
    STATE(429), 1,
      sym_offset,
  [5827] = 3,
    ACTIONS(223), 1,
      sym_angle,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_polar,
  [5837] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(236), 1,
      sym_name,
  [5844] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(258), 1,
      sym_name,
  [5851] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(251), 1,
      sym_name,
  [5858] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(252), 1,
      sym_name,
  [5865] = 2,
    ACTIONS(721), 1,
      aux_sym_offset_token1,
    STATE(360), 1,
      sym__offset,
  [5872] = 1,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [5877] = 2,
    ACTIONS(879), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_part,
  [5884] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
  [5891] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(254), 1,
      sym_name,
  [5898] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(257), 1,
      sym_name,
  [5905] = 2,
    ACTIONS(881), 1,
      aux_sym__input_id_token1,
    STATE(217), 1,
      sym_font,
  [5912] = 2,
    ACTIONS(461), 1,
      anon_sym_scale,
    ACTIONS(463), 1,
      anon_sym_stretch,
  [5919] = 2,
    ACTIONS(883), 1,
      aux_sym_absolute_token1,
    STATE(425), 1,
      sym_radius,
  [5926] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(235), 1,
      sym_name,
  [5933] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(205), 1,
      sym_name,
  [5940] = 2,
    ACTIONS(831), 1,
      aux_sym__offset_attr_token1,
    STATE(193), 1,
      sym__offset_attr,
  [5947] = 2,
    ACTIONS(885), 1,
      sym_rgb,
    ACTIONS(887), 1,
      sym_rgba,
  [5954] = 1,
    ACTIONS(889), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5959] = 2,
    ACTIONS(891), 1,
      aux_sym__guide_attr_token1,
    STATE(200), 1,
      sym_identifier,
  [5966] = 2,
    ACTIONS(893), 1,
      aux_sym_absolute_token1,
    STATE(33), 1,
      sym_radius,
  [5973] = 2,
    ACTIONS(831), 1,
      aux_sym__offset_attr_token1,
    STATE(202), 1,
      sym__offset_attr,
  [5980] = 2,
    ACTIONS(831), 1,
      aux_sym__offset_attr_token1,
    STATE(179), 1,
      sym__offset_attr,
  [5987] = 2,
    ACTIONS(831), 1,
      aux_sym__offset_attr_token1,
    STATE(404), 1,
      sym__offset_attr,
  [5994] = 2,
    ACTIONS(895), 1,
      aux_sym_absolute_token1,
    STATE(111), 1,
      sym_radius,
  [6001] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(44), 1,
      sym_name,
  [6008] = 2,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      sym_width,
  [6015] = 2,
    ACTIONS(901), 1,
      aux_sym__absolute_attr_token1,
    STATE(165), 1,
      sym__absolute_y_attr,
  [6022] = 2,
    ACTIONS(903), 1,
      aux_sym__guide_attr_token1,
    STATE(91), 1,
      sym__guide_attr,
  [6029] = 1,
    ACTIONS(905), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [6034] = 2,
    ACTIONS(299), 1,
      aux_sym__offset_attr_token1,
    STATE(199), 1,
      sym__relative_attr,
  [6041] = 2,
    ACTIONS(753), 1,
      aux_sym__originx_token1,
    STATE(219), 1,
      sym__originx,
  [6048] = 2,
    ACTIONS(755), 1,
      aux_sym__originy_token1,
    STATE(219), 1,
      sym__originy,
  [6055] = 2,
    ACTIONS(267), 1,
      aux_sym_offset_token1,
    STATE(169), 1,
      sym_offset,
  [6062] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(233), 1,
      sym_name,
  [6069] = 2,
    ACTIONS(907), 1,
      aux_sym_absolute_token1,
    STATE(79), 1,
      sym_radius,
  [6076] = 2,
    ACTIONS(909), 1,
      anon_sym_svg,
    STATE(153), 1,
      sym_svg,
  [6083] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(188), 1,
      sym_name,
  [6090] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(237), 1,
      sym_name,
  [6097] = 2,
    ACTIONS(225), 1,
      anon_sym_font,
    STATE(158), 1,
      sym__font_id,
  [6104] = 2,
    ACTIONS(911), 1,
      sym_height,
    ACTIONS(913), 1,
      sym_width,
  [6111] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(353), 1,
      sym_name,
  [6118] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(234), 1,
      sym_name,
  [6125] = 1,
    ACTIONS(915), 1,
      anon_sym_COMMA,
  [6129] = 1,
    ACTIONS(917), 1,
      anon_sym_COMMA,
  [6133] = 1,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [6137] = 1,
    ACTIONS(921), 1,
      anon_sym_COMMA,
  [6141] = 1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [6145] = 1,
    ACTIONS(481), 1,
      anon_sym_with,
  [6149] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [6153] = 1,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
  [6157] = 1,
    ACTIONS(929), 1,
      anon_sym_SQUOTE,
  [6161] = 1,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
  [6165] = 1,
    ACTIONS(931), 1,
      aux_sym__scale_token1,
  [6169] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [6173] = 1,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [6177] = 1,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
  [6181] = 1,
    ACTIONS(157), 1,
      anon_sym_with,
  [6185] = 1,
    ACTIONS(939), 1,
      aux_sym_absolute_token1,
  [6189] = 1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [6193] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [6197] = 1,
    ACTIONS(443), 1,
      anon_sym_with,
  [6201] = 1,
    ACTIONS(945), 1,
      anon_sym_COMMA,
  [6205] = 1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [6209] = 1,
    ACTIONS(949), 1,
      anon_sym_COMMA,
  [6213] = 1,
    ACTIONS(951), 1,
      sym_height,
  [6217] = 1,
    ACTIONS(951), 1,
      sym_width,
  [6221] = 1,
    ACTIONS(953), 1,
      anon_sym_SQUOTE,
  [6225] = 1,
    ACTIONS(953), 1,
      anon_sym_DQUOTE,
  [6229] = 1,
    ACTIONS(955), 1,
      aux_sym__scale_token1,
  [6233] = 1,
    ACTIONS(957), 1,
      aux_sym_relative_token1,
  [6237] = 1,
    ACTIONS(959), 1,
      aux_sym_origin_token1,
  [6241] = 1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [6245] = 1,
    ACTIONS(963), 1,
      sym_rgb,
  [6249] = 1,
    ACTIONS(963), 1,
      sym_rgba,
  [6253] = 1,
    ACTIONS(965), 1,
      aux_sym_origin_token1,
  [6257] = 1,
    ACTIONS(967), 1,
      aux_sym__label_id_token2,
  [6261] = 1,
    ACTIONS(969), 1,
      aux_sym__label_id_token3,
  [6265] = 1,
    ACTIONS(971), 1,
      anon_sym_COMMA,
  [6269] = 1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [6273] = 1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [6277] = 1,
    ACTIONS(977), 1,
      aux_sym_origin_token1,
  [6281] = 1,
    ACTIONS(979), 1,
      aux_sym__input_id_token1,
  [6285] = 1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
  [6289] = 1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [6293] = 1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [6297] = 1,
    ACTIONS(149), 1,
      anon_sym_with,
  [6301] = 1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
  [6305] = 1,
    ACTIONS(989), 1,
      anon_sym_COMMA,
  [6309] = 1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
  [6313] = 1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
  [6317] = 1,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
  [6321] = 1,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
  [6325] = 1,
    ACTIONS(999), 1,
      aux_sym__label_id_token3,
  [6329] = 1,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [6333] = 1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
  [6337] = 1,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
  [6341] = 1,
    ACTIONS(1007), 1,
      aux_sym__guide_id_token1,
  [6345] = 1,
    ACTIONS(1009), 1,
      aux_sym__input_id_token1,
  [6349] = 1,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
  [6353] = 1,
    ACTIONS(1013), 1,
      aux_sym__input_id_token1,
  [6357] = 1,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
  [6361] = 1,
    ACTIONS(109), 1,
      aux_sym__input_id_token1,
  [6365] = 1,
    ACTIONS(1017), 1,
      sym_fontsize,
  [6369] = 1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [6373] = 1,
    ACTIONS(149), 1,
      aux_sym__input_id_token1,
  [6377] = 1,
    ACTIONS(153), 1,
      aux_sym__input_id_token1,
  [6381] = 1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [6385] = 1,
    ACTIONS(1023), 1,
      aux_sym__input_id_token1,
  [6389] = 1,
    ACTIONS(443), 1,
      aux_sym__input_id_token1,
  [6393] = 1,
    ACTIONS(157), 1,
      aux_sym__input_id_token1,
  [6397] = 1,
    ACTIONS(117), 1,
      aux_sym__input_id_token1,
  [6401] = 1,
    ACTIONS(161), 1,
      aux_sym__input_id_token1,
  [6405] = 1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
  [6409] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [6413] = 1,
    ACTIONS(145), 1,
      aux_sym__input_id_token1,
  [6417] = 1,
    ACTIONS(105), 1,
      aux_sym__input_id_token1,
  [6421] = 1,
    ACTIONS(477), 1,
      aux_sym__input_id_token1,
  [6425] = 1,
    ACTIONS(481), 1,
      aux_sym__input_id_token1,
  [6429] = 1,
    ACTIONS(1029), 1,
      aux_sym__input_id_token1,
  [6433] = 1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
  [6437] = 1,
    ACTIONS(1033), 1,
      aux_sym__input_id_token1,
  [6441] = 1,
    ACTIONS(477), 1,
      anon_sym_with,
  [6445] = 1,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
  [6449] = 1,
    ACTIONS(109), 1,
      anon_sym_with,
  [6453] = 1,
    ACTIONS(1037), 1,
      anon_sym_with,
  [6457] = 1,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
  [6461] = 1,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
  [6465] = 1,
    ACTIONS(1043), 1,
      aux_sym__absolute_attr_token1,
  [6469] = 1,
    ACTIONS(463), 1,
      anon_sym_stretch,
  [6473] = 1,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
  [6477] = 1,
    ACTIONS(1047), 1,
      aux_sym__scale_token1,
  [6481] = 1,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
  [6485] = 1,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
  [6489] = 1,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
  [6493] = 1,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
  [6497] = 1,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
  [6501] = 1,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
  [6505] = 1,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
  [6509] = 1,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
  [6513] = 1,
    ACTIONS(1065), 1,
      aux_sym_origin_token1,
  [6517] = 1,
    ACTIONS(1067), 1,
      aux_sym__input_id_token1,
  [6521] = 1,
    ACTIONS(145), 1,
      anon_sym_with,
  [6525] = 1,
    ACTIONS(1069), 1,
      aux_sym__guide_id_token1,
  [6529] = 1,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
  [6533] = 1,
    ACTIONS(1073), 1,
      aux_sym_relative_token1,
  [6537] = 1,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
  [6541] = 1,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
  [6545] = 1,
    ACTIONS(1079), 1,
      anon_sym_DQUOTE,
  [6549] = 1,
    ACTIONS(1079), 1,
      anon_sym_SQUOTE,
  [6553] = 1,
    ACTIONS(1081), 1,
      aux_sym_absolute_token1,
  [6557] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [6561] = 1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
  [6565] = 1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [6569] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [6573] = 1,
    ACTIONS(1091), 1,
      aux_sym_relative_token1,
  [6577] = 1,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
  [6581] = 1,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
  [6585] = 1,
    ACTIONS(1097), 1,
      aux_sym_absolute_token1,
  [6589] = 1,
    ACTIONS(1099), 1,
      aux_sym__label_id_token2,
  [6593] = 1,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
  [6597] = 1,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
  [6601] = 1,
    ACTIONS(1105), 1,
      aux_sym_relative_token1,
  [6605] = 1,
    ACTIONS(1107), 1,
      sym_width,
  [6609] = 1,
    ACTIONS(1109), 1,
      aux_sym_absolute_token1,
  [6613] = 1,
    ACTIONS(1111), 1,
      anon_sym_timestamp,
  [6617] = 1,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
  [6621] = 1,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
  [6625] = 1,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
  [6629] = 1,
    ACTIONS(1119), 1,
      aux_sym__label_id_token2,
  [6633] = 1,
    ACTIONS(1121), 1,
      aux_sym__label_id_token3,
  [6637] = 1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
  [6641] = 1,
    ACTIONS(1111), 1,
      anon_sym_gzip,
  [6645] = 1,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
  [6649] = 1,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
  [6653] = 1,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
  [6657] = 1,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
  [6661] = 1,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
  [6665] = 1,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
  [6669] = 1,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
  [6673] = 1,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
  [6677] = 1,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
  [6681] = 1,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
  [6685] = 1,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 467,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 677,
  [SMALL_STATE(17)] = 721,
  [SMALL_STATE(18)] = 765,
  [SMALL_STATE(19)] = 809,
  [SMALL_STATE(20)] = 837,
  [SMALL_STATE(21)] = 865,
  [SMALL_STATE(22)] = 893,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 949,
  [SMALL_STATE(25)] = 977,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1033,
  [SMALL_STATE(28)] = 1061,
  [SMALL_STATE(29)] = 1089,
  [SMALL_STATE(30)] = 1117,
  [SMALL_STATE(31)] = 1145,
  [SMALL_STATE(32)] = 1173,
  [SMALL_STATE(33)] = 1201,
  [SMALL_STATE(34)] = 1229,
  [SMALL_STATE(35)] = 1256,
  [SMALL_STATE(36)] = 1283,
  [SMALL_STATE(37)] = 1310,
  [SMALL_STATE(38)] = 1356,
  [SMALL_STATE(39)] = 1402,
  [SMALL_STATE(40)] = 1443,
  [SMALL_STATE(41)] = 1484,
  [SMALL_STATE(42)] = 1523,
  [SMALL_STATE(43)] = 1562,
  [SMALL_STATE(44)] = 1603,
  [SMALL_STATE(45)] = 1626,
  [SMALL_STATE(46)] = 1649,
  [SMALL_STATE(47)] = 1671,
  [SMALL_STATE(48)] = 1705,
  [SMALL_STATE(49)] = 1727,
  [SMALL_STATE(50)] = 1749,
  [SMALL_STATE(51)] = 1771,
  [SMALL_STATE(52)] = 1793,
  [SMALL_STATE(53)] = 1826,
  [SMALL_STATE(54)] = 1857,
  [SMALL_STATE(55)] = 1890,
  [SMALL_STATE(56)] = 1923,
  [SMALL_STATE(57)] = 1951,
  [SMALL_STATE(58)] = 1969,
  [SMALL_STATE(59)] = 1992,
  [SMALL_STATE(60)] = 2015,
  [SMALL_STATE(61)] = 2038,
  [SMALL_STATE(62)] = 2061,
  [SMALL_STATE(63)] = 2082,
  [SMALL_STATE(64)] = 2105,
  [SMALL_STATE(65)] = 2136,
  [SMALL_STATE(66)] = 2157,
  [SMALL_STATE(67)] = 2180,
  [SMALL_STATE(68)] = 2199,
  [SMALL_STATE(69)] = 2222,
  [SMALL_STATE(70)] = 2245,
  [SMALL_STATE(71)] = 2268,
  [SMALL_STATE(72)] = 2291,
  [SMALL_STATE(73)] = 2322,
  [SMALL_STATE(74)] = 2341,
  [SMALL_STATE(75)] = 2372,
  [SMALL_STATE(76)] = 2403,
  [SMALL_STATE(77)] = 2424,
  [SMALL_STATE(78)] = 2445,
  [SMALL_STATE(79)] = 2464,
  [SMALL_STATE(80)] = 2480,
  [SMALL_STATE(81)] = 2508,
  [SMALL_STATE(82)] = 2524,
  [SMALL_STATE(83)] = 2544,
  [SMALL_STATE(84)] = 2572,
  [SMALL_STATE(85)] = 2600,
  [SMALL_STATE(86)] = 2616,
  [SMALL_STATE(87)] = 2634,
  [SMALL_STATE(88)] = 2654,
  [SMALL_STATE(89)] = 2674,
  [SMALL_STATE(90)] = 2694,
  [SMALL_STATE(91)] = 2716,
  [SMALL_STATE(92)] = 2736,
  [SMALL_STATE(93)] = 2754,
  [SMALL_STATE(94)] = 2770,
  [SMALL_STATE(95)] = 2788,
  [SMALL_STATE(96)] = 2808,
  [SMALL_STATE(97)] = 2828,
  [SMALL_STATE(98)] = 2843,
  [SMALL_STATE(99)] = 2860,
  [SMALL_STATE(100)] = 2889,
  [SMALL_STATE(101)] = 2916,
  [SMALL_STATE(102)] = 2933,
  [SMALL_STATE(103)] = 2950,
  [SMALL_STATE(104)] = 2967,
  [SMALL_STATE(105)] = 2982,
  [SMALL_STATE(106)] = 2997,
  [SMALL_STATE(107)] = 3014,
  [SMALL_STATE(108)] = 3031,
  [SMALL_STATE(109)] = 3048,
  [SMALL_STATE(110)] = 3065,
  [SMALL_STATE(111)] = 3082,
  [SMALL_STATE(112)] = 3099,
  [SMALL_STATE(113)] = 3126,
  [SMALL_STATE(114)] = 3141,
  [SMALL_STATE(115)] = 3170,
  [SMALL_STATE(116)] = 3187,
  [SMALL_STATE(117)] = 3204,
  [SMALL_STATE(118)] = 3221,
  [SMALL_STATE(119)] = 3236,
  [SMALL_STATE(120)] = 3253,
  [SMALL_STATE(121)] = 3268,
  [SMALL_STATE(122)] = 3285,
  [SMALL_STATE(123)] = 3302,
  [SMALL_STATE(124)] = 3319,
  [SMALL_STATE(125)] = 3346,
  [SMALL_STATE(126)] = 3363,
  [SMALL_STATE(127)] = 3377,
  [SMALL_STATE(128)] = 3391,
  [SMALL_STATE(129)] = 3405,
  [SMALL_STATE(130)] = 3419,
  [SMALL_STATE(131)] = 3433,
  [SMALL_STATE(132)] = 3447,
  [SMALL_STATE(133)] = 3461,
  [SMALL_STATE(134)] = 3475,
  [SMALL_STATE(135)] = 3489,
  [SMALL_STATE(136)] = 3503,
  [SMALL_STATE(137)] = 3525,
  [SMALL_STATE(138)] = 3539,
  [SMALL_STATE(139)] = 3553,
  [SMALL_STATE(140)] = 3567,
  [SMALL_STATE(141)] = 3581,
  [SMALL_STATE(142)] = 3595,
  [SMALL_STATE(143)] = 3627,
  [SMALL_STATE(144)] = 3641,
  [SMALL_STATE(145)] = 3655,
  [SMALL_STATE(146)] = 3669,
  [SMALL_STATE(147)] = 3683,
  [SMALL_STATE(148)] = 3697,
  [SMALL_STATE(149)] = 3711,
  [SMALL_STATE(150)] = 3725,
  [SMALL_STATE(151)] = 3739,
  [SMALL_STATE(152)] = 3753,
  [SMALL_STATE(153)] = 3767,
  [SMALL_STATE(154)] = 3781,
  [SMALL_STATE(155)] = 3795,
  [SMALL_STATE(156)] = 3809,
  [SMALL_STATE(157)] = 3823,
  [SMALL_STATE(158)] = 3837,
  [SMALL_STATE(159)] = 3851,
  [SMALL_STATE(160)] = 3865,
  [SMALL_STATE(161)] = 3879,
  [SMALL_STATE(162)] = 3895,
  [SMALL_STATE(163)] = 3909,
  [SMALL_STATE(164)] = 3923,
  [SMALL_STATE(165)] = 3937,
  [SMALL_STATE(166)] = 3951,
  [SMALL_STATE(167)] = 3965,
  [SMALL_STATE(168)] = 3979,
  [SMALL_STATE(169)] = 3993,
  [SMALL_STATE(170)] = 4007,
  [SMALL_STATE(171)] = 4021,
  [SMALL_STATE(172)] = 4035,
  [SMALL_STATE(173)] = 4049,
  [SMALL_STATE(174)] = 4063,
  [SMALL_STATE(175)] = 4077,
  [SMALL_STATE(176)] = 4091,
  [SMALL_STATE(177)] = 4105,
  [SMALL_STATE(178)] = 4119,
  [SMALL_STATE(179)] = 4133,
  [SMALL_STATE(180)] = 4147,
  [SMALL_STATE(181)] = 4161,
  [SMALL_STATE(182)] = 4175,
  [SMALL_STATE(183)] = 4189,
  [SMALL_STATE(184)] = 4203,
  [SMALL_STATE(185)] = 4217,
  [SMALL_STATE(186)] = 4231,
  [SMALL_STATE(187)] = 4245,
  [SMALL_STATE(188)] = 4259,
  [SMALL_STATE(189)] = 4273,
  [SMALL_STATE(190)] = 4287,
  [SMALL_STATE(191)] = 4301,
  [SMALL_STATE(192)] = 4315,
  [SMALL_STATE(193)] = 4329,
  [SMALL_STATE(194)] = 4343,
  [SMALL_STATE(195)] = 4357,
  [SMALL_STATE(196)] = 4371,
  [SMALL_STATE(197)] = 4385,
  [SMALL_STATE(198)] = 4399,
  [SMALL_STATE(199)] = 4413,
  [SMALL_STATE(200)] = 4427,
  [SMALL_STATE(201)] = 4441,
  [SMALL_STATE(202)] = 4455,
  [SMALL_STATE(203)] = 4469,
  [SMALL_STATE(204)] = 4483,
  [SMALL_STATE(205)] = 4497,
  [SMALL_STATE(206)] = 4511,
  [SMALL_STATE(207)] = 4525,
  [SMALL_STATE(208)] = 4539,
  [SMALL_STATE(209)] = 4555,
  [SMALL_STATE(210)] = 4569,
  [SMALL_STATE(211)] = 4583,
  [SMALL_STATE(212)] = 4597,
  [SMALL_STATE(213)] = 4611,
  [SMALL_STATE(214)] = 4625,
  [SMALL_STATE(215)] = 4639,
  [SMALL_STATE(216)] = 4653,
  [SMALL_STATE(217)] = 4667,
  [SMALL_STATE(218)] = 4681,
  [SMALL_STATE(219)] = 4695,
  [SMALL_STATE(220)] = 4709,
  [SMALL_STATE(221)] = 4723,
  [SMALL_STATE(222)] = 4737,
  [SMALL_STATE(223)] = 4751,
  [SMALL_STATE(224)] = 4765,
  [SMALL_STATE(225)] = 4779,
  [SMALL_STATE(226)] = 4793,
  [SMALL_STATE(227)] = 4816,
  [SMALL_STATE(228)] = 4830,
  [SMALL_STATE(229)] = 4852,
  [SMALL_STATE(230)] = 4878,
  [SMALL_STATE(231)] = 4892,
  [SMALL_STATE(232)] = 4913,
  [SMALL_STATE(233)] = 4930,
  [SMALL_STATE(234)] = 4947,
  [SMALL_STATE(235)] = 4964,
  [SMALL_STATE(236)] = 4981,
  [SMALL_STATE(237)] = 4998,
  [SMALL_STATE(238)] = 5015,
  [SMALL_STATE(239)] = 5031,
  [SMALL_STATE(240)] = 5041,
  [SMALL_STATE(241)] = 5051,
  [SMALL_STATE(242)] = 5063,
  [SMALL_STATE(243)] = 5073,
  [SMALL_STATE(244)] = 5083,
  [SMALL_STATE(245)] = 5093,
  [SMALL_STATE(246)] = 5109,
  [SMALL_STATE(247)] = 5125,
  [SMALL_STATE(248)] = 5135,
  [SMALL_STATE(249)] = 5151,
  [SMALL_STATE(250)] = 5167,
  [SMALL_STATE(251)] = 5177,
  [SMALL_STATE(252)] = 5191,
  [SMALL_STATE(253)] = 5205,
  [SMALL_STATE(254)] = 5219,
  [SMALL_STATE(255)] = 5233,
  [SMALL_STATE(256)] = 5243,
  [SMALL_STATE(257)] = 5259,
  [SMALL_STATE(258)] = 5273,
  [SMALL_STATE(259)] = 5287,
  [SMALL_STATE(260)] = 5297,
  [SMALL_STATE(261)] = 5307,
  [SMALL_STATE(262)] = 5317,
  [SMALL_STATE(263)] = 5327,
  [SMALL_STATE(264)] = 5338,
  [SMALL_STATE(265)] = 5351,
  [SMALL_STATE(266)] = 5364,
  [SMALL_STATE(267)] = 5377,
  [SMALL_STATE(268)] = 5386,
  [SMALL_STATE(269)] = 5397,
  [SMALL_STATE(270)] = 5407,
  [SMALL_STATE(271)] = 5417,
  [SMALL_STATE(272)] = 5427,
  [SMALL_STATE(273)] = 5433,
  [SMALL_STATE(274)] = 5443,
  [SMALL_STATE(275)] = 5453,
  [SMALL_STATE(276)] = 5463,
  [SMALL_STATE(277)] = 5473,
  [SMALL_STATE(278)] = 5483,
  [SMALL_STATE(279)] = 5493,
  [SMALL_STATE(280)] = 5503,
  [SMALL_STATE(281)] = 5513,
  [SMALL_STATE(282)] = 5523,
  [SMALL_STATE(283)] = 5533,
  [SMALL_STATE(284)] = 5543,
  [SMALL_STATE(285)] = 5553,
  [SMALL_STATE(286)] = 5563,
  [SMALL_STATE(287)] = 5573,
  [SMALL_STATE(288)] = 5583,
  [SMALL_STATE(289)] = 5593,
  [SMALL_STATE(290)] = 5603,
  [SMALL_STATE(291)] = 5613,
  [SMALL_STATE(292)] = 5623,
  [SMALL_STATE(293)] = 5629,
  [SMALL_STATE(294)] = 5639,
  [SMALL_STATE(295)] = 5649,
  [SMALL_STATE(296)] = 5659,
  [SMALL_STATE(297)] = 5669,
  [SMALL_STATE(298)] = 5679,
  [SMALL_STATE(299)] = 5689,
  [SMALL_STATE(300)] = 5697,
  [SMALL_STATE(301)] = 5707,
  [SMALL_STATE(302)] = 5717,
  [SMALL_STATE(303)] = 5727,
  [SMALL_STATE(304)] = 5737,
  [SMALL_STATE(305)] = 5747,
  [SMALL_STATE(306)] = 5757,
  [SMALL_STATE(307)] = 5767,
  [SMALL_STATE(308)] = 5777,
  [SMALL_STATE(309)] = 5787,
  [SMALL_STATE(310)] = 5797,
  [SMALL_STATE(311)] = 5807,
  [SMALL_STATE(312)] = 5817,
  [SMALL_STATE(313)] = 5827,
  [SMALL_STATE(314)] = 5837,
  [SMALL_STATE(315)] = 5844,
  [SMALL_STATE(316)] = 5851,
  [SMALL_STATE(317)] = 5858,
  [SMALL_STATE(318)] = 5865,
  [SMALL_STATE(319)] = 5872,
  [SMALL_STATE(320)] = 5877,
  [SMALL_STATE(321)] = 5884,
  [SMALL_STATE(322)] = 5891,
  [SMALL_STATE(323)] = 5898,
  [SMALL_STATE(324)] = 5905,
  [SMALL_STATE(325)] = 5912,
  [SMALL_STATE(326)] = 5919,
  [SMALL_STATE(327)] = 5926,
  [SMALL_STATE(328)] = 5933,
  [SMALL_STATE(329)] = 5940,
  [SMALL_STATE(330)] = 5947,
  [SMALL_STATE(331)] = 5954,
  [SMALL_STATE(332)] = 5959,
  [SMALL_STATE(333)] = 5966,
  [SMALL_STATE(334)] = 5973,
  [SMALL_STATE(335)] = 5980,
  [SMALL_STATE(336)] = 5987,
  [SMALL_STATE(337)] = 5994,
  [SMALL_STATE(338)] = 6001,
  [SMALL_STATE(339)] = 6008,
  [SMALL_STATE(340)] = 6015,
  [SMALL_STATE(341)] = 6022,
  [SMALL_STATE(342)] = 6029,
  [SMALL_STATE(343)] = 6034,
  [SMALL_STATE(344)] = 6041,
  [SMALL_STATE(345)] = 6048,
  [SMALL_STATE(346)] = 6055,
  [SMALL_STATE(347)] = 6062,
  [SMALL_STATE(348)] = 6069,
  [SMALL_STATE(349)] = 6076,
  [SMALL_STATE(350)] = 6083,
  [SMALL_STATE(351)] = 6090,
  [SMALL_STATE(352)] = 6097,
  [SMALL_STATE(353)] = 6104,
  [SMALL_STATE(354)] = 6111,
  [SMALL_STATE(355)] = 6118,
  [SMALL_STATE(356)] = 6125,
  [SMALL_STATE(357)] = 6129,
  [SMALL_STATE(358)] = 6133,
  [SMALL_STATE(359)] = 6137,
  [SMALL_STATE(360)] = 6141,
  [SMALL_STATE(361)] = 6145,
  [SMALL_STATE(362)] = 6149,
  [SMALL_STATE(363)] = 6153,
  [SMALL_STATE(364)] = 6157,
  [SMALL_STATE(365)] = 6161,
  [SMALL_STATE(366)] = 6165,
  [SMALL_STATE(367)] = 6169,
  [SMALL_STATE(368)] = 6173,
  [SMALL_STATE(369)] = 6177,
  [SMALL_STATE(370)] = 6181,
  [SMALL_STATE(371)] = 6185,
  [SMALL_STATE(372)] = 6189,
  [SMALL_STATE(373)] = 6193,
  [SMALL_STATE(374)] = 6197,
  [SMALL_STATE(375)] = 6201,
  [SMALL_STATE(376)] = 6205,
  [SMALL_STATE(377)] = 6209,
  [SMALL_STATE(378)] = 6213,
  [SMALL_STATE(379)] = 6217,
  [SMALL_STATE(380)] = 6221,
  [SMALL_STATE(381)] = 6225,
  [SMALL_STATE(382)] = 6229,
  [SMALL_STATE(383)] = 6233,
  [SMALL_STATE(384)] = 6237,
  [SMALL_STATE(385)] = 6241,
  [SMALL_STATE(386)] = 6245,
  [SMALL_STATE(387)] = 6249,
  [SMALL_STATE(388)] = 6253,
  [SMALL_STATE(389)] = 6257,
  [SMALL_STATE(390)] = 6261,
  [SMALL_STATE(391)] = 6265,
  [SMALL_STATE(392)] = 6269,
  [SMALL_STATE(393)] = 6273,
  [SMALL_STATE(394)] = 6277,
  [SMALL_STATE(395)] = 6281,
  [SMALL_STATE(396)] = 6285,
  [SMALL_STATE(397)] = 6289,
  [SMALL_STATE(398)] = 6293,
  [SMALL_STATE(399)] = 6297,
  [SMALL_STATE(400)] = 6301,
  [SMALL_STATE(401)] = 6305,
  [SMALL_STATE(402)] = 6309,
  [SMALL_STATE(403)] = 6313,
  [SMALL_STATE(404)] = 6317,
  [SMALL_STATE(405)] = 6321,
  [SMALL_STATE(406)] = 6325,
  [SMALL_STATE(407)] = 6329,
  [SMALL_STATE(408)] = 6333,
  [SMALL_STATE(409)] = 6337,
  [SMALL_STATE(410)] = 6341,
  [SMALL_STATE(411)] = 6345,
  [SMALL_STATE(412)] = 6349,
  [SMALL_STATE(413)] = 6353,
  [SMALL_STATE(414)] = 6357,
  [SMALL_STATE(415)] = 6361,
  [SMALL_STATE(416)] = 6365,
  [SMALL_STATE(417)] = 6369,
  [SMALL_STATE(418)] = 6373,
  [SMALL_STATE(419)] = 6377,
  [SMALL_STATE(420)] = 6381,
  [SMALL_STATE(421)] = 6385,
  [SMALL_STATE(422)] = 6389,
  [SMALL_STATE(423)] = 6393,
  [SMALL_STATE(424)] = 6397,
  [SMALL_STATE(425)] = 6401,
  [SMALL_STATE(426)] = 6405,
  [SMALL_STATE(427)] = 6409,
  [SMALL_STATE(428)] = 6413,
  [SMALL_STATE(429)] = 6417,
  [SMALL_STATE(430)] = 6421,
  [SMALL_STATE(431)] = 6425,
  [SMALL_STATE(432)] = 6429,
  [SMALL_STATE(433)] = 6433,
  [SMALL_STATE(434)] = 6437,
  [SMALL_STATE(435)] = 6441,
  [SMALL_STATE(436)] = 6445,
  [SMALL_STATE(437)] = 6449,
  [SMALL_STATE(438)] = 6453,
  [SMALL_STATE(439)] = 6457,
  [SMALL_STATE(440)] = 6461,
  [SMALL_STATE(441)] = 6465,
  [SMALL_STATE(442)] = 6469,
  [SMALL_STATE(443)] = 6473,
  [SMALL_STATE(444)] = 6477,
  [SMALL_STATE(445)] = 6481,
  [SMALL_STATE(446)] = 6485,
  [SMALL_STATE(447)] = 6489,
  [SMALL_STATE(448)] = 6493,
  [SMALL_STATE(449)] = 6497,
  [SMALL_STATE(450)] = 6501,
  [SMALL_STATE(451)] = 6505,
  [SMALL_STATE(452)] = 6509,
  [SMALL_STATE(453)] = 6513,
  [SMALL_STATE(454)] = 6517,
  [SMALL_STATE(455)] = 6521,
  [SMALL_STATE(456)] = 6525,
  [SMALL_STATE(457)] = 6529,
  [SMALL_STATE(458)] = 6533,
  [SMALL_STATE(459)] = 6537,
  [SMALL_STATE(460)] = 6541,
  [SMALL_STATE(461)] = 6545,
  [SMALL_STATE(462)] = 6549,
  [SMALL_STATE(463)] = 6553,
  [SMALL_STATE(464)] = 6557,
  [SMALL_STATE(465)] = 6561,
  [SMALL_STATE(466)] = 6565,
  [SMALL_STATE(467)] = 6569,
  [SMALL_STATE(468)] = 6573,
  [SMALL_STATE(469)] = 6577,
  [SMALL_STATE(470)] = 6581,
  [SMALL_STATE(471)] = 6585,
  [SMALL_STATE(472)] = 6589,
  [SMALL_STATE(473)] = 6593,
  [SMALL_STATE(474)] = 6597,
  [SMALL_STATE(475)] = 6601,
  [SMALL_STATE(476)] = 6605,
  [SMALL_STATE(477)] = 6609,
  [SMALL_STATE(478)] = 6613,
  [SMALL_STATE(479)] = 6617,
  [SMALL_STATE(480)] = 6621,
  [SMALL_STATE(481)] = 6625,
  [SMALL_STATE(482)] = 6629,
  [SMALL_STATE(483)] = 6633,
  [SMALL_STATE(484)] = 6637,
  [SMALL_STATE(485)] = 6641,
  [SMALL_STATE(486)] = 6645,
  [SMALL_STATE(487)] = 6649,
  [SMALL_STATE(488)] = 6653,
  [SMALL_STATE(489)] = 6657,
  [SMALL_STATE(490)] = 6661,
  [SMALL_STATE(491)] = 6665,
  [SMALL_STATE(492)] = 6669,
  [SMALL_STATE(493)] = 6673,
  [SMALL_STATE(494)] = 6677,
  [SMALL_STATE(495)] = 6681,
  [SMALL_STATE(496)] = 6685,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 10),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_radius, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_radius, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polar, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polar, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(42),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(72),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(307),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(352),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(263),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(268),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(272),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 11),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 17),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 5),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 6),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 14),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 12),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 28),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 4, .production_id = 17),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 4, .production_id = 17),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 22),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 12),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 13),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 11),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 22),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 22),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_dxy_attr, 3, .production_id = 18),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 17),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 16),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 2, .production_id = 9),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 13),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 14),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1063] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
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
