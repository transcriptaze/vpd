module.exports = grammar({
  name: 'command',

  rules: {
    command: $ =>repeat(
      choice(
        $.comment,
        $.new,
        $.set,
        $.decorate,
        $.delete,
        $.load,
        $.save,
        $.export,
      ),
    ),

    // ... comments
    comment: $ => /;;(.*?)/,

    // ... new
    new: $ => seq(
      'new',
      $._entity,
    ),

    // ... set
    set: $ => seq(
      'set',
      choice (
        $.origin,
        $.background,
        alias($._module_attr,$.module),
        $._component_attr,
        $._label_attr,
        $._decoration_attr,
        $._guideline_attr,
      )
    ),

    _module_attr: $ => seq(
      'module',
      choice(
        seq('name', $.name),
        seq('height', $.height),
        seq('width', $.width),
      )
    ),

    _component_attr: $ => seq(
      choice(
        alias($._input_id,     $.input),
        alias($._output_id,    $.output),
        alias($._parameter_id, $.parameter),
        alias($._light_id,     $.light),
        alias($._widget_id,    $.widget),
      ),
      choice(
        seq('name', $.name),
        seq('x',    alias($._x_attr, $.x)),
        seq('y',    alias($._y_attr, $.y)),
        seq('xy',   alias($._xy_attr, $.xy)),
        seq('part', $.part),
      )
    ),

    _label_attr: $ => seq(
      alias($._label_id, $.label),
      choice(
        seq('text',   $._string),
        seq('x',      alias($._x_attr, $.x)),
        seq('y',      alias($._y_attr, $.y)),
        seq('xy',     alias($._xy_attr, $.xy)),
        seq('font',   $.font),
        seq('size',   $.fontsize),
        seq('halign', $.halign),
        seq('valign', $.valign),
        seq('align',  $._align),
        seq('colour', $.colour),
        seq('color',  $.colour),
      ),
    ),

    _decoration_attr: $ => seq(
      choice(
        alias($._decoration_id, $.decoration),
      ),
      choice(
        seq('x',  alias($._offset_attr, $.x)),
        seq('y',  alias($._offset_attr, $.y)),
        seq('xy', $._offset_xy_attr),
        $.stretch,
        $._scale,
      ),
    ),

    _guideline_attr: $ => seq(
      alias($._guide_id, $.guide),
      choice(
        seq('id', $.identifier),
        alias($._absolute_attr, $.xy),
        alias($._relative_attr, $.xy),
        alias($._geometry_x_attr,$.xy),
        alias($._geometry_y_attr,$.xy),
        alias($._guide_attr,$.xy),
      ),
    ),

    _x_attr: $ => seq(
      choice(
        $._absolute_attr,
        $._relative_attr,
        $._geometry_x_attr,
        $._guide_attr,
      ),
    ),

    _y_attr: $ => seq(
      choice(
        $._absolute_attr,
        $._relative_attr,
        $._geometry_y_attr,
        $._guide_attr,
      ),
    ),

    _xy_attr: $ => seq(
      choice(
        $._absolute_xy_attr,
        $._relative_xy_attr,
        $._geometry_xy_attr,
        $._guide_xy_attr,
      ),
    ),

    _offset_attr: $ => seq(
      alias(/[+-]?[0-9]+(?:\.[0-9]*)?(mm|H|h)?/, $.offset),
    ),

    _offset_xy_attr: $ => seq(
      alias($._offset_attr, $.x),
      ',',
      alias($._offset_attr, $.y),
    ),

    _absolute_attr: $ => seq(
      alias('@',$.absolute),
      alias(/[0-9]+(?:\.[0-9]*)?(mm|H|h)?/, $.offset),
    ),

    _absolute_x_attr: $ => seq(
      alias(/[0-9]+(?:\.[0-9]*)?(mm|H|h)?/, $.offset),
    ),

    _absolute_y_attr: $ => seq(
      alias(/[0-9]+(?:\.[0-9]*)?(mm|H|h)?/, $.offset),
    ),

    _absolute_xy_attr: $ => seq(
      alias('@',$.absolute),
      alias($._absolute_x_attr, $.x),
      ',',
      alias($._absolute_y_attr, $.y),
    ),

    _relative_attr: $ => seq(
      alias(/[+-]?[0-9]+(?:\.[0-9]*)?(mm|H|h)?/, $.offset),
    ),

    _relative_xy_attr: $ => seq(
      alias($._relative_attr, $.x),
      ',',
      alias($._relative_attr, $.y),
    ),

    _geometry_x_attr: $ => seq(
      alias(
        choice (
          'left',
          'centre',
          'center',
          'right',
        ), $.reference),
      optional(
        alias(/[+-]?[0-9]+(?:\.[0-9]*)?(mm|H)?/, $.offset),
      ),
    ),

    _geometry_y_attr: $ => seq(
      alias(
        choice (
          'top',
          'middle',
          'bottom',
        ), $.reference),
      optional(
        alias(/[+-]?[0-9]+(?:\.[0-9]*)?(mm|H)?/, $.offset),
      ),
    ),

    _geometry_xy_attr: $ => seq(
      alias($._geometry_x_attr,$.x),
      ',',
      alias($._geometry_y_attr,$.y),
    ),

    _guide_attr: $ => seq(
      alias(/[a-zA-Z][a-zA-Z0-9]*/, $.reference),
      optional(
        alias(/[+-][0-9]+(?:\.[0-9]*)?(mm|H)?/, $.offset),
      ),
    ),

    _guide_xy_attr: $ => seq(
      alias($._guide_attr,$.x),
      ',',
      alias($._guide_attr,$.y),
    ),


    // ... decorate
    decorate: $ => seq(
      'decorate',
      '(',
      choice (
        alias ($._input,     $.input),
        alias ($._output,    $.output),
        alias ($._parameter, $.parameter),
        alias ($._light,     $.light),
        alias ($._widget,    $.widget),
      ),
      ')',
      'with',
      $.decoration,
    ),

    // ... delete
    delete: $ => seq(
      'delete',
      choice (
        alias($._guide_id, $.guide),
        alias($._input_id, $.input),
        alias($._output_id, $.output),
        alias($._parameter_id, $.parameter),
        alias($._light_id, $.light),
        alias($._widget_id, $.widget),
        alias($._label_id, $.label),
        alias($._decoration_id, $.decoration),
      )
    ),

    _guide_id: $ => seq(
      'guide',
      alias(/[a-zA-Z]([a-zA-Z0-9_-]*?)/, $.identifier),
    ),

    _input_id: $ => seq(
      'input',
      alias(/[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/, $.identifier),
    ),

    _output_id: $ => seq(
      'output',
      alias(/[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/, $.identifier),
    ),

    _parameter_id: $ => seq(
      'parameter',
      alias(/[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/, $.identifier),
    ),

    _light_id: $ => seq(
      'light',
      alias(/[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/, $.identifier),
    ),

    _widget_id: $ => seq(
      'widget',
      alias(/[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/, $.identifier),
    ),

    _label_id: $ => seq(
      'label',
      choice(
        alias(/[^ ]+/,$.identifier),
        seq('"', alias(/[^"]*/,$.identifier), '"'),
        seq("'", alias(/[^']*/,$.identifier), "'"),
      ),
    ),

    _decoration_id: $ => seq(
      'decoration',
      choice (
        alias(/[a-zA-Z]([a-zA-Z0-9_-]*?)/,$.identifier),
        seq($._component_id,$.name),
      ),
    ),

    _component_id: $ => seq(
      '(',
      choice(
        alias($._input_id,    $.input),
        alias($._output_id,   $.output),
        alias($._parameter_id,$.parameter),
        alias($._light_id,    $.light),
        alias($._widget_id,   $.widget),
      ),
      ')',
    ),

    // ... load
    load: $ => seq (
      'load',
      choice (
        alias('project',$.project),
        alias('script',$.script),
      ),
    ),

    save: $ => seq (
      'save',
      choice (
        $.project,
        $.script,
      ),
    ),

    export: $ => seq (
      'export',
      choice(
        alias($._module_export, $.module),
        $.panel,
      ),
    ),

    _module_export: $ => seq(
      'module',
      choice(
        alias('.h', $.header),
        alias('>>', $.helper),
      ),
    ),

    project: $ => seq(
      'project',
      optional (
        choice(
          seq(
            alias('timestamp', $.timestamp),
            optional ( seq (',', alias('gzip', $.gzip))),
          ),
          seq(
            alias('gzip', $.gzip),
            optional ( seq (',', alias('timestamp', $.timestamp))),
          ),
        ),
      ),
    ),

    script: $ => seq(
      'script',
      optional (
        alias('timestamp', $.timestamp),
      ),
    ),

    // ... entities
    _entity: $ => choice(
      $.module,
      $.input,
      $.output,
      $.parameter,
      $.light,
      $.widget,
      $.label,
      $.guide,
    ),

    _input: $ => seq (
      'input',
      $.name,
      optional ($._relative),
    ),

    _output: $ => seq (
      'output',
      $.name,
      optional ($._relative),
    ),

    _parameter: $ => seq (
      'parameter',
      $.name,
      optional ($._relative),
    ),

    _light: $ => seq (
      'light',
      $.name,
      optional ($._relative),
    ),

    _widget: $ => seq (
      'widget',
      $.name,
      optional ($._relative),
    ),

    // ... module
    module: $ => seq(
      'module',
      $.name,
      optional($.height),
      $.width,
    ),

    // ... components
    input: $ => seq(
      'input',
      $._component,
    ),

    output: $ => seq(
      'output',
      $._component,
    ),

    parameter: $ => seq(
      /parameter|param/,
      $._component,
    ),

    light: $ => seq(
      'light',
      $._component,
    ),

    widget: $ => seq(
      'widget',
      $._component,
    ),

    _component: $ => seq(
      $.name,
      choice (
        $.absolute,
        $.relative,
        seq( $.x, ',', $.y ),
        seq (
          '(',
          choice (
            alias ($._input,     $.input),
            alias ($._output,    $.output),
            alias ($._parameter, $.parameter),
            alias ($._light,     $.light),
            alias ($._widget,    $.widget),
          ),
          ')',
        ),
      ),
      optional($.part),
    ),

    // ... labels
    label: $ => seq(
      'label',
      $._string,
      choice (
        $.absolute,
        $.relative,
        seq( $.x, ',', $.y ),
        alias($._decorate,$.decorate),
      ),
      optional($.font),
      optional($.fontsize),
      optional($._align),
      optional($.colour),
    ),

    font: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    fontsize: $ => /[1-9][0-9]*([.][0-9]*)?pt/,

    _align: $ => choice (
      seq (
        $.halign,
        optional ( seq ( ',', $.valign )),
      ),
      seq (
        $.valign,
        optional ( seq ( ',', $.halign )),
      ),
    ),

    halign: $ => choice (
          "left",
          "centre",
          "center",
          "right",
    ),

    valign: $ => choice (
          "top",
          "middle",
          "baseline",
          "bottom",
    ),

    colour: $ => seq (
      choice (
        $.rgb,
        $.rgba
      ),
      optional (
        seq (
          ',',
          choice (
            $.rgb,
            $.rgba
          ),
        ),
      )
    ),

    // ... decoration
    decoration: $ => seq (
      $.name,
      optional($._scale),
      optional($.stretch),
    ),

    _scale: $ => seq ( '(', 'scale', alias(/[0-9]+([.][0-9]*)?/,$.scale),')'),

    stretch: $ => seq ( 
      '(', 
      'stretch', 
      alias(/[0-9]+([.][0-9]*)?/, $.x),
      ',',
      alias(/[0-9]+([.][0-9]*)?/, $.y),
      ')',
     ),

    // ... origin
    origin: $ => seq(
      'origin',
      choice(
        seq( 
          alias($._originy, $.y), 
          ',', 
          alias($._originx, $.x)
        ),
        seq( 
          alias($._originx,$.x),
          ',',
          alias($._originy,$.y),
        ),
        seq(
          alias('@',$.absolute),
          alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.x),
          ',',
          alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.y),
         )
      ),
    ),

    _originx: $ => seq(
      alias(/left|centre|center|right/,$.reference),
      optional($.offset),
    ),

    _originy: $ => seq(
      alias (/top|middle|bottom/,$.reference), 
      optional($.offset),
    ),

    background: $ => seq(
      'background',
      choice(
        alias('none', $.none),
        seq(
          $.rgb,
          optional(seq(',',$.rgb))
        ),
        seq(
          $.rgba,
          optional(seq(',',$.rgba))
        ),
        $.name,
      ),
    ),

    rgb: $ => /#[a-fA-F0-9]{6}/,
    rgba: $ => /#[a-fA-F0-9]{8}/,

    // ... files
    panel: $ => seq(
      'panel',
      choice(
        $.svg,
      ),
    ),

    svg: $ => seq(
      'svg',
      optional (
        choice(
          alias('light',$.light),
          alias('dark',$.dark),
        ),
      ),
    ),

    name: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    height: $ => /1U|128.5mm/,
    width: $ => /[1-9][0-9]*H|[1-9][0-9]([.][0-9]+)?mm/,
    part: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,

    guide: $ => seq(
      'guide',
      optional($.identifier),
      choice(
        $.vertical, 
        $.horizontal, 
        $.geometry,
        $.guideline,
      ),
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    vertical: $ => seq(
      'vertical',
      choice (
        seq(
          alias('@',$.absolute),
          alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
        ),
        seq(
          optional('origin'),
          choice (
            alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
            $.offset,
          ),
        ),
      ),
    ),

    horizontal: $ => seq(
      'horizontal',
      choice (
        seq(
          alias('@',$.absolute),
          alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
        ),
        seq(
          optional('origin'),
          choice (
            alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
            $.offset,
          ),
        ),
      ),
    ),

    geometry: $ => seq(
      choice(
        seq(
          optional('vertical'),
          alias(choice(
            'left',
            "centre",
            "center",
            "right",
          ), $.reference),
        ),
        seq(
          optional('horizontal'),
          alias(choice(
            "top",
            "middle",
            "bottom",
          ), $.reference),
        ),
      ),
      optional($.offset),
    ),

    offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,
    _offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,
    
    guideline: $ => seq(
      alias($.identifier, $.reference),
      $.offset,
    ),

    _string: $ => choice(
      alias(/[^ "'][^ ]*/,$.string),
      seq('"', alias(/[^"]*/,$.string), '"'),
      seq("'", alias(/[^']*/,$.string), "'"),
    ),

    absolute: $ => seq(
      '@',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.x),
      ',',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.y),
    ),

    relative: $ => seq(
      alias(/[+-]?[0-9]+(?:\.[0-9]*)?(mm|h|H)/, $.x),
      ',',
      alias(/[+-]?[0-9]+(?:\.[0-9]*)?(mm|h|H)/, $.y),
    ),

    _decorate: $ => seq(
      '(',
      choice(
        alias('input', $.input),
        alias('output', $.output),
        alias('parameter', $.parameter),
        alias('light', $.light),
        alias('widget' ,$.widget),
        alias('label' ,$.label),
      ),
      $.name,
      $._relative,
      ')',
    ),

    _relative: $ => seq(
      alias($._offset, $.dx),
      ',',
      alias($._offset, $.dy),
    ),

    _xy: $ => seq(
      $.x,
      ',',
      $.y,
    ),

    x: $ => seq(
      alias(
        choice(
          "left",
          "centre",
          "center",
          "right",
          /[a-zA-Z][a-zA-Z0-9]*/,
        ), $.reference,
      ),
      optional($.offset),
    ),

    y: $ => seq(
      alias(
        choice(
          "top",
          "middle",
          "bottom",
          /[a-zA-Z][a-zA-Z0-9]*/,
        ), $.reference,
      ),
      optional($.offset),
    ),

  }
});
