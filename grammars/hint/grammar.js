module.exports = grammar({
  name: 'hint',

  rules: {
    command: $ => seq(
      choice(
        $.new,
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

    new: $ => seq(
      'new',
      optional(
        choice(
          alias($._new_module,$.module),
          alias('input',      $.input),
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
      'module',
      optional(
        seq(
          $.name,
          optional(alias('1U', $.height))
        ),
      ),
    ),

    // ... common expressions
    name: $ => /[a-zA-Z]([a-zA-Z0-9_-]*?)|"[a-zA-Z]([a-zA-Z0-9_ -]*?)"|'[a-zA-Z]([a-zA-Z0-9_ -]*?)'/,

  }
});
