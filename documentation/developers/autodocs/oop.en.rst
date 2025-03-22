===
oop
===

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`--background_meta--`_                  `--background_root--`_                  `--naming_conventions--`_               `aoMeta_ID`_                            
`aoMeta_InstSize`_                      `aoMeta_InterfaceDescr`_                `aoMeta_SuperID`_                       `aoMeta_SuperPtr`_                      
`moRoot_Dispose`_                       `moRoot_Get`_                           `moRoot_New`_                           `moRoot_Set`_                           
`OOP_AddClass()`_                       `OOP_DisposeObject()`_                  `OOP_FindClass()`_                      `OOP_GetAttr()`_                        
`OOP_GetAttrBase()`_                    `OOP_GetMethod()`_                      `OOP_GetMethodID()`_                    `OOP_NewObject()`_                      
`OOP_ObtainAttrBase()`_                 `OOP_ObtainAttrBases()`_                `OOP_ObtainAttrBasesArray()`_           `OOP_ObtainMethodBasesArray()`_         
`OOP_ParseAttrs()`_                     `OOP_ReleaseAttrBase()`_                `OOP_ReleaseAttrBases()`_               `OOP_ReleaseAttrBasesArray()`_          
`OOP_RemoveClass()`_                    `OOP_SetAttrs()`_                       
======================================= ======================================= ======================================= ======================================= 

-----------

--background_meta--
===================

