====
Lock
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <load>`_ `Next <makedir>`_ 

---------------

Name
~~~~
::

     Lock


Format
~~~~~~
::

     Lock <drive> [ON|OFF] [<passkey>]


Synopsis
~~~~~~~~
::

     DRIVE/A,ON/S,OFF/S,PASSKEY


Location
~~~~~~~~
::

     C:


Function
~~~~~~~~
::

     Lock will cause the specified device or partition to be made write-
     protected or write-enabled. This write protection is a soft write
     protection which is handled by the volume filesystem. Hence the
     protection will be reset (to writable) on the next system reboot.

     It is possible to specify an optional passkey which can be used to
     password protect the locking. The same passkey that is used to lock
     the volume must be used to unlock the volume. The passkey may be
     any number of characters in length.

     The volume given MUST be the device or root volume name, not an
     assign.


Example
~~~~~~~
::

     
     1.SYS:> Lock Work:

         This will lock the volume called Work: without a passkey.

     1.SYS:> Lock Work:
     1.SYS:> MakeDir Work:SomeDir
     Can't create directory Work:Test
     MakeDir: Disk is write-protected

         The volume Work: is locked, so it is impossible to create a
         directory.

     1.SYS:> Lock Work: OFF

         This will unlock the volume work.

     1.SYS:> Lock Work: MyPassword

         This will lock Work: with the passkey "MyPassword"


