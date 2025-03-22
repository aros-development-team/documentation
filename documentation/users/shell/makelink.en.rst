========
MakeLink
========
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <makedir>`_ `Next <mount>`_ 

---------------

Name
~~~~
::


     MakeLink


Synopsis
~~~~~~~~
::


     FROM/A, TO/A, HARD/S, FORCE/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Create a link to a file.


Inputs
~~~~~~
::


     FROM   --  The name of the link
     TO     --  The name of the file or directory to link to
     HARD   --  If specified, the link will be a hard link; default is
                to create a soft link
     FORCE  --  Allow a hard-link to point to a directory


Result
~~~~~~
::


     Standard DOS error codes.


Example
~~~~~~~
::


     Makelink ls C:List
      Creates an 'ls' file with a soft link to the 'List' command in C:.


Notes
~~~~~
::


     Not all file systems support links.


