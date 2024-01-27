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
        $.save,
        $.export,
      ),
    ),

    // ... new
    new: $ => seq(
      'new',
      optional(
        choice(
          $.module,
          $.guide,
          $.label,
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
          alias($._guideline, $.guide)
        ),
      ),
    ),

    _guideline: $ => seq(
      'guide',
      optional($.identifier),
    ),

    // ... load
    load: $ => seq(
      'load',
      optional(
        choice (
          alias('project', $.project),
          alias('script', $.script),
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
        $.panel,
      ),
    ),
    panel: $ => seq(
      'panel',
      optional($.svg),
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

    _offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,

    offset: $ => /[+-]([0-9]+)(\.[0-9]*)?(mm|h|H)/,

    _string: $ => seq(
      '"',
      /[a-zA-Z]([^"]*?)/,
      '"',
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,
  }
});
