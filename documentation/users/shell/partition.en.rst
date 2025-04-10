=========
Partition
=========
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <newshell>`_ `Next <path>`_ 

---------------

Name
~~~~
::


     Partition


Synopsis
~~~~~~~~
::


     DEVICE, UNIT/N, SYSSIZE/K/N, SYSTYPE/K, SYSNAME/K, WORKSIZE/K/N,
     MAXWORK/S, WORKTYPE/K, WORKNAME/K, BOOTSIZE/K/N, BOOTTYPE/K,
     BOOTNAME/K, WIPE/S, FORCE/S, QUIET/S, SCHEME/k


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Partition creates either one or two AROS partitions on a given drive.
     Existing partitions will be kept unless the WIPE option is specified
     (or a serious bug occurs, for which we take no responsibility).
     Partitions created by this command must be formatted before they can
     be used.

     By default, a single SFS System partition is created using the
     largest amount of free space possible. A smaller size can be chosen
     using the SYSSIZE argument. To also create a Work partition, either
     WORKSIZE or MAXWORK must additionally be specified. The WORKSIZE
     argument allows the size of the Work partition to be specified,
     while setting the MAXWORK switch makes the Work partition as large
     as possible.

     The filesystems used by the System and Work partitions may be
     specified using the SYSTYPE and WORKTYPE arguments respectively.
     The available options are "SFS" (Smart Filesystem, the default), and
     "FFSIntl" (the traditional so-called Fast Filesystem).

     The DOS device names used for the System and Work partitions may be
     specified using the SYSNAME and WORKNAME arguments respectively.
     By default, these are DH0 and DH1.

     If you wish to use only AROS on the drive you run this command on,
     you can specify the WIPE option, which destroys all existing
     partitions on the drive. Be very careful with this option: it
     deletes all other operating systems and data on the drive, and could
     be disastrous if the wrong drive is accidentally partitioned.

     If the drive does not already contain an extended partition, one is
     created using the largest available region of free space. The AROS
     partitions are then created as a logical partition within. This is
     in order to make the addition of further partitions easier.


Inputs
~~~~~~
::


     DEVICE -- Device driver name (ata.device by default)
     UNIT -- The drive's unit number (0 by default, which is the primary
         master when using ata.device)
     SYSSIZE -- The System (boot) partition size in megabytes.
     SYSTYPE -- The file system to use for the system partition, either
         "SFS" (the default) or "FFSIntl".
     SYSNAME -- The name to use for the system partition (defaults to DH0).
     WORKSIZE -- The Work (secondary) partition size in megabytes. To use
         this option, SYSSIZE must also be specified.
     MAXWORK -- Make the Work partition as large as possible. To use this
         option, SYSSIZE must also be specified.
     WORKTYPE -- The file system to use for the work partition, either
         "SFS" (the default) or "FFSIntl".
     WORKNAME -- The name to use for the work partition (defaults to DH1).
     WIPE -- Destroy all other partitions on the drive, including those
         used by other operating systems (CAUTION!).
     FORCE -- Do not ask for confirmation before partitioning the drive.
     QUIET -- Do not print any output. This option can only be used when
         FORCE is also specified.
     SCHEME -- Specify the partition scheme to use 
                          mbr - (default)
                          gpt - 
                          rdb - Create only RDB partitions, no MBR or EBR
                                partitions will be created.


Result
~~~~~~
::


     Standard DOS error codes.


Example
~~~~~~~
::


     Partition ata.device 1 SYSSIZE 200 MAXWORK


Notes
~~~~~
::


     Using HDToolBox instead of this command may sometimes be safer, as
     it shows where partitions will be created on the drive before
     changes are written to disk. However, HDToolBox can be unreliable.


See also
~~~~~~~~

  Sys:System/Format `SFSFormat <sfsformat>`_ 

