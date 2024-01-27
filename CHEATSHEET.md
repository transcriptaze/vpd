# Cheatsheet

# Load/Save

| _Command_                         | _Examples_                          |
|-----------------------------------|-------------------------------------|
| `load project`                    | _load project_                      |
| `save project [timestamp] [gzip]` | _save project_                      |
|                                   | _save project timestamp_            |
|                                   | _save project gzip_                 |
|                                   | _save project timestamp gzip_       |


| _Command_                         | _Examples_                          |
|-----------------------------------|-------------------------------------|
| `load script`                     | _load script_                       |
| `save script [timestamp]`         | _save script_                       |
|                                   | _save script timestamp_             |


# _module_

| _Command_                            | _Example_                        |
|--------------------------------------|----------------------------------|
| `new module <name> <height> <width>` | _new module "Thing 1" 1U 50mm_   |
| `set module name <name>`             | _set module name "Thing 1_       |
| `set module height <height>`         | _set module height 1U_           |
| `set module width <width>`           | _set module width 50mm_          | 


# _background_

| _Command_                            | _Example_                            |
|--------------------------------------|--------------------------------------|
| `set background none`                | _set background none_                | 
| `set background <rgb>`               | _set background #ff0000_             | 
| `set background <rgb>,<rgb>`         | _set background #ff0000,#00ff00_     | 
| `set background <rgba>`              | _set background #ff000040_           | 
| `set background <rgba>,<rgba>`       | _set background #ff000040,#00ff0080_ | 
| `set background <gradient>`          | _set background "foundation"_        | 
