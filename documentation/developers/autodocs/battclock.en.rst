=========
battclock
=========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`ReadBattClock()`_                      `ResetBattClock()`_                     `WriteBattClock()`_                     
======================================= ======================================= ======================================= ======================================= 

-----------

ReadBattClock()
===============

Synopsis
~~~~~~~~
::

 ULONG ReadBattClock();

Function
~~~~~~~~
::

     Return the value stored in the battery back up clock. This value
     is the number of seconds that have elapsed since midnight on the
     1st of January 1978 (00:00:00 1.1.1978).

     If the value of the battery clock is invalid, then the clock will
     be reset.


Result
~~~~~~
::

     The number of seconds since 1.1.1978 00:00:00



See also
~~~~~~~~

`WriteBattClock()`_ `ResetBattClock()`_ 

----------

ResetBattClock()
================

Synopsis
~~~~~~~~
::

 void ResetBattClock();

Function
~~~~~~~~
::

     Reset the system battery-backed-up clock. This will reset the clock
     back to 0 seconds (or midnight, 1st Jan 1978).


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     The clock will be reset.


Notes
~~~~~
::

     This function may do nothing when the battery backed up clock either
     doesn't exist, or may not be writable by the operating system.



See also
~~~~~~~~

`ReadBattClock()`_ `WriteBattClock()`_ 

----------

WriteBattClock()
================

Synopsis
~~~~~~~~
::

 void WriteBattClock(
          ULONG time );

Function
~~~~~~~~
::

     Set the system's battery backed up clock to the time specified. The
     value should be the number of seconds since 00:00:00 on 1.1.1978.


Inputs
~~~~~~
::

     time - The number of seconds elapsed since 00:00:00 1.1.1978


Result
~~~~~~
::

     The clock will be set.


Notes
~~~~~
::

     This may not do anything on some systems where the battery backed
     up clock either doesn't exist, or may not be writable.



See also
~~~~~~~~

`ReadBattClock()`_ `ResetBattClock()`_ 

