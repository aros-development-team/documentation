=======================
AROS průvodce instalací
=======================

:Authors:   Stefan Rieken, Matt Parsons, Adam Chodorowski, Neil Cafferkey, Sergey Mineychev
:Copyright: Copyright (C) 1995-2008, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Needs to be updated for some AROS ports. Can be translated.
:Abstract:
    Tento manuál vás provede přes nezbytné kroky pro nainstalování
    různých druhů AROS.

    .. Warning:: 
    
        AROS je software alfa kvality. To znamená, že je v současné době spíše
        zábava k hraní a cool pro vyvíjení. Pokud jste sem přišli, protože
        si myslíte, že AROS je dokončený, kompletní a plně použitelný operační
        systém, budete nejspíš zklamáni. AROS takový ještě není, 
        ale pomalu se pohybujeme správným směrem.


.. Contents::


Stahování
=========

AROS je aktuálně pod tvrdým vývojem. The result is that you have to choose
between stability and features. Currently there are two types of binary packages
available for download: snapshots and nightly builds. 

Snapshots are done manually quite infrequently, mostly when there have been
a larger amount of useful changes done to AROS since the last snapshot and
someone feels motivated to create a new snapshot. In short, there is currently
no regular release schedule. Even though they are made infrequently and that we
try to pick times when AROS is particularly stable, there is no guarantee they
will be bug-free or work on your particular machine. That said, we try to
test snapshots on a wider variety of machines, so in practice they should work
relatively well.

Nightly builds are done, as the name implies, automatically every night directly
from the Subversion tree and contain the latest code. However, they have not
been tested in any way and can be horribly broken, extremely buggy and may even
destroy your system if you're very unlucky. Most of the time though, they work
fine.

Please see the `download page`_ for more information on which snapshots and
nightly builds are available and how to download them.


Instalace
=========

AROS/i386-linux a AROS/i386-freebsd
-----------------------------------

Požadavky
"""""""""

To run AROS/i386-linux or AROS/i386-freebsd you will need the following:

+ A working FreeBSD 5.x or Linux installation (doesn't really matter which
  distribution you run, as long as it's relatively recent).
+ A configured and working X server (for example X.Org or XFree86).

That's it. 


Extracting
""""""""""

Since AROS/i386-linux and AROS/i386-freebsd are hosted flavors of AROS,
installation is simple. Simply get the appropriate archives for your platform
from the `download page`_ and extract them where you want them::

    > tar -vxjf AROS-<version>-i386-<platform>-system.tar.bz2

