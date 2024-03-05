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
#define STATE_COUNT 399
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 28

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
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_set = 12,
  anon_sym_name = 13,
  anon_sym_height = 14,
  anon_sym_width = 15,
  anon_sym_x = 16,
  anon_sym_y = 17,
  anon_sym_xy = 18,
  anon_sym_part = 19,
  anon_sym_text = 20,
  anon_sym_font = 21,
  anon_sym_size = 22,
  anon_sym_halign = 23,
  anon_sym_valign = 24,
  anon_sym_align = 25,
  anon_sym_colour = 26,
  anon_sym_color = 27,
  anon_sym_id = 28,
  anon_sym_input2 = 29,
  anon_sym_output2 = 30,
  anon_sym_parameter = 31,
  anon_sym_light2 = 32,
  anon_sym_widget2 = 33,
  aux_sym__offset_attr_token1 = 34,
  anon_sym_AT = 35,
  aux_sym__absolute_attr_token1 = 36,
  anon_sym_left = 37,
  anon_sym_centre = 38,
  anon_sym_center = 39,
  anon_sym_right = 40,
  aux_sym__geometry_x_attr_token1 = 41,
  anon_sym_top = 42,
  anon_sym_middle = 43,
  anon_sym_bottom = 44,
  aux_sym__guide_attr_token1 = 45,
  aux_sym__guide_attr_token2 = 46,
  anon_sym_decoration = 47,
  anon_sym_decorate = 48,
  anon_sym_with = 49,
  anon_sym_delete = 50,
  anon_sym_guide = 51,
  aux_sym__guide_id_token1 = 52,
  aux_sym__input_id_token1 = 53,
  anon_sym_label = 54,
  aux_sym__label_id_token1 = 55,
  anon_sym_DQUOTE = 56,
  aux_sym__label_id_token2 = 57,
  anon_sym_SQUOTE = 58,
  aux_sym__label_id_token3 = 59,
  anon_sym_load = 60,
  anon_sym_project = 61,
  anon_sym_script = 62,
  anon_sym_unload = 63,
  anon_sym_save = 64,
  anon_sym_export = 65,
  anon_sym_DOTh = 66,
  anon_sym_GT_GT = 67,
  anon_sym_list = 68,
  anon_sym_fonts = 69,
  anon_sym_parts = 70,
  anon_sym_decorations = 71,
  anon_sym_timestamp = 72,
  anon_sym_gzip = 73,
  sym_fontsize = 74,
  anon_sym_baseline = 75,
  anon_sym_scale = 76,
  aux_sym__scale_token1 = 77,
  anon_sym_stretch = 78,
  anon_sym_origin = 79,
  aux_sym_origin_token1 = 80,
  aux_sym__originx_token1 = 81,
  aux_sym__originy_token1 = 82,
  anon_sym_background = 83,
  anon_sym_none = 84,
  sym_rgb = 85,
  sym_rgba = 86,
  anon_sym_panel = 87,
  anon_sym_svg = 88,
  anon_sym_dark = 89,
  sym_height = 90,
  sym_width = 91,
  anon_sym_vertical = 92,
  anon_sym_horizontal = 93,
  aux_sym_offset_token1 = 94,
  aux_sym__string_token1 = 95,
  aux_sym_absolute_token1 = 96,
  aux_sym_relative_token1 = 97,
  sym_command = 98,
  sym_new = 99,
  sym__new_module = 100,
  sym__new_input = 101,
  sym__new_output = 102,
  sym__new_parameter = 103,
  sym__new_light = 104,
  sym__new_widget = 105,
  sym__new_component = 106,
  sym__new_xy = 107,
  sym_set = 108,
  sym__module_attr = 109,
  sym__component_attr = 110,
  sym__label_attr = 111,
  sym__decoration_attr = 112,
  sym__guideline_attr = 113,
  sym__x_attr = 114,
  sym__y_attr = 115,
  sym__xy_attr = 116,
  sym__offset_attr = 117,
  sym__offset_xy_attr = 118,
  sym__absolute_attr = 119,
  sym__absolute_x_attr = 120,
  sym__absolute_y_attr = 121,
  sym__absolute_xy_attr = 122,
  sym__relative_attr = 123,
  sym__relative_xy_attr = 124,
  sym__geometry_x_attr = 125,
  sym__geometry_y_attr = 126,
  sym__geometry_xy_attr = 127,
  sym__guide_attr = 128,
  sym__guide_xy_attr = 129,
  sym__component_x_attr = 130,
  sym__component_y_attr = 131,
  sym__component_xy_attr = 132,
  sym__new_decoration = 133,
  sym_decorate = 134,
  sym_delete = 135,
  sym__guide_id = 136,
  sym__input_id = 137,
  sym__output_id = 138,
  sym__parameter_id = 139,
  sym__light_id = 140,
  sym__widget_id = 141,
  sym__label_id = 142,
  sym__decoration_id = 143,
  sym__font_id = 144,
  sym__component_id = 145,
  sym_load = 146,
  sym_unload = 147,
  sym_save = 148,
  sym_export = 149,
  sym__module_export = 150,
  sym_list = 151,
  sym_project = 152,
  sym_script = 153,
  sym__input = 154,
  sym__output = 155,
  sym__parameter = 156,
  sym__light = 157,
  sym__widget = 158,
  sym_label = 159,
  sym_font = 160,
  sym__align = 161,
  sym_halign = 162,
  sym_valign = 163,
  sym_colour = 164,
  sym_decoration = 165,
  sym__scale = 166,
  sym_stretch = 167,
  sym_origin = 168,
  sym__originx = 169,
  sym__originy = 170,
  sym_background = 171,
  sym_panel = 172,
  sym_svg = 173,
  sym_name = 174,
  sym_part = 175,
  sym_guide = 176,
  sym_identifier = 177,
  sym_vertical = 178,
  sym_horizontal = 179,
  sym_geometry = 180,
  sym_offset = 181,
  sym__offset = 182,
  sym_guideline = 183,
  sym__string = 184,
  sym_absolute = 185,
  sym_relative = 186,
  sym__decorate = 187,
  sym__relative = 188,
  sym_x = 189,
  sym_y = 190,
  aux_sym_command_repeat1 = 191,
  alias_sym_dy = 192,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_new] = "new",
  [anon_sym_module] = "module",
  [anon_sym_COMMA] = ",",
  [anon_sym_input] = "input ",
  [anon_sym_output] = "output ",
  [aux_sym__new_parameter_token1] = "_new_parameter_token1",
  [anon_sym_light] = "light ",
  [anon_sym_widget] = "widget ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_set] = "set",
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
  [anon_sym_decoration] = "decoration",
  [anon_sym_decorate] = "decorate",
  [anon_sym_with] = "with",
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
  [aux_sym_absolute_token1] = "x",
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
  [sym__new_decoration] = "decoration",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_set] = anon_sym_set,
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
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_decorate] = anon_sym_decorate,
  [anon_sym_with] = anon_sym_with,
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
  [aux_sym_absolute_token1] = sym_x,
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
  [sym__new_decoration] = sym_decoration,
  [sym_decorate] = sym_decorate,
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
  [sym__new_decoration] = {
    .visible = true,
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
    [2] = sym_x,
  },
  [10] = {
    [2] = sym_y,
  },
  [11] = {
    [1] = sym__new_light,
  },
  [12] = {
    [1] = sym_absolute,
  },
  [13] = {
    [1] = aux_sym__string_token1,
  },
  [14] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [15] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [16] = {
    [3] = sym_y,
  },
  [17] = {
    [2] = sym__new_output,
  },
  [18] = {
    [2] = sym__new_parameter,
  },
  [19] = {
    [2] = sym__new_light,
  },
  [20] = {
    [2] = sym__new_widget,
  },
  [21] = {
    [2] = alias_sym_dy,
  },
  [22] = {
    [1] = sym__new_input,
  },
  [23] = {
    [1] = sym__new_output,
  },
  [24] = {
    [1] = sym__new_parameter,
  },
  [25] = {
    [1] = sym__new_widget,
  },
  [26] = {
    [1] = sym_label,
  },
  [27] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__offset_attr, 3,
    sym__offset_attr,
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
  [45] = 11,
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
  [72] = 21,
  [73] = 73,
  [74] = 74,
  [75] = 21,
  [76] = 76,
  [77] = 77,
  [78] = 18,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 19,
  [86] = 86,
  [87] = 87,
  [88] = 20,
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
  [100] = 94,
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
  [147] = 95,
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
  [192] = 93,
  [193] = 27,
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
  [263] = 27,
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
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
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
  [389] = 322,
  [390] = 326,
  [391] = 348,
  [392] = 300,
  [393] = 337,
  [394] = 382,
  [395] = 380,
  [396] = 345,
  [397] = 308,
  [398] = 330,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '\'') ADVANCE(562);
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == ')') ADVANCE(373);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '0') ADVANCE(399);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '@') ADVANCE(405);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'g') ADVANCE(316);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(379);
      if (lookahead == 'y') ADVANCE(380);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(367);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(368);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(371);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '"') ADVANCE(557);
      if (lookahead == '\'') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(614);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '"') ADVANCE(559);
      if (lookahead == '\'') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(555);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(487);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(487);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == ')') ADVANCE(373);
      if (lookahead == '@') ADVANCE(405);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == '@') ADVANCE(405);
      if (lookahead == 'b') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == '@') ADVANCE(405);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(607);
      if (lookahead == 'U') ADVANCE(606);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '5') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'H') ADVANCE(607);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'H') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == 'H') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(608);
      if (lookahead == 'p') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(332);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(613);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == '8') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(607);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(246);
      if (lookahead == 'H') ADVANCE(607);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 31:
      if (lookahead == '5') ADVANCE(199);
      END_STATE();
    case 32:
      if (lookahead == '5') ADVANCE(199);
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 33:
      if (lookahead == ';') ADVANCE(362);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(578);
      END_STATE();
    case 35:
      if (lookahead == '@') ADVANCE(405);
      if (lookahead == 'b') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(405);
      if (lookahead == 'b') ADVANCE(222);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == 'v') ADVANCE(443);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(571);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(597);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(293);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(604);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(113);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(577);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(482);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(378);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(592);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(285);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 165:
      if (lookahead == 'j') ADVANCE(91);
      END_STATE();
    case 166:
      if (lookahead == 'k') ADVANCE(605);
      END_STATE();
    case 167:
      if (lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(611);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(1);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(430);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(594);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(613);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(607);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(606);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(616);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(617);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(585);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(584);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == 'z') ADVANCE(152);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 321:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 322:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 323:
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 324:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 325:
      if (lookahead == 'w') ADVANCE(363);
      END_STATE();
    case 326:
      if (lookahead == 'x') ADVANCE(249);
      END_STATE();
    case 327:
      if (lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 328:
      if (lookahead == 'z') ADVANCE(88);
      END_STATE();
    case 329:
      if (lookahead == 'z') ADVANCE(236);
      END_STATE();
    case 330:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(594);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(613);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(617);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 342:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      END_STATE();
    case 343:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 344:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 345:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 346:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 347:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 353:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 354:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 355:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 356:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == ')') ADVANCE(373);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(508);
      if (lookahead == 'd') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead == 'm') ADVANCE(515);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(523);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 357:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(523);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 358:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == ')') ADVANCE(373);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(379);
      if (lookahead == 'y') ADVANCE(380);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 359:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '@') ADVANCE(405);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'w') ADVANCE(162);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 360:
      if (eof) ADVANCE(361);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(218);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__new_parameter_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(403);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(404);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == 'H') ADVANCE(421);
      if (lookahead == 'm') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(421);
      if (lookahead == 'm') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == 'H') ADVANCE(476);
      if (lookahead == 'm') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(476);
      if (lookahead == 'm') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__guide_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '"') ADVANCE(559);
      if (lookahead == '\'') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__label_id_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__label_id_token3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_unload);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_unload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_DOTh);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_fonts);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_parts);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_decorations);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(199);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(475);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '"') ADVANCE(558);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 356},
  [3] = {.lex_state = 356},
  [4] = {.lex_state = 358},
  [5] = {.lex_state = 358},
  [6] = {.lex_state = 358},
  [7] = {.lex_state = 358},
  [8] = {.lex_state = 358},
  [9] = {.lex_state = 358},
  [10] = {.lex_state = 358},
  [11] = {.lex_state = 356},
  [12] = {.lex_state = 356},
  [13] = {.lex_state = 356},
  [14] = {.lex_state = 356},
  [15] = {.lex_state = 356},
  [16] = {.lex_state = 356},
  [17] = {.lex_state = 356},
  [18] = {.lex_state = 356},
  [19] = {.lex_state = 356},
  [20] = {.lex_state = 356},
  [21] = {.lex_state = 356},
  [22] = {.lex_state = 358},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 358},
  [28] = {.lex_state = 359},
  [29] = {.lex_state = 358},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 358},
  [43] = {.lex_state = 358},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 357},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 359},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 360},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 358},
  [63] = {.lex_state = 358},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 357},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 357},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 357},
  [78] = {.lex_state = 357},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 359},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 357},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 357},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 35},
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
  [117] = {.lex_state = 358},
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
  [147] = {.lex_state = 61},
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
  [186] = {.lex_state = 358},
  [187] = {.lex_state = 358},
  [188] = {.lex_state = 358},
  [189] = {.lex_state = 358},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 358},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 358},
  [198] = {.lex_state = 359},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 358},
  [201] = {.lex_state = 358},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 358},
  [204] = {.lex_state = 358},
  [205] = {.lex_state = 358},
  [206] = {.lex_state = 358},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 356},
  [209] = {.lex_state = 356},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 356},
  [212] = {.lex_state = 358},
  [213] = {.lex_state = 356},
  [214] = {.lex_state = 356},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 356},
  [227] = {.lex_state = 356},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 356},
  [230] = {.lex_state = 356},
  [231] = {.lex_state = 356},
  [232] = {.lex_state = 356},
  [233] = {.lex_state = 356},
  [234] = {.lex_state = 360},
  [235] = {.lex_state = 356},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 356},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 13},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 61},
  [266] = {.lex_state = 358},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 13},
  [272] = {.lex_state = 334},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 359},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 359},
  [279] = {.lex_state = 334},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 10},
  [292] = {.lex_state = 356},
  [293] = {.lex_state = 356},
  [294] = {.lex_state = 61},
  [295] = {.lex_state = 358},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 16},
  [323] = {.lex_state = 357},
  [324] = {.lex_state = 358},
  [325] = {.lex_state = 356},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 360},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 360},
  [338] = {.lex_state = 10},
  [339] = {.lex_state = 10},
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
  [350] = {.lex_state = 356},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 61},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 356},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 565},
  [365] = {.lex_state = 560},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 359},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 357},
  [373] = {.lex_state = 357},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 358},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 358},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 565},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 560},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 356},
  [386] = {.lex_state = 10},
  [387] = {.lex_state = 356},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 16},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 360},
  [394] = {.lex_state = 560},
  [395] = {.lex_state = 565},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 360},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__new_parameter_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
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
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_guide] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
  },
  [1] = {
    [sym_command] = STATE(381),
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
    STATE(47), 1,
      sym__align,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(124), 1,
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
    STATE(44), 1,
      sym__align,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(146), 1,
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
      anon_sym_decoration,
    ACTIONS(61), 1,
      anon_sym_guide,
    ACTIONS(63), 1,
      anon_sym_label,
    ACTIONS(65), 1,
      anon_sym_origin,
    ACTIONS(67), 1,
      anon_sym_background,
    STATE(37), 1,
      sym__guide_id,
    STATE(138), 1,
      sym__label_id,
    STATE(194), 1,
      sym__decoration_id,
    STATE(202), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(135), 7,
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
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(52), 1,
      sym__align,
    STATE(137), 1,
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
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(53), 1,
      sym__align,
    STATE(99), 1,
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
  [263] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(54), 1,
      sym__align,
    STATE(97), 1,
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
      anon_sym_set,
      anon_sym_decorate,
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
    STATE(47), 1,
      sym__align,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(124), 1,
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
    ACTIONS(25), 11,
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
  [351] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(52), 1,
      sym__align,
    STATE(137), 1,
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
  [395] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(53), 1,
      sym__align,
    STATE(99), 1,
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
  [439] = 4,
    ACTIONS(87), 1,
      aux_sym_offset_token1,
    STATE(20), 1,
      sym_offset,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(85), 19,
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
      sym_rgb,
    ACTIONS(129), 21,
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
      anon_sym_x,
    ACTIONS(137), 21,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_height,
      aux_sym_offset_token1,
  [950] = 10,
    ACTIONS(181), 1,
      anon_sym_module,
    ACTIONS(183), 1,
      anon_sym_input,
    ACTIONS(185), 1,
      anon_sym_output,
    ACTIONS(187), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(189), 1,
      anon_sym_light,
    ACTIONS(191), 1,
      anon_sym_widget,
    ACTIONS(193), 1,
      anon_sym_decoration,
    ACTIONS(195), 1,
      anon_sym_guide,
    ACTIONS(197), 1,
      anon_sym_label,
    STATE(101), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [989] = 10,
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
      anon_sym_decoration,
    ACTIONS(63), 1,
      anon_sym_label,
    ACTIONS(199), 1,
      anon_sym_font,
    ACTIONS(201), 1,
      anon_sym_guide,
    STATE(144), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [1028] = 2,
    ACTIONS(205), 1,
      anon_sym_x,
    ACTIONS(203), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1050] = 2,
    ACTIONS(209), 1,
      anon_sym_x,
    ACTIONS(207), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1072] = 8,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(215), 1,
      anon_sym_vertical,
    ACTIONS(217), 1,
      anon_sym_horizontal,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    STATE(155), 1,
      sym_offset,
    STATE(292), 1,
      sym_identifier,
    STATE(154), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(211), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1106] = 2,
    ACTIONS(223), 1,
      anon_sym_x,
    ACTIONS(221), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1128] = 2,
    ACTIONS(227), 1,
      anon_sym_x,
    ACTIONS(225), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1150] = 2,
    ACTIONS(231), 1,
      anon_sym_x,
    ACTIONS(229), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_name,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1172] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(183), 1,
      sym__xy_attr,
    STATE(328), 1,
      sym__geometry_x_attr,
    STATE(344), 1,
      sym__relative_attr,
    STATE(388), 1,
      sym__guide_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(185), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1209] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(243), 1,
      anon_sym_id,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(109), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1240] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(178), 1,
      sym__xy_attr,
    STATE(328), 1,
      sym__geometry_x_attr,
    STATE(344), 1,
      sym__relative_attr,
    STATE(388), 1,
      sym__guide_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(185), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1277] = 6,
    ACTIONS(213), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(215), 1,
      anon_sym_vertical,
    ACTIONS(217), 1,
      anon_sym_horizontal,
    STATE(32), 1,
      sym_identifier,
    STATE(142), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(211), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1305] = 2,
    ACTIONS(251), 1,
      anon_sym_x,
    ACTIONS(249), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1325] = 2,
    ACTIONS(255), 1,
      anon_sym_x,
    ACTIONS(253), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1345] = 3,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    STATE(83), 1,
      sym_offset,
    ACTIONS(257), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1366] = 3,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    STATE(87), 1,
      sym_offset,
    ACTIONS(259), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1387] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(137), 1,
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
  [1410] = 4,
    ACTIONS(261), 1,
      aux_sym_offset_token1,
    STATE(88), 1,
      sym_offset,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(85), 10,
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
  [1433] = 4,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym__scale,
    STATE(125), 1,
      sym_stretch,
    ACTIONS(263), 11,
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
  [1456] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(99), 1,
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
  [1479] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      sym_rgb,
    ACTIONS(267), 12,
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
  [1500] = 3,
    ACTIONS(271), 1,
      sym_rgb,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(267), 12,
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
  [1521] = 2,
    ACTIONS(277), 1,
      sym_rgb,
    ACTIONS(275), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1540] = 2,
    ACTIONS(281), 1,
      sym_rgb,
    ACTIONS(279), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_rgba,
  [1559] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(124), 1,
      sym_colour,
    ACTIONS(25), 11,
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
  [1582] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(97), 1,
      sym_colour,
    ACTIONS(81), 11,
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
  [1605] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(96), 1,
      sym_colour,
    ACTIONS(283), 11,
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
  [1628] = 1,
    ACTIONS(285), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1644] = 2,
    ACTIONS(289), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(287), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1662] = 3,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_stretch,
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
  [1682] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(180), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1710] = 2,
    ACTIONS(299), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(297), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1728] = 2,
    ACTIONS(303), 1,
      sym_rgb,
    ACTIONS(301), 12,
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
  [1746] = 3,
    ACTIONS(307), 1,
      anon_sym_timestamp,
    ACTIONS(309), 1,
      anon_sym_gzip,
    ACTIONS(305), 11,
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
  [1766] = 3,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    STATE(158), 1,
      sym_offset,
    ACTIONS(311), 11,
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
  [1786] = 3,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    STATE(145), 1,
      sym_offset,
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
  [1806] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(180), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1834] = 4,
    ACTIONS(319), 1,
      aux_sym__input_id_token1,
    STATE(160), 1,
      sym_part,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(317), 9,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1856] = 3,
    ACTIONS(323), 1,
      anon_sym_light2,
    ACTIONS(325), 1,
      anon_sym_dark,
    ACTIONS(321), 11,
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
  [1876] = 2,
    ACTIONS(329), 1,
      anon_sym_timestamp,
    ACTIONS(327), 11,
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
  [1893] = 2,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(331), 11,
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
  [1910] = 2,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(335), 11,
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
  [1927] = 2,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(335), 11,
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
  [1944] = 6,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(347), 1,
      aux_sym_relative_token1,
    STATE(299), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(345), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [1969] = 1,
    ACTIONS(125), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1984] = 1,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1999] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(182), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2026] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(127), 10,
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
  [2043] = 2,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(353), 11,
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
  [2060] = 2,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(359), 10,
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
  [2077] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(115), 10,
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
  [2094] = 1,
    ACTIONS(361), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2109] = 1,
    ACTIONS(363), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2124] = 1,
    ACTIONS(365), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2139] = 2,
    ACTIONS(369), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(367), 11,
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
  [2156] = 1,
    ACTIONS(371), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2171] = 1,
    ACTIONS(373), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2186] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(119), 10,
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
  [2203] = 2,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(331), 11,
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
  [2220] = 1,
    ACTIONS(377), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2235] = 2,
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
  [2252] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_AT,
    ACTIONS(383), 1,
      aux_sym_relative_token1,
    STATE(383), 1,
      sym_x,
    STATE(65), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(345), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2277] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(182), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2304] = 1,
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
  [2318] = 1,
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
  [2332] = 1,
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
  [2346] = 1,
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
  [2360] = 1,
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
  [2374] = 1,
    ACTIONS(395), 11,
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
  [2388] = 1,
    ACTIONS(283), 11,
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
  [2402] = 1,
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
  [2416] = 1,
    ACTIONS(81), 11,
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
  [2430] = 2,
    ACTIONS(391), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(399), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2446] = 1,
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
  [2460] = 1,
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
  [2474] = 1,
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
  [2488] = 1,
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
  [2502] = 1,
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
  [2516] = 1,
    ACTIONS(335), 11,
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
  [2530] = 1,
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
  [2544] = 1,
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
  [2558] = 1,
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
  [2572] = 1,
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
  [2586] = 1,
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
  [2600] = 1,
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
  [2614] = 1,
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
  [2628] = 1,
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
  [2642] = 1,
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
  [2656] = 1,
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
  [2670] = 5,
    STATE(48), 1,
      sym_valign,
    STATE(49), 1,
      sym_halign,
    STATE(183), 1,
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
  [2692] = 1,
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
  [2706] = 1,
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
  [2720] = 1,
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
  [2734] = 1,
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
  [2748] = 1,
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
  [2762] = 1,
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
  [2776] = 1,
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
  [2790] = 1,
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
  [2804] = 1,
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
  [2818] = 1,
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
  [2832] = 1,
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
  [2846] = 1,
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
  [2860] = 1,
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
  [2874] = 1,
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
  [2888] = 1,
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
  [2902] = 1,
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
  [2916] = 1,
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
  [2930] = 1,
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
  [2944] = 1,
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
  [2958] = 1,
    ACTIONS(25), 11,
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
  [2972] = 10,
    ACTIONS(465), 1,
      anon_sym_x,
    ACTIONS(467), 1,
      anon_sym_y,
    ACTIONS(469), 1,
      anon_sym_xy,
    ACTIONS(471), 1,
      anon_sym_text,
    ACTIONS(473), 1,
      anon_sym_font,
    ACTIONS(475), 1,
      anon_sym_size,
    ACTIONS(477), 1,
      anon_sym_halign,
    ACTIONS(479), 1,
      anon_sym_valign,
    ACTIONS(481), 1,
      anon_sym_align,
    ACTIONS(483), 2,
      anon_sym_colour,
      anon_sym_color,
  [3004] = 1,
    ACTIONS(485), 11,
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
  [3018] = 1,
    ACTIONS(487), 11,
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
  [3032] = 1,
    ACTIONS(489), 11,
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
  [3046] = 1,
    ACTIONS(491), 11,
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
  [3060] = 1,
    ACTIONS(493), 11,
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
  [3074] = 1,
    ACTIONS(495), 11,
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
  [3088] = 1,
    ACTIONS(497), 11,
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
  [3102] = 1,
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
  [3116] = 2,
    ACTIONS(393), 1,
      aux_sym_offset_token1,
    ACTIONS(499), 10,
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
  [3132] = 1,
    ACTIONS(501), 11,
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
  [3146] = 1,
    ACTIONS(503), 11,
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
  [3160] = 1,
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
  [3174] = 1,
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
  [3188] = 1,
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
  [3202] = 1,
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
  [3216] = 1,
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
  [3230] = 1,
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
  [3244] = 1,
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
  [3258] = 1,
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
  [3272] = 1,
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
  [3286] = 1,
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
  [3300] = 1,
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
  [3314] = 1,
    ACTIONS(527), 11,
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
  [3328] = 1,
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
  [3342] = 1,
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
  [3356] = 1,
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
  [3370] = 1,
    ACTIONS(535), 11,
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
  [3384] = 1,
    ACTIONS(537), 11,
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
  [3398] = 1,
    ACTIONS(539), 11,
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
  [3412] = 1,
    ACTIONS(541), 11,
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
  [3426] = 1,
    ACTIONS(543), 11,
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
  [3440] = 1,
    ACTIONS(545), 11,
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
  [3454] = 1,
    ACTIONS(547), 11,
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
  [3468] = 1,
    ACTIONS(549), 11,
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
  [3482] = 1,
    ACTIONS(551), 11,
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
  [3496] = 1,
    ACTIONS(553), 11,
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
  [3510] = 1,
    ACTIONS(555), 11,
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
  [3524] = 1,
    ACTIONS(557), 11,
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
  [3538] = 1,
    ACTIONS(559), 11,
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
  [3552] = 1,
    ACTIONS(561), 11,
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
  [3566] = 1,
    ACTIONS(563), 11,
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
  [3580] = 1,
    ACTIONS(565), 11,
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
  [3594] = 1,
    ACTIONS(567), 11,
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
  [3608] = 1,
    ACTIONS(569), 11,
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
  [3622] = 1,
    ACTIONS(571), 11,
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
  [3636] = 1,
    ACTIONS(573), 11,
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
  [3650] = 1,
    ACTIONS(575), 11,
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
  [3664] = 6,
    ACTIONS(577), 1,
      anon_sym_input2,
    ACTIONS(579), 1,
      anon_sym_output2,
    ACTIONS(581), 1,
      anon_sym_parameter,
    ACTIONS(583), 1,
      anon_sym_light2,
    ACTIONS(585), 1,
      anon_sym_widget2,
    STATE(314), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3687] = 6,
    ACTIONS(577), 1,
      anon_sym_input2,
    ACTIONS(579), 1,
      anon_sym_output2,
    ACTIONS(581), 1,
      anon_sym_parameter,
    ACTIONS(583), 1,
      anon_sym_light2,
    ACTIONS(585), 1,
      anon_sym_widget2,
    STATE(320), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3710] = 6,
    ACTIONS(577), 1,
      anon_sym_input2,
    ACTIONS(579), 1,
      anon_sym_output2,
    ACTIONS(581), 1,
      anon_sym_parameter,
    ACTIONS(583), 1,
      anon_sym_light2,
    ACTIONS(585), 1,
      anon_sym_widget2,
    STATE(384), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3733] = 6,
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
    STATE(321), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3756] = 6,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    ACTIONS(587), 1,
      anon_sym_AT,
    ACTIONS(591), 1,
      anon_sym_origin,
    ACTIONS(593), 1,
      aux_sym_origin_token1,
    STATE(149), 1,
      sym_offset,
    ACTIONS(589), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3778] = 6,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    ACTIONS(595), 1,
      anon_sym_AT,
    ACTIONS(597), 1,
      anon_sym_origin,
    ACTIONS(599), 1,
      aux_sym_origin_token1,
    STATE(152), 1,
      sym_offset,
    ACTIONS(589), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3799] = 2,
    ACTIONS(389), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(601), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3812] = 2,
    ACTIONS(177), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(179), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3825] = 5,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(603), 1,
      anon_sym_x,
    ACTIONS(605), 1,
      anon_sym_y,
    ACTIONS(607), 1,
      anon_sym_xy,
    STATE(123), 2,
      sym__scale,
      sym_stretch,
  [3842] = 6,
    ACTIONS(609), 1,
      anon_sym_input2,
    ACTIONS(611), 1,
      anon_sym_output2,
    ACTIONS(613), 1,
      anon_sym_parameter,
    ACTIONS(615), 1,
      anon_sym_light2,
    ACTIONS(617), 1,
      anon_sym_widget2,
    ACTIONS(619), 1,
      anon_sym_label,
  [3861] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(621), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3871] = 2,
    STATE(183), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3881] = 5,
    ACTIONS(623), 1,
      anon_sym_AT,
    ACTIONS(625), 1,
      aux_sym__originx_token1,
    ACTIONS(627), 1,
      aux_sym__originy_token1,
    STATE(358), 1,
      sym__originy,
    STATE(359), 1,
      sym__originx,
  [3897] = 2,
    STATE(77), 1,
      sym_y,
    ACTIONS(629), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3907] = 2,
    STATE(60), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3917] = 5,
    ACTIONS(631), 1,
      anon_sym_input2,
    ACTIONS(633), 1,
      anon_sym_output2,
    ACTIONS(635), 1,
      anon_sym_parameter,
    ACTIONS(637), 1,
      anon_sym_light2,
    ACTIONS(639), 1,
      anon_sym_widget2,
  [3933] = 5,
    ACTIONS(641), 1,
      anon_sym_name,
    ACTIONS(643), 1,
      anon_sym_x,
    ACTIONS(645), 1,
      anon_sym_y,
    ACTIONS(647), 1,
      anon_sym_xy,
    ACTIONS(649), 1,
      anon_sym_part,
  [3949] = 2,
    STATE(183), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3959] = 5,
    ACTIONS(651), 1,
      anon_sym_input2,
    ACTIONS(653), 1,
      anon_sym_output2,
    ACTIONS(655), 1,
      anon_sym_parameter,
    ACTIONS(657), 1,
      anon_sym_light2,
    ACTIONS(659), 1,
      anon_sym_widget2,
  [3975] = 2,
    STATE(60), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [3985] = 5,
    ACTIONS(661), 1,
      anon_sym_input2,
    ACTIONS(663), 1,
      anon_sym_output2,
    ACTIONS(665), 1,
      anon_sym_parameter,
    ACTIONS(667), 1,
      anon_sym_light2,
    ACTIONS(669), 1,
      anon_sym_widget2,
  [4001] = 5,
    ACTIONS(671), 1,
      aux_sym__input_id_token1,
    ACTIONS(673), 1,
      anon_sym_none,
    ACTIONS(675), 1,
      sym_rgb,
    ACTIONS(677), 1,
      sym_rgba,
    STATE(106), 1,
      sym_name,
  [4017] = 4,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(353), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4030] = 4,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4043] = 3,
    ACTIONS(685), 1,
      anon_sym_project,
    ACTIONS(687), 1,
      anon_sym_script,
    STATE(172), 2,
      sym_project,
      sym_script,
  [4054] = 4,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4067] = 2,
    STATE(129), 1,
      sym__geometry_y_attr,
    ACTIONS(691), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4076] = 4,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4089] = 4,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4102] = 4,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      aux_sym__offset_attr_token1,
    STATE(354), 1,
      sym__offset_xy_attr,
    STATE(366), 1,
      sym__offset_attr,
  [4115] = 4,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_SQUOTE,
    ACTIONS(705), 1,
      aux_sym__string_token1,
    STATE(183), 1,
      sym__string,
  [4128] = 4,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      anon_sym_SQUOTE,
    ACTIONS(711), 1,
      aux_sym__string_token1,
    STATE(71), 1,
      sym__string,
  [4141] = 3,
    ACTIONS(713), 1,
      anon_sym_module,
    ACTIONS(715), 1,
      anon_sym_panel,
    STATE(179), 2,
      sym__module_export,
      sym_panel,
  [4152] = 3,
    ACTIONS(717), 1,
      anon_sym_name,
    ACTIONS(719), 1,
      anon_sym_height,
    ACTIONS(721), 1,
      anon_sym_width,
  [4162] = 3,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(46), 1,
      sym_name,
    STATE(126), 1,
      sym_decoration,
  [4172] = 3,
    ACTIONS(725), 1,
      aux_sym__input_id_token1,
    STATE(89), 1,
      sym_name,
    STATE(168), 1,
      sym__new_component,
  [4182] = 3,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(46), 1,
      sym_name,
    STATE(139), 1,
      sym_decoration,
  [4192] = 3,
    ACTIONS(725), 1,
      aux_sym__input_id_token1,
    STATE(89), 1,
      sym_name,
    STATE(177), 1,
      sym__new_component,
  [4202] = 3,
    ACTIONS(699), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      sym__offset_attr,
  [4212] = 3,
    ACTIONS(699), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      sym__offset_attr,
  [4222] = 3,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(336), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4232] = 3,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(335), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4242] = 3,
    ACTIONS(731), 1,
      aux_sym__label_id_token1,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    ACTIONS(735), 1,
      anon_sym_SQUOTE,
  [4252] = 3,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(334), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4262] = 3,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(333), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4272] = 3,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(332), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4282] = 3,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      sym_offset,
  [4292] = 3,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(331), 1,
      sym__relative,
    STATE(369), 1,
      sym__offset,
  [4302] = 1,
    ACTIONS(739), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [4308] = 3,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    ACTIONS(741), 1,
      aux_sym_origin_token1,
    STATE(153), 1,
      sym_offset,
  [4318] = 3,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      aux_sym__guide_id_token1,
    STATE(274), 1,
      sym__component_id,
  [4328] = 3,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    ACTIONS(747), 1,
      aux_sym_origin_token1,
    STATE(157), 1,
      sym_offset,
  [4338] = 3,
    ACTIONS(749), 1,
      anon_sym_font,
    ACTIONS(751), 1,
      anon_sym_project,
    ACTIONS(753), 1,
      anon_sym_script,
  [4348] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(318), 1,
      sym__component_xy_attr,
  [4358] = 3,
    ACTIONS(725), 1,
      aux_sym__input_id_token1,
    STATE(89), 1,
      sym_name,
    STATE(175), 1,
      sym__new_component,
  [4368] = 3,
    ACTIONS(699), 1,
      aux_sym__offset_attr_token1,
    STATE(166), 1,
      sym__offset_xy_attr,
    STATE(366), 1,
      sym__offset_attr,
  [4378] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(183), 1,
      sym_colour,
  [4388] = 3,
    ACTIONS(725), 1,
      aux_sym__input_id_token1,
    STATE(89), 1,
      sym_name,
    STATE(163), 1,
      sym__new_component,
  [4398] = 3,
    ACTIONS(725), 1,
      aux_sym__input_id_token1,
    STATE(89), 1,
      sym_name,
    STATE(167), 1,
      sym__new_component,
  [4408] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
    STATE(301), 1,
      sym__component_x_attr,
  [4418] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
    STATE(303), 1,
      sym__component_x_attr,
  [4428] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
    STATE(304), 1,
      sym__component_x_attr,
  [4438] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
    STATE(305), 1,
      sym__component_x_attr,
  [4448] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(224), 1,
      sym_name,
    STATE(306), 1,
      sym__component_x_attr,
  [4458] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
    STATE(307), 1,
      sym__component_y_attr,
  [4468] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
    STATE(309), 1,
      sym__component_y_attr,
  [4478] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
    STATE(310), 1,
      sym__component_y_attr,
  [4488] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
    STATE(311), 1,
      sym__component_y_attr,
  [4498] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(225), 1,
      sym_name,
    STATE(312), 1,
      sym__component_y_attr,
  [4508] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(313), 1,
      sym__component_xy_attr,
  [4518] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(315), 1,
      sym__component_xy_attr,
  [4528] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(316), 1,
      sym__component_xy_attr,
  [4538] = 3,
    ACTIONS(755), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(317), 1,
      sym__component_xy_attr,
  [4548] = 2,
    ACTIONS(699), 1,
      aux_sym__offset_attr_token1,
    STATE(170), 1,
      sym__offset_attr,
  [4555] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(208), 1,
      sym_name,
  [4562] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(227), 1,
      sym_name,
  [4569] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(226), 1,
      sym_name,
  [4576] = 1,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [4581] = 2,
    ACTIONS(199), 1,
      anon_sym_font,
    STATE(171), 1,
      sym__font_id,
  [4588] = 2,
    ACTIONS(757), 1,
      aux_sym__absolute_attr_token1,
    STATE(378), 1,
      sym__absolute_x_attr,
  [4595] = 2,
    ACTIONS(759), 1,
      sym_height,
    ACTIONS(761), 1,
      sym_width,
  [4602] = 2,
    ACTIONS(763), 1,
      anon_sym_svg,
    STATE(134), 1,
      sym_svg,
  [4609] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(161), 1,
      sym_name,
  [4616] = 1,
    ACTIONS(765), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [4621] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(266), 1,
      sym_name,
  [4628] = 2,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    STATE(133), 1,
      sym__relative_attr,
  [4635] = 2,
    ACTIONS(767), 1,
      aux_sym__guide_attr_token1,
    STATE(128), 1,
      sym__guide_attr,
  [4642] = 2,
    ACTIONS(769), 1,
      sym_rgb,
    ACTIONS(771), 1,
      sym_rgba,
  [4649] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(40), 1,
      sym_name,
  [4656] = 2,
    ACTIONS(625), 1,
      aux_sym__originx_token1,
    STATE(143), 1,
      sym__originx,
  [4663] = 2,
    ACTIONS(699), 1,
      aux_sym__offset_attr_token1,
    STATE(84), 1,
      sym__offset_attr,
  [4670] = 1,
    ACTIONS(773), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4675] = 2,
    ACTIONS(627), 1,
      aux_sym__originy_token1,
    STATE(143), 1,
      sym__originy,
  [4682] = 2,
    ACTIONS(775), 1,
      aux_sym__guide_attr_token1,
    STATE(173), 1,
      sym_identifier,
  [4689] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(178), 1,
      sym_name,
  [4696] = 2,
    ACTIONS(777), 1,
      aux_sym__input_id_token1,
    STATE(178), 1,
      sym_part,
  [4703] = 2,
    ACTIONS(779), 1,
      aux_sym__input_id_token1,
    STATE(183), 1,
      sym_font,
  [4710] = 2,
    ACTIONS(781), 1,
      anon_sym_scale,
    ACTIONS(783), 1,
      anon_sym_stretch,
  [4717] = 2,
    ACTIONS(699), 1,
      aux_sym__offset_attr_token1,
    STATE(169), 1,
      sym__offset_attr,
  [4724] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(214), 1,
      sym_name,
  [4731] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(213), 1,
      sym_name,
  [4738] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(229), 1,
      sym_name,
  [4745] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(211), 1,
      sym_name,
  [4752] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(230), 1,
      sym_name,
  [4759] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(231), 1,
      sym_name,
  [4766] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(233), 1,
      sym_name,
  [4773] = 2,
    ACTIONS(219), 1,
      aux_sym_offset_token1,
    STATE(155), 1,
      sym_offset,
  [4780] = 2,
    ACTIONS(681), 1,
      aux_sym_offset_token1,
    STATE(362), 1,
      sym__offset,
  [4787] = 2,
    ACTIONS(785), 1,
      aux_sym__absolute_attr_token1,
    STATE(103), 1,
      sym__absolute_y_attr,
  [4794] = 2,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      sym_width,
  [4801] = 2,
    ACTIONS(723), 1,
      aux_sym__input_id_token1,
    STATE(209), 1,
      sym_name,
  [4808] = 1,
    ACTIONS(791), 1,
      aux_sym__input_id_token1,
  [4812] = 1,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
  [4816] = 1,
    ACTIONS(795), 1,
      anon_sym_COMMA,
  [4820] = 1,
    ACTIONS(797), 1,
      aux_sym_relative_token1,
  [4824] = 1,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
  [4828] = 1,
    ACTIONS(801), 1,
      anon_sym_COMMA,
  [4832] = 1,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
  [4836] = 1,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [4840] = 1,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [4844] = 1,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
  [4848] = 1,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [4852] = 1,
    ACTIONS(813), 1,
      anon_sym_COMMA,
  [4856] = 1,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [4860] = 1,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
  [4864] = 1,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [4868] = 1,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [4872] = 1,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [4876] = 1,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [4880] = 1,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [4884] = 1,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [4888] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [4892] = 1,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [4896] = 1,
    ACTIONS(835), 1,
      aux_sym__input_id_token1,
  [4900] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [4904] = 1,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [4908] = 1,
    ACTIONS(841), 1,
      aux_sym__guide_id_token1,
  [4912] = 1,
    ACTIONS(843), 1,
      aux_sym__scale_token1,
  [4916] = 1,
    ACTIONS(845), 1,
      sym_width,
  [4920] = 1,
    ACTIONS(847), 1,
      aux_sym_origin_token1,
  [4924] = 1,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
  [4928] = 1,
    ACTIONS(851), 1,
      aux_sym__input_id_token1,
  [4932] = 1,
    ACTIONS(853), 1,
      anon_sym_COMMA,
  [4936] = 1,
    ACTIONS(855), 1,
      aux_sym__input_id_token1,
  [4940] = 1,
    ACTIONS(857), 1,
      aux_sym_absolute_token1,
  [4944] = 1,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
  [4948] = 1,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
  [4952] = 1,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
  [4956] = 1,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
  [4960] = 1,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [4964] = 1,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [4968] = 1,
    ACTIONS(871), 1,
      aux_sym_absolute_token1,
  [4972] = 1,
    ACTIONS(873), 1,
      aux_sym__input_id_token1,
  [4976] = 1,
    ACTIONS(875), 1,
      aux_sym__input_id_token1,
  [4980] = 1,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
  [4984] = 1,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
  [4988] = 1,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [4992] = 1,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
  [4996] = 1,
    ACTIONS(883), 1,
      anon_sym_COMMA,
  [5000] = 1,
    ACTIONS(885), 1,
      anon_sym_COMMA,
  [5004] = 1,
    ACTIONS(887), 1,
      anon_sym_timestamp,
  [5008] = 1,
    ACTIONS(887), 1,
      anon_sym_gzip,
  [5012] = 1,
    ACTIONS(849), 1,
      anon_sym_SQUOTE,
  [5016] = 1,
    ACTIONS(889), 1,
      anon_sym_with,
  [5020] = 1,
    ACTIONS(891), 1,
      sym_fontsize,
  [5024] = 1,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
  [5028] = 1,
    ACTIONS(895), 1,
      anon_sym_COMMA,
  [5032] = 1,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [5036] = 1,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
  [5040] = 1,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
  [5044] = 1,
    ACTIONS(903), 1,
      aux_sym__absolute_attr_token1,
  [5048] = 1,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
  [5052] = 1,
    ACTIONS(907), 1,
      anon_sym_COMMA,
  [5056] = 1,
    ACTIONS(909), 1,
      anon_sym_COMMA,
  [5060] = 1,
    ACTIONS(911), 1,
      aux_sym_origin_token1,
  [5064] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [5068] = 1,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [5072] = 1,
    ACTIONS(783), 1,
      anon_sym_stretch,
  [5076] = 1,
    ACTIONS(917), 1,
      aux_sym__label_id_token3,
  [5080] = 1,
    ACTIONS(919), 1,
      aux_sym__label_id_token2,
  [5084] = 1,
    ACTIONS(921), 1,
      anon_sym_COMMA,
  [5088] = 1,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
  [5092] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [5096] = 1,
    ACTIONS(927), 1,
      anon_sym_COMMA,
  [5100] = 1,
    ACTIONS(929), 1,
      sym_rgb,
  [5104] = 1,
    ACTIONS(931), 1,
      anon_sym_COMMA,
  [5108] = 1,
    ACTIONS(933), 1,
      aux_sym__scale_token1,
  [5112] = 1,
    ACTIONS(935), 1,
      aux_sym__scale_token1,
  [5116] = 1,
    ACTIONS(929), 1,
      sym_rgba,
  [5120] = 1,
    ACTIONS(937), 1,
      sym_width,
  [5124] = 1,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
  [5128] = 1,
    ACTIONS(937), 1,
      sym_height,
  [5132] = 1,
    ACTIONS(941), 1,
      anon_sym_COMMA,
  [5136] = 1,
    ACTIONS(943), 1,
      anon_sym_COMMA,
  [5140] = 1,
    ACTIONS(945), 1,
      aux_sym__label_id_token3,
  [5144] = 1,
    ACTIONS(947), 1,
      ts_builtin_sym_end,
  [5148] = 1,
    ACTIONS(949), 1,
      aux_sym__label_id_token2,
  [5152] = 1,
    ACTIONS(951), 1,
      anon_sym_COMMA,
  [5156] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [5160] = 1,
    ACTIONS(955), 1,
      aux_sym_origin_token1,
  [5164] = 1,
    ACTIONS(957), 1,
      aux_sym__input_id_token1,
  [5168] = 1,
    ACTIONS(959), 1,
      aux_sym_origin_token1,
  [5172] = 1,
    ACTIONS(961), 1,
      anon_sym_COMMA,
  [5176] = 1,
    ACTIONS(963), 1,
      aux_sym__guide_id_token1,
  [5180] = 1,
    ACTIONS(965), 1,
      anon_sym_DQUOTE,
  [5184] = 1,
    ACTIONS(965), 1,
      anon_sym_SQUOTE,
  [5188] = 1,
    ACTIONS(967), 1,
      aux_sym_relative_token1,
  [5192] = 1,
    ACTIONS(969), 1,
      aux_sym_absolute_token1,
  [5196] = 1,
    ACTIONS(971), 1,
      aux_sym__label_id_token2,
  [5200] = 1,
    ACTIONS(973), 1,
      aux_sym__label_id_token3,
  [5204] = 1,
    ACTIONS(975), 1,
      anon_sym_COMMA,
  [5208] = 1,
    ACTIONS(977), 1,
      anon_sym_COMMA,
  [5212] = 1,
    ACTIONS(979), 1,
      aux_sym_absolute_token1,
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
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 926,
  [SMALL_STATE(28)] = 950,
  [SMALL_STATE(29)] = 989,
  [SMALL_STATE(30)] = 1028,
  [SMALL_STATE(31)] = 1050,
  [SMALL_STATE(32)] = 1072,
  [SMALL_STATE(33)] = 1106,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1150,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1209,
  [SMALL_STATE(38)] = 1240,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1305,
  [SMALL_STATE(41)] = 1325,
  [SMALL_STATE(42)] = 1345,
  [SMALL_STATE(43)] = 1366,
  [SMALL_STATE(44)] = 1387,
  [SMALL_STATE(45)] = 1410,
  [SMALL_STATE(46)] = 1433,
  [SMALL_STATE(47)] = 1456,
  [SMALL_STATE(48)] = 1479,
  [SMALL_STATE(49)] = 1500,
  [SMALL_STATE(50)] = 1521,
  [SMALL_STATE(51)] = 1540,
  [SMALL_STATE(52)] = 1559,
  [SMALL_STATE(53)] = 1582,
  [SMALL_STATE(54)] = 1605,
  [SMALL_STATE(55)] = 1628,
  [SMALL_STATE(56)] = 1644,
  [SMALL_STATE(57)] = 1662,
  [SMALL_STATE(58)] = 1682,
  [SMALL_STATE(59)] = 1710,
  [SMALL_STATE(60)] = 1728,
  [SMALL_STATE(61)] = 1746,
  [SMALL_STATE(62)] = 1766,
  [SMALL_STATE(63)] = 1786,
  [SMALL_STATE(64)] = 1806,
  [SMALL_STATE(65)] = 1834,
  [SMALL_STATE(66)] = 1856,
  [SMALL_STATE(67)] = 1876,
  [SMALL_STATE(68)] = 1893,
  [SMALL_STATE(69)] = 1910,
  [SMALL_STATE(70)] = 1927,
  [SMALL_STATE(71)] = 1944,
  [SMALL_STATE(72)] = 1969,
  [SMALL_STATE(73)] = 1984,
  [SMALL_STATE(74)] = 1999,
  [SMALL_STATE(75)] = 2026,
  [SMALL_STATE(76)] = 2043,
  [SMALL_STATE(77)] = 2060,
  [SMALL_STATE(78)] = 2077,
  [SMALL_STATE(79)] = 2094,
  [SMALL_STATE(80)] = 2109,
  [SMALL_STATE(81)] = 2124,
  [SMALL_STATE(82)] = 2139,
  [SMALL_STATE(83)] = 2156,
  [SMALL_STATE(84)] = 2171,
  [SMALL_STATE(85)] = 2186,
  [SMALL_STATE(86)] = 2203,
  [SMALL_STATE(87)] = 2220,
  [SMALL_STATE(88)] = 2235,
  [SMALL_STATE(89)] = 2252,
  [SMALL_STATE(90)] = 2277,
  [SMALL_STATE(91)] = 2304,
  [SMALL_STATE(92)] = 2318,
  [SMALL_STATE(93)] = 2332,
  [SMALL_STATE(94)] = 2346,
  [SMALL_STATE(95)] = 2360,
  [SMALL_STATE(96)] = 2374,
  [SMALL_STATE(97)] = 2388,
  [SMALL_STATE(98)] = 2402,
  [SMALL_STATE(99)] = 2416,
  [SMALL_STATE(100)] = 2430,
  [SMALL_STATE(101)] = 2446,
  [SMALL_STATE(102)] = 2460,
  [SMALL_STATE(103)] = 2474,
  [SMALL_STATE(104)] = 2488,
  [SMALL_STATE(105)] = 2502,
  [SMALL_STATE(106)] = 2516,
  [SMALL_STATE(107)] = 2530,
  [SMALL_STATE(108)] = 2544,
  [SMALL_STATE(109)] = 2558,
  [SMALL_STATE(110)] = 2572,
  [SMALL_STATE(111)] = 2586,
  [SMALL_STATE(112)] = 2600,
  [SMALL_STATE(113)] = 2614,
  [SMALL_STATE(114)] = 2628,
  [SMALL_STATE(115)] = 2642,
  [SMALL_STATE(116)] = 2656,
  [SMALL_STATE(117)] = 2670,
  [SMALL_STATE(118)] = 2692,
  [SMALL_STATE(119)] = 2706,
  [SMALL_STATE(120)] = 2720,
  [SMALL_STATE(121)] = 2734,
  [SMALL_STATE(122)] = 2748,
  [SMALL_STATE(123)] = 2762,
  [SMALL_STATE(124)] = 2776,
  [SMALL_STATE(125)] = 2790,
  [SMALL_STATE(126)] = 2804,
  [SMALL_STATE(127)] = 2818,
  [SMALL_STATE(128)] = 2832,
  [SMALL_STATE(129)] = 2846,
  [SMALL_STATE(130)] = 2860,
  [SMALL_STATE(131)] = 2874,
  [SMALL_STATE(132)] = 2888,
  [SMALL_STATE(133)] = 2902,
  [SMALL_STATE(134)] = 2916,
  [SMALL_STATE(135)] = 2930,
  [SMALL_STATE(136)] = 2944,
  [SMALL_STATE(137)] = 2958,
  [SMALL_STATE(138)] = 2972,
  [SMALL_STATE(139)] = 3004,
  [SMALL_STATE(140)] = 3018,
  [SMALL_STATE(141)] = 3032,
  [SMALL_STATE(142)] = 3046,
  [SMALL_STATE(143)] = 3060,
  [SMALL_STATE(144)] = 3074,
  [SMALL_STATE(145)] = 3088,
  [SMALL_STATE(146)] = 3102,
  [SMALL_STATE(147)] = 3116,
  [SMALL_STATE(148)] = 3132,
  [SMALL_STATE(149)] = 3146,
  [SMALL_STATE(150)] = 3160,
  [SMALL_STATE(151)] = 3174,
  [SMALL_STATE(152)] = 3188,
  [SMALL_STATE(153)] = 3202,
  [SMALL_STATE(154)] = 3216,
  [SMALL_STATE(155)] = 3230,
  [SMALL_STATE(156)] = 3244,
  [SMALL_STATE(157)] = 3258,
  [SMALL_STATE(158)] = 3272,
  [SMALL_STATE(159)] = 3286,
  [SMALL_STATE(160)] = 3300,
  [SMALL_STATE(161)] = 3314,
  [SMALL_STATE(162)] = 3328,
  [SMALL_STATE(163)] = 3342,
  [SMALL_STATE(164)] = 3356,
  [SMALL_STATE(165)] = 3370,
  [SMALL_STATE(166)] = 3384,
  [SMALL_STATE(167)] = 3398,
  [SMALL_STATE(168)] = 3412,
  [SMALL_STATE(169)] = 3426,
  [SMALL_STATE(170)] = 3440,
  [SMALL_STATE(171)] = 3454,
  [SMALL_STATE(172)] = 3468,
  [SMALL_STATE(173)] = 3482,
  [SMALL_STATE(174)] = 3496,
  [SMALL_STATE(175)] = 3510,
  [SMALL_STATE(176)] = 3524,
  [SMALL_STATE(177)] = 3538,
  [SMALL_STATE(178)] = 3552,
  [SMALL_STATE(179)] = 3566,
  [SMALL_STATE(180)] = 3580,
  [SMALL_STATE(181)] = 3594,
  [SMALL_STATE(182)] = 3608,
  [SMALL_STATE(183)] = 3622,
  [SMALL_STATE(184)] = 3636,
  [SMALL_STATE(185)] = 3650,
  [SMALL_STATE(186)] = 3664,
  [SMALL_STATE(187)] = 3687,
  [SMALL_STATE(188)] = 3710,
  [SMALL_STATE(189)] = 3733,
  [SMALL_STATE(190)] = 3756,
  [SMALL_STATE(191)] = 3778,
  [SMALL_STATE(192)] = 3799,
  [SMALL_STATE(193)] = 3812,
  [SMALL_STATE(194)] = 3825,
  [SMALL_STATE(195)] = 3842,
  [SMALL_STATE(196)] = 3861,
  [SMALL_STATE(197)] = 3871,
  [SMALL_STATE(198)] = 3881,
  [SMALL_STATE(199)] = 3897,
  [SMALL_STATE(200)] = 3907,
  [SMALL_STATE(201)] = 3917,
  [SMALL_STATE(202)] = 3933,
  [SMALL_STATE(203)] = 3949,
  [SMALL_STATE(204)] = 3959,
  [SMALL_STATE(205)] = 3975,
  [SMALL_STATE(206)] = 3985,
  [SMALL_STATE(207)] = 4001,
  [SMALL_STATE(208)] = 4017,
  [SMALL_STATE(209)] = 4030,
  [SMALL_STATE(210)] = 4043,
  [SMALL_STATE(211)] = 4054,
  [SMALL_STATE(212)] = 4067,
  [SMALL_STATE(213)] = 4076,
  [SMALL_STATE(214)] = 4089,
  [SMALL_STATE(215)] = 4102,
  [SMALL_STATE(216)] = 4115,
  [SMALL_STATE(217)] = 4128,
  [SMALL_STATE(218)] = 4141,
  [SMALL_STATE(219)] = 4152,
  [SMALL_STATE(220)] = 4162,
  [SMALL_STATE(221)] = 4172,
  [SMALL_STATE(222)] = 4182,
  [SMALL_STATE(223)] = 4192,
  [SMALL_STATE(224)] = 4202,
  [SMALL_STATE(225)] = 4212,
  [SMALL_STATE(226)] = 4222,
  [SMALL_STATE(227)] = 4232,
  [SMALL_STATE(228)] = 4242,
  [SMALL_STATE(229)] = 4252,
  [SMALL_STATE(230)] = 4262,
  [SMALL_STATE(231)] = 4272,
  [SMALL_STATE(232)] = 4282,
  [SMALL_STATE(233)] = 4292,
  [SMALL_STATE(234)] = 4302,
  [SMALL_STATE(235)] = 4308,
  [SMALL_STATE(236)] = 4318,
  [SMALL_STATE(237)] = 4328,
  [SMALL_STATE(238)] = 4338,
  [SMALL_STATE(239)] = 4348,
  [SMALL_STATE(240)] = 4358,
  [SMALL_STATE(241)] = 4368,
  [SMALL_STATE(242)] = 4378,
  [SMALL_STATE(243)] = 4388,
  [SMALL_STATE(244)] = 4398,
  [SMALL_STATE(245)] = 4408,
  [SMALL_STATE(246)] = 4418,
  [SMALL_STATE(247)] = 4428,
  [SMALL_STATE(248)] = 4438,
  [SMALL_STATE(249)] = 4448,
  [SMALL_STATE(250)] = 4458,
  [SMALL_STATE(251)] = 4468,
  [SMALL_STATE(252)] = 4478,
  [SMALL_STATE(253)] = 4488,
  [SMALL_STATE(254)] = 4498,
  [SMALL_STATE(255)] = 4508,
  [SMALL_STATE(256)] = 4518,
  [SMALL_STATE(257)] = 4528,
  [SMALL_STATE(258)] = 4538,
  [SMALL_STATE(259)] = 4548,
  [SMALL_STATE(260)] = 4555,
  [SMALL_STATE(261)] = 4562,
  [SMALL_STATE(262)] = 4569,
  [SMALL_STATE(263)] = 4576,
  [SMALL_STATE(264)] = 4581,
  [SMALL_STATE(265)] = 4588,
  [SMALL_STATE(266)] = 4595,
  [SMALL_STATE(267)] = 4602,
  [SMALL_STATE(268)] = 4609,
  [SMALL_STATE(269)] = 4616,
  [SMALL_STATE(270)] = 4621,
  [SMALL_STATE(271)] = 4628,
  [SMALL_STATE(272)] = 4635,
  [SMALL_STATE(273)] = 4642,
  [SMALL_STATE(274)] = 4649,
  [SMALL_STATE(275)] = 4656,
  [SMALL_STATE(276)] = 4663,
  [SMALL_STATE(277)] = 4670,
  [SMALL_STATE(278)] = 4675,
  [SMALL_STATE(279)] = 4682,
  [SMALL_STATE(280)] = 4689,
  [SMALL_STATE(281)] = 4696,
  [SMALL_STATE(282)] = 4703,
  [SMALL_STATE(283)] = 4710,
  [SMALL_STATE(284)] = 4717,
  [SMALL_STATE(285)] = 4724,
  [SMALL_STATE(286)] = 4731,
  [SMALL_STATE(287)] = 4738,
  [SMALL_STATE(288)] = 4745,
  [SMALL_STATE(289)] = 4752,
  [SMALL_STATE(290)] = 4759,
  [SMALL_STATE(291)] = 4766,
  [SMALL_STATE(292)] = 4773,
  [SMALL_STATE(293)] = 4780,
  [SMALL_STATE(294)] = 4787,
  [SMALL_STATE(295)] = 4794,
  [SMALL_STATE(296)] = 4801,
  [SMALL_STATE(297)] = 4808,
  [SMALL_STATE(298)] = 4812,
  [SMALL_STATE(299)] = 4816,
  [SMALL_STATE(300)] = 4820,
  [SMALL_STATE(301)] = 4824,
  [SMALL_STATE(302)] = 4828,
  [SMALL_STATE(303)] = 4832,
  [SMALL_STATE(304)] = 4836,
  [SMALL_STATE(305)] = 4840,
  [SMALL_STATE(306)] = 4844,
  [SMALL_STATE(307)] = 4848,
  [SMALL_STATE(308)] = 4852,
  [SMALL_STATE(309)] = 4856,
  [SMALL_STATE(310)] = 4860,
  [SMALL_STATE(311)] = 4864,
  [SMALL_STATE(312)] = 4868,
  [SMALL_STATE(313)] = 4872,
  [SMALL_STATE(314)] = 4876,
  [SMALL_STATE(315)] = 4880,
  [SMALL_STATE(316)] = 4884,
  [SMALL_STATE(317)] = 4888,
  [SMALL_STATE(318)] = 4892,
  [SMALL_STATE(319)] = 4896,
  [SMALL_STATE(320)] = 4900,
  [SMALL_STATE(321)] = 4904,
  [SMALL_STATE(322)] = 4908,
  [SMALL_STATE(323)] = 4912,
  [SMALL_STATE(324)] = 4916,
  [SMALL_STATE(325)] = 4920,
  [SMALL_STATE(326)] = 4924,
  [SMALL_STATE(327)] = 4928,
  [SMALL_STATE(328)] = 4932,
  [SMALL_STATE(329)] = 4936,
  [SMALL_STATE(330)] = 4940,
  [SMALL_STATE(331)] = 4944,
  [SMALL_STATE(332)] = 4948,
  [SMALL_STATE(333)] = 4952,
  [SMALL_STATE(334)] = 4956,
  [SMALL_STATE(335)] = 4960,
  [SMALL_STATE(336)] = 4964,
  [SMALL_STATE(337)] = 4968,
  [SMALL_STATE(338)] = 4972,
  [SMALL_STATE(339)] = 4976,
  [SMALL_STATE(340)] = 4980,
  [SMALL_STATE(341)] = 4984,
  [SMALL_STATE(342)] = 4988,
  [SMALL_STATE(343)] = 4992,
  [SMALL_STATE(344)] = 4996,
  [SMALL_STATE(345)] = 5000,
  [SMALL_STATE(346)] = 5004,
  [SMALL_STATE(347)] = 5008,
  [SMALL_STATE(348)] = 5012,
  [SMALL_STATE(349)] = 5016,
  [SMALL_STATE(350)] = 5020,
  [SMALL_STATE(351)] = 5024,
  [SMALL_STATE(352)] = 5028,
  [SMALL_STATE(353)] = 5032,
  [SMALL_STATE(354)] = 5036,
  [SMALL_STATE(355)] = 5040,
  [SMALL_STATE(356)] = 5044,
  [SMALL_STATE(357)] = 5048,
  [SMALL_STATE(358)] = 5052,
  [SMALL_STATE(359)] = 5056,
  [SMALL_STATE(360)] = 5060,
  [SMALL_STATE(361)] = 5064,
  [SMALL_STATE(362)] = 5068,
  [SMALL_STATE(363)] = 5072,
  [SMALL_STATE(364)] = 5076,
  [SMALL_STATE(365)] = 5080,
  [SMALL_STATE(366)] = 5084,
  [SMALL_STATE(367)] = 5088,
  [SMALL_STATE(368)] = 5092,
  [SMALL_STATE(369)] = 5096,
  [SMALL_STATE(370)] = 5100,
  [SMALL_STATE(371)] = 5104,
  [SMALL_STATE(372)] = 5108,
  [SMALL_STATE(373)] = 5112,
  [SMALL_STATE(374)] = 5116,
  [SMALL_STATE(375)] = 5120,
  [SMALL_STATE(376)] = 5124,
  [SMALL_STATE(377)] = 5128,
  [SMALL_STATE(378)] = 5132,
  [SMALL_STATE(379)] = 5136,
  [SMALL_STATE(380)] = 5140,
  [SMALL_STATE(381)] = 5144,
  [SMALL_STATE(382)] = 5148,
  [SMALL_STATE(383)] = 5152,
  [SMALL_STATE(384)] = 5156,
  [SMALL_STATE(385)] = 5160,
  [SMALL_STATE(386)] = 5164,
  [SMALL_STATE(387)] = 5168,
  [SMALL_STATE(388)] = 5172,
  [SMALL_STATE(389)] = 5176,
  [SMALL_STATE(390)] = 5180,
  [SMALL_STATE(391)] = 5184,
  [SMALL_STATE(392)] = 5188,
  [SMALL_STATE(393)] = 5192,
  [SMALL_STATE(394)] = 5196,
  [SMALL_STATE(395)] = 5200,
  [SMALL_STATE(396)] = 5204,
  [SMALL_STATE(397)] = 5208,
  [SMALL_STATE(398)] = 5212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 26),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 25),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 24),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 23),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 10),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 16),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 16),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(343),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(238),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(264),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(210),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(218),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(234),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 15),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 14),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 27),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 8),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 18),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 17),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 18),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 17),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 18),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 17),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 15),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 15),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 15),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 4),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 12),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 12),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 11),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 9),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 8),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 13),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 21),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [947] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
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
