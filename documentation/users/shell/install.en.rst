=======
Install
=======
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <info>`_ `Next <iprefs>`_ 

---------------

Name
~~~~
::


     Install


Synopsis
~~~~~~~~
::


     DRIVE/A, NOBOOT/S, CHECK/S, FFS/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Saves a bootblock to a floppy disk. If the NOBOOT is appointed it
     will not be able to be boot on computer startup (Amiga only)


Inputs
~~~~~~
::


     DRIVE     --  Show information on file system devices
     NOBOOT    --  Should be set on PC Floppy drives
     CHECK     --  Verify the existing bootblock
     FFS       --  For FFS formatted Floppy disks


Example
~~~~~~~
::


     Install df0: NOBOOT FFS


Notes
~~~~~
::


     This is a pretty useless command for PC-Drives, since most systems
     require grub to be present on disk for AROS to boot.


See also
~~~~~~~~

`Install-i386-pc <install-i386-pc>`_ Sys:System/Format 