If you downloaded the contrib archive, you may want to extract it too (but
now it`s contents is already included in the system archive and LiveCD)::

    > tar -vxjf AROS-<version>-i386-all-contrib.tar.bz2


Running
"""""""

After having extracted all files you can launch AROS like this::

    > cd AROS
    > ./aros


.. Note:: 
    
    Unless you are running XFree86 3.x or earlier, you may notice that the
    AROS window does not refresh properly (for example when a different window
    passes over it). This is due to the fact that AROS uses the "backingstore"
    functionality of X, which is turned off by default in XFree86 4.0 and later.
    To turn it on, add the following line to the device section of your
    graphics card in the X configuration file (commonly named
    ``/etc/X11/xorg.conf``, ``/etc/X11/XF86Config-4`` or
    ``/etc/X11/XF86Config``)::

        Option "backingstore"

    A complete device section might then look like this::

        Section "Device"
            Identifier      "Matrox G450"
            Driver          "mga"
            BusID           "PCI:1:0:0"
            Option          "backingstore"
        EndSection


AROS/i386-pc
------------

Požadavky
"""""""""

You will need an average PC (i486 or Pentum-based) with *PS/2 mouse* and PS/2 or AT keyboard, 
IDE hard disk and CD-ROM, (S)VGA video card and monitor. Also any available PC-compatible VM 
(virtual machine) can be used.
At least 16 MB of RAM and VESA-compliant VGA card is recommended. 
There`s a generic accelerated drivers (HIDD`s) for ATI and nVidia cards. Also you can add
the networking interface card (there`s some supported) to try networking in AROS.
In trouble check the FAQ if it contains any information on your kind of hardware.


.. Note:: 
    
    We currently do not recommend installation of AROS/i386-pc onto a harddrive
    [#]_. But you definitely would need to install AROS to test some of 
    it`s features and workarounds must be advised. Please note that you **should 
    not** use install on your working machine, which HD contains precious data!
    We`re taking no responsibility for any data loss occured during the installation. 
    Any bug reports on installation is welcome.

Installation media
""""""""""""""""""

The recommended installation media for AROS/i386-pc is CDROM, since we can fit
the whole system onto a single disc (and also all the contributed software).
This also makes the installation easier, since you don't have to go through
hoops transferring the software on several floppies.

Since nobody currently sells AROS on CDROM (or any other media for that matter),
you will need access to a CD burner to create the installation disk yourself.


CDROM
^^^^^

Writing
'''''''

Simply download the ISO image from the `download page`_ and burn it to a CD
using your favorite CD burning program. There`s a number of freeware 
cd burning programs for any system, and we can point Windows users to the 
`InfraRecorder <http://infrarecorder.org/>`__ - it`s free, 
it`s small and fast, and it`s just Nero-killing simple. 


Booting
'''''''

The easiest way to boot from the AROS installation CD is if you have a computer
that supports booting from CDROM. It might require some fiddling in the BIOS
setup to enable booting from CDROM, as it is quite often disabled by default.
Simply insert the CD into the first CDROM drive and reboot the computer. The
boot is fully automatic, and if everything works you should see a nice
screen after a little while. 

If your computer does not support booting directly from CDROM you can create
a boot floppy_ and use it together with the CDROM. Simply insert both the
boot floppy and the CD into their respective drives and reboot. AROS will start
booting from the floppy, but after the most important things have been loaded
(including the CDROM filesystem handler) it will continue booting from the
CDROM.

.. _floppy: Disketa

Disketa
^^^^^^^

These days floppies can be found useful only to boot if your PC`s BIOS doesn`t 
support booting from CD or on some really obsolete PC`s. But it`s still maitaned.


Writing
'''''''

To create the boot floppy, you will need to download the disk image from
the `download page`_, extract the archive, and write the boot image to a floppy
disk. If you are using a UNIX-like operating system (such as Linux or FreeBSD), 
you can do this with the following command::

    > cd AROS-<version>-i386-pc-boot-floppy
    > dd if=aros.bin of=/dev/fd0

If you are using Windows, you will need to get rawrite_ to write the image to
a floppy. Please see the documentation of rawrite_ for information on how to use
it. There`s also an GUI version called rawwritewin.


Booting
'''''''

Simply insert the boot floppy into the drive and reboot the computer. The boot
is fully automatic, and if everything works you should see a nice screen after
a while.

Instalace na pevný disk
"""""""""""""""""""""""

Well, note that you have been **WARNED** that HD installation is
incomplete now and is **dangerous** to any data, so make sure the PC
you're using does not contain any useful data. Using a virtual machine
is recommended, as it minimises any possible risk and allows AROS to be
used and tested on a working machine. There are many free VM`s available
now, such as QEMU and VMWare.

Setting up the HD
^^^^^^^^^^^^^^^^^

First, set up your HD - either real or a virtual drive image - for use.
For a real drive, this may involve plugging it into the machine (always
a good start) and setting it up in the BIOS. For a virtualiser's or
emulator's virtual drive, you probably just need to select an option to
create a new drive image, and set it as one of the virtual PC's boot
devices (the CD drive must be the first boot device during installtion
of AROS however).

Another step will be cleaning the HD of any existing partitions, to
remove anything that can prevent our partition creation succeeding.
Installing AROS along with another OS is possible, but will require more
skills and is not covered here. For the moment, we will learn how to
install AROS as the only system on the HD.

Partitioning
^^^^^^^^^^^^

Single partition install

Here he will learn how to install AROS as the only system on PC and
being placed on a single partition.
This is an easier case to install.

This chapter can be found a bit tricky, as install feature is incomplete. 
First, remember a *common rule* for this process - *reboot* after any
significant change made to the filesystem (we will note where it is
needed). Rebooting means closing the HDToolbox window if it's open and
restarting the computer or VM, so it`s an hard reset. You can also try a soft 
reset by typing <reboot> ENTER in CLI window.

First, find a tool on the AROS CD called *HDToolBox*. It's located in the
Tools drawer. This is your HD tormenter for a while. When you run it,
you will see a window with a device-type selector. In this example (here
and further on), we are using a real or virtual IDE hard drive (also
known as an ATA hard drive). So, clicking on the *ata.device* entry will
show Devices:1 in the left window. So, this is our HD. By clicking on
this entry we will enter the available HD list.

So here we should see our HD listed. If it`s a virtual HD, we will see
something like *QEMU Harddisk* or the equivalent VMWare one. If your HD is
real, you should see its name. If this doesn't happen, you must make
sure you've correctly prepared your HD. Clicking on the HD name will
give us some information::

    Size: <Size of HD>
    Partition Table: <type of current PT; must be unknown after cleanup>
    Partitions: <count of partitions on HD; must be 0 as we've just started>

Well, now we must create a new partition table. Here, for a PC we must
create a *PC-MBR* type of table. To do this, please press the *Create
Table* button and choose *PC-MBR* from the list. Click OK.

Then we must write the changes to disk. To do this, click on the HD's
name and press *Save Changes*. Answer *Yes* in the confirmation dialog.
Close the HDToolbox window and reboot the system from the Live CD.

After the system boots up, run HDToolbox again. Now, after entering the
*ata.device* entry we must see the info "Partition table: PC-MBR,
Partitions:0". That's OK, we set no partitions yet. Let's do it now. 
Click on the HD's name to go to the partitions list. The list is empty
now. Click on *Create Entry* button, choose all the space by clicking on
unselected empty space and click *OK*. Now in the list you should see a
"Partition 0" entry. Choose it by clicking to get this information::

    Size: <Partition size. Almost equal to HD size>
    Partition table: Unknown <Not created yet>
    Partition type: AROS RDB Partition table <That's OK>
    Active: No <Not active>
    Bootable: No <Not bootable>
    Automount: No <Will not mount on system startup>

Here can be some difference - make a partition in RDB table or as usual PC-MBR
partition. RDB (Rigid Disk Block) is the choice of compatibility and was used 
in Amiga HDD`s partitioning, and we can use it too. Although, AROS supports 
FFS partitions created within a common PC-MBR table, like an usual PC partitions
like FAT/NTFS/etc. Second way can be considered somewhat more modern and more 
compatible to some new AROS programs. Let`s consider both.

*FFS in RDB*
Now, click on *Create Table* button, select *RDB table* and click OK. To
save changes, go *one level* up by clicking the *Parent* button, select the
HD name again and click the *Save Changes* button. Answer *Yes* in the
confirmation dialog twice. Exit from HDToolbox and reboot the machine. 

*FFS in MBR*
...to be added

After booting up, run HDToolbox (you`ve guessed that). Now the info for our
Partition 0 is the same except that the partition table is now RDB (or not). This
partition must be set to Active. To do this, click on the *Switches*
button, select the *Active* checkbox and click *OK*. Now what? Yes, save the
changes by going a level up and clicking the button. Exit and reboot.

Why are we rebooting so much? Well, HDToolbox and system libraries are
still unfinished and quite buggy, so rebooting after every step helps to
reset them to initial state.

After boot up, HDToolbox must show us that Partition 0 has become
active. That's good, now we must create our disk to install AROS on. Go
one level down by clicking on the "Partition 0" entry. Now what? Yes,
click the Add Entry button and choose all the empty space. Now you see a
"DH0" entry there, which is our disk. Clicking on it shows information::

    Size: <well...>
    Partition Table: Unknown (it's OK)
    Partition Type: Fast Filesystem Intl <OK>
    Active: No <OK>
    Bootable: No <we must switch it to Yes>
    Automount: No <we must switch it to Yes>

Now, go *2 levels up* to the HD name, click Save Changes, confirm, exit
and reboot. After booting up (pretty boring, isn't it?), what should we
do? Yes, we must set switches to the DH0 drive in HDToolbox. We go to
the DH0 entry and set switches with the relevant button and checkboxes:
*Bootable: Yes* and *Automount: Yes*. Save changes after going 2 levels
up again, confirm and reboot.

*How long is it left to go?* Well, we're more than half way to success.
After booting up and checking all the settings for DH0, we must see it's
OK now. So now we can exit HDToolbox with no hesitation left. Now it's
time for some CLI magic.

Formatting
^^^^^^^^^^

We must format our created DH0 drive to make it usable. Currently AROS have
a choice of two filesystems - Fast FileSystem(FFS) and Smart FileSystem(SFS). 
FFS is known to be somewhat more stable and compatible to most programs,
SFS is more fail-proof and advanced, but yet have some issues with some programs.
Currently we must set it to FFS, because GRUB bootloader is not supporting SFS
(GRUB2 will). Also please note that you can get problems using some ported 
software with SFS (such as gcc). So now open the CLI window (right click on 
upper menu and select Shell from the first Wanderer menu). At the prompt, enter 
the Info command (type ``info`` and press Enter). You should see our DH0 in 
the list as ``DH0: Not a valid DOS disk``. Now we will format it with the 
command::

    >format DRIVE=DH0: NAME=AROS FFS INTL
    About to format drive DH0:. This will destroy all data on the drive. Are 
    you sure ? (y/N)

Enter y, press Enter and wait a second. You should see the string
``Formatting...done`` displayed. If you got an error, check for all
partition parameters in HDToolbox, as you may be missing something, and
repeat.

If you`re experiencing problems with format (such as ERROR messages, especially
when using partitions in RDB), which is unlikely, then you can try a good old 
Amiga FORMAT64 utility::

    >extras/aminet/format64 DRIVE DH0: Name AROS FFS INTL


Now the Info command should show::

    >DH0: <size>  <used> <free> <full 0%> <errors> <r/w state> <FFS> <AROS>

That's it. Time for the pre-installation reboot.

.. Note:: If this all seems to be so boring that you can't stand it, there's 
          some relief if you intend to use AROS only in virtual machine. 
          First, you can get a pre-installed pack, such as *WinAROS/WinAROS
          Lite* - this system is already installed, but can be outdated. Second, 
          you can look at `AROS Archives`_ for *Installation Kit* that contains 
          ready-made virtual HD's that are already made and ready for install,
          so you can skip the previous procedure and install a fresh
          version of AROS. 


Kopírování systému
^^^^^^^^^^^^^^^^^^

After reboot, you may notice that you can see our AROS HD on the desktop
now, and it's empty. Now we need to fill it with files.

Now after the Drag`n`Drop support developed in AROS the whole system can be 
easily copyed from LiveCD by just dragging files to DH0: drawer. It`s only
left to replace the file dh0:boot/grub/menu.lst with dh0:boot/grub/menu_dh.lst.DH0
then.

There's an installer in AROS, as incomplete as HDToolbox is, but it can
be used. At least, we can try. So, here's the first way to install.

1. Run *InstallAROS* in the Tools drawer. You will see the welcome screen
telling you the same I did - we're using the alpha version. Let's
get juice out of it ;) There's a *Proceed* button for you to click. Next,
you will see the AROS Public License, and you should accept it to go
further. Now you will see the install options window (if it`s said No,
just *uncheck* the relevant box) ::

    Show Partitioning Options...    []
        <No. As we've done that already>
    Format Partitions               []
        <No. We have done that already>
    Choose Language Options         []
        <No. It's better to do that later>
    Install AROS Core System        [V]
        <Yes, we need it. We're here to do that>
    Install Extra Software [V] 
        <Yes. Uncheck only if you want a lite installation>
    Install Development Software    []
        <No. This is mostly a placeholder at a moment>
    Show Bootloader Options         [V]
        <Yes, bootloader will not be installed otherwise>

Let me note that *Show Partitioning Options* can be unselectable and greyed out
in case if installer is unable to find any suitable partition.
After you've selected or unselected everything we need, click *Proceed*.
The next window shows us possible installation destinations::

    Destination Drive
    [default:DH0]
    
    DH0  <that's correct>
    
    Use 'Work' Partition                        [] 
        <uncheck it, we're installing all-on-one>
    Copy Extras and Developer Files to Work?    [] 
        <same as above>
    Work drive ... <skipped>
    
Now after we uncheck it, click *Proceed*. The window showing bootloader
options appears. Here we only can check, if GRUB, the *GRand Unified Bootloader*,
is to be installed to DH0 and on which device. Click *Proceed* again.

Now the window says we're ready to install. Click *Proceed* once again. Do
you like this pretty button? ;)

After that, the copying progress bar will appear as files are copied. Wait a
while until the process finishes. After that, you will get the finishing
screen and *Reboot* checkbox. Leave this checked and click Proceed. No,
that isn't all yet - wait till the last step remaining. Now our machine
will reboot with the same settings as before, from Live CD.

Instalace zavaděče
^^^^^^^^^^^^^^^^^^

Now we still see our AROS disk, and all files are there. Haven`t we
already installed the bootloader in previous steps, what are we
missing? 
Well, if you use fresh nightly build then 'GRUB <http://en.wikipedia.org/wiki/GRUB>'__ 
must be already installed
and working, you can skip this step. If not, please read.

For older versions (before nov. 2006)
there were a bug in GRUB, preventing it from installing correctly from the
first try. So if you can`t boot now and get messages like GRUB GRUB FRUB etc
please read the following.
The reinstallation on the second try usually helps to solve it. So, now we
need InstallAROS once again. Repeat all the previous steps from point 1,
but uncheck every checkbox. After the last click on Proceed, GRUB will
be reinstalled, and a window will appear asking you to confirm that
write. Answer yes as many times as needed. Now, on the last page,
uncheck the Reboot checkbox, close the Install program and power off the
machine. 

Alternatively, GRUB can be installed from shell with this command::

    c:install-i386-pc device ata.device unit 0 PN <pn> grub dh0:boot/grub kernel dh0:boot/aros-i386.gz

where PN <pn> (or PARTITIONNUMBER <pn>) is the number of partition where GRUB 
bootloader will be installed.


Preparing to boot
^^^^^^^^^^^^^^^^^

We have just done our first installation alchemy course, and AROS should
be ready now. We must remove the Live CD from the CD drive (or disable
booting from CD in VM) and check it out. Hear the drum roll? ;)

