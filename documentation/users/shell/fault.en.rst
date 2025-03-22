=====
Fault
=====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <failat>`_ `Next <filenote>`_ 

---------------

Name
~~~~
::

     Fault


Format
~~~~~~
::

     Fault <error number>


Synopsis
~~~~~~~~
::

     NUMBERS/N/M


Location
~~~~~~~~
::

     C:


Function
~~~~~~~~
::

     Fault prints the message corresponding with the error number
     supplied. Any number of error numbers can be given at once,
     but they must be separated by spaces.


Example
~~~~~~~
::


     1.SYS:> Fault 205
     Fault 205: object not found

         This tells you that the error code 205 means that a disk
         object could not be found.


