========
SetClock
========
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <set>`_ `Next <setdate>`_ 

---------------

Name
~~~~
::

     SetClock


Format
~~~~~~
::

     SetClock {LOAD|SAVE|RESET}


Synopsis
~~~~~~~~
::

     LOAD/S,SAVE/S,RESET/S


Location
~~~~~~~~
::

     C:


Function
~~~~~~~~
::

     SetClock can be used to:
         o Load the time from the battery backed-up clock,
         o Save the time to the battery backed-up clock,
         o Reset the battery backed up clock.


Example
~~~~~~~
::


     SetClock LOAD

         will set the system time from the battery backed-up clock.
         In most systems this will be done automatically during
         system startup.

     SetClock SAVE

         will set the time of the battery backed-up clock from the
         current system clock time.

     SetClock RESET

         will reset the battery backed-up to a value of the
         1st January 1978 00:00:00. This is mostly used if the
         battery backed-up clock has an error and will not
         respond to normal load and save commands.


See also
~~~~~~~~

`Date <date>`_ Sys:Prefs/Time 

