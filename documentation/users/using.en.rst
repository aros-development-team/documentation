=================
AROS User's Guide
=================

:Authors:   Stefan Rieken, Matt Parsons, Adam Chodorowski, Sergey Mineychev
:Copyright: Copyright 1995-2021, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished. Needs heavy updating. In works!

.. Warning::

   This is a document in progress! It is highly likely that some parts
   contain incorrect information or are simply missing altogether.
   If you want to help rectify this, please contact us.

.. Contents::


Introduction
============

This is the AROS Research Operating System User's Guide. This User's Guide is meant to
get people used to AROS. It is for *everybody* interested in AROS, as it
tries to provide information on AROS on different levels. It should cover everything in 
sufficient depth, but in such a way that you don't *have* to learn what you don't *want* to learn.



Who should read this guide?
---------------------------

This guide will help you to get used to AROS. It is written for
everybody who is interested in AROS. Keep in mind that you are actually
using software that is BETA and in research. It is currently mostly fun
to play with and cool to program for and program in. So your interest in AROS
hopefully is explained by one of these reasons. If you came here because you
thought AROS was a Multimedia, Internet-Ready, Etc. OS, you might be right, but
it is *not finished*, so you need to be patient. If you thought AROS was a
Grapefruit-Machine or a Free Money Project, you are entirely in the wrong
place.



How you should read this guide?
-------------------------------

This guide is arranged from "simple" to "advanced". You can start reading
at any chapter that contains information that is new to you. But maybe
even more important, you can, and should, stop reading at any chapter that
contains information going beyond your interest. In this way you can
teach yourself the advanced topics starting from scratch, or you can
stop earlier if you think you only want to use AROS, and not program it.
People with an Amiga background can skip the introduction, and start at
"Developing for the AROS platform" if they never programmed an Amiga
before, or go directly to "Developing inside AROS" if they already did.
This way, there's a starting point and a stopping point for everyone.

It is important to realize that this guide is meant for AROS, not Amiga.
So even if you owned an Amiga for years, you might need to read "Using
AROS" too.  This is not by whim but by necessity. You will notice that 
using AROS is slightly different from using AmigaOS. This is because our
Workbench is not finished. At the moment the system mostly works through
a AmigaDOS shell - replacement (or CLI to older users). We do have a
Workbench and you can navigate disks and launch the applications
with it, however file operations is not yet complete. Amiga programmers
should read "differences with Amiga programming" to get an overview of
the differences.




Using AROS
==========

AROS-hosted: An Operating System in an Operating System?
--------------------------------------------------------

AROS was originally developed on Linux_ running on an Intel-based
computer. Many developers still prefer this setup. It runs on many 
other machines and operating systems, though. This may sound strange: 
an OS running on top of another OS, that's emulation, right? No. It's
something else.

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
well as it runs on Linux. AROS library functions are made to run under
Linux first, internally using Linux kernel and library calls. This way a
programmer has the opportunity to focus on the implementation of
the whole system first, and then on the technical details at a later 
time. Many people are currently working on making the "native" AROS
more usable. The results are very impressive and it is perfectly
possible to use AROS-native as a real (and only) Operating system on an
IBM PC compatible machine.

Of course, AROS is not *only* an API emulator. It also tries to provide
replacements for all the AmigaOS 3.1 system software, and you will also
find a few demo's and games being shipped with AROS, just to show that
they work - we might just be at 77% of the whole system, but we already
have Quake running!



Using "native" AROS on i386
---------------------------

Native AROS is currently under heavy development. If you want to see
cool tricks, try AROS on Linux. But if you're (also) interested in what
a great job the programmers have done, you can try "native" too.

The instructions for installing native AROS vary depending on which 
AROS platform you use. Because "native" is still in development, the 
*results* from installing native AROS can also vary depending on the
age of the code that you use.

