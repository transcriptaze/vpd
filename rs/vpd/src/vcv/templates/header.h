#pragma once


{% if inputs %}
{%- for v in inputs -%}
const auto {% filter upper %}{{name}}_INPUT_{{v.name}}{% endfilter %} = mm2px(Vec({{ v.x }}, {{v.y}}));
{% endfor -%}
{% endif %}
{% if outputs %}
{%- for v in outputs -%}
const auto {% filter upper %}{{name}}_OUTPUT_{{v.name}}{% endfilter %} = mm2px(Vec({{v.x}}, {{v.y}}));
{% endfor -%}
{% endif %}
{% if parameters %}
{%- for v in parameters -%}
const auto {% filter upper %}{{name}}_PARAM_{{v.name}}{% endfilter %} = mm2px(Vec({{v.x}}, {{v.y}}));
{% endfor -%}
{% endif %}
{% if lights %}
{%- for v in lights -%}
const auto {% filter upper %}{{name}}_LIGHT_{{v.name}}{% endfilter %} = mm2px(Vec({{v.x}}, {{v.y}}));
{% endfor -%}
{% endif %}
{% if widgets %}
{%- for v in widgets -%}
const auto {% filter upper %}{{name}}_WIDGET_{{v.name}}{% endfilter %} = mm2px(Vec({{v.x}}, {{v.y}}));
{% endfor -%}
{% endif %}
