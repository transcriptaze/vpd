module.exports = grammar({
  name: 'command',

  rules: {
    source_file: $ => repeat($._command),
    _command: $ => choice(
      $.new,
      $.set,
      'move',
      'delete'
    ),

    new: $ => seq(
      'new',
      $.entity,
    ),

    set: $ => seq(
      'set',
      $.attr,
    ),

    entity: $ => choice(
      $.module,
      'param',
      'input',
      'output',
      $.label,
      $.guide,
    ),

    attr: $ => choice(
      $.origin,
    ),

    module: $ => seq(
      'module',
      $.name,
      $.height,
      $.width,
    ),

    origin: $ => seq(
      'origin',
      choice(
        seq(alias(/top|middle|bottom/,$.y), ',', alias(/left|centre|center|right/,$.x)),
        seq(alias(/left|centre|center|right/,$.x),',',alias(/top|middle|bottom/,$.y)),
      ),
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
      ),
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    vertical: $ => seq(
      'vertical',
      optional(alias('@', $.absolute)),
      $.offset,
    ),

    horizontal: $ => seq(
      'horizontal',
      optional(alias('@', $.absolute)),
      $.offset,
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

    offset: $ => /[+-]?([0-9]+)(\.[0-9]*)?(mm|h|H)/,
    
    // guideline: $ => seq(
    //   $.identifier, 
    //   alias(/[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,$.offset),
    // ),

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
    )
  }
});
