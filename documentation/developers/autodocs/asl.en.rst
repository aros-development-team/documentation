===
asl
===

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AbortAslRequest()`_                    `ActivateAslRequest()`_                 `AllocAslRequest()`_                    `AllocFileRequest()`_                   
`AslRequest()`_                         `FreeAslRequest()`_                     `FreeFileRequest()`_                    `RequestFile()`_                        

======================================= ======================================= ======================================= ======================================= 

-----------

AbortAslRequest()
=================

Synopsis
~~~~~~~~
::

 void AbortAslRequest(
          APTR requester );


----------

ActivateAslRequest()
====================

Synopsis
~~~~~~~~
::

 void ActivateAslRequest(
          APTR requester );


----------

AllocAslRequest()
=================

Synopsis
~~~~~~~~
::

 APTR AllocAslRequest(
          ULONG reqType,
          struct TagItem * tagList );
 
 APTR AllocAslRequestTags(
          ULONG reqType,
          TAG tag, ... );


----------

AllocFileRequest()
==================

Synopsis
~~~~~~~~
::

 struct FileRequester * AllocFileRequest();

Function
~~~~~~~~
::

     Obsolete. Use AllocAslRequest() instead.



See also
~~~~~~~~

`AllocAslRequest()`_ 

----------

AslRequest()
============

Synopsis
~~~~~~~~
::

 BOOL AslRequest(
          APTR requester,
          struct TagItem * tagList );
 
 BOOL AslRequestTags(
          APTR requester,
          TAG tag, ... );


----------

FreeAslRequest()
================

Synopsis
~~~~~~~~
::

 void FreeAslRequest(
          APTR requester );

Function
~~~~~~~~
::

     Frees a requester that was allocated with AllocAslRequest().


Inputs
~~~~~~
::

     requester - The requester that is to be freed.



----------

FreeFileRequest()
=================

Synopsis
~~~~~~~~
::

 void FreeFileRequest(
          struct FileRequester * fileReq );

Function
~~~~~~~~
::

     Obsolete. Use FreeAslRequest() instead.



See also
~~~~~~~~

`FreeAslRequest()`_ 

----------

RequestFile()
=============

Synopsis
~~~~~~~~
::

 BOOL RequestFile(
          struct FileRequester * fileReq );

Function
~~~~~~~~
::

     Obsolete. Use AslRequest() instead.



See also
~~~~~~~~

`AslRequest()`_ 

