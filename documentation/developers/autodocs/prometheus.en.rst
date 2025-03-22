==========
prometheus
==========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`Prm_AddIntServer()`_                   `Prm_AllocDMABuffer()`_                 `Prm_FindBoardTagList()`_               `Prm_FreeDMABuffer()`_                  
`Prm_GetBoardAttrsTagList()`_           `Prm_GetPhysicalAddr()`_                `Prm_ReadConfigByte()`_                 `Prm_ReadConfigLong()`_                 
`Prm_ReadConfigWord()`_                 `Prm_RemIntServer()`_                   `Prm_SetBoardAttrsTagList()`_           `Prm_WriteConfigByte()`_                
`Prm_WriteConfigLong()`_                `Prm_WriteConfigWord()`_                
======================================= ======================================= ======================================= ======================================= 

-----------

Prm_AddIntServer()
==================

Synopsis
~~~~~~~~
::

 BOOL Prm_AddIntServer(
          PCIBoard * board,
          struct Interrupt * interrupt );


----------

Prm_AllocDMABuffer()
====================

Synopsis
~~~~~~~~
::

 APTR Prm_AllocDMABuffer(
          ULONG size );

Function
~~~~~~~~
::

     Allocate memory region accessible by PCI DMA.


Inputs
~~~~~~
::

     size - Size of the region to allocate. NULL is safe
            input, in this case the function fails.


Result
~~~~~~
::

     A pointer to allocated region or NULL upon failure.
     The region will always be LONG-aligned.



----------

Prm_FindBoardTagList()
======================

Synopsis
~~~~~~~~
::

 PCIBoard * Prm_FindBoardTagList(
          PCIBoard * previous,
          struct TagItem * tag_list );
 
 PCIBoard * Prm_FindBoardTags(
          PCIBoard * previous,
          TAG tag, ... );

Function
~~~~~~~~
::

     Find the board whose properties match the given set
     of attributes.


Inputs
~~~~~~
::

     previous - an opaque pointer to previously found board,
                or NULL to start the search from the beginning
     tag_list - a pointer to a taglist specifying attributes to
                match against. If NULL, then all boards will be
                considered matching.


Result
~~~~~~
::

     A pointer to next matching board object or NULL if the search
     has ended and there is no more match.
 

Notes
~~~~~
::

     You can search for boards with some specific owner using
     PRM_BoardOwner tag. However note that in AROS prometheus.library
     is a wrapper on top of native object-oriented framework. This
     framework uses different concept of device ownership, and
     prometheus.library cannot determine correct owner value for devices
     locked using those APIs. Those devices are treated as having the
     same owner named "AROS", however in reality their owners will be
     different.



----------

Prm_FreeDMABuffer()
===================

Synopsis
~~~~~~~~
::

 VOID Prm_FreeDMABuffer(
          APTR buffer,
          ULONG size );

Function
~~~~~~~~
::

     Free memory buffer allocated by Prm_AllocDMABuffer().


Inputs
~~~~~~
::

     buffer - a pointer to a buffer to free. NULL is a safe value,
              in this case the function does nothing.
     size   - size of the buffer. Zero is a safe value, in this case
              the function does nothing.


Result
~~~~~~
::

     None.



----------

Prm_GetBoardAttrsTagList()
==========================

Synopsis
~~~~~~~~
::

 ULONG Prm_GetBoardAttrsTagList(
          PCIBoard * board,
          struct TagItem * tag_list );
 
 ULONG Prm_GetBoardAttrsTags(
          PCIBoard * board,
          TAG tag, ... );

Function
~~~~~~~~
::

     Returns information about the board according to the
     specified taglist.


Inputs
~~~~~~
::

     board    - an opaque pointer to board object to query
     tag_list - a list of attributes to query. ti_Data for
                every tag should be a pointer to IPTR storage
                where the data will be written. For unrecognized
                tags a value of 0 will be returned. Tags with
                ti_Data set to NULL will be skipped.


Result
~~~~~~
::

     Number of successfully processed tags.


Notes
~~~~~
::

     AROS implementation of prometheus.library is a wrapper on top of
     object-oriented driver stack. Software can use either
     prometheus.library, or some other wrapper API (like openpci.library)
     or HIDD object-oriented API directly. Concept of device ownership
     is different across different APIs, so this method returns correct
     device owner only if the device was locked using prometheus.library's
     Prm_SetBoardAttrsTagList() function. If device's owner uses another
     API, prometheus.library will specify "AROS" default name.



----------

Prm_GetPhysicalAddr()
=====================

Synopsis
~~~~~~~~
::

 APTR Prm_GetPhysicalAddr(
          APTR address );


----------

Prm_ReadConfigByte()
====================

Synopsis
~~~~~~~~
::

 UBYTE Prm_ReadConfigByte(
          PCIBoard * board,
          UBYTE offset );


----------

Prm_ReadConfigLong()
====================

Synopsis
~~~~~~~~
::

 ULONG Prm_ReadConfigLong(
          PCIBoard * board,
          UBYTE offset );


----------

Prm_ReadConfigWord()
====================

Synopsis
~~~~~~~~
::

 UWORD Prm_ReadConfigWord(
          PCIBoard * board,
          UBYTE offset );


----------

Prm_RemIntServer()
==================

Synopsis
~~~~~~~~
::

 VOID Prm_RemIntServer(
          PCIBoard * board,
          struct Interrupt * interrupt );


----------

Prm_SetBoardAttrsTagList()
==========================

Synopsis
~~~~~~~~
::

 ULONG Prm_SetBoardAttrsTagList(
          PCIBoard * board,
          struct TagItem * tag_list );
 
 ULONG Prm_SetBoardAttrsTags(
          PCIBoard * board,
          TAG tag, ... );


----------

Prm_WriteConfigByte()
=====================

Synopsis
~~~~~~~~
::

 VOID Prm_WriteConfigByte(
          PCIBoard * board,
          UBYTE data,
          UBYTE offset );


----------

Prm_WriteConfigLong()
=====================

Synopsis
~~~~~~~~
::

 VOID Prm_WriteConfigLong(
          PCIBoard * board,
          ULONG data,
          UBYTE offset );


----------

Prm_WriteConfigWord()
=====================

Synopsis
~~~~~~~~
::

 VOID Prm_WriteConfigWord(
          PCIBoard * board,
          UWORD data,
          UBYTE offset );