On i386 there are different booting media available. The first and most
useful binaries set is an AROS LiveCD which you can get in the Downloads
section. It can be either a snapshot or a nightly build (the former is
more stable but will be outdated, the latter has the latest changes made
but can be unstable in rare cases). The second is the AROS boot floppy,
which is intended to boot systems that are unable to boot from CD. It has
a small size, but therefore has only a minimal set of features. If you
have no CD drive it still can show some parts of AROS to you.

TO create the AROS LiveCD, you first download its archive. You then unpack
it and write the ISO image to a CD-R(W). If you intend to use AROS in a
virtual machine, you can use the ISO image as-is. Once the disc is ready,
you can reboot your PC with the LiveCD. If your system does not support
booting from CD, also download and write the AROS boot floppy to disk
(with Rawrite or Winimage, for example) and boot from it, leaving the CD
in the drive. Booting will then continue with the CD. In either case, after
the CD is booted you will find yourself in AROS (it looks stunningly
close to AmigaOS). You can fool around the LiveCD with the Wanderer 
(or with the Shell), play some games/demo's included as contributed programs 
on the CD, look at system basics until you get bored. It's also possible to 
add files to the ISO image and get some extra software written for AROS, and
rewrite the LiveCD. For now, here ends the simple part of using AROS-native.

To test all other features it's required to install_ the system to the
hard disk (real or virtual). This process must still be treated as
experimental. It has been described in the Installation Doc. Anyway, remember
that work continues and soon you'll be able to get more from native AROS!



Using "native" AROS i386 in Virtual Machines
--------------------------------------------

Currently the *Virtualization* technologies are developed to be an almost
complete real machine replacement and they have been assisted by increasing
CPU speeds. You can make a "virtual" machine inside of your system ("host")
and launch AROS on it without being worried about any failures and
relaunching the "guest" system quickly if something has happened.

There are a number of free virtual machine packages, best known are QEMU
(Free, Open Source, for many host systems), VMWare Player
(Free. There's also a full VMWare server for free that requires a free
serial) and Microsoft VPC (Free). You can get a version for your "host" system
that suits your needs. Below are some tips on launching AROS for different VM's.

Instead of having almost the same AROS set-up inside the VM's, there are
differences in setting up the VM itself.


VM for Linux/FreeBSD
""""""""""""""""""""

QEMU on Linux is quite easy to set up. All you need is to apt-get the package
on Debian/Ubuntu/Knoppix/DSL or use any other package manager for other
distributions or download and unpack the archive manually. You can get the
archive from the `QEMU Website <https://www.qemu.org/index.html>`__.

Also there's an VMware VM available for Linux. Check the `VMWare website
<https://www.vmware.com>`__.


VM for Windows
""""""""""""""

QEMU on Windows is almost the same thing as on Linux. The difference is in
networking and some other issues. You can find useful information and packages
on `QEMU On Windows page <https://www.qemu.org/download/#windows>`__ .
Also there's nice GUI for QEMU called
QEMU Manager *(dead link removed)*, including the QEMU and KQEMU
package. There are also some GUI's for QEMU for some systems, which can be
found in the links section.

QEMU must be launched as a console application with some parameters given.
To use the options reviewed in the sections below, you must append them to
your launch string (or a script).

.. Note::

    QEMU is a fast virtualizer, but its speed can be increased by installing
    the KQEMU kernel module (and appending the -kernel-kqemu option if in
    Windows). But remember that KQEMU can make the guest system unstable.
    You're advised not to use the Alt+Tab combination to free a keyboard
    lock, but rather to use Ctrl+Alt, otherwise Tab key may remain pressed
    and thus may damage a currently edited file.

Still, `VMWare <https://www.vmware.com/products>`__
or VPC is even easier to set up.
All you need to do is to install some virtual hardware, like a network and
a sound card, and create a virtual hard disk. Everything is managed by a
simple GUI.


VM for MacOS
""""""""""""

The only option available for PowerPC Macs running OS 9 or 10.x is
Virtual PC *(dead link removed)*,
an i386 emulator. It does not support Intel Macs, however. And this VPC
is a commercial product, and hence quite expensive. An alternative method to
get it is to purchase Office 2004, which comes with a free copy of the latest
version (VPC 7). Note that the Mac VPC is essentially an emulator, with
limited speed and it requires a reasonable fast PowerPC machine
(see the website for more details).

