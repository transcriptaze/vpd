module.exports = grammar({
  name: 'command',

  rules: {
    command: $ =>repeat(
      choice(
        $.comment,
        $.new,
        $.set,
        $.export,
        $.load,
      ),
    ),

    // ... comments
    comment: $ => /#.*/,

    // ... new
    new: $ => seq(
      'new',
      $._entity,
    ),

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

    module: $ => seq(
      'module',
      $.name,
      optional($.height),
      $.width,
    ),

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

    label: $ => seq(
      'label',
      $._string,
      choice (
        $.absolute,
        $.relative,
        seq( $.x, ',', $.y ),
      ),
      optional($.font),
      optional($.fontsize),
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

    // ... set
    set: $ => seq(
      'set',
      choice (
        $.origin,
        $.background,
      )
    ),

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
    load: $ => seq (
      'load',
      alias('script',$.script),
    ),

    export: $ => seq (
      'export',
      alias($._exportable,$.module)
    ),

    _exportable: $ => seq(
      'module',
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

    font: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    fontsize: $ => /[1-9][0-9]*([.][0-9]*)?pt/,

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
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.x),
      ',',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.y),
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
