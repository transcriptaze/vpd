...

11. Add the graduations for the parameters:
    ```
    decorate "volume" with graduations 7.5mm
    ```

## User interface

- undo/redo
- command area

## Fonts

VPD is a static web app and as such, CORS restrictions mean it cannot load external fonts from e.g. Google Fonts. The following fonts
are included in the app:

- Lato-Regular
- Lato-Semibold
- Lato-Bold
- RobotoMono-Regular
- RobotoMono-Bold
- RobotoCondensed-Regular
- RobotoCondensed-Bold
- StyleScript-Regular

To use a other fonts:

1. Download the _TrueType_ or _OpenType_ font file (support for _woff_ and _woff2_ files will be added sometime)
2. Issue the `add font` command and pick the font file (or just drag and drop it onto the panels. The _load_ button will
   also work if you open a font file).

The font will be stored more-or-less permanently in the browser local storage. 

- To see the list of installed fonts, type `show fonts`
- To remove a font, type `delete font <name>`


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
