==========================
AROS: The AROS Research OS
==========================

:Author: Aaron Digulla
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version: $Revision$
:Date: $Date$

.. Contents::


Abstract
========

This paper describes AROS - The AROS Research OS. It contains information about
the background of the Amiga and its OS, about AROS, the people who do it and
why, and technical details about AROS.


Introduction and motivations
============================

What is an Amiga? An Amiga is a dream. The dream of a computer which does what
I want. The dream of a computer which can do whatever I might ever want. The
dream of a computer which I can still afford.

The Amiga has shown some incredible features when no one knew what they were.
Lately, you can read about "Object Oriented Development", "Multimedia
Applications", "Creative Computing", "Multitasking" and it might seem that these
are new ideas developed just last week. The Amiga had them since 1985 but back
at that time, these things had no names and therefore no one could say what it
was, this strange "Amiga feeling".

The Amigas' operating system (OS) was the first object oriented OS ever. Today
it's still the most powerful, yet most simple and fastest OS around. Powerful
doesn't mean that it has more features than Win95, nor that it's as simple to
use as Mac OS - Amiga power means that you can have as many features as Win95 or
can make it as simple to use as MacOS and maybe even both. Someone called this
"stretchability" and I think this is a perfect description: You can stretch the
Amiga OS very far without ripping it apart.