For Intel Macs (OS X) QEMU has been ported and subsequently renamed
`Q <https://www.kronenberg.org/>`__ . It comes as an Intel binary and is freeware.
Q does not support direct virtualization yet (nor the
i386 kernel acceleration module), making it achieve only part of the
possible speed at the moment.

Another suitable choice for VM on Intel is the `VMWare Fusion`__
virtualizer, which was released in early 2007. Beta version 33141 already
supports booting the AROS LiveCD, on condition that floppy drive support is
disabled in the GRUB boot parameters (Just highlight your
selection on the GRUB menu, press e twice, add nofdc to the command line,
press return, then b). If you've installed to hard disk, you can change this
permanently in the menu.lst file).

__ https://www.vmware.com/products/desktop-hypervisor/workstation-and-fusion

Yet another Intel Mac VM product is Parallels, a commercial product, though
at a far lesser cost than VPC. Please note, however, that it as yet fails
to boot AROS. The same applies to at least PC Parallels Workstation 2.1.

..  Note:: Users of (early) Mac Intel notebooks whose machines run relatively
            hot may benefit from using the SMC fan control utility *(dead link removed)*.
            It allows adjustment of fan speeds for increased ventilation
            of your machine, keeping temperatures low during heavy workloads.
            While it is considered safe to use, still consider the risks
            involved!



Virtual Disk Images
"""""""""""""""""""

If you considered to try installing AROS to a virtual machine's HD, you can
create the virtual hard disk for QEMU using the qemu-img program
(replace <size> with needed size in bytes, M or G for mega- or giga-) with
a command like::

    qemu-img create -f qcow aros.img <size>

A set of pre-installed disk images is available to make running AROS under
VM a bit easier. `VmwAROS <https://vmwaros.blogspot.com/>`__ 
is the preinstalled AROS environment installed on a HD image
for the virtual machines VMWare and QEMU, which are freely available
on the net. VmwAROS is targeted for wide user audience.
WinAROS can be especially helpful to the developers.



Using the AfA on m68k
---------------------

On an Amiga (m68k), you can place the native code somewhere on your
hard disk, double-click the "boot" icon, do a reset and enjoy a complete
Amiga system.  This is because it is not *really* native. The boot
program just temporarily replaces a few AmigaOS libraries with AROS
libraries. For testing purposes this is of course good, but in the end
you still run good ol' AmigaOS and not plain native AROS. This will
change as we build a more complete 68k AROS system. This system is often
called AfA (AROS for Amigas).



Using AROS hosted on Linux or FreeBSD
-------------------------------------

Once you get the binaries for your system, either by compiling or by
downloading pre-compiled binaries, you should go down into the
"bin/$TARGET/AROS/boot" directory, where $TARGET is your system target
(something like "linux-i386"). Run the file "AROSBootstrap"
("./AROSBootstrap"). The Workbench replacement "Wanderer" will be started.

There are some command line options for the AROS executable that could be
used. You can get this list with ./AROSBootstrap -h::

    AROS for Linux
    usage: ./AROSBootstrap [options]
     -h                 show this page
     -m <size>          allocate <size> Megabytes of memory for AROS
     -c <file>          read configuration from <file>
                        (default is boot/AROSBootstrap.conf)
     --help             same as '-h'
     --memsize <size>   same as '-m <size>'
     --config <file>    same as '-c <file>'

You may have to add some more memory for hosted AROS with -m option to
make some programs work properly.

Because "Wanderer" is limited in some ways, you may prefer to work with the 
Shell. Start it by selecting the menu "Wanderer" and then the option "Shell".
Now you can type in commands. An important command is "dir": it will show you a 
directory's contents. The directory named "C" contains all the commands, so it 
might be useful to display its contents with "dir c:". The shell behaves like an 
AmigaDOS shell, and commands in "C" behave like their AmigaDOS equivalents. (Note
to Unix folks: to address the parent directory, use "/" and not "..": the
latter would look rather ugly because AROS sees Unix' ".." as a normal
directory name. You shouldn't use "./" as a prefix to address a command
within the current directory either, but just skip that prefix instead.)
Once you are used to it, try to execute a few programs (especially the
"Demos" and "Games") to get an impression of AROS' capabilities.




