======================
"How-to" Documentation
======================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright � 1995-2010, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::


How to access AROS' disk images from UAE
----------------------------------------

Within UAE, a floppy disk image can be mounted as a hardfile and then used as a
1.4 MB hard disk. After you have put the files you want on the hardfile disk
image (or whatever you wanted to do), you can write it to a floppy.

The geometry of the hardfile is as follows::

    Sectors    = 32
    Surfaces   = 1
    Reserved   = 2
    Block Size = 90


How to access AROS' disk images from hosted flavors of AROS
-----------------------------------------------------------

Copy the disk image to the DiskImages directory in AROS (SYS:DiskImages, e.g.
bin/linux-i386/AROS/DiskImages - (the drawer must be created if it doesn't
exist).) and rename it to "Unit0". After starting AROS, you can mount the disk
image with::

    > mount AFD0:


How to restore preferences to their defaults
--------------------------------------------

In AROS, open a CLI shell, go to ENVARC: and delete the relevant files for the
preferences you want to restore.


How to change the screensaver/background
----------------------------------------

At the moment the only way to change screensaver is to write your own one.
The Blanker commodity can be tuned with Exchange, but it's only able to do
"starfield" with a given amount of stars.
The background of Wanderer is set with the pref tool Prefs/Wanderer.
The background of Zune windows is set with the Zune pref tool Prefs/Zune. You
can also set your chosen application preferences by using the
Zune <application> command.


How to make windows refresh from black on AROS-hosted
-----------------------------------------------------

You must supply the following string (as is!) to the "Device" section of
your /etc/X11/xorg.conf (or XFree.conf)::

    Option  "BackingStore"

See Installation__ for details.

__ installation#running


How to transfer files to a virtual machine with AROS
----------------------------------------------------

The first, and simplest, way is to put files on an ISO image and connect it to
the VM. A lot of programs are able to create/edit ISO's, like UltraISO,
WinImage, or mkisofs. Secondly, you can set up a network in AROS and an
FTP server on your host machine. Then you can use an FTP client for AROS to
transfer files (look for MarranoFTP). This is tricky enough not to elaborate
on it further, here. User documentation contains a chapter about networking;
go for it. Thirdly, there's now a promising utility (AFS Util), allowing you
to read (no write support yet) files from AROS AFFS/OFS disks and floppies.


How to clear the shell window; how to set it permanently
--------------------------------------------------------

Type this command in the shell::

    Echo "*E[0;0H*E[J* "

