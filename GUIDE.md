# User Guide

### Contents

- [Getting started](#getting-started)
- [Projects](#projects)
- [Scripts](#scripts)
- [Fonts](#fonts)
- [Guidelines](#guidelines)
- [Commands](#commands)
  - [Modules](#modules)
  - [Inputs](#inputs)
  - [Outputs](#outputs)
  - [Parameters](#parameters)
  - [Lights](#lights)
  - [Labels](#labels)
  - [Backgrounds](#backgrounds)

## Getting started

1. Create a new module named _quickstart_ that is 50.8mm (10 units) wide
   ```
   new module "quickstart" 1U 10H
   ```

2. Create vertical guidelines to locate inputs, outputs and parameters:
   ```
   new guide vertical @5.08mm
   ```
   ```
   new guide v1+10.16mm
   ```
   ```
   new guide v2+10.16mm
   ```

3. Add a horizontal guideline to locate inputs, outputs and parameters:
   ```
   new guide horizontal top+10.16mm
   ```
   ```
   new guide h1+2H
   ```
   ```
   new guide bottom-15.24mm
   ```


4. Set the background:
   ```
   set module background "foundation"
   ```

5. Create the inputs:
   ```
   new input "e" v1,h1 PJ301M
   ```
   ```
   new input "v" v1,h2 PJ301M
   ```

6. Create the outputs:
   ```
   new output "P" v3,h3-10.16mm PJ301M
   ```
   ```
   new output "Q" v3,h3         PJ301M
   ```

7. Create the parameters:
   ```
   new parameter "E" v2,h1 RoundBlackKnob
   ```
   ```
   new parameter "V" v2,h2 RoundBlackKnob
   ```

8. Add a title:
   ```
   new label l1 "QST" centre,top+5.08mm "Lato-Bold" 12pt centered,baseline
   ```

9. Label the parameters and inputs:
   ```
   new label l2 "E" v1-2.54mm, h1+5.08mm RobotoCondensed
   ```
   ```
   new label l3 "V" v2-2.54mm, h1+5.08mm RobotoCondensed
   ```

10. Add the graduations for the parameters:
    ```
    decorate parameter "E" graduations 7.5mm
   ```
   ```
    decorate parameter "V" graduations 7.5mm
    ```

11. Export the project files:
    ```
    export module
    ```
    ```
    export module script
    ```

12. Export the SVG file:
    ```
    export module SVG 
    ```
    ```
    export module SVG dark
    ```

## Projects

## Scripts

## Fonts

VPD is a static web app and as such CORS restrictions mean it cannot load external fonts from e.g. Google Fonts. The following fonts
are included in the app:

- Lato-Regular
- Lato-Semibold
- Lato-Bold
- RobotoMono-Regular
- RobotoMono-Bold
- RobotoCondensed-Regular
- RobotoCondensed-Bold
- StyleScript-Regular

To use a different font:

1. Download the _TrueType_ or _OpenType_ font file (support for _woff_ and _woff2_ files will be added sometime)
2. Issue the `add font` command and pick the font file (or just drag and drop it onto the panels. The _load_ button will
   also work if you open a font file).

The font will be stored more-or-less permanently in the browser local storage. 

- To see the list of installed fonts, type `show fonts`
- To remove a font, type `delete font <name>``


## Commands

### Modules

`new module <name> [height] <width>`

`export module project [gzip]`

`export module script`

`export module svg [light|dark]`

### Origin

By default, most elements are located relative to the _origin_ which is normally located at the top left corner of the panel. 
To change origin:
```
set origin <xy>
```

Example:
```
set origin @10mm,10mm
set origin centre,middle
set origin left+2.54mm,top+10.16mm
```

### Guidelines

Inputs, outputs, etc can be aligned to a guideline and will be relocated if the guideline is moved. 


- `new guide [label] vertical|horizontal <location>`

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

### Inputs

`new input "name" <location> [symbol]`

Adds an _input_ circle to the component layer of the SVG file.

1. The location can be:
   - _absolute_ e.g. `new input "e" @4.5mm,4.5mm`
   - _relative to the geometry_ e.g. `new input "e" centre,top+4.5mm`
   - _relative to the guidelines_ e.g. `new input "e" v1,h2-4.5mm`

2. The optional _symbol_ set the physical symbol displayed on the overlay. Defaults to a red dot if none. The currently included
   symbols are:
   - _PJ301M_

_Examples_
```
new input "e" @10mm,10mm
new input "e" @10mm,10mm PJ301M
new input "e" left+10.16mm,middle
new input "e" v1+10.16mm,v2  PJ301M
```

### Outputs

### Parameters

`new parameter "name" <location>`

1. `parameter` can be abbreviated to `param`
2. The location can be:
   - _absolute_ e.g. `new parameter "E" @4.5mm,4.5mm`

_Examples_
```
new parameter "E" @10mm,10mm
new param "E" @10mm,10mm
```

### Lights

### Label s  

### Backgrounds

