module.exports = grammar({
  name: 'command',

  rules: {
    command: $ =>repeat(
      choice(
        $.comment,
        $.new,
        $.set,
        $.load,
        $.save,
        $.export,
      ),
    ),

    // ... comments
    comment: $ => /;;(.*?)/,

    // ... actions
    new: $ => seq(
      'new',
      $._entity,
    ),

    set: $ => seq(
      'set',
      choice (
        $.origin,
        $.background,
      )
    ),

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
      $.panel
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

    // ... new
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
        $.decorate,
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
      $.svg,
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
      choice(
        seq(optional($.identifier),$.vertical), 
        seq(optional($.identifier),$.horizontal), 
        seq(optional($.identifier),$.geometry),
        $.geometry,
        seq(optional($.identifier),$.guideline),
      ),
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    vertical: $ => seq(
      'vertical',
      optional('origin'),
      optional(alias('@', $.absolute)),
      choice (
        alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
        $.offset,
      ),
    ),

    horizontal: $ => seq(
      'horizontal',
      optional('origin'),
      optional(alias('@', $.absolute)),
      choice (
        alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
        $.offset,
      ),
    ),

    geometry: $ => seq(
      alias(
        choice(
          "left",
          "centre",
          "center",
          "right",
          "top",
          "middle",
          "bottom",
        ), $.reference,
      ),
      optional($.offset),
    ),

    offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,
    _offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,
    
    guideline: $ => seq(
      alias($.identifier, $.reference),
      $.offset,
    ),

    _string: $ => seq(
      '"',
      alias(/[a-zA-Z]([^"]*?)/,$.string),
      '"',
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

    decorate: $ => seq(
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