You can edit your S:Shell-Startup and insert this line somewhere, so
you'll have a new "Cls" command::

    Alias Cls "Echo *"*E[0;0H*E[J*" "

BTW: here's a S:Shell-Startup modified to start the shell in black and
with a modified prompt::

    Alias Edit SYS:Tools/Editor
    Alias Cls "Echo *"*E[0;0H*E[J*" "
    Echo "*e[>1m*e[32;41m*e[0;0H*e[J"
    Prompt "*n*e[>1m*e[33;41m*e[1m%N/%R - *e[30;41m%S>*e[0m*e[32;41m "
    date


More about printer escape sequences::

    Esc[0m
    Standard Set

    Esc[1m and Esc[22m
    Bold

    Esc[3m and Esc[23m
    Italics

    Esc[4m and Esc[24m
    Underline

    Esc[30m to Esc[39m
    Set Front Color

    Esc[40m to Esc[49m
    Set Background Color

Values meanings::

    30 grey char -- 40 grey cell -- >0 grey background -- 0 all attributes off
    31 black char - 41 black cell - >1 black background - 1 boldface
    32 white char - 42 white cell - >2 white background - 2 faint
    33 blue char -- 43 blue cell -- >3 blue background -- 3 italic
    34 grey char -- 44 grey cell -- >4 grey background -- 4 underscore
    35 black char - 45 black cell - >5 black background - 7 reverse video
    36 white char - 46 white cell - >6 white background - 8 invisible
    37 blue char -- 47 blue cell -- >7 blue background

The codes can be combined by separating them with a semicolon.


How to launch AROS-hosted in fullscreen
---------------------------------------

Start AROS with the option "--fullscreen".


How to make 2-state AROS Icons
------------------------------

AROS icons are actually renamed PNG files. But if you want icons with two
states, normal and selected, use this command::

    join img_1.png img_2.png TO img.info


How to mount an ISO image on AROS; how to update nightly builds that way
------------------------------------------------------------------------

+ Get the ISO into AROS (by wget or any other way)
+ Copy the ISO into sys:DiskImages (the drawer must be created if it doesn't
  exist).
+ Rename ISO to Unit0 in that dir.
+ Go to Sys:Storage/DOSDrivers and double click ISO0.
+ To mount the ISO automatically after each reboot, drag or copy ISO0 from 
  Sys:Storage/DOSDrivers to Sys:Devs/DOSDrivers.

+ You can now copy anything from ISO0:. Additionally, you can create a script
  to update your nightly build like this::

        copy ISO:boot/aros-pc-i386.gz sys:boot/
        copy ISO:C sys:C all quiet
        copy ISO:Classes sys:Classes all quiet
        copy ISO:Demos sys:Demos all quiet

And so on for each directory except Prefs, and Extras:Networking/Stacks. Prefs
have to be kept if you want it. Also you can set AROSTcp to keep its settings
in separate directory.

If you want to write all over, just do::

    copy ISO:C sys:C all quiet newer


How to unmount a volume
-----------------------

Launch these two commands in CLI::

    assign DOSVOLUME: dismount
    assign DOSVOLUME: remove

where DOSVOLUME: is DH0:, DF0:, etc


How to mount a FAT Floppy with the FAT.handler
----------------------------------------------

Currently the FAT volumes are auto-detected and auto-mounted,
but here's how to manually mount it.

Create a mountfile (text file) with these 3 magic lines::

    device = trackdisk.device
    filesystem = fat.handler
    unit = 0

+ Pick a name, PC0 for example. Set this file default tool to c:mount in
  properties (or put mountfile to devs:dosdrivers or sys:storage/dosdrivers)
+ Double click on it.
+ Insert a FAT formatted floppy.
+ See the icon appearing on Wanderer's desktop.


How to mount a real HD FAT partition with the FAT.handler
---------------------------------------------------------

Currently the FAT volumes are auto-detected and auto-mounted,
but here's how to manually mount it.

First you'd need to read the drive's geometry and write down some values.
You can use HDToolbox or Linux fdisk for that. The BlocksPerTrack value is
taken from the sectors/track value. Note that it has absolutely nothing to
do with the physical disk geometry - FAT only uses it as a multiplier.
If you get the Cylinders e.g. from HDToolbox or using the Linux fdisk like
this::

    sudo fdisk -u -l /dev/hda,

Then you'll need to set BlocksPerTrack=63.
To ensure you have numbers in cylinders look for Units=Cylinders in output. If
you got fdisk output in sectors (Units=sectors), set BlocksPerTrack=1.

LowCyl and HighCyl are the partition's cylinders, like::

    mark@ubuntu:~$ sudo fdisk -l -u /dev/hda
    ...
    /dev/hda1 * 63 20980889 10490413+ c W95 FAT32 (LBA)

So, LowCyl is 63, and HighCyl is 20980889, blockspertrack=1

Create a mountfile (text file) with these lines::


    device = ata.device
    filesystem = fat.handler,
    Unit = 0

    BlocksPerTrack = 1
    LowCyl = 63
    HighCyl = 20980889
    Blocksize=512

+ Pick a name, FAT0 for example
+ Set this file's default tool to c:mount in properties
  (or put mountfile to devs:dosdrivers or sys:storage/dosdrivers)
+ Double click on it
+ See the icon appearing on Wanderer's desktop

Note: Formula for counting the blocks:
block = ((highcyl - lowcyl) x surfaces + head) x blockspertrack + sec


How to use a joystick or gamepad with AROS
------------------------------------------

Just plug your digital/analogue joystick or gamepad into a USB port. The
device will be handled by the Poseidon USB stack.


How to change joystick mode to analogue
---------------------------------------

By default a connected USB joystick emulates an Amiga digital joystick. To
change this behavior, so that the joystick is presented as analogue, you
have to use the Trident preferences application (System:Prefs/Trident).

Open Trident and go to the Devices window. Select your controller from the
list and click the Settings button. This will open a new window. On the
"General" tab, find the "Lowlevel Library Joypad Emulation" section. Find the
ports that are set to "Merge with USB" or "Override with USB" and change them
to "Analogue Hack".

Please note that analogue joystick support is an extension of original
Amiga-functionality, thus an Amiga application must be explicitly written
to use it. AROS' SDL library uses this functionality, thus all SDL applications
that use a joystick, can use the analogue joystick feature.


How to change the joystick port assignment
------------------------------------------

By default a connected USB joystick is present in Port 1. To change its
location to Port 0 you need to use the Trident preferences.

Open Trident and go to the Devices window. Select your controller from the
list and click the Settings button. This will open a new window. On the
"General" tab find the "Lowlevel Library Joypad Emulation" section. Port 1
should be set as either "Merge with USB" or "Override with USB". Change this
setting to "Don't touch". Change Port 0 setting to "Merge with USB".

Go to the "Actions" tab. In "Reports and collection" select the first entry
named "Joystick". in the "Usage items" select "X axis". Go to the
"Performed actions" area. On the left there will be a list of triggers. Each
of them should have (port1) in their parameters. Click on the first trigger
and, using the buttons to the right of the list, change port1 into port 0.
Repeat this for all triggers and for all items on "Usage items" list.


How to make joystick simulate keyboard keys
-------------------------------------------

With Poseidon it is possible to make the joystick simulate key presses. This
allows using the joystick for playing games that have keyboard support only.
This feature is configured in the Trident preferences.

Open Trident and go to the Devices window. Select your controller from the
list and click the Settings button. This will open a new window. Go to the
"Actions" tab. On the right top window, select X axis. On the left bottom
list, select an entry "Digital Joystick, Push left(port 1)". On the panel to
the right, change "Digital joystick" to "Raw Key". A list of keys will be
displayed. Select the key you wish to send. Repeat the procedure for the
"Digital Joystick, Release left (port 1)" option, but this time check
"Send key up event instead of key down".

Open shell and move your joystick to the left - your selected letter should
appear in the shell.


How to enable HostGL
--------------------

On the hosted flavors of AROS you can speed up applications which use Mesa GL
by enabling a wrapper to the host's Mesa GL. This can be done by opening a
Shell window and entering::

    setenv sys/gl save hostgl
