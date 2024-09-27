# FAQ

1. _Shouldn't **centre** be spelled **center**?_

   What?!? No!! You _heathen_ ... sheesh! See also _colour_ and _through_ ... 


2. _What happens if I specify an X location relative to a horizontal guide?_

   Nothing. Well, technically you consign your widget to the ninth level of hell for all infinity and quite possibly 
   [_break the Internet_](https://www.youtube.com/watch?v=v2FMqtC1x9Y), but other than that nothing.


3. _Ok, but then what if I specify a Y location relative to a vertical guide?_

   Cthulhu is **so** coming to get you...


4. _Can I put a 'load script' command in a script file?_

   Absolutely no idea. Try it and if you live through the experience please file an issue to update the FAQ.


5. _Why can't I do X?_

   _"Because it's wrong!"_ - [_BTVS_](https://youtu.be/QrluNqSjoHg?si=z_XZRsL5lh8OuUj7&t=29).


6. _I forgot to save the project as a script and now I want to run the script and ..._

   Oh no!! Woe is you! 

   Well, actually it happens to the best of us but luckily the project _.vpd_ is straight JSON and it so happens
   the script is also stored in that so as long as you have the project file all is not lost.

   If you have [_jq_](https://github.com/jqlang/jq) installed then the command to extract the script is:
   ```
   jq -r '.script[]' <<vpd file>>
   ```

   _.vpz_ files are just gzipped versions of _.vpd_ files so you just need to gunzip them first:
   ```
   gunzip --uncompress --keep --suffix vpz -c [vpz file] > [vpd file]
   jq -r '.script[]' [vpd file]
   ```
   
   If you don't have _jq_ installed any text editor (but not _emacs_) will do - the script lines are right at the 
   bottom of the file but you'll have do some cleaning up. Probably easier just to install _jq_.

7. What's with that weird-ass 0.338 scaling factor in the parts SVGs?

   Despite the user manual emphasizing the use of millimeters, the VCV core and fundamental components are apparently designed 
   for a panel size of 15px by 380px (cf. https://community.vcvrack.com/t/scaling-of-rack-controls-in-svg/22339). VPD
   being a well-behaved thing that follows the rules, uses a panel size of 5.08mm by 128.5mm. Scaling the widgets from
   the core and fundamental components:
   ```
   128.5/380 = 0.338
   ```

