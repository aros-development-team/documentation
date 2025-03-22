====
icon
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddFreeList()`_                        `BumpRevision()`_                       `ChangeToSelectedIconColor()`_          `DeleteDiskObject()`_                   
`DrawIconStateA()`_                     `DupDiskObjectA()`_                     `FindToolType()`_                       `FreeDiskObject()`_                     
`FreeFreeList()`_                       `GetDefDiskObject()`_                   `GetDiskObject()`_                      `GetDiskObjectNew()`_                   
`GetIconRectangleA()`_                  `GetIconTagList()`_                     `IconControlA()`_                       `LayoutIconA()`_                        
`MatchToolValue()`_                     `NewDiskObject()`_                      `PutDefDiskObject()`_                   `PutDiskObject()`_                      
`PutIconTagList()`_                     
======================================= ======================================= ======================================= ======================================= 

-----------

AddFreeList()
=============

Synopsis
~~~~~~~~
::

 BOOL AddFreeList(
          struct FreeList * freelist,
          APTR mem,
          IPTR size );

Function
~~~~~~~~
::

     Adds supplied memory chunk to the supplied freelist. The memory chunk
     must have been allocated by AllocMem(). All memory added into the
     freelist can later be deallocated through a single FreeFreeList() call.


Inputs
~~~~~~
::

     freelist - pointer to freelist struct previously allocated by
         the programmer.
     mem - memory to add to the freelist.
     size - size of memory chunk to add to the freelist.


Result
~~~~~~
::

     FALSE on failure, else TRUE.



See also
~~~~~~~~

`FreeFreeList()`_ 

----------

BumpRevision()
==============

Synopsis
~~~~~~~~
::

 UBYTE * BumpRevision(
          UBYTE * newname,
          UBYTE * oldname );

Function
~~~~~~~~
::

     Computes the right copy revision for a file name.


Inputs
~~~~~~
::

     newname  -  a buffer for the new string. Should be at least 31 bytes.
     oldname  -  the old name to be revisioned.


Result
~~~~~~
::

     pointer to the supplied buffer.o



----------

ChangeToSelectedIconColor()
===========================

Synopsis
~~~~~~~~
::

 VOID ChangeToSelectedIconColor(
          struct ColorRegister * cr );

Function
~~~~~~~~
::

     Change a color register for selected icon state.
     

Inputs
~~~~~~
::

     cr - colorregister to be changed.



----------

DeleteDiskObject()
==================

Synopsis
~~~~~~~~
::

 BOOL DeleteDiskObject(
          UBYTE * name );

Function
~~~~~~~~
::

     Deletes an icon description file.


Inputs
~~~~~~
::

     name  -  name of the icon file without the ".info".



----------

DrawIconStateA()
================

Synopsis
~~~~~~~~
::

 void DrawIconStateA(
          struct RastPort * rp,
          struct DiskObject * icon,
          STRPTR label,
          LONG leftEdge,
          LONG topEdge,
          ULONG state,
          struct TagItem * tags );
 
 void DrawIconState(
          struct RastPort * rp,
          struct DiskObject * icon,
          STRPTR label,
          LONG leftEdge,
          LONG topEdge,
          ULONG state,
          TAG tag, ... );

Function
~~~~~~~~
::

     Draw an icon like an image.
     

Inputs
~~~~~~
::

     rp       - rastport to draw into
     icon     - the icon
     label    - label string
     leftEdge,
     topEdge  - drawing position
     state    - drawing state, see intuition/imageclass.h
 

Notes
~~~~~
::

     Only very limited implemented.



See also
~~~~~~~~

`intuition/imageclass.h </documentation/developers/headerfiles/intuition/imageclass.h>`_ 

----------

DupDiskObjectA()
================

Synopsis
~~~~~~~~
::

 struct DiskObject * DupDiskObjectA(
          struct DiskObject * icon,
          struct TagItem * tags );
 
 struct DiskObject * DupDiskObject(
          struct DiskObject * icon,
          TAG tag, ... );


----------

FindToolType()
==============

Synopsis
~~~~~~~~
::

 UBYTE * FindToolType(
          CONST STRPTR * toolTypeArray,
          CONST STRPTR typeName );

Function
~~~~~~~~
::

     Finds the supplied typeName inside the given toolTypeArray.
     Search is case-insensitive.


Inputs
~~~~~~
::

     toolTypeArray  -  pointer to an array of tooltype strings.
     typeName      -  name of a specific tool-type.


Result
~~~~~~
::

     NULL if the tooltype wasn't found and a pointer to the value
     of the tooltype otherwise.



See also
~~~~~~~~

`MatchToolValue()`_ 

----------

FreeDiskObject()
================

Synopsis
~~~~~~~~
::

 void FreeDiskObject(
          struct DiskObject * diskobj );

Function
~~~~~~~~
::

     Frees all memory for a DiskObject structure.
     

Inputs
~~~~~~
::

     diskobj --  a pointer to a DiskObject structure. A NULL pointer will be
                 ignored.
     


See also
~~~~~~~~

`GetDiskObject()`_   

----------

FreeFreeList()
==============

Synopsis
~~~~~~~~
::

 void FreeFreeList(
          struct FreeList * freelist );

Function
~~~~~~~~
::

     Frees all memory chunks in the freelist (previously inserted into
     it via AddFreeList()).


Inputs
~~~~~~
::

     freelist  - pointer to FreeList struct. It is safe to use NULL.



See also
~~~~~~~~

`AddFreeList()`_ 

----------

GetDefDiskObject()
==================

Synopsis
~~~~~~~~
::

 struct DiskObject * GetDefDiskObject(
          LONG type );

Function
~~~~~~~~
::

     Gets the default icon for the supplied type of icon.


Inputs
~~~~~~
::

     type  -  type of icon to get default diskobject for.



Result
~~~~~~
::

     DiskObject structure or NULL if an error occured. The error may
     be obtained by IoErr().



See also
~~~~~~~~

`PutDefDiskObject()`_ `GetDiskObjectNew()`_ 

----------

GetDiskObject()
===============

Synopsis
~~~~~~~~
::

 struct DiskObject * GetDiskObject(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Opens an icon from disk.
     

Inputs
~~~~~~
::

     name - filename without ".info" or NULL for an empty diskobject.


Result
~~~~~~
::

     Pointer to diskobject.



----------

GetDiskObjectNew()
==================

Synopsis
~~~~~~~~
::

 struct DiskObject * GetDiskObjectNew(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Tries to open the supplied info file via GetDiskObject(). If this
     does not succeed it will try to read the default info file for
     that type of file.


Inputs
~~~~~~
::

     name - name of the file to read an icon for.


Result
~~~~~~
::

     DiskObject - pointer to diskobject struct.



See also
~~~~~~~~

`GetDiskObject()`_ `GetDefDiskObject()`_ 

----------

GetIconRectangleA()
===================

Synopsis
~~~~~~~~
::

 BOOL GetIconRectangleA(
          struct RastPort * rp,
          struct DiskObject * icon,
          STRPTR label,
          struct Rectangle * rectangle,
          struct TagItem * tags );
 
 BOOL GetIconRectangle(
          struct RastPort * rp,
          struct DiskObject * icon,
          STRPTR label,
          struct Rectangle * rectangle,
          TAG tag, ... );

Function
~~~~~~~~
::

     Query size of icon.
     

Inputs
~~~~~~
::

     rp        - reference RastPort (for font)
     icon      - icon to be queried
     label     - label string
     rectangle - resulting size


Result
~~~~~~
::

     TRUE success


Notes
~~~~~
::

     Only very limited implemented.



----------

GetIconTagList()
================

Synopsis
~~~~~~~~
::

 struct DiskObject * GetIconTagList(
          CONST_STRPTR name,
          const struct TagItem * tags );
 
 struct DiskObject * GetIconTags(
          CONST_STRPTR name,
          TAG tag, ... );

Function
~~~~~~~~
::

     Opens an icon from disk.


Inputs
~~~~~~
::

     name - object path (without .info extension). May be NULL when
         retrieving a default icon.
     tags - tag list containing tags described below.


Tags
~~~~
::

     ICONA_ErrorCode (LONG *)
     ICONGETA_GetDefaultType (LONG) - Default icon type to get. This
             overrides the "name" parameter.
     ICONGETA_GetDefaultName (STRPTR) - Name of default icon to get. This
             overrides the "name" parameter.
     ICONGETA_FailIfUnavailable (BOOL) - Find a default icon if there is no
             specific icon.
     ICONGETA_GetPaletteMappedIcon (BOOL)
     ICONGETA_IsDefaultIcon (LONG *) - Upon completion of this function, the
         referenced LONG will be set to a boolean value indicating whether
         the returned icon is a default icon.
     ICONGETA_RemapIcon (BOOL)
     ICONGETA_GenerateImageMasks (BOOL)
     ICONGETA_Label (STRPTR)
     ICONGETA_Screen (struct Screen *)



----------

IconControlA()
==============

Synopsis
~~~~~~~~
::

 ULONG IconControlA(
          struct DiskObject * icon,
          struct TagItem * tags );
 
 ULONG IconControl(
          struct DiskObject * icon,
          TAG tag, ... );

Function
~~~~~~~~
::

     Set and get icon and icon.library options.
     

Inputs
~~~~~~
::

     icon - icon to be queried


Result
~~~~~~
::

     Number of processed tags.



----------

LayoutIconA()
=============

Synopsis
~~~~~~~~
::

 BOOL LayoutIconA(
          struct DiskObject * icon,
          struct Screen * screen,
          struct TagItem * tags );
 
 BOOL LayoutIcon(
          struct DiskObject * icon,
          struct Screen * screen,
          TAG tag, ... );

Function
~~~~~~~~
::

     Adapt a palette-mapped icon for display.
     

Notes
~~~~~
::

     Not implemented.



----------

MatchToolValue()
================

Synopsis
~~~~~~~~
::

 BOOL MatchToolValue(
          UBYTE * typeString,
          UBYTE * value );

Function
~~~~~~~~
::

     Checks if the given tooltype has the supplied value.
     Search is case-insensitive.


Inputs
~~~~~~
::

     typeString - string containing the tooltype.
     value - the value to match for.


Result
~~~~~~
::

     TRUE if match, else FALSE.



----------

NewDiskObject()
===============

Synopsis
~~~~~~~~
::

 struct DiskObject * NewDiskObject(
          ULONG type );

Function
~~~~~~~~
::

     Creates an empty DiskObject structure.


Inputs
~~~~~~
::

     type - WBDISK, WBDRAWER, WBTOOL, WBPROJECT,
            WBGARBAGE, WBDEVICE or WBKICK



----------

PutDefDiskObject()
==================

Synopsis
~~~~~~~~
::

 BOOL PutDefDiskObject(
          struct DiskObject * icon );

Function
~~~~~~~~
::

     Puts a new default icon for a certain type.


Inputs
~~~~~~
::

     diskObject  - diskObject struct describing icon to put as new
                   default icon.


Result
~~~~~~
::

     TRUE if success, else FALSE. Error may be obtained via IoErr().



See also
~~~~~~~~

`GetDefDiskObject()`_ `PutDiskObject()`_ 

----------

PutDiskObject()
===============

Synopsis
~~~~~~~~
::

 BOOL PutDiskObject(
          CONST_STRPTR name,
          struct DiskObject * icon );

Function
~~~~~~~~
::

     Writes icon to disk.
     

Inputs
~~~~~~
::

     name - filename, ".info" will be appended.
     icon - diskobject to write
     

Result
~~~~~~
::

     TRUE on success, FALSE on error
     


----------

PutIconTagList()
================

Synopsis
~~~~~~~~
::

 BOOL PutIconTagList(
          CONST_STRPTR name,
          struct DiskObject * icon,
          struct TagItem * tags );
 
 BOOL PutIconTags(
          CONST_STRPTR name,
          struct DiskObject * icon,
          TAG tag, ... );


