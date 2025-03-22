====
Skip
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <shutdown>`_ `Next <sort>`_ 

---------------

Name
~~~~
::


     Skip


Synopsis
~~~~~~~~
::


     LABEL, BACK/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Jump to a new position in a script. If a label is specified, control
     goes to the first Lab command found that has the same label. If no
     label is specified, control goes to the first EndSkip command found.

     If the BACK switch is given, the search for a matching Lab or
     EndSkip command starts at the beginning of the script; otherwise the
     search starts at the Skip command. If a matching Lab/EndSkip is not
     found, an error is returned.


Inputs
~~~~~~
::


     LABEL  --  The label to skip to.

     BACK   --  Specify this if the label appears before the Skip statement
                in the script file.


Notes
~~~~~
::

     This command can only be used in scripts.


See also
~~~~~~~~

`Lab <lab>`_ `EndSkip <endskip>`_ 

