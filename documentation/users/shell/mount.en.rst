=====
Mount
=====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <makelink>`_ `Next <newshell>`_ 

---------------

Name
~~~~
::


     Mount


Format
~~~~~~
::


     Mount <Device> <From>
             

Synopsis
~~~~~~~~
::


     DEVICE/M, FROM/K


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Loads and mounts a device


Inputs
~~~~~~
::


     DEVICE -- The device type to be mounted
     FROM   -- Search device in this mountlist


Result
~~~~~~
::


     Standard DOS error codes.
     

Example
~~~~~~~
::


     Mount DEVS:FAT0
     (Mounts a FAT device defined in the DEVS:FAT0 file)


