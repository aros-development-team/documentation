====
misc
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AllocMiscResource()`_                  `FreeMiscResource()`_                   
======================================= ======================================= ======================================= ======================================= 

-----------

AllocMiscResource()
===================

Synopsis
~~~~~~~~
::

 char * AllocMiscResource(
          ULONG unitNum,
          char * name );

Function
~~~~~~~~
::


 Allocates one of the miscellaneous resources.


Inputs
~~~~~~
::


 unitNum  --  The resource to allocate
 name     --  An identifying name for you, must NOT be NULL.


Result
~~~~~~
::


 NULL if the allocation was successful. If the resource couln't be
 allocated, the name of the holder of the resource is returned.



See also
~~~~~~~~

`FreeMiscResource()`_ 

----------

FreeMiscResource()
==================

Synopsis
~~~~~~~~
::

 VOID FreeMiscResource();

Function
~~~~~~~~
::


 Frees one of the miscellaneous resources.


Inputs
~~~~~~
::


 unitNum  --  The resource to free.


Notes
~~~~~
::


 You must have allocated the resource to free it!



See also
~~~~~~~~

`AllocMiscResource()`_ 

