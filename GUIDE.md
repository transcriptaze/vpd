# User Guide

## Quickstart

1. Create a new module named _quickstart_ that is 50.8mm (i.e. 10 units) wide
```
new module "quickstart" 1U 10H
```

2. Create vertical guidelines to locate inputs, outputs and parameters:
```
new guideline v1 vertical @5.08mm
new guideline v2 v1+10.16mm
new guideline v3 v2+10.16mm
```

3. Add a horizontal guideline to locate inputs, outputs and parameters:
```
new guideline h1 horizontal top+10.16mm
new guideline h2 horizontal h1+2H
new guideline h3 horizontal bottom-15.24mm
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

