# User Manual

## Guidelines

`new guide [label] vertical|horizontal <location>`

1. The label is optional and if a user specified label is not present one will be generated automatically.

2. The location can be:
   - _absolute_ e.g. `new guide vertical @4.5mm`
   - _relative to the origin_ e.g. `new guide vertical +4.5mm`
   - _relative to the geometry_ e.g. `new guide vertical centre`
   - _relative to another guide_ e.g. `new guide v1+4.5mm`

3. Geometry values are:
   - `left | centre | right` for vertical guidelines
   - `top  | middle | bottom` for horizontal guidelines

4. `V0` and `H0` can be used to reference the vertical and horizontal guides at the origin, i.e.
   `new guide V0+4.5mm` is the same as `new guide vertical +4.5mm`

5. The location units can be:
   - _mm_: millimeters e.g. 4.5mm
   - _H_: horizontal units of 5.08mm, e.g. 4.5H
   - _h_: half-horizontal units of 2.54mm e.g. 4.5h

_Examples_

```
new guide v1 vertical @4.5mm
new guide vertical +4.5mm
new guide vertical -4.5mm
new guide vertical left
new guide vertical v1+H

new guide horizontal middle
new guide H0+7.62mm
```   