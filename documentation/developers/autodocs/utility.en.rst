=======
utility
=======

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddNamedObject()`_                     `AllocateTagItems()`_                   `AllocNamedObjectA()`_                  `Amiga2Date()`_                         
`ApplyTagChanges()`_                    `AttemptRemNamedObject()`_              `CallHookPkt()`_                        `CheckDate()`_                          
`ClearMem()`_                           `CloneTagItems()`_                      `Date2Amiga()`_                         `FilterTagChanges()`_                   
`FilterTagItems()`_                     `FindNamedObject()`_                    `FindTagItem()`_                        `FreeNamedObject()`_                    
`FreeTagItems()`_                       `GetTagData()`_                         `GetUniqueID()`_                        `MapTags()`_                            
`MoveMem()`_                            `NamedObjectName()`_                    `NextTagItem()`_                        `PackBoolTags()`_                       
`PackStructureTags()`_                  `RefreshTagItemClones()`_               `ReleaseNamedObject()`_                 `RemNamedObject()`_                     
`SDivMod32()`_                          `SetMem()`_                             `SMult32()`_                            `SMult64()`_                            
`Stricmp()`_                            `Strlcat()`_                            `Strlcpy()`_                            `Strnicmp()`_                           
`TagInArray()`_                         `ToLower()`_                            `ToUpper()`_                            `UDivMod32()`_                          
`UMult32()`_                            `UMult64()`_                            `UnpackStructureTags()`_                `VSNPrintf()`_                          

======================================= ======================================= ======================================= ======================================= 

-----------

AddNamedObject()
================

Synopsis
~~~~~~~~
::

 BOOL AddNamedObject(
          struct NamedObject * nameSpace,
          struct NamedObject * object );

Function
~~~~~~~~
::

     Adds a given NamedObject to a NameSpace which is addressed through
     a second NamedObject. Allows you to link a common group of
     NamedObjects together. If the NameSpace doesn't support duplicate
     names, then a search for a duplicate will be made, and FALSE returned
     if one is found.


Inputs
~~~~~~
::

     nameSpace   -   The NameSpace to add the NamedObject object to.
                     If this value is NULL, then the NamedObject will
                     be added to the root NameSpace. This is useful
                     for sharing NamedObjects between Tasks.
     object      -   The NamedObject to add to the NameSpace.


Result
~~~~~~
::

     If the NamedObject can be added to either the supplied NameSpace or
     the system global NameSpace, this function will return TRUE.

     Otherwise it will return FALSE. This will generally happen when
     the NSF_NODUPS flag is set and this NamedObject has the same name
     as a second object, or when the object is already in a NameSpace.


Notes
~~~~~
::

     See BUGS.


Bugs
~~~~
::

     Although the AmigaOS 3.1 autodocs did not say so, under 3.0 you
     couldn't add a NamedObject to a NameSpace when the NamedObject you
     were adding had a NameSpace itself. This has changed. This is
     because the autodocs did not say this, and they are right :)



See also
~~~~~~~~

`utility/name.h </documentation/developers/headerfiles/utility/name.h>`_ `RemNamedObject()`_ 

----------

AllocateTagItems()
==================

Synopsis
~~~~~~~~
::

 struct TagItem * AllocateTagItems(
          ULONG numTags );

Function
~~~~~~~~
::

     Allocate a number of TagItems in an array for whatever you like.
     The memory allocated will be cleared.


Inputs
~~~~~~
::

     numTags     - The number of TagItems to allocate.


Result
~~~~~~
::

     A pointer to an array of struct TagItem containing numTags tags.


Example
~~~~~~~
::

     struct TagItem *tagList;

     tagList =  AllocateTagItems( 4 );

     tagList[0].ti_Tag  = NA_Name;
     tagList[0].ti_Data = (IPTR)"A list of tags";
     tagList[3].ti_Tag  = TAG_DONE;

     \* Do what you want with your TagList here ... *\

     FreeTagItems( tagList );


Notes
~~~~~
::

     The number you supply must include the terminating tag (ie TAG_DONE)
     There is no provision for extra TagItems at the end of the list.

     If the number of tags to allocate is zero, then none will be.



See also
~~~~~~~~

`FreeTagItems()`_ 

----------

AllocNamedObjectA()
===================

Synopsis
~~~~~~~~
::

 struct NamedObject * AllocNamedObjectA(
          CONST_STRPTR name,
          CONST struct TagItem * tagList );
 
 struct NamedObject * AllocNamedObject(
          CONST_STRPTR name,
          TAG tag, ... );

Function
~~~~~~~~
::

     Allocates a new NamedObject and initializes it as requested.
     This object can then be used as an object in a name space.
     Optionally you give this object a name space, and use it to
     nest name spaces. You can also allocate some memory which is
     attached to this object for your own personal use.

     When the object is allocated, it will automatically have one user.
     To allow other users to remove this object from a namespace, you
     must call ReleaseNamedObject() on this object.


Inputs
~~~~~~
::

     name    -   The name of the NamedObject. Obviously this MUST be
                 specified (otherwise it wouldn't be named would it?)
     tagList -   A TagList containing some extra information for this
                 NamedObject. These are:

                 ANO_NameSpace: Allocate a NameSpace for this
                     NamedObject. This will allow you to link other
                     NamedObjects into a group. You cannot add a
                     NamedObject with a NameSpace to another NameSpace.
                     Boolean, default is FALSE.

                 ANO_UserSpace: This tag says that you want extra memory
                     allocated for a UserSpace. The ti_Data field of
                     this TagItem contains the amount of memory to
                     allocate. Specifying this Tag with a ti_Data of 0,
                     is equivalent to the default, which is no UserSpace.
                     The UserSpace address can be found in the no_Object
                     field of the NamedObject structure.

                 ANO_Priority: This is the List priority of the
                     NamedObject and should be a signed BYTE value
                     between -128 and 127. This is taken into account
                     in adding and finding NamedObjects, as the highest
                     priority NamedObject will be returned first. The
                     default value is 0.

                 ANO_Flags: This allows you to initialize the value of
                     the NameSpace flags which control certain aspects
                     of the NameSpace. See the file utility/name.h.


Result
~~~~~~
::

     A pointer to a new NamedObject, or NULL if the allocation failed
     due to no free memory.



See also
~~~~~~~~

`FreeNamedObject()`_ 

----------

Amiga2Date()
============

Synopsis
~~~~~~~~
::

 void Amiga2Date(
          ULONG seconds,
          struct ClockData * result );

Function
~~~~~~~~
::

     Convert the time value given as the number of seconds since the
     1st of January 1978 (00:00:00 1.1.78), to a more useful values,
     which is easier for most people to understand. These values will
     be stored in the ClockData structure whose address is passed as
     an argument.


Inputs
~~~~~~
::

     seconds     -   Number of seconds since 1.1.78 00:00:00
     result      -   The ClockData structure to store the information
                     in.


Result
~~~~~~
::

     The ClockData structure will contain the converted time values.



----------

ApplyTagChanges()
=================

Synopsis
~~~~~~~~
::

 void ApplyTagChanges(
          struct TagItem * list,
          struct TagItem * changelist );
 
 void ApplyTagChangesTags(
          struct TagItem * list,
          TAG tag, ... );


----------

AttemptRemNamedObject()
=======================

Synopsis
~~~~~~~~
::

 LONG AttemptRemNamedObject(
          struct NamedObject * object );

Function
~~~~~~~~
::

     Checks to see whether a NamedObject can be removed. If the object
     is in use, or in the process of being removed, this function will
     return a failure code. If the object can be removed, this function
     will remove it and the object will be available for freeing.
     You must have previously have called FindNamedObject() on this
     object.


Inputs
~~~~~~
::

     object      - NamedObject to attempt to remove. The address of the
                     NameSpace is contained within the NamedObject.


Result
~~~~~~
::

     If the NamedObject can be removed, then it will be removed from
     the list. Otherwise the routine will just return.

     If the NamedObject has a removal message associated with it that
     message will be returned to the owner of the NamedObject.



See also
~~~~~~~~

`utility/name.h </documentation/developers/headerfiles/utility/name.h>`_ `RemNamedObject()`_ `AddNamedObject()`_ 

----------

CallHookPkt()
=============

Synopsis
~~~~~~~~
::

 IPTR CallHookPkt(
          struct Hook * hook,
          APTR object,
          APTR paramPacket );

Function
~~~~~~~~
::

     Call the callback hook defined by a Hook structure.
     This is effectively a long jump to the hook->h_Entry vector
     of the structure.

     The Hook will be called with the same arguments as this function.
     If your compiler cannot support correctly registered arguments
     (most can), you can use the HookEntry function defined in amiga.lib
     to push the arguments on the stack and call your function.

     See the include file utility/hooks.h for more information.


Inputs
~~~~~~
::

     hook        -   Pointer to an initialized Hook structure. See the
                     include file <utility/hooks.h> for a definition.
     object      -   The object that this Hook is to act upon.
     paramPacket -   The arguments to this callback. This will depend
                     entirely on the type of the object.


Result
~~~~~~
::

     Depends upon the Hook itself.


Bugs
~~~~
::

     If your callback function does not have the correct register
     definitions, the result of this function is entirely unreliable.

     You can get the correct register definitions by using the AROS_UFHA()
     macros (See <utility/hooks.h>).



See also
~~~~~~~~

amiga.lib/CallHook() 

----------

CheckDate()
===========

Synopsis
~~~~~~~~
::

 ULONG CheckDate(
          struct ClockData * date );

Function
~~~~~~~~
::

     Examine the date described in the ClockData structure and
     determine whether it is a valid date. In particular this
     checks whether the ranges of the fields are within normal
     limits.

     This function does not check whether the wday field of the
     ClockData structure is valid.


Inputs
~~~~~~
::

     date        -   A ClockData structure desribing the date
                     to check.


Result
~~~~~~
::

     If the date is valid, the number of seconds from midnight
     1-Jan-1978 AD to the date, or 0 if the date is invalud.


Notes
~~~~~
::

     The date 01-Jan-78 00:00:00 is actually returned as invalid.

     This also assumes that the ClockDate refers to a date in the
     Gregorian calendar. (60 sec/min, 60 min/hour, 24 hr/day,
     12 months/year).


Bugs
~~~~
::

     Does not check whether the 29/2 is valid outside of a leap year.



See also
~~~~~~~~

`Amiga2Date()`_ `Date2Amiga()`_ 

----------

ClearMem()
==========

Synopsis
~~~~~~~~
::

 VOID ClearMem(
          APTR destination,
          ULONG size );


----------

CloneTagItems()
===============

Synopsis
~~~~~~~~
::

 struct TagItem * CloneTagItems(
          const struct TagItem * tagList );
 
 struct TagItem * CloneTagItemsTags(
          TAG tag, ... );

Function
~~~~~~~~
::

     Duplicates a TagList. The input TagList can be NULL, in which
     case an empty TagList will be returned.


Inputs
~~~~~~
::

     tagList     -   The TagList that you want to clone


Result
~~~~~~
::

     A TagList which contains a copy of the TagItems contained in the
     original list. The list is cloned so that calling FindTagItem()
     on a tag in the clone will return the same value as that in the
     original list (assuming the original has not been modified).


Example
~~~~~~~
::

     struct TagItem *tagList, *tagListClone;

     \* Set up the original taglist tagList *\

     tagListClone = CloneTagItems( tagList );

     \* Do what you want with your TagList here *\

     FreeTagItems( tagListClone );



See also
~~~~~~~~

`AllocateTagItems()`_ `FreeTagItems()`_ `RefreshTagItemClones()`_ 

----------

Date2Amiga()
============

Synopsis
~~~~~~~~
::

 ULONG Date2Amiga(
          struct ClockData * date );

Function
~~~~~~~~
::

     Converts the information given in the struct ClockData *date, into
     the number of seconds that have past since the 1st of January 1978.


Inputs
~~~~~~
::

     date    -   Contains the information about the time.


Result
~~~~~~
::

     The number of seconds since 1.1.1978



See also
~~~~~~~~

`Amiga2Date()`_ `CheckDate()`_ 

----------

FilterTagChanges()
==================

Synopsis
~~~~~~~~
::

 void FilterTagChanges(
          struct TagItem * changeList,
          const struct TagItem * originalList,
          BOOL apply );

Function
~~~~~~~~
::

     This function will scan through changeList, and if an item in
     changeList exists in originalList, but both items data values
     are equal, then the item in changeList will be removed from the
     list.

     If the value of apply is TRUE, then if the datas are different
     then the values in originalList will be updated to match those
     in changeList.


Inputs
~~~~~~
::

     changeList      -   List of new tags (may be NULL).
     originalList    -   List of existing tags (may be NULL).
     apply           -   Boolean flag as to whether the values in
                         originalList should be updated to match
                         those in changeList.


Result
~~~~~~
::

     The changeList will be modified to show altered items, and if
     requested, the originalList will be updated.



See also
~~~~~~~~

`ApplyTagChanges()`_ 

----------

FilterTagItems()
================

Synopsis
~~~~~~~~
::

 ULONG FilterTagItems(
          struct TagItem * tagList,
          Tag            * filterArray,
          ULONG logic );

Function
~~~~~~~~
::

     Scans a tag list and removes tag items from the list depending
     upon whether the tag's Tag value is found in an array of tag
     values.

     If 'logic' is TAGFILTER_AND, then all the tags that are NOT
     in the array filterArray will be removed from the tagList.

     If 'logic' is TAGFILTER_NOT, then all the tags that ARE in
     the array filterArray will be removed from the tagList.

     Tags are removed by setting their ti_Tag value to TAG_IGNORE.


Inputs
~~~~~~
::

     tagList         -   A TagList to filter items from.
     filterArray     -   An array (as described by TagInArray())
                         to determine which tag items are to be
                         removed.
     logic           -   Whether the tags in filterArray are to be
                         included or excluded from the tag list.


Result
~~~~~~
::

     The number of valid items left in the resulting filtered list.



See also
~~~~~~~~

`TagInArray()`_ 

----------

FindNamedObject()
=================

Synopsis
~~~~~~~~
::

 struct NamedObject * FindNamedObject(
          struct NamedObject * nameSpace,
          CONST_STRPTR name,
          struct NamedObject * lastObject );

Function
~~~~~~~~
::

     This function will search through a given NameSpace, or the
     system global NameSpace to find a NamedObject with the name
     requested. Optionally you can have the search start from a
     specific NamedObject. This way you can look for each occurence
     of a specifically named NamedObject in a NameSpace that allows
     for duplicates.


Inputs
~~~~~~
::

     nameSpace   -   The NameSpace to search through. If NULL will use
                     the system default NameSpace.
     name        -   The name of the object to search for. If NULL,
                     any and all NamedObjects will be matched.
     lastObject  -   The (optional) last NamedObject to start the search
                     from.


Result
~~~~~~
::

     If a NamedObject with the name supplied exists, it will be returned.
     Otherwise will return NULL.

     When you have finised with this NamedObject, you should call
     ReleaseNamedObject( NamedObject ).


Notes
~~~~~
::

     If you are going to use a returned NamedObject to be the starting
     point for another search you must call ReleaseNamedObject() AFTER
     searching, as the ReleaseNamedObject() call can cause the NamedObject
     to be freed, leaving you with an invalid pointer.



See also
~~~~~~~~

`ReleaseNamedObject()`_ 

----------

FindTagItem()
=============

Synopsis
~~~~~~~~
::

 struct TagItem * FindTagItem(
          Tag tagValue,
          const struct TagItem * tagList );
 
 struct TagItem * FindTagItemTags(
          Tag tagValue,
          TAG tag, ... );


----------

FreeNamedObject()
=================

Synopsis
~~~~~~~~
::

 void FreeNamedObject(
          struct NamedObject * object );

Function
~~~~~~~~
::

     Frees a NamedObject previously allocated by AllocNamedObject().


Inputs
~~~~~~
::

     object      -   The NamedObject that you wish to free.


Result
~~~~~~
::

     The memory used by the NamedObject will be returned to the
     systems free memory pool.



See also
~~~~~~~~

`utility/name.h </documentation/developers/headerfiles/utility/name.h>`_ `AllocNamedObjectA()`_ 

----------

FreeTagItems()
==============

Synopsis
~~~~~~~~
::

 void FreeTagItems(
          struct TagItem * tagList );
 
 void FreeTagItemsTags(
          TAG tag, ... );

Function
~~~~~~~~
::

     Free a list of TagItems which was allocated by AllocateTagItems().


Inputs
~~~~~~
::

     tagList     - A list of TagItems - must have been allocated by
                   AllocateTagItems() or CloneTagItems().


Result
~~~~~~
::

     The memory containing the tagList is returned to the system.


Example
~~~~~~~
::

     struct TagItem *tagList;

     tagList =  AllocateTagItems( 4 );

     tagList[0].ti_Tag  = NA_Name;
     tagList[0].ti_Data = (IPTR)"A list of tags";
     tagList[3].ti_Tag  = TAG_DONE;

     \* Do what you want with your TagList here ... *\

     FreeTagItems( tagList );


Notes
~~~~~
::

     The memory will only be freed if the input is non-NULL.



See also
~~~~~~~~

`utility/tagitem.h </documentation/developers/headerfiles/utility/tagitem.h>`_ `AllocateTagItems()`_ 

----------

GetTagData()
============

Synopsis
~~~~~~~~
::

 IPTR GetTagData(
          Tag tagValue,
          IPTR defaultVal,
          const struct TagItem * tagList );
 
 IPTR GetTagDataTags(
          Tag tagValue,
          IPTR defaultVal,
          TAG tag, ... );

Function
~~~~~~~~
::

     Searches the TagList for the Tag specified, if it exists, then
     returns the ti_Data field of that Tag, otherwise returns the
     supplied default value.


Inputs
~~~~~~
::

     tagValue    -   Tag to search for.
     defaultVal  -   Default value for the Tag.
     tagList     -   Pointer to first TagItem in the list.


Result
~~~~~~
::

     The data value if the Tag exists, or the default value if it
     doesn't.


Example
~~~~~~~
::


     struct Window *window;      \* The Window we are creating *\
     struct TagItem *wintags;    \* Tags for this window *\

     \* Find out the value for the WA_Left tag *\
     window->Left = GetTagData( WA_Left, 320, wintags )


Notes
~~~~~
::

     If the input TagList doesn't exist (eg for some reason equals
     NULL), then the return value will be NULL. This way you can
     check for broken code, whereas returing the default would allow
     code that is possibly buggy to still seem to work. (Until you
     tried to do anything special at least).



See also
~~~~~~~~

`utility/tagitem.h </documentation/developers/headerfiles/utility/tagitem.h>`_ 

----------

GetUniqueID()
=============

Synopsis
~~~~~~~~
::

 ULONG GetUniqueID();

Function
~~~~~~~~
::

     Returns a unique id that is different from any other id that is
     obtained from this function call.


Result
~~~~~~
::

     an unsigned long id



----------

MapTags()
=========

Synopsis
~~~~~~~~
::

 void MapTags(
          struct TagItem * tagList,
          struct TagItem * mapList,
          ULONG mapType );

Function
~~~~~~~~
::

     Replace the ti_Tags in tagList which match the ti_Tags in mapList
     by the ti_Data values of mapList.


Inputs
~~~~~~
::

     tagList - This list is modified
     mapList - This defines which ti_Tag is replaced with what new value.


Result
~~~~~~
::

     None.



----------

MoveMem()
=========

Synopsis
~~~~~~~~
::

 VOID MoveMem(
          APTR source,
          APTR destination,
          ULONG size );


----------

NamedObjectName()
=================

Synopsis
~~~~~~~~
::

 STRPTR NamedObjectName(
          struct NamedObject * object );

Function
~~~~~~~~
::

     Return the name associated with a NamedObject.


Inputs
~~~~~~
::

     object      -   The NamedObject you want the name of.


Result
~~~~~~
::

     The name of the object will be returned.


Example
~~~~~~~
::

     struct NamedObject *no;
     STRPTR name;

     \* Some other code here *\

     name = NamedObjectName( no );



See also
~~~~~~~~

`utility/name.h </documentation/developers/headerfiles/utility/name.h>`_ 

----------

NextTagItem()
=============

Synopsis
~~~~~~~~
::

 struct TagItem * NextTagItem(
          struct TagItem ** tagListPtr );

Function
~~~~~~~~
::

     Returns the address of the next tag-item in the list. This
     routine correctly handles TAG_END, TAG_DONE, TAG_MORE,
     TAG_IGNORE and TAG_SKIP.

     TAG_END and TAG_DONE both terminate a TagItems-array (in
     fact, TAG_DONE is the same as TAG_END).

     With TAG_MORE, you can redirect the processing to a new list
     of tags. Note that the processing will not return to the previous
     list when a TAG_END/TAG_DONE is encountered.

     TAG_IGNORE disables the processing of an entry in the list.
     This entry is just ignored (We use this technique for filtering).

     TAG_SKIP skips this tagitem, and the next number of tagitems as
     indicated in the tag's ti_Data field.


Inputs
~~~~~~
::

     tagListPtr - Pointer to an element in a taglist.


Result
~~~~~~
::

     Next tag item or NULL if you reached the end of the list.


Notes
~~~~~
::

     - TAG_MORE works like "go on with new list" instead of "read new
       list and go on with the current one".



----------

PackBoolTags()
==============

Synopsis
~~~~~~~~
::

 ULONG PackBoolTags(
          ULONG initialFlags,
          struct TagItem * tagList,
          struct TagItem * boolMap );
 
 ULONG PackBoolTagsTags(
          ULONG initialFlags,
          struct TagItem * tagList,
          TAG tag, ... );

Function
~~~~~~~~
::

     Scans through the list tagList to find the tags which are contained
     in the list boolMap which are then converted to a bit-flag
     representation as defined in boolMap.

     If the value of the Tag's data is 0, then the boolean value of the
     tag is defined as false, otherwise it is true.


Inputs
~~~~~~
::

     initialFlags -  an initial set of bit-flags which will be changed
                     by this function.

     tagList      -  A TagItem list which contains some tags which are
                     defined as boolean by having a corresponding tag
                     in boolMap. The boolean value of tag->ti_Data
                     determines whether the bits in the flag are
                     TRUE or FALSE.

     boolMap      -  A TagItem list containing a series of tags which
                     are to be considered Boolean.


Result
~~~~~~
::

     flags        -  The value of initialFlags modified by the values
                     of the boolean tags defined in boolMap.


Notes
~~~~~
::

     If there is more than one Tag in tagList of a single type. The
     last of these tags will determine the value of that bit-flag.



See also
~~~~~~~~

`GetTagData()`_ `FindTagItem()`_ `NextTagItem()`_ 

----------

PackStructureTags()
===================

Synopsis
~~~~~~~~
::

 ULONG PackStructureTags(
          APTR pack,
          ULONG          * packTable,
          struct TagItem * tagList );
 
 ULONG PackStructureTagsTags(
          APTR pack,
          ULONG          * packTable,
          TAG tag, ... );

Function
~~~~~~~~
::

     This function will scan through the packTable, and for each TagItem
     described in a packTable entry which can be found in the tagList,
     the data in the TagItem's ti_Data field will be packed into the
     structure as described in the packTable.


Inputs
~~~~~~
::

     pack            -   The structure to fill in.
     packTable       -   Table describing how to pack the structure.
                         See the include file utility/pack.h for
                         information on the format of this table.
     tagList         -   List of TagItems containing data.


Result
~~~~~~
::

     The number of TagItems packed.



See also
~~~~~~~~

`UnpackStructureTags()`_ 

----------

RefreshTagItemClones()
======================

Synopsis
~~~~~~~~
::

 void RefreshTagItemClones(
          struct TagItem * clone,
          const struct TagItem * original );
 
 void RefreshTagItemClonesTags(
          struct TagItem * clone,
          TAG tag, ... );

Function
~~~~~~~~
::

     If (and only if) the Tag list 'clone' was created by calling
     CloneTagItems on the Tag list 'original', and the list original
     has NOT been changed in any way, then this function will change
     the list 'clone' back to its original state.


Inputs
~~~~~~
::

     original    - The source TagList (unaltered)
     clone       - The destination TagList (MUST be allocated by
                     CloneTagItems())


Result
~~~~~~
::

     The second TagList now has the same values as the first.


Example
~~~~~~~
::

     struct TagItem *orig, clone;

     \* TagList orig has some values already *\
     clone = CloneTagList( orig );

     \* In between here we do something to the TagItems in clone,
         but we need to have them restored.
     *\

     RefreshTagItemClones( clone, orig );


Notes
~~~~~
::

     If either of the inputs is NULL, then the function will not do
     anything.


Bugs
~~~~
::

     None, however if either of the two pre-conditions is not fulfilled
     then this function will probably be unreliable, or trash memory.

     We warned you...



See also
~~~~~~~~

`CloneTagItems()`_ 

----------

ReleaseNamedObject()
====================

Synopsis
~~~~~~~~
::

 void ReleaseNamedObject(
          struct NamedObject * object );

Function
~~~~~~~~
::

     Releases a NamedObject that you previously obtained by calling
     FindNamedObject.


Inputs
~~~~~~
::

     object      -   The NamedObject to release.


Result
~~~~~~
::

     The NamedObject will be released from your possession, and if it
     is ready to be deallocated, then the NamedObject will be freed.


Example
~~~~~~~
::

     struct NamedObject *nObj, *myNameSpace;

     if( nObj = FindNamedObject( myNameSpace, "Some Name", NULL ) )
     {
         \*
             Here you do whatever you want. However The NamedObject
             structure should generally be treated READ-ONLY
         *\

         ReleaseNamedObject( nObj );
     }


Notes
~~~~~
::

     WARNING: You really should actually have found the NamedObject
         first (that is with FindNamedObject()) before calling this
         function. Failure to take heed of this will cause memory
         use problems.



See also
~~~~~~~~

`utility/name.h </documentation/developers/headerfiles/utility/name.h>`_ `FindNamedObject()`_ 

----------

RemNamedObject()
================

Synopsis
~~~~~~~~
::

 void RemNamedObject(
          struct NamedObject * object,
          struct Message     * message );

Function
~~~~~~~~
::

     Remove a NamedObject from a namespace.

     If the NamedObject cannot be removed at the time of this call, then
     the call will return without removing the NamedObject. It will
     mark the NamedObject as "waiting for removal".

     When the NamedObject is ready to be freed, the supplied message
     will be ReplyMsg()'d with the message->mn_Node.ln_Name field
     containing either:
         - the address of the NamedObject that was removed. In this case
           you can free the NamedObject yourself.
         - NULL. In this case, another Task has freed the NamedObject,
           and you should not do so.


Inputs
~~~~~~
::

     object      -   The NamedObject to attempt to remove.
     message     -   The message to send. This message is a standard
                     Exec Message, which MUST have the mn_ReplyPort
                     field correctly set. The mn_Node.ln_Name field
                     will contain the address of the NamedObject or NULL
                     upon arrival at your port.


Result
~~~~~~
::

     The NamedObject will be removed if possible, or marked for removal
     at the next best moment.


Notes
~~~~~
::

     Since this function effectively does a ReleaseNamedObject(), you
     must have found this object first.



See also
~~~~~~~~

`AttemptRemNamedObject()`_ `AddNamedObject()`_ 

----------

SDivMod32()
===========

Synopsis
~~~~~~~~
::

 QUAD SDivMod32(
          LONG dividend,
          LONG divisor );

Function
~~~~~~~~
::

     Calculates the 32-bit signed division of dividend by divisor. That
     is dividend / divisor. Will return both the quotient and the
     remainder.


Inputs
~~~~~~
::

     dividend    -   The number to divide.
     divisor     -   The to divide by.


Result
~~~~~~
::

     For m68k assembly programmers:
         D0: quotient
         D1: remainder
     Others:
         The quotient is returned in the high 32 bits of the result.
         The remainder in the low 32 bits.


Notes
~~~~~
::

     The utility.library math functions are unlike all other utility
     functions in that they don't require the library base to be
     loaded in register A6, and they also save the values of the
     address registers A0/A1.

     This function is mainly to support assembly programers, and is
     probably of limited use to higher-level language programmers.


Bugs
~~~~
::

     It is very hard for a C programmer to obtain the value of the
     remainder. In fact, its pretty near impossible.



See also
~~~~~~~~

`SMult32()`_ `SMult64()`_ `UDivMod32()`_ `UMult32()`_ `UMult64()`_ 

----------

SetMem()
========

Synopsis
~~~~~~~~
::

 APTR SetMem(
          APTR destination,
          UBYTE c,
          LONG length );

Function
~~~~~~~~
::

     Fill a memory block with a Byte.


Inputs
~~~~~~
::

     destination - address where the filling starts
     c           - value to be filled in
     length      - number of Bytes to be filled in


Result
~~~~~~
::

     The destination address


Example
~~~~~~~
::

     SetMem(addr, 10, 100);



----------

SMult32()
=========

Synopsis
~~~~~~~~
::

 LONG SMult32(
          LONG arg1,
          LONG arg2 );

Function
~~~~~~~~
::

     Performs the signed 32-bit multiplication of arg1 * arg2 and
     returns a signed 32 bit value.


Inputs
~~~~~~
::

     arg1, arg2  -   32 bit signed longs


Result
~~~~~~
::

     arg1 * arg2


Example
~~~~~~~
::


     LONG a = 352543;
     LONG b = -52464;
     LONG c = SMult32(a,b);
     c == -1315946768


Notes
~~~~~
::

     This can perform the multiplication either using the machines
     native instructions (if they exist), or in software using a
     simple algorithm based on expanding algebraic products.

     The utility.library math functions are unlike all other utility
     functions in that they don't require the library base to be
     loaded in register A6, and they also save the values of the
     address registers A0/A1.

     This function is mainly to support assembly programers, and is
     probably of limited use to higher-level language programmers.


Bugs
~~~~
::

     Of limited use to C programmers.



See also
~~~~~~~~

`UMult32()`_ `UMult64()`_ `SMult64()`_ 

----------

SMult64()
=========

Synopsis
~~~~~~~~
::

 QUAD SMult64(
          LONG arg1,
          LONG arg2 );

Function
~~~~~~~~
::

     Compute the signed 64-bit product of arg1 * arg2.


Inputs
~~~~~~
::

     arg1, arg2  -   32 bit signed numbers.


Result
~~~~~~
::

     arg1 * arg2


Notes
~~~~~
::

     For m68k assembly programmers, QUADs are returned in D0:D1 (with
     the high 32 bits in D0).

     The utility.library math functions are unlike all other utility
     functions in that they don't require the library base to be
     loaded in register A6, and they also save the values of the
     address registers A0/A1.

     This function is mainly to support assembly programers, and is
     probably of limited use to higher-level language programmers.



See also
~~~~~~~~

`SMult32()`_ `UMult32()`_ `UMult64()`_ 

----------

Stricmp()
=========

Synopsis
~~~~~~~~
::

 LONG Stricmp(
          CONST_STRPTR string1,
          CONST_STRPTR string2 );

Function
~~~~~~~~
::

     Compares two strings treating lower and upper case characters
     as identical.


Inputs
~~~~~~
::

     string1, string2 - The strings to compare.


Result
~~~~~~
::

     <0  if string1 <  string2
     ==0 if string1 == string2
     >0  if string1 >  string2



----------

Strlcat()
=========

Synopsis
~~~~~~~~
::

 LONG Strlcat(
          STRPTR destination,
          CONST_STRPTR source,
          LONG size );

Function
~~~~~~~~
::

 Appends the string 'source' to the string 'destination'. The total length
 including the terminating NUL is limited to 'size'.
 

Inputs
~~~~~~
::

 destination - the target string. Might be NULL.
 source - the string which will be appended. Might be NULL.
 size - the length of the 'destination' buffer
 

Result
~~~~~~
::

 The number of Bytes which would have been written without the truncation.
 

Example
~~~~~~~
::

 Strlcpy(buffer, "Hello ", sizeof buffer);
 Strlcat(buffer, "World.", sizeof buffer);



----------

Strlcpy()
=========

Synopsis
~~~~~~~~
::

 LONG Strlcpy(
          STRPTR destination,
          CONST_STRPTR source,
          LONG size );

Function
~~~~~~~~
::

 Copies the string 'source' into 'destination'. String will be
 null-terminated. Not more than 'size' Bytes will be written.
 

Inputs
~~~~~~
::

 destination - the target. Might be NULL.
 source      - the string which will be copied. Might be NULL.
 size        - the size of the 'destination'
 

Result
~~~~~~
::

 The string lenght of 'source'.
 

Example
~~~~~~~
::

 Strlcpy(buffer, "Hello", sizeof buffer);
 


----------

Strnicmp()
==========

Synopsis
~~~~~~~~
::

 LONG Strnicmp(
          CONST_STRPTR string1,
          CONST_STRPTR string2,
          LONG length );

Function
~~~~~~~~
::

     Compares two strings treating lower and upper case characters
     as identical up to a given maximum number of characters.


Inputs
~~~~~~
::

     string1, string2 - The strings to compare.
     length           - maximum number of characters to compare.


Result
~~~~~~
::

     <0  if string1 <  string2
     ==0 if string1 == string2
     >0  if string1 >  string2



----------

TagInArray()
============

Synopsis
~~~~~~~~
::

 BOOL TagInArray(
          Tag tagValue,
          Tag * tagArray );

Function
~~~~~~~~
::

     Determines whether the value tagValue exists in an array of Tags
     pointed to by tagArray. This array must be contiguous, and must be
     terminated by TAG_DONE.

     This is an array of Tags (ie: Tag tagArray[]), not an array of
     TagItems (ie: struct TagItem tagArray[]).


Inputs
~~~~~~
::

     tagValue    -   The value of the Tag to search for.
     tagArray    -   The ARRAY of Tag's to scan through.


Result
~~~~~~
::

     TRUE    if tagValue exists in tagArray
     FALSE   otherwise



See also
~~~~~~~~

`utility/tagitem.h </documentation/developers/headerfiles/utility/tagitem.h>`_ `FilterTagItems()`_ 

----------

ToLower()
=========

Synopsis
~~~~~~~~
::

 UBYTE ToLower(
          ULONG character );

Function
~~~~~~~~
::

     Convert a character to lower case.


Inputs
~~~~~~
::

     character - The character to convert.


Result
~~~~~~
::

     Equivalent lower case character.



----------

ToUpper()
=========

Synopsis
~~~~~~~~
::

 UBYTE ToUpper(
          ULONG character );

Function
~~~~~~~~
::

     Convert a character to uppercase


Inputs
~~~~~~
::

     character   - The character that you want changed.


Result
~~~~~~
::

     The uppercase version of that character.


Example
~~~~~~~
::

     STRPTR string; UBYTE chr;

     \* Convert a string to uppercase *\
     while( chr = *string )
     {
         *string = ToUpper( chr );
         string++;
     }


Notes
~~~~~
::

     Currently only works for ASCII characters. Would not be difficult
     to adapt for other character sets (Unicode for example).

     This function is patched by the locale.library, so you should be
     prepared for different results when running under different
     languages.



See also
~~~~~~~~

`ToLower()`_ 

----------

UDivMod32()
===========

Synopsis
~~~~~~~~
::

 ULONG UDivMod32(
          ULONG dividend,
          ULONG divisor );

Function
~~~~~~~~
::

     Perform the 32 bit unsigned division and modulus of dividend by
     divisor, that is dividend / divisor. Will return both the
     quotient and the remainder.


Inputs
~~~~~~
::

     dividend        -   The number to divide into (numerator).
     divisor         -   The number to divide by (denominator).


Result
~~~~~~
::

     For m68k assembly programmers,
         D0: quotient
         D1: remainder

     For HLL programmers,
         the quotient


Notes
~~~~~
::

     The utility.library math functions are unlike all other utility
     functions in that they don't require the library base to be
     loaded in register A6, and they also save the values of the
     address registers A0/A1.

     This function is mainly to support assembly programers, and is
     probably of limited use to higher-level language programmers.


Bugs
~~~~
::

     It is impossible for C programmers to obtain the value of
     remainder.



See also
~~~~~~~~

`SDivMod32()`_ `SMult32()`_ `SMult64()`_ `UMult32()`_ `UMult64()`_ 

----------

UMult32()
=========

Synopsis
~~~~~~~~
::

 ULONG UMult32(
          ULONG arg1,
          ULONG arg2 );

Function
~~~~~~~~
::

     Performs an unsigned 32-bit multiplication of arg1 * arg2 and
     returns a 32 bit value.


Inputs
~~~~~~
::

     arg1, arg2  -   32 bit unsigned longs


Result
~~~~~~
::

     arg1 * arg2


Example
~~~~~~~
::


     LONG a = 352543;
     LONG b = 52464;
     LONG c = UMult32(a,b);
     c == 1315946768


Notes
~~~~~
::

     This can perform the multiplication either using the machines
     native instructions (if they exist), or in software using a
     simple algorithm (three multiplications, two shifts and
     an addition.

     The utility.library math functions are unlike all other utility
     functions in that they don't require the library base to be
     loaded in register A6, and they also save the values of the
     address registers A0/A1.

     This function is mainly to support assembly programers, and is
     probably of limited use to higher-level language programmers.



See also
~~~~~~~~

`SMult32()`_ `UMult64()`_ `SMult64()`_ 

----------

UMult64()
=========

Synopsis
~~~~~~~~
::

 UQUAD UMult64(
          ULONG arg1,
          ULONG arg2 );

Function
~~~~~~~~
::

     Compute the unsigned 64-bit product of arg1 * arg2.


Inputs
~~~~~~
::

     arg1, arg2  -   32 bit unsigned numbers.


Result
~~~~~~
::

     arg1 * arg2


Notes
~~~~~
::

     For m68k assembly programmers, UQUADs are returned in D0:D1 (with
     the high 32 bits in D0.

     This function is really only for people programming in
     assembly on real Amigas. Most compilers will be able to do this
     math for you inline.



See also
~~~~~~~~

`SMult32()`_ `UMult32()`_ `SMult64()`_ 

----------

UnpackStructureTags()
=====================

Synopsis
~~~~~~~~
::

 ULONG UnpackStructureTags(
          APTR pack,
          ULONG          * packTable,
          struct TagItem * tagList );
 
 ULONG UnpackStructureTagsTags(
          APTR pack,
          ULONG          * packTable,
          TAG tag, ... );

Function
~~~~~~~~
::

     For each table entry, if the matching tag is found in the tagList,
     then the data in the structure will be placed in the memory pointed
     to by the tags ti_Data.

     Note: The value contained in ti_Data must be a *POINTER* to a
           IPTR.


Inputs
~~~~~~
::

     pack            -   Pointer to the memory area to be unpacked.
     packTable       -   Table describing the unpacking operation.
                         See the include file <utility/pack.h> for
                         more information on this table.
     tagList         -   List of TagItems to unpack into.


Result
~~~~~~
::

     The number of Tags unpacked.


Notes
~~~~~
::

     PSTF_EXISTS has no effect on this function.



See also
~~~~~~~~

`PackStructureTags()`_ `FindTagItem()`_ 

----------

VSNPrintf()
===========

Synopsis
~~~~~~~~
::

 LONG VSNPrintf(
          STRPTR buffer,
          LONG buffer_size,
          CONST_STRPTR format,
          RAWARG args );

Function
~~~~~~~~
::

     Formatted output to a buffer. Maximal buffer_size characters
     are written including the trainling zero. The string will be
     null-terminated.


Inputs
~~~~~~
::

     buffer      - where the string will be written. Might be NULL. In
                   that case the required size will still be returnend.
     
     buffer_size - the size of the buffer. Must be at least 1.
     format      - the format specification
     args        - the arguments which will be filled in


Result
~~~~~~
::

     The number of characters which would have been written without
     the buffer_size limitation. The trailing zero is included.


Example
~~~~~~~
::

     TEXT buffer[12];
     IPTR args[2];
     args[0] = (IPTR)"XYZ";
     args[1] = 12345;
     LONG count = VSNPrintf(buffer, sizeof buffer, "ab%scd%ldef", (RAWARG)args);


Notes
~~~~~
::

     The same rules as for RawDoFmt() are valid for format and args.



See also
~~~~~~~~

`exec.library/RawDoFmt() <./exec#rawdofmt>`_ 

