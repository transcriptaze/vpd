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
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 18

enum {
  sym_comment = 1,
  anon_sym_new = 2,
  anon_sym_set = 3,
  anon_sym_module = 4,
  anon_sym_name = 5,
  anon_sym_height = 6,
  anon_sym_width = 7,
  anon_sym_part = 8,
  anon_sym_decorate = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_with = 12,
  anon_sym_delete = 13,
  anon_sym_guide = 14,
  anon_sym_input = 15,
  aux_sym__input_id_token1 = 16,
  anon_sym_output = 17,
  anon_sym_parameter = 18,
  anon_sym_light = 19,
  anon_sym_widget = 20,
  anon_sym_label = 21,
  aux_sym__label_id_token1 = 22,
  anon_sym_decoration = 23,
  anon_sym_load = 24,
  anon_sym_project = 25,
  anon_sym_script = 26,
  anon_sym_save = 27,
  anon_sym_export = 28,
  anon_sym_timestamp = 29,
  anon_sym_COMMA = 30,
  anon_sym_gzip = 31,
  aux_sym_parameter_token1 = 32,
  sym_fontsize = 33,
  anon_sym_left = 34,
  anon_sym_centre = 35,
  anon_sym_center = 36,
  anon_sym_right = 37,
  anon_sym_top = 38,
  anon_sym_middle = 39,
  anon_sym_baseline = 40,
  anon_sym_bottom = 41,
  anon_sym_scale = 42,
  aux_sym__scale_token1 = 43,
  anon_sym_stretch = 44,
  anon_sym_origin = 45,
  anon_sym_AT = 46,
  aux_sym_origin_token1 = 47,
  aux_sym__originx_token1 = 48,
  aux_sym__originy_token1 = 49,
  anon_sym_background = 50,
  anon_sym_none = 51,
  sym_rgb = 52,
  sym_rgba = 53,
  anon_sym_panel = 54,
  anon_sym_svg = 55,
  anon_sym_dark = 56,
  sym_height = 57,
  sym_width = 58,
  aux_sym_identifier_token1 = 59,
  anon_sym_vertical = 60,
  anon_sym_horizontal = 61,
  aux_sym_offset_token1 = 62,
  anon_sym_DQUOTE = 63,
  aux_sym__string_token1 = 64,
  anon_sym_SQUOTE = 65,
  aux_sym__string_token2 = 66,
  aux_sym_absolute_token1 = 67,
  aux_sym_relative_token1 = 68,
  sym_command = 69,
  sym_new = 70,
  sym_set = 71,
  sym__module_attr = 72,
  sym__input_attr = 73,
  sym_decorate = 74,
  sym_delete = 75,
  sym__guideline_id = 76,
  sym__input_id = 77,
  sym__output_id = 78,
  sym__parameter_id = 79,
  sym__light_id = 80,
  sym__widget_id = 81,
  sym__label_id = 82,
  sym__decoration_id = 83,
  sym__component_id = 84,
  sym_load = 85,
  sym_save = 86,
  sym_export = 87,
  sym_project = 88,
  sym_script = 89,
  sym__entity = 90,
  sym__input = 91,
  sym__output = 92,
  sym__parameter = 93,
  sym__light = 94,
  sym__widget = 95,
  sym_module = 96,
  sym_input = 97,
  sym_output = 98,
  sym_parameter = 99,
  sym_light = 100,
  sym_widget = 101,
  sym__component = 102,
  sym_label = 103,
  sym_font = 104,
  sym__align = 105,
  sym_halign = 106,
  sym_valign = 107,
  sym_colour = 108,
  sym_decoration = 109,
  sym__scale = 110,
  sym_stretch = 111,
  sym_origin = 112,
  sym__originx = 113,
  sym__originy = 114,
  sym_background = 115,
  sym_panel = 116,
  sym_svg = 117,
  sym_name = 118,
  sym_part = 119,
  sym_guide = 120,
  sym_identifier = 121,
  sym_vertical = 122,
  sym_horizontal = 123,
  sym_geometry = 124,
  sym_offset = 125,
  sym__offset = 126,
  sym_guideline = 127,
  sym__string = 128,
  sym_absolute = 129,
  sym_relative = 130,
  sym__decorate = 131,
  sym__relative = 132,
  sym_x = 133,
  sym_y = 134,
  aux_sym_command_repeat1 = 135,
  alias_sym_dy = 136,
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
  [anon_sym_part] = "part",
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
  [anon_sym_decoration] = "decoration",
  [anon_sym_load] = "load",
  [anon_sym_project] = "project",
  [anon_sym_script] = "script",
  [anon_sym_save] = "save",
  [anon_sym_export] = "export",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_COMMA] = ",",
  [anon_sym_gzip] = "gzip",
  [aux_sym_parameter_token1] = "parameter_token1",
  [sym_fontsize] = "fontsize",
  [anon_sym_left] = "left",
  [anon_sym_centre] = "centre",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_top] = "top",
  [anon_sym_middle] = "middle",
  [anon_sym_baseline] = "baseline",
  [anon_sym_bottom] = "bottom",
  [anon_sym_scale] = "scale",
  [aux_sym__scale_token1] = "scale",
  [anon_sym_stretch] = "stretch",
  [anon_sym_origin] = "origin",
  [anon_sym_AT] = "@",
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
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [aux_sym_offset_token1] = "offset_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_token2] = "string",
  [aux_sym_absolute_token1] = "x",
  [aux_sym_relative_token1] = "x",
  [sym_command] = "command",
  [sym_new] = "new",
  [sym_set] = "set",
  [sym__module_attr] = "module",
  [sym__input_attr] = "_input_attr",
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
  [anon_sym_part] = anon_sym_part,
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
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_gzip] = anon_sym_gzip,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [sym_fontsize] = sym_fontsize,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_baseline] = anon_sym_baseline,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_scale] = anon_sym_scale,
  [aux_sym__scale_token1] = aux_sym__scale_token1,
  [anon_sym_stretch] = anon_sym_stretch,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_AT] = anon_sym_AT,
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
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [aux_sym_offset_token1] = aux_sym_offset_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_token2] = aux_sym__string_token1,
  [aux_sym_absolute_token1] = sym_x,
  [aux_sym_relative_token1] = sym_x,
  [sym_command] = sym_command,
  [sym_new] = sym_new,
  [sym_set] = sym_set,
  [sym__module_attr] = sym_module,
  [sym__input_attr] = sym__input_attr,
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
  [anon_sym_part] = {
    .visible = true,
    .named = false,
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
  [anon_sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_middle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_baseline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
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
  [anon_sym_AT] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token2] = {
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
  [sym__input_attr] = {
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
    [1] = aux_sym__originx_token1,
  },
  [6] = {
    [1] = sym_light,
  },
  [7] = {
    [1] = sym_absolute,
  },
  [8] = {
    [2] = sym_y,
  },
  [9] = {
    [1] = sym_absolute,
    [2] = sym_x,
    [4] = sym_y,
  },
  [10] = {
    [3] = sym_y,
  },
  [11] = {
    [2] = alias_sym_dy,
  },
  [12] = {
    [1] = sym_input,
  },
  [13] = {
    [1] = sym_output,
  },
  [14] = {
    [1] = sym_parameter,
  },
  [15] = {
    [1] = sym_widget,
  },
  [16] = {
    [1] = sym_label,
  },
  [17] = {
    [2] = sym_x,
    [4] = sym_y,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [39] = 8,
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
  [54] = 54,
  [55] = 55,
  [56] = 17,
  [57] = 57,
  [58] = 58,
  [59] = 17,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 14,
  [64] = 64,
  [65] = 65,
  [66] = 12,
  [67] = 67,
  [68] = 68,
  [69] = 13,
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
  [122] = 46,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 133,
  [134] = 28,
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
  [253] = 239,
  [254] = 248,
  [255] = 244,
  [256] = 200,
  [257] = 220,
  [258] = 217,
  [259] = 234,
  [260] = 245,
  [261] = 197,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(484);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(487);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '0') ADVANCE(413);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(253);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(123);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(484);
      if (lookahead == '\'') ADVANCE(487);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(462);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(483);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'U') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '5') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '8') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == 'H') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(163);
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 24:
      if (lookahead == ';') ADVANCE(288);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == '@') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(235);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(302);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 139:
      if (lookahead == 'j') ADVANCE(74);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(433);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(483);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(490);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == 'z') ADVANCE(129);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 258:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 259:
      if (lookahead == 'w') ADVANCE(289);
      END_STATE();
    case 260:
      if (lookahead == 'x') ADVANCE(202);
      END_STATE();
    case 261:
      if (lookahead == 'z') ADVANCE(188);
      END_STATE();
    case 262:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(483);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 282:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 283:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 284:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(345);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 285:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 286:
      if (eof) ADVANCE(287);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_part);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_decorate);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_decorate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_guide);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'g') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'h') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'm') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'v') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'w') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == 'x') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__input_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_widget);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__label_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_fontsize);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_centre);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_centre);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_center);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_middle);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_middle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_baseline);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_baseline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == 'H') ADVANCE(422);
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == '.') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__scale_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_origin_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__originx_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__originy_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_rgb);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_rgb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_rgba);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_panel);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_svg);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_dark);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_height);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '5') ADVANCE(163);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(478);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_absolute_token1);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_relative_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 284},
  [3] = {.lex_state = 284},
  [4] = {.lex_state = 286},
  [5] = {.lex_state = 286},
  [6] = {.lex_state = 286},
  [7] = {.lex_state = 286},
  [8] = {.lex_state = 284},
  [9] = {.lex_state = 286},
  [10] = {.lex_state = 286},
  [11] = {.lex_state = 284},
  [12] = {.lex_state = 284},
  [13] = {.lex_state = 284},
  [14] = {.lex_state = 284},
  [15] = {.lex_state = 284},
  [16] = {.lex_state = 284},
  [17] = {.lex_state = 284},
  [18] = {.lex_state = 284},
  [19] = {.lex_state = 284},
  [20] = {.lex_state = 284},
  [21] = {.lex_state = 286},
  [22] = {.lex_state = 286},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 286},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 286},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 286},
  [39] = {.lex_state = 285},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 286},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 285},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 285},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 286},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 285},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 285},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 285},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 285},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 25},
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
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 286},
  [137] = {.lex_state = 49},
  [138] = {.lex_state = 49},
  [139] = {.lex_state = 286},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 26},
  [142] = {.lex_state = 284},
  [143] = {.lex_state = 284},
  [144] = {.lex_state = 284},
  [145] = {.lex_state = 284},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 284},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 284},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 284},
  [160] = {.lex_state = 284},
  [161] = {.lex_state = 284},
  [162] = {.lex_state = 284},
  [163] = {.lex_state = 284},
  [164] = {.lex_state = 284},
  [165] = {.lex_state = 284},
  [166] = {.lex_state = 284},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 26},
  [171] = {.lex_state = 26},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 266},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 284},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 286},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 284},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 286},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 284},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 284},
  [202] = {.lex_state = 286},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 284},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 286},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 488},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 485},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 284},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 285},
  [232] = {.lex_state = 285},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 285},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 485},
  [258] = {.lex_state = 488},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 5},
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
    [anon_sym_part] = ACTIONS(1),
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
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [sym_fontsize] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_baseline] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [aux_sym__scale_token1] = ACTIONS(1),
    [anon_sym_stretch] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_absolute_token1] = ACTIONS(1),
    [aux_sym_relative_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(249),
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
    ACTIONS(25), 1,
      aux_sym__input_id_token1,
    ACTIONS(27), 1,
      sym_fontsize,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(4), 1,
      sym_font,
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(36), 1,
      sym__align,
    STATE(76), 1,
      sym_colour,
    ACTIONS(21), 2,
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
      anon_sym_baseline,
      anon_sym_bottom,
    ACTIONS(23), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [53] = 13,
    ACTIONS(25), 1,
      aux_sym__input_id_token1,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    ACTIONS(41), 1,
      sym_fontsize,
    STATE(5), 1,
      sym_font,
    STATE(33), 1,
      sym__align,
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(108), 1,
      sym_colour,
    ACTIONS(37), 2,
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
      anon_sym_baseline,
      anon_sym_bottom,
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
    ACTIONS(45), 1,
      sym_fontsize,
    STATE(29), 1,
      sym__align,
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(112), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(41), 1,
      sym__align,
    STATE(79), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(41), 1,
      sym__align,
    STATE(79), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(40), 1,
      sym__align,
    STATE(116), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
  [280] = 4,
    ACTIONS(61), 1,
      aux_sym_offset_token1,
    STATE(12), 1,
      sym_offset,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(59), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [312] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(36), 1,
      sym__align,
    STATE(76), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
  [354] = 9,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(29), 1,
      sym__align,
    STATE(34), 1,
      sym_halign,
    STATE(35), 1,
      sym_valign,
    STATE(112), 1,
      sym_colour,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
  [396] = 2,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_fontsize,
      sym_rgba,
    ACTIONS(65), 17,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
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
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgb,
  [656] = 2,
    ACTIONS(105), 1,
      sym_rgb,
    ACTIONS(103), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      sym_fontsize,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
      sym_rgba,
  [681] = 9,
    ACTIONS(107), 1,
      anon_sym_module,
    ACTIONS(109), 1,
      anon_sym_guide,
    ACTIONS(111), 1,
      anon_sym_input,
    ACTIONS(113), 1,
      anon_sym_output,
    ACTIONS(115), 1,
      anon_sym_light,
    ACTIONS(117), 1,
      anon_sym_widget,
    ACTIONS(119), 1,
      anon_sym_label,
    ACTIONS(121), 1,
      aux_sym_parameter_token1,
    STATE(117), 9,
      sym__entity,
      sym_module,
      sym_input,
      sym_output,
      sym_parameter,
      sym_light,
      sym_widget,
      sym_label,
      sym_guide,
  [717] = 10,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_new,
    ACTIONS(131), 1,
      anon_sym_set,
    ACTIONS(134), 1,
      anon_sym_decorate,
    ACTIONS(137), 1,
      anon_sym_delete,
    ACTIONS(140), 1,
      anon_sym_load,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(146), 1,
      anon_sym_export,
    STATE(23), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [755] = 8,
    ACTIONS(151), 1,
      aux_sym_identifier_token1,
    ACTIONS(153), 1,
      anon_sym_vertical,
    ACTIONS(155), 1,
      anon_sym_horizontal,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    STATE(107), 1,
      sym_offset,
    STATE(180), 1,
      sym_identifier,
    STATE(106), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(149), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [789] = 10,
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
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym_comment,
    STATE(23), 8,
      sym_new,
      sym_set,
      sym_decorate,
      sym_delete,
      sym_load,
      sym_save,
      sym_export,
      aux_sym_command_repeat1,
  [827] = 9,
    ACTIONS(163), 1,
      anon_sym_guide,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(167), 1,
      anon_sym_output,
    ACTIONS(169), 1,
      anon_sym_parameter,
    ACTIONS(171), 1,
      anon_sym_light,
    ACTIONS(173), 1,
      anon_sym_widget,
    ACTIONS(175), 1,
      anon_sym_label,
    ACTIONS(177), 1,
      anon_sym_decoration,
    STATE(111), 8,
      sym__guideline_id,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
      sym__label_id,
      sym__decoration_id,
  [862] = 6,
    ACTIONS(151), 1,
      aux_sym_identifier_token1,
    ACTIONS(153), 1,
      anon_sym_vertical,
    ACTIONS(155), 1,
      anon_sym_horizontal,
    STATE(24), 1,
      sym_identifier,
    STATE(92), 4,
      sym_vertical,
      sym_horizontal,
      sym_geometry,
      sym_guideline,
    ACTIONS(149), 7,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [890] = 2,
    ACTIONS(181), 1,
      sym_width,
    ACTIONS(179), 13,
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
  [909] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(116), 1,
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
  [930] = 2,
    ACTIONS(185), 1,
      sym_rgb,
    ACTIONS(183), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [947] = 1,
    ACTIONS(187), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_name,
      anon_sym_part,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [962] = 3,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    STATE(72), 1,
      sym_offset,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [981] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(79), 1,
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
  [1002] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      sym_rgb,
    ACTIONS(191), 10,
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
  [1021] = 3,
    ACTIONS(195), 1,
      sym_rgb,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(191), 10,
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
  [1040] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(112), 1,
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
  [1061] = 6,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      aux_sym_relative_token1,
    STATE(250), 1,
      sym_x,
    STATE(3), 3,
      sym_absolute,
      sym_relative,
      sym__decorate,
    ACTIONS(201), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1086] = 3,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    STATE(73), 1,
      sym_offset,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1105] = 4,
    ACTIONS(209), 1,
      aux_sym_offset_token1,
    STATE(66), 1,
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
  [1126] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(119), 1,
      sym_colour,
    ACTIONS(211), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1147] = 4,
    ACTIONS(33), 1,
      sym_rgb,
    ACTIONS(35), 1,
      sym_rgba,
    STATE(76), 1,
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
  [1168] = 2,
    ACTIONS(215), 1,
      sym_rgb,
    ACTIONS(213), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
      sym_rgba,
  [1185] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym__scale,
    STATE(98), 1,
      sym_stretch,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1206] = 3,
    ACTIONS(223), 1,
      anon_sym_timestamp,
    ACTIONS(225), 1,
      anon_sym_gzip,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1224] = 3,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    STATE(124), 1,
      sym_offset,
    ACTIONS(227), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1242] = 2,
    ACTIONS(231), 1,
      aux_sym_offset_token1,
    ACTIONS(229), 10,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
      anon_sym_vertical,
      anon_sym_horizontal,
  [1258] = 4,
    ACTIONS(237), 1,
      aux_sym__input_id_token1,
    STATE(74), 1,
      sym_part,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(235), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1278] = 3,
    ACTIONS(241), 1,
      anon_sym_light,
    ACTIONS(243), 1,
      anon_sym_dark,
    ACTIONS(239), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1296] = 3,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
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
  [1314] = 4,
    ACTIONS(237), 1,
      aux_sym__input_id_token1,
    STATE(125), 1,
      sym_part,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(251), 7,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1334] = 2,
    ACTIONS(255), 1,
      sym_rgb,
    ACTIONS(253), 10,
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
  [1350] = 3,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    STATE(96), 1,
      sym_offset,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1368] = 1,
    ACTIONS(259), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1381] = 6,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(167), 1,
      anon_sym_output,
    ACTIONS(169), 1,
      anon_sym_parameter,
    ACTIONS(171), 1,
      anon_sym_light,
    ACTIONS(173), 1,
      anon_sym_widget,
    STATE(251), 5,
      sym__input_id,
      sym__output_id,
      sym__parameter_id,
      sym__light_id,
      sym__widget_id,
  [1404] = 1,
    ACTIONS(261), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1417] = 1,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1430] = 2,
    ACTIONS(265), 1,
      anon_sym_COMMA,
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
  [1445] = 2,
    ACTIONS(269), 1,
      anon_sym_timestamp,
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
  [1460] = 2,
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
  [1475] = 5,
    ACTIONS(271), 1,
      anon_sym_AT,
    ACTIONS(273), 1,
      aux_sym_relative_token1,
    STATE(235), 1,
      sym_x,
    STATE(50), 2,
      sym_absolute,
      sym_relative,
    ACTIONS(201), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [1496] = 1,
    ACTIONS(275), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1509] = 1,
    ACTIONS(277), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_RPAREN,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1522] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(77), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1537] = 2,
    ACTIONS(279), 1,
      anon_sym_COMMA,
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
  [1552] = 6,
    ACTIONS(281), 1,
      anon_sym_input,
    ACTIONS(283), 1,
      anon_sym_output,
    ACTIONS(285), 1,
      anon_sym_parameter,
    ACTIONS(287), 1,
      anon_sym_light,
    ACTIONS(289), 1,
      anon_sym_widget,
    STATE(203), 5,
      sym__input,
      sym__output,
      sym__parameter,
      sym__light,
      sym__widget,
  [1575] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(69), 8,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      aux_sym__input_id_token1,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1590] = 2,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1605] = 2,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1620] = 2,
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
  [1635] = 2,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1650] = 1,
    ACTIONS(301), 10,
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
  [1663] = 1,
    ACTIONS(303), 10,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
      anon_sym_COMMA,
  [1676] = 1,
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
      anon_sym_COMMA,
  [1689] = 1,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1701] = 1,
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
  [1713] = 1,
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
  [1725] = 1,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1737] = 1,
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
  [1749] = 1,
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
  [1761] = 1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1773] = 1,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1785] = 6,
    ACTIONS(165), 1,
      anon_sym_input,
    ACTIONS(317), 1,
      anon_sym_module,
    ACTIONS(319), 1,
      anon_sym_origin,
    ACTIONS(321), 1,
      anon_sym_background,
    STATE(167), 1,
      sym__input_id,
    STATE(113), 4,
      sym__module_attr,
      sym__input_attr,
      sym_origin,
      sym_background,
  [1807] = 1,
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
  [1819] = 1,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1831] = 1,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1843] = 1,
    ACTIONS(329), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1855] = 1,
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
  [1867] = 1,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1879] = 1,
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
  [1891] = 1,
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
  [1903] = 1,
    ACTIONS(339), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1915] = 1,
    ACTIONS(341), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1927] = 1,
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
  [1939] = 1,
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
  [1951] = 6,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    ACTIONS(349), 1,
      anon_sym_origin,
    ACTIONS(351), 1,
      anon_sym_AT,
    ACTIONS(353), 1,
      aux_sym_origin_token1,
    STATE(101), 1,
      sym_offset,
    ACTIONS(347), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [1973] = 1,
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
  [1985] = 1,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [1997] = 1,
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
  [2009] = 1,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2021] = 1,
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
  [2033] = 1,
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
  [2045] = 1,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2057] = 1,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2069] = 1,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2081] = 1,
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
  [2093] = 1,
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
  [2105] = 1,
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
  [2117] = 1,
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
  [2129] = 1,
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
  [2141] = 1,
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
  [2153] = 1,
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
  [2165] = 1,
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
  [2177] = 1,
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
  [2189] = 1,
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
  [2201] = 1,
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
  [2213] = 1,
    ACTIONS(211), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_new,
      anon_sym_set,
      anon_sym_decorate,
      anon_sym_delete,
      anon_sym_load,
      anon_sym_save,
      anon_sym_export,
  [2225] = 1,
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
  [2237] = 1,
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
  [2249] = 1,
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
  [2261] = 1,
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
  [2273] = 1,
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
  [2285] = 1,
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
  [2297] = 1,
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
  [2309] = 1,
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
  [2321] = 1,
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
  [2333] = 1,
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
  [2345] = 1,
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
  [2357] = 1,
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
  [2369] = 1,
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
  [2381] = 1,
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
  [2393] = 1,
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
  [2405] = 2,
    ACTIONS(399), 3,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(417), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2418] = 6,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    ACTIONS(419), 1,
      anon_sym_origin,
    ACTIONS(421), 1,
      anon_sym_AT,
    ACTIONS(423), 1,
      aux_sym_origin_token1,
    STATE(104), 1,
      sym_offset,
    ACTIONS(347), 3,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
  [2439] = 2,
    ACTIONS(179), 2,
      anon_sym_AT,
      aux_sym_relative_token1,
    ACTIONS(181), 5,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
      aux_sym_identifier_token1,
  [2451] = 6,
    ACTIONS(425), 1,
      anon_sym_input,
    ACTIONS(427), 1,
      anon_sym_output,
    ACTIONS(429), 1,
      anon_sym_parameter,
    ACTIONS(431), 1,
      anon_sym_light,
    ACTIONS(433), 1,
      anon_sym_widget,
    ACTIONS(435), 1,
      anon_sym_label,
  [2470] = 2,
    STATE(51), 1,
      sym_valign,
    ACTIONS(49), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_baseline,
      anon_sym_bottom,
  [2480] = 2,
    STATE(47), 1,
      sym_y,
    ACTIONS(437), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2490] = 2,
    STATE(2), 1,
      sym_y,
    ACTIONS(439), 4,
      anon_sym_top,
      anon_sym_middle,
      anon_sym_bottom,
      aux_sym_identifier_token1,
  [2500] = 2,
    STATE(51), 1,
      sym_halign,
    ACTIONS(47), 4,
      anon_sym_left,
      anon_sym_centre,
      anon_sym_center,
      anon_sym_right,
  [2510] = 5,
    ACTIONS(441), 1,
      aux_sym__input_id_token1,
    ACTIONS(443), 1,
      anon_sym_none,
    ACTIONS(445), 1,
      sym_rgb,
    ACTIONS(447), 1,
      sym_rgba,
    STATE(77), 1,
      sym_name,
  [2526] = 5,
    ACTIONS(449), 1,
      anon_sym_AT,
    ACTIONS(451), 1,
      aux_sym__originx_token1,
    ACTIONS(453), 1,
      aux_sym__originy_token1,
    STATE(205), 1,
      sym__originy,
    STATE(212), 1,
      sym__originx,
  [2542] = 4,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(221), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2555] = 4,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2568] = 4,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2581] = 4,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym__offset,
    STATE(229), 1,
      sym__relative,
  [2594] = 3,
    ACTIONS(465), 1,
      anon_sym_project,
    ACTIONS(467), 1,
      anon_sym_script,
    STATE(100), 2,
      sym_project,
      sym_script,
  [2605] = 4,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2618] = 4,
    ACTIONS(471), 1,
      aux_sym__label_id_token1,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym__string,
  [2631] = 3,
    ACTIONS(477), 1,
      anon_sym_name,
    ACTIONS(479), 1,
      anon_sym_height,
    ACTIONS(481), 1,
      anon_sym_width,
  [2641] = 3,
    ACTIONS(483), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(90), 1,
      sym__component,
  [2651] = 3,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(207), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2661] = 3,
    ACTIONS(483), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(84), 1,
      sym__component,
  [2671] = 3,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym__string,
  [2681] = 3,
    ACTIONS(483), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(86), 1,
      sym__component,
  [2691] = 3,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      aux_sym__label_id_token1,
    STATE(193), 1,
      sym__component_id,
  [2701] = 3,
    ACTIONS(483), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(88), 1,
      sym__component,
  [2711] = 3,
    ACTIONS(483), 1,
      aux_sym__input_id_token1,
    STATE(60), 1,
      sym_name,
    STATE(89), 1,
      sym__component,
  [2721] = 3,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(43), 1,
      sym_name,
    STATE(81), 1,
      sym_decoration,
  [2731] = 3,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      sym_offset,
  [2741] = 3,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(208), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2751] = 3,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(209), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2761] = 3,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(210), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2771] = 3,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    ACTIONS(497), 1,
      aux_sym_origin_token1,
    STATE(99), 1,
      sym_offset,
  [2781] = 3,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(211), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2791] = 3,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    ACTIONS(499), 1,
      aux_sym_origin_token1,
    STATE(121), 1,
      sym_offset,
  [2801] = 3,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(206), 1,
      sym__relative,
    STATE(223), 1,
      sym__offset,
  [2811] = 2,
    ACTIONS(501), 1,
      anon_sym_name,
    ACTIONS(503), 1,
      anon_sym_part,
  [2818] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(145), 1,
      sym_name,
  [2825] = 2,
    ACTIONS(505), 1,
      anon_sym_project,
    ACTIONS(507), 1,
      anon_sym_script,
  [2832] = 2,
    ACTIONS(451), 1,
      aux_sym__originx_token1,
    STATE(75), 1,
      sym__originx,
  [2839] = 2,
    ACTIONS(453), 1,
      aux_sym__originy_token1,
    STATE(75), 1,
      sym__originy,
  [2846] = 2,
    ACTIONS(509), 1,
      anon_sym_panel,
    STATE(97), 1,
      sym_panel,
  [2853] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(183), 1,
      sym_name,
  [2860] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(166), 1,
      sym_name,
  [2867] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(151), 1,
      sym_name,
  [2874] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(160), 1,
      sym_name,
  [2881] = 2,
    ACTIONS(511), 1,
      aux_sym_identifier_token1,
    STATE(80), 1,
      sym_identifier,
  [2888] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(161), 1,
      sym_name,
  [2895] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(162), 1,
      sym_name,
  [2902] = 2,
    ACTIONS(157), 1,
      aux_sym_offset_token1,
    STATE(107), 1,
      sym_offset,
  [2909] = 1,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2914] = 2,
    ACTIONS(515), 1,
      anon_sym_svg,
    STATE(93), 1,
      sym_svg,
  [2921] = 2,
    ACTIONS(517), 1,
      sym_height,
    ACTIONS(519), 1,
      sym_width,
  [2928] = 2,
    ACTIONS(521), 1,
      anon_sym_scale,
    ACTIONS(523), 1,
      anon_sym_stretch,
  [2935] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(118), 1,
      sym_name,
  [2942] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(164), 1,
      sym_name,
  [2949] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(126), 1,
      sym_name,
  [2956] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(144), 1,
      sym_name,
  [2963] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(143), 1,
      sym_name,
  [2970] = 2,
    ACTIONS(457), 1,
      aux_sym_offset_token1,
    STATE(218), 1,
      sym__offset,
  [2977] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(142), 1,
      sym_name,
  [2984] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(147), 1,
      sym_name,
  [2991] = 2,
    ACTIONS(493), 1,
      aux_sym__input_id_token1,
    STATE(128), 1,
      sym_name,
  [2998] = 2,
    ACTIONS(525), 1,
      sym_rgb,
    ACTIONS(527), 1,
      sym_rgba,
  [3005] = 2,
    ACTIONS(529), 1,
      aux_sym__input_id_token1,
    STATE(126), 1,
      sym_part,
  [3012] = 1,
    ACTIONS(531), 1,
      sym_width,
  [3016] = 1,
    ACTIONS(533), 1,
      aux_sym_absolute_token1,
  [3020] = 1,
    ACTIONS(535), 1,
      aux_sym__input_id_token1,
  [3024] = 1,
    ACTIONS(537), 1,
      aux_sym_origin_token1,
  [3028] = 1,
    ACTIONS(539), 1,
      aux_sym_absolute_token1,
  [3032] = 1,
    ACTIONS(541), 1,
      aux_sym_origin_token1,
  [3036] = 1,
    ACTIONS(543), 1,
      sym_width,
  [3040] = 1,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [3044] = 1,
    ACTIONS(547), 1,
      anon_sym_with,
  [3048] = 1,
    ACTIONS(549), 1,
      anon_sym_COMMA,
  [3052] = 1,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
  [3056] = 1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [3060] = 1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [3064] = 1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [3068] = 1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [3072] = 1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [3076] = 1,
    ACTIONS(563), 1,
      anon_sym_COMMA,
  [3080] = 1,
    ACTIONS(565), 1,
      aux_sym_origin_token1,
  [3084] = 1,
    ACTIONS(567), 1,
      sym_rgb,
  [3088] = 1,
    ACTIONS(531), 1,
      sym_height,
  [3092] = 1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [3096] = 1,
    ACTIONS(571), 1,
      aux_sym__string_token2,
  [3100] = 1,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [3104] = 1,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [3108] = 1,
    ACTIONS(577), 1,
      aux_sym__string_token1,
  [3112] = 1,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [3116] = 1,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
  [3120] = 1,
    ACTIONS(583), 1,
      anon_sym_COMMA,
  [3124] = 1,
    ACTIONS(585), 1,
      aux_sym_origin_token1,
  [3128] = 1,
    ACTIONS(587), 1,
      aux_sym__input_id_token1,
  [3132] = 1,
    ACTIONS(589), 1,
      aux_sym__input_id_token1,
  [3136] = 1,
    ACTIONS(591), 1,
      aux_sym__input_id_token1,
  [3140] = 1,
    ACTIONS(593), 1,
      aux_sym__input_id_token1,
  [3144] = 1,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [3148] = 1,
    ACTIONS(597), 1,
      anon_sym_timestamp,
  [3152] = 1,
    ACTIONS(599), 1,
      aux_sym__scale_token1,
  [3156] = 1,
    ACTIONS(601), 1,
      aux_sym__scale_token1,
  [3160] = 1,
    ACTIONS(523), 1,
      anon_sym_stretch,
  [3164] = 1,
    ACTIONS(603), 1,
      anon_sym_COMMA,
  [3168] = 1,
    ACTIONS(605), 1,
      anon_sym_COMMA,
  [3172] = 1,
    ACTIONS(607), 1,
      aux_sym__input_id_token1,
  [3176] = 1,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [3180] = 1,
    ACTIONS(611), 1,
      anon_sym_COMMA,
  [3184] = 1,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
  [3188] = 1,
    ACTIONS(567), 1,
      sym_rgba,
  [3192] = 1,
    ACTIONS(615), 1,
      aux_sym__scale_token1,
  [3196] = 1,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [3200] = 1,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
  [3204] = 1,
    ACTIONS(621), 1,
      aux_sym_relative_token1,
  [3208] = 1,
    ACTIONS(623), 1,
      anon_sym_COMMA,
  [3212] = 1,
    ACTIONS(625), 1,
      anon_sym_COMMA,
  [3216] = 1,
    ACTIONS(597), 1,
      anon_sym_gzip,
  [3220] = 1,
    ACTIONS(613), 1,
      anon_sym_SQUOTE,
  [3224] = 1,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
  [3228] = 1,
    ACTIONS(629), 1,
      anon_sym_COMMA,
  [3232] = 1,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
  [3236] = 1,
    ACTIONS(633), 1,
      anon_sym_COMMA,
  [3240] = 1,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
  [3244] = 1,
    ACTIONS(635), 1,
      anon_sym_SQUOTE,
  [3248] = 1,
    ACTIONS(637), 1,
      aux_sym_relative_token1,
  [3252] = 1,
    ACTIONS(639), 1,
      aux_sym_absolute_token1,
  [3256] = 1,
    ACTIONS(641), 1,
      aux_sym__string_token1,
  [3260] = 1,
    ACTIONS(643), 1,
      aux_sym__string_token2,
  [3264] = 1,
    ACTIONS(645), 1,
      anon_sym_COMMA,
  [3268] = 1,
    ACTIONS(647), 1,
      anon_sym_COMMA,
  [3272] = 1,
    ACTIONS(649), 1,
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
  [SMALL_STATE(9)] = 312,
  [SMALL_STATE(10)] = 354,
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
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 717,
  [SMALL_STATE(24)] = 755,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 890,
  [SMALL_STATE(29)] = 909,
  [SMALL_STATE(30)] = 930,
  [SMALL_STATE(31)] = 947,
  [SMALL_STATE(32)] = 962,
  [SMALL_STATE(33)] = 981,
  [SMALL_STATE(34)] = 1002,
  [SMALL_STATE(35)] = 1021,
  [SMALL_STATE(36)] = 1040,
  [SMALL_STATE(37)] = 1061,
  [SMALL_STATE(38)] = 1086,
  [SMALL_STATE(39)] = 1105,
  [SMALL_STATE(40)] = 1126,
  [SMALL_STATE(41)] = 1147,
  [SMALL_STATE(42)] = 1168,
  [SMALL_STATE(43)] = 1185,
  [SMALL_STATE(44)] = 1206,
  [SMALL_STATE(45)] = 1224,
  [SMALL_STATE(46)] = 1242,
  [SMALL_STATE(47)] = 1258,
  [SMALL_STATE(48)] = 1278,
  [SMALL_STATE(49)] = 1296,
  [SMALL_STATE(50)] = 1314,
  [SMALL_STATE(51)] = 1334,
  [SMALL_STATE(52)] = 1350,
  [SMALL_STATE(53)] = 1368,
  [SMALL_STATE(54)] = 1381,
  [SMALL_STATE(55)] = 1404,
  [SMALL_STATE(56)] = 1417,
  [SMALL_STATE(57)] = 1430,
  [SMALL_STATE(58)] = 1445,
  [SMALL_STATE(59)] = 1460,
  [SMALL_STATE(60)] = 1475,
  [SMALL_STATE(61)] = 1496,
  [SMALL_STATE(62)] = 1509,
  [SMALL_STATE(63)] = 1522,
  [SMALL_STATE(64)] = 1537,
  [SMALL_STATE(65)] = 1552,
  [SMALL_STATE(66)] = 1575,
  [SMALL_STATE(67)] = 1590,
  [SMALL_STATE(68)] = 1605,
  [SMALL_STATE(69)] = 1620,
  [SMALL_STATE(70)] = 1635,
  [SMALL_STATE(71)] = 1650,
  [SMALL_STATE(72)] = 1663,
  [SMALL_STATE(73)] = 1676,
  [SMALL_STATE(74)] = 1689,
  [SMALL_STATE(75)] = 1701,
  [SMALL_STATE(76)] = 1713,
  [SMALL_STATE(77)] = 1725,
  [SMALL_STATE(78)] = 1737,
  [SMALL_STATE(79)] = 1749,
  [SMALL_STATE(80)] = 1761,
  [SMALL_STATE(81)] = 1773,
  [SMALL_STATE(82)] = 1785,
  [SMALL_STATE(83)] = 1807,
  [SMALL_STATE(84)] = 1819,
  [SMALL_STATE(85)] = 1831,
  [SMALL_STATE(86)] = 1843,
  [SMALL_STATE(87)] = 1855,
  [SMALL_STATE(88)] = 1867,
  [SMALL_STATE(89)] = 1879,
  [SMALL_STATE(90)] = 1891,
  [SMALL_STATE(91)] = 1903,
  [SMALL_STATE(92)] = 1915,
  [SMALL_STATE(93)] = 1927,
  [SMALL_STATE(94)] = 1939,
  [SMALL_STATE(95)] = 1951,
  [SMALL_STATE(96)] = 1973,
  [SMALL_STATE(97)] = 1985,
  [SMALL_STATE(98)] = 1997,
  [SMALL_STATE(99)] = 2009,
  [SMALL_STATE(100)] = 2021,
  [SMALL_STATE(101)] = 2033,
  [SMALL_STATE(102)] = 2045,
  [SMALL_STATE(103)] = 2057,
  [SMALL_STATE(104)] = 2069,
  [SMALL_STATE(105)] = 2081,
  [SMALL_STATE(106)] = 2093,
  [SMALL_STATE(107)] = 2105,
  [SMALL_STATE(108)] = 2117,
  [SMALL_STATE(109)] = 2129,
  [SMALL_STATE(110)] = 2141,
  [SMALL_STATE(111)] = 2153,
  [SMALL_STATE(112)] = 2165,
  [SMALL_STATE(113)] = 2177,
  [SMALL_STATE(114)] = 2189,
  [SMALL_STATE(115)] = 2201,
  [SMALL_STATE(116)] = 2213,
  [SMALL_STATE(117)] = 2225,
  [SMALL_STATE(118)] = 2237,
  [SMALL_STATE(119)] = 2249,
  [SMALL_STATE(120)] = 2261,
  [SMALL_STATE(121)] = 2273,
  [SMALL_STATE(122)] = 2285,
  [SMALL_STATE(123)] = 2297,
  [SMALL_STATE(124)] = 2309,
  [SMALL_STATE(125)] = 2321,
  [SMALL_STATE(126)] = 2333,
  [SMALL_STATE(127)] = 2345,
  [SMALL_STATE(128)] = 2357,
  [SMALL_STATE(129)] = 2369,
  [SMALL_STATE(130)] = 2381,
  [SMALL_STATE(131)] = 2393,
  [SMALL_STATE(132)] = 2405,
  [SMALL_STATE(133)] = 2418,
  [SMALL_STATE(134)] = 2439,
  [SMALL_STATE(135)] = 2451,
  [SMALL_STATE(136)] = 2470,
  [SMALL_STATE(137)] = 2480,
  [SMALL_STATE(138)] = 2490,
  [SMALL_STATE(139)] = 2500,
  [SMALL_STATE(140)] = 2510,
  [SMALL_STATE(141)] = 2526,
  [SMALL_STATE(142)] = 2542,
  [SMALL_STATE(143)] = 2555,
  [SMALL_STATE(144)] = 2568,
  [SMALL_STATE(145)] = 2581,
  [SMALL_STATE(146)] = 2594,
  [SMALL_STATE(147)] = 2605,
  [SMALL_STATE(148)] = 2618,
  [SMALL_STATE(149)] = 2631,
  [SMALL_STATE(150)] = 2641,
  [SMALL_STATE(151)] = 2651,
  [SMALL_STATE(152)] = 2661,
  [SMALL_STATE(153)] = 2671,
  [SMALL_STATE(154)] = 2681,
  [SMALL_STATE(155)] = 2691,
  [SMALL_STATE(156)] = 2701,
  [SMALL_STATE(157)] = 2711,
  [SMALL_STATE(158)] = 2721,
  [SMALL_STATE(159)] = 2731,
  [SMALL_STATE(160)] = 2741,
  [SMALL_STATE(161)] = 2751,
  [SMALL_STATE(162)] = 2761,
  [SMALL_STATE(163)] = 2771,
  [SMALL_STATE(164)] = 2781,
  [SMALL_STATE(165)] = 2791,
  [SMALL_STATE(166)] = 2801,
  [SMALL_STATE(167)] = 2811,
  [SMALL_STATE(168)] = 2818,
  [SMALL_STATE(169)] = 2825,
  [SMALL_STATE(170)] = 2832,
  [SMALL_STATE(171)] = 2839,
  [SMALL_STATE(172)] = 2846,
  [SMALL_STATE(173)] = 2853,
  [SMALL_STATE(174)] = 2860,
  [SMALL_STATE(175)] = 2867,
  [SMALL_STATE(176)] = 2874,
  [SMALL_STATE(177)] = 2881,
  [SMALL_STATE(178)] = 2888,
  [SMALL_STATE(179)] = 2895,
  [SMALL_STATE(180)] = 2902,
  [SMALL_STATE(181)] = 2909,
  [SMALL_STATE(182)] = 2914,
  [SMALL_STATE(183)] = 2921,
  [SMALL_STATE(184)] = 2928,
  [SMALL_STATE(185)] = 2935,
  [SMALL_STATE(186)] = 2942,
  [SMALL_STATE(187)] = 2949,
  [SMALL_STATE(188)] = 2956,
  [SMALL_STATE(189)] = 2963,
  [SMALL_STATE(190)] = 2970,
  [SMALL_STATE(191)] = 2977,
  [SMALL_STATE(192)] = 2984,
  [SMALL_STATE(193)] = 2991,
  [SMALL_STATE(194)] = 2998,
  [SMALL_STATE(195)] = 3005,
  [SMALL_STATE(196)] = 3012,
  [SMALL_STATE(197)] = 3016,
  [SMALL_STATE(198)] = 3020,
  [SMALL_STATE(199)] = 3024,
  [SMALL_STATE(200)] = 3028,
  [SMALL_STATE(201)] = 3032,
  [SMALL_STATE(202)] = 3036,
  [SMALL_STATE(203)] = 3040,
  [SMALL_STATE(204)] = 3044,
  [SMALL_STATE(205)] = 3048,
  [SMALL_STATE(206)] = 3052,
  [SMALL_STATE(207)] = 3056,
  [SMALL_STATE(208)] = 3060,
  [SMALL_STATE(209)] = 3064,
  [SMALL_STATE(210)] = 3068,
  [SMALL_STATE(211)] = 3072,
  [SMALL_STATE(212)] = 3076,
  [SMALL_STATE(213)] = 3080,
  [SMALL_STATE(214)] = 3084,
  [SMALL_STATE(215)] = 3088,
  [SMALL_STATE(216)] = 3092,
  [SMALL_STATE(217)] = 3096,
  [SMALL_STATE(218)] = 3100,
  [SMALL_STATE(219)] = 3104,
  [SMALL_STATE(220)] = 3108,
  [SMALL_STATE(221)] = 3112,
  [SMALL_STATE(222)] = 3116,
  [SMALL_STATE(223)] = 3120,
  [SMALL_STATE(224)] = 3124,
  [SMALL_STATE(225)] = 3128,
  [SMALL_STATE(226)] = 3132,
  [SMALL_STATE(227)] = 3136,
  [SMALL_STATE(228)] = 3140,
  [SMALL_STATE(229)] = 3144,
  [SMALL_STATE(230)] = 3148,
  [SMALL_STATE(231)] = 3152,
  [SMALL_STATE(232)] = 3156,
  [SMALL_STATE(233)] = 3160,
  [SMALL_STATE(234)] = 3164,
  [SMALL_STATE(235)] = 3168,
  [SMALL_STATE(236)] = 3172,
  [SMALL_STATE(237)] = 3176,
  [SMALL_STATE(238)] = 3180,
  [SMALL_STATE(239)] = 3184,
  [SMALL_STATE(240)] = 3188,
  [SMALL_STATE(241)] = 3192,
  [SMALL_STATE(242)] = 3196,
  [SMALL_STATE(243)] = 3200,
  [SMALL_STATE(244)] = 3204,
  [SMALL_STATE(245)] = 3208,
  [SMALL_STATE(246)] = 3212,
  [SMALL_STATE(247)] = 3216,
  [SMALL_STATE(248)] = 3220,
  [SMALL_STATE(249)] = 3224,
  [SMALL_STATE(250)] = 3228,
  [SMALL_STATE(251)] = 3232,
  [SMALL_STATE(252)] = 3236,
  [SMALL_STATE(253)] = 3240,
  [SMALL_STATE(254)] = 3244,
  [SMALL_STATE(255)] = 3248,
  [SMALL_STATE(256)] = 3252,
  [SMALL_STATE(257)] = 3256,
  [SMALL_STATE(258)] = 3260,
  [SMALL_STATE(259)] = 3264,
  [SMALL_STATE(260)] = 3268,
  [SMALL_STATE(261)] = 3272,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 1, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_y, 2, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_y, 2, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 4, .production_id = 10),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 4, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, .production_id = 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 14),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 13),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 12),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decorate, 5, .production_id = 15),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(82),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(243),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(169),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(146),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(172),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halign, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halign, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_id, 2, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 8),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valign, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valign, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__align, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__align, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 1, .production_id = 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light_id, 2, .production_id = 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget_id, 2, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_id, 2, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_id, 2, .production_id = 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originx, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__originy, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__guideline_id, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_id, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_light, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 2, .production_id = 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 5, .production_id = 9),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guide, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guideline, 2, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3, .production_id = 7),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_attr, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 9),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stretch, 6, .production_id = 17),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertical, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geometry, 3, .production_id = 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_attr, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_id, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2, .production_id = 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_svg, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 1, .production_id = 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_id, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__light, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative, 3, .production_id = 11),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__widget, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x, 2, .production_id = 3),
  [627] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
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
