======
Rename
======
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <relabel>`_ `Next <requestchoice>`_ 

---------------

Name
~~~~
::


     Rename


Synopsis
~~~~~~~~
::


     Rename [{FROM}] <name> [TO|AS] <name> [QUIET]

     FROM/A/M,TO=AS/A,QUIET/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Renames a directory or file. Rename can also act like the UNIX mv
     command, which moves a file or files to another location on disk.


Inputs
~~~~~~
::


     FROM   --  The name(s) of the file(s) to rename or move. There may
                be many files specified, this is used when moving files
                into a new directory.

     TO|AS  --  The name which we wish to call the file.

     QUIET  --  Suppress any output from the command.


Result
~~~~~~
::


     Standard DOS error codes.


Example
~~~~~~~
::


     Rename letter1.doc letter2.doc letters

         Moves letter1.doc and letter2.doc to the directory letters.

     Rename ram:a ram:b quiet
     Rename from ram:a to ram:b quiet
     Rename from=ram:a to=ram:b quiet

         All versions, renames file "a" to "b" and does not output any
         diagnostic information.