AROS Basics
===========

AROS Zune GUI Basics
--------------------

The abbreviation GUI stands for Graphical User Interface, and is applied to
all the graphical means used by an OS to interact with the user, other than the
plain text command-line interface (CLI). For those who have never used any OS
from the Amiga family, it will be useful to give some GUI basics for such
systems to help. These basics are the subject of this section, although part 
of the section will be AROS-specific.

An Amiga system uses specific and common principles, as you'll already have
noticed. First, it uses menu bars, but the menu bar of any application isn't
attached to its window - it's always at the top of the screen, where it can be
easily accessed. To do this, select the window you need, and move the mouse
pointer to the upper side of a screen. Then, if you press the right mouse button
there, you can see the pull-down menu, representing your application's menu
options. As the screen usually has a backdrop window for Wanderer, if no other
window is selected you'll probably see the Wanderer menus in the menu bar.

Now, consider the desktop called "Workbench", which as was mentioned before 
is called "Wanderer". But what exactly is "Wanderer"? Well, Wanderer is an
application, just like all others. Specifically, it's an AROS file manager,
allowing you to choose and operate on files, to launch programs, to get some 
system information, or to launch a Shell (window) and to perform certain other 
actions. (note: the functionality isn't complete).Usually it opens on a wide
screen and acts as your desktop (icons on this desktop represent the
volumes and disks you can work with). It can be removed from the backdrop
by deselecting the "Backdrop" option, which can be found in its Wanderer menu
(which was mentioned in the previous paragraph). This will make Wanderer
just another window you can move, resize, etc. This is somewhat different
from desktops of other systems, that usually are fixed in their place. Of
course, you can even decide not to use the Wanderer at all, and use instead
your preferred file manager (e.g. Directory Opus, or Scalos).

But how do the applications behave then? Where will the windows be opened?
This is where the concept of a "screen" is introduced. A "screen" is the
place where your window is meant to open. If an application is described as
"opening on the Wanderer screen", it will look like what usually happens in
other OS-s - your application will appear as a window on the desktop. On
the other hand, the window can "open on its own screen" - it looks like it
occupies the whole screen. It doesn't. it opened a new "screen" of its own
in front of the Wanderer screen, and it now obscures the desktop. You can,
however, switch the screens with the "depth gadget", the graphic in the top
right corner of the screen. So, if you wish, you can switch between Wanderer,
Directory Opus, and any other applications opening on their own screens.
This behavior also comes from the Amiga's historical GUI - "Workbench".

Now a few words on the windows themselves. AROS windows usually have
"gadgets", control buttons to manipulate them with. The first one, in the top
left corner of a window, is the "close Gadget"; it allows you to close the
window. The next, on the right, is the "size gadget", which allows minimizing
and maximizing the window. And the last, in the top right corner again, is
the "depth gadget", which allows moving the window to the front or to the
back, just like when switching screens. Some windows may not have gadgets at
all - look at the Kitty demo; it doesn't even show a border, and yet has a
well-curved shape - or has a different set of gadgets.

The window's contents usually consist of elements that could be seen in
any GUI - buttons, lists, strings of text, any other kind of gadgets. If an
application is intended to change any preferences of a subsystem or an
application, it's usually called *Pref* for short. Such a Pref has a specific
extra set of buttons. Usually these buttons are: TEST (apply all the changes
made by Pref, but don't save the changes and don't close the window), SAVE
(apply and save the changes and close the window), USE (apply the changes and
close the window, but don't save the changes), CANCEL (discard all the
changes and close the window).

Some remarks on names::
It helps to know that, again from the Amiga's history, the file placement location
that corresponds to a directory is often called a "drawer", rather than a "folder" 
on other systems, but its meaning remains the same. Imagine a large workbench: a
worktop and drawers below it. Translate it as "a directory" if you're uncertain.

There are special keys in AROS, just like on the original Amiga, used for
quick commands. On a PC keyboard, Left and Right WinKey are used for
the original Amiga keys "Left Amiga" and "Right Amiga". They are used in
different combinations to launch commands.

Another name you may encounter in AROS is "Zune". Zune is a GUI toolkit 
developed as a replacement for MUI (Magic User Interface), widely used
on Amigas. There is no explicit application called "Zune", but you can find
Zune Pref, which allows you to set settings for Zune-based applications in
general, or for a single application in particular. For example, to set Zune 
preferences for Wanderer you can select "GUI prefs" from Wanderer's menu. Or to 
set Zune prefs for other applications you can use it as a CLI command: Zune 
<application filename>.

To be finished...



AROS CLI (Command Line Interface)
---------------------------------

To-do - CLI commands abstract and comparison ...

AROS has its own CLI, the Command Line Interface, greatly expanding the
capabilities of the OS. Those who have used AmigaOS will notice that it looks
pretty close to the CLI of AmigaDOS. Some CLI basics are described in
`introduction <shell/introduction>`__ to CLI commands.

You no longer need to type all the commands to the end - now there's
a neat tabulator completion similar to that on Linux consoles. This allows
you to also append filenames or choose them from a list.

To be finished...



AROS System programs
--------------------

Several applications have been mentioned in passing before, but here is a
description of their functions. AROS system applications are collected in
separate directories:

    + C - the location of all the system commands used in the CLI
    + Classes - the place for datatypes, gadgets images and Zune classes
    + Devs - where the device-related files (drivers, keymaps) and
      datatypes are placed
    + Extras - where all the contributed programs reside
    + Fonts - here you can find all of the system fonts. Any additional
      fonts must be appended (assigned) to this directory.
    + Libs - where the system libraries are located.
    + Locale - holds catalog files of various AROS applications translations
    + Prefs - has a number of preferences-setting programs
    + S - contains some system launch-time scripts
    + System - the place for certain system applications
    + Tools -  the location for other commonly used applications
    + Utilities - the place for not-so-commonly used but still useful
      applications


Another kind of AROS applications are the *Commodities*. These are
applications which can help you make your system more comfortable. For
example, AROS windows don't come to the front when you click on them, and
if you find this uncomfortable, you can use the AROS commodity ClickToFront
to change that. That commodity can be found among other commodities in
SYS:Tools/Commodities directory. When you double-click on it, a window will
come to the front if double-clicked.
Another example is Opaque commodity - it allows you to move windows with
their contents showing while it moves. There's also an Exchange commodity
which allows you to manipulate launched commodities and get information
about them. Usually commodities don't open any windows. To stop them, simply
double-click them again.

To operate with files of different types, Amiga-like systems have traditionally
used *datatypes*. A datatype is a kind of system library which allows the
programs to read or/and write such files without having to bother about the
implementation of such formats. So, any program on the system can in theory use 
datatypes to interact with sound files, picture files, text files, or many other 
file types. They can open, load, and save them without having to write specific 
code to do so. That is the beauty of using datatypes. AROS is still in development 
and so many new datatypes are being added to AROS on a regular basis.

Again some terms need explaining:
AROS uses *handlers* to communicate with the file systems, and *HIDDs* to
communicate with the hardware. The keyboard and mouse use HIDDs. The graphics drivers 
for AROS are also HIDDs. File systems used on AROS such as the FAT File System has its 
own fat.handler that handles the file system operations. That way more file systems can 
be added to AROS.

To be finished...




Customising the AROS Installation
=================================

Setting up the Locale
---------------------

AROS is becoming a really international system these days, being
translated to many languages. Translating isn't very difficult, and the
number of the AROS translators is still increasing. If Unicode support
will be implemented it can be translated in every language people use.
If you feel you can translate AROS into your language, both OS and
documentation, do not hesitate to contact us and offer your help.

So, about the language portion of AROS. Depending on the available 
fonts you must set fonts by launching SYS:Prefs/Fonts and designating Fonts 
to different system text: Icons (used for icons labels), Screen (used on common 
screen) and System (used in CLI window). If your language uses a character set 
different from ISO (for example, Cyrillic CP-1251) these *must* be the fonts for 
the correct codepage. AROS currently can use two kinds of fonts - the Amiga
bitmap fonts (which can be used directly) and TrueType (via the FreeType 2
manager, which still has some issues with non-ISO codepages). Bitmap
fonts are in any particular codepage, and TTF can be Unicode. This language
localisation in AROS and on Amiga OS is traditionally called "Locale".

How can you change the AROS locale? To do this you need to launch the
Locale pref in SYS:Prefs. You can see a list of supported locales there
and select your preferred ones. On the second page of this Pref you can
select the preferred country (it gives correct currency and date/time
format). And the last tab allows you to change the computer's time zone to
that used in your location.

After you've made changes to fonts and locale, reboot the system, and you 
should be able to see all the translated content.

So now you can read, but can you also write in your language? To do this,
you'll have to change the keyboard layout.

Keyboard and mouse settings are managed by the Input pref. You can change
the layout and click *Use* but we can do even better. This tool
allows you also to save presets - just like any application it's has a menu,
allowing you to save your preferences to a file, to keep different settings
of locales. We will use it later to switch our keyboard layouts. Choose your
locale's keyboard layout from the list and make a left click to open the
context menu. Then enter the name of your preset to File string, say,
*locale1* and click Ok to save it to SYS:Prefs/Presets directory. Now choose
an American (PC) layout and repeat the saving presets, such as with name
*English*. These presets can be used later to switch the layouts. Click
*Cancel* to exit.

There's an FKey commodity which allows you to make actions assigned to
some combinations of keys. Launch it to assign the locale switching.
After you double-click on FKey icon, launch the Exchange, choose
the FKey from list and click the *Show* button. This will invoke the FKey
window. You can see the ALT TAB in list assigned to window switching. Now
enter the first key combination, say, *ALT Z* and go to the right panel.
Choose *Launch the program* from pull-down menu and enter SYS:Prefs/Input as
an argument. Append the USE switch and *english* preset name to the string as
shown::

    SYS:Prefs/Input USE SYS:Prefs/Presets/english

Click on the *New* Button to add another combination. Now set a different key
combination for your locale the same way, except that you replace
*english* with your preset name. Click *New* button again and then
*Save Settings*. Now you can use the defined key combinations to switch the
keyboard layouts.



Installing the software
-----------------------

Actually there's no installer system in AROS. Installing an application
usually means you have to extract it to some directory on a hard disk or
RAM disk. Then some programs require you to make assignments, which you can do
in the CLI with the Assign command, and some start script additions.
For example - to work properly, Lunapaint needs Lunapaint: to be assigned to
the directory it was extracted to. You can do this with the following command

    Assign Lunapaint: Disk:Path/Lunapaint

But if you don't want to type this command after reboot when you want to start
Lunapaint again, you'll need to put it into the S:User-Startup script.
To do this, type this command in CLI prompt::

    :> edit S:User-Startup

Then insert the Lunapaint (or other program) assign at the end of the file.
(If the name of the assign is rather cryptic, it's wise to add a comment to
remind you of the program it belongs to.) Save the changes and that's it.
Such a procedure can be used for any program that needs it.

Another way is to use the ENVARC:SYS/Packages directory. All you need here
is to create a text file with the name of your application, within that file
then add the path to that application. Then create a directory named S in the
program's directory and put the package start-up file there. This way is
safer, but it's different from the style of the Amiga.



Setting up the Network
----------------------

To communicate with other computers on the network, AROS uses a TCP Stack,
AROSTCP, which is a port of AmiTCP. This software is located in the
``SYS:System/Network/AROSTCP`` directory. Setting up is not easy but a GUI
tool is being developed. Please note that there actually are very few networking
programs on AROS, as yet (but some interesting tools are in development,
soon to be released).

First you need to set up your machine's side of the network. This
part can differ depending on your hardware. On a real machine you need to
install the supported network interface card (NIC) and plug the cable in. On
a virtual machine you should set up its NIC implementation and check if it's
supported by AROS (at least the QEMU and VMWare ones are supported).


Net on QEMU/Linux
"""""""""""""""""

Read the tips for launching AROS on Linux QEMU above. After it's
functional, continue with the second part.

That second part is to set up AROSTCP in AROS to work. On a Linux system some
steps need to be done to get the network in VM to work. You'll need to be root
for several of those-

The tun (tunnel) module must be loaded::

    #> modprobe tun

Then, the kernel must become a router::

    #> echo 1 > /proc/sys/net/ipv4/ip_forward

Then, a rule must be added to the firewall::

    #> iptables -t nat -A POSTROUTING -o eth0 -j MASQUERADE

Finally, while still being root, start QEMU with::

    #> qemu -cdrom aros.iso -m 48

The Linux tun module, by default, creates a gateway for the fake network at
172.20.0.0/16 with a gateway at 172.20.0.1.
Say our QEMU hosted machine is at 172.20.0.10.
Say your usual LAN is 192.168.0.0/24 with a DNS at 192.168.0.1
(or anywhere on the Internet, for that matter).

*For QEMU on Windows in user mode networking you must replace it with
10.0.2.16 for host and 10.0.2.2 for gateway, or use TAP adapter, which is
better. Remember to set up your firewall in way it can pass the QEMU
packets.*

You have to edit 3 files in the ``SYS:System/Network/AROSTCP/db`` drawer:
hosts, interfaces and netdb-myhost.

+ In *hosts* remove or comment out all entries. Hosts will be in netdb-myhost
  for now.
+ In *interfaces* uncomment the prm-rtl8029.device line (QEMU is emulating
  this NIC among others, you can use pcnet32.device for VMWare), edit it
  (change an *IP=* string to which was above)::

        eth0 DEV=DEVS:networks/prm-rtl8029.device UNIT=0 NOTRACKING IP=172.20.0.10 UP

+ In *netdb-myhost*, add the various local known hosts,
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
(Create the file if it doesn't exist in a CLI window with the command echo "True" 
>sys:AROSTCP/Autorun) Edit the ``SYS:System/Network/AROSTCP/S/Package-Startup``::

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

The ``SYS:System/Network/AROSTCP/S/Startnet`` file should be something like::

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

The output should be something like this::

    lo0: flags=8<LOOPBACK> mtu 1536
            inet 0.0.0.0 netmask 0x0
    eth0: flags=863<UP,BROADCAST,NOTRAILERS,RUNNING,SIMPLEX> mtu 1500
            address: 52:54:00:12:34:56
            inet 172.20.0.10 netmask 0xff000000 broadcast 172.255.255.255

If you can see that eth0 string then your interface is up. You can test it
by launching those commands::

    AROS:>ping 172.20.0.1
    PING 172.20.0.1 (172.20.0.1): 56 data bytes
    64 bytes from 172.20.0.1: icmp_seq=0 ttl=255 time=xx ms
    64 bytes from 172.20.0.1: icmp_seq=1 ttl=255 time=xx ms
    64 bytes from 172.20.0.1: icmp_seq=2 ttl=255 time=xx ms

    --- 172.20.0.1 ping statistics ---
    3 packets transmitted, 3 packets received, 0% packets loss
    round trip min/avg/max = x/xx/xx ms

Output like this means that our interface packets reached the gateway with
172.20.0.1 address. If you got Host unreachable errors, then check your
AROSTCP settings and VM options.

On Windows: To make external network accessible to VM you must set up routing
from our virtual net to a real one, such as make a host system a router. For
Linux this has been done already.

You can test it even further by pinging other hosts and try using some
networking applications which you can find on Archives.aros-exec.org, like
ftp and AIRCos. If you use an FTP program with your FTP server, remember
it can work only with passive ftp servers, and set up your server to this
mode.


Net on QEMU/Windows
"""""""""""""""""""

Setting QEMU to run on Windows is somewhat more difficult than on Linux. First,
make sure you have set your Firewall to learning mode (or prepare it to
receive new rules) or completely disable it. Firewall can block transfers to VM.

There are two ways to use network with QEMU on Windows. The first and the
more proven is to use the tap interface. To use it you must download
the `OpenVPN <https://openvpn.net/>`__ 2.0 package for Windows (Windows 2k/XP
only).
After you install it, you will get an extra network connection in
disconnected state. Rename it to, say, "eth0". Then go to the eth0
connection properties and set an IP address in the properties of TCP-IP
protocol. The IP address you set has to be *in a different* subnet from your
base IP (Example: If your net has IP addresses like 192.168.0.x, then set,
say, 10.0.2.2) and a 255.255.255.0 netmask. *Reboot*. Then replace the
starting line options in QEMU (or add them if there were none), to read
``-net nic -net tap,ifname=eth0``.
Then set an AROS side as it was described above for user mode networking.
Note that you will need the administrator privileges to install the OpenVPN
TAP adaptor.

The second option is to use a user-mode networking stack which is launched
by default (or using the ``-net nic -net user`` switches, which is the
default now).
For the 0.8 or newer QEMU versions, use the following options. Setting the
AROS side is similar to that in Linux, but you will need to use
the following IP addresses to set up and test: ``10.0.2.16`` for AROS
machine IP (instead of 172.20.0.10), ``10.0.2.2`` for gateway (instead of
172.20.0.1).
This mode can work even without giving administrating privileges to user, but
can *make some applications on AROS refuse to work properly (such as
FTP-client)*.

There are some more guides available on how to set-up the QEMU networking in Windows:

    + For VLan *(dead link removed)*
    + For Tap *(dead link removed)*


Net on VMWare
"""""""""""""

The network on the VMWare side is relatively easy to set up. All you need is
to add the NIC to configuration of your VM and assign the IP to the new
network connection, associated with that card. Other using notes is the same
as with QEMU above, except for the adapter type in
``SYS:System/Network/AROSTCP/db/interfaces`` file ::

    eth0 DEV=DEVS:networks/pcnet32.device UNIT=0 IP=10.0.2.2 UP


Net on a real PC
""""""""""""""""""

On a real PC you will need to do all you have to do for any OS - prepare the
hardware to connect to AROS box - cables, hub and other. Then you must set up
the AROS side similar to shown above, replacing the IP addresses to those
acceptable in your LAN for AROS-box IP, gateway and DNS. Set up the
networking card in the *interfaces* file by uncommenting the string
corresponding to your card.

To be finished...



Setting Up The Sound
--------------------

Currently there's not much support for sound in AROS. For one thing, at the
moment there's no working driver for a virtual machine's implementation of
sound cards (usually sb16/es) so the way to try to get sound would be to use
AROS-native on pc with a real SB Live/Audigy card. The AC97-compliant
codecs are supported as well. Note: new AROS drivers are being written, and 
the sound system is still being developed. So, if your AROS sound system 
doesn't work at the moment, don't worry. It may work in the near future.

AHI sound in AROS also supports no sound (VOID) and disk writing options.

To be written by someone...


Is that all the User's Information in this guide?
=================================================

This guied should have shown you how to get, install and use AROS.
After having tried running every program in the directories C, Demos,
Utilities, Tools, Games, etc., you might wonder if that is all. No,
you can find some more applications at https://archives.arosworld.org.

If you feel that this guide did not provide enough information about
compiling, installing, using Subversion, shell, etc., know that there are
reasons for that. First, there is already much information available, and
it would be rather pointless to include that in this document.  Second, 
such information is rather specific, as one of the readers might be
interested in compiling the source code, others might want to know all
about the Amiga shell, etc. So to keep this guide readable, it only points
to places where you can find such information, instead of providing it
here. It's up to the reader to decide whether such information would be of
interest.


.. _Linux: https://www.linux.org/
.. _UAE:   https://amiga.technology/uae/
.. _install: installation

