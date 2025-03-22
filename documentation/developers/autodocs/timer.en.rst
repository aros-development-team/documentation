=====
timer
=====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddTime()`_                            `BeginIO()`_                            `CmpTime()`_                            `GetSysTime()`_                         
`GetUpTime()`_                          `ReadEClock()`_                         `SubTime()`_                            
======================================= ======================================= ======================================= ======================================= 

-----------

AddTime()
=========

Synopsis
~~~~~~~~
::

 void AddTime(
          struct timeval * dest,
          struct timeval * src );

Function
~~~~~~~~
::

     Add two timeval's together. The result will be the sum
     dest + src --> dest.

     The values of A0 and A1 will not be changed.


Inputs
~~~~~~
::

     dest    -   Destination timeval.
     src     -   Source timeval.


Result
~~~~~~
::

     dest will contain (src + dest).


Notes
~~~~~
::

     This function can be called from Interrupts.



See also
~~~~~~~~

`SubTime()`_ `CmpTime()`_ 

----------

BeginIO()
=========

Synopsis
~~~~~~~~
::

 void BeginIO(
          struct timerequest * timereq );

Function
~~~~~~~~
::

     BeginIO() will perform a timer.device command. It is normally
     called from within DoIO() and SendIO().

 INPUT
     timereq         - The request to process.


Result
~~~~~~
::

     The requested message will be processed.


Notes
~~~~~
::

     This function is safe to call from interrupts.



See also
~~~~~~~~

`exec.library/AbortIO() <./exec#abortio>`_ `exec.library/SendIO() <./exec#sendio>`_ `exec.library/DoIO() <./exec#doio>`_ 

----------

CmpTime()
=========

Synopsis
~~~~~~~~
::

 LONG CmpTime(
          struct timeval * dest,
          struct timeval * src );

Function
~~~~~~~~
::

     CmpTime() will compare two timeval's for magnitude, and return
     which is the larger.


Inputs
~~~~~~
::

     dest    -   Destination timeval
     src     -   Source timeval


Result
~~~~~~
::

     -1 if dest has more time than src (i.e. dest > src)
      0 if dest and src are the same (i.e. dest == src)
     +1 if dest has less time than src (i.e. dest < src)


Notes
~~~~~
::

     This function is safe to call from interrupts.


Bugs
~~~~
::

     The registers A0 and A1 may not be preserved.



See also
~~~~~~~~

`AddTime()`_ `SubTime()`_ 

----------

GetSysTime()
============

Synopsis
~~~~~~~~
::

 void GetSysTime(
          struct timeval * dest );

Function
~~~~~~~~
::

     GetSysTime() will fill in the supplied timeval with the current
     system time.


Inputs
~~~~~~
::

     dest    -   A pointer to the timeval you want the time stored in.


Result
~~~~~~
::

     The timeval "dest" will be filled with the current system time.


Notes
~~~~~
::

     This function is safe to call from interrupts.



See also
~~~~~~~~

`TR_GETSYSTIME`_ `TR_SETSYSTIME`_ 

----------

GetUpTime()
===========

Synopsis
~~~~~~~~
::

 void GetUpTime(
          struct timeval * dest );

Function
~~~~~~~~
::

     GetUpTime() will fill in the supplied timeval with the current
     uptime.


Inputs
~~~~~~
::

     dest    -   A pointer to the timeval you want the time stored in.


Result
~~~~~~
::

     The timeval "dest" will be filled with the current uptime. This timer
     cannot be changed by the software and thus can be considered to be a
     monotonic clock..


Notes
~~~~~
::

     This function is safe to call from interrupts.



See also
~~~~~~~~

`TR_GETSYSTIME`_ `TR_SETSYSTIME`_ `GetSysTime()`_ 

----------

ReadEClock()
============

Synopsis
~~~~~~~~
::

 ULONG ReadEClock(
          struct EClockVal * dest );

Function
~~~~~~~~
::

     ReadEClock() reads current value of E-Clock and stores
     it in the destination EClockVal structure passed as
     argument. It also returns the frequency of EClock of the
     system.

     This call is supposed to be very fast.

Inputs
~~~~~~
::

     dest    -   Destination EClockVal


Result
~~~~~~
::

     The EClock frequency (tics/s)


Notes
~~~~~
::

     This function is safe to call from interrupts.



----------

SubTime()
=========

Synopsis
~~~~~~~~
::

 void SubTime(
          struct timeval * dest,
          struct timeval * src );

Function
~~~~~~~~
::

     SubTime() will subtract the src timeval from the destination
     timeval, ie "dest - src --> dest".


Inputs
~~~~~~
::

     dest    -   Destination timeval
     src     -   Source timeval


Result
~~~~~~
::

     The timeval dest will contain the sum (dest - src).


Notes
~~~~~
::

     This function is safe to call from interrupts.


Bugs
~~~~
::

     May not preserve registers.



See also
~~~~~~~~

`AddTime()`_ `CmpTime()`_ 

