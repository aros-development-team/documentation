====
hpet
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AllocCSUnit()`_                        `FreeCSUnit()`_                         `GetCSAttrsA()`_                        `GetCSUnitAttrsA()`_                    

======================================= ======================================= ======================================= ======================================= 

-----------

AllocCSUnit()
=============

Synopsis
~~~~~~~~
::

 IPTR AllocCSUnit(
          const struct Node * owner );

Function
~~~~~~~~
::

     Allocate a free HPET timer for use.


Inputs
~~~~~~
::

     owner - a Node specifying the consumer of the clock source. Can not be NULL.


Result
~~~~~~
::

     An opaque handle for the HPET timer unit allocated for exclusive use, or -1 if
     there was no free HPET.



----------

FreeCSUnit()
============

Synopsis
~~~~~~~~
::

 void FreeCSUnit(
          IPTR unit );

Function
~~~~~~~~
::

     Free the specified HPET unit.


Inputs
~~~~~~
::

     unit - a number of previously allocated HPET unit.


Result
~~~~~~
::

     None.



----------

GetCSAttrsA()
=============

Synopsis
~~~~~~~~
::

 BOOL GetCSAttrsA(
          const struct TagItem * tags );
 
 BOOL GetCSAttrs(
          TAG tag, ... );

Function
~~~~~~~~
::

     Query attributes of HPET ClockSource resource.


Inputs
~~~~~~
::

     None



----------

GetCSUnitAttrsA()
=================

Synopsis
~~~~~~~~
::

 BOOL GetCSUnitAttrsA(
          IPTR unit,
          const struct TagItem * tags );
 
 BOOL GetCSUnitAttrs(
          IPTR unit,
          TAG tag, ... );

Function
~~~~~~~~
::

     Query attributes of HPET unit.


Inputs
~~~~~~
::

     unit - a number of previously allocated HPET unit.


Result
~~~~~~
::

     TRUE in case of success or FALSE if the given unit number is out of range.