Notes
~~~~~
::

     Classes are objects of metaclasses, so therefore
     classes are created with OOP_NewObject().

     As of now there are three different metaclasses available:

       mimetaclass (CLID_MIMeta)
       - Creates classes that supports multiple interfaces.

       simetaclass (CLID_SIMeta)
       - Creates classes that can only support single interfaces. Advantage is faster
         method invocation (doesn't require hashing).

     How to create a class is best shown through an example.
     Here is a Timer class with two simple methods,
     Start and Stop.
     Note, this example doesn't show the New and Dispose
     methods and OOP_DoSuperMethod() usage, but it is exactly the same as in BOOPSI,
     so those familiar with BOOPSI, should find creating classes with this system simple.

     // In the classes' include file you have to define class ID, interface ID
     // method offsets and attribute offset
     #define CLID_Timer      "timerclass"
     #define IID_Timer       "I_timer"

     // Method offset for methods in the IID_Timer interface.
     enum
     {
         moTimer_Start       = 0,
         moTimer_Stop,

         Num_Timer_Methods   // number of methods in the Timer interface
     };

     // Attribute offsets for attrs in the IID_Timer interface.
     enum
     {
         aoTimer_Elapsed = 0,

         Num_Timer_Attrs     // number of attrs in the timer interface
     };

     // private instance data
     struct timer_data
     {
         struct timeval start_time;
         struct timeval elapsed_time;
     };

     // The methods
     static VOID timer_start(Class *cl, Object *o, Msg msg)
     {
         struct timer_data *data;

         data = INST_DATA(tcl, o);

         gettimeofday(&(data->start_time), NULL);

         return;
     }

     static VOID timer_stop(Class *cl, Object *o, Msg msg)
     {
         struct timer_data *data = INST_DATA(tcl, o);
         gettimeofday(&(data->elapsed_time), NULL);

         SubTime(&(data->elapsed_time), &(data->start_time));

         return;
     }

     #define NUM_TIMER_METHODS 2
     Class *make_timerclass()
     {
         struct MethodDescr methods[NUM_TIMER_METHODS + 1] =
         {
             {(IPTR (*)())timer_start,               moTimer_Start},
             {(IPTR (*)())timer_stop,                moTimer_Stop},
             {NULL, 0UL} // must be null-terminated
         };

         struct InterfaceDescr ifdescr[] =
         {
             { methods, "Timer", NUM_TIMER_METHODS },
             { NULL, 0UL, 0UL} // must be null-terminated
         };

         struct TagItem tags[] =
         {
             {aMeta_SuperID,         (IPTR)CLID_Root},
             {aMeta_InterfaceDescr,  (IPTR)ifdescr},
             {aMeta_ID,              (IPTR)CLID_Timer},
             {aMeta_InstSize,        (IPTR)sizeof (struct timer_data)},
             {TAG_DONE, 0UL}
         };

         Class *tcl;

         // Make it a class of the SIMeta
         tcl = (Class *)OOP_NewObject(NULL, CLID_SIMeta, tags);

         if (tcl)
         {
             // Make the class public
             OOP_AddClass(tcl);
         }

         return tcl;
     }

     VOID free_timerclass(Class *cl)
     {
         OOP_DisposeObject((Object *)cl);

         return;
     }



----------

--background_root--
===================

Notes
~~~~~
::

     Root class is the base class of all classes.
     One can create new baseclasses, but all classes must implement the root interface.



----------

--naming_conventions--
======================

Notes
~~~~~
::

     This section describes the recommented convention for naming attributes and methods.

     Method and attribute offsets are constructed like this:

     method offset:
       mo<interface>_<method name>  (eg. moTimer_Start)

     attribute offset:
       ao<interface>_<attrname>  (eg. aoTimer_Elapsed)

     or moHidd_GC_SetPixel and aoHidd_GC_FgPen

     Macro specifying class ID is defined like this:
     CLID_<system>_<class name> (eg. CLID_Hidd_Gfx )

     And interface IDs like this.
     IID_<system>_<interface name> (eg. IID_Hidd_Gfx )

     ID themselves are strings.



----------

aoMeta_ID
=========

Synopsis
~~~~~~~~
::

     [I..], CONST_STRPTR


Function
~~~~~~~~
::

     Specifies the class ID for the class.



----------

aoMeta_InstSize
===============

Synopsis
~~~~~~~~
::

     [I..], ULONG


Function
~~~~~~~~
::

     Size of the instance data for this class.
     Note, this is not necessarily the same as the size of the whole
     object of this class.



----------

aoMeta_InterfaceDescr
=====================

Synopsis
~~~~~~~~
::

     [I..],  struct InterfaceDescr *


Function
~~~~~~~~
::

     Pointer to an array of interface descriptors (struct InterfaceDescr).
     This array has to be null-terminated.

     Each

     struct InterfaceDescr
     {
             struct MethodDescr *MethodTable;
             CONST_STRPTR InterfaceID;
             ULONG NumMethods;
     };

     describes an interface of the class.
     The MethodTable is an array of

     struct MethodDescr
     {
             IPTR (*MethodFunc)();
             ULONG MethodIdx;
     };
     
     which describes each method's implementation.


Example
~~~~~~~
::

     struct MethodDescr root_mdescr[NUM_ROOT_METHODS + 1] =
     {
         { (IPTR (*)())unixio_new,     moRoot_New            },
         { (IPTR (*)())unixio_dispose, moRoot_Dispose        },
         { NULL, 0UL }
     };

     struct MethodDescr unixio_mdescr[NUM_UNIXIO_METHODS + 1] =
     {
         { (IPTR (*)())unixio_wait,  moHidd_UnixIO_Wait      },
         { NULL, 0UL }
     };

     struct InterfaceDescr ifdescr[] =
     {
         {root_mdescr, IID_Root, NUM_ROOT_METHODS},
         {unixio_mdescr, IID_UnixIO, NUM_UNIXIO_METHODS},
         {NULL, NULL, 0UL}
     };
     
     struct TagItem tags[] =
     {
         {aMeta_SuperID,                     (IPTR)CLID_Hidd},
         {aMeta_InterfaceDescr,              (IPTR)ifdescr},
         {aMeta_ID,                  (IPTR)CLID_UnixIO_Hidd},
         {aMeta_InstSize,            (IPTR)sizeof (struct UnixIOData) },
         {TAG_DONE, 0UL}
     };
 
     ...

     cl = NewObjectA(NULL, CLID_HIDDMeta, tags);


Bugs
~~~~
::

     InterfaceDescr->NumMethods field was originally intended to specify
     size of internal method table. When creating a new interface (i. e.
     if this is your own interface), you need to be sure that the value
     you set there is equal to highest possible method number + 1.
     
     Since v42.1 oop.library always ensures that methods table has enough
     entries to accomodate all defined methods. NumMethods field in interface
     descriptor is effectively ignored and is present only for backwards
     compatibility.



----------

aoMeta_SuperID
==============

Synopsis
~~~~~~~~
::

     [I..], CONST_STRPTR


Function
~~~~~~~~
::

     ID of public class that will be superclass of class to be created.



----------

aoMeta_SuperPtr
===============

Synopsis
~~~~~~~~
::

     [I..], OOP_Class *


Function
~~~~~~~~
::

     Pointer to private class that will be superclass to
     class created.



----------

moRoot_Dispose
==============

Synopsis
~~~~~~~~
::

     See OOP_DisposeObject() doc.


Function
~~~~~~~~
::

     Used internally to dispose of an object previously
     created using the moRoot_New method.



----------

moRoot_Get
==========

Synopsis
~~~~~~~~
::

     OOP_GetAttr(OOP_Object *object, ULONG attrID, IPTR *storage);


Function
~~~~~~~~
::

     Get the value for an object attribute.
     The attribute value will be stored in *storage.


Example
~~~~~~~
::

     ..
     ULONG num_members;
     
     OOP_GetAttr(list, aList_NumMembers, &num_members);



----------

moRoot_New
==========

Synopsis
~~~~~~~~
::

     See OOP_NewObject() doc.


Function
~~~~~~~~
::

     Creates a new object of some class. Class users should use OOP_NewObject() to
     create an object.



----------

moRoot_Set
==========

Synopsis
~~~~~~~~
::

     OOP_SetAttrs() (OOP_Object *object, struct TagItem *attrs);


Function
~~~~~~~~
::

     Set an attribute of an object.



----------

OOP_AddClass()
==============

Synopsis
~~~~~~~~
::

 VOID OOP_AddClass(
          OOP_Class  * classPtr );

Function
~~~~~~~~
::

     Adds a class to the public list of classes.
     This means that any process can create objects of this
     class.


Inputs
~~~~~~
::

     classPtr - Pointer to the class to make public.


Result
~~~~~~
::

     None.


Bugs
~~~~
::

     Would be faster to use a hashtable to look up class IDs



See also
~~~~~~~~

`OOP_RemoveClass()`_ 

----------

OOP_DisposeObject()
===================

Synopsis
~~~~~~~~
::

 VOID OOP_DisposeObject(
          OOP_Object  * obj );

Function
~~~~~~~~
::

     Delete an object that was previously allocated with OOP_NewObject().


Inputs
~~~~~~
::

     obj     - pointer to object to dispose.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`OOP_NewObject()`_ 

----------

OOP_FindClass()
===============

Synopsis
~~~~~~~~
::

 APTR OOP_FindClass(
          CONST_STRPTR classID );

Function
~~~~~~~~
::

     Finds a class with given ID in the list of public classes.


Inputs
~~~~~~
::

     classID  - Public ID of the class to find.


Result
~~~~~~
::

     Pointer to a public class or NULL if there's no such class



See also
~~~~~~~~

`OOP_AddClass()`_ 

----------

OOP_GetAttr()
=============

Synopsis
~~~~~~~~
::

 IPTR OOP_GetAttr(
          OOP_Object             * object,
          OOP_AttrID attrID,
          IPTR           * storage );

Function
~~~~~~~~
::

     Gets the specifed attribute from the object,
     and puts it into storage.


Inputs
~~~~~~
::

     object  - pointer to object from which we want to
               get an attribute.
               
     attrID  - Attribute ID for property to get.
     
     storage - Pointer to IPTR the fetched data should be put into.


Result
~~~~~~
::

     Undefined.



See also
~~~~~~~~

`OOP_SetAttrs()`_ 

----------

OOP_GetAttrBase()
=================

Synopsis
~~~~~~~~
::

 OOP_AttrBase OOP_GetAttrBase(
          CONST_STRPTR interfaceID );

Function
~~~~~~~~
::

     Maps a globally unique string interface ID into
     a numeric AttrBase ID that is unique on
     pr. machine basis. IMPORTANT: You MUST
     be sure that at least one class implementing
     specified interface is initialized at the time calling
     this function. This function is especially useful
     for a class to get AttrBases of the interfaces
     it implements.


Inputs
~~~~~~
::

     interfaceID     - globally unique interface identifier.


Result
~~~~~~
::

     Numeric AttrBase that is unique for this machine.
     There are NO error conditions.



----------

OOP_GetMethod()
===============

Synopsis
~~~~~~~~
::

 OOP_MethodFunc OOP_GetMethod(
          OOP_Object  * obj,
          OOP_MethodID mid,
          OOP_Class ** classPtr );

Function
~~~~~~~~
::

     Get a specific method function for a specific object and
     a specific interface. This a direct pointer to the method
     implementation. The pointer should ONLY be used on the object you
     acquired.


Inputs
~~~~~~
::

     obj      - pointer to object to get method for.
     mid      - method id for method to get. This may be obtained with GetMethodID()
     classPtr - A pointer to a location where implementation class pointer will be stored.
                The obtained method must be called with this class pointer. This pointer
                is mandatory!


Result
~~~~~~
::

     The method asked for, or NULL if the method does not exist in
     the object's class.


Notes
~~~~~
::

     !!! Use with EXTREME CAUTION. Very few programs need the extra speed gained
         by calling a method directly
     !!!



See also
~~~~~~~~

`OOP_GetMethodID()`_ 

----------

OOP_GetMethodID()
=================

Synopsis
~~~~~~~~
::

 OOP_MethodID OOP_GetMethodID(
          CONST_STRPTR interfaceID,
          ULONG methodOffset );

Function
~~~~~~~~
::

     Maps a globally unique full method ID
     (Interface ID + method offset) into
     a numeric method ID.


Inputs
~~~~~~
::

     interfaceID     - globally unique interface identifier.
     methodOffset    - offset to the method in this interface.
     


Result
~~~~~~
::

     Numeric method identifier that is unique for this machine.



----------

OOP_NewObject()
===============

Synopsis
~~~~~~~~
::

 APTR OOP_NewObject(
          struct OOP_IClass  * classPtr,
          CONST_STRPTR classID,
          struct TagItem * tagList );
 
 APTR OOP_NewObjectTags(
          struct OOP_IClass  * classPtr,
          CONST_STRPTR classID,
          TAG tag, ... );

Function
~~~~~~~~
::

     Creates a new object of given class based on the TagItem
     parameters passed.


Inputs
~~~~~~
::

     classPtr - pointer to a class. Use this if the class to
                create an instance of is private.
     classID  - Public ID of the class to create an instance of.
                Use this if the class is public.
     tagList  - List of TagItems (creation time attributes),
                that specifies what initial properties the new
                object should have.



Result
~~~~~~
::

     Pointer to the new object, or NULL if object creation failed.


Notes
~~~~~
::

     You should supply one of classPtr and classID, never
     both. Use NULL for the unspecified one.



See also
~~~~~~~~

`OOP_DisposeObject()`_ 

----------

OOP_ObtainAttrBase()
====================

Synopsis
~~~~~~~~
::

 OOP_AttrBase OOP_ObtainAttrBase(
          CONST_STRPTR interfaceID );

Function
~~~~~~~~
::

     Maps a globally unique string interface ID into
     a numeric AttrBase ID that is unique on a
     per machine basis. The AttrBase can be combined
     with attribute offsets to generate attribute IDs.


Inputs
~~~~~~
::

     interfaceID     - globally unique interface identifier.
                       for which to obtain an attrbase.


Result
~~~~~~
::

     Numeric AttrBase that is unique for this machine.
     A return value of 0 means that the call failed.


Example
~~~~~~~
::

     #define aTimer_CurrentTime    (__AB_Timer + aoTime_CurrentTime)
     
     ..
     __AB_Timer = OOP_ObtainAttrBase(IID_Timer);
     
     SetAttrs(timer, aTimer_CurrentTime, "10:37:00");
     


Notes
~~~~~
::

     Obtained attrbases should be released with ReleaseAttrBase().



----------

OOP_ObtainAttrBases()
=====================

Synopsis
~~~~~~~~
::

 BOOL OOP_ObtainAttrBases(
          const struct OOP_ABDescr * abd );


----------

OOP_ObtainAttrBasesArray()
==========================

Synopsis
~~~~~~~~
::

 ULONG OOP_ObtainAttrBasesArray(
          OOP_AttrBase * bases,
          CONST_STRPTR const * ids );

Function
~~~~~~~~
::

     Obtain several attribute base IDs, storing them in linear array.


Inputs
~~~~~~
::

     bases - a pointer to array to fill in
     ids   - a NULL-terminated array of interface IDs


Result
~~~~~~
::

     Zero on success or number of failed bases on failure. Failed
     entries will be set to 0.



See also
~~~~~~~~

`OOP_ReleaseAttrBasesArray()`_ 

----------

OOP_ObtainMethodBasesArray()
============================

Synopsis
~~~~~~~~
::

 ULONG OOP_ObtainMethodBasesArray(
          OOP_MethodID * bases,
          CONST_STRPTR const * ids );

Function
~~~~~~~~
::

     Obtain several method ID bases, storing them in linear array.


Inputs
~~~~~~
::

     bases - a pointer to array to fill in
     ids   - a NULL-terminated array of interface IDs


Result
~~~~~~
::

     Zero on success or number of failed bases on failure. Failed array
     entries will be set to -1.


Notes
~~~~~
::

     Method IDs are owned by particular class, and are released when
     the class is destroyed. Thus, there is no ReleaseMethodBasesArray()
     function.



----------

OOP_ParseAttrs()
================

Synopsis
~~~~~~~~
::

 LONG OOP_ParseAttrs(
          struct TagItem * tags,
          IPTR * storage,
          ULONG numattrs,
          OOP_AttrCheck * attrcheck,
          OOP_AttrBase attrbase );

Function
~~~~~~~~
::

     Parse a taglist of attributes and put the result in an array.
     It will only parse the attr from a single interface
     which is indicated by the 'attrbase' parameter.


Inputs
~~~~~~
::

     tags - tags to be parsed.
     storage - array where the tag values will be stored.
               To get the value for a certain tag just use
               ao#? attribute offset as an index into the array.
               The array must be of size 'numattrs', ie. the number
               of attributes in the interface.
               
     numattrs - number of attributes in the interface.
     attrcheck - will is a flag that where flags will be set according
                 to the attributes' offset. Since this is only 32
                 bytes you can only parse interfaces
                 with <= 32 attributes with this function.
                 If you try with more, you will get a
                 ooperr_ParseAttrs_TooManyAttrs error.
                 The flags will be set like this if an attr is found:
                 
                 attrcheck |= 1L << attribute_offset
                 
     attrbase - attrbase for the interface whise attrs we should look for.
                 


Result
~~~~~~
::

     0 for success, and an error otherwise.
     Possible values are:
             ooperr_ParseAttrs_TooManyAttrs.



----------

OOP_ReleaseAttrBase()
=====================

Synopsis
~~~~~~~~
::

 VOID OOP_ReleaseAttrBase(
          CONST_STRPTR interfaceID );

Function
~~~~~~~~
::

     Release an OOP_AttrBase previosly obtained with
     OOP_ObtainAttrBase()
     


Inputs
~~~~~~
::

     interfaceID     - globally unique interface identifier.
                       for which to release an attrbase.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The call must be paired with OOP_ObtainAttrBase().



----------

OOP_ReleaseAttrBases()
======================

Synopsis
~~~~~~~~
::

 VOID OOP_ReleaseAttrBases(
          const struct OOP_ABDescr * abd );


----------

OOP_ReleaseAttrBasesArray()
===========================

Synopsis
~~~~~~~~
::

 void OOP_ReleaseAttrBasesArray(
          OOP_AttrBase * bases,
          CONST_STRPTR const * ids );

Function
~~~~~~~~
::

     Release several attribute ID bases, stored in linear array.


Inputs
~~~~~~
::

     bases - a pointer to array of bases
     ids   - a NULL-terminated array of corresponding interface IDs


Result
~~~~~~
::

     None


Notes
~~~~~
::

     It is legal to have some entries in the array not filled in
     (equal to 0). They will be skipped.



See also
~~~~~~~~

`OOP_ObtainAttrBasesArray()`_ 

----------

OOP_RemoveClass()
=================

Synopsis
~~~~~~~~
::

 void OOP_RemoveClass(
          OOP_Class * classPtr );

Function
~~~~~~~~
::

     Remove a class from the list of public classes.
     The class must have previously added with AddClass().
     

Inputs
~~~~~~
::

     classPtr - Pointer to class that should be removed.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`OOP_AddClass()`_ 

----------

OOP_SetAttrs()
==============

Synopsis
~~~~~~~~
::

 IPTR OOP_SetAttrs(
          OOP_Object     * object,
          struct TagItem * attrList );
 
 IPTR OOP_SetAttrsTags(
          OOP_Object     * object,
          TAG tag, ... );

Function
~~~~~~~~
::

     Sets the object's attributes as specified in the
     supplied taglist.


Inputs
~~~~~~
::

     object  - pointer to a object in whih we
               want to set attributes.
              
     tagList -  List of attributes and their new values.


Result
~~~~~~
::

     Undefined.



See also
~~~~~~~~

`OOP_DisposeObject()`_ 

