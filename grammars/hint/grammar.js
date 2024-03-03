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
          alias('module',     $.module),
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
  }
});
