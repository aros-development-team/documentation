====
Wait
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <version>`_ `Next <waitforport>`_ 

---------------

Name
~~~~
::


     Wait [(n)] [SEC | SECS | MIN | MINS] [ UNTIL (time) ]


Synopsis
~~~~~~~~
::


     TIME/N,SEC=SECS/S,MIN=MINS/S,UNTIL/K


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Wait a certain amount of time or until a specified time. Using
     Wait without any arguments waits for one second.


Inputs
~~~~~~
::


     TIME      --  the number of time units to wait (default is seconds)
     SEC=SECS  --  set the time unit to seconds
     MIN=MINS  --  set the time unit to minutes
     UNTIL     --  wait until the specified time is reached. The time
                   is given in the format HH:MM.


