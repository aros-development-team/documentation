====
Pipe
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <pathpart>`_ `Next <play>`_ 

---------------

Name
~~~~
::


     Pipe <command>


Synopsis
~~~~~~~~
::


     COMMAND/F


Location
~~~~~~~~
::


    C:


Function
~~~~~~~~
::


     Uses the _pchar and _mchar environment variables to split
     the COMMAND into fragments.

     Where _pchar is seen, the commands on either side are connected
     with a PIPE: from the left side's Output() to the right side's Input().

     Where _mchar is seen, the commands are executed in sequence, with
     no PIPE: between them, and Input() and Output() comes from the
     terminal.


Inputs
~~~~~~
::


     COMMAND -- the command to execute


Example
~~~~~~~
::


     > set _pchar "|"
     > set _mchar ";"
     > echo Hello ; echo World
     Hello
     World
     > Type S:Startup-Sequence | Sort
     

Notes
~~~~~
::


     The "_pchar" and "_mchar" environment variables are used to determine
     where to split the command, and what action to perform.


Bugs
~~~~
::


     Note that _pchar and _mchar are limited to 2 characters - any
     additional characters will be silently ignored.


