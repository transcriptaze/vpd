#pragma once


{% if inputs %}{%- for v in inputs -%}
const auto {{ self::fmt(name=v.name,type='INPUT') }} = mm2px({{ self::xy(x=v.x, y=v.y) }});
{% endfor %}{% endif -%}
{% if outputs %}{%- for v in outputs -%}
const auto {{ self::fmt(name=v.name,type='OUTUT') }} = mm2px({{ self::xy(x=v.x, y=v.y) }});
{% endfor %}{% endif -%}
{% if parameters %}{%- for v in parameters -%}
const auto {{ self::fmt(name=v.name,type='PARAM') }} = mm2px({{ self::xy(x=v.x, y=v.y) }});
{% endfor %}{% endif -%}
{% if lights %}{%- for v in lights -%}
const auto {{ self::fmt(name=v.name,type='LIGHT') }} = mm2px({{ self::xy(x=v.x, y=v.y) }});
{% endfor %}{% endif %}
{% if widgets %}{%- for v in widgets -%}
const auto {{ self::fmt(name=v.name,type='WIDGET') }} = mm2px({{ self::xy(x=v.x, y=v.y) }});
{% endfor %}{% endif -%}

{%- macro fmt(name,type) %}{% filter upper %}{{prefix}}_{{type}}_{{name}}{% endfilter %}{% endmacro format -%}
{%- macro xy(x,y) %}Vec({{ x | round(precision=2) }}, {{ y | round(precision=2) }}){% endmacro format -%}