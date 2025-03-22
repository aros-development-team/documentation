====
aros
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`ArosInquireA()`_                       
======================================= ======================================= ======================================= ======================================= 

-----------

ArosInquireA()
==============

Synopsis
~~~~~~~~
::

 ULONG ArosInquireA(
          struct TagItem * taglist );
 
 ULONG ArosInquire(
          TAG tag, ... );

Function
~~~~~~~~
::

     This function is used to query system characteristics not easily
     queried with another function. All queries understood by this call
     will have appropriate values assigned to the location the query tag's
     ti_Data field points to.


Inputs
~~~~~~
::

     tags - a tag list with appropriate queries. Each tag's ti_Data field
         should point to the location where the result of the query
         is to be stored. Do not forget to clear the location before, as
         queries not understood will be left untouched.


Tags
~~~~
::

     AI_KickstartBase APTR
     AI_KickstartSize ULONG
     AI_KickstartVersion UWORD
     AI_KickstartRevision UWORD
         Only support these tags if we are on the native machine. On other
         machines this call will not touch the storage space. Set the
         storage space to 0 beforehand if you want to see if this call
         touches it.

     AI_ArosVersion IPTR
         aros.library version masquerades as AROS version. This means
         that all AROS modules must have the same major version number.

     AI_ArosReleaseMajor IPTR
         Update this whenever a new AROS is released.

     AI_ArosReleaseMinor IPTR
         Update this whenever a new AROS is released.

     AI_ArosReleaseDate IPTR
         Update this whenever a new AROS is released.

     AI_ArosBuildDate IPTR
         Given in the format: <d>.<m>.<y>

     AI_ArosVariant IPTR
         Distribution name.

     AI_ArosArchitecture IPTR
         Return the target architecture.

     AI_ArosABIMajor IPTR
         Update this whenever a new ABI is introduced in AROS. Special
         value of -1 means that the ABI is under development and subject
         to change.


Result
~~~~~~
::

     index - the index of the first tag that could not be processed, plus
         one (e.g. 1 for taglist[0], 2 for taglist[1] etc.). Zero if all
         tags were handled.



See also
~~~~~~~~

`aros/arosbase.h </documentation/developers/headerfiles/aros/arosbase.h>`_ 

