=========================
AROS uživatelský průvodce
=========================

:Authors:   Stefan Rieken, Matt Parsons, Adam Chodorowski, Sergey Mineychev
:Copyright: Copyright 1995-2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished; only converted to reST. Needs heavy updating. In works!

.. Warning::

   Tento dokument je ve vývoji! Je velmi pravděpodobné, že některé části 
   obsahují nepřesné informace nebo prostě úplně chybí. 
   Pokud nám to chcete pomoci napravit, kontaktujte nás prosím.

.. Contents::


Úvod
====

This is the AROS Research Operating System User's Guide. It is meant to
get people used to AROS. It is for *everybody* interested in AROS, as it
tries to provide information on AROS in different levels of
advancedness. I try to cover everything in depth, but in such a way that
you don't need to learn what you don't *want* to learn.


Kdo by měl číst tohoto průvodce
-------------------------------

This guide will help you getting used with AROS. It is written for
everybody who is interested in AROS. Keep in mind that you are actually
using software that is BETA and in research. It is currently mostly fun
to play with and cool to program for and program in. So I expect that
your interest in AROS is explained by one of these reasons. If you came
until here because you thought AROS was a Multimedia Internet-Ready Etc.
OS, well, you might be right, but it is *not finished*, so you need to
be patient, boy. If you thought AROS was a Grapefruit-Machine or a Free
Money Project, you are entirely in the wrong place.


How you should read this guide
------------------------------

This guide is ordered from "simple" to "advanced". You can start reading
at any chapter that contains information that is new to you. But maybe
even more important, you should stop reading at any chapter that
contains information going beyond your interest. In this way you can
learn yourself the advanced topics starting from scratch, or you can
stop earlier if you think you only want to use AROS, and not program it.
People with an Amiga background can skip the introduction, and start at
"Developing for the AROS platform" if they never programmed an Amiga
before, or go directly to "Developing inside AROS" if they already did.
So there is a starting point and a stop point for everyone.

It is important to realize that this guide is meant for AROS, not Amiga.
So even if you owned an Amiga for years, you might need to read "Using
AROS" too.  This is not an embarrassment: you will notice that using
AROS is very slightly different from using AmigaOS. This is because our
Workbench is not finished. At the moment the system mostly works through
a AmigaDos shell - replacement (or Cli to older users), although we do
have a Workbench and you can navigate disks and launch the applications
with it, but file operations is not yet complete. Old Amiga programmers
should read "differences with Amiga programming" from chapter 4 to get
an overview of the differences. 

Using AROS
==========

AROS-hosted: An Operating System in an Operating System?
-----------------------------------------------------------

AROS is originally developed on Linux_ running on an Intel-based
computer. It runs on many more machines and Operating Systems, though.
This may sound strange: an OS running on top of an other OS, that's
emulation, right?

A nice term for what AROS-hosted does is "API emulation". API is a
three-letter acronym for Application Programmer's Interface. In plain
English: an API provides (C Language) functions that a programmer can
use. The AmigaOS API consists of a load of library calls that an Amiga
programmer can use to make an Amiga program. AROS emulates the AmigaOS
API: it tries to provide the same library calls as AmigaOS. An Amiga
emulator, such as UAE_; emulates the Amiga *computer*: the processor,
the connected hardware, everything. This has its advantages, like being
able to play binary Amiga games on different hardware, and its
disadvantages, like not being able to use the emulator as a "real" OS,
on a "real" processor. AROS-hosted runs on the "real" processor. But it
isn't a "real" OS, *unless* you run in such a way that it doesn't
require Linux. This is called "native" AROS.

AROS can run natively on the Intel and Amiga computers, but not quite as
good as it runs on Linux. AROS library functions are made to run under
Linux first, internally using Linux kernel and library calls. This way a
programmer has got the opportunity to bother about the implementation of
the whole system first, and to bother about the technical details in a
later stadium. People are currently working on making the "native" AROS
more usable. The results are very impressive and it is perfectly
possible to use AROS-native as a real (and only) Operating system on an
IBM PC compatible machine.

Of course, AROS is not *only* an API emulator. It also tries to provide
replacements to all the AmigaOS3.1 system software, and you will also
find a few demos and games being shipped with AROS, just to show that
they work - we might just be at 77% of the whole system, but we already
have Quake running!


