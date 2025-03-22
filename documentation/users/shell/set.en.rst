===
Set
===
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <search>`_ `Next <setclock>`_ 

---------------

Name
~~~~
::


     Set


Synopsis
~~~~~~~~
::


     NAME,STRING/F


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Set a local environment variable in the current shell. If any global
     variables have the same name the local variable will be used instead.

     This instance the variable is only accessible from within the shell
     it was defined.

     If no parameters are specified, the current list of local variables
     are displayed.


Inputs
~~~~~~
::


     NAME    - The name of the local variable to set.

     STRING  - The value of the local variable NAME.


Result
~~~~~~
::


     Standard DOS error codes.


Example
~~~~~~~
::


     Set Jump 5

         Sets a local variable called "Jump" to the value of "5".


See also
~~~~~~~~

`Get <get>`_ `Unset <unset>`_ 

