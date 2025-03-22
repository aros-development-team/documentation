====
Type
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <touch>`_ `Next <unalias>`_ 

---------------

Name
~~~~
::


     Type {<file | pattern>} [TO <name>] [OPT H | N] [HEX | NUMBER]


Synopsis
~~~~~~~~
::


     FROM/A/M,TO/K,OPT/K,HEX/S,NUMBER/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Displays content of a file
     

Inputs
~~~~~~
::


     FROM   -- one or more files to display
     TO     -- print output to file
     OPT    -- H or N (see HEX or NUMBER)
     HEX    -- displays output in hexadecimal format
     NUMBER -- the lines are numbered
               HEX and NUMBER are mutually exclusive


Example
~~~~~~~
::


     Type abc.txt
     Type xyz.dat HEX


