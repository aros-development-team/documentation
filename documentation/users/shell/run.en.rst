===
Run
===
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <reslist>`_ `Next <search>`_ 

---------------

Name
~~~~
::


     Run


Synopsis
~~~~~~~~
::


     QUIET/S,COMMAND/F


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Run a program, that is start a program as a background process.
     That means it doesn't take over the parent shell.


Inputs
~~~~~~
::


     QUIET    --  avoids printing of the background CLI's number

     COMMAND  --  the program to run together with its arguments


Notes
~~~~~
::


     To make it possible to close the current shell, redirect the output
     using

          Run >NIL: program arguments