But for several years now, Amiga OS has been dead. The Amiga itself has been
dead because Commodore, the creator of the Amiga, went bankrupt overnight. This
was the second firm connected to the Amiga which failed. The original inventor
of the Amiga, Amiga Inc. [#]_, had to sell the idea and the rights of the Amiga
to Commodore because they were running out of money, too. About one year later
and after lots of sweat from the Amiga fans, the Amiga seemed to be saved when
Escom, a big German PC seller lead by a former Commodore exec, bought the assets
of Commodore and created a subsidiary firm, Amiga Technologies (AT). AT should
be independent and its business was the Amiga - a dream came true. But the dream
turned into a nightmare when Escom went bankrupt, too. AT was doomed and if it
was not for one man, the Amiga would be history today.

Petro Tyschtschenko, the president of AT, fought for our dream when everyone
else would have given up. He talked to the creditors and after another two
years, he really made it: AT was bought by Gateway 2000, another PC seller. This
was in Spring 1997.

Now what is AROS? AROS began early 1995 as AOS. Some Amiga fans became nervous
about the fate of the Amiga and the success of Windows. It was soon discovered
that the future of the Amiga was not its hardware. The concept of the Amiga
hardware is great but we concluded that the future is not in custom made parts
but by buying standard parts made for the PC and just plugging them together. So
what was so special about the Amiga if not the hardware? The OS of course. But
Windows got close, we thought, and the Amiga OS hadn't been in development for
several years now. So it was time for improvement and if no one else would be
doing it, then we would. The AOS project began to discuss and collect ideas for
improvements.

A year later, a pattern emerged from the discussions. While everyone was very
eager to advance the features of the Amiga OS, we could not really agree what
new features we needed, how they could be implemented and sometimes not even if
they could be done at all. Also new people joined the discussion all the time,
requesting impossible things. In the beginning, we tried to explain that we had
already discussed this but in the end, it was a pain. So the idea lost momentum.
It was late in 1995 when I joined the discussion. After some weeks I was sure
that the approach was correct but it didn't seem to be advancing. After one year
and almost 300 participants, you'd expect some results but nothing had been ever
done. So I sat back and thought what could be done. Since I wasn't sure,
I compiled a list of things we could do and asked everyone to say what they
thought. It soon became clear that what we wanted was a new Amiga OS but that we
didn't know enough of the OS to say how it could be improved. So I proposed to
write our own OS which should be compatible to the Amiga OS. When this new OS
would be finished, then we would have all the information we needed to really
discuss if a feature could be implemented and how. AROS was born.

I began to set up a framework which would allow developers from all over the
world to commit single Amiga OS functions to the project without needing to know
about the rest. This allowed developers with little or even less time, to
participate. I was soon joined by Matthias Fleischer, who wrote most part of the
core of AROS (namely Exec and DOS, the parts of Amiga OS which do the
multitasking and the disk accesses). After that, Lennard voor den Dag joined the
team, working on AROS for the Amiga. Today, 40 developers have registered with
the project and about 10 of them submit regularly.


Why not give up the Amiga?
--------------------------

Short: You give up a close friend of yours and I give up my Amiga. Probably, we
are the Manta [#]_ drivers of the computer scene.

The Amiga still has many features which no one else has and some of them for
twelve years. This of course means that they have been used by many people and
are known to work while other OS's where these features have been added lately
still work unreliable. Here is a list which is by no means complete:

+ There is a well defined way to extend or replace every parts of the OS. Other
  OS allow this, too, but sometimes you must use private functions or you must
  change the source of the OS to make this possible for every part.

+ The different parts of the OS are independent of each other. If you change
  one, you don't get unexpected failures somewhere else. Most other OS just
  begin to understand how important it is to keep things apart. Linux, for
  example, must be compiled every time a new device driver comes up. Windows
  must restart itself every time when you change the configuration of a device.
  On the Amiga, you can load device drivers at any time, they can be put into
  a ROM and installed on the card with the device's other hardware; you don't
  even need to install software on the computer. Just plug the card into a slot
  and turn the computer on and it works.

+ The GUI is very flexible. It allows to adjust the behavior of an application
  in ways the original developer had not dreamed about. Win95 can do similar,
  but Amiga OS does it more elegant. Linux begins to explore this with KDE but
  as of yet, it can't do anything like that.

+ All Amiga applications can talk to each other. Many can be remote controlled
  from another. Most other OS's can't do this and those who can, are more
  complicated or very limited.

+ Amiga OS is very reliable. Since it doesn't have real memory protection, a bug
  can crash it very easily, but most of the time you can find the source of the
  problem very quickly. If Win95 crashes, most of the time, you have no clue
  what was really going on and it crashes in spite of the memory protection.

+ The Amiga OS "fits". It isn't the Swiss Army Knife(tm) of operating systems
  and unlike Windows, it doesn't even try. Maybe Windows can do more but as
  everyone who must work with tools (eg. a hammer) can tell you: Most of the
  time, you don't need a special tool. A hammer is a primitive tool but this
  also means that it doesn't break easily. If you have a hammer with a lamp in
  the handle, you will notice that the lamp breaks if you hammer hard - the
  basic law of complexity. If something is more complex, then it breaks more
  easily. Always remember, most people buy a computer because they need to get
  something done and not because the computer has Windows installed.

So why not Windows? Windows is a very complicated piece of software and the many
problems people have, if they use the uncommon [#]_ features reflect that.
Sometimes even installing software fails if you choose "Custom Setup" which
shows that Windows just cares about the average user. Professionals who need to
get things done, often try to avoid Windows.

Why not Linux? Linux is free but as every Unix, it's hard to maintain. You must
know many things about the internals of Unix to install it (even though many
things are hidden by installer scripts supplied by many sources).

Why not Mac OS? Mac OS is the only real alternative to the Amiga OS but it lacks
the flexibility of the Amiga.

Why not BeOS? Well, honestly, I just don't know enough about BeOS to have an
opinion. So it's just missing because I don't know anything about it and not
because it's bad. Have a look yourself.


Details of AROS
---------------

AROS - The AROS Research OS is the follow-up of the AOS project. Its goals are
to develop a portable, free version of the Amiga OS for every hardware. In
addition, we create software development tools for Amiga OS and AROS.

+ AROS is written in ANSI C. Currently, it can be compiled on several free
  Unixes on Intel PCs and Amigas with Amiga OS and Linux/m68k.

+ AROS is still fast despite being written in C, because every file *can* be
  replaced by an optimized assembler version.

+ AROS is free. The source is publicly available [#]_ and we don't ask a fee for
  using it [#]_.

+ AROS can be binary compatible on m68k. This doesn't mean that we support bugs
  but old software will run for the current and the next major version of AROS
  (1.x and 2.x). For 3.x we will probably drop this (we talk about 2 years in
  the future here), because some features of the Amiga OS are just not
  future-compatible (eg. BPTRs).

+ AROS tries to fix all known bugs in Amiga OS and we try to clean everything
  while we proceed (eg. DOS file-systems are now Exec Devices because the DOS
  API for file-systems can be emulated automatically with the Device API and the
  Exec Device API has less inconsistencies and is better known and understood).

+ AROS comes in three flavours: Standalone, Emulation and Link lib plus an
  optional Binary Compatible mode which is possible with every flavour when an
  m68k compatible CPU or CPU emulation is available.

Standalone means that you can boot under AROS like under Linux or Amiga OS.
Emulation means that you can compile Amiga software but AROS runs under a native
OS as an Emulation. This is how we develop AROS because its the fastest way to
do it: We can run AROS in a debugger in the native OS, for example. Link lib
means that you can compile Amiga applications for another OS which will then run
with native look and feel (eg. to bring Amiga applications to Windows, etc).


What is it not?
---------------

AROS is not "A great new hyper OS". We refuse to build in neat gadgets like
Memory Protection (MP) or similar just for the fun of it. Some things are
necessary and we explore the possibilities to include them but we don't jump for
a hype. The people who wrote the Amiga OS were not stupid, writing AROS is
astonishingly easy (remember "stretchability"?). Some things in the Amiga OS
might look stupid, but they aren't. We will change the known behavior of the
Amiga OS only if there is really no other way - and will offer a simple way to
maintain compatibility with the original OS because developers will not support
us if their applications don't run on both systems without change.

AROS will also be compatible with future versions of the Amiga OS from AI [#]_.
We fully agree with AI that the Amiga market will not survive a split and if
they introduce a new standard, then AROS will have it, too.


Why use AROS instead of Amiga OS?
---------------------------------

If you own an Amiga, then AROS is not an issue for you. Too few parts of AROS
work on the Amiga right now. If you want to make your code run on more platforms
than the Amiga alone, then AROS might be just what you're looking for.

Also, the source for AROS is available. You found a bug and your product ships
tomorrow? Just fix it and send us a patch and your product will still ship OK
and in time.

AROS' second goal is to develop a powerful set of software development tools.
Just a short list of ideas:

+ Automatic bug tracking software during the development process.

+ An OS which produces extensive information in case of a software or hardware
  fault (instead of Guru Meditation \$8000 0003).

+ We will offer a new kind of installer which allows to keep the last versions
  of the installed software, step back and forth between the versions,
  automatically receive and install updates over the Internet and send bug
  reports.

This will allow to produce bug free and fast software. Tools like Purify allow
to find deeply hidden bugs even in code for which one can't get the source. The
concept of AROS allows to find bugs early in the production process and debug
the software before it's delivered. Therefore the delivered code will be small,
fast and bug free, because it contains only the necessary checks.

And last but not least, AROS has HIDDs - Hardware Independent Device Drivers.
The concept of a HIDD is very powerful. It allows to design an API which is
fast, slim and still future-proof. The design uses modern OO techniques as well
as techniques which have already proven that they work. We are in contact with
the people who write the drivers for Linux and NetBSD and we'll try to make them
use our HIDD concept which would immediately open a wide set of hardware drivers
for AROS. This means that your application doesn't need to care about working
with lots of incompatible APIs and that you'll have plenty of hardware which you
can use without the need to change your code.


How useful is AROS today?
-------------------------

If you are a user, not much. AROS is just not complete enough, yet. But we are
advancing with a steady pace and by the end of the next year [#]_, AROS will be
able to do, what Amiga OS can today but not only on the Amiga but also on Intel
PCs, PPC Amigas, DEC Alpha hardware and probably many more.

If you are a developer, then AROS already contains some tools to develop
software for the Amiga with Resource Tracking and Purify. Soon the first HIDDs
(see below) will appear and add to the power of AROS.


How can I support AROS?
-----------------------

Right now, we need beta testers for our development software and we need people
who know something about the Amiga OS. We need people who write a free version
of the RKRMs explaining how to use the Amiga OS. We need people to write HIDDs
and more Amiga OS functions. We need people with access to some hardware where
AROS is not yet completely available (eg. Amiga, Alpha, PPC) which test and port
more parts of AROS.

You can reach us under the following address::

    Aaron "Optimizer" Digulla
    Haldenweg 5
    78464 Konstanz
    Germany

    irc:   Optimizer on #amigager
    email: digulla@aros.org
    WWW:   http://www.aros.org/

Since we have a very lean project management, every developer can work very
independent and concentrate on his part. If you want to contribute, you should
get a copy of the "Amiga Developer CD V1.1" published by::

    Stefan Ossowski's Schatztruhe
    Veronikastr. 33
    45131 Essen
    Germany

    WWW: http://www.schatztruhe.de/

You should also try to get a copy of "Amiga ROM Kernel Reference Manuals
- Libraries - Third Edition" (RKRM, ISBN 0-201-56774-1, eg. at
http://www.amazon.com) and the "Guru Book" (has no ISBN). Both are out of print
for quite some time now and you probably have to search them.


How secure is the future or AROS?
---------------------------------

I'm honest here because I believe that telling you hypes doesn't pay back. The
future of AROS fully depends on AI. If they say that they don't like AROS
(basically we give away for free what they want to sell), then AROS has no
future. The question is not if we can survive a confrontation of AI or if AI's
reputation will take severe damage if they stop AROS. This is not why we did
AROS and this is not they way we should handle this nor will we.

Now you might think we are wasting time with this project but that's not true.
It's just that we want to keep the Amiga feeling alive and not to fight
commerce. AI has fought a long battle to keep the Amiga alive and they deserve
the profit. Our goal is to explore the future possibilities of the Amiga OS and
even if AROS is incomplete yet, we still have gained a lot of knowledge about
the Amiga OS and we have developed a very long list of possible improvements
that we can implement no matter if AROS itself, ie. the rewrite of a free
version of the Amiga OS, succeeds.

We talked with many Amiga firms, namely Stefan Ossowskis Schatztruhe, phase5,
PIOS, VMC, proDAD and others and they were positive about our effort (even
proDAD who write a new Amiga OS, pOS, themselves). We were even contacted by
other firms which want to do Amiga clones or emulation software. We are working
on a way to merge UAE, the Unix Amiga Emulator and AROS to make UAE faster and
allow AROS to run more software (without needing to recompile them). The main
feedback from everyone was really positive, so we think we are on the right
track.

Now what if AI says we have to stop AROS ? This would of course mean that we
wasted about one year of time to develop our own Amiga OS. But then, wasted is
not what we did. Our ideal is to produce software for which the developer can
*guarantee* that it doesn't contain any bugs. We'll never reach that, of course,
but what's a goal when you can put your foot on it ? Everyone needs a goal he
can try to reach in his life. It doesn't matter if you can reach your goals; it
just matters that you try - try with all your heart. Eventually you'll reach
a place where no one else has been before and that's what Amiga is all about.

We also believe that today, developing an own OS doesn't pay back. Windows
controls the market and if you want some success, then you have to do something
which lives in the Windows world. Microsoft also doesn't make its big profits
with Windows itself but with software for Windows. This is why AROS is free and
why in the end, we will be successful, no matter what happens.


Technical details or AROS
=========================

The power of Macros
-------------------

Source for the Amiga OS has many special features which are connected to the
hardware. An example is the calling convention of Amiga OS functions from user
code: All Amiga OS functions expect their arguments in specific CPU registers.
Now while this is very convenient on the Amiga with its CPU with many registers,
this is impossible to maintain on CPUs with less registers and hard on CPUs
which have enough registers but which have different calling conventions.

AROS solves this and many other problems by using the C Pre-Processor (CPP).
A function header looks like this::

    /***************************************************************************

        NAME */
    #include <exec/lists.h>
    #include <proto/exec.h>

        AROS_LH2I(void, AddHead,

    /*  SYNOPSIS */
        AROS_LHA(struct List *, list, A0),
        AROS_LHA(struct Node *, node, A1),

    /*  LOCATION */
        struct ExecBase *, SysBase, 40, Exec)

    /*  FUNCTION
        Insert Node node as the first node of the list.

        ...

It's arguable if this looks ugly or not. More important is that this header
contains all information about the function in a format which can be processed
by the CPP and other automated tools [#]_.

The user of the function never sees this. He just calls \verb.AddHead(). which
is in fact a macro [#]_::

    #define AddHead(list, node) \
        AROS_LC2I(void, AddHead, \
        AROS_LCA(struct List *, list, A0), \
        AROS_LCA(struct Node *, node, A1), \
        struct ExecBase *, SysBase, 40, Exec)

which is generated automatically from the headers. So to create a shared
library, you just have to call a tool with a list of files. It will create the
jump table, the library resident header and the rest for you.


CVS or how to cook a meal with many cooks
-----------------------------------------

The Concurrent Version System, or CVS, allows to keep the source of a project on
an server on the Internet (like a WWW server). You can then get a current copy
of the source, update your local copy, create a list of differences between your
local copy and the sources on the server as well as commit your changes.

CVS keeps a log of changes with the name of the person who did the change plus
a message about the change. You can get a list of all changes ever made to
a file and CVS can even tell you what has changed between all versions.

CVS solves many problems which occur when many people work on one project
automatically and provides help to solve the rest. I strongly recommend CVS for
any project where more than one person works on the source and even if you are
the only one working on the project, you should think about using it just for
the feature of being able to see what you changed last week.

CVS is free software distributed under the GPL and you can get more information
about it at http://www.cyclic.com/.


HIDDs - Power to the hardware
-----------------------------

A HIDD is basically a BOOPSI object with an additional Exec Device API. As an
example, let me explain how AROS does the infamous RTG. Take the next few lines
as an example of a boot code for AROS or a game which takes over the machine::

	ULONG hiddCount;
	HIDDT_Class * hidds;
	const struct TagItem queryGfxHidds[] =
	{
	    { HIDDA_Type, HIDDV_Type_Graphics },
	    { HIDDA_SubType, HIDDV_SubType_Graphics_Boot },
	    { TAG_END , }
	};

	/* Get a list of all graphics HIDDs which are available
	   at boot time. These are builtin graphics cards */
	hiddCount = HIDD_FindHidds (&queryGfxHidds, &hidds);

	if (!hiddCount)
	{
	    /* Make sure the user sees this. The kernel will
	       find a way to get this through (eg. by opening
	       a default display or sending this over a serial
	       line to some debug terminal). It will also display
	       information about the place where this has been called
	       (process name, registers and debug info, if available) */
	    panic ("No gfx hidds found");

	    /* panic() doesn't return */
	}

	struct TagItem * config;

	/* Load the config for the HIDD. This is for example the
	   screen resolution, etc. which the user requested. If the
	   user did never specify defaults, then the hardware
	   defaults will be returned. */
	config = HIDDC_LoadConfig (hidds[0]);

	... if you know what you're doing, you can modify the
	    prefs here ...

	HIDDT_HIDD * hidd;

	/* Create a real hidd with these infos. */
	hidd = NewObjectA (hidd[0], NULL, config);

	HIDDC_FreeConfig (hidds[0], config);

	HIDDT_BitMap bm;

	/*
	   This is a very simple example: Normally, you should query the
	   HIDD for available modes and select one and pass the tags you
	   get back. This allows the HIDD to pass information which the
	   application has no idea of.

	   This is a function of the Graphics HIDD Tool Library. You can
	   also use DoMethod() and DoIO() to achieve the same. These
	   interfaces allow to send more than one command to the HIDD (eg.
	   rendering a complicated graphic with one call to DoMethod()).
	*/
	bm = HIDD_Graphics_CreateBitMap (hidd,
		HIDDA_Graphics_Width, 640,
		HIDDA_Graphics_Height, 512,
		HIDDA_Graphics_Depth, 8,
		HIDDA_Graphics_Showable, TRUE,
		TAG_END
	);

	if (!bm)
	{
	    /* Powerful error checking */
	    STRPTR error;
	    ULONG errorCode;

	    HIDD_GetAttr (hidd, HIDDA_ErrorCode, &errorCode);

	    error = HIDD_ValueToString (hidd, HIDDA_ErrorCode, errorCode);

	    /* Let the user see what really happened */
	    panic ("Error trying to create a 640x512x8 Bitmap: %s", error);
	}

	... render some gfx in the bitmap ...

	/* Show the bitmap on the monitor */
	HIDD_Graphics_ShowBitMap (bm);

	...do something else...

	/* Free all bitmaps, memory and everything else */
	DisposeObject (hidd);

Note that the HIDD doesn't know about Views or Screens. If the bitmap is
showable, it's something like a view but the developer doesn't need to know
anything about the hardware. He can query the HIDD with the config API for
a default and use that. This default config can contain any information the
hardware needs without anyone besides the developer of the hardware needing to
know about it.

The config API allows to create simple prefs for a HIDD or allow the HIDD
developer to supply a prefs program to set the esoteric features of the
hardware.


Advantages of the HIDD concept
""""""""""""""""""""""""""""""

The HIDD API can be extended without becoming incompatible. If your new 3D
graphics card has unique and never before seen features, new programs can use
them and old will still run.

The API allows to catch methods which can be done in hardware early and pass
methods, which the hardware doesn't support, to some emulation layer. The
default graphics HIDD needs only be able to create one bitmap with a default
resolution (ie. you just hack a small routine which initialises the hardware
with a default; no need to worry about any fancy stuff you want to do later)
plus one routine to set a pixel and one to read it back. Everything else is
available as a (slow) emulation, so new drivers can be written in hours if not
minutes.

The API is consistent on every hardware and every OS which supports HIDDs. HIDDs
can be loaded and removed at runtime. They can be configured at any time, be
loaded and be configured before they do anything besides sitting in your memory.
You can have any number of similar HIDDs in the system and the API forces the
programmer to allow the user to select one.

The API was written with the problems in mind which arise all the time right
now: The OS doesn't know what hardware is available, what the hardware can do,
the APIs are limited, if something goes wrong, no one can say what it was, new
hardware can't be supported, the OS can't access remote hardware easily.

With the current HIDD concept, things like remote graphics, large bitmaps on the
hard disk are almost for free. Drivers can be both complex and fast, every
obscure hardware feature can be used by applications which are aware of this
feature and the other applications still work.


Disadvantages
"""""""""""""

This is a concept developed by a small group of people with not much power. The
idea is great but as we all know, it's not the best idea that gets the success.


Software development tools
--------------------------

AROS currently offers two tools (which will be merged into one shortly):
Resource Tracking (RT) and Purify to help develop bug free software. RT tracks
all resources, for example open files, checks every access (for example writing
to a file opened for reading), prints verbose error messages (eg. file name,
line number, function name plus call stack and shortly also the parameters and
local variables). Purify checks all memory accesses (eg. reading from memory
which was not yet initialised), and offers the same infos as RT.

RT must be compiled into your program which means that you must have the source
for all parts which you want to check. The information collected by RT are
written to a process-global variable so you can stop a process at any time, stop
running device IO and free all allocated resources or just snoop what your
process does.

Purify currently must be compiled into your program, too, but shortly a new
version will be available, which can examine compiled code (eg. link libraries
which come with your compiler), too.

For the future, we will merge all this with AROS allowing to debug processes
remote, get decent error reports with lots of useful information. The next step
will be a special version which produces this information on the users' machine.
The user can put this information on a disk without fearing that personal
information will be revealed and the developer can use this information to
generate a full featured debug report with filenames and line numbers without
needing to send the user a version of his work with debug infos.


Existing extensions to the Amiga OS
-----------------------------------

The Amiga community has provided the Amiga with lots of extensions to the Amiga
in the recent years. CyberGraphX, Picasso96, AHI, PowerUp, NewIcons, MCP, MUI,
Miami to name just a few.

On the Amiga, these extensions will run on AROS because AROS will be fully
compatible with the Amiga OS on the Amiga. On other systems, they won't work
directly, but we are always contacting the authors and firms that developed
these extensions and we try to convince them of the advantages of AROS. When you
read this, AROS will have developed the first HIDDs and we might be able to show
some of their power. Some extensions will be emulated, others will be used. Some
things will be integrated into AROS because they don't break compatibility with
Amiga OS.

Currently there are only two major points which prevent us from having most of
the above:

+ AROS is too incomplete and functions needed by some extension are missing.

+ AROS is distributed in source form and the authors refuse to reveal their
  work.

The first problem will be addressed on a function-by-function basis. When we get
some extensions, we just try to compile it and then we implement those functions
which are missing.

The second problem is more complicated. Since AROS runs on more than one
hardware, the extension can't be distributed in binary form easily. The authors
of the software must either have access to every kind of hardware on which AROS
runs or they must at least give their source to one of the AROS developers which
means that they have to trust us. But this would also put a lot of stress on us.
If it would ever happen that some source is revealed to a third party, our
reputation would be severely damaged. I just get nightmares just thinking on how
to prove our innocence. So this is probably also not a good solution.

Right now, we think about creating our own C compiler. This would solve many
problems with compiling AROS but it would also allow us to create a kind of
"system independent code" [#]_ which can be converted into machine code on the
users machine. This has also it's flaws, but it would allow every author to
spread one file which then runs on every hardware where AROS is available.


Conclusion
==========

I wrote this on the 26th October 1997. That's four weeks before the IPISA where
this paper will be officially published and when an important time for AROS has
come. At the time you read this, we will have talked to AI and maybe even with
members of the new development team there. Some kind of agreement will have been
found but I can't really say what it will look like. Maybe AROS will be history
at that time, maybe AI will have given us the Intel segment to continue the
development of AROS (while they concentrate on PPC, for example), maybe AROS
will have become an integral part of the future development of the Amiga
(meaning that it won't be free any longer but on the other hand, it will advance
much faster because some full time developers will work on it). Maybe Gateway
2000 will be bankrupt and the Amiga be dead for sure or the Amiga community will
again have the nightmare of not knowing about the future of the Amiga. Maybe
Microsoft will have bought Amiga to incorporate the knowledge into Windows. Does
it matter ? No, it really doesn't as long as even one human being dreams the
Amiga dream - the dream of a computer out of this world.

::

    Aaron "Optimizer" Digulla
    Haldenweg 5
    78464 Konstanz
    Germany

    irc:   Optimizer on #amigager
    email: digulla@aros.org
    WWW:   http://www.aros.org/


Footnotes
=========

.. [#] Former Hi Toro. 
.. [#] That's the Opel Manta, a car, whose drivers are famous for loving their 
       car more than anything else... and for other things you don't want to 
       know about.
.. [#] This means the features the professional computer users need.
.. [#] At the time of writing.
.. [#] We thought about asking a fee if you sell AROS or make money with it, 
       but in the end, it would mean lots of trouble for us and probably not 
       much revenue. So currently, we are thinking about making AROS really 
       free of rights by publishing it under the GPL.
.. [#] Amiga International, former Amiga Technologies.
.. [#] That's worst case. It will probably be finished earlier, but I can 
       guarantee that it will be finished at that time.
.. [#] These generate shared libraries from these files, the necessary includes 
       for your compiler and the AutoDocs.
.. [#] Version for Linux/i386 with GCC. Other systems look different.
.. [#] Like Java.

