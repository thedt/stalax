Jedi Academy public SDK and tools release
11/26/2003

These tools are released "as is" and are unsupported by Raven Software, Activision or LucasArts.

Star Wars® Jedi Knight® : Jedi Academy™: 

© 2003 LucasArts Entertainment Company LLC. © 2003 Lucasfilm Ltd. & TM or ® as indicated. 
All rights reserved. Used Under Authorization. LucasArts and the LucasArts logo are registered 
trademarks of Lucasfilm Ltd. Any use of any of the materials on this site other than for private, 
non-commercial viewing purposes is strictly prohibited. 



_______________________________________________________________________________________________________

I fixed the JKA source code. You can now build JKA for Linux, Windows, or Mac. Also alot of the 
glitches that were found previously are fixed thanks to OJP, Clan Mod, and all the other great
authors out there who put alot of time into finding and fixing these. 

To build on Windows, use either Visual Studio 2003, or Visual Studio 2005. Just open up the solution
file (JKA_mp(SDK).sln) and if you have 2005, I put in the fixes used in OJP so that its buildable, and
it wont give you as many errors or warnings as it use to with 2005.

To build in Linux, you can use ICC (Intel C++ Compiler), which is what Ravensoft used to make the Linux
version. Just use my Makefile which is located in the "codemp\game" folder. Just cd to "codemp\game"
and type in "make" to begin the compilation.

To build the Mac version, just use Xcode. Redsaurus applied the newest version to Clan Mod, so I put
it in this source as well so you could build the JKA source on the newest Xcode as well.


www.clanmod.org

                                     Happy modding everybody! Cheers!