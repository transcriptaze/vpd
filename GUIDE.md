# User Guide

### Contents
- [Getting started](#getting-started)
- [Projects](#projects)
- [Scripts](#scripts)
- [User interface](#user-interface)
   - [_Load_](#load)
   - [_Save_](#save)
   - [_Export SVG_](#export-svg)
   - [_Undo/Redo_](#undoredo)
   - [_Macro keys_](#macro-keys)
   - [_Command area_](#command-area)
---
- [Commands](#commands)
   - General
      - [comments](#comments)
      - [units](#units)
      - [location formats](#location-formats)
      - [parts](#parts)
      - [fonts](#fonts)
  ---
   - [`set origin`](#set-origin)
   - [`new guide`](#new-guide)
   - [`delete guide`](#delete-guide)
  ---
   - [`new module`](#new-module)
   - [`set module name`](#set-module-name)
   - [`set module height`](#set-module-height)
   - [`set module width`](#set-module-width)
   - [`set background`](#set-background)
  ---
   - [`new input`](#new-input)
   - [`delete input`](#delete-input)
  ---
   - [`new output`](#new-output)
   - [`delete output`](#delete-output)
  ---
   - [`new parameter`](#new-parameter)
   - [`new light`](#new-light)
   - [`new widget`](#new-widget)
   - [`new label`](#new-label)
   - [`decorate ...`](#decorate)
  ---
   - [`load project`](#load-project)
   - [`save project`](#save-project)
   - [`load script`](#load-script)
   - [`save script`](#save-script)
   - [`export panel`](#export-panel)


## Getting started

1. Create a new _module_ that is 50.8mm (10 units) wide
   ```
   new module "bodacious" 1U 10H
   ```

2. Create _vertical guidelines_ to position inputs, outputs and parameters:
   ```
   new guide vertical @10.16mm
   ```
   ```
   new guide v1+12.7mm
   ```
   ```
   new guide right-10.16mm
   ```

3. Add a _horizontal guideline_ to position inputs, outputs and parameters:
   ```
   new guide horizontal @20.32mm
   ```
   ```
   new guide h1+3H
   ```
   ```
   new guide top+10.16mm
   ```
   ```
   new guide bottom-15.24mm
   ```

4. Set the _background_:
   ```
   set background "foundation"
   ```

5. Create some _inputs_:
   ```
   new input "frequency"  v1,h1 PJ301M
   ```
   ```
   new input "volume" v1,h2 PJ301M
   ```

6. Create some _outputs_:
   ```
   new output "left" v3,h4-10.16mm PJ301M
   ```
   ```
   new output "right" v3,h4 PJ301M
   ```

7. Create some _parameters_:
   ```
   new parameter "volume" v2,h1 RoundBlackKnob
   ```
   ```
   new parameter "distortion" v2,h2 RoundBlackKnob
   ```

8. Create some _lights_:
   ```
   new light "ok" centre,middle LED
   ```
   ```
   new light "recording" centre,middle+12.7mm LED
   ```

9. Create a _custom widget_:
   ```
   new widget "channels" @40.64mm,20.32mm square
   ```

10. Add a _title_:
    ```
    new label "Thing 1" centre,h3 "StyleScript-Regular" 16pt centre,baseline #c000ff,#00e000
    ```

11. Label the inputs:
    ```
    new label "FREQ"  (input "frequency"+0mm,-5.08mm) "RobotoCondensed-Regular" 8pt centre,baseline
    ```
    ```
    new label "VOL"   (input "volume"   +0mm,-5.08mm) "RobotoCondensed-Regular" 8pt centre,baseline
    ```

12. Label the outputs:
    ```
    new label "LEFT"  (output "left" -5.08mm,+0mm) "RobotoCondensed-Bold" 8pt right,middle
    ```
    ```
    new label "RIGHT" (output "right" -5.08mm,+0mm) "RobotoCondensed-Bold" 8pt right,middle
    ```

13. Decorate the parameter knobs with graduations:
    ```
    decorate (parameter "volume") with "CircularGraduations" (scale 1.1)
    ```
    ```
    decorate (parameter "distortion") with "CircularGraduations" (scale 1.1)
    ```

14. Decorate the outputs with rectangular pads:
    ```
    decorate (output "left"  -3.54mm,+0.0mm) with Pad (stretch 2,0.9)
    ```
    ```
    decorate (output "right" -3.54mm,+0.0mm) with Pad (stretch 2,0.9)
    ```

13. Save the project files:
    ```
    save project
    ```
    ```
    save script
    ```


## Projects

The current state of a project is saved in the browser local storage and the application will do its level best
to resume where you last left off, but **really** you should save a project if it contains any significant work
or changes.

A _.vpd_ project file is a just a human readable JSON file that can be loaded (or dropped on to the panel design
area) to recreate a module.

1. To load a _.vpd_ file:

   - On the user interface _click_ the _File Load_ button (<img width="20" src="doc/images/load.png">) to open
     a file chooser dialog.

     -- or --

   - Drag 'n drop a _.vpd_ file on to the panels design area of the user interface.

     -- or --

   - Execute the `load project` command to open a file picker.

2. To save a project to a _.vpd_ file:

   - On the user interface _click_ the _File Save_ button (<img width="20" src="doc/images/save.png">) to open
     a file chooser dialog (on Chrome - on other browsers the file will be automatically downloaded).

     -- or --

   - Execute the `save project` command which will either open a file chooser dialog (_Chrome_) or just download
     and save the file.


## Scripts

A _.vpx_ script file is simply a text file of VPD commands (one per line) that can be loaded (or dropped on to the panel design area) 
to recreate a module, e.g.
```
new module "bodacious" 1U 10H

new guide vertical @10.16mm
new guide v1+10.16mm
new guide v2+10.16mm
...
...
```

To load a _.vpx_ file:
- On the user interface _Alt-click_ (_Option-click_ on MacOS) the _File Load_ button (<img width="20" src="doc/images/load.png">) to open
  a file chooser dialog.

  -- or --

- Drag 'n drop a _.vpx_ file on to the user interface panels.

  -- or --

- Execute the `load script` command to open a file chooser dialog.


To save a project as a _.vpx_ file:
- On the user interface _Alt-click_ (_Option-click_ on MacOS) the _File Save_ button (<img width="20" src="doc/images/save.png">) to open
  a file chooser dialog.

  -- or --

- Execute the `save script` command to open a file chooser dialog.


## User Interface

### <img width="24" src="doc/images/load.png"> Load

- Clicking on the _Load_ button loads and renders a module saved as a _.vpd_ file.
- Alt-click on the _Load_ button loads and renders a _.vpx_ script file.


### <img width="24" src="doc/images/save.png"> Save

- Clicking on the _Save_ button saves the current project as a _.vpd_ file, using the module name as a filename. 
  `ctrl-click` will save the project with a timestamped filename.

- `alt-click` on the _Save_ button saves the command history as a _.vpx_ script file, using the module name as a filename. 
  `ctrl-alt-click` will save the script with a timestamped filename.

### <img width="24" src="doc/images/export-svg-light.png"> Export SVG

- Clicking on the _Export SVG_ button saves the current panel as an SVG file that can be used as a plugin resource.

### <img width="24" src="doc/images/export-svg-dark.png"> Export SVG (dark)

- Clicking on the _Export dark SVG_ button saves the 'dark theme' panel as an SVG file that can be used as a plugin resource. The
  SVG file is saved with a _-dark_ suffix.


### Undo/Redo

_-- one of these days ---_

### Macro keys

The macro keys (_Ctrl-1_ to _Ctrl-0_) can be programmed with commonly used commands (e.g `save project timestamp gzip`). Clicking on a
macro key (or pressing e.g. `ctrl-1`) will paste the command into the command area where it can be edited and then executed with _Enter_.

To assign a command to a macro key:

1. Type the command into the command area
2. _Alt_-click (_Option_-click on a _Mac_) on the macro key button to assign the command to that key.
3. A macro key command can be viewed by hovering over the key (or of course, just click on it to paste the command into the command
area)

The macro keys assignments are stored only in the browser local storage and are not included in the project file. 

### Command area

The command area comprises two components:

- the _command line_, for entering a VPD command. Commands are executed by pressing _Enter_.
- the _hint_ area, which displays the possible command variations starting from the current command line.


## Commands

##### Comments

A command starting with a double semi-colon is a comment, e,.g,
```
;; new module bodacious 1U 5H
```

This is mostly for use in scripts but it's occasionally useful when assigning a command to a macro key.


##### Units

VPD supports the following units of measurement:
- `mm` (millimeters)
- `H` (standard horizontal units of 5.08mm)
- `h` (half-standard horizontal units of 2.54mm)
- 'U' (standard rack unit height, 128.5mm)

The `U` unit is the height of a panel and is only be used with the `new module` command - and TBH it's there for aesthetics only
because a panel height may be 1U only, no more no less.

Examples:
```
10.16mm
2.5H
3.5h
1U
```


##### Location formats

| Type         | `<xy>`    | Description                                                              | Example                         |
|--------------|-----------|--------------------------------------------------------------------------|---------------------------------|
| **absolute** | `@x,y`    | Absolute x,y location in mm relative to the top left corner of the panel | `@4.5mm,7.62mm`                 |
| **relative** | `x,y`     | x,y location in mm relative to the origin                                | `4.5mm,-7.62mm`                 |
| **geometry** | `h,v`     | x,y location relative to the geometry of the panel                       | `left+4mm,top+10.16mm`          |
| **guides**   | `h,v`     | x,y location relative to the guidelines                                  | `v1+4mm,h1-10mm`                |
| **decorate** | `(e x,y)` | x,y location relative to the component _e_                               | `(input "audio" +4.5mm,-4.5mm)` |
   

#### Parts

Components can be displayed on the _overlay_ layer as the physical representation of the component. The current list of
parts comprises:
- `RoundBlackKnob`
- `PJ301M`

An _unknown_ part will be displayed as an anonymous grey circle devoid of personality, joy or future.

#### Fonts

VPD is a static web app and CORS restrictions mean it cannot load external fonts from e.g. Google Fonts. The following fonts
are included in the app:

- _Lato-Regular_
- _Lato-Semibold_
- _Lato-Bold_
- _RobotoMono-Regular_
- _RobotoMono-Bold_
- _RobotoCondensed-Regular_
- _RobotoCondensed-Bold_
- _StyleScript-Regular_

--- 

#### `set origin`

```set origin <xy>```

The origin is the default _relative_ reference point for locating elements and guidelines.  By default the _origin_ is located at the 
top left corner of the panel - the `set origin` command moves the origin to the `<xy>` location and all elements referencing the 
origin will be relocated relative to the new position.

_Command options:_
```
xy   New origin location. May be an absolute location or a reference to the geometry of the panel.
```

Examples:
```
set origin @10mm,10mm
set origin centre,middle
set origin left+2.54mm,top+10.16mm
```

#### `new guide`

```new guide [label] [orientation] <location>```

Creates a construction guideline that can be used to locate or align inputs, outputs, etc. The components that reference the guideline
will be relocated if the guideline is moved. 

_Command options:_
```
label         (optional) guideline label. Must be unique - default labels will be automatically generated if an explicit label is not
              provided, as _vNN_ for vertical guidelines (e.g. _v1_) and _hNN_ for horizontal guidelines (e.g. _h2_).

orientation   'vertical' or 'horizontal'. Required if the guideline is located using either an absolute location or a location
              relative to the origin, otherwise it is automatically derived from the referenced guideline or geometry.

location      Location of the guideline, either as an absolute offset from the top/left of the panel, an offset from the origin
              or an offset from the geometry of the panel.              
```

_Notes:_
1. The location can be:
   - _absolute_ e.g. `new guide vertical @4.5mm`
   - _relative to the origin_ e.g. `new guide vertical +4.5mm`
   - _relative to the geometry_ e.g. `new guide centre`
   - _relative to another guide_ e.g. `new guide v1+4.5mm`
2. Geometry values are:
   - `left | centre | right` for vertical guidelines
   - `top  | middle | bottom` for horizontal guidelines
3. `vertical` and `horizontal` are optional for guidelines that reference the panel geometry.
4. `V0` and `H0` can be used to reference the vertical and horizontal guides at the origin, i.e.
   `new guide V0+4.5mm` is the same as `new guide vertical +4.5mm`


_Examples_

```
new guide v1 vertical @4.5mm
new guide vertical +4.5mm
new guide vertical -4.5mm
new guide vertical left
new guide center
new guide v1+10.16mm
new guide vertical v1+2H

new guide horizontal middle
new guide middle
new guide H0+7.62mm
```   

#### `delete guide`

```delete guide <id>```

Removes a construction guideline. 

_Command options:_
```
id   Label identifiying guideline to delete
```

_Notes:_
1. Quite happily deletes guidelines that do not exist.
2. Deleting a guideline referenced by other guidelines or components will set those entities adrift to 
   wander in space and time. Creating a new guideline with the missing identifier (`new guideline <label> ...`)
   will anchor them to the new reality.

_Examples_

```
delete guide v1
```   

--- 

#### `new module`

```new module <name> [height] <width>```

Creates and initialises a new module.

_Command options:_
```
name     Module name, optionally surrounded by single or double quotes
height   (optional) panel height. The only valid values are 1U or 128.5mm
width    Panel width, in mm or _horizontal units_ (H) of 5.08mm. The width in mm 
         is rounded to the nearest integer multiple of 5.08mm (e.g. a value of 45mm
         is rounded 45.72mm)
```

_Notes:_

_Examples:_
```
new module bodacious 1U 5H
new module bodacious 1U 45mm
new module bodacious 45.72mm
````


#### `set module name <name>`

```set module name <name>```

Sets the module name.

_Command options:_
```
name    Module name, optionally surrounded by single or double quotes. 
```

_Notes:_

_Examples:_
```
set module name Thing1
set module name 'Thing 1'
set module name "Thing 1"
````

#### `set module height <height>`

```set module height <height>```

Sets the module panel height.

_Command options:_
```
height     Module panel height (128.5mm or 1U). 
```

_Notes:_

_Examples:_
```
set module height 1U
set module height 128.5mm
````

#### `set module width <width>`

```set module width <width>```

Sets the module panel width.

_Command options:_
```
width   Module panel width in either mm or H (standard horizontal units of 5.08mm). A module width
        in mm is rounded to the nearest multiple of 5.08mm.
```

_Notes:_

_Examples:_
```
set module width 50mm
set module width 10H
````

#### `set background`

```set background none|<rgb>[,<rgb>]|<rgba>[,<rgba>]|name```

Sets the panel background to either a plain colour or the name of a preloaded backround.

_Command options:_
```
none   Removes the background from the SVG
rgb    RGB colour hex value e.g. #ff0000
rgba   RGBA colour hex value e.g. #ff000040
name   Name of a predefined background, optionally surrounded by single or double quotes
```

_Notes:_
1. The default background is a transparent rectangle
2. `rgb` and `rgba` backgrounds can optionally specify a dark mode background colour.
3. The background name is case- and space-insensitive
4. The predefined backgrounds are:
   - `foundation`

_Examples:_
```
set background none
set background #ff00ff
set background #ff00ff,#00ff00
set background #ff00ff40
set background #ff00ff40,#00ff0080
set background foundation
````

--- 

#### `new input`

```new input <name> <xy> [part]```

Creates an `input` component _placeholder_ in the _components_ layer of the SVG and (optionally) displays the physical
input on the _overlay_ layer. The _overlay_ is for display only and is not exported to the resource SVGs when exported.

_Command options:_
```
name     Input name, optionally surrounded by single or double quotes and used by the VCV plugin helper scripts
         to generate the module skeleton. Should be unique unless you're deliberately trying to make the C++ 
         compiler miserable.
xy       Location of the centre of the input component. Must be one of the supported location formats (described 
         [above](#location-formats)).
part     (optional) Physical part to display on the overlay - a red circle is displayed on the overlay if a part
         is not provided.
```

_Notes:_

_Examples:_
```
new input frequency @10.16mm,10.16mm
new input frequency @10.16mm,10.16mm PJ301M
new input frequency 10.16mm,10.16mm PJ301M
new input frequency left+5.08mm,top+2H PJ301M
new input frequency v1+5.08mm,v2+7.62mm PJ301M
````


#### `delete input`

```delete input <id>|<name>```

Removes an _input_ component identified either by the automatically assigned identifier or the _name_
supplied to the `new input` command.

_Command options:_
```
id     Identifier of the input to delete (the identifier is the automatically generated ID assigned to the input)
name   Name of input.
```

_Notes:_
1. Blissfully ignores the command if the input does not exist.
2. Deleting an input referenced by other components will set those entities loose to drift around aimlessly,
   so hopefully it was what you really wanted to do and also have a backup handy.

_Examples_

```
delete input i1
delete input audio
```   

--- 
#### `new output`

```new output <name> <xy> [part]```

Creates an `output` component _placeholder_ in the _components_ layer of the SVG and (optionally) displays the physical
input on the _overlay_ layer. The _overlay_ is for display only and is not exported to the resource SVGs when exported.

_Command options:_
```
name     Output name, optionally surrounded by single or double quotes and used by the VCV plugin helper scripts
         to generate the module skeleton. Should be unique unless you have a really good reason for it not to be.
xy       Location of the centre of the output component. Must be one of the supported location formats (described 
         [above](#location-formats)).
part     (optional) Physical part to display on the overlay - a red circle is displayed on the overlay if a part
         is not provided.
```

_Notes:_

_Examples:_
```
new output audio @10.16mm,10.16mm
new output audio @10.16mm,10.16mm PJ301M
new output audio 10.16mm,10.16mm PJ301M
new output audio left+5.08mm,top+2H PJ301M
new output audio v1+5.08mm,v2+7.62mm PJ301M
````

#### `delete output`

```delete output <id>|<name>```

Removes an _output_ component identified either by the automatically assigned identifier or the _name_
supplied to the `new output` command.

_Command options:_
```
id     Identifier of the output to delete (the identifier is the automatically generated ID assigned to the input)
name   Name of input.
```

_Notes:_
1. Unknown output IDs or names are totally acceptable.
2. Deleting an output referenced by other components will cause irreversible mayhem and chaos, but that's life
   Jim.

_Examples_

```
delete output o1
delete output left
```   

--- 
#### `new parameter`

```new parameter <name> <xy> [part]```

Creates a `parameter` component _placeholder_ in the _components_ layer of the SVG and (optionally) displays the physical
input on the _overlay_ layer. The _overlay_ is for display only and is not exported to the resource SVGs when exported.

_Command options:_
```
name     Parameter name, optionally surrounded by single or double quotes and used by the VCV plugin helper scripts
         to generate the module skeleton. Should be unique but the compiler will barf if you mess it up.
xy       Location of the centre of the parameter component. Must be one of the supported location formats (described 
         [above](#location-formats)).
part     (optional) Physical part to display on the overlay - a red circle is displayed on the overlay if a part
         is not provided.
```

_Notes:_

_Examples:_
```
new parameter volume @10.16mm,10.16mm
new parameter volume @10.16mm,10.16mm PJ301M
new parameter volume 10.16mm,10.16mm PJ301M
new parameter volume left+5.08mm,top+2H PJ301M
new parameter volume v1+5.08mm,v2+7.62mm PJ301M
````


#### `new light`

```new light <name> <xy> [part]```

Creates a `light` component _placeholder_ in the _components_ layer of the SVG and (optionally) displays the physical
input on the _overlay_ layer. The _overlay_ is for display only and is not exported to the resource SVGs when exported.

_Command options:_
```
name     Light name, optionally surrounded by single or double quotes and used by the VCV plugin helper scripts
         to generate the module skeleton. Should be unique but really it's up to you.
xy       Location of the centre of the light component. Must be one of the supported location formats (described 
         [above](#location-formats)).
part     (optional) Physical part to display on the overlay - a purple circle is displayed on the overlay if a part
         is not provided.
```

_Notes:_

_Examples:_
```
new light "on" @10.16mm,10.16mm
new light on @10.16mm,10.16mm LED
new light on 10.16mm,10.16mm LED
new light recording left+5.08mm,top+2H "Red LED"
new light recording v1+5.08mm,v2+7.62mm "Red LED"
````


#### `new widgets`

```new widget <name> <xy> [part]```

Creates a `widget` component _placeholder_ in the _components_ layer of the SVG and (optionally) displays the physical
input on the _overlay_ layer. The _overlay_ is for display only and is not exported to the resource SVGs when exported.

_Command options:_
```
name     Widget name, optionally surrounded by single or double quotes and used by the VCV plugin helper scripts
         to generate the module skeleton. Should be unique otherwise you won't be able to tell them apart.
xy       Location of the centre of the widget component. Must be one of the supported location formats (described 
         [above](#location-formats)).
part     (optional) Physical part to display on the overlay - a yellow circle is displayed on the overlay if a part
         is not provided.
```

_Notes:_

_Examples:_
```
new widget "channels" @10.16mm,10.16mm
new widget channels  @10.16mm,10.16mm "ChDsp"
new widget channels  10.16mm,10.16mm  "ChDsp"
new widget channels  left+5.08mm,top+2H "ChDsp"
new widget channels  v1+5.08mm,v2+7.62mm "ChDsp"
```

#### `new label`

```new label <text> <xy> [font] [font-size] [halign,valign] [colour]```

Creates a text label and converts it to an SVG path.

_Command options:_
```
text       Label text, optionally surrounded by single or double quotes
xy         Location, either as absolute co-ordinates, relative to the origin or relative to the 
           geometry of the panel.
font       (optional) name of preloaded font. Defaults to RobotoMono-Bold.
font-size  (optional) font size (points). Defaults to 12pt.
halign     (optional) horizontal alignment (left, centre or right). Defaults to left.
valign     (optional) vertical alignment (top, middle, baseline or bottom). Defaults to baseline.
colour     (optional) text colour pair. The colour may be either standard colour names (e.g. red, blue),
                      RGB (e.g. #ff000) or RGBA (e.g. #ff000080). The default colours are #222222 for the
                      light themed panel and #ebebeb for the dark themed panel.
```

_Notes:_
1. The preloaded fonts are:
   - `Lato-Regular`
   - `Lato-Bold`
   - `RobotoMono-Regular`
   - `RobotoMono-Bold`
   - `RobotoCondensed-Regular`
   - `RobotoCondensed-Bold`
   - `StyleScript-Regular`
2. Font names are case- and space-insensitive

_Examples:_
```
new label "Lorem Ipsum" centre, top+10.16mm
new label "Lorem Ipsum" centre, top+10.16mm "Lato-Bold" 14.5pt centre
new label "Lorem Ipsum" centre, top+10.16mm "Lato-Bold" 14.5pt centre,baseline
new label "Lorem Ipsum" centre, top+10.16mm "Lato-Bold" 14.5pt centre,baseline red
new label "Lorem Ipsum" centre, top+10.16mm "Lato-Bold" 14.5pt centre,baseline #ffff0080
new label "Lorem Ipsum" centre, top+10.16mm "Lato-Bold" 14.5pt centre,baseline #ff0000,#00ff00
new label "Lorem Ipsum" centre, top+10.16mm "Lato-Bold" baseline #ff0000,#00ff00
````


#### `decorate`

```decorate (<component> <name> <offset>)with <decoration> [scale] [stretch]```

Adds a _decoration_ (e.g. graduations, output pad) to an input, output, parameter, light or widget.

_Command options:_
```
component    input, output, parameter, light or widget. Used to disambiguate component references.
name         name or ID of the component to decorate.
offset       (optional) xy offset by which to adjust decoration. Defaults to (0.0,0.0).
decoration   name of a predefined decoration.
scale        (optional) amount by which to scale the decoration so that it matches the size of the
                        of the component when rendered on the panel.
stretch      (optional) stretches the decoration vertically and/or horizontally without changing the
                        appearance (e.g. rounded corners keep the same radius). Defaults to (1,1)
```

_Notes:_
1. The predefined decorations are:
   - `CircularGraduations`, a graduations decoration for parameter knobs.
   - `Pad`, a rectangular pad to highlight outputs.
2. Decoration names are case- and space-insensitive.
3. Not all decorations support _scale_ and/or _stretch_.

_Examples:_
```
decorate (parameter "volume") with "CircularGraduations"
decorate (parameter "volume") with "CircularGraduations" (scale 1.1)
decorate (output "audio" +0.0mm,-2.54mm) with Pad (stretch 1,1.5)
````

---
  #### `load project`

```load project```

Opens a file chooser to load a `.vpd` project file.

_Example:_
```
load project
````


#### `save project`

```save project [timestamp] [gzip]```

Saves the current project to a `.vpd` project file, using the module name as the suggested filename. On _Chrome_ it 
opens a file chooser to save the file - on _Firefox_ and most other browsers the file is downloaded automatically.

_Command options:_
```
timestamp  (optional) the suggested file name is suffixed with the current date and time
gzip       (optional) compresses the project with gzip
```

_Notes:_
1. Compressed projects have a _.vpz_ extension.


_Example:_
```
save project
save project timestamp
save project gzip
save project timestamp,gzip
````


#### `load script`

```load script```

Opens a file chooser to load a `.vpx` script file.

_Example:_
```
load script
````


#### `save script`

```save script [timestamp]```

Saves the commands required to recreate the current project to a `.vpx` script file, using the module name as the suggested filename. On
 _Chrome_ it opens a file chooser to save the file - on _Firefox_ and most other browsers the file is downloaded automatically.

_Command options:_
```
timestamp  (optional) the suggested file name is suffixed with the current date and time
```

_Notes:_


_Example:_
```
save script
save script timestamp
````


#### `export panel`

```export panel svg [light|dark]```

Exports the panel as an SVG for use as a plugin resource file, using the module name as the suggested
filename (with a `-dark` suffix for the dark theme SVG).

_Command options:_
```
svg    (required) exports SVG file
light  (optional) exports the default panel SVG
dark   (optional) exports the dark themed SVG
```

_Notes:_
1. Non-alphanumeric characters in the module name are replaced with underscores.

_Examples:_
```
export panel svg
export panel svg light
export panel svg dark
````

