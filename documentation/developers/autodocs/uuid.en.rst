====
uuid
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`UUID_Clear()`_                         `UUID_Compare()`_                       `UUID_Copy()`_                          `UUID_Generate()`_                      

======================================= ======================================= ======================================= ======================================= 

-----------

UUID_Clear()
============

Synopsis
~~~~~~~~
::

 void UUID_Clear(
          uuid_t * uuid );

Function
~~~~~~~~
::

     Clears the specified uuid.


Inputs
~~~~~~
::

     uuid - UUID to be cleared.


Result
~~~~~~
::

     This function always succeeds.



----------

UUID_Compare()
==============

Synopsis
~~~~~~~~
::

 int UUID_Compare(
          const uuid_t * u1,
          const uuid_t * u2 );

Function
~~~~~~~~
::

     Compares between two UUIDs.


Inputs
~~~~~~
::

     u1, u2 - UUIDs to be compared.


Result
~~~~~~
::

     <0 - if the u1 is lexically BEFORE u2
     =0 - if u1 equals u2
     >0 - if the u1 is lexically AFTER u2



----------

UUID_Copy()
===========

Synopsis
~~~~~~~~
::

 void UUID_Copy(
          const uuid_t * src,
          uuid_t * dst );

Function
~~~~~~~~
::

     Copies the UUID's.


Inputs
~~~~~~
::

     src - the source UUID.
     dst - the desitation UUID.


Result
~~~~~~
::

     This function always succeeds.



----------

UUID_Generate()
===============

Synopsis
~~~~~~~~
::

 void UUID_Generate(
          uuid_type_t type,
          uuid_t * uuid );

Function
~~~~~~~~
::

     Generate Universally Unique Identifier conforming the RFC 4122.


Inputs
~~~~~~
::

     type - type of the identifier:
            UUID_TYPE_DCE_RANDOM - random identifier. Do not use it on purpose
                                   due to the weak source of noise on AROS.
            UUID_TYPE_DCE_TIME - system time based identifier.
                                      
     uuid - storage for generated UUID.


Result
~~~~~~
::

     This function always succeeds.



