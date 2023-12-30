# User Guide

Contents

1. [Getting started](#getting-started)
2. [Projects](#projects)
3. [Scripts](#scripts)
4. [Fonts](#fonts)
5. [Guidelines](#guidelines)
6. [Modules](#modules)
7. [Inputs](#inputs)
8. [Outputs](#outputs)
9. [Parameters](#parameters)
10. [Lights](#lights)
11. [Labels](#labels)
12. [Backgrounds](#backgrounds)

## Getting started

1. Create a new module named _quickstart_ that is 50.8mm (i.e. 10 units) wide
```
new module "quickstart" 1U 10H
```

2. Create vertical guidelines to locate inputs, outputs and parameters:
```
new guideline vertical @5.08mm
new guideline v1+10.16mm
new guideline v2+10.16mm
```

3. Add a horizontal guideline to locate inputs, outputs and parameters:
```
new guideline horizontal top+10.16mm
new guideline h1+2H
new guideline bottom-15.24mm
```

4. Set the background:
```
set module background "foundation"
```

5. Create the inputs:
```
new input "e" v1,h1 PJ301M
new input "v" v1,h2 PJ301M
```

6. Create the outputs:
```
new output "P" v3,h3-10.16mm PJ301M
new output "Q" v3,h3         PJ301M
```

7. Create the parameters:
```
new parameter "E" v2,h1 RoundBlackKnob
new parameter "V" v2,h2 RoundBlackKnob
```

8. Add a title:
```
new label l1 "QST" centre,top+5.08mm align:centre
```

9. Label the parameters and inputs:
```
new label l2 "E" v1-2.54mm, h1+5.08mm RobotoCondensed
new label l3 "V" v2-2.54mm, h1+5.08mm RobotoCondensed
```

10. Add the graduations for the parameters:
```
decorate parameter "E" graduations 7.5mm
decorate parameter "V" graduations 7.5mm
```

11. Export the project file:
```
export module project
```

12. Export the SVG file:
```
export module SVG 
export module SVG dark
```

## Projects

## Scripts

## Modules

### `new module <name> [height] <width>`

### `export module project [gzip]`

### `export module script`

### `export module svg [light|dark]`

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

## Inputs

`new input "name" <location>`

1. The location can be:
   - _absolute_ e.g. `new input "e" @4.5mm,4.5mm`

_Examples_
```
new input "E" @10mm,10mm
```

## Outputs

## Parameters

`new parameter "name" <location>`

1. `parameter` can be abbreviated to `param`
2. The location can be:
   - _absolute_ e.g. `new parameter "E" @4.5mm,4.5mm`

_Examples_
```
new parameter "E" @10mm,10mm
new param "E" @10mm,10mm
```

## Lights

## Labels

## Backgrounds

## Fonts

VPD is a static web app and as such CORS restrictions mean it is limited to those fonts included in the app:

- Lato-Regular
- Lato-Semibold
- Lato-Bold
- RobotoMono-Regular
- RobotoMono-Bold
- RobotoCondensed-Regular
- RobotoCondensed-Bold
- StyleScript-Regular

To use an alternative font:

1. Download the _TrueType_ or _OpenType_ font file (support for _woff_ and _woff2_ files will be added .. sometime ..)
2. Open the font list (`show fonts`)
3. Add the font using the the **+** button to load the font file.

The font will be stored more-or-less permanently in the browser local storage.