If something goes wrong, there can be some answers...

Řešení problémů
^^^^^^^^^^^^^^^

Installation process is the one of most frequently ones asked about on forums,
mostly by newbees. You can check the FAQ if there an answer to your questions.
Any additions ? ...

Instalace AROS spolu s dalšími systémy
""""""""""""""""""""""""""""""""""""""

In the steps described before we had installed AROS as the *only* system on HD.
But can it be installed to multiboot with other systems on HDD? Yes. But 
again this task will be difficult. 

AROS a Windows

Let`s consider the situation when you have only Windows(tm) XP installed and 
want to put AROS to this HDD.
Systémy Windows NT mohou být instalovány na oba souborové systémy FAT a NTFS. 
Zatímco NTFS je systém bezpečnější a robustnější, GRUB jej nepodporuje (bohužel)

AROS a Linux (a ostatní OS, které používají zavaděč GRUB)

Lets consider the situation when you want to have 3 systems on your HDD -
Windows, Linux and AROS.  

Preparing the HDD
^^^^^^^^^^^^^^^^^
To be continued ...

AROS/i386-PPC-hosted
--------------------

Požadavky
"""""""""

To be written by someone.

AROS/m68k-backport aka AfA
--------------------------

This is not usual native/hosted flavour of AROS, but a thing that can be called
a *backport*. Actually, it`s a set of libraries and binaries to enhance 
the capabilities of original AmigaOS. AfA stands for AROS for Amigas. 

