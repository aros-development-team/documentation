===============
Install-i386-pc
===============

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <install-grub2-i386-pc>`_ `Next <iprefs>`_ 

---------------

Name
~~~~
::


     Install-i386-pc


Synopsis
~~~~~~~~
::


     DEVICE/A, UNIT/N/K/A, PARTITIONNUMBER=PN/K/N, GRUB/K/A, FORCELBA/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Installs the GRUB bootloader to the bootblock of the specified disk.


Inputs
~~~~~~
::


     DEVICE --  Device name (e.g. ata.device)
     UNIT  --  Unit number
     PN  --  Partition number (advice: the first AROS FFS partition)
     GRUB -- Path to GRUB directory.
     FORCELBA --  Force use of LBA mode.


Example
~~~~~~~
::


     install-i386-pc DEVICE ata.device UNIT 0 PN 1 grub dh0:boot/grub


See also
~~~~~~~~

`Partition <partition>`_ Sys:System/Format   

