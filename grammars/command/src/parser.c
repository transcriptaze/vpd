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
#define STATE_COUNT 424
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
  anon_sym_decoration = 10,
  anon_sym_decorate = 11,
  anon_sym_with = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_set = 15,
  anon_sym_name = 16,
  anon_sym_height = 17,
  anon_sym_width = 18,
  anon_sym_x = 19,
  anon_sym_y = 20,
  anon_sym_xy = 21,
  anon_sym_part = 22,
  anon_sym_text = 23,
  anon_sym_font = 24,
  anon_sym_size = 25,
  anon_sym_halign = 26,
  anon_sym_valign = 27,
  anon_sym_align = 28,
  anon_sym_colour = 29,
  anon_sym_color = 30,
  anon_sym_id = 31,
  anon_sym_input2 = 32,
  anon_sym_output2 = 33,
  anon_sym_parameter = 34,
  anon_sym_light2 = 35,
  anon_sym_widget2 = 36,
  aux_sym__offset_attr_token1 = 37,
  anon_sym_AT = 38,
  aux_sym__absolute_attr_token1 = 39,
  anon_sym_left = 40,
  anon_sym_centre = 41,
  anon_sym_center = 42,
  anon_sym_right = 43,
  aux_sym__geometry_x_attr_token1 = 44,
  anon_sym_top = 45,
  anon_sym_middle = 46,
  anon_sym_bottom = 47,
  aux_sym__guide_attr_token1 = 48,
  aux_sym__guide_attr_token2 = 49,
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
  sym__new_decoration = 107,
  sym_decorate = 108,
  sym__new_xy = 109,
  sym_set = 110,
  sym__module_attr = 111,
  sym__component_attr = 112,
  sym__label_attr = 113,
  sym__decoration_attr = 114,
  sym__guideline_attr = 115,
  sym__x_attr = 116,
  sym__y_attr = 117,
  sym__xy_attr = 118,
  sym__offset_attr = 119,
  sym__offset_xy_attr = 120,
  sym__absolute_attr = 121,
  sym__absolute_x_attr = 122,
  sym__absolute_y_attr = 123,
  sym__absolute_xy_attr = 124,
  sym__relative_attr = 125,
  sym__relative_xy_attr = 126,
  sym__geometry_x_attr = 127,
  sym__geometry_y_attr = 128,
  sym__geometry_xy_attr = 129,
  sym__guide_attr = 130,
  sym__guide_xy_attr = 131,
  sym__component_x_attr = 132,
  sym__component_y_attr = 133,
  sym__component_xy_attr = 134,
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
  [anon_sym_decoration] = "decoration",
  [anon_sym_decorate] = "decorate",
  [anon_sym_with] = "with",
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
    [2] = sym_x,
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
    [3] = sym_y,
  },
  [15] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [16] = {
    [0] = sym_x,
    [2] = sym_y,
  },
  [17] = {
    [2] = alias_sym_dy,
  },
  [18] = {
    [2] = sym__new_output,
  },
  [19] = {
    [2] = sym__new_parameter,
  },
  [20] = {
    [2] = sym__new_light,
  },
  [21] = {
    [2] = sym__new_widget,
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
  [42] = 10,
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
  [66] = 19,
  [67] = 67,
  [68] = 68,
  [69] = 21,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 12,
  [82] = 20,
  [83] = 83,
  [84] = 19,
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
  [107] = 99,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 106,
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
  [190] = 189,
  [191] = 189,
  [192] = 192,
  [193] = 27,
  [194] = 105,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 198,
  [204] = 204,
  [205] = 198,
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
  [228] = 10,
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
  [255] = 10,
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
  [276] = 27,
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
  [318] = 20,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 83,
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
  [367] = 21,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 12,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 19,
  [377] = 377,
  [378] = 83,
  [379] = 20,
  [380] = 380,
  [381] = 381,
  [382] = 12,
  [383] = 21,
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
  [396] = 394,
  [397] = 385,
  [398] = 375,
  [399] = 399,
  [400] = 328,
  [401] = 327,
  [402] = 323,
  [403] = 385,
  [404] = 375,
  [405] = 405,
  [406] = 323,
  [407] = 375,
  [408] = 323,
  [409] = 409,
  [410] = 326,
  [411] = 306,
  [412] = 399,
  [413] = 395,
  [414] = 381,
  [415] = 415,
  [416] = 326,
  [417] = 306,
  [418] = 381,
  [419] = 326,
  [420] = 381,
  [421] = 338,
  [422] = 338,
  [423] = 338,
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
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(377);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '@') ADVANCE(409);
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
      if (lookahead == 'x') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(384);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(404);
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
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(339);
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
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(377);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == 'm') ADVANCE(452);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(376);
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
      if (lookahead == 'm') ADVANCE(192);
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
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(409);
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
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 't') ADVANCE(386);
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
      if (lookahead == 'e') ADVANCE(162);
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
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'h') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == 'v') ADVANCE(447);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
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
      if (lookahead == 'd') ADVANCE(395);
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
      if (lookahead == 't') ADVANCE(136);
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
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(389);
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
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(373);
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
      if (lookahead == 'g') ADVANCE(156);
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
      if (lookahead == 'h') ADVANCE(375);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(382);
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
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(129);
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
      if (lookahead == 'l') ADVANCE(159);
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
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(1);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(434);
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
      if (lookahead == 'm') ADVANCE(410);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(616);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(425);
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
      if (lookahead == 'm') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(372);
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
      if (lookahead == 'p') ADVANCE(428);
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
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(399);
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
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(154);
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
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(401);
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
      if (lookahead == 't') ADVANCE(152);
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
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == 'z') ADVANCE(153);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
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
      if (lookahead == ')') ADVANCE(377);
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
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(377);
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
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(384);
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
      if (lookahead == '@') ADVANCE(409);
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
      if (lookahead == 'w') ADVANCE(157);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 360:
      if (eof) ADVANCE(361);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(218);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
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
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_xy);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_halign);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_valign);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_colour);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_input2);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_output2);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_light2);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_widget2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'H') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == 'H') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__offset_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(402);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__absolute_attr_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'H') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__geometry_x_attr_token1);
      if (lookahead == 'H') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'c') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'd') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'r') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'f') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'g') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'h') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'i') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'm') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'p') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'r') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (lookahead == 'z') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(479);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__guide_attr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == 'H') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__guide_attr_token2);
      if (lookahead == 'H') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
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
      if (lookahead == 'e') ADVANCE(418);
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
      if (lookahead == 'e') ADVANCE(433);
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
      if (lookahead == 'e') ADVANCE(374);
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
      if (lookahead == 'm') ADVANCE(436);
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
      if (lookahead == 'p') ADVANCE(430);
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
      if (lookahead == 'r') ADVANCE(421);
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
      if (lookahead == 't') ADVANCE(379);
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
      if (lookahead == 't') ADVANCE(415);
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
      if (lookahead == 't') ADVANCE(424);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
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
  [10] = {.lex_state = 356},
  [11] = {.lex_state = 358},
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
  [28] = {.lex_state = 358},
  [29] = {.lex_state = 359},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 357},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 358},
  [50] = {.lex_state = 358},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 357},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 359},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 358},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 358},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 360},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 357},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 357},
  [82] = {.lex_state = 357},
  [83] = {.lex_state = 357},
  [84] = {.lex_state = 357},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 360},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 61},
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
  [115] = {.lex_state = 35},
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
  [132] = {.lex_state = 358},
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
  [188] = {.lex_state = 358},
  [189] = {.lex_state = 358},
  [190] = {.lex_state = 358},
  [191] = {.lex_state = 358},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 358},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 358},
  [200] = {.lex_state = 358},
  [201] = {.lex_state = 358},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 359},
  [208] = {.lex_state = 358},
  [209] = {.lex_state = 358},
  [210] = {.lex_state = 358},
  [211] = {.lex_state = 358},
  [212] = {.lex_state = 356},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 356},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 356},
  [220] = {.lex_state = 356},
  [221] = {.lex_state = 358},
  [222] = {.lex_state = 356},
  [223] = {.lex_state = 356},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 360},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 356},
  [239] = {.lex_state = 356},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 356},
  [251] = {.lex_state = 356},
  [252] = {.lex_state = 356},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 358},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 356},
  [258] = {.lex_state = 356},
  [259] = {.lex_state = 356},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 356},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 358},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 334},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 359},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 334},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 359},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 13},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 13},
  [295] = {.lex_state = 359},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 358},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 359},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 356},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 10},
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
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 61},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 357},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 356},
  [337] = {.lex_state = 357},
  [338] = {.lex_state = 61},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 10},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 356},
  [343] = {.lex_state = 10},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 359},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 356},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 359},
  [357] = {.lex_state = 356},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 356},
  [362] = {.lex_state = 565},
  [363] = {.lex_state = 560},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 358},
  [371] = {.lex_state = 358},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 358},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 15},
  [376] = {.lex_state = 10},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 10},
  [379] = {.lex_state = 10},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 10},
  [383] = {.lex_state = 10},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 10},
  [393] = {.lex_state = 10},
  [394] = {.lex_state = 16},
  [395] = {.lex_state = 565},
  [396] = {.lex_state = 16},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 15},
  [399] = {.lex_state = 560},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 61},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 15},
  [405] = {.lex_state = 357},
  [406] = {.lex_state = 61},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 61},
  [409] = {.lex_state = 10},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 560},
  [413] = {.lex_state = 565},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 10},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 61},
  [422] = {.lex_state = 61},
  [423] = {.lex_state = 61},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__new_parameter_token1] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_decorate] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
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
    [sym_command] = STATE(388),
    [sym_new] = STATE(25),
    [sym_decorate] = STATE(25),
    [sym_set] = STATE(25),
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
    STATE(6), 1,
      sym_font,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(53), 1,
      sym__align,
    STATE(98), 1,
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
      anon_sym_decorate,
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
    STATE(5), 1,
      sym_font,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(54), 1,
      sym__align,
    STATE(154), 1,
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
      anon_sym_decorate,
      anon_sym_set,
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
      anon_sym_decoration,
    ACTIONS(51), 1,
      anon_sym_input2,
    ACTIONS(53), 1,
      anon_sym_output2,
    ACTIONS(55), 1,
      anon_sym_parameter,
    ACTIONS(57), 1,
      anon_sym_light2,
    ACTIONS(59), 1,
      anon_sym_widget2,
    ACTIONS(61), 1,
      anon_sym_guide,
    ACTIONS(63), 1,
      anon_sym_label,
    ACTIONS(65), 1,
      anon_sym_origin,
    ACTIONS(67), 1,
      anon_sym_background,
    STATE(38), 1,
      sym__guide_id,
    STATE(179), 1,
      sym__label_id,
    STATE(196), 1,
      sym__decoration_id,
    STATE(204), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
    STATE(156), 7,
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
    STATE(43), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(93), 1,
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
    STATE(46), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(176), 1,
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
    STATE(46), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(176), 1,
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
  [307] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(54), 1,
      sym__align,
    STATE(154), 1,
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
    STATE(43), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(93), 1,
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
  [395] = 4,
    ACTIONS(85), 1,
      aux_sym_offset_token1,
    STATE(21), 1,
      sym_offset,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(83), 19,
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
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      anon_sym_baseline,
      sym_rgb,
  [429] = 9,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(44), 1,
      sym__align,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(111), 1,
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
      anon_sym_decorate,
      anon_sym_set,
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
  [780] = 2,
    ACTIONS(135), 1,
      anon_sym_x,
    ACTIONS(133), 21,
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
  [807] = 2,
    ACTIONS(139), 1,
      anon_sym_x,
    ACTIONS(137), 21,
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
  [834] = 12,
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
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym_comment,
    STATE(26), 10,
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
  [880] = 12,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_new,
    ACTIONS(153), 1,
      anon_sym_decorate,
    ACTIONS(156), 1,
      anon_sym_set,
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
      sym_decorate,
      sym_set,
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
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
      sym_height,
      aux_sym_offset_token1,
  [950] = 10,
    ACTIONS(49), 1,
      anon_sym_decoration,
    ACTIONS(51), 1,
      anon_sym_input2,
    ACTIONS(53), 1,
      anon_sym_output2,
    ACTIONS(55), 1,
      anon_sym_parameter,
    ACTIONS(57), 1,
      anon_sym_light2,
    ACTIONS(59), 1,
      anon_sym_widget2,
    ACTIONS(63), 1,
      anon_sym_label,
    ACTIONS(181), 1,
      anon_sym_font,
    ACTIONS(183), 1,
      anon_sym_guide,
    STATE(150), 9,
      sym__guide_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
      sym__font_id,
  [989] = 10,
    ACTIONS(185), 1,
      anon_sym_module,
    ACTIONS(187), 1,
      anon_sym_input,
    ACTIONS(189), 1,
      anon_sym_output,
    ACTIONS(191), 1,
      aux_sym__new_parameter_token1,
    ACTIONS(193), 1,
      anon_sym_light,
    ACTIONS(195), 1,
      anon_sym_widget,
    ACTIONS(197), 1,
      anon_sym_decoration,
    ACTIONS(199), 1,
      anon_sym_guide,
    ACTIONS(201), 1,
      anon_sym_label,
    STATE(117), 9,
      sym__new_module,
      sym__new_input,
      sym__new_output,
      sym__new_parameter,
      sym__new_light,
      sym__new_widget,
      sym__new_decoration,
      sym_label,
      sym_guide,
  [1028] = 8,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(207), 1,
      anon_sym_vertical,
    ACTIONS(209), 1,
      anon_sym_horizontal,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    STATE(161), 1,
      sym_offset,
    STATE(302), 1,
      sym_identifier,
    STATE(160), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(203), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1062] = 2,
    ACTIONS(215), 1,
      anon_sym_x,
    ACTIONS(213), 16,
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
  [1084] = 2,
    ACTIONS(219), 1,
      anon_sym_x,
    ACTIONS(217), 16,
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
  [1106] = 2,
    ACTIONS(223), 1,
      anon_sym_x,
    ACTIONS(221), 16,
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
  [1128] = 2,
    ACTIONS(227), 1,
      anon_sym_x,
    ACTIONS(225), 16,
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
  [1150] = 2,
    ACTIONS(231), 1,
      anon_sym_x,
    ACTIONS(229), 16,
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
  [1172] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(164), 1,
      sym__xy_attr,
    STATE(368), 1,
      sym__guide_attr,
    STATE(374), 1,
      sym__geometry_x_attr,
    STATE(380), 1,
      sym__relative_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(167), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1209] = 10,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(237), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    STATE(171), 1,
      sym__xy_attr,
    STATE(368), 1,
      sym__guide_attr,
    STATE(374), 1,
      sym__geometry_x_attr,
    STATE(380), 1,
      sym__relative_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(167), 4,
      sym__absolute_xy_attr,
      sym__relative_xy_attr,
      sym__geometry_xy_attr,
      sym__guide_xy_attr,
  [1246] = 7,
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
    STATE(124), 5,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [1277] = 2,
    ACTIONS(251), 1,
      anon_sym_x,
    ACTIONS(249), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1297] = 2,
    ACTIONS(255), 1,
      anon_sym_x,
    ACTIONS(253), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_LPAREN,
      anon_sym_set,
      anon_sym_y,
      anon_sym_xy,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1317] = 6,
    ACTIONS(205), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(207), 1,
      anon_sym_vertical,
    ACTIONS(209), 1,
      anon_sym_horizontal,
    STATE(30), 1,
      sym_identifier,
    STATE(102), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(203), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [1345] = 4,
    ACTIONS(257), 1,
      aux_sym_offset_token1,
    STATE(69), 1,
      sym_offset,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(83), 10,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1368] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(111), 1,
      sym_colour,
    ACTIONS(87), 11,
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
  [1391] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(109), 1,
      sym_colour,
    ACTIONS(259), 11,
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
  [1414] = 4,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__scale,
    STATE(110), 1,
      sym_stretch,
    ACTIONS(261), 11,
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
  [1437] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(154), 1,
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
  [1460] = 2,
    ACTIONS(267), 1,
      sym_rgb,
    ACTIONS(265), 13,
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
  [1479] = 2,
    ACTIONS(271), 1,
      sym_rgb,
    ACTIONS(269), 13,
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
  [1498] = 3,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    STATE(74), 1,
      sym_offset,
    ACTIONS(273), 12,
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
  [1519] = 3,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    STATE(73), 1,
      sym_offset,
    ACTIONS(275), 12,
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
  [1540] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      sym_rgb,
    ACTIONS(277), 12,
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
  [1561] = 3,
    ACTIONS(281), 1,
      sym_rgb,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(277), 12,
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
  [1582] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(176), 1,
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
  [1605] = 4,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(93), 1,
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
  [1628] = 3,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_stretch,
    ACTIONS(285), 11,
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
  [1648] = 3,
    ACTIONS(291), 1,
      anon_sym_timestamp,
    ACTIONS(293), 1,
      anon_sym_gzip,
    ACTIONS(289), 11,
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
  [1668] = 3,
    ACTIONS(297), 1,
      anon_sym_light2,
    ACTIONS(299), 1,
      anon_sym_dark,
    ACTIONS(295), 11,
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
  [1688] = 4,
    ACTIONS(305), 1,
      aux_sym__input_id_token1,
    STATE(113), 1,
      sym_part,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(303), 9,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1710] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(170), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1738] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym__x_attr,
    ACTIONS(239), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    STATE(170), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_x_attr,
      sym__guide_attr,
  [1766] = 2,
    ACTIONS(311), 1,
      aux_sym__guide_attr_token2,
    ACTIONS(309), 12,
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
  [1784] = 2,
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
  [1802] = 3,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    STATE(104), 1,
      sym_offset,
    ACTIONS(317), 11,
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
  [1822] = 1,
    ACTIONS(319), 13,
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
  [1838] = 3,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    STATE(151), 1,
      sym_offset,
    ACTIONS(321), 11,
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
  [1858] = 1,
    ACTIONS(117), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_COMMA,
      anon_sym_decorate,
      anon_sym_with,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1874] = 2,
    ACTIONS(325), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(323), 12,
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
  [1892] = 2,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(327), 11,
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
  [1909] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(127), 10,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [1926] = 1,
    ACTIONS(331), 12,
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
  [1941] = 1,
    ACTIONS(333), 12,
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
  [1956] = 2,
    ACTIONS(337), 1,
      anon_sym_timestamp,
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
  [1973] = 1,
    ACTIONS(339), 12,
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
  [1988] = 1,
    ACTIONS(341), 12,
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
  [2003] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      aux_sym_relative_token1,
    STATE(306), 1,
      sym_x,
    STATE(307), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2028] = 1,
    ACTIONS(351), 12,
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
  [2043] = 1,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_set,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2058] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(355), 11,
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
  [2075] = 2,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(355), 11,
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
  [2092] = 6,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_AT,
    ACTIONS(365), 1,
      aux_sym_relative_token1,
    STATE(417), 1,
      sym_x,
    STATE(58), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2117] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(91), 10,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2134] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(123), 10,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2151] = 2,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(369), 10,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2168] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(119), 10,
      anon_sym_new,
      anon_sym_decorate,
      anon_sym_set,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_unload,
      anon_sym_save,
      anon_sym_export,
      anon_sym_list,
  [2185] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(169), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2212] = 1,
    ACTIONS(373), 12,
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
  [2227] = 7,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(241), 1,
      aux_sym__guide_attr_token1,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym__y_attr,
    ACTIONS(247), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
    STATE(169), 4,
      sym__absolute_attr,
      sym__relative_attr,
      sym__geometry_y_attr,
      sym__guide_attr,
  [2254] = 6,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_AT,
    ACTIONS(379), 1,
      aux_sym_relative_token1,
    STATE(411), 1,
      sym_x,
    STATE(225), 3,
      sym__new_xy,
      sym_absolute,
      sym_relative,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2279] = 2,
    ACTIONS(383), 1,
      aux_sym__geometry_x_attr_token1,
    ACTIONS(381), 11,
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
  [2296] = 2,
    ACTIONS(387), 1,
      anon_sym_COMMA,
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
  [2313] = 2,
    ACTIONS(389), 1,
      anon_sym_COMMA,
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
  [2330] = 6,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      aux_sym_relative_token1,
    STATE(325), 1,
      sym_x,
    STATE(2), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(347), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [2355] = 1,
    ACTIONS(87), 11,
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
  [2369] = 1,
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
  [2383] = 1,
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
  [2397] = 1,
    ACTIONS(401), 11,
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
  [2411] = 1,
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
  [2425] = 1,
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
  [2439] = 2,
    ACTIONS(407), 1,
      aux_sym_offset_token1,
    ACTIONS(405), 10,
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
  [2455] = 1,
    ACTIONS(409), 11,
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
  [2469] = 1,
    ACTIONS(411), 11,
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
  [2483] = 1,
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
  [2497] = 1,
    ACTIONS(415), 11,
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
  [2511] = 1,
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
  [2525] = 1,
    ACTIONS(419), 11,
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
  [2539] = 1,
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
  [2553] = 1,
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
  [2567] = 1,
    ACTIONS(423), 11,
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
  [2581] = 1,
    ACTIONS(425), 11,
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
  [2595] = 1,
    ACTIONS(285), 11,
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
  [2609] = 1,
    ACTIONS(259), 11,
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
  [2623] = 1,
    ACTIONS(427), 11,
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
  [2637] = 1,
    ACTIONS(429), 11,
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
  [2651] = 1,
    ACTIONS(431), 11,
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
  [2665] = 2,
    ACTIONS(421), 2,
      aux_sym__offset_attr_token1,
      anon_sym_AT,
    ACTIONS(433), 9,
      anon_sym_id,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [2681] = 1,
    ACTIONS(435), 11,
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
  [2695] = 1,
    ACTIONS(437), 11,
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
  [2709] = 1,
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
  [2723] = 1,
    ACTIONS(441), 11,
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
  [2737] = 1,
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
  [2751] = 1,
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
  [2765] = 1,
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
  [2779] = 1,
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
  [2793] = 1,
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
  [2807] = 1,
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
  [2821] = 1,
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
  [2835] = 1,
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
  [2849] = 1,
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
  [2863] = 1,
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
  [2877] = 1,
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
  [2891] = 1,
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
  [2905] = 5,
    STATE(51), 1,
      sym_halign,
    STATE(52), 1,
      sym_valign,
    STATE(164), 1,
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
  [2927] = 1,
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
  [2941] = 1,
    ACTIONS(467), 11,
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
  [2955] = 1,
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
  [2969] = 1,
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
  [2983] = 1,
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
  [2997] = 1,
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
  [3011] = 1,
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
  [3025] = 1,
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
  [3039] = 1,
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
  [3053] = 1,
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
  [3067] = 1,
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
  [3081] = 1,
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
  [3095] = 1,
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
  [3109] = 1,
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
  [3123] = 1,
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
  [3137] = 1,
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
  [3151] = 1,
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
  [3165] = 1,
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
  [3179] = 1,
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
  [3193] = 1,
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
  [3207] = 1,
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
  [3221] = 1,
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
  [3235] = 1,
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
  [3249] = 1,
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
  [3263] = 1,
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
  [3277] = 1,
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
  [3291] = 1,
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
  [3305] = 1,
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
  [3319] = 1,
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
  [3333] = 1,
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
  [3347] = 1,
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
  [3361] = 1,
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
  [3375] = 1,
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
  [3389] = 1,
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
  [3403] = 1,
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
  [3417] = 1,
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
  [3431] = 1,
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
  [3445] = 1,
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
  [3459] = 1,
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
  [3473] = 1,
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
  [3487] = 1,
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
  [3501] = 1,
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
  [3515] = 1,
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
  [3529] = 1,
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
  [3543] = 1,
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
  [3557] = 1,
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
  [3571] = 10,
    ACTIONS(553), 1,
      anon_sym_x,
    ACTIONS(555), 1,
      anon_sym_y,
    ACTIONS(557), 1,
      anon_sym_xy,
    ACTIONS(559), 1,
      anon_sym_text,
    ACTIONS(561), 1,
      anon_sym_font,
    ACTIONS(563), 1,
      anon_sym_size,
    ACTIONS(565), 1,
      anon_sym_halign,
    ACTIONS(567), 1,
      anon_sym_valign,
    ACTIONS(569), 1,
      anon_sym_align,
    ACTIONS(571), 2,
      anon_sym_colour,
      anon_sym_color,
  [3603] = 1,
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
  [3617] = 1,
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
  [3631] = 1,
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
  [3645] = 1,
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
  [3659] = 1,
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
  [3673] = 1,
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
  [3687] = 1,
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
  [3701] = 1,
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
  [3715] = 6,
    ACTIONS(51), 1,
      anon_sym_input2,
    ACTIONS(53), 1,
      anon_sym_output2,
    ACTIONS(55), 1,
      anon_sym_parameter,
    ACTIONS(57), 1,
      anon_sym_light2,
    ACTIONS(59), 1,
      anon_sym_widget2,
    STATE(305), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [3738] = 6,
    ACTIONS(589), 1,
      anon_sym_input2,
    ACTIONS(591), 1,
      anon_sym_output2,
    ACTIONS(593), 1,
      anon_sym_parameter,
    ACTIONS(595), 1,
      anon_sym_light2,
    ACTIONS(597), 1,
      anon_sym_widget2,
    STATE(385), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3761] = 6,
    ACTIONS(589), 1,
      anon_sym_input2,
    ACTIONS(591), 1,
      anon_sym_output2,
    ACTIONS(593), 1,
      anon_sym_parameter,
    ACTIONS(595), 1,
      anon_sym_light2,
    ACTIONS(597), 1,
      anon_sym_widget2,
    STATE(403), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3784] = 6,
    ACTIONS(589), 1,
      anon_sym_input2,
    ACTIONS(591), 1,
      anon_sym_output2,
    ACTIONS(593), 1,
      anon_sym_parameter,
    ACTIONS(595), 1,
      anon_sym_light2,
    ACTIONS(597), 1,
      anon_sym_widget2,
    STATE(397), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [3807] = 6,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    ACTIONS(599), 1,
      anon_sym_AT,
    ACTIONS(603), 1,
      anon_sym_origin,
    ACTIONS(605), 1,
      aux_sym_origin_token1,
    STATE(155), 1,
      sym_offset,
    ACTIONS(601), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [3829] = 2,
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
  [3842] = 2,
    ACTIONS(419), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(607), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym__guide_attr_token1,
  [3855] = 6,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    ACTIONS(609), 1,
      anon_sym_AT,
    ACTIONS(611), 1,
      anon_sym_origin,
    ACTIONS(613), 1,
      aux_sym_origin_token1,
    STATE(94), 1,
      sym_offset,
    ACTIONS(601), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [3876] = 5,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_x,
    ACTIONS(617), 1,
      anon_sym_y,
    ACTIONS(619), 1,
      anon_sym_xy,
    STATE(138), 2,
      sym__scale,
      sym_stretch,
  [3893] = 6,
    ACTIONS(621), 1,
      anon_sym_input2,
    ACTIONS(623), 1,
      anon_sym_output2,
    ACTIONS(625), 1,
      anon_sym_parameter,
    ACTIONS(627), 1,
      anon_sym_light2,
    ACTIONS(629), 1,
      anon_sym_widget2,
    ACTIONS(631), 1,
      anon_sym_label,
  [3912] = 2,
    STATE(378), 1,
      sym_y,
    ACTIONS(633), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3922] = 5,
    ACTIONS(635), 1,
      anon_sym_input2,
    ACTIONS(637), 1,
      anon_sym_output2,
    ACTIONS(639), 1,
      anon_sym_parameter,
    ACTIONS(641), 1,
      anon_sym_light2,
    ACTIONS(643), 1,
      anon_sym_widget2,
  [3938] = 5,
    ACTIONS(645), 1,
      anon_sym_input2,
    ACTIONS(647), 1,
      anon_sym_output2,
    ACTIONS(649), 1,
      anon_sym_parameter,
    ACTIONS(651), 1,
      anon_sym_light2,
    ACTIONS(653), 1,
      anon_sym_widget2,
  [3954] = 5,
    ACTIONS(655), 1,
      anon_sym_input2,
    ACTIONS(657), 1,
      anon_sym_output2,
    ACTIONS(659), 1,
      anon_sym_parameter,
    ACTIONS(661), 1,
      anon_sym_light2,
    ACTIONS(663), 1,
      anon_sym_widget2,
  [3970] = 2,
    STATE(3), 1,
      sym_y,
    ACTIONS(665), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3980] = 2,
    STATE(324), 1,
      sym_y,
    ACTIONS(667), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [3990] = 5,
    ACTIONS(669), 1,
      anon_sym_name,
    ACTIONS(671), 1,
      anon_sym_x,
    ACTIONS(673), 1,
      anon_sym_y,
    ACTIONS(675), 1,
      anon_sym_xy,
    ACTIONS(677), 1,
      anon_sym_part,
  [4006] = 2,
    STATE(83), 1,
      sym_y,
    ACTIONS(679), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym__guide_attr_token1,
  [4016] = 5,
    ACTIONS(681), 1,
      aux_sym__input_id_token1,
    ACTIONS(683), 1,
      anon_sym_none,
    ACTIONS(685), 1,
      sym_rgb,
    ACTIONS(687), 1,
      sym_rgba,
    STATE(121), 1,
      sym_name,
  [4032] = 5,
    ACTIONS(689), 1,
      anon_sym_AT,
    ACTIONS(691), 1,
      aux_sym__originx_token1,
    ACTIONS(693), 1,
      aux_sym__originy_token1,
    STATE(358), 1,
      sym__originy,
    STATE(359), 1,
      sym__originx,
  [4048] = 2,
    STATE(62), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4058] = 2,
    STATE(164), 1,
      sym_valign,
    ACTIONS(73), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      anon_sym_baseline,
  [4068] = 2,
    STATE(164), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4078] = 2,
    STATE(62), 1,
      sym_halign,
    ACTIONS(71), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [4088] = 4,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(386), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4101] = 4,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_SQUOTE,
    ACTIONS(703), 1,
      aux_sym__string_token1,
    STATE(164), 1,
      sym__string,
  [4114] = 4,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      anon_sym_SQUOTE,
    ACTIONS(709), 1,
      aux_sym__string_token1,
    STATE(92), 1,
      sym__string,
  [4127] = 4,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    ACTIONS(713), 1,
      aux_sym__offset_attr_token1,
    STATE(353), 1,
      sym__offset_xy_attr,
    STATE(369), 1,
      sym__offset_attr,
  [4140] = 4,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4153] = 3,
    ACTIONS(717), 1,
      anon_sym_module,
    ACTIONS(719), 1,
      anon_sym_panel,
    STATE(178), 2,
      sym__module_export,
      sym_panel,
  [4164] = 3,
    ACTIONS(721), 1,
      anon_sym_project,
    ACTIONS(723), 1,
      anon_sym_script,
    STATE(184), 2,
      sym_project,
      sym_script,
  [4175] = 4,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4188] = 4,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4201] = 2,
    STATE(166), 1,
      sym__geometry_y_attr,
    ACTIONS(729), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [4210] = 4,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4223] = 3,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    ACTIONS(733), 1,
      aux_sym_origin_token1,
    STATE(100), 1,
      sym_offset,
  [4233] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(312), 1,
      sym__component_y_attr,
  [4243] = 3,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(45), 1,
      sym_name,
    STATE(149), 1,
      sym_decoration,
  [4253] = 3,
    ACTIONS(739), 1,
      anon_sym_font,
    ACTIONS(741), 1,
      anon_sym_project,
    ACTIONS(743), 1,
      anon_sym_script,
  [4263] = 1,
    ACTIONS(745), 3,
      anon_sym_fonts,
      anon_sym_parts,
      anon_sym_decorations,
  [4269] = 3,
    ACTIONS(81), 1,
      aux_sym__input_id_token1,
    ACTIONS(747), 1,
      aux_sym_offset_token1,
    STATE(383), 1,
      sym_offset,
  [4279] = 3,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(45), 1,
      sym_name,
    STATE(175), 1,
      sym_decoration,
  [4289] = 3,
    ACTIONS(749), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(141), 1,
      sym__new_component,
  [4299] = 3,
    ACTIONS(749), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(158), 1,
      sym__new_component,
  [4309] = 3,
    ACTIONS(749), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(95), 1,
      sym__new_component,
  [4319] = 3,
    ACTIONS(749), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(96), 1,
      sym__new_component,
  [4329] = 3,
    ACTIONS(749), 1,
      aux_sym__input_id_token1,
    STATE(80), 1,
      sym_name,
    STATE(97), 1,
      sym__new_component,
  [4339] = 3,
    ACTIONS(37), 1,
      sym_rgb,
    ACTIONS(39), 1,
      sym_rgba,
    STATE(164), 1,
      sym_colour,
  [4349] = 3,
    ACTIONS(713), 1,
      aux_sym__offset_attr_token1,
    STATE(130), 1,
      sym__offset_xy_attr,
    STATE(369), 1,
      sym__offset_attr,
  [4359] = 3,
    ACTIONS(751), 1,
      anon_sym_name,
    ACTIONS(753), 1,
      anon_sym_height,
    ACTIONS(755), 1,
      anon_sym_width,
  [4369] = 3,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    ACTIONS(757), 1,
      aux_sym_origin_token1,
    STATE(103), 1,
      sym_offset,
  [4379] = 3,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      sym_offset,
  [4389] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(313), 1,
      sym__component_y_attr,
  [4399] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(314), 1,
      sym__component_y_attr,
  [4409] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(315), 1,
      sym__component_y_attr,
  [4419] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(253), 1,
      sym_name,
    STATE(316), 1,
      sym__component_y_attr,
  [4429] = 3,
    ACTIONS(761), 1,
      aux_sym__label_id_token1,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      anon_sym_SQUOTE,
  [4439] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(317), 1,
      sym__component_xy_attr,
  [4449] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(319), 1,
      sym__component_xy_attr,
  [4459] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(320), 1,
      sym__component_xy_attr,
  [4469] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(321), 1,
      sym__component_xy_attr,
  [4479] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(215), 1,
      sym_name,
    STATE(322), 1,
      sym__component_xy_attr,
  [4489] = 3,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(333), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4499] = 3,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(334), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4509] = 3,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(335), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4519] = 3,
    ACTIONS(713), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym__offset_attr,
  [4529] = 3,
    ACTIONS(713), 1,
      aux_sym__offset_attr_token1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym__offset_attr,
  [4539] = 3,
    ACTIONS(81), 1,
      anon_sym_with,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    STATE(367), 1,
      sym_offset,
  [4549] = 3,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(773), 1,
      aux_sym__guide_id_token1,
    STATE(278), 1,
      sym__component_id,
  [4559] = 3,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(330), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4569] = 3,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(331), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4579] = 3,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(332), 1,
      sym__relative,
    STATE(391), 1,
      sym__offset,
  [4589] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(254), 1,
      sym_name,
    STATE(308), 1,
      sym__component_x_attr,
  [4599] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(254), 1,
      sym_name,
    STATE(303), 1,
      sym__component_x_attr,
  [4609] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(254), 1,
      sym_name,
    STATE(309), 1,
      sym__component_x_attr,
  [4619] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(254), 1,
      sym_name,
    STATE(310), 1,
      sym__component_x_attr,
  [4629] = 3,
    ACTIONS(735), 1,
      aux_sym__input_id_token1,
    STATE(254), 1,
      sym_name,
    STATE(311), 1,
      sym__component_x_attr,
  [4639] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(177), 1,
      sym_name,
  [4646] = 2,
    ACTIONS(697), 1,
      aux_sym_offset_token1,
    STATE(339), 1,
      sym__offset,
  [4653] = 2,
    ACTIONS(775), 1,
      anon_sym_svg,
    STATE(145), 1,
      sym_svg,
  [4660] = 2,
    ACTIONS(777), 1,
      sym_height,
    ACTIONS(779), 1,
      sym_width,
  [4667] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(216), 1,
      sym_name,
  [4674] = 2,
    ACTIONS(181), 1,
      anon_sym_font,
    STATE(173), 1,
      sym__font_id,
  [4681] = 1,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4686] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(219), 1,
      sym_name,
  [4693] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(220), 1,
      sym_name,
  [4700] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(212), 1,
      sym_name,
  [4707] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(222), 1,
      sym_name,
  [4714] = 1,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      aux_sym__offset_attr_token1,
  [4719] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(268), 1,
      sym_name,
  [4726] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(39), 1,
      sym_name,
  [4733] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(257), 1,
      sym_name,
  [4740] = 2,
    ACTIONS(783), 1,
      aux_sym__guide_attr_token1,
    STATE(186), 1,
      sym_identifier,
  [4747] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(171), 1,
      sym_name,
  [4754] = 2,
    ACTIONS(785), 1,
      aux_sym__input_id_token1,
    STATE(171), 1,
      sym_part,
  [4761] = 2,
    ACTIONS(787), 1,
      aux_sym__absolute_attr_token1,
    STATE(352), 1,
      sym__absolute_x_attr,
  [4768] = 2,
    ACTIONS(789), 1,
      aux_sym__input_id_token1,
    STATE(164), 1,
      sym_font,
  [4775] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(258), 1,
      sym_name,
  [4782] = 2,
    ACTIONS(235), 1,
      aux_sym__offset_attr_token1,
    STATE(172), 1,
      sym__relative_attr,
  [4789] = 2,
    ACTIONS(791), 1,
      anon_sym_scale,
    ACTIONS(793), 1,
      anon_sym_stretch,
  [4796] = 2,
    ACTIONS(795), 1,
      aux_sym__guide_attr_token1,
    STATE(163), 1,
      sym__guide_attr,
  [4803] = 2,
    ACTIONS(713), 1,
      aux_sym__offset_attr_token1,
    STATE(153), 1,
      sym__offset_attr,
  [4810] = 2,
    ACTIONS(691), 1,
      aux_sym__originx_token1,
    STATE(168), 1,
      sym__originx,
  [4817] = 2,
    ACTIONS(797), 1,
      sym_rgb,
    ACTIONS(799), 1,
      sym_rgba,
  [4824] = 2,
    ACTIONS(713), 1,
      aux_sym__offset_attr_token1,
    STATE(131), 1,
      sym__offset_attr,
  [4831] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(259), 1,
      sym_name,
  [4838] = 2,
    ACTIONS(713), 1,
      aux_sym__offset_attr_token1,
    STATE(77), 1,
      sym__offset_attr,
  [4845] = 2,
    ACTIONS(693), 1,
      aux_sym__originy_token1,
    STATE(168), 1,
      sym__originy,
  [4852] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(250), 1,
      sym_name,
  [4859] = 2,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      sym_width,
  [4866] = 1,
    ACTIONS(805), 2,
      anon_sym_DOTh,
      anon_sym_GT_GT,
  [4871] = 2,
    ACTIONS(807), 1,
      aux_sym__absolute_attr_token1,
    STATE(118), 1,
      sym__absolute_y_attr,
  [4878] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(252), 1,
      sym_name,
  [4885] = 2,
    ACTIONS(737), 1,
      aux_sym__input_id_token1,
    STATE(251), 1,
      sym_name,
  [4892] = 2,
    ACTIONS(211), 1,
      aux_sym_offset_token1,
    STATE(161), 1,
      sym_offset,
  [4899] = 1,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
  [4903] = 1,
    ACTIONS(811), 1,
      aux_sym__input_id_token1,
  [4907] = 1,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [4911] = 1,
    ACTIONS(815), 1,
      anon_sym_COMMA,
  [4915] = 1,
    ACTIONS(817), 1,
      anon_sym_with,
  [4919] = 1,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [4923] = 1,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [4927] = 1,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [4931] = 1,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [4935] = 1,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [4939] = 1,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [4943] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [4947] = 1,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [4951] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [4955] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [4959] = 1,
    ACTIONS(121), 1,
      anon_sym_with,
  [4963] = 1,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [4967] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [4971] = 1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [4975] = 1,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [4979] = 1,
    ACTIONS(847), 1,
      aux_sym_absolute_token1,
  [4983] = 1,
    ACTIONS(367), 1,
      anon_sym_with,
  [4987] = 1,
    ACTIONS(849), 1,
      anon_sym_COMMA,
  [4991] = 1,
    ACTIONS(851), 1,
      anon_sym_COMMA,
  [4995] = 1,
    ACTIONS(853), 1,
      anon_sym_SQUOTE,
  [4999] = 1,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
  [5003] = 1,
    ACTIONS(855), 1,
      aux_sym__scale_token1,
  [5007] = 1,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
  [5011] = 1,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
  [5015] = 1,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
  [5019] = 1,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
  [5023] = 1,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
  [5027] = 1,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [5031] = 1,
    ACTIONS(869), 1,
      aux_sym_origin_token1,
  [5035] = 1,
    ACTIONS(871), 1,
      aux_sym__scale_token1,
  [5039] = 1,
    ACTIONS(873), 1,
      aux_sym_absolute_token1,
  [5043] = 1,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
  [5047] = 1,
    ACTIONS(877), 1,
      aux_sym__input_id_token1,
  [5051] = 1,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [5055] = 1,
    ACTIONS(881), 1,
      aux_sym_origin_token1,
  [5059] = 1,
    ACTIONS(883), 1,
      aux_sym__input_id_token1,
  [5063] = 1,
    ACTIONS(793), 1,
      anon_sym_stretch,
  [5067] = 1,
    ACTIONS(885), 1,
      anon_sym_COMMA,
  [5071] = 1,
    ACTIONS(887), 1,
      anon_sym_COMMA,
  [5075] = 1,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
  [5079] = 1,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [5083] = 1,
    ACTIONS(893), 1,
      sym_rgb,
  [5087] = 1,
    ACTIONS(893), 1,
      sym_rgba,
  [5091] = 1,
    ACTIONS(895), 1,
      sym_fontsize,
  [5095] = 1,
    ACTIONS(897), 1,
      anon_sym_COMMA,
  [5099] = 1,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
  [5103] = 1,
    ACTIONS(901), 1,
      anon_sym_COMMA,
  [5107] = 1,
    ACTIONS(903), 1,
      anon_sym_SQUOTE,
  [5111] = 1,
    ACTIONS(905), 1,
      aux_sym__absolute_attr_token1,
  [5115] = 1,
    ACTIONS(907), 1,
      aux_sym_origin_token1,
  [5119] = 1,
    ACTIONS(909), 1,
      anon_sym_COMMA,
  [5123] = 1,
    ACTIONS(911), 1,
      anon_sym_COMMA,
  [5127] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [5131] = 1,
    ACTIONS(915), 1,
      aux_sym_origin_token1,
  [5135] = 1,
    ACTIONS(917), 1,
      aux_sym__label_id_token3,
  [5139] = 1,
    ACTIONS(919), 1,
      aux_sym__label_id_token2,
  [5143] = 1,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
  [5147] = 1,
    ACTIONS(921), 1,
      anon_sym_timestamp,
  [5151] = 1,
    ACTIONS(921), 1,
      anon_sym_gzip,
  [5155] = 1,
    ACTIONS(125), 1,
      anon_sym_with,
  [5159] = 1,
    ACTIONS(923), 1,
      anon_sym_COMMA,
  [5163] = 1,
    ACTIONS(925), 1,
      anon_sym_COMMA,
  [5167] = 1,
    ACTIONS(927), 1,
      sym_width,
  [5171] = 1,
    ACTIONS(927), 1,
      sym_height,
  [5175] = 1,
    ACTIONS(89), 1,
      anon_sym_with,
  [5179] = 1,
    ACTIONS(929), 1,
      sym_width,
  [5183] = 1,
    ACTIONS(931), 1,
      anon_sym_COMMA,
  [5187] = 1,
    ACTIONS(933), 1,
      aux_sym_relative_token1,
  [5191] = 1,
    ACTIONS(117), 1,
      aux_sym__input_id_token1,
  [5195] = 1,
    ACTIONS(935), 1,
      anon_sym_COMMA,
  [5199] = 1,
    ACTIONS(367), 1,
      aux_sym__input_id_token1,
  [5203] = 1,
    ACTIONS(121), 1,
      aux_sym__input_id_token1,
  [5207] = 1,
    ACTIONS(937), 1,
      anon_sym_COMMA,
  [5211] = 1,
    ACTIONS(939), 1,
      anon_sym_COMMA,
  [5215] = 1,
    ACTIONS(89), 1,
      aux_sym__input_id_token1,
  [5219] = 1,
    ACTIONS(125), 1,
      aux_sym__input_id_token1,
  [5223] = 1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [5227] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [5231] = 1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [5235] = 1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [5239] = 1,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
  [5243] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [5247] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [5251] = 1,
    ACTIONS(955), 1,
      anon_sym_COMMA,
  [5255] = 1,
    ACTIONS(957), 1,
      aux_sym__input_id_token1,
  [5259] = 1,
    ACTIONS(959), 1,
      aux_sym__input_id_token1,
  [5263] = 1,
    ACTIONS(961), 1,
      aux_sym__guide_id_token1,
  [5267] = 1,
    ACTIONS(963), 1,
      aux_sym__label_id_token3,
  [5271] = 1,
    ACTIONS(965), 1,
      aux_sym__guide_id_token1,
  [5275] = 1,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
  [5279] = 1,
    ACTIONS(969), 1,
      aux_sym_relative_token1,
  [5283] = 1,
    ACTIONS(971), 1,
      aux_sym__label_id_token2,
  [5287] = 1,
    ACTIONS(973), 1,
      anon_sym_DQUOTE,
  [5291] = 1,
    ACTIONS(973), 1,
      anon_sym_SQUOTE,
  [5295] = 1,
    ACTIONS(975), 1,
      aux_sym_absolute_token1,
  [5299] = 1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [5303] = 1,
    ACTIONS(979), 1,
      aux_sym_relative_token1,
  [5307] = 1,
    ACTIONS(981), 1,
      aux_sym__scale_token1,
  [5311] = 1,
    ACTIONS(983), 1,
      aux_sym_absolute_token1,
  [5315] = 1,
    ACTIONS(985), 1,
      aux_sym_relative_token1,
  [5319] = 1,
    ACTIONS(987), 1,
      aux_sym_absolute_token1,
  [5323] = 1,
    ACTIONS(989), 1,
      aux_sym__input_id_token1,
  [5327] = 1,
    ACTIONS(991), 1,
      anon_sym_COMMA,
  [5331] = 1,
    ACTIONS(993), 1,
      anon_sym_COMMA,
  [5335] = 1,
    ACTIONS(995), 1,
      aux_sym__label_id_token2,
  [5339] = 1,
    ACTIONS(997), 1,
      aux_sym__label_id_token3,
  [5343] = 1,
    ACTIONS(999), 1,
      anon_sym_COMMA,
  [5347] = 1,
    ACTIONS(1001), 1,
      aux_sym__input_id_token1,
  [5351] = 1,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
  [5355] = 1,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
  [5359] = 1,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
  [5363] = 1,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [5367] = 1,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
  [5371] = 1,
    ACTIONS(1013), 1,
      aux_sym_absolute_token1,
  [5375] = 1,
    ACTIONS(1015), 1,
      aux_sym_absolute_token1,
  [5379] = 1,
    ACTIONS(1017), 1,
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
  [SMALL_STATE(30)] = 1028,
  [SMALL_STATE(31)] = 1062,
  [SMALL_STATE(32)] = 1084,
  [SMALL_STATE(33)] = 1106,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1150,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1209,
  [SMALL_STATE(38)] = 1246,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1297,
  [SMALL_STATE(41)] = 1317,
  [SMALL_STATE(42)] = 1345,
  [SMALL_STATE(43)] = 1368,
  [SMALL_STATE(44)] = 1391,
  [SMALL_STATE(45)] = 1414,
  [SMALL_STATE(46)] = 1437,
  [SMALL_STATE(47)] = 1460,
  [SMALL_STATE(48)] = 1479,
  [SMALL_STATE(49)] = 1498,
  [SMALL_STATE(50)] = 1519,
  [SMALL_STATE(51)] = 1540,
  [SMALL_STATE(52)] = 1561,
  [SMALL_STATE(53)] = 1582,
  [SMALL_STATE(54)] = 1605,
  [SMALL_STATE(55)] = 1628,
  [SMALL_STATE(56)] = 1648,
  [SMALL_STATE(57)] = 1668,
  [SMALL_STATE(58)] = 1688,
  [SMALL_STATE(59)] = 1710,
  [SMALL_STATE(60)] = 1738,
  [SMALL_STATE(61)] = 1766,
  [SMALL_STATE(62)] = 1784,
  [SMALL_STATE(63)] = 1802,
  [SMALL_STATE(64)] = 1822,
  [SMALL_STATE(65)] = 1838,
  [SMALL_STATE(66)] = 1858,
  [SMALL_STATE(67)] = 1874,
  [SMALL_STATE(68)] = 1892,
  [SMALL_STATE(69)] = 1909,
  [SMALL_STATE(70)] = 1926,
  [SMALL_STATE(71)] = 1941,
  [SMALL_STATE(72)] = 1956,
  [SMALL_STATE(73)] = 1973,
  [SMALL_STATE(74)] = 1988,
  [SMALL_STATE(75)] = 2003,
  [SMALL_STATE(76)] = 2028,
  [SMALL_STATE(77)] = 2043,
  [SMALL_STATE(78)] = 2058,
  [SMALL_STATE(79)] = 2075,
  [SMALL_STATE(80)] = 2092,
  [SMALL_STATE(81)] = 2117,
  [SMALL_STATE(82)] = 2134,
  [SMALL_STATE(83)] = 2151,
  [SMALL_STATE(84)] = 2168,
  [SMALL_STATE(85)] = 2185,
  [SMALL_STATE(86)] = 2212,
  [SMALL_STATE(87)] = 2227,
  [SMALL_STATE(88)] = 2254,
  [SMALL_STATE(89)] = 2279,
  [SMALL_STATE(90)] = 2296,
  [SMALL_STATE(91)] = 2313,
  [SMALL_STATE(92)] = 2330,
  [SMALL_STATE(93)] = 2355,
  [SMALL_STATE(94)] = 2369,
  [SMALL_STATE(95)] = 2383,
  [SMALL_STATE(96)] = 2397,
  [SMALL_STATE(97)] = 2411,
  [SMALL_STATE(98)] = 2425,
  [SMALL_STATE(99)] = 2439,
  [SMALL_STATE(100)] = 2455,
  [SMALL_STATE(101)] = 2469,
  [SMALL_STATE(102)] = 2483,
  [SMALL_STATE(103)] = 2497,
  [SMALL_STATE(104)] = 2511,
  [SMALL_STATE(105)] = 2525,
  [SMALL_STATE(106)] = 2539,
  [SMALL_STATE(107)] = 2553,
  [SMALL_STATE(108)] = 2567,
  [SMALL_STATE(109)] = 2581,
  [SMALL_STATE(110)] = 2595,
  [SMALL_STATE(111)] = 2609,
  [SMALL_STATE(112)] = 2623,
  [SMALL_STATE(113)] = 2637,
  [SMALL_STATE(114)] = 2651,
  [SMALL_STATE(115)] = 2665,
  [SMALL_STATE(116)] = 2681,
  [SMALL_STATE(117)] = 2695,
  [SMALL_STATE(118)] = 2709,
  [SMALL_STATE(119)] = 2723,
  [SMALL_STATE(120)] = 2737,
  [SMALL_STATE(121)] = 2751,
  [SMALL_STATE(122)] = 2765,
  [SMALL_STATE(123)] = 2779,
  [SMALL_STATE(124)] = 2793,
  [SMALL_STATE(125)] = 2807,
  [SMALL_STATE(126)] = 2821,
  [SMALL_STATE(127)] = 2835,
  [SMALL_STATE(128)] = 2849,
  [SMALL_STATE(129)] = 2863,
  [SMALL_STATE(130)] = 2877,
  [SMALL_STATE(131)] = 2891,
  [SMALL_STATE(132)] = 2905,
  [SMALL_STATE(133)] = 2927,
  [SMALL_STATE(134)] = 2941,
  [SMALL_STATE(135)] = 2955,
  [SMALL_STATE(136)] = 2969,
  [SMALL_STATE(137)] = 2983,
  [SMALL_STATE(138)] = 2997,
  [SMALL_STATE(139)] = 3011,
  [SMALL_STATE(140)] = 3025,
  [SMALL_STATE(141)] = 3039,
  [SMALL_STATE(142)] = 3053,
  [SMALL_STATE(143)] = 3067,
  [SMALL_STATE(144)] = 3081,
  [SMALL_STATE(145)] = 3095,
  [SMALL_STATE(146)] = 3109,
  [SMALL_STATE(147)] = 3123,
  [SMALL_STATE(148)] = 3137,
  [SMALL_STATE(149)] = 3151,
  [SMALL_STATE(150)] = 3165,
  [SMALL_STATE(151)] = 3179,
  [SMALL_STATE(152)] = 3193,
  [SMALL_STATE(153)] = 3207,
  [SMALL_STATE(154)] = 3221,
  [SMALL_STATE(155)] = 3235,
  [SMALL_STATE(156)] = 3249,
  [SMALL_STATE(157)] = 3263,
  [SMALL_STATE(158)] = 3277,
  [SMALL_STATE(159)] = 3291,
  [SMALL_STATE(160)] = 3305,
  [SMALL_STATE(161)] = 3319,
  [SMALL_STATE(162)] = 3333,
  [SMALL_STATE(163)] = 3347,
  [SMALL_STATE(164)] = 3361,
  [SMALL_STATE(165)] = 3375,
  [SMALL_STATE(166)] = 3389,
  [SMALL_STATE(167)] = 3403,
  [SMALL_STATE(168)] = 3417,
  [SMALL_STATE(169)] = 3431,
  [SMALL_STATE(170)] = 3445,
  [SMALL_STATE(171)] = 3459,
  [SMALL_STATE(172)] = 3473,
  [SMALL_STATE(173)] = 3487,
  [SMALL_STATE(174)] = 3501,
  [SMALL_STATE(175)] = 3515,
  [SMALL_STATE(176)] = 3529,
  [SMALL_STATE(177)] = 3543,
  [SMALL_STATE(178)] = 3557,
  [SMALL_STATE(179)] = 3571,
  [SMALL_STATE(180)] = 3603,
  [SMALL_STATE(181)] = 3617,
  [SMALL_STATE(182)] = 3631,
  [SMALL_STATE(183)] = 3645,
  [SMALL_STATE(184)] = 3659,
  [SMALL_STATE(185)] = 3673,
  [SMALL_STATE(186)] = 3687,
  [SMALL_STATE(187)] = 3701,
  [SMALL_STATE(188)] = 3715,
  [SMALL_STATE(189)] = 3738,
  [SMALL_STATE(190)] = 3761,
  [SMALL_STATE(191)] = 3784,
  [SMALL_STATE(192)] = 3807,
  [SMALL_STATE(193)] = 3829,
  [SMALL_STATE(194)] = 3842,
  [SMALL_STATE(195)] = 3855,
  [SMALL_STATE(196)] = 3876,
  [SMALL_STATE(197)] = 3893,
  [SMALL_STATE(198)] = 3912,
  [SMALL_STATE(199)] = 3922,
  [SMALL_STATE(200)] = 3938,
  [SMALL_STATE(201)] = 3954,
  [SMALL_STATE(202)] = 3970,
  [SMALL_STATE(203)] = 3980,
  [SMALL_STATE(204)] = 3990,
  [SMALL_STATE(205)] = 4006,
  [SMALL_STATE(206)] = 4016,
  [SMALL_STATE(207)] = 4032,
  [SMALL_STATE(208)] = 4048,
  [SMALL_STATE(209)] = 4058,
  [SMALL_STATE(210)] = 4068,
  [SMALL_STATE(211)] = 4078,
  [SMALL_STATE(212)] = 4088,
  [SMALL_STATE(213)] = 4101,
  [SMALL_STATE(214)] = 4114,
  [SMALL_STATE(215)] = 4127,
  [SMALL_STATE(216)] = 4140,
  [SMALL_STATE(217)] = 4153,
  [SMALL_STATE(218)] = 4164,
  [SMALL_STATE(219)] = 4175,
  [SMALL_STATE(220)] = 4188,
  [SMALL_STATE(221)] = 4201,
  [SMALL_STATE(222)] = 4210,
  [SMALL_STATE(223)] = 4223,
  [SMALL_STATE(224)] = 4233,
  [SMALL_STATE(225)] = 4243,
  [SMALL_STATE(226)] = 4253,
  [SMALL_STATE(227)] = 4263,
  [SMALL_STATE(228)] = 4269,
  [SMALL_STATE(229)] = 4279,
  [SMALL_STATE(230)] = 4289,
  [SMALL_STATE(231)] = 4299,
  [SMALL_STATE(232)] = 4309,
  [SMALL_STATE(233)] = 4319,
  [SMALL_STATE(234)] = 4329,
  [SMALL_STATE(235)] = 4339,
  [SMALL_STATE(236)] = 4349,
  [SMALL_STATE(237)] = 4359,
  [SMALL_STATE(238)] = 4369,
  [SMALL_STATE(239)] = 4379,
  [SMALL_STATE(240)] = 4389,
  [SMALL_STATE(241)] = 4399,
  [SMALL_STATE(242)] = 4409,
  [SMALL_STATE(243)] = 4419,
  [SMALL_STATE(244)] = 4429,
  [SMALL_STATE(245)] = 4439,
  [SMALL_STATE(246)] = 4449,
  [SMALL_STATE(247)] = 4459,
  [SMALL_STATE(248)] = 4469,
  [SMALL_STATE(249)] = 4479,
  [SMALL_STATE(250)] = 4489,
  [SMALL_STATE(251)] = 4499,
  [SMALL_STATE(252)] = 4509,
  [SMALL_STATE(253)] = 4519,
  [SMALL_STATE(254)] = 4529,
  [SMALL_STATE(255)] = 4539,
  [SMALL_STATE(256)] = 4549,
  [SMALL_STATE(257)] = 4559,
  [SMALL_STATE(258)] = 4569,
  [SMALL_STATE(259)] = 4579,
  [SMALL_STATE(260)] = 4589,
  [SMALL_STATE(261)] = 4599,
  [SMALL_STATE(262)] = 4609,
  [SMALL_STATE(263)] = 4619,
  [SMALL_STATE(264)] = 4629,
  [SMALL_STATE(265)] = 4639,
  [SMALL_STATE(266)] = 4646,
  [SMALL_STATE(267)] = 4653,
  [SMALL_STATE(268)] = 4660,
  [SMALL_STATE(269)] = 4667,
  [SMALL_STATE(270)] = 4674,
  [SMALL_STATE(271)] = 4681,
  [SMALL_STATE(272)] = 4686,
  [SMALL_STATE(273)] = 4693,
  [SMALL_STATE(274)] = 4700,
  [SMALL_STATE(275)] = 4707,
  [SMALL_STATE(276)] = 4714,
  [SMALL_STATE(277)] = 4719,
  [SMALL_STATE(278)] = 4726,
  [SMALL_STATE(279)] = 4733,
  [SMALL_STATE(280)] = 4740,
  [SMALL_STATE(281)] = 4747,
  [SMALL_STATE(282)] = 4754,
  [SMALL_STATE(283)] = 4761,
  [SMALL_STATE(284)] = 4768,
  [SMALL_STATE(285)] = 4775,
  [SMALL_STATE(286)] = 4782,
  [SMALL_STATE(287)] = 4789,
  [SMALL_STATE(288)] = 4796,
  [SMALL_STATE(289)] = 4803,
  [SMALL_STATE(290)] = 4810,
  [SMALL_STATE(291)] = 4817,
  [SMALL_STATE(292)] = 4824,
  [SMALL_STATE(293)] = 4831,
  [SMALL_STATE(294)] = 4838,
  [SMALL_STATE(295)] = 4845,
  [SMALL_STATE(296)] = 4852,
  [SMALL_STATE(297)] = 4859,
  [SMALL_STATE(298)] = 4866,
  [SMALL_STATE(299)] = 4871,
  [SMALL_STATE(300)] = 4878,
  [SMALL_STATE(301)] = 4885,
  [SMALL_STATE(302)] = 4892,
  [SMALL_STATE(303)] = 4899,
  [SMALL_STATE(304)] = 4903,
  [SMALL_STATE(305)] = 4907,
  [SMALL_STATE(306)] = 4911,
  [SMALL_STATE(307)] = 4915,
  [SMALL_STATE(308)] = 4919,
  [SMALL_STATE(309)] = 4923,
  [SMALL_STATE(310)] = 4927,
  [SMALL_STATE(311)] = 4931,
  [SMALL_STATE(312)] = 4935,
  [SMALL_STATE(313)] = 4939,
  [SMALL_STATE(314)] = 4943,
  [SMALL_STATE(315)] = 4947,
  [SMALL_STATE(316)] = 4951,
  [SMALL_STATE(317)] = 4955,
  [SMALL_STATE(318)] = 4959,
  [SMALL_STATE(319)] = 4963,
  [SMALL_STATE(320)] = 4967,
  [SMALL_STATE(321)] = 4971,
  [SMALL_STATE(322)] = 4975,
  [SMALL_STATE(323)] = 4979,
  [SMALL_STATE(324)] = 4983,
  [SMALL_STATE(325)] = 4987,
  [SMALL_STATE(326)] = 4991,
  [SMALL_STATE(327)] = 4995,
  [SMALL_STATE(328)] = 4999,
  [SMALL_STATE(329)] = 5003,
  [SMALL_STATE(330)] = 5007,
  [SMALL_STATE(331)] = 5011,
  [SMALL_STATE(332)] = 5015,
  [SMALL_STATE(333)] = 5019,
  [SMALL_STATE(334)] = 5023,
  [SMALL_STATE(335)] = 5027,
  [SMALL_STATE(336)] = 5031,
  [SMALL_STATE(337)] = 5035,
  [SMALL_STATE(338)] = 5039,
  [SMALL_STATE(339)] = 5043,
  [SMALL_STATE(340)] = 5047,
  [SMALL_STATE(341)] = 5051,
  [SMALL_STATE(342)] = 5055,
  [SMALL_STATE(343)] = 5059,
  [SMALL_STATE(344)] = 5063,
  [SMALL_STATE(345)] = 5067,
  [SMALL_STATE(346)] = 5071,
  [SMALL_STATE(347)] = 5075,
  [SMALL_STATE(348)] = 5079,
  [SMALL_STATE(349)] = 5083,
  [SMALL_STATE(350)] = 5087,
  [SMALL_STATE(351)] = 5091,
  [SMALL_STATE(352)] = 5095,
  [SMALL_STATE(353)] = 5099,
  [SMALL_STATE(354)] = 5103,
  [SMALL_STATE(355)] = 5107,
  [SMALL_STATE(356)] = 5111,
  [SMALL_STATE(357)] = 5115,
  [SMALL_STATE(358)] = 5119,
  [SMALL_STATE(359)] = 5123,
  [SMALL_STATE(360)] = 5127,
  [SMALL_STATE(361)] = 5131,
  [SMALL_STATE(362)] = 5135,
  [SMALL_STATE(363)] = 5139,
  [SMALL_STATE(364)] = 5143,
  [SMALL_STATE(365)] = 5147,
  [SMALL_STATE(366)] = 5151,
  [SMALL_STATE(367)] = 5155,
  [SMALL_STATE(368)] = 5159,
  [SMALL_STATE(369)] = 5163,
  [SMALL_STATE(370)] = 5167,
  [SMALL_STATE(371)] = 5171,
  [SMALL_STATE(372)] = 5175,
  [SMALL_STATE(373)] = 5179,
  [SMALL_STATE(374)] = 5183,
  [SMALL_STATE(375)] = 5187,
  [SMALL_STATE(376)] = 5191,
  [SMALL_STATE(377)] = 5195,
  [SMALL_STATE(378)] = 5199,
  [SMALL_STATE(379)] = 5203,
  [SMALL_STATE(380)] = 5207,
  [SMALL_STATE(381)] = 5211,
  [SMALL_STATE(382)] = 5215,
  [SMALL_STATE(383)] = 5219,
  [SMALL_STATE(384)] = 5223,
  [SMALL_STATE(385)] = 5227,
  [SMALL_STATE(386)] = 5231,
  [SMALL_STATE(387)] = 5235,
  [SMALL_STATE(388)] = 5239,
  [SMALL_STATE(389)] = 5243,
  [SMALL_STATE(390)] = 5247,
  [SMALL_STATE(391)] = 5251,
  [SMALL_STATE(392)] = 5255,
  [SMALL_STATE(393)] = 5259,
  [SMALL_STATE(394)] = 5263,
  [SMALL_STATE(395)] = 5267,
  [SMALL_STATE(396)] = 5271,
  [SMALL_STATE(397)] = 5275,
  [SMALL_STATE(398)] = 5279,
  [SMALL_STATE(399)] = 5283,
  [SMALL_STATE(400)] = 5287,
  [SMALL_STATE(401)] = 5291,
  [SMALL_STATE(402)] = 5295,
  [SMALL_STATE(403)] = 5299,
  [SMALL_STATE(404)] = 5303,
  [SMALL_STATE(405)] = 5307,
  [SMALL_STATE(406)] = 5311,
  [SMALL_STATE(407)] = 5315,
  [SMALL_STATE(408)] = 5319,
  [SMALL_STATE(409)] = 5323,
  [SMALL_STATE(410)] = 5327,
  [SMALL_STATE(411)] = 5331,
  [SMALL_STATE(412)] = 5335,
  [SMALL_STATE(413)] = 5339,
  [SMALL_STATE(414)] = 5343,
  [SMALL_STATE(415)] = 5347,
  [SMALL_STATE(416)] = 5351,
  [SMALL_STATE(417)] = 5355,
  [SMALL_STATE(418)] = 5359,
  [SMALL_STATE(419)] = 5363,
  [SMALL_STATE(420)] = 5367,
  [SMALL_STATE(421)] = 5371,
  [SMALL_STATE(422)] = 5375,
  [SMALL_STATE(423)] = 5379,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 14),
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
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 22),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_id, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(75),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(4),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(226),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(270),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(218),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(217),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(227),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__light_id, 2, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_id, 2, .production_id = 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_id, 2, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__widget_id, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_id, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_id, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_component, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 1, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_attr, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 1, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_attr, 2, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_x_attr, 2, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset_xy_attr, 3, .production_id = 16),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_xy, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_xy, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_attr, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 1, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_parameter, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_light, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_widget, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 12),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 13),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_id, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 12),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 27),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_component, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__guide_id, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_xy_attr, 4, .production_id = 9),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_y_attr, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 21),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 20),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 19),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 2, .production_id = 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4, .production_id = 18),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 11),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 21),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 20),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 8),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 19),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4, .production_id = 18),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 21),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 20),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__font_id, 2, .production_id = 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_input, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_export, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 19),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4, .production_id = 18),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_decoration, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_attr, 3, .production_id = 10),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_output, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guide_xy_attr, 3, .production_id = 16),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_attr, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_xy_attr, 3, .production_id = 16),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xy_attr, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__y_attr, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x_attr, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_attr, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_xy_attr, 3, .production_id = 16),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 15),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__geometry_y_attr, 2, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_attr, 2, .production_id = 9),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_attr, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, .production_id = 13),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 1),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 17),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_x_attr, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_y_attr, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_xy_attr, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__absolute_x_attr, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [949] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
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
