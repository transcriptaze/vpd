module.exports = grammar({
  name: 'hint',

  rules: {
    command: $ => seq(
      choice(
        $._new,
        alias('decorate',$.decorate),
        alias('set',     $.set),
        alias('delete',  $.delete),
        alias('load',    $.load),
        alias('unload',  $.unload),
        alias('save',    $.save),
        alias('export',  $.export),
        alias('list',    $.list),
        alias('help',    $.help),
      ),
    ),

    _new: $ => seq(
      alias('new',$.new),
      optional(
        choice(
          $._new_module,
          $._new_input,
          alias('output',     $.output),
          alias('parameter',  $.parameter),
          alias('light',      $.light),
          alias('widget',     $.widget),
          alias('label',      $.label),
          alias('decoration', $.decoration),
          alias('guide',      $.guide),
        ),
      ),
    ),

    _new_module: $ => seq(
      alias('module',$.module),
      optional(
        seq(
          $.name,
          optional($._module_height),
          optional($._module_width)
        ),
      ),
    ),

    _module_height: $ => seq(
      choice(
        alias('1U',      $.height),
        alias('128.5mm', $.height),
      ),
      optional(','),
    ),

    _module_width: $ => choice(
      alias(/([1-9][0-9]*H)/, $.width),
      alias(/([1-9][0-9]*)([.][0-9]*)?mm/, $.width),
    ),

    _new_input: $ => seq(
      alias('input',$.input),
      optional(
        seq(
          $.name,
          optional(
            seq(
              $.xy,
              optional($.part)
            ),
          ),
        ),
      ),
    ),

    // ... common expressions
    name: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,
    part: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,

    xy: $ => choice(
      $._xy_absolute,
      $._xy_relative,
      $._xy_guidelines,
    ),

    _xy_absolute: $ => seq(
      '@',
      /[0-9]+([.][0-9]*)?(H|mm| )/,
      ',',
      /[0-9]+([.][0-9]*)?(H|mm| )/,
    ),

    _xy_relative: $ => seq(
      /[+-]?[0-9]+([.][0-9]*)?(H|mm| )/,
      ',',
      /[+-]?[0-9]+([.][0-9]*)?(H|mm| )/,
    ),

    _xy_guidelines: $ => seq(
      /[a-zA-Z]+[a-zA-Z0-9]*([+-][0-9]+([.][0-9]*)?(H|mm| ))?/,
      ',',
      /[a-zA-Z]+[a-zA-Z0-9]*([+-][0-9]+([.][0-9]*)?(H|mm| ))?/,
    ),

  }
});
