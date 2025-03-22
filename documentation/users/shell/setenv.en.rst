======
Setenv
======
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <setdefaultfont>`_ `Next <setkeyboard>`_ 

---------------

Name
~~~~
::


     Setenv


Synopsis
~~~~~~~~
::


     NAME,SAVE/S,STRING/F


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Sets a global variable from the current shell. These variables can
     be accessed from any program executing at any time.

     These variables are usually not saved in the ENVARC: directory, hence they
     can only be used by programs during the current execution of the
     operating system. When using SAVE argument, the variable is also saved
     in ENVARC:

     If no parameters are specified, the current list of global variables
     are displayed.


Inputs
~~~~~~
::


     NAME    - The name of the global variable to set.

     SAVE    - Save the variable also in ENVARC:

     STRING  - The value of the global variable NAME.


Result
~~~~~~
::


     Standard DOS error codes.


Example
~~~~~~~
::


     Setenv EDITOR Ed

         Any program that accesses the variable "EDITOR" will be able to
         find out the name of the text-editor the user would like to use,
         by examining the contents of the variable.


See also
~~~~~~~~

`Getenv <getenv>`_ `Unsetenv <unsetenv>`_ 

