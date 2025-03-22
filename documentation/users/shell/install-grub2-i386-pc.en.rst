=====================
Install-grub2-i386-pc
=====================

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <install>`_ `Next <install-i386-pc>`_ 

---------------

Name
~~~~
::


     Install-grub2-i386-pc


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


     Installs the GRUB 2 bootloader to the boot block of the specified
     disk or partition.


Inputs
~~~~~~
::


     DEVICE --  Device name (e.g. ata.device)
     UNIT  --  Unit number
     PN  --  Specifies a partition number. If specified, GRUB is installed
         to this partition's boot block. Otherwise, GRUB is installed to
         the disk's boot block.
     GRUB -- Path to GRUB directory.
     FORCELBA --  Force use of LBA mode.


Example
~~~~~~~
::


     Install-grub2-i386-pc DEVICE ata.device UNIT 0 GRUB DH0:boot/grub


See also
~~~~~~~~

`Partition <partition>`_ SYS:System/Format   

