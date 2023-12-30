const parameters = require('./grammars/parameters.js')

module.exports = grammar({
  name: 'command',

  rules: {
    command: $ =>repeat(
      choice(
        $.new,
        $.set,
        $.export,
      ),
    ),

    new: $ => seq(
      'new',
      $._entity,
    ),

    _entity: $ => choice(
      $.module,
      $.input,
      $.parameter,
      $.label,
      $.guide,
    ),

    module: $ => seq(
      'module',
      $.name,
      $.height,
      $.width,
    ),

    input: $ => seq(
      'input',
      $.name,
      choice (
        $.absolute,
        alias($._xy,$.geometry),
      )
    ),

    parameter: $ => seq(
      /parameter|param/,
      $.name,
      $.anchor,
    ),

    set: $ => seq(
      'set',
      $._attribute,
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


    _attribute: $ => choice(
      $.origin,
    ),

    origin: $ => seq(
      'origin',
      choice(
        seq( $.y, ',', $.x),
        seq( $.x, ',', $.y),
        seq(
          alias('@',$.absolute),
          alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.x),
          ',',
          alias(/([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.y),
         )
      ),
    ),

    x: $ => seq(
      alias(/left|centre|center|right/,$.reference),
      optional($.offset),
    ),

    y: $ => seq(
      alias (/top|middle|bottom/,$.reference), 
      optional($.offset),
    ),

    name: $ => /"[a-zA-Z]([a-zA-Z0-9_-]*?)"/,
    height: $ => '1U',
    width: $ => /[1-9][0-9]*H/,

    label: $ => seq(
      'label',
      $.text,
      $.anchor
    ),

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

    text: $ => seq(
      '"',
      alias(/[a-zA-Z]([^"]*?)/,$.value),
      '"',
    ),

    anchor: $ => seq(
      '@',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.x),
      ',',
      alias(/[0-9]+(?:\.[0-9]*)?mm/, $.y),
    ),

    absolute: $ => seq(
      '@',
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
        ), $.reference,
      ),
      optional($.offset),
    ),

  }
});