Using "native" AROS on i386 
---------------------------

Native AROS is currently under heavy development. If you want to see
cool tricks, try AROS on Linux. But if you're (also) interested in what
a great job the programmers have done, you can try "native" too.

The instructions for installing native AROS are varying depending on
which platform you use. Because "native" is still in great development,
the *results* from installing native AROS can also vary depending on the
age of the code that you use.

On i386 there`s a different booting media available. First and most
useful binaries set is an AROS LiveCD which you can get in the Downloads
section. It is can be either a snapshot or a nightly build (first is
more stable but outdated, last has latest changes made but can be
unstable in rare cases). Second is the AROS boot floppy, which is
intended to boot systems that unable to boot from CD. It`s have a
minimal set of features but thus have small size also. If you have no CD
drive it still can show some part of an AROS to you.

So, after you download the AROS LiveCD archive unpack it and write ISO
image to the CD-R(W). If you intent to use AROS in virtual machine, you
can use ISO as-is. Once the disc is ready, you can reboot your PC with
the LiveCD. If your system does not support booting from CD, also
download and write an AROS boot floppy to disk (with Rawrite or Winimage
program, for example) and boot from it, leaving CD in drive. After the
CD is booted you will find yourself in AROS (it is looks stunningly
close to AmigaOS). You can fool around LiveCD with the Wanderer (or with
Shell), play some games/demos included in contributed programs on the
CD, look at system basics until you get bored. Also it`s possible to add
files to ISO image and get some extra software written for AROS, and
rewrite the LiveCD. For now here end simple part of using an
AROS-native. To test all other features it`s required to install_ the
system to the hard disk (real or virtual). This process can`t be called
easy, and must be treated as experimental. It has beed desribed in
Installation Doc. Anyway, remeber that work continues and soon you can
get more from native AROS - keep in touch! 

Using "native" AROS i386 in Virtual Machines
--------------------------------------------

Currently the *Virtualization* technologies is developed to a almost complete
real machine replacement, have been burned-on by the increasing CPU speeds.
You can make a "virtual" machine inside of your system ("host") and launch AROS on it,
without being worried about any failures and relaunching the "guest" system quickly 
if something has happened. 

There`s a number of free virtual machine packages,
most knowingly is QEMU (Free, Open Source, for many host systems), VMWare Player 
(Free. There`s also a full VMWare server for free that require a free serial) and Microsoft VPC (Free).
You can get a version for your "host" system that suits your needs. We will
describe some tips on launching AROS for different VM`s. 

Instead of having almost the same AROS setup inside the VM`s, there`s a 
difference in setting the VM itself. 

VM for Linux/FreeBSD
""""""""""""""""""""

QEMU on Linux is quite easy to setup. All you need is to apt-get the package
on Debian/Ubuntu/Knoppix/DSL or use any other package manager for other 
distributions or download and unpack the archive manually. You can get the
archive from the `QEMU Website <http://fabrice.bellard.free.fr/qemu/>`__. 

Also there`s an VMware VM available for Linux. Check the `VMWare website <https://www.vmware.com>`__.

VM for Windows
""""""""""""""

QEMU on Windows is almost the same thing as on Linux. The difference is in networking
and some other issues. You can find useful information and packages on 
`QEMU On Windows page <http://www.h7.dion.ne.jp/~qemu-win/>`__ . 
Also there`s nice GUI for QEMU called QEMU Manager, including the QEMU package.
There`s also some GUI`s for QEMU for some systems can be found in links.

QEMU must be launched as a console application with some parameters given. 
We will review some options in other sections, meaning you must append
these to your launch string (or a script). 

.. Note::  

    QEMU is fast virtualiser, but it`s speed can be increased by installing 
    the KQEMU kernel module (and appending the -kernel-kqemu option if in Windows).
    But remember that KQEMU can make guest system unstable.
    Please don`t use ALT+Tab combination to free the keyboard lock, use CTRL+Alt,
    otherwise Tab key may remain pressed and can damage currently edited file.
    
Applying to `VMWare <http://www.vmware.com/products/free_virtualization.html>`__
or VPC it`s even easier to setup. 
All you need is to install some virtual hardware like network and sound card 
and create an virtual HDD. Everything managed by a simple GUI.

VM for MacOS
""""""""""""

For PPC Macs running OS 9 or 10.x only 
`Virtual PC <http://www.microsoft.com/mac/products/virtualpc/virtualpc.aspx?pid=virtualpc>`__, 
an i386 emulator, is 
available. It does however not support Intel Macs. VPC is also an expensive 
commercial product. The alternative method to get it is purchasing Office 2004 
which comes with a free copy of the latest version (VPC 7). Note that the Mac 
VPC is essentially an emulator, with a limited speed and it is demanding a 
reasonable fast PPC machine (see the website for more details).

For Intel Macs (OS X) Qemu has been ported and sequentially renamed as
`Q <http://www.kju-app.org/kju/>`__ . It comes as a Intel 
Binary and is freeware. Q does not support direct virtualisation yet (or the 
i386 kernel accerelation module), making it achieve only part of the 
possible speed at the moment. 

Another (upcoming) choice for VM on Intel will be the `VMware Fusion`__ virtualiser, 
expected for release early 2007. Beta version 33141 already supports booting the AROS liveCD, 
on condition that floppydrive support is disabled in the GRUB boot parameters (Just highlight your
selection on the GRUB menu, press e twice, add nofdc to the command line,
press return, then b. If you've installed to HD, you can change this 
permanently in the menu.lst file). 

__ http://www.vmware.com/whatsnew/macsignupform.html

Yet another Intel Mac VM product is Parallels, a commercial product, though at a far lesser cost than VPC. 
Please note however that it yet fails to boot AROS. The same applies to at least PC Parallels 
Workstation 2.1.

..  Note:: Users of (early) Mac Intel notebooks whose machines run relatively hot
            may benefit from using the `SMC fan control utility`__.
            It allows adjustment of fan speeds for increased ventilation of your machine, keeping 
            temperatures low during heavy workloads. While it is considered safe to use, still consider the risks involved!

__ http://81.169.182.62/~eidac/software/page5/page5.html

Virtual Disk Images
"""""""""""""""""""

If you considered to try installing AROS to a virtual machine`s HD, you can 
create the virtual HDD for QEMU using the qemu-img program (replace <size> 
with needed size in bytes, M or G for mega- or giga-) with a command like::
    
    qemu-img create -f qcow aros.img <size>

A set of pre-installed or empty diskimages is available to make running AROS under 
VM a bit easier. WinAros is a preinstalled AROS environment installed on a HD image, 
compatible with famous virtual machines QEMU and Microsoft VirtualPC, both 
freely available on the net. You may download both Winaros versons on a
`website <http://amidevcpp.amiga-world.de/afa_binarie_upload.php>`__.
QEMU Winaros is `here <http://amidevcpp.amiga-world.de/WinAros/WinAros_Light_QEMU.zip>`__ 
and VirtualPC one `here <http://amidevcpp.amiga-world.de/WinAros/WinAros_Light_VPC.zip>`__ .

Installation Kit for AROS (IKAROS) is a set of virtual disk images for 
different virtualisers, including QEMU and VMware, already partitioned, 
formatted, and ready to install AROS on. Its benefits are its small archive 
size, as it doesn't include large amount of files, and the possbility to 
install fresh AROS versions, which make it useful for testing the nightly 
builds. It allows easy installation of new versions without messing with 
partition setup. Installation instructions included. Please check 
`Aros-Exec Archives <https://archives.arosworld.org/index.php?function=browse&cat=emulation/misc>`__ 
in (emu/misc) section for the recent updates.

Using the AfA on m68k
---------------------

On an Amiga (m68k), you can place the native code somewhere on your
harddisk, double-click the "boot" icon, do a reset and enjoy a complete
Amiga system.  This is because it is not *really* native. The boot
program just temporarily replaces a few AmigaOS libraries with AROS
libraries. For testing purposes this is of course good, but in the end
you still run good ol' AmigaOS and not plain native AROS. This will
change as we build a more complete 68k AROS system. This system is often
called AfA (AROS for Amigas).


Using AROS hosted on Linux or FreeBSD
-------------------------------------

Once you got the binaries for your system, either by compiling or by
downloading pre-compiled binaries, you should go down into the
"bin/$TARGET/AROS" directory, where $TARGET is your system target
(something like "linux-i386"). Run the file "aros" ("./aros"). The
Workbench replacement "Wanderer" will be started.

There`s some command line options for aros executable that could be used.
You can get this list with ./aros -h option given.

To be appended ...

Because "Wanderer" is very limited you'll prefer to work with the Shell.
You can start it from the menu "Wanderer/Shell". Now you should type in
commands, and the most important command is "dir": it will show you a
directory's contents. The directory named "C" contains all the commands,
so it might be useful to display its contents with "dir c:". The shell
behaves like an AmigaDOS shell, and the commands in "C" behave like
their AmigaDOS equivalents. (Note to UNIX folks: to address the parent
directory, use "/" and not "..": this will look ugly because AROS thinks
that Linux's ".." is a normal directory. You shouldn't use "./" as a
prefix to address a command within the current directory either, but
leave this away instead.) Once you are used to it, try to execute a few
programs (especially the "Demos" and "Games") to get an impression of
AROS capabilities. 

Using AROS-hosted on PPC
------------------------

To be filled by someone... 


AROS Basics
===========

AROS Zune GUI Basics
--------------------

GUI abbreviation stands for Graphical User Interface, and is applied to
all the means used by OS to interact with user other than plain
command-line interface (CLI). For those who never have used any OS from
Amiga branch, it will be useful to give some GUI basics to help them in
use of our system. Some of it, however, will be AROS-specific. 

An Amiga systems use definitely and common principles, as you can
already note. First, any menu options of any application`s window isn`t
attached to that window - it moved to upper strip, where it can be
easily acessed. To do this, select window you`re need, and move mouse
pointer to upper side of a screen. Then, if you press right mouse button
there, you can see the pull-down menu, representing our application`s
options. Yes, it looks like MacOS somehow. Also you can enable the menu
to appear on any place of the screen, where you press left mouse button.
To do so ... For example, if no application window is selected, you can
see the Wanderer`s menu then. 

Now, let`s consider our desktop - as you probably already know, it`s
called Wanderer. What is this ? Well, Wanderer is an application, just
like all others. In fact, it is an AROS file manager, allowing you to
choose and operate files (the functionality isn`t complete yet), launch
programs, get some system information, launch CLI (shell window) and
other functions. Usually it opens on wide screen and acts like your
desktop (icons on this desktiop represents the volumes and disks you can
work with). It can be set aside by unselecting Backdrop option, which
can be found in Wanderer`s menu (remember paragraph above?). After that
a Wanderer becomes just another window you can move, resize etc. So, you
can see it isn`t like a Windows or another system`s desktop, fixed to
it`s place. Of course, you can even not use the Wanderer at all and use
your preferred file manager (e.g. Directory Opus).

But how do the applications behave then, where will the windows be open?
There`s a `screen` term - screen is the place where your window is meant
to be open. If it`s said that application going to open on Wanderer
screen, it will look like it`s usually happens in other OS - your app
will appear as window on desktop. On another hand, window can be open on
it`s own screen - it looks like it captures the whole screen. But you
can switch the screens with a gadget in top right corner of the screen
(this is also applicable to the simple windows). So you can switch between
Wanderer, Directory Opus and any other apps opening on it`s own screen.
This behaviour also comes from Amiga`s history.
                                                  
Well, the time has come to say something about windows itself. AROS
window usually has control buttons to manupalte with it,
called gadgets (which can be translated as interactive kind of
graphical element). First one in the top left corner of a window allows
to close it. Next, in the right part allows to minimise/maximise window.
And the last used to put window to front or to back just like we switch
sreens. Windows can have no gadgets at all (look at the Kitty demo -
it`s doesn`t even have a borders and yet has well-curved shape) or have
a different set of it. 

The window`s contents consists from some usual elements could be seen in
any GUI - buttons, lists, strings of text, any other kind of gadgets. If
application is intended to change any preferences of a system or an
application it`s usual shortly called *Pref* and has a set of buttons to
operate. Usually this buttons are: TEST (applies all the changes made by
Pref but doesn`t save and do not the changes but close the window), SAVE
(saves the changes and close the window), USE (applies the changes and
close the window, but do not saves them), CANCEL (discard all the
changes and close the window).

Also, from Amiga`s history the file placement unit is often called a
drawer instead of a folder/directory in other systems, but it`s meaning
remains the same. Translate it as a directory if you`re unsure.

There`s a special keys in AROS, just like on original Amiga, used to make
quick commands with it. Left and Right WinKey (on PC keyboard) replaces the 
original Amiga Keys and is used in different combinations to launch commands.

Another unknown name you can encounter in AROS is Zune. What`s that ?
Zune is GUI toolkit developed in replacement and best traditions of MUI
(Magic User Interface), widely used on Amiga`s. But is there an
application called Zune?  You can find Zune Pref and it allows you to
set settings for Zune-based applications altogether or in particular.
For example, to set Zune prefs for Wanderer you can select GUI prefs
from it`s menu, or to set Zune prefs for other apps you can use it as
the CLI command Zune <app filename>.

To be finished...


AROS CLI (Command Line Interface)
---------------------------------

ToDO - CLI commands abstract and comparision ...

AROS has it`s CLI, the Command Line Interface, greatly expanding the 
capabilities of OS. Those who had used the AmigaOS can note that it looks
pretty close to the AmigaDOS. There`s some CLI basics described in 
`introduction <shell/introduction>`__ to CLI commands. 

Currently you don`t need to type all the commands to the end - now there`s
a neat Tab completion similar to that on Linux consoles. This allows you 
also to append the filenames or choose them from the list.

To be finished...

AROS System programs
--------------------

We have mentioned the applications, it`s good to give a description of
their functions. So, there`s a groups of the AROS system applications
collected in the separate directories:

    + C - the place for all the system commands used in CLI
    + Classes - the place for datatypes, gadget`s images and Zune classes
    + Devs - where the device-related files (drivers, keymaps) and 
      datatypes are placed  
    + Extras - where all the contributed programs reside
    + Fonts - here you can find all of the system fonts. Any additional fonts 
      must be appended (assigned) to this dir.
    + Libs - where the system libraries are located.
    + Locale - holds catalog files of various AROS apps translations
    + Prefs - has a number of preferences-editing programs
    + S - contains some system launch-time scripts
    + System - the place for some system controls
    + Tools -  the place for some commonly used system apps
    + Utilities - the place for some not-so-commonly used but yet useful apps

Instead of applications, there`s more permanent running programs called
*tasks*. 

Another kind of AROS applications is the *Commodities*. This is applications 
which can help you make your system more comfortable. For example, AROS windows
doesn`t set to the top of others when you click on it, and you can find it 
uncommodable. You can use the AROS commodity ClickToFront to fix it. It can be 
found beneath other commodities in SYS:Tools/Commodities directory. When you 
double click on it, window will become to the top of others if double clicked.
Another example is Opaque commodity - it allows you to move windows with their
contents. There`s also an Exchange commodity which allows you to manipulate 
launched commodities and get information about them. Usually commodities do not 
open any windows.  

To operate with files of different types Amiga-like systems is using the 
*datatypes*. Datatype is the kind of system library allows the programs 
to read or/and write to such files without taking care of the implementing
such a format in that program.   

And if we dig a little deeper there`s some system terms that can be explained.
AROS uses *handlers* to communicate with the filesystems and *HIDD`s* to 
communicate with the hardware.

To be finished...

Customising the installed AROS
==============================

Setting up the Locale
---------------------

AROS is becoming a really international system this days, being
translated to many languages. Translating isn`t very difficult, and
number of the AROS translators is still increasing. If unicode support
will be implemented it can be translated in every language people use.
If you feel you can give AROS to your country, both OS and
documentation, do not hesitate to contact us and offer your help.

So about the language. First, depending on fonts used you must set fonts
by launching SYS:Prefs/Fonts and designating Fonts to different system
text: Icons (used for icons labels), Screen (used on common screen) and
System (used in CLI window). If your language uses different set than
ISO (for example, cyrillyc CP-1251) there`s *must* be the fonts in
correct codepage. Aros currently can use two kinds of fonts - the Amiga
bitmap fonts (which can be used directly) and TrueType (via FreeType 2
manager, which still has some issues with non-ISO codepages). Bitmap
fonts are in any particular codepage, and TTF can be unicode.

How can you change the AROS locale ? To do this you need to launch a
Locale pref in SYS:Prefs. You can see a list of supported locales there
and select your preferred ones. On the second page of this Pref you can
select the country used (it gives correct currency and date/time
format). And the last tab allows you to change timezone to that used in
your location.

After you`ve made changes to fonts reboot the system, and you must be
able to see all the translated content.

So now we can read, but can we write also in our language? To do this,
you must change the keyboard layout.

Keyboard and mouse settings are managed by the Input pref. You can change 
the layout and click *Use* but we can do even better. This tool
allows you also to save presets - just like any application it`s got a menu, 
allows you to save your preferences to the file with the given name and keep 
different settings of locales. We will use it later to switch our keyboard 
layouts. Choose your locale`s keyboard layout 
from the list and make a left click to open the context menu. Then enter 
the name of your preset to File string, say, *locale1* and click Ok to save it to 
SYS:Prefs/Presets directory. Now choose an American (PC) layout and repeat 
the saving presets, say, with name *english*. This presets can be used later
to switch the layouts. Click *Cancel* to exit.

There`s an FKey commodity which allows you to make actions assigned to
some combinations of keys. Now let`s launch it and assign the locale switching. 
After you double-click on FKey icon, launch the Exchange, choose the
FKey from list and click the *Show* button. This will invoke the FKey window.
You can see the ALT TAB in list assigned to window switching. Now enter the 
first key comination, say, *ALT Z* and go to the right panel. Choose *Launch the
program* from pulldown menu and enter SYS:Prefs/Input as an argument. Append the 
USE switch and *english* preset name to the string as shown::

    SYS:Prefs/Input USE SYS:Prefs/Presets/english

Click on the *New* Button to add the another combination. Now set the combination
for your locale as shown above, replacing *english* name with your preset name.
Click *New* button again and then *Save Settings*. Now you can use defined 
combinations to switch the layouts.  

Installing the software
-----------------------    

Actually there`s no installer system in AROS. Installing an application
usually means you have to extract it to some directory on a harddrive or
ramdisk. Then some programs require you to make assignments which
is done in CLI with the Assign command and some start script additions. 
For example, Lunapaint needs the Lunapaint: to be assigned to the directory
it was extracted to to work properly. You can do this with the command 

    Assign Lunapaint: Disk:Path/Lunapaint

But if you don`t want to type this command after reboot to launch it again, 
you must put it to S:User-Startup script. 
To do this, type this command in CLI prompt::

    :> edit SYS:S/User-Startup
    
Then insert the Lunapaint (or other program) assign at the end of file.
Save the changes and you`ll have that fixed.
Such a procedure can be used for any program that needs it.

Another way is using the ENVARC:SYS/Packages directory. All you need here
is create a text file with the name of your application and put
a path to application in that file. Then create a directory named S in the
program`s directory and put the package-startup file there. This way is more
safer, but can be not so Amiga-styled to you.


Setting up the Network
----------------------

To communicate with other computers on network, AROS uses a TCP Stack, AROSTCP, 
which is a port of AmiTCP. This software is located in /Extras/Networking/Stacks/AROSTCP
directory. Setting up is not easy but some kind of GUI tool is in development. 
Also please note that actually there`s a very little amount of networking
program on AROS yet (but some interesting tools is in development to be 
soon released).

First you need is to setup your machine side of network. This part can differ 
depending on your hardware. On a real machine you need to install the supported
network interface card (NIC) and plug the cable to it. On a virtual machine
you must set up it`s NIC implementation and check if it`s supported by AROS
(at least, QEMU and VMWare ones is supported). 

Net on QEMU/Linux
"""""""""""""""""

Read tips for launching AROS on Linux QEMU above.

After this is enabled we can go to the next point.

Second part is setting AROSTCP in AROS to work. 

On linux system some steps needs to be done to make the network in VM working.

The tun (tunnel) module must be loaded::

    #> modprobe tun

Then, the kernel must become a router::

    #> echo 1 > /proc/sys/net/ipv4/ip_forward

Then, a rule must be added to the firewall::

    #> iptables -t nat -A POSTROUTING -o eth0 -j MASQUERADE

Finally, while still being root, start Qemu with::

    #> qemu -cdrom aros.iso -m 48

The Linux tun module, by default, creates a gateway for the fake network at 
172.20.0.0/16 with a gateway at 172.20.0.1.
Say our Qemu hosted machine is at 172.20.0.10.
Say your usual LAN is 192.168.0.0/24 with a DNS at 192.168.0.1 
(or anywhere on the Internet, for that matter).

*For QEMU on Windows in user mode networking you must replace it with 10.0.2.16 
for host and 10.0.2.2 for gateway, or use TAP adapter, which is better.
Remember to set up your firewall in way it can pass the QEMU packets.*

You have to edit 3 files in the SYS:extras/Networking/stacks/AROSTCP/db drawer: 
hosts, interfaces and netdb-myhost.
In *hosts* remove or comment out any entries. Hosts will be in netdb-myhost for now.
In *interfaces* uncomment the prm-rtl8029.device line (QEMU is emulating 
this NIC among others, you can use pcnet32.device for VMWare), edit it
(change an *IP=* string to which was above)::

    eth0 DEV=DEVS:networks/prm-rtl8029.device UNIT=0 NOTRACKING IP=172.20.0.10 UP

In *netdb-myhost*, add the various local known hosts, 
your local domain name, the gateway::

    HOST 172.20.0.10 arosbox.lan arosbox
    HOST 172.20.0.1 gateway
    DOMAIN lan
    NAMESERVER 192.168.0.1

The db directory itself can reside anywhere, you set its path in the 
ENVARC:AROSTCP/Config file, I advice you to copy the db files in the (created) 
ENVARC:AROSTCP/db directory, that way the Config file could be::

    ENV:AROSTCP/db

Now make AROSTCP start at boot with the word "True" in ENVARC:AROSTCP/Autorun
(Create the file if not exists in CLI window with a command 
echo "True" >sys:AROSTCP/Autorun)
Edit the Sys:extras/Networking/Stacks/AROSTCP/S/Package-Startup::

    ; $VER: AROSTCP-PackageStartup 1.0 (01/08/06)
    ; AROSTCP-PackageStartup (c) The AROS Dev Team.
    ;
    Path "C" "S" ADD QUIET

    If not exists T:Syslog
        makedir T:Syslog
    Endif

    If not exists EMU:
        if $AROSTCP/AutoRun eq "True"
        C:execute S/startnet
        EndIf
    EndIf

The Sys:extras/Networking/Stacks/AROSTCP/S/Startnet file should be 
something like::

    ; $VER: AROSTCP-startnet 1.0 (01/08/06)
    ; AROSTCP-startnet (c) The AROS Dev Team.
    ;
    Run <NIL: >NIL: AROSTCP
    WaitForPort AROSTCP
    If NOT Warn
        run >NIL: route add default gateway
    Else
    ; echo "Wait for Stack Failed"
    EndIf

Next boot, test it with::

    ifconfig -a

You must see the output something like this::
    
    lo0: flags=8<LOOPBACK> mtu 1536
            inet 0.0.0.0 netmask 0x0
    eth0: flags=863<UP,BROADCAST,NOTRAILERS,RUNNING,SIMPLEX> mtu 1500
            address: 52:54:00:12:34:56
            inet 172.20.0.10 netmask 0xff000000 broadcast 172.255.255.255

If you can see that eth0 string then your interface is up. You can test it by 
launching those commands::

    AROS:>ping 172.20.0.1
    PING 172.20.0.1 (172.20.0.1): 56 data bytes
    64 bytes from 172.20.0.1: icmp_seq=0 ttl=255 time=xx ms
    64 bytes from 172.20.0.1: icmp_seq=1 ttl=255 time=xx ms
    64 bytes from 172.20.0.1: icmp_seq=2 ttl=255 time=xx ms
    
    --- 172.20.0.1 ping statistics ---
    3 packets transmitted, 3 packets received, 0% packets loss
    round trip min/avg/max = x/xx/xx ms

Output like this means that our interface packet`s reached the gateway with
172.20.0.1 address. If you got Host unreachable errors, then check your AROSTCP
settings and VM options.

On Windows:To make external network accessible to VM you must setup routing from
our virtual net to a real one, such as make a host system a router. For Linux this
have been done already.

You can test it even further by pinging other hosts and try using some 
networking applications which you can find on Archives.aros-exec.org, like
ftp and AIRCos. If you use an FTP program with your FTP server, remember 
it can work only with passive ftp servers, and set up your server to this mode.


Net on QEMU/Windows
"""""""""""""""""""

Setting QEMU to run on Windows is relatively harder to that of Linux. First,
make sure you have turn your Firewall to learning mode (or prepare it to
receive new rules) or completely disable it. Firewall can block transfers to VM.

There`s two ways to use network with QEMU on Windows. First and the 
more proven is to use the tap interface. To use it you must download
the `OpenVPN <http://openvpn.net>`__ 2.0 package for Windows (Windows 2k/XP only). 
After you install it, you will get an extra network connection in disconnected
state. Rename it to, say, eth0. Then go to the eth0 connection properties and 
set an IP address in the properties of TCP-IP protocol. You must set:
IP address *in other* subnet than your base IP (If you have 192.168.0.x one,
then set, say, the same 10.0.2.2) and 255.255.255.0 netmask. *Reboot*. Then replace 
starting line options in QEMU (or add if there`s were not) -net nic -net tap,ifname=eth0.
Then set an AROS side as it was described above for user mode networking.
Note that you will need the administrator privileges to install OpenVPN TAP adaptor.

The second option is to use a user-mode networking stack which is launched by 
default (or using the "-net nic -net user" switches, which is default now). 
Options given is for 0.8 or newer QEMU version. Setting the AROS side is 
similar to that of Linux use, but you will need to use
the following IP addresses to setup and test: 10.0.2.16 for AROS machine IP 
(instead of 172.20.0.10), 10.0.2.2 for gateway (instead of 172.20.0.1). 
This mode can work even without administrating privileges given to user, but
can *make some applications on AROS refuse to work properly (such as FTP-client)*.

There`s some guides available on how to setup the QEMU networking in Windows:

    + For `VLan <http://www.h7.dion.ne.jp/~qemu-win/HowToNetwork-en.html>`__
    + For `Tap <http://www.h7.dion.ne.jp/~qemu-win/TapWin32-en.html>`__

Net on VMWare
""""""""""""" 

VMWare`s side network is relatively easy to set up. All you need is to add
the NIC to configuration of your VM and assign the IP to new network connection,
associated with that card. Other using notes is the same as with QEMU above, 
except for the adapter type in SYS:Extras/Networking/Stacks/AROSTCP/db/interfaces 
file ::

    eth0 DEV=DEVS:networks/pcnet32.device UNIT=0 IP=10.0.2.2 UP

Net on the real PC
""""""""""""""""""

On a real PC you will need to do all you can do for any OS - prepare the
hardware to connect to AROS box - cables, hub and other. Then you must setup the 
AROS side similar to shown above, replacing the IP addresses to those
acceptable in your LAN for AROS-box IP, gateway and DNS. Set up the networing 
card in *interfaces* file by uncommenting the string corresponding to your card.

To be finished...  

Setting Up The Sound
--------------------

Currently there`s not much to sound in AROS. First, at the moment there`s no 
working drivers for virtual machine`s implemented sound cards (usually sb16/es)
so the only way to try to get sound is use AROS-native on pc with a real 
SB Live/Audigy card. Also the AC97-compliant codecs are supported. 

AHI sound in AROS supports also no sound (VOID) and disk writing options.

To be written by someone...

Is that all the User's Information in this guide?
=================================================

This chapter should have told you how to get, install and use AROS.
After having tried running every program in the directories C, Demos,
Utilities, Tools, Games, etc., you might wonder if that is all. Yes,
currently that is all a "User" can do with AROS! But when any new
important user code will be ready, it will be added to this guide, of
course.

If you think that I have not provided enough information here about
compiling, installing, Subversion, the shell, etc., it might be good to
know that I have reasons for it. First, there is already much
information available, and it would be unnecessary as well as unfair
just to copy that information in this document.  Second, we are talking
about very particular information. Some of the readers might be
interested in compiling the source code, others might want to know all
about the Amiga shell. So to keep this guide readable, I only point to
places where you can find such information, instead of providing it
here. You, the reader, can then decide if this is of interest to you.


.. _Linux: https://www.linux.org/
.. _UAE:   http://www.freiburg.linux.de/~uae/
.. _install: installation