Požadavky
"""""""""

To be written by someone.

Instalace
"""""""""

Installation:

+ copy the directory AfA_OS_Libs to your sys: Amigadrive Bootpartition.
  If you dont like it here you can copy it elsewhere and assign AfA_OS: 
  to the directory where the AfA_OS_Libs are located
  copy Libs:freetype2.library in your sys:libs directory
+ copy C:AfA_OS_Loader to your sys:fonts directory
+ copy Fonts: to your sys:fonts directory. If you want to have more 
  fonts, use the Fonts from AROS or MOS
+ copy prefs: to your sys:prefs directory

To start it on boot time, insert AfA_OS_Loader in your S:startup-sequence, 
short before IPrefs. It must be inserted after patching tools like MCP 
or picasso96/cgx, because they patch the AfA_OS Functions back.

If you start it with the parameter MOUSESTART (must uppercase written), 
you must hold the left mousebutton during boot time to load the modules, 
instead of skipping them.

To see if all works well, start the "TextBench" program found in this archive.
TTF antialiased speed is currently not a text render winner, it is not optimized,
see aatext source code, but I hope it is fast enough to be usable even on a 
060/50MHz.


Footnotes
=========

.. [#] It *is* actually possible to install AROS/i386-pc onto a harddrive, but
       the procedure is far from being automated and user-friendly and the
       necessary tools are still being heavily developed and might be quite
       buggy. Therefore we officially do not recommend harddisk installation for
       unexperienced users at the moment so this note was written. 


.. _`download page`: ../../download

.. _rawrite: https://uranus.chrysocome.net/linux/rawwrite.htm

.. _`AROS Archives`: https://archives.arosworld.org
