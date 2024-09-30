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
#define STATE_COUNT 484
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 1
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  aux_sym__new_xy_token1 = 14,
  aux_sym__new_xy_token2 = 15,
  anon_sym_RPAREN = 16,
  anon_sym_set = 17,
  anon_sym_module2 = 18,
  anon_sym_name = 19,
  anon_sym_height = 20,
  anon_sym_width = 21,
  anon_sym_x = 22,
  anon_sym_y = 23,
  anon_sym_xy = 24,
  anon_sym_part = 25,
  anon_sym_text = 26,
  anon_sym_font = 27,
  anon_sym_size = 28,
  anon_sym_halign = 29,
  anon_sym_valign = 30,
  anon_sym_align = 31,
  anon_sym_colour = 32,
  anon_sym_color = 33,
  anon_sym_dx = 34,
  anon_sym_dy = 35,
  anon_sym_dxy = 36,
  anon_sym_id = 37,
  anon_sym_input2 = 38,
  anon_sym_output2 = 39,
  anon_sym_parameter = 40,
  anon_sym_light2 = 41,
  anon_sym_widget2 = 42,
  aux_sym__offset_attr_token1 = 43,
  anon_sym_AT = 44,
  aux_sym__absolute_attr_token1 = 45,
  anon_sym_left = 46,
  anon_sym_centre = 47,
  anon_sym_center = 48,
  anon_sym_right = 49,
  aux_sym__geometry_x_attr_token1 = 50,
  anon_sym_top = 51,
  anon_sym_middle = 52,
  anon_sym_bottom = 53,
  aux_sym__guide_attr_token1 = 54,
  aux_sym__guide_attr_token2 = 55,
  anon_sym_delete = 56,
  anon_sym_guide = 57,
  aux_sym__guide_id_token1 = 58,
  aux_sym__input_id_token1 = 59,
  anon_sym_label = 60,
  aux_sym__label_id_token1 = 61,
  anon_sym_DQUOTE = 62,
  aux_sym__label_id_token2 = 63,
  anon_sym_SQUOTE = 64,
  aux_sym__label_id_token3 = 65,
  anon_sym_decoration2 = 66,
  anon_sym_load = 67,
  anon_sym_project = 68,
  anon_sym_script = 69,
  anon_sym_unload = 70,
  anon_sym_save = 71,
  anon_sym_export = 72,
  anon_sym_DOTh = 73,
  anon_sym_GT_GT = 74,
  anon_sym_list = 75,
  anon_sym_fonts = 76,
  anon_sym_parts = 77,
  anon_sym_decorations = 78,
  anon_sym_timestamp = 79,
  anon_sym_gzip = 80,
  sym_fontsize = 81,
  anon_sym_baseline = 82,
  anon_sym_scale = 83,
  aux_sym__scale_token1 = 84,
  anon_sym_stretch = 85,
  anon_sym_origin = 86,
  aux_sym_origin_token1 = 87,
  aux_sym__originx_token1 = 88,
  aux_sym__originy_token1 = 89,
  anon_sym_background = 90,
  anon_sym_none = 91,
  sym_rgb = 92,
  sym_rgba = 93,
  anon_sym_panel = 94,
  anon_sym_svg = 95,
  anon_sym_dark = 96,
  sym_height = 97,
  sym_width = 98,
  anon_sym_vertical = 99,
  anon_sym_horizontal = 100,
  aux_sym_offset_token1 = 101,
  aux_sym__string_token1 = 102,
  aux_sym_relative_token1 = 103,
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
  sym_relative = 193,
  sym__decorate = 194,
  sym__relative = 195,
  sym_x = 196,
  sym_y = 197,
  aux_sym_command_repeat1 = 198,
  alias_sym_dy = 199,
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
  [aux_sym__new_xy_token1] = "angle",
  [aux_sym__new_xy_token2] = "radius",
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
  [aux_sym_relative_token1] = "x",
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
  [aux_sym__new_xy_token1] = aux_sym__new_xy_token1,
  [aux_sym__new_xy_token2] = aux_sym__new_xy_token2,
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
  [aux_sym_relative_token1] = sym_x,
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
  [aux_sym__new_xy_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__new_xy_token2] = {
    .visible = true,
    .named = true,
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
  [44] = 42,
  [45] = 45,
  [46] = 42,
  [47] = 47,
  [48] = 16,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 11,
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
  [77] = 77,
  [78] = 78,
  [79] = 15,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 16,
  [97] = 97,
  [98] = 98,
  [99] = 14,
  [100] = 19,
  [101] = 101,
  [102] = 18,
  [103] = 17,
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
  [117] = 109,
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
  [193] = 110,
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
  [204] = 13,
  [205] = 205,
  [206] = 108,
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
  [220] = 11,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 226,
  [228] = 226,
  [229] = 212,
  [230] = 212,
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
  [246] = 11,
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
  [269] = 17,
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
  [283] = 280,
  [284] = 280,
  [285] = 285,
  [286] = 280,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 289,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 13,
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
  [327] = 15,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 14,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 15,
  [336] = 97,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 104,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
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
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
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
  [397] = 88,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 16,
  [403] = 403,
  [404] = 97,
  [405] = 405,
  [406] = 14,
  [407] = 407,
  [408] = 408,
  [409] = 19,
  [410] = 18,
  [411] = 17,
  [412] = 104,
  [413] = 88,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 18,
  [426] = 19,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 385,
  [433] = 376,
  [434] = 359,
  [435] = 435,
  [436] = 435,
  [437] = 358,
  [438] = 342,
  [439] = 334,
  [440] = 332,
  [441] = 441,
  [442] = 392,
  [443] = 376,
  [444] = 359,
  [445] = 435,
  [446] = 446,
  [447] = 334,
  [448] = 332,
  [449] = 449,
  [450] = 392,
  [451] = 359,
  [452] = 435,
  [453] = 334,
  [454] = 332,
  [455] = 455,
  [456] = 420,
  [457] = 417,
  [458] = 415,
  [459] = 369,
  [460] = 370,
  [461] = 461,
  [462] = 462,
  [463] = 462,
  [464] = 373,
  [465] = 465,
  [466] = 420,
  [467] = 417,
  [468] = 415,
  [469] = 461,
  [470] = 462,
  [471] = 461,
  [472] = 373,
  [473] = 420,
  [474] = 417,
  [475] = 461,
  [476] = 462,
  [477] = 477,
  [478] = 393,
  [479] = 340,
  [480] = 480,
  [481] = 393,
  [482] = 340,
  [483] = 483,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(391);
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(632);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '0') ADVANCE(443);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '@') ADVANCE(451);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(342);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(77);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(415);
      if (lookahead == 'y') ADVANCE(416);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(399);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(397);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(400);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(627);
      if (lookahead == '\'') ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(685);
      if (lookahead != 0) ADVANCE(686);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\'') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(625);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(555);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == '@') ADVANCE(451);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == '@') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(517);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == '@') ADVANCE(451);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == '@') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(359);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(360);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'm') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'U') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '5') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 176) ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '8') ADVANCE(31);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '8') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == 'w') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'U') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == '5') ADVANCE(48);
      if (lookahead == 'H') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == '5') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 43:
      if (lookahead == '5') ADVANCE(225);
      END_STATE();
    case 44:
      if (lookahead == '5') ADVANCE(225);
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 45:
      if (lookahead == ';') ADVANCE(392);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(649);
      END_STATE();
    case 47:
      if (lookahead == '@') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(517);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 48:
      if (lookahead == 'H') ADVANCE(678);
      if (lookahead == 'm') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'H') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(517);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead == 'v') ADVANCE(493);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(638);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(642);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(668);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(318);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(675);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(165);
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(648);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(403);
      END_STATE();
    case 159:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 160:
      if (lookahead == 'h') ADVANCE(663);
      END_STATE();
    case 161:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 162:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 188:
      if (lookahead == 'j') ADVANCE(110);
      END_STATE();
    case 189:
      if (lookahead == 'k') ADVANCE(676);
      END_STATE();
    case 190:
      if (lookahead == 'k') ADVANCE(148);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(674);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(665);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(684);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(678);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(677);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(667);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(548);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(452);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(687);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(467);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(664);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 268:
      if (lookahead == 'p') ADVANCE(656);
      END_STATE();
    case 269:
      if (lookahead == 'p') ADVANCE(655);
      END_STATE();
    case 270:
      if (lookahead == 'p') ADVANCE(667);
      END_STATE();
    case 271:
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 273:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 342:
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == 'z') ADVANCE(175);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 344:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 345:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 346:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 347:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 348:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 349:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 351:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 352:
      if (lookahead == 'w') ADVANCE(1);
      END_STATE();
    case 353:
      if (lookahead == 'x') ADVANCE(275);
      END_STATE();
    case 354:
      if (lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 355:
      if (lookahead == 'z') ADVANCE(107);
      END_STATE();
    case 356:
      if (lookahead == 'z') ADVANCE(262);
      END_STATE();
    case 357:
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'm') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 361:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 364:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 365:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 366:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 367:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 368:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 369:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 370:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(672);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(673);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 384:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 385:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 386:
      if (eof) ADVANCE(391);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == 'd') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(585);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 't') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(593);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 387:
      if (eof) ADVANCE(391);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(593);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 388:
      if (eof) ADVANCE(391);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == 'w') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(415);
      if (lookahead == 'y') ADVANCE(416);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 389:
      if (eof) ADVANCE(391);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '@') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'g') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == 'w') ADVANCE(171);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 390:
      if (eof) ADVANCE(391);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(243);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__new_xy_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__new_xy_token1);
      if (lookahead == '5') ADVANCE(225);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__new_xy_token2);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_module2);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_dy);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_dxy);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_input2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_output2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_light2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_widget2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(447);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(449);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 176) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'H') ADVANCE(467);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(467);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'u') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == 'H') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\'') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(686);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(626);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(686);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(626);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_decoration2);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(225);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(628);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 386},
  [3] = {.lex_state = 386},
  [4] = {.lex_state = 388},
  [5] = {.lex_state = 388},
  [6] = {.lex_state = 388},
  [7] = {.lex_state = 388},
  [8] = {.lex_state = 388},
  [9] = {.lex_state = 388},
  [10] = {.lex_state = 388},
  [11] = {.lex_state = 386},
  [12] = {.lex_state = 386},
  [13] = {.lex_state = 388},
  [14] = {.lex_state = 386},
  [15] = {.lex_state = 386},
  [16] = {.lex_state = 386},
  [17] = {.lex_state = 386},
  [18] = {.lex_state = 386},
  [19] = {.lex_state = 386},
  [20] = {.lex_state = 386},
  [21] = {.lex_state = 386},
  [22] = {.lex_state = 386},
  [23] = {.lex_state = 386},
  [24] = {.lex_state = 386},
  [25] = {.lex_state = 388},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 389},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 388},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 389},
  [49] = {.lex_state = 388},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 388},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 387},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 387},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 388},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 388},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 390},
  [77] = {.lex_state = 389},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 387},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 388},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 387},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 387},
  [97] = {.lex_state = 387},
  [98] = {.lex_state = 390},
  [99] = {.lex_state = 387},
  [100] = {.lex_state = 387},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 387},
  [103] = {.lex_state = 387},
  [104] = {.lex_state = 387},
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
  [117] = {.lex_state = 47},
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
  [136] = {.lex_state = 388},
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
  [193] = {.lex_state = 78},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 388},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 388},
  [209] = {.lex_state = 386},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 388},
  [212] = {.lex_state = 18},
  [213] = {.lex_state = 386},
  [214] = {.lex_state = 386},
  [215] = {.lex_state = 386},
  [216] = {.lex_state = 386},
  [217] = {.lex_state = 18},
  [218] = {.lex_state = 388},
  [219] = {.lex_state = 388},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 389},
  [223] = {.lex_state = 388},
  [224] = {.lex_state = 388},
  [225] = {.lex_state = 388},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 388},
  [232] = {.lex_state = 388},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 386},
  [237] = {.lex_state = 386},
  [238] = {.lex_state = 386},
  [239] = {.lex_state = 386},
  [240] = {.lex_state = 386},
  [241] = {.lex_state = 386},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 14},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 14},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 386},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 14},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 386},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 389},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 386},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 389},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 389},
  [281] = {.lex_state = 386},
  [282] = {.lex_state = 78},
  [283] = {.lex_state = 389},
  [284] = {.lex_state = 389},
  [285] = {.lex_state = 389},
  [286] = {.lex_state = 389},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 386},
  [290] = {.lex_state = 386},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 386},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 39},
  [297] = {.lex_state = 389},
  [298] = {.lex_state = 17},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 14},
  [302] = {.lex_state = 17},
  [303] = {.lex_state = 17},
  [304] = {.lex_state = 14},
  [305] = {.lex_state = 363},
  [306] = {.lex_state = 14},
  [307] = {.lex_state = 14},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 14},
  [310] = {.lex_state = 14},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 17},
  [313] = {.lex_state = 14},
  [314] = {.lex_state = 14},
  [315] = {.lex_state = 17},
  [316] = {.lex_state = 17},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 363},
  [319] = {.lex_state = 14},
  [320] = {.lex_state = 14},
  [321] = {.lex_state = 388},
  [322] = {.lex_state = 386},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 78},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 389},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 389},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 14},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 389},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 389},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 387},
  [362] = {.lex_state = 386},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 630},
  [370] = {.lex_state = 635},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 389},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 386},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 78},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 14},
  [387] = {.lex_state = 14},
  [388] = {.lex_state = 14},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 14},
  [391] = {.lex_state = 14},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 386},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 635},
  [400] = {.lex_state = 630},
  [401] = {.lex_state = 388},
  [402] = {.lex_state = 14},
  [403] = {.lex_state = 39},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 14},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 14},
  [410] = {.lex_state = 14},
  [411] = {.lex_state = 14},
  [412] = {.lex_state = 14},
  [413] = {.lex_state = 14},
  [414] = {.lex_state = 386},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 14},
  [422] = {.lex_state = 387},
  [423] = {.lex_state = 387},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 386},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 389},
  [435] = {.lex_state = 19},
  [436] = {.lex_state = 19},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 389},
  [440] = {.lex_state = 389},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 389},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 389},
  [448] = {.lex_state = 389},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 389},
  [452] = {.lex_state = 19},
  [453] = {.lex_state = 389},
  [454] = {.lex_state = 389},
  [455] = {.lex_state = 388},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 630},
  [460] = {.lex_state = 635},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 389},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 389},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 389},
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
    [aux_sym__new_xy_token1] = ACTIONS(1),
    [aux_sym__new_xy_token2] = ACTIONS(1),
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
    [aux_sym_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(429),
    [sym_new] = STATE(28),
    [sym_decorate] = STATE(28),
    [sym_set] = STATE(28),
    [sym_delete] = STATE(28),
    [sym_load] = STATE(28),
    [sym_unload] = STATE(28),
    [sym_save] = STATE(28),
    [sym_export] = STATE(28),
    [sym_list] = STATE(28),
    [aux_sym_command_repeat1] = STATE(28),
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
    STATE(5), 1,
      sym_font,
    STATE(50), 1,
      sym__align,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(196), 1,
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
    STATE(6), 1,
      sym_font,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(59), 1,
      sym__align,
    STATE(155), 1,
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
  [110] = 16,
    ACTIONS(47), 1,
      anon_sym_module2,
    ACTIONS(49), 1,
      anon_sym_input2,
    ACTIONS(51), 1,
      anon_sym_output2,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light2,
    ACTIONS(57), 1,
      anon_sym_widget2,
    ACTIONS(59), 1,
      anon_sym_guide,
    ACTIONS(61), 1,
      anon_sym_label,
    ACTIONS(63), 1,
      anon_sym_decoration2,
    ACTIONS(65), 1,
      anon_sym_origin,
    ACTIONS(67), 1,
      anon_sym_background,
    STATE(43), 1,
      sym__guide_id,
    STATE(172), 1,
      sym__label_id,
    STATE(205), 1,
      sym__decoration_id,
    STATE(210), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(153), 7,
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
    STATE(51), 1,
      sym__align,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(173), 1,
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
      anon_sym_decorate,
      anon_sym_set,
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
    STATE(54), 1,
      sym__align,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(122), 1,
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
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [263] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(51), 1,
      sym__align,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(173), 1,
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
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [307] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(59), 1,
      sym__align,
    STATE(155), 1,
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
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [351] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(54), 1,
      sym__align,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(122), 1,
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
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [395] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(56), 1,
      sym__align,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(119), 1,
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
    ACTIONS(81), 11,
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
  [439] = 4,
    ACTIONS(87), 1,
      aux_sym_offset_token1,
    STATE(17), 1,
      sym_offset,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(85), 17,
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
  [473] = 2,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(91), 17,
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
  [501] = 2,
    ACTIONS(95), 4,
      aux_sym__new_xy_token1,
      anon_sym_x,
      anon_sym_dx,
      sym_width,
    ACTIONS(93), 19,
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
  [529] = 2,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(99), 17,
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
  [557] = 2,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(103), 17,
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
  [585] = 2,
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
  [613] = 2,
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
  [641] = 2,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      sym_fontsize,
      sym_rgba,
    ACTIONS(115), 17,
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
  [669] = 2,
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
  [697] = 2,
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
  [725] = 2,
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
  [753] = 2,
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
  [781] = 2,
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
  [809] = 2,
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
  [837] = 2,
    ACTIONS(143), 1,
      sym_rgb,
    ACTIONS(141), 21,
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
  [864] = 2,
    ACTIONS(147), 1,
      anon_sym_x,
    ACTIONS(145), 21,
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
  [891] = 2,
    ACTIONS(151), 1,
      anon_sym_x,
    ACTIONS(149), 21,
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
  [918] = 12,
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
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_comment,
    STATE(29), 10,
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
  [964] = 12,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_new,
    ACTIONS(165), 1,
      anon_sym_decorate,
    ACTIONS(168), 1,
      anon_sym_set,
    ACTIONS(171), 1,
      anon_sym_delete,
    ACTIONS(174), 1,
      anon_sym_load,
    ACTIONS(177), 1,
      anon_sym_unload,
    ACTIONS(180), 1,
      anon_sym_save,
    ACTIONS(183), 1,
      anon_sym_export,
    ACTIONS(186), 1,
      anon_sym_list,
    STATE(29), 10,
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
  [1010] = 2,
    ACTIONS(191), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(189), 16,
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
  [1033] = 10,
    ACTIONS(193), 1,
      anon_sym_module,
    ACTIONS(195), 1,
      anon_sym_input,
    ACTIONS(197), 1,
      anon_sym_output,
    ACTIONS(199), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(201), 1,
      anon_sym_light,
    ACTIONS(203), 1,
      anon_sym_widget,
    ACTIONS(205), 1,
      anon_sym_decoration,
    ACTIONS(207), 1,
      anon_sym_guide,
    ACTIONS(209), 1,
      anon_sym_label,
    STATE(107), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1072] = 2,
    ACTIONS(213), 2,
      anon_sym_x,
      anon_sym_dx,
    ACTIONS(211), 16,
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
  [1095] = 10,
    ACTIONS(49), 1,
      anon_sym_input2,
    ACTIONS(51), 1,
      anon_sym_output2,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light2,
    ACTIONS(57), 1,
      anon_sym_widget2,
    ACTIONS(61), 1,
      anon_sym_label,
    ACTIONS(63), 1,
      anon_sym_decoration2,
    ACTIONS(215), 1,
      anon_sym_font,
    ACTIONS(217), 1,
      anon_sym_guide,
    STATE(179), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1134] = 2,
    ACTIONS(221), 1,
      anon_sym_x,
    ACTIONS(219), 16,
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
  [1156] = 2,
    ACTIONS(225), 1,
      anon_sym_x,
    ACTIONS(223), 16,
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
  [1178] = 2,
    ACTIONS(229), 1,
      anon_sym_x,
    ACTIONS(227), 16,
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
  [1200] = 2,
    ACTIONS(233), 1,
      anon_sym_x,
    ACTIONS(231), 16,
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
  [1222] = 2,
    ACTIONS(237), 1,
      anon_sym_x,
    ACTIONS(235), 16,
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
  [1244] = 8,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_vertical,
    ACTIONS(245), 1,
      anon_sym_horizontal,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(106), 1,
      sym_offset,
    STATE(281), 1,
      sym_identifier,
    STATE(167), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(239), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1278] = 10,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    STATE(116), 1,
      sym__xy_attr,
    STATE(381), 1,
      sym__relative_attr,
    STATE(407), 1,
      sym__geometry_x_attr,
    STATE(418), 1,
      sym__guide_attr,
    ACTIONS(255), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(178), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1315] = 10,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    STATE(174), 1,
      sym__xy_attr,
    STATE(381), 1,
      sym__relative_attr,
    STATE(407), 1,
      sym__geometry_x_attr,
    STATE(418), 1,
      sym__guide_attr,
    ACTIONS(255), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(178), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1352] = 8,
    ACTIONS(259), 1,
      anon_sym_input2,
    ACTIONS(261), 1,
      anon_sym_output2,
    ACTIONS(263), 1,
      anon_sym_parameter,
    ACTIONS(265), 1,
      anon_sym_light2,
    ACTIONS(267), 1,
      anon_sym_widget2,
    STATE(478), 1,
      sym_x,
    ACTIONS(269), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(433), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1385] = 7,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(271), 1,
      anon_sym_id,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(255), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(128), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1416] = 8,
    ACTIONS(259), 1,
      anon_sym_input2,
    ACTIONS(261), 1,
      anon_sym_output2,
    ACTIONS(263), 1,
      anon_sym_parameter,
    ACTIONS(265), 1,
      anon_sym_light2,
    ACTIONS(267), 1,
      anon_sym_widget2,
    STATE(481), 1,
      sym_x,
    ACTIONS(269), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(443), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1449] = 10,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    STATE(189), 1,
      sym__xy_attr,
    STATE(381), 1,
      sym__relative_attr,
    STATE(407), 1,
      sym__geometry_x_attr,
    STATE(418), 1,
      sym__guide_attr,
    ACTIONS(255), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(178), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1486] = 8,
    ACTIONS(259), 1,
      anon_sym_input2,
    ACTIONS(261), 1,
      anon_sym_output2,
    ACTIONS(263), 1,
      anon_sym_parameter,
    ACTIONS(265), 1,
      anon_sym_light2,
    ACTIONS(267), 1,
      anon_sym_widget2,
    STATE(393), 1,
      sym_x,
    ACTIONS(269), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
    STATE(376), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1519] = 6,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_vertical,
    ACTIONS(245), 1,
      anon_sym_horizontal,
    STATE(39), 1,
      sym_identifier,
    STATE(160), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(239), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1547] = 1,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_with,
      aux_sym__new_xy_token1,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1565] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(84), 1,
      sym_offset,
    ACTIONS(277), 12,
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
  [1586] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(173), 1,
      sym_colour,
    ACTIONS(69), 11,
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
  [1609] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(155), 1,
      sym_colour,
    ACTIONS(41), 11,
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
  [1632] = 4,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym__scale,
    STATE(120), 1,
      sym_stretch,
    ACTIONS(279), 11,
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
  [1655] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(82), 1,
      sym_offset,
    ACTIONS(283), 12,
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
  [1676] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(119), 1,
      sym_colour,
    ACTIONS(81), 11,
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
  [1699] = 4,
    ACTIONS(285), 1,
      aux_sym_offset_token1,
    STATE(103), 1,
      sym_offset,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(85), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1722] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(118), 1,
      sym_colour,
    ACTIONS(287), 11,
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
  [1745] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      sym_rgb,
    ACTIONS(289), 12,
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
  [1766] = 3,
    ACTIONS(293), 1,
      sym_rgb,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(289), 12,
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
  [1787] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(122), 1,
      sym_colour,
    ACTIONS(77), 11,
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
  [1810] = 2,
    ACTIONS(299), 1,
      sym_rgb,
    ACTIONS(297), 13,
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
  [1829] = 2,
    ACTIONS(303), 1,
      sym_rgb,
    ACTIONS(301), 13,
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
  [1848] = 7,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      aux_sym__new_xy_token1,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      aux_sym_relative_token1,
    STATE(415), 1,
      sym_x,
    STATE(416), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(269), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1876] = 2,
    ACTIONS(315), 1,
      sym_rgb,
    ACTIONS(313), 12,
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
  [1894] = 7,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      aux_sym__new_xy_token1,
    ACTIONS(321), 1,
      anon_sym_AT,
    ACTIONS(323), 1,
      aux_sym_relative_token1,
    STATE(468), 1,
      sym_x,
    STATE(65), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(269), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1922] = 4,
    ACTIONS(329), 1,
      aux_sym__input_id_token1,
    STATE(115), 1,
      sym_part,
    ACTIONS(325), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(327), 7,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1944] = 7,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym__x_attr,
    ACTIONS(255), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(188), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1972] = 1,
    ACTIONS(333), 13,
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
  [1988] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(105), 1,
      sym_offset,
    ACTIONS(335), 11,
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
  [2008] = 3,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_stretch,
    ACTIONS(337), 11,
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
  [2028] = 3,
    ACTIONS(343), 1,
      anon_sym_timestamp,
    ACTIONS(345), 1,
      anon_sym_gzip,
    ACTIONS(341), 11,
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
  [2048] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(158), 1,
      sym_offset,
    ACTIONS(347), 11,
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
  [2068] = 3,
    ACTIONS(351), 1,
      anon_sym_light2,
    ACTIONS(353), 1,
      anon_sym_dark,
    ACTIONS(349), 11,
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
  [2088] = 7,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      aux_sym__new_xy_token1,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      aux_sym_relative_token1,
    STATE(338), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(269), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2116] = 7,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      aux_sym__new_xy_token1,
    ACTIONS(367), 1,
      anon_sym_AT,
    ACTIONS(369), 1,
      aux_sym_relative_token1,
    STATE(458), 1,
      sym_x,
    STATE(273), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(269), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2144] = 7,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym__x_attr,
    ACTIONS(255), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(188), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2172] = 2,
    ACTIONS(373), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(371), 12,
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
  [2190] = 2,
    ACTIONS(377), 1,
      aux_sym__guide_attr_token2,
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
  [2208] = 7,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym__x_attr,
    ACTIONS(255), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(188), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [2236] = 2,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(103), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2253] = 1,
    ACTIONS(379), 12,
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
  [2268] = 7,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym__y_attr,
    ACTIONS(275), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(186), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2295] = 1,
    ACTIONS(383), 12,
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
  [2310] = 8,
    ACTIONS(385), 1,
      anon_sym_input2,
    ACTIONS(387), 1,
      anon_sym_output2,
    ACTIONS(389), 1,
      anon_sym_parameter,
    ACTIONS(391), 1,
      anon_sym_light2,
    ACTIONS(393), 1,
      anon_sym_widget2,
    ACTIONS(395), 1,
      anon_sym_scale,
    ACTIONS(397), 1,
      anon_sym_stretch,
    STATE(424), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [2339] = 1,
    ACTIONS(399), 12,
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
  [2354] = 1,
    ACTIONS(401), 12,
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
  [2369] = 2,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(403), 11,
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
  [2386] = 2,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(403), 11,
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
  [2403] = 2,
    ACTIONS(409), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(411), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2420] = 2,
    ACTIONS(415), 1,
      anon_sym_COMMA,
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
  [2437] = 7,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym__y_attr,
    ACTIONS(275), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(186), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2464] = 2,
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
  [2481] = 7,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(257), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym__y_attr,
    ACTIONS(275), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(186), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2508] = 2,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(421), 11,
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
  [2525] = 2,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(421), 11,
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
  [2542] = 1,
    ACTIONS(427), 12,
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
  [2557] = 2,
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
  [2574] = 2,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(431), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2591] = 2,
    ACTIONS(435), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(433), 11,
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
  [2608] = 2,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(99), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2625] = 2,
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
  [2642] = 1,
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
  [2657] = 2,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(115), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2674] = 2,
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
  [2691] = 2,
    ACTIONS(439), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
    ACTIONS(441), 8,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2708] = 1,
    ACTIONS(443), 11,
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
  [2722] = 1,
    ACTIONS(445), 11,
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
  [2736] = 1,
    ACTIONS(447), 11,
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
  [2750] = 1,
    ACTIONS(449), 11,
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
  [2764] = 1,
    ACTIONS(451), 11,
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
  [2778] = 1,
    ACTIONS(453), 11,
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
  [2792] = 1,
    ACTIONS(455), 11,
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
  [2806] = 1,
    ACTIONS(457), 11,
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
  [2820] = 1,
    ACTIONS(459), 11,
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
  [2834] = 1,
    ACTIONS(461), 11,
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
  [2848] = 1,
    ACTIONS(463), 11,
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
  [2862] = 1,
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
  [2876] = 2,
    ACTIONS(451), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(467), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2892] = 1,
    ACTIONS(469), 11,
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
  [2906] = 1,
    ACTIONS(287), 11,
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
  [2920] = 1,
    ACTIONS(337), 11,
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
  [2934] = 1,
    ACTIONS(471), 11,
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
  [2948] = 1,
    ACTIONS(81), 11,
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
  [2962] = 1,
    ACTIONS(473), 11,
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
  [2976] = 1,
    ACTIONS(475), 11,
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
  [2990] = 1,
    ACTIONS(421), 11,
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
  [3004] = 1,
    ACTIONS(477), 11,
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
  [3018] = 1,
    ACTIONS(479), 11,
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
  [3032] = 1,
    ACTIONS(481), 11,
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
  [3046] = 1,
    ACTIONS(483), 11,
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
  [3060] = 1,
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
  [3074] = 1,
    ACTIONS(487), 11,
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
  [3088] = 1,
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
  [3102] = 1,
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
  [3116] = 1,
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
  [3130] = 1,
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
  [3144] = 5,
    STATE(57), 1,
      sym_valign,
    STATE(58), 1,
      sym_halign,
    STATE(174), 1,
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
  [3166] = 1,
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
  [3180] = 1,
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
  [3194] = 1,
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
  [3208] = 1,
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
  [3222] = 1,
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
  [3236] = 1,
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
  [3250] = 1,
    ACTIONS(509), 11,
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
  [3264] = 1,
    ACTIONS(511), 11,
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
  [3278] = 1,
    ACTIONS(513), 11,
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
  [3292] = 1,
    ACTIONS(515), 11,
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
  [3306] = 1,
    ACTIONS(517), 11,
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
  [3320] = 1,
    ACTIONS(519), 11,
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
  [3334] = 1,
    ACTIONS(521), 11,
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
  [3348] = 1,
    ACTIONS(523), 11,
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
  [3362] = 1,
    ACTIONS(525), 11,
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
  [3376] = 1,
    ACTIONS(527), 11,
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
  [3390] = 1,
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
  [3404] = 1,
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
  [3418] = 1,
    ACTIONS(77), 11,
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
  [3432] = 1,
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
  [3446] = 1,
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
  [3460] = 1,
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
  [3474] = 1,
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
  [3488] = 1,
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
  [3502] = 1,
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
  [3516] = 1,
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
  [3530] = 1,
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
  [3544] = 1,
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
  [3558] = 1,
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
  [3572] = 1,
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
  [3586] = 1,
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
  [3600] = 1,
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
  [3614] = 1,
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
  [3628] = 1,
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
  [3642] = 1,
    ACTIONS(563), 11,
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
  [3656] = 10,
    ACTIONS(565), 1,
      anon_sym_x,
    ACTIONS(567), 1,
      anon_sym_y,
    ACTIONS(569), 1,
      anon_sym_xy,
    ACTIONS(571), 1,
      anon_sym_text,
    ACTIONS(573), 1,
      anon_sym_font,
    ACTIONS(575), 1,
      anon_sym_size,
    ACTIONS(577), 1,
      anon_sym_halign,
    ACTIONS(579), 1,
      anon_sym_valign,
    ACTIONS(581), 1,
      anon_sym_align,
    ACTIONS(583), 2,
      anon_sym_colour,
      anon_sym_color,
  [3688] = 1,
    ACTIONS(41), 11,
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
  [3702] = 1,
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
  [3716] = 1,
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
  [3730] = 1,
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
  [3744] = 1,
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
  [3758] = 1,
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
  [3772] = 1,
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
  [3786] = 1,
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
  [3800] = 1,
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
  [3814] = 1,
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
  [3828] = 1,
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
  [3842] = 1,
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
  [3856] = 1,
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
  [3870] = 1,
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
  [3884] = 1,
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
  [3898] = 1,
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
  [3912] = 1,
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
  [3926] = 1,
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
  [3940] = 1,
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
  [3954] = 1,
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
  [3968] = 2,
    ACTIONS(453), 1,
      aux_sym_offset_token1,
    ACTIONS(623), 10,
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
  [3984] = 1,
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
  [3998] = 1,
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
  [4012] = 1,
    ACTIONS(69), 11,
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
  [4026] = 1,
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
  [4040] = 1,
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
  [4054] = 1,
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
  [4068] = 1,
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
  [4082] = 1,
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
  [4096] = 6,
    ACTIONS(49), 1,
      anon_sym_input2,
    ACTIONS(51), 1,
      anon_sym_output2,
    ACTIONS(53), 1,
      anon_sym_parameter,
    ACTIONS(55), 1,
      anon_sym_light2,
    ACTIONS(57), 1,
      anon_sym_widget2,
    STATE(384), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [4119] = 6,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(639), 1,
      anon_sym_AT,
    ACTIONS(643), 1,
      anon_sym_origin,
    ACTIONS(645), 1,
      aux_sym_origin_token1,
    STATE(162), 1,
      sym_offset,
    ACTIONS(641), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4141] = 2,
    ACTIONS(93), 4,
      anon_sym_LPAREN,
      aux_sym__new_xy_token1,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(95), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4155] = 8,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    ACTIONS(649), 1,
      anon_sym_x,
    ACTIONS(651), 1,
      anon_sym_y,
    ACTIONS(653), 1,
      anon_sym_xy,
    ACTIONS(655), 1,
      anon_sym_dx,
    ACTIONS(657), 1,
      anon_sym_dy,
    ACTIONS(659), 1,
      anon_sym_dxy,
    STATE(145), 2,
      sym__scale,
      sym_stretch,
  [4181] = 2,
    ACTIONS(449), 4,
      anon_sym_LPAREN,
      aux_sym__new_xy_token1,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(661), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [4195] = 6,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(663), 1,
      anon_sym_AT,
    ACTIONS(665), 1,
      anon_sym_origin,
    ACTIONS(667), 1,
      aux_sym_origin_token1,
    STATE(165), 1,
      sym_offset,
    ACTIONS(641), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4216] = 6,
    ACTIONS(669), 1,
      anon_sym_input2,
    ACTIONS(671), 1,
      anon_sym_output2,
    ACTIONS(673), 1,
      anon_sym_parameter,
    ACTIONS(675), 1,
      anon_sym_light2,
    ACTIONS(677), 1,
      anon_sym_widget2,
    ACTIONS(679), 1,
      anon_sym_label,
  [4235] = 5,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(465), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4251] = 5,
    ACTIONS(687), 1,
      anon_sym_name,
    ACTIONS(689), 1,
      anon_sym_x,
    ACTIONS(691), 1,
      anon_sym_y,
    ACTIONS(693), 1,
      anon_sym_xy,
    ACTIONS(695), 1,
      anon_sym_part,
  [4267] = 5,
    ACTIONS(697), 1,
      anon_sym_input2,
    ACTIONS(699), 1,
      anon_sym_output2,
    ACTIONS(701), 1,
      anon_sym_parameter,
    ACTIONS(703), 1,
      anon_sym_light2,
    ACTIONS(705), 1,
      anon_sym_widget2,
  [4283] = 2,
    STATE(294), 1,
      sym_y,
    ACTIONS(707), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4293] = 5,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4309] = 5,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4325] = 5,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4341] = 5,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4357] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(717), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4367] = 2,
    STATE(63), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4377] = 5,
    ACTIONS(719), 1,
      anon_sym_input2,
    ACTIONS(721), 1,
      anon_sym_output2,
    ACTIONS(723), 1,
      anon_sym_parameter,
    ACTIONS(725), 1,
      anon_sym_light2,
    ACTIONS(727), 1,
      anon_sym_widget2,
  [4393] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(269), 1,
      sym_offset,
    ACTIONS(83), 3,
      anon_sym_with,
      aux_sym__new_xy_token1,
      anon_sym_RPAREN,
  [4405] = 5,
    ACTIONS(729), 1,
      aux_sym__input_id_token1,
    ACTIONS(731), 1,
      anon_sym_none,
    ACTIONS(733), 1,
      sym_rgb,
    ACTIONS(735), 1,
      sym_rgba,
    STATE(125), 1,
      sym_name,
  [4421] = 5,
    ACTIONS(737), 1,
      anon_sym_AT,
    ACTIONS(739), 1,
      aux_sym__originx_token1,
    ACTIONS(741), 1,
      aux_sym__originy_token1,
    STATE(326), 1,
      sym__originy,
    STATE(389), 1,
      sym__originx,
  [4437] = 2,
    STATE(174), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4447] = 2,
    STATE(174), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4457] = 2,
    STATE(63), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4467] = 2,
    STATE(336), 1,
      sym_y,
    ACTIONS(707), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4477] = 2,
    STATE(404), 1,
      sym_y,
    ACTIONS(743), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4487] = 2,
    STATE(97), 1,
      sym_y,
    ACTIONS(745), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4497] = 2,
    STATE(290), 1,
      sym_y,
    ACTIONS(707), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4507] = 2,
    STATE(289), 1,
      sym_y,
    ACTIONS(707), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4517] = 5,
    ACTIONS(747), 1,
      anon_sym_input2,
    ACTIONS(749), 1,
      anon_sym_output2,
    ACTIONS(751), 1,
      anon_sym_parameter,
    ACTIONS(753), 1,
      anon_sym_light2,
    ACTIONS(755), 1,
      anon_sym_widget2,
  [4533] = 2,
    STATE(164), 1,
      sym__geometry_y_attr,
    ACTIONS(757), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4542] = 4,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      anon_sym_SQUOTE,
    ACTIONS(763), 1,
      aux_sym__string_token1,
    STATE(174), 1,
      sym__string,
  [4555] = 3,
    ACTIONS(765), 1,
      anon_sym_project,
    ACTIONS(767), 1,
      anon_sym_script,
    STATE(135), 2,
      sym_project,
      sym_script,
  [4566] = 3,
    ACTIONS(769), 1,
      anon_sym_module2,
    ACTIONS(771), 1,
      anon_sym_panel,
    STATE(148), 2,
      sym__module_export,
      sym_panel,
  [4577] = 4,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(368), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4590] = 4,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(367), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4603] = 4,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(366), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4616] = 4,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(365), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4629] = 4,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(364), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4642] = 4,
    ACTIONS(681), 1,
      aux_sym__new_xy_token1,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(363), 1,
      sym__relative,
    STATE(477), 1,
      sym__offset,
  [4655] = 4,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      aux_sym__string_token1,
    STATE(73), 1,
      sym__string,
  [4668] = 4,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    STATE(378), 1,
      sym__offset_attr,
    STATE(379), 1,
      sym__offset_xy_attr,
  [4681] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(264), 1,
      sym_name,
    STATE(351), 1,
      sym__component_y_attr,
  [4691] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(243), 1,
      sym_name,
    STATE(357), 1,
      sym__component_xy_attr,
  [4701] = 3,
    ACTIONS(83), 1,
      aux_sym__input_id_token1,
    ACTIONS(785), 1,
      aux_sym_offset_token1,
    STATE(411), 1,
      sym_offset,
  [4711] = 3,
    ACTIONS(787), 1,
      anon_sym_name,
    ACTIONS(789), 1,
      anon_sym_height,
    ACTIONS(791), 1,
      anon_sym_width,
  [4721] = 3,
    ACTIONS(793), 1,
      aux_sym__label_id_token1,
    ACTIONS(795), 1,
      anon_sym_DQUOTE,
    ACTIONS(797), 1,
      anon_sym_SQUOTE,
  [4731] = 3,
    ACTIONS(799), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      aux_sym__guide_id_token1,
    STATE(301), 1,
      sym__component_id,
  [4741] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(174), 1,
      sym_colour,
  [4751] = 3,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    STATE(116), 1,
      sym__offset_dxy_attr,
    STATE(430), 1,
      sym__offset_attr,
  [4761] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(803), 1,
      aux_sym_origin_token1,
    STATE(159), 1,
      sym_offset,
  [4771] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(264), 1,
      sym_name,
    STATE(349), 1,
      sym__component_y_attr,
  [4781] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(264), 1,
      sym_name,
    STATE(350), 1,
      sym__component_y_attr,
  [4791] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(264), 1,
      sym_name,
    STATE(348), 1,
      sym__component_y_attr,
  [4801] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(264), 1,
      sym_name,
    STATE(352), 1,
      sym__component_y_attr,
  [4811] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(243), 1,
      sym_name,
    STATE(353), 1,
      sym__component_xy_attr,
  [4821] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(243), 1,
      sym_name,
    STATE(354), 1,
      sym__component_xy_attr,
  [4831] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(243), 1,
      sym_name,
    STATE(355), 1,
      sym__component_xy_attr,
  [4841] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(243), 1,
      sym_name,
    STATE(356), 1,
      sym__component_xy_attr,
  [4851] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      sym_offset,
  [4861] = 3,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym__offset_attr,
  [4871] = 1,
    ACTIONS(809), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [4877] = 3,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      sym__offset_attr,
  [4887] = 3,
    ACTIONS(813), 1,
      anon_sym_font,
    ACTIONS(815), 1,
      anon_sym_project,
    ACTIONS(817), 1,
      anon_sym_script,
  [4897] = 3,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    ACTIONS(819), 1,
      aux_sym_origin_token1,
    STATE(177), 1,
      sym_offset,
  [4907] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(52), 1,
      sym_name,
    STATE(185), 1,
      sym_decoration,
  [4917] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(201), 1,
      sym__new_component,
  [4927] = 1,
    ACTIONS(109), 3,
      anon_sym_with,
      aux_sym__new_xy_token1,
      anon_sym_RPAREN,
  [4933] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(191), 1,
      sym__new_component,
  [4943] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(138), 1,
      sym__new_component,
  [4953] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(171), 1,
      sym__new_component,
  [4963] = 3,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(52), 1,
      sym_name,
    STATE(156), 1,
      sym_decoration,
  [4973] = 3,
    ACTIONS(823), 1,
      aux_sym__input_id_token1,
    STATE(64), 1,
      sym_name,
    STATE(170), 1,
      sym__new_component,
  [4983] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(262), 1,
      sym_name,
    STATE(343), 1,
      sym__component_x_attr,
  [4993] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(262), 1,
      sym_name,
    STATE(344), 1,
      sym__component_x_attr,
  [5003] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(262), 1,
      sym_name,
    STATE(345), 1,
      sym__component_x_attr,
  [5013] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(262), 1,
      sym_name,
    STATE(346), 1,
      sym__component_x_attr,
  [5023] = 3,
    ACTIONS(783), 1,
      aux_sym__input_id_token1,
    STATE(262), 1,
      sym_name,
    STATE(347), 1,
      sym__component_x_attr,
  [5033] = 2,
    ACTIONS(825), 1,
      aux_sym__new_xy_token1,
    ACTIONS(827), 1,
      aux_sym__new_xy_token2,
  [5040] = 2,
    ACTIONS(247), 1,
      aux_sym_offset_token1,
    STATE(106), 1,
      sym_offset,
  [5047] = 2,
    ACTIONS(829), 1,
      aux_sym__absolute_attr_token1,
    STATE(395), 1,
      sym__absolute_x_attr,
  [5054] = 2,
    ACTIONS(831), 1,
      aux_sym__new_xy_token1,
    ACTIONS(833), 1,
      aux_sym__new_xy_token2,
  [5061] = 2,
    ACTIONS(835), 1,
      aux_sym__new_xy_token1,
    ACTIONS(837), 1,
      aux_sym__new_xy_token2,
  [5068] = 2,
    ACTIONS(739), 1,
      aux_sym__originx_token1,
    STATE(192), 1,
      sym__originx,
  [5075] = 2,
    ACTIONS(839), 1,
      aux_sym__new_xy_token1,
    ACTIONS(841), 1,
      aux_sym__new_xy_token2,
  [5082] = 1,
    ACTIONS(843), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5087] = 2,
    ACTIONS(215), 1,
      anon_sym_font,
    STATE(180), 1,
      sym__font_id,
  [5094] = 2,
    ACTIONS(845), 1,
      aux_sym__new_xy_token1,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [5101] = 2,
    ACTIONS(849), 1,
      aux_sym__new_xy_token1,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [5108] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(296), 1,
      sym_name,
  [5115] = 2,
    ACTIONS(395), 1,
      anon_sym_scale,
    ACTIONS(397), 1,
      anon_sym_stretch,
  [5122] = 1,
    ACTIONS(853), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [5127] = 2,
    ACTIONS(855), 1,
      aux_sym__new_xy_token1,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
  [5134] = 2,
    ACTIONS(859), 1,
      anon_sym_svg,
    STATE(152), 1,
      sym_svg,
  [5141] = 2,
    ACTIONS(861), 1,
      sym_height,
    ACTIONS(863), 1,
      sym_width,
  [5148] = 2,
    ACTIONS(741), 1,
      aux_sym__originy_token1,
    STATE(192), 1,
      sym__originy,
  [5155] = 1,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [5160] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(187), 1,
      sym_name,
  [5167] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(241), 1,
      sym_name,
  [5174] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(32), 1,
      sym_name,
  [5181] = 2,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    STATE(398), 1,
      sym__offset_attr,
  [5188] = 2,
    ACTIONS(251), 1,
      aux_sym__offset_attr_token1,
    STATE(166), 1,
      sym__relative_attr,
  [5195] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(240), 1,
      sym_name,
  [5202] = 2,
    ACTIONS(865), 1,
      aux_sym__guide_attr_token1,
    STATE(163), 1,
      sym__guide_attr,
  [5209] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(239), 1,
      sym_name,
  [5216] = 2,
    ACTIONS(867), 1,
      aux_sym__input_id_token1,
    STATE(189), 1,
      sym_part,
  [5223] = 2,
    ACTIONS(869), 1,
      sym_rgb,
    ACTIONS(871), 1,
      sym_rgba,
  [5230] = 2,
    ACTIONS(873), 1,
      aux_sym__input_id_token1,
    STATE(174), 1,
      sym_font,
  [5237] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(216), 1,
      sym_name,
  [5244] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(189), 1,
      sym_name,
  [5251] = 2,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    STATE(157), 1,
      sym__offset_attr,
  [5258] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
  [5265] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(236), 1,
      sym_name,
  [5272] = 2,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    STATE(113), 1,
      sym__offset_attr,
  [5279] = 2,
    ACTIONS(781), 1,
      aux_sym__offset_attr_token1,
    STATE(114), 1,
      sym__offset_attr,
  [5286] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(214), 1,
      sym_name,
  [5293] = 2,
    ACTIONS(875), 1,
      aux_sym__guide_attr_token1,
    STATE(199), 1,
      sym_identifier,
  [5300] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(213), 1,
      sym_name,
  [5307] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(238), 1,
      sym_name,
  [5314] = 2,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(879), 1,
      sym_width,
  [5321] = 2,
    ACTIONS(685), 1,
      aux_sym_offset_token1,
    STATE(372), 1,
      sym__offset,
  [5328] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(209), 1,
      sym_name,
  [5335] = 2,
    ACTIONS(881), 1,
      aux_sym__absolute_attr_token1,
    STATE(123), 1,
      sym__absolute_y_attr,
  [5342] = 2,
    ACTIONS(821), 1,
      aux_sym__input_id_token1,
    STATE(237), 1,
      sym_name,
  [5349] = 1,
    ACTIONS(883), 1,
      anon_sym_COMMA,
  [5353] = 1,
    ACTIONS(101), 1,
      aux_sym__input_id_token1,
  [5357] = 1,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [5361] = 1,
    ACTIONS(887), 1,
      anon_sym_COMMA,
  [5365] = 1,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
  [5369] = 1,
    ACTIONS(97), 1,
      anon_sym_with,
  [5373] = 1,
    ACTIONS(891), 1,
      aux_sym__new_xy_token2,
  [5377] = 1,
    ACTIONS(397), 1,
      anon_sym_stretch,
  [5381] = 1,
    ACTIONS(893), 1,
      aux_sym__new_xy_token2,
  [5385] = 1,
    ACTIONS(101), 1,
      anon_sym_with,
  [5389] = 1,
    ACTIONS(429), 1,
      anon_sym_with,
  [5393] = 1,
    ACTIONS(895), 1,
      aux_sym__input_id_token1,
  [5397] = 1,
    ACTIONS(897), 1,
      anon_sym_COMMA,
  [5401] = 1,
    ACTIONS(899), 1,
      aux_sym__new_xy_token2,
  [5405] = 1,
    ACTIONS(901), 1,
      anon_sym_COMMA,
  [5409] = 1,
    ACTIONS(439), 1,
      anon_sym_with,
  [5413] = 1,
    ACTIONS(903), 1,
      anon_sym_SQUOTE,
  [5417] = 1,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
  [5421] = 1,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
  [5425] = 1,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
  [5429] = 1,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
  [5433] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [5437] = 1,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [5441] = 1,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [5445] = 1,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [5449] = 1,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
  [5453] = 1,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [5457] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [5461] = 1,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
  [5465] = 1,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
  [5469] = 1,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [5473] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [5477] = 1,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
  [5481] = 1,
    ACTIONS(935), 1,
      aux_sym__new_xy_token2,
  [5485] = 1,
    ACTIONS(937), 1,
      anon_sym_timestamp,
  [5489] = 1,
    ACTIONS(939), 1,
      aux_sym__scale_token1,
  [5493] = 1,
    ACTIONS(941), 1,
      aux_sym_origin_token1,
  [5497] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [5501] = 1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [5505] = 1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [5509] = 1,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [5513] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [5517] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [5521] = 1,
    ACTIONS(955), 1,
      aux_sym__label_id_token2,
  [5525] = 1,
    ACTIONS(957), 1,
      aux_sym__label_id_token3,
  [5529] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [5533] = 1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [5537] = 1,
    ACTIONS(963), 1,
      aux_sym__new_xy_token2,
  [5541] = 1,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
  [5545] = 1,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
  [5549] = 1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [5553] = 1,
    ACTIONS(971), 1,
      sym_fontsize,
  [5557] = 1,
    ACTIONS(973), 1,
      anon_sym_COMMA,
  [5561] = 1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [5565] = 1,
    ACTIONS(977), 1,
      aux_sym__absolute_attr_token1,
  [5569] = 1,
    ACTIONS(979), 1,
      anon_sym_COMMA,
  [5573] = 1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
  [5577] = 1,
    ACTIONS(983), 1,
      sym_rgba,
  [5581] = 1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [5585] = 1,
    ACTIONS(987), 1,
      aux_sym__guide_id_token1,
  [5589] = 1,
    ACTIONS(989), 1,
      aux_sym__input_id_token1,
  [5593] = 1,
    ACTIONS(991), 1,
      aux_sym__input_id_token1,
  [5597] = 1,
    ACTIONS(993), 1,
      aux_sym__input_id_token1,
  [5601] = 1,
    ACTIONS(995), 1,
      anon_sym_COMMA,
  [5605] = 1,
    ACTIONS(997), 1,
      aux_sym__input_id_token1,
  [5609] = 1,
    ACTIONS(999), 1,
      aux_sym__input_id_token1,
  [5613] = 1,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [5617] = 1,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
  [5621] = 1,
    ACTIONS(1005), 1,
      aux_sym_origin_token1,
  [5625] = 1,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
  [5629] = 1,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [5633] = 1,
    ACTIONS(409), 1,
      anon_sym_with,
  [5637] = 1,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
  [5641] = 1,
    ACTIONS(1013), 1,
      aux_sym__label_id_token3,
  [5645] = 1,
    ACTIONS(1015), 1,
      aux_sym__label_id_token2,
  [5649] = 1,
    ACTIONS(1017), 1,
      sym_width,
  [5653] = 1,
    ACTIONS(105), 1,
      aux_sym__input_id_token1,
  [5657] = 1,
    ACTIONS(1017), 1,
      sym_height,
  [5661] = 1,
    ACTIONS(429), 1,
      aux_sym__input_id_token1,
  [5665] = 1,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
  [5669] = 1,
    ACTIONS(97), 1,
      aux_sym__input_id_token1,
  [5673] = 1,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [5677] = 1,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
  [5681] = 1,
    ACTIONS(117), 1,
      aux_sym__input_id_token1,
  [5685] = 1,
    ACTIONS(113), 1,
      aux_sym__input_id_token1,
  [5689] = 1,
    ACTIONS(109), 1,
      aux_sym__input_id_token1,
  [5693] = 1,
    ACTIONS(439), 1,
      aux_sym__input_id_token1,
  [5697] = 1,
    ACTIONS(409), 1,
      aux_sym__input_id_token1,
  [5701] = 1,
    ACTIONS(1023), 1,
      aux_sym_origin_token1,
  [5705] = 1,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
  [5709] = 1,
    ACTIONS(1027), 1,
      anon_sym_with,
  [5713] = 1,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
  [5717] = 1,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
  [5721] = 1,
    ACTIONS(937), 1,
      anon_sym_gzip,
  [5725] = 1,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
  [5729] = 1,
    ACTIONS(1035), 1,
      aux_sym__input_id_token1,
  [5733] = 1,
    ACTIONS(1037), 1,
      aux_sym__scale_token1,
  [5737] = 1,
    ACTIONS(1039), 1,
      aux_sym__scale_token1,
  [5741] = 1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
  [5745] = 1,
    ACTIONS(113), 1,
      anon_sym_with,
  [5749] = 1,
    ACTIONS(117), 1,
      anon_sym_with,
  [5753] = 1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [5757] = 1,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
  [5761] = 1,
    ACTIONS(1047), 1,
      ts_builtin_sym_end,
  [5765] = 1,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
  [5769] = 1,
    ACTIONS(1051), 1,
      aux_sym_origin_token1,
  [5773] = 1,
    ACTIONS(1053), 1,
      aux_sym__guide_id_token1,
  [5777] = 1,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [5781] = 1,
    ACTIONS(1057), 1,
      aux_sym__new_xy_token2,
  [5785] = 1,
    ACTIONS(1059), 1,
      aux_sym_relative_token1,
  [5789] = 1,
    ACTIONS(1061), 1,
      aux_sym_relative_token1,
  [5793] = 1,
    ACTIONS(1063), 1,
      anon_sym_DQUOTE,
  [5797] = 1,
    ACTIONS(1063), 1,
      anon_sym_SQUOTE,
  [5801] = 1,
    ACTIONS(1065), 1,
      aux_sym__new_xy_token2,
  [5805] = 1,
    ACTIONS(1067), 1,
      aux_sym__new_xy_token2,
  [5809] = 1,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [5813] = 1,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
  [5817] = 1,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
  [5821] = 1,
    ACTIONS(1075), 1,
      aux_sym__new_xy_token2,
  [5825] = 1,
    ACTIONS(1077), 1,
      aux_sym_relative_token1,
  [5829] = 1,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
  [5833] = 1,
    ACTIONS(1081), 1,
      aux_sym__new_xy_token2,
  [5837] = 1,
    ACTIONS(1083), 1,
      aux_sym__new_xy_token2,
  [5841] = 1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
  [5845] = 1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [5849] = 1,
    ACTIONS(1089), 1,
      aux_sym__new_xy_token2,
  [5853] = 1,
    ACTIONS(1091), 1,
      aux_sym_relative_token1,
  [5857] = 1,
    ACTIONS(1093), 1,
      aux_sym__new_xy_token2,
  [5861] = 1,
    ACTIONS(1095), 1,
      aux_sym__new_xy_token2,
  [5865] = 1,
    ACTIONS(1097), 1,
      sym_width,
  [5869] = 1,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
  [5873] = 1,
    ACTIONS(1101), 1,
      anon_sym_COMMA,
  [5877] = 1,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
  [5881] = 1,
    ACTIONS(1105), 1,
      aux_sym__label_id_token2,
  [5885] = 1,
    ACTIONS(1107), 1,
      aux_sym__label_id_token3,
  [5889] = 1,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
  [5893] = 1,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
  [5897] = 1,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
  [5901] = 1,
    ACTIONS(1115), 1,
      aux_sym__new_xy_token2,
  [5905] = 1,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
  [5909] = 1,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
  [5913] = 1,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
  [5917] = 1,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
  [5921] = 1,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
  [5925] = 1,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
  [5929] = 1,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
  [5933] = 1,
    ACTIONS(1131), 1,
      aux_sym__new_xy_token2,
  [5937] = 1,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
  [5941] = 1,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
  [5945] = 1,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
  [5949] = 1,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
  [5953] = 1,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
  [5957] = 1,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
  [5961] = 1,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
  [5965] = 1,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
  [5969] = 1,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
  [5973] = 1,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
  [5977] = 1,
    ACTIONS(983), 1,
      sym_rgb,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 263,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 351,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 439,
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
  [SMALL_STATE(23)] = 781,
  [SMALL_STATE(24)] = 809,
  [SMALL_STATE(25)] = 837,
  [SMALL_STATE(26)] = 864,
  [SMALL_STATE(27)] = 891,
  [SMALL_STATE(28)] = 918,
  [SMALL_STATE(29)] = 964,
  [SMALL_STATE(30)] = 1010,
  [SMALL_STATE(31)] = 1033,
  [SMALL_STATE(32)] = 1072,
  [SMALL_STATE(33)] = 1095,
  [SMALL_STATE(34)] = 1134,
  [SMALL_STATE(35)] = 1156,
  [SMALL_STATE(36)] = 1178,
  [SMALL_STATE(37)] = 1200,
  [SMALL_STATE(38)] = 1222,
  [SMALL_STATE(39)] = 1244,
  [SMALL_STATE(40)] = 1278,
  [SMALL_STATE(41)] = 1315,
  [SMALL_STATE(42)] = 1352,
  [SMALL_STATE(43)] = 1385,
  [SMALL_STATE(44)] = 1416,
  [SMALL_STATE(45)] = 1449,
  [SMALL_STATE(46)] = 1486,
  [SMALL_STATE(47)] = 1519,
  [SMALL_STATE(48)] = 1547,
  [SMALL_STATE(49)] = 1565,
  [SMALL_STATE(50)] = 1586,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1632,
  [SMALL_STATE(53)] = 1655,
  [SMALL_STATE(54)] = 1676,
  [SMALL_STATE(55)] = 1699,
  [SMALL_STATE(56)] = 1722,
  [SMALL_STATE(57)] = 1745,
  [SMALL_STATE(58)] = 1766,
  [SMALL_STATE(59)] = 1787,
  [SMALL_STATE(60)] = 1810,
  [SMALL_STATE(61)] = 1829,
  [SMALL_STATE(62)] = 1848,
  [SMALL_STATE(63)] = 1876,
  [SMALL_STATE(64)] = 1894,
  [SMALL_STATE(65)] = 1922,
  [SMALL_STATE(66)] = 1944,
  [SMALL_STATE(67)] = 1972,
  [SMALL_STATE(68)] = 1988,
  [SMALL_STATE(69)] = 2008,
  [SMALL_STATE(70)] = 2028,
  [SMALL_STATE(71)] = 2048,
  [SMALL_STATE(72)] = 2068,
  [SMALL_STATE(73)] = 2088,
  [SMALL_STATE(74)] = 2116,
  [SMALL_STATE(75)] = 2144,
  [SMALL_STATE(76)] = 2172,
  [SMALL_STATE(77)] = 2190,
  [SMALL_STATE(78)] = 2208,
  [SMALL_STATE(79)] = 2236,
  [SMALL_STATE(80)] = 2253,
  [SMALL_STATE(81)] = 2268,
  [SMALL_STATE(82)] = 2295,
  [SMALL_STATE(83)] = 2310,
  [SMALL_STATE(84)] = 2339,
  [SMALL_STATE(85)] = 2354,
  [SMALL_STATE(86)] = 2369,
  [SMALL_STATE(87)] = 2386,
  [SMALL_STATE(88)] = 2403,
  [SMALL_STATE(89)] = 2420,
  [SMALL_STATE(90)] = 2437,
  [SMALL_STATE(91)] = 2464,
  [SMALL_STATE(92)] = 2481,
  [SMALL_STATE(93)] = 2508,
  [SMALL_STATE(94)] = 2525,
  [SMALL_STATE(95)] = 2542,
  [SMALL_STATE(96)] = 2557,
  [SMALL_STATE(97)] = 2574,
  [SMALL_STATE(98)] = 2591,
  [SMALL_STATE(99)] = 2608,
  [SMALL_STATE(100)] = 2625,
  [SMALL_STATE(101)] = 2642,
  [SMALL_STATE(102)] = 2657,
  [SMALL_STATE(103)] = 2674,
  [SMALL_STATE(104)] = 2691,
  [SMALL_STATE(105)] = 2708,
  [SMALL_STATE(106)] = 2722,
  [SMALL_STATE(107)] = 2736,
  [SMALL_STATE(108)] = 2750,
  [SMALL_STATE(109)] = 2764,
  [SMALL_STATE(110)] = 2778,
  [SMALL_STATE(111)] = 2792,
  [SMALL_STATE(112)] = 2806,
  [SMALL_STATE(113)] = 2820,
  [SMALL_STATE(114)] = 2834,
  [SMALL_STATE(115)] = 2848,
  [SMALL_STATE(116)] = 2862,
  [SMALL_STATE(117)] = 2876,
  [SMALL_STATE(118)] = 2892,
  [SMALL_STATE(119)] = 2906,
  [SMALL_STATE(120)] = 2920,
  [SMALL_STATE(121)] = 2934,
  [SMALL_STATE(122)] = 2948,
  [SMALL_STATE(123)] = 2962,
  [SMALL_STATE(124)] = 2976,
  [SMALL_STATE(125)] = 2990,
  [SMALL_STATE(126)] = 3004,
  [SMALL_STATE(127)] = 3018,
  [SMALL_STATE(128)] = 3032,
  [SMALL_STATE(129)] = 3046,
  [SMALL_STATE(130)] = 3060,
  [SMALL_STATE(131)] = 3074,
  [SMALL_STATE(132)] = 3088,
  [SMALL_STATE(133)] = 3102,
  [SMALL_STATE(134)] = 3116,
  [SMALL_STATE(135)] = 3130,
  [SMALL_STATE(136)] = 3144,
  [SMALL_STATE(137)] = 3166,
  [SMALL_STATE(138)] = 3180,
  [SMALL_STATE(139)] = 3194,
  [SMALL_STATE(140)] = 3208,
  [SMALL_STATE(141)] = 3222,
  [SMALL_STATE(142)] = 3236,
  [SMALL_STATE(143)] = 3250,
  [SMALL_STATE(144)] = 3264,
  [SMALL_STATE(145)] = 3278,
  [SMALL_STATE(146)] = 3292,
  [SMALL_STATE(147)] = 3306,
  [SMALL_STATE(148)] = 3320,
  [SMALL_STATE(149)] = 3334,
  [SMALL_STATE(150)] = 3348,
  [SMALL_STATE(151)] = 3362,
  [SMALL_STATE(152)] = 3376,
  [SMALL_STATE(153)] = 3390,
  [SMALL_STATE(154)] = 3404,
  [SMALL_STATE(155)] = 3418,
  [SMALL_STATE(156)] = 3432,
  [SMALL_STATE(157)] = 3446,
  [SMALL_STATE(158)] = 3460,
  [SMALL_STATE(159)] = 3474,
  [SMALL_STATE(160)] = 3488,
  [SMALL_STATE(161)] = 3502,
  [SMALL_STATE(162)] = 3516,
  [SMALL_STATE(163)] = 3530,
  [SMALL_STATE(164)] = 3544,
  [SMALL_STATE(165)] = 3558,
  [SMALL_STATE(166)] = 3572,
  [SMALL_STATE(167)] = 3586,
  [SMALL_STATE(168)] = 3600,
  [SMALL_STATE(169)] = 3614,
  [SMALL_STATE(170)] = 3628,
  [SMALL_STATE(171)] = 3642,
  [SMALL_STATE(172)] = 3656,
  [SMALL_STATE(173)] = 3688,
  [SMALL_STATE(174)] = 3702,
  [SMALL_STATE(175)] = 3716,
  [SMALL_STATE(176)] = 3730,
  [SMALL_STATE(177)] = 3744,
  [SMALL_STATE(178)] = 3758,
  [SMALL_STATE(179)] = 3772,
  [SMALL_STATE(180)] = 3786,
  [SMALL_STATE(181)] = 3800,
  [SMALL_STATE(182)] = 3814,
  [SMALL_STATE(183)] = 3828,
  [SMALL_STATE(184)] = 3842,
  [SMALL_STATE(185)] = 3856,
  [SMALL_STATE(186)] = 3870,
  [SMALL_STATE(187)] = 3884,
  [SMALL_STATE(188)] = 3898,
  [SMALL_STATE(189)] = 3912,
  [SMALL_STATE(190)] = 3926,
  [SMALL_STATE(191)] = 3940,
  [SMALL_STATE(192)] = 3954,
  [SMALL_STATE(193)] = 3968,
  [SMALL_STATE(194)] = 3984,
  [SMALL_STATE(195)] = 3998,
  [SMALL_STATE(196)] = 4012,
  [SMALL_STATE(197)] = 4026,
  [SMALL_STATE(198)] = 4040,
  [SMALL_STATE(199)] = 4054,
  [SMALL_STATE(200)] = 4068,
  [SMALL_STATE(201)] = 4082,
  [SMALL_STATE(202)] = 4096,
  [SMALL_STATE(203)] = 4119,
  [SMALL_STATE(204)] = 4141,
  [SMALL_STATE(205)] = 4155,
  [SMALL_STATE(206)] = 4181,
  [SMALL_STATE(207)] = 4195,
  [SMALL_STATE(208)] = 4216,
  [SMALL_STATE(209)] = 4235,
  [SMALL_STATE(210)] = 4251,
  [SMALL_STATE(211)] = 4267,
  [SMALL_STATE(212)] = 4283,
  [SMALL_STATE(213)] = 4293,
  [SMALL_STATE(214)] = 4309,
  [SMALL_STATE(215)] = 4325,
  [SMALL_STATE(216)] = 4341,
  [SMALL_STATE(217)] = 4357,
  [SMALL_STATE(218)] = 4367,
  [SMALL_STATE(219)] = 4377,
  [SMALL_STATE(220)] = 4393,
  [SMALL_STATE(221)] = 4405,
  [SMALL_STATE(222)] = 4421,
  [SMALL_STATE(223)] = 4437,
  [SMALL_STATE(224)] = 4447,
  [SMALL_STATE(225)] = 4457,
  [SMALL_STATE(226)] = 4467,
  [SMALL_STATE(227)] = 4477,
  [SMALL_STATE(228)] = 4487,
  [SMALL_STATE(229)] = 4497,
  [SMALL_STATE(230)] = 4507,
  [SMALL_STATE(231)] = 4517,
  [SMALL_STATE(232)] = 4533,
  [SMALL_STATE(233)] = 4542,
  [SMALL_STATE(234)] = 4555,
  [SMALL_STATE(235)] = 4566,
  [SMALL_STATE(236)] = 4577,
  [SMALL_STATE(237)] = 4590,
  [SMALL_STATE(238)] = 4603,
  [SMALL_STATE(239)] = 4616,
  [SMALL_STATE(240)] = 4629,
  [SMALL_STATE(241)] = 4642,
  [SMALL_STATE(242)] = 4655,
  [SMALL_STATE(243)] = 4668,
  [SMALL_STATE(244)] = 4681,
  [SMALL_STATE(245)] = 4691,
  [SMALL_STATE(246)] = 4701,
  [SMALL_STATE(247)] = 4711,
  [SMALL_STATE(248)] = 4721,
  [SMALL_STATE(249)] = 4731,
  [SMALL_STATE(250)] = 4741,
  [SMALL_STATE(251)] = 4751,
  [SMALL_STATE(252)] = 4761,
  [SMALL_STATE(253)] = 4771,
  [SMALL_STATE(254)] = 4781,
  [SMALL_STATE(255)] = 4791,
  [SMALL_STATE(256)] = 4801,
  [SMALL_STATE(257)] = 4811,
  [SMALL_STATE(258)] = 4821,
  [SMALL_STATE(259)] = 4831,
  [SMALL_STATE(260)] = 4841,
  [SMALL_STATE(261)] = 4851,
  [SMALL_STATE(262)] = 4861,
  [SMALL_STATE(263)] = 4871,
  [SMALL_STATE(264)] = 4877,
  [SMALL_STATE(265)] = 4887,
  [SMALL_STATE(266)] = 4897,
  [SMALL_STATE(267)] = 4907,
  [SMALL_STATE(268)] = 4917,
  [SMALL_STATE(269)] = 4927,
  [SMALL_STATE(270)] = 4933,
  [SMALL_STATE(271)] = 4943,
  [SMALL_STATE(272)] = 4953,
  [SMALL_STATE(273)] = 4963,
  [SMALL_STATE(274)] = 4973,
  [SMALL_STATE(275)] = 4983,
  [SMALL_STATE(276)] = 4993,
  [SMALL_STATE(277)] = 5003,
  [SMALL_STATE(278)] = 5013,
  [SMALL_STATE(279)] = 5023,
  [SMALL_STATE(280)] = 5033,
  [SMALL_STATE(281)] = 5040,
  [SMALL_STATE(282)] = 5047,
  [SMALL_STATE(283)] = 5054,
  [SMALL_STATE(284)] = 5061,
  [SMALL_STATE(285)] = 5068,
  [SMALL_STATE(286)] = 5075,
  [SMALL_STATE(287)] = 5082,
  [SMALL_STATE(288)] = 5087,
  [SMALL_STATE(289)] = 5094,
  [SMALL_STATE(290)] = 5101,
  [SMALL_STATE(291)] = 5108,
  [SMALL_STATE(292)] = 5115,
  [SMALL_STATE(293)] = 5122,
  [SMALL_STATE(294)] = 5127,
  [SMALL_STATE(295)] = 5134,
  [SMALL_STATE(296)] = 5141,
  [SMALL_STATE(297)] = 5148,
  [SMALL_STATE(298)] = 5155,
  [SMALL_STATE(299)] = 5160,
  [SMALL_STATE(300)] = 5167,
  [SMALL_STATE(301)] = 5174,
  [SMALL_STATE(302)] = 5181,
  [SMALL_STATE(303)] = 5188,
  [SMALL_STATE(304)] = 5195,
  [SMALL_STATE(305)] = 5202,
  [SMALL_STATE(306)] = 5209,
  [SMALL_STATE(307)] = 5216,
  [SMALL_STATE(308)] = 5223,
  [SMALL_STATE(309)] = 5230,
  [SMALL_STATE(310)] = 5237,
  [SMALL_STATE(311)] = 5244,
  [SMALL_STATE(312)] = 5251,
  [SMALL_STATE(313)] = 5258,
  [SMALL_STATE(314)] = 5265,
  [SMALL_STATE(315)] = 5272,
  [SMALL_STATE(316)] = 5279,
  [SMALL_STATE(317)] = 5286,
  [SMALL_STATE(318)] = 5293,
  [SMALL_STATE(319)] = 5300,
  [SMALL_STATE(320)] = 5307,
  [SMALL_STATE(321)] = 5314,
  [SMALL_STATE(322)] = 5321,
  [SMALL_STATE(323)] = 5328,
  [SMALL_STATE(324)] = 5335,
  [SMALL_STATE(325)] = 5342,
  [SMALL_STATE(326)] = 5349,
  [SMALL_STATE(327)] = 5353,
  [SMALL_STATE(328)] = 5357,
  [SMALL_STATE(329)] = 5361,
  [SMALL_STATE(330)] = 5365,
  [SMALL_STATE(331)] = 5369,
  [SMALL_STATE(332)] = 5373,
  [SMALL_STATE(333)] = 5377,
  [SMALL_STATE(334)] = 5381,
  [SMALL_STATE(335)] = 5385,
  [SMALL_STATE(336)] = 5389,
  [SMALL_STATE(337)] = 5393,
  [SMALL_STATE(338)] = 5397,
  [SMALL_STATE(339)] = 5401,
  [SMALL_STATE(340)] = 5405,
  [SMALL_STATE(341)] = 5409,
  [SMALL_STATE(342)] = 5413,
  [SMALL_STATE(343)] = 5417,
  [SMALL_STATE(344)] = 5421,
  [SMALL_STATE(345)] = 5425,
  [SMALL_STATE(346)] = 5429,
  [SMALL_STATE(347)] = 5433,
  [SMALL_STATE(348)] = 5437,
  [SMALL_STATE(349)] = 5441,
  [SMALL_STATE(350)] = 5445,
  [SMALL_STATE(351)] = 5449,
  [SMALL_STATE(352)] = 5453,
  [SMALL_STATE(353)] = 5457,
  [SMALL_STATE(354)] = 5461,
  [SMALL_STATE(355)] = 5465,
  [SMALL_STATE(356)] = 5469,
  [SMALL_STATE(357)] = 5473,
  [SMALL_STATE(358)] = 5477,
  [SMALL_STATE(359)] = 5481,
  [SMALL_STATE(360)] = 5485,
  [SMALL_STATE(361)] = 5489,
  [SMALL_STATE(362)] = 5493,
  [SMALL_STATE(363)] = 5497,
  [SMALL_STATE(364)] = 5501,
  [SMALL_STATE(365)] = 5505,
  [SMALL_STATE(366)] = 5509,
  [SMALL_STATE(367)] = 5513,
  [SMALL_STATE(368)] = 5517,
  [SMALL_STATE(369)] = 5521,
  [SMALL_STATE(370)] = 5525,
  [SMALL_STATE(371)] = 5529,
  [SMALL_STATE(372)] = 5533,
  [SMALL_STATE(373)] = 5537,
  [SMALL_STATE(374)] = 5541,
  [SMALL_STATE(375)] = 5545,
  [SMALL_STATE(376)] = 5549,
  [SMALL_STATE(377)] = 5553,
  [SMALL_STATE(378)] = 5557,
  [SMALL_STATE(379)] = 5561,
  [SMALL_STATE(380)] = 5565,
  [SMALL_STATE(381)] = 5569,
  [SMALL_STATE(382)] = 5573,
  [SMALL_STATE(383)] = 5577,
  [SMALL_STATE(384)] = 5581,
  [SMALL_STATE(385)] = 5585,
  [SMALL_STATE(386)] = 5589,
  [SMALL_STATE(387)] = 5593,
  [SMALL_STATE(388)] = 5597,
  [SMALL_STATE(389)] = 5601,
  [SMALL_STATE(390)] = 5605,
  [SMALL_STATE(391)] = 5609,
  [SMALL_STATE(392)] = 5613,
  [SMALL_STATE(393)] = 5617,
  [SMALL_STATE(394)] = 5621,
  [SMALL_STATE(395)] = 5625,
  [SMALL_STATE(396)] = 5629,
  [SMALL_STATE(397)] = 5633,
  [SMALL_STATE(398)] = 5637,
  [SMALL_STATE(399)] = 5641,
  [SMALL_STATE(400)] = 5645,
  [SMALL_STATE(401)] = 5649,
  [SMALL_STATE(402)] = 5653,
  [SMALL_STATE(403)] = 5657,
  [SMALL_STATE(404)] = 5661,
  [SMALL_STATE(405)] = 5665,
  [SMALL_STATE(406)] = 5669,
  [SMALL_STATE(407)] = 5673,
  [SMALL_STATE(408)] = 5677,
  [SMALL_STATE(409)] = 5681,
  [SMALL_STATE(410)] = 5685,
  [SMALL_STATE(411)] = 5689,
  [SMALL_STATE(412)] = 5693,
  [SMALL_STATE(413)] = 5697,
  [SMALL_STATE(414)] = 5701,
  [SMALL_STATE(415)] = 5705,
  [SMALL_STATE(416)] = 5709,
  [SMALL_STATE(417)] = 5713,
  [SMALL_STATE(418)] = 5717,
  [SMALL_STATE(419)] = 5721,
  [SMALL_STATE(420)] = 5725,
  [SMALL_STATE(421)] = 5729,
  [SMALL_STATE(422)] = 5733,
  [SMALL_STATE(423)] = 5737,
  [SMALL_STATE(424)] = 5741,
  [SMALL_STATE(425)] = 5745,
  [SMALL_STATE(426)] = 5749,
  [SMALL_STATE(427)] = 5753,
  [SMALL_STATE(428)] = 5757,
  [SMALL_STATE(429)] = 5761,
  [SMALL_STATE(430)] = 5765,
  [SMALL_STATE(431)] = 5769,
  [SMALL_STATE(432)] = 5773,
  [SMALL_STATE(433)] = 5777,
  [SMALL_STATE(434)] = 5781,
  [SMALL_STATE(435)] = 5785,
  [SMALL_STATE(436)] = 5789,
  [SMALL_STATE(437)] = 5793,
  [SMALL_STATE(438)] = 5797,
  [SMALL_STATE(439)] = 5801,
  [SMALL_STATE(440)] = 5805,
  [SMALL_STATE(441)] = 5809,
  [SMALL_STATE(442)] = 5813,
  [SMALL_STATE(443)] = 5817,
  [SMALL_STATE(444)] = 5821,
  [SMALL_STATE(445)] = 5825,
  [SMALL_STATE(446)] = 5829,
  [SMALL_STATE(447)] = 5833,
  [SMALL_STATE(448)] = 5837,
  [SMALL_STATE(449)] = 5841,
  [SMALL_STATE(450)] = 5845,
  [SMALL_STATE(451)] = 5849,
  [SMALL_STATE(452)] = 5853,
  [SMALL_STATE(453)] = 5857,
  [SMALL_STATE(454)] = 5861,
  [SMALL_STATE(455)] = 5865,
  [SMALL_STATE(456)] = 5869,
  [SMALL_STATE(457)] = 5873,
  [SMALL_STATE(458)] = 5877,
  [SMALL_STATE(459)] = 5881,
  [SMALL_STATE(460)] = 5885,
  [SMALL_STATE(461)] = 5889,
  [SMALL_STATE(462)] = 5893,
  [SMALL_STATE(463)] = 5897,
  [SMALL_STATE(464)] = 5901,
  [SMALL_STATE(465)] = 5905,
  [SMALL_STATE(466)] = 5909,
  [SMALL_STATE(467)] = 5913,
  [SMALL_STATE(468)] = 5917,
  [SMALL_STATE(469)] = 5921,
  [SMALL_STATE(470)] = 5925,
  [SMALL_STATE(471)] = 5929,
  [SMALL_STATE(472)] = 5933,
  [SMALL_STATE(473)] = 5937,
  [SMALL_STATE(474)] = 5941,
  [SMALL_STATE(475)] = 5945,
  [SMALL_STATE(476)] = 5949,
  [SMALL_STATE(477)] = 5953,
  [SMALL_STATE(478)] = 5957,
  [SMALL_STATE(479)] = 5961,
  [SMALL_STATE(480)] = 5965,
  [SMALL_STATE(481)] = 5969,
  [SMALL_STATE(482)] = 5973,
  [SMALL_STATE(483)] = 5977,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 27),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(31),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(265),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(288),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(234),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(235),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(263),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 8),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 8),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 5),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 14),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 12),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 11),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 28),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 22),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 22),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 13),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 22),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_dxy_attr, 3, .production_id = 18),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 17),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 17),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 17),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 16),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 13),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 14),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 17),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [1047] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
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
