====
Quit
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <protect>`_ `Next <reboot>`_ 

---------------

Name
~~~~
::


     Quit


Synopsis
~~~~~~~~
::


     RC/N


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Exits a script with the given return code. It's recommended that you
     use the standard return codes 5, 10 and 20.


Inputs
~~~~~~
::


     RC   --  the return code. Defaults to 0.


Notes
~~~~~
::

     If this command is called in a script that is executed from another
     script, the entire series of nested scripts will stop.


