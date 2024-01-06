# User Guide

### Contents

- [Getting started](#getting-started)


## Getting started

1. Create a new module that is 50.8mm (10 units) wide
   ```
   new module "bodacious" 1U 10H
   ```

2. Create vertical guidelines to locate inputs, outputs and parameters:
   ```
   new guide vertical @10.16mm
   ```
   ```
   new guide v1+10.16mm
   ```
   ```
   new guide v2+10.16mm
   ```
   ```
   new guide v3+10.16mm
   ```

3. Add a horizontal guideline to locate inputs, outputs and parameters:
   ```
   new guide horizontal top+20.32mm
   ```
   ```
   new guide h1+2H
   ```
   ```
   new guide bottom-15.24mm
   ```

4. **TODO**


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

