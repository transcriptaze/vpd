module.exports = grammar({
  name: 'help',

  rules: {
    command: $ => repeat(
      choice(
        $.new,
        $.set,
        $.decorate,
        $.delete,
        $.load,
        $.unload,
        $.save,
        $.export,
        $.list,
      ),
    ),

    // ... new
    new: $ => seq(
      'new',
      optional(
        choice(
          $.module,
          alias($._input_entity,     $.input),
          alias($._output_entity,    $.output),
          alias($._parameter_entity, $.parameter),
          alias($._light_entity,     $.light),
          alias($._widget_entity,    $.widget),
          $.label,
          alias($._guide_entity,     $.guide),
        ),
      ),
    ),

    module: $ => seq(
      'module',
      optional(
        seq(
          $.name,
          optional($.height),
          optional($.width),
        ),
      )
    ),

    _input_entity: $ => seq(
      'input',
      optional($._component_entity),
    ),

    _output_entity: $ => seq(
      'output',
      optional($._component_entity),
    ),

    _parameter_entity: $ => seq(
      'parameter',
      optional($._component_entity),
    ),

    _light_entity: $ => seq(
      'light',
      optional($._component_entity),
    ),

    _widget_entity: $ => seq(
      'widget',
      optional($._component_entity),
    ),

    _component_entity: $ => seq(
      $.name,
      optional(
        seq(
          $.xy,
          optional($.part),
        ),
      ),
    ),

    _guide_entity: $ => seq(
      'guide',
      optional(
        choice(
          $._new_guide_orientation,
          $._new_guideline_geometry,
          $._new_guideline_guide,
        ),
      ),
    ),

    _new_guide_orientation: $ => seq(
      alias(choice('vertical','horizontal'),$.orientation),
      optional(
        choice(
          $._new_guideline_absolute,
          $._new_guideline_relative,
        ),
      ),
    ),

    _new_guideline_absolute: $ => seq(
      alias('@',$.absolute),
      optional(
        alias(/([0-9]+)([.][0-9]*)?(mm|h|H)/,$.offset)
      ),
    ),

    _new_guideline_relative: $ => seq(
        alias(/([0-9]+)([.][0-9]*)?(mm|h|H)/,$.offset)
    ),

    _new_guideline_geometry: $ => seq(
      alias(choice('left','centre','center','right','top','middle','bottom'),$.reference),
      optional(
        alias(/([+-][0-9]+)([.][0-9]*)?(mm|h|H)/,$.offset)
      ),
    ),

    _new_guideline_guide: $ => seq(
      alias(/[a-zA-Z][a-zA-Z0-9]*/,$.reference),
      optional(
        alias(/([+-][0-9]+)([.][0-9]*)?(mm|h|H)/,$.offset)
      ),
    ),

    height: $ => /1U|128.5mm/,
    width: $ => /[1-9][0-9]*H|[1-9][0-9]([.][0-9]+)?mm/,


    // ... set
    set: $ => seq(
      'set',
      optional (
        choice (
          $.origin,
          alias($._module_attr,$.module),
          $.background,
          $._component_attr,
          $._label_attr,
          $._decoration_attr,
          $._guideline_attr,
        ),
      )
    ),

    _module_attr: $ => seq(
      'module',
      optional(
        choice(
          seq('name', $.name),
          seq('height', $.height),
          seq('width', $.width),
        ),
      ),
    ),

    _component_attr: $ => seq(
      choice (
        alias($._input_id,     $.input),
        alias($._output_id,    $.output),
        alias($._parameter_id, $.parameter),
        alias($._light_id,     $.light),
        alias($._widget_id,    $.widget),
      ),
      optional(
        choice(
          seq('name', optional($.name)),
          seq('x',    optional(alias($._x_attr, $.x))),
          seq('y',    optional(alias($._y_attr, $.y))),
          seq('xy',   optional(alias($._xy_attr, $.xy))),
          seq('part', optional($.part)),
        ),
      ),
    ),

    _label_attr: $ => seq(
      alias($._label_id, $.label),
      optional(
        choice(
          seq('text',   optional($.string)),
          seq('x',      optional(alias($._x_attr, $.x))),
          seq('y',      optional(alias($._y_attr, $.y))),
          seq('xy',     optional(alias($._xy_attr, $.xy))),
          seq('font',   optional($.font)),
          seq('size',   optional($.fontsize)),
          seq('halign', optional($.halign)),
          seq('valign', optional($.valign)),
          seq('align',  optional($._align)),
          seq('colour', optional($.colour)),
          seq('color',  optional($.colour)),
        ),
      ),
    ),

    _decoration_attr: $ => seq(
      alias($._decoration_id, $.decoration),
      optional(
        choice(
          seq('x', optional($._offset_attr)),
          seq('y', optional($._offset_attr)),
          seq('xy',optional(seq($._offset_attr,',',$._offset_attr))),
          $.stretch,
          $.scale,
        ),
      ),
    ),

    _guideline_attr: $ => seq(
      alias($._guide_id, $.guide),
      optional(
        choice(
          seq('id', optional($.identifier)),
          alias($._guideline_xy_attr, $.xy),
        ),
      ),
    ),

    _guideline_xy_attr: $ => choice(
      seq(
        alias('@',$.absolute),
        alias(/[0-9]+([.][0-9]*)?(mm|H)?/,$.offset),
      ),
      seq(
        alias(/[0-9]+([.][0-9]*)?(mm|H)?/,$.offset),
      ),
      seq(
        alias(choice('left','centre','center','right','top','middle','bottom'),$.reference),
        optional(alias(/[+-][0-9]+([.][0-9]*)?(mm|H)?/,$.offset)),
      ),
      seq(
        alias(/[a-zA-Z]+[0-9]*/,$.reference),
        optional(alias(/[+-][0-9]+([.][0-9]*)?(mm|H)?/,$.offset)),
      ),
    ),

    _x_attr: $ => choice(
      seq('@',/[0-9]+([.][0-9]*)?(mm|H)?/),
      /[0-9]+([.][0-9]*)?(mm|H)?/,
      seq(
          choice('left', 'centre','center', 'right'),
          optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
        ),
      seq(
          /[a-z][a-z0-9]*/,
          optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
        ),
    ),

    _y_attr: $ => choice(
      seq('@',/[0-9]+([.][0-9]*)?(mm|H)?/),
      /[0-9]+([.][0-9]*)?(mm|H)?/,
      seq(
          choice('top', 'middle', 'bottom'),
          optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
        ),
      seq(
          /[a-z][a-z0-9]*/,
          optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
        ),
    ),

    _xy_attr: $ => seq(
      choice(
        seq('@',/[0-9]+([.][0-9]*)?(mm|H)?/),
        /[0-9]+([.][0-9]*)?(mm|H)?/,
        seq(
            choice('left', 'centre','center', 'right'),
            optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
          ),
        seq(
            /[a-z][a-z0-9]*/,
            optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
          ),
      ),
      ',',
      choice(
        seq('@',/[0-9]+([.][0-9]*)?(mm|H)?/),
        /[0-9]+([.][0-9]*)?(mm|H)?/,
        seq(
            choice('top', 'middle', 'bottom'),
            optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
          ),
        seq(
          /[a-z][a-z0-9]*/,
          optional(/[+-][0-9]+([.][0-9]*)?(mm|H)?/),
        ),
      ),
    ),

    _offset_attr: $ => alias(/[+-][0-9]+([.][0-9]*)?(mm|H)?/,$.offset),

    // ... decorate
    decorate: $ => seq(
      'decorate',
      optional(
        alias($._component, $.component),
      ),
    ),

    _component: $ => seq (
      '(', 
      choice('input', 'output', 'parameter', 'light', 'widget'), 
      optional(
        seq (
          $.name, 
          optional ($.decoration),
        ),
      ),
    ),

    decoration: $ => seq (
      ')',
      'with',
      $.name,
    ),

    // ... delete
    delete: $ => seq(
      'delete',
      optional(
        choice (
          alias($._guideline_id, $.guide),
          alias($._input_id, $.input),
          alias($._output_id, $.output),
          alias($._parameter_id, $.parameter),
          alias($._light_id, $.light),
          alias($._widget_id, $.widget),
          alias($._label_id, $.label),
          alias($._decoration_id, $.decoration),
        ),
      ),
    ),

    _guideline_id: $ => seq(
      'guide',
      optional($.identifier),
    ),

    _input_id: $ => seq(
      'input',
      optional($.identifier),
    ),

    _output_id: $ => seq(
      'output',
      optional($.identifier),
    ),

    _parameter_id: $ => seq(
      'parameter',
      optional($.identifier),
    ),

    _light_id: $ => seq(
      'light',
      optional($.identifier),
    ),

    _widget_id: $ => seq(
      'widget',
      optional($.identifier),
    ),

    _label_id: $ => seq(
      'label',
      optional(
        choice(
          alias(/[^ ]+/,$.identifier),
          seq('"', alias(/[^"]*/,$.identifier), '"'),
          seq("'", alias(/[^']*/,$.identifier), "'"),
        ),
      ),
    ),

    _decoration_id: $ => prec.left(
      seq(
        'decoration',
        optional(
          choice (
            $.identifier,
            $._component_id,
          ),
        ),
      ),
    ),

    _font_id: $ => seq(
      'font',
      optional(alias($.name,$.identifier)),
    ),

    _component_id: $ => seq(
      '(',
      choice(
        alias($._input_id,     $.input),
        alias($._output_id,    $.output),
        alias($._parameter_id, $.parameter),
        alias($._light_id,     $.light),
        alias($._widget_id,    $.widget),
      ),
      ')',
      optional($.name),
    ),

    _guide_id: $ => seq(
      'guide',
      optional(
          alias(/[a-zA-Z][a-zA-Z0-9]*/,$.identifier),
      ),
    ),

    // ... load
    load: $ => seq(
      'load',
      optional(
        choice (
          alias('project', $.project),
          alias('script',  $.script),
          alias('font',    $.font),
        ),
      ),
    ),

    // ... unload
    unload: $ => seq(
      'unload',
      optional(
        choice (
          alias($._font_id, $.font),
        ),
      ),
    ),

    // ... save
    save: $ => seq(
      'save',
      optional(
        choice (
          $.project,
          $.script,
        ),
      ),
    ),

    project: $ => seq (
      'project',
      optional($._save_options),
    ),

    _save_options: $ => choice (
      seq (
        alias('timestamp', $.timestamp),
        optional (
          seq(',', alias('gzip', $.gzip)),
        ),
      ),
      seq (
        alias('gzip', $.gzip),
        optional (
          seq(',', alias('timestamp', $.timestamp)),
        ),
      ),
    ),

    script: $ => seq (
      'script',
      optional (
        alias('timestamp', $.timestamp),
      ),
    ),

    // ... export
    export: $ => seq(
      'export',
      optional(
        choice (
          alias($._module_export, $.module),
          $.panel,
        ),
      ),
    ),

    _module_export : $ => seq(
      'module',
      optional(
        choice(
          alias('.h', $.header),
          alias('>>', $.helper),
        ),
      ),
    ),

    panel: $ => seq(
      'panel',
      optional(
        choice (
          $.svg,
        ),
      ),
    ),

    svg: $ => seq(
      'svg',
      optional(
        choice(
          alias('light',$.light),
          alias('dark', $.dark),
        ),
      ),
    ),

    // ... list
    list: $ => seq(
      'list',
      optional(
        choice (
          alias('fonts',       $.fonts),
          alias('parts',       $.parts),
          alias('decorations', $.decorations),
        ),
      ),
    ),

    origin: $ => seq(
      'origin',
      optional(
        choice(
          $.absolute,          
          seq(
            $.x,
            optional(
              seq(
                ',',
                optional($.y),
              ),
            ),
          ),
          seq(
            $.y,
            optional(
              seq(
                ',',
                optional($.x),
              ),
            ),
          ),
        ),
      ),
    ),

    background: $ => seq(
      'background',
      optional (
        choice (
          seq ($.rgb, optional (seq (',', $.rgb))),
          seq ($.rgba, optional (seq (',', $.rgba))),
          $.name,
        )
      ),
    ),

    guide: $ => seq(
      'guide',
    ),

    // ... input
    input: $ => seq(
      'input',
      optional($.name),
    ),

    // ... output
    output: $ => seq(
      'output',
    ),

    // ... parameter
    parameter: $ => seq(
      'parameter',
    ),

    // ... light
    light: $ => seq(
      'light',
    ),

    // ... widget
    widget: $ => seq(
      'widget',
    ),

    // ... label
    label: $ => seq(
      'label',
      optional(
        alias($._label_string, $.string),
      ),
    ),

    _label_string: $ => seq(
      $._string,
      optional(
        choice (
          alias($._label_absolute, $.absolute),
          alias($._label_relative, $.relative),
          alias($._label_geometry, $.geometry),
        ),
      ),
    ),

    _label_absolute: $ => seq(
      '@',
      /([0-9]+)([.][0-9]*)?(mm|h|H)/,
      ',',
      /([0-9]+)([.][0-9]*)?(mm|h|H)/,
      optional( $.font ),
    ),

    _label_relative: $ => seq(
      /[0-9]+(?:\.[0-9]*)?mm/,
      ',',
      /[0-9]+(?:\.[0-9]*)?mm/,
      optional( $.font ),
    ),

    _label_geometry: $ => seq(
      $._x,
      ',',
      $._y,
      optional( $.font ),
    ),

    font: $ => seq (
      /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
      optional ($.fontsize),
    ),

    fontsize: $ => seq(
      /[1-9][0-9]*([.][0-9]*)?pt/,
      optional ($.halign),
    ),

    halign: $ => seq(
      choice(
        'left',
        'centre',
        'center',
        'right',
      ),
      optional(seq(',', $.valign))
    ),

    valign: $ => seq (
      choice(
        'top',
        'middle',
        'baseline',
        'bottom',
      ),
      optional ($.colour),
    ),

    _align: $ => seq(
      alias(choice('left','centre','center','right'),$.halign),
      ',',
      alias(choice('top','middle','baseline','bottom'),$.valign),
    ),

    colour: $ => seq(
      choice(
        $._rgb,
        $._rgba,
      ),
      optional(
        seq (
          ',',
          choice (
            $._rgb,
            $._rgba,
          ),
        ),
      ),
    ),

    _rgb: $ => /#[a-fA-F0-9]{6}/,
    _rgba: $ => /#[a-fA-F0-9]{8}/,

    name: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    part: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    rgb: $ => /#[a-fA-F0-9]{6}/,
    rgba: $ => /#[a-fA-F0-9]{8}/,

    absolute: $ => seq(
      '@',
      optional(
        seq(
          alias(/([0-9]+)([.][0-9]*)?(mm|h|H)/,$.x),
          optional(
            seq(
                ',',
              optional(
                alias(/([0-9]+)([.][0-9]*)?(mm|h|H)/,$.y),
              ),
            ),
          ),
        ),
      ),
    ),

    _absolute: $ => seq(
      '@',
      /[0-9]+(?:\.[0-9]*)?(mm|H)/,
      ',',
      /[0-9]+(?:\.[0-9]*)?(mm|H)/,
    ),

    _relative: $ => seq(
      /[0-9]+(?:\.[0-9]*)?(mm|H)/,
      ',',
      /[0-9]+(?:\.[0-9]*)?(mm|H)/,
    ),

    _x: $ => seq(
      /left|centre|center|right/,
      optional($._offset),
    ),

    _y: $ => seq(
      /top|middle|bottom/,
      optional($._offset),
    ),

    x: $ => seq(
      alias(/left|centre|center|right/,$.reference),
      optional($.offset),
    ),

    y: $ => seq(
      alias (/top|middle|bottom/,$.reference), 
      optional($.offset),
    ),

    xy: $ => choice(
      $._absolute,
      $._relative,
      $._xy,
    ),

    _xy: $ => seq(
      $._x,
      ',',
      $._y,
    ),

    _offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,

    offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,

    string: $ => choice(
      /"[^"]*"/,
      /'[^']*'/,
    ),

    _string: $ => choice(
      /"[a-zA-Z]([^"]*?)"/,
      /'[a-zA-Z]([^']*?)'/,
    ),

    identifier: $ => choice(
      /[a-zA-Z][a-zA-Z0-9]*/,
      /'[a-zA-Z][a-zA-Z0-9]*'/,
      /"[a-zA-Z][a-zA-Z0-9]*"/,
    ),

    stretch: $ => seq ( 
      '(', 
      'stretch', 
      /[0-9]+([.][0-9]*)?/,
      ',',
      /[0-9]+([.][0-9]*)?/,
      ')',
     ),

    scale: $ => seq ( 
      '(', 
      'scale', 
      /[0-9]+([.][0-9]*)?/,
      ')',
     ),

  }
});
