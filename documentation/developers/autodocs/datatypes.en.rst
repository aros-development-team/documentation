=========
datatypes
=========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddDTObject()`_                        `CopyDTMethods()`_                      `CopyDTTriggerMethods()`_               `DisposeDTObject()`_                    
`DoAsyncLayout()`_                      `DoDTDomainA()`_                        `DoDTMethodA()`_                        `DrawDTObjectA()`_                      
`FindMethod()`_                         `FindToolNodeA()`_                      `FindTriggerMethod()`_                  `FreeDTMethods()`_                      
`GetDTAttrsA()`_                        `GetDTMethods()`_                       `GetDTString()`_                        `GetDTTriggerMethodDataFlags()`_        
`GetDTTriggerMethods()`_                `LaunchToolA()`_                        `LockDataType()`_                       `NewDTObjectA()`_                       
`ObtainDataTypeA()`_                    `ObtainDTDrawInfoA()`_                  `PrintDTObjectA()`_                     `RefreshDTObjectA()`_                   
`ReleaseDataType()`_                    `ReleaseDTDrawInfo()`_                  `RemoveDTObject()`_                     `SaveDTObjectA()`_                      
`SetDTAttrsA()`_                        `StartDragSelect()`_                    
======================================= ======================================= ======================================= ======================================= 

-----------

AddDTObject()
=============

Synopsis
~~~~~~~~
::

 LONG AddDTObject(
          struct Window    * win,
          struct Requester * req,
          Object           * obj,
          LONG pos );

Function
~~~~~~~~
::


 Add an object to the window 'win' or requester 'req' at the position
 in the gadget list specified by the 'pos' argument.


Inputs
~~~~~~
::

 
 win  --  window the object should be added to; may be NULL in which case
          nothing is done
 req  --  requester the object should be added to
 obj  --  the object to add; may be NULL in which case nothing is done
 pos  --  the position of the object in the list



Result
~~~~~~
::


 The position where the object was added (may be different from what
 you asked for).


Notes
~~~~~
::


 The object will receice a GM_LAYOUT message with the gpl_Initial field
 set to 1 when the object is added.



See also
~~~~~~~~

`RemoveDTObject()`_ `intuition.library/AddGList() <./intuition#addglist>`_ 

----------

CopyDTMethods()
===============

Synopsis
~~~~~~~~
::

 ULONG * CopyDTMethods(
          ULONG * methods,
          ULONG * include,
          ULONG * exclude );

Function
~~~~~~~~
::


 Copy and modify an array of methods. This is used by subclass implementors
 who want to add supported methods to an existing class.


Inputs
~~~~~~
::


 methods  --  array of methods; may be NULL
 include  --  array of methods to include terminated with ~0UL; may be NULL
 method   --  array of methods to exclude terminated with ~0UL; may be NULL.


Result
~~~~~~
::


 The new array of methods or NULL if something went wrong (like out of
 memory).



See also
~~~~~~~~

`FindMethod()`_ `CopyDTTriggerMethods()`_ `FreeDTMethods()`_ 

----------

CopyDTTriggerMethods()
======================

Synopsis
~~~~~~~~
::

 struct DTMethod * CopyDTTriggerMethods(
          struct DTMethod * methods,
          struct DTMethod * include,
          struct DTMethod * exclude );

Function
~~~~~~~~
::


 Copy and modify an array of DTMethod:s. This is used by subclass
 implementors who want to add supported methods to an existing class.


Inputs
~~~~~~
::


 methods  --  array of methods; may be NULL
 include  --  array of methods to include terminated with ~0UL; may be NULL
 method   --  array of methods to exclude terminated with ~0UL; may be NULL
              the dtm_Command and dtm_Method fields may have the options
              described in the FindTriggerMethod to filter out the given
              entries

Result
~~~~~~
::


 The new array of methods or NULL if something went wrong (like out of
 memory).


Notes
~~~~~
::


 dtm_Label and dtm_Command must be valid as long as the object exists as
 they are not copied.
     A subclass that implment DTM_TRIGGER must send unknown trigger
 methods to its superclass.



See also
~~~~~~~~

`FindTriggerMethod()`_ `CopyDTMethods()`_ `FreeDTMethods()`_ 

----------

DisposeDTObject()
=================

Synopsis
~~~~~~~~
::

 void DisposeDTObject(
          Object * o );

Function
~~~~~~~~
::


 Dispose a data type object obtained by NewDTObjectA().


Inputs
~~~~~~
::


 o   --  The data type object to dispose of; may be NULL.



See also
~~~~~~~~

`NewDTObjectA()`_ 

----------

DoAsyncLayout()
===============

Synopsis
~~~~~~~~
::

 ULONG DoAsyncLayout(
          Object * object,
          struct gpLayout * gpl );

Function
~~~~~~~~
::


 Perform an object's DTM_ASYNCLAYOUT method -- doing it asynchronously
 off loads the input.device. The method should exit when a SIGBREAK_CTRL_C
 is received; this signal means that the data is obsolete and the
 method will be called again.


Inputs
~~~~~~
::


 object  --  pointer to data type object
 gpl     --  gpLayout message pointer



----------

DoDTDomainA()
=============

Synopsis
~~~~~~~~
::

 ULONG DoDTDomainA(
          Object           * o,
          struct Window    * win,
          struct Requester * req,
          struct RastPort  * rport,
          ULONG which,
          struct IBox      * domain,
          struct TagItem   * attrs );
 
 ULONG DoDTDomain(
          Object           * o,
          struct Window    * win,
          struct Requester * req,
          struct RastPort  * rport,
          ULONG which,
          struct IBox      * domain,
          TAG tag, ... );

Function
~~~~~~~~
::


 Obtain the maximum/minimum/nominal domains of a data type object.


Inputs
~~~~~~
::


 o       --  data type object in question
 win     --  window that the object is attached to
 req     --  requester the object is attached to
 rport   --  rastport; used for domain calculations
 which   --  the domain to obtain (GDOMAIN_, see <intuition/gadgetclass.h>
 domain  --  the result will be put here
 attrs   --  additional attributes (subclass specific)


Result
~~~~~~
::


 The return value of GM_DOMAIN or 0 if an error occurred. The 'domain'
 IBox will be filled with the requested values as a side effect.


Notes
~~~~~
::


 This function requires an object to perform the GM_DOMAIN method. To
 achieve similar results without an object, you must use CoerceMethodA()
 manually.



See also
~~~~~~~~

`intuition/gadgetclass.h </documentation/developers/headerfiles/intuition/gadgetclass.h>`_ 

----------

DoDTMethodA()
=============

Synopsis
~~~~~~~~
::

 IPTR DoDTMethodA(
          Object           * o,
          struct Window    * win,
          struct Requester * req,
          Msg msg );
 
 IPTR DoDTMethod(
          Object           * o,
          struct Window    * win,
          struct Requester * req,
          TAG tag, ... );

Function
~~~~~~~~
::


 Perform a specific datatypes methodl.


Inputs
~~~~~~
::


 o    --  pointer to data type object
 win  --  window the object is attached to
 req  --  requester the object is attached to
 msg  --  the message to send to the object


Result
~~~~~~
::


 The value returned by the specified method.
 


See also
~~~~~~~~

`intuition.library/DoGadgetMethodA() <./intuition#dogadgetmethoda>`_ 

----------

DrawDTObjectA()
===============

Synopsis
~~~~~~~~
::

 LONG DrawDTObjectA(
          struct RastPort * rp,
          Object          * o,
          LONG x,
          LONG y,
          LONG w,
          LONG h,
          LONG th,
          LONG tv,
          struct TagItem  * attrs );
 
 LONG DrawDTObject(
          struct RastPort * rp,
          Object          * o,
          LONG x,
          LONG y,
          LONG w,
          LONG h,
          LONG th,
          LONG tv,
          TAG tag, ... );

Function
~~~~~~~~
::


 Draw a data type object into a RastPort. You must have successfully
 called ObtainDTDrawInfoA before calling this function; it invokes the
 object's DTM_DRAW method.


Inputs
~~~~~~
::


 rp     --  pointer to the RastPort to draw the object into
 o      --  pointer to the data type object to draw
 x      --  left edge of drawing area
 y      --  top edge of drawing area
 w      --  width of drawing area
 h      --  height of drawing area
 th     --  horizontal top in units
 tv     --  vertical top in units
 attrs  --  additional attributes


Tags
~~~~
::


 ADTA_Frame for animationclass objects (selects the frame that should be
 drawn.


Result
~~~~~~
::


 TRUE if rendering went OK, FALSE if failure.


Notes
~~~~~
::


 The RastPort in question must support clipping, i.e. have a valid
 layer structure attached to it; if not, some datatypes can't draw
 and FALSE will be returned.



See also
~~~~~~~~

`ObtainDataTypeA()`_ 

----------

FindMethod()
============

Synopsis
~~~~~~~~
::

 ULONG * FindMethod(
          ULONG * methods,
          ULONG searchmethodid );

Function
~~~~~~~~
::


 Search for a specific method in a array of methods.


Inputs
~~~~~~
::


 methods         --  array of methods; may be NULL
 searchmethodid  --  method to search for


Result
~~~~~~
::


 Pointer to method table entry or NULL if the method wasn't found.



See also
~~~~~~~~

`GetDTMethods()`_ `CopyDTMethods()`_ 

----------

FindToolNodeA()
===============

Synopsis
~~~~~~~~
::

 struct ToolNode * FindToolNodeA(
          struct List    * toollist,
          struct TagItem * attrs );
 
 struct ToolNode * FindToolNode(
          struct List    * toollist,
          TAG tag, ... );

Function
~~~~~~~~
::


 Search for a specific tool in a list of given tool nodes.


Inputs
~~~~~~
::


 toollist  --  a list or a struct ToolNode * (which will be skipped) to
               search in; may be NULL.

 attrs     --  search tags; if NULL, the result of the function will
               simply be the following node.


Tags
~~~~
::


 TOOLA_Program     --  name of the program to search for

 TOOLA_Which       --  one of the TW_#? types

 TOOLA_LaunchType  --  launch mode: TF_SHELL, TF_WORKBENCH or TF_RX


Result
~~~~~~
::


 A pointer to a ToolNode describing the search result (NULL for failure).


Notes
~~~~~
::


 The entries in dt->dtn_ToolList are valid as long as a lock is kept on
 the data type 'dt' (ObtainDataTypeA() or LockDataType()).



See also
~~~~~~~~

`LaunchToolA()`_ 

----------

FindTriggerMethod()
===================

Synopsis
~~~~~~~~
::

 struct DTMethod * FindTriggerMethod(
          struct DTMethod * methods,
          STRPTR command,
          ULONG method );

Function
~~~~~~~~
::


 Search for a specific trigger method in a array of trigger methods (check
 if either 'command' or 'method' matches).


Inputs
~~~~~~
::


 methods  --  array of trigger methods; may be NULL
 command  --  name of trigger method (may be NULL; if so, 'command'
                     is not matched against)
 method   --  id of trigger method to search for (may be ~0; if so, don't
              match against 'method'.


Result
~~~~~~
::


 Pointer to trigger method table entry (struct DTMethod *) or NULL if the
 method wasn't found.



See also
~~~~~~~~

`GetDTTriggerMethods()`_ `CopyDTTriggerMethods()`_ 

----------

FreeDTMethods()
===============

Synopsis
~~~~~~~~
::

 VOID FreeDTMethods(
          APTR methods );

Function
~~~~~~~~
::


 Free array obtained from CopyDTMethods() or CopyDTTriggerMethods().


Inputs
~~~~~~
::


 methods  --  array of methods; may be NULL



See also
~~~~~~~~

`CopyDTMethods()`_ `CopyDTTriggerMethods()`_ 

----------

GetDTAttrsA()
=============

Synopsis
~~~~~~~~
::

 ULONG GetDTAttrsA(
          Object         * o,
          struct TagItem * attrs );
 
 ULONG GetDTAttrs(
          Object         * o,
          TAG tag, ... );

Function
~~~~~~~~
::


 Get the attributes of a specific data type object.


Inputs
~~~~~~
::


 o      --  pointer to a data type object; may be NULL
 attrs  --  the attributes to get terminated with TAG_DONE; each Tag's
            data element should contain the address of the respective
            storage element; may be NULL
            
            <base attribs>
            
            DTA_DataType (#1)
            DTA_ObjName
            DTA_ObjAuthor
            DTA_ObjAnnotation
            DTA_ObjCopyright
            DTA_ObjVersion
            DTA_ObjectID


Result
~~~~~~
::


 The number of attributes obtained.


Notes
~~~~~
::


 (#1) - On AROS, the "DataType" an object returns may be a clone of
        the real entry, so that the subclass can override
        subformat information.



See also
~~~~~~~~

`SetDTAttrsA()`_ `intuition.library/GetAttr() <./intuition#getattr>`_ 

----------

GetDTMethods()
==============

Synopsis
~~~~~~~~
::

 ULONG * GetDTMethods(
          Object * object );

Function
~~~~~~~~
::


 Get a list of the methods an object supports.


Inputs
~~~~~~
::


 object   --  pointer to a data type object


Result
~~~~~~
::


 Pointer to a ULONG array which is terminated ~0; the array is only
 valid until the object is disposed of.



See also
~~~~~~~~

`GetDTTriggerMethods()`_ 

----------

GetDTString()
=============

Synopsis
~~~~~~~~
::

 CONST_STRPTR GetDTString(
          ULONG id );

Function
~~~~~~~~
::


 Get a pointer to a localized datatypes string.


Inputs
~~~~~~
::


 id   --  ID of the string to get


Result
~~~~~~
::


 Pointer to a NULL terminated string.



----------

GetDTTriggerMethodDataFlags()
=============================

Synopsis
~~~~~~~~
::

 ULONG GetDTTriggerMethodDataFlags(
          ULONG method );

Function
~~~~~~~~
::


 Get the kind of data that may be attached to the stt_Data field in the
 dtTrigger method body. The data type can be specified by or:ing the
 method id (within the STMF_METHOD_MASK value) with one of the STMD_
 identifiers.

 STMD_VOID     --  stt_Data must be NULL
 STMD_ULONG    --  stt_Data contains an unsigned value
 STMD_STRPTR   --  stt_Data is a pointer to a string
 STMD_TAGLIST  --  stt_Data points to an array of struct TagItem terminated
                   with TAG_DONE

 The trigger methods below STM_USER are explicitly handled as described in
 <datatypes/datatypesclass.h>.


Inputs
~~~~~~
::


 method  --  dtt_Method ID from struct DTMethod


Result
~~~~~~
::


 One of the STMD_ identifiers defined in <datatypes/datatypesclass.h>



See also
~~~~~~~~

`CopyDTTriggerMethods()`_ `FindTriggerMethod()`_ 

----------

GetDTTriggerMethods()
=====================

Synopsis
~~~~~~~~
::

 struct DTMethod * GetDTTriggerMethods(
          Object * object );

Function
~~~~~~~~
::


 Get a list of the trigger methods an object supports.


Inputs
~~~~~~
::


 object  --  pointer to a data type object


Result
~~~~~~
::


 A pointer to a STM_DONE terminated DTMethod list. This list in only valid
 until the object is disposed of.


Example
~~~~~~~
::


 To call the specific method, do the following:

 DoMethod(object, DTM_TRIGGER, myMethod);


Notes
~~~~~
::


 Some trigger methods requires an argument (calling these with a NULL
 argument is wrong). Use GetDTTriggerMethodDataFlags() to obtain the
 type of the requested argument.



See also
~~~~~~~~

`GetDTMethods()`_ 

----------

LaunchToolA()
=============

Synopsis
~~~~~~~~
::

 ULONG LaunchToolA(
          struct Tool * tool,
          STRPTR project,
          struct TagItem * attrs );
 
 ULONG LaunchTool(
          struct Tool * tool,
          STRPTR project,
          TAG tag, ... );

Function
~~~~~~~~
::


 Launch an application with a particular project.


Inputs
~~~~~~
::


 tool     --  tool to use (may be NULL in which case this function
              returns 0)
 project  --  name of the project to execute or NULL
 attrs    --  additional attributes


Tags
~~~~
::


 NP_Priority (BYTE) -- priority of the launched tool (default is the
                       priority of the currect process except for
                       Workbench applications where the default priority
                       is 0 if not overridden by the TOOLPRI tooltype).
                       
 NP_Synchronous (BOOL) -- don't return until lauched application process
                          finishes (defaults to FALSE).


Result
~~~~~~
::


 Zero for failure, non-zero otherwise.



See also
~~~~~~~~

`NewDTObjectA()`_ 

----------

LockDataType()
==============

Synopsis
~~~~~~~~
::

 VOID LockDataType(
          struct DataType * dt );

Function
~~~~~~~~
::


 Lock a DataType structure obtained from ObtainDataTypeA() or a data type
 object (DTA_DataType).


Inputs
~~~~~~
::


 dt  --  DataType structure; may be NULL


Notes
~~~~~
::


 Calls to LockDataType() and ObtainDataTypeA() must have a corresponding
 ReleaseDataType() call or else problems will arise.



See also
~~~~~~~~

`ObtainDataTypeA()`_ `ReleaseDataType()`_ 

----------

NewDTObjectA()
==============

Synopsis
~~~~~~~~
::

 Object * NewDTObjectA(
          APTR name,
          struct TagItem * attrs );
 
 Object * NewDTObject(
          APTR name,
          TAG tag, ... );

Function
~~~~~~~~
::


 Create a data type object from a BOOPSI class.


Inputs
~~~~~~
::


 name   --  name of the data source; generally an existing file name
 attrs  --  pointer to a TagList specifying additional arguments


Tags
~~~~
::


 DTA_SourceType  --  The type of source data (defaults to DTST_FILE).
                     If the source is the clipboard the name field
                     contains the numeric clipboard unit.

 DTA_Handle      --  Can be used instead of the 'name' field. If the
                     source is DTST_FILE, ths must be a valid FileHandle;
                     must be a valid IFFHandle if source is DTST_CLIPBOARD.

 DTA_DataType    --  The class of the data. Data is a pointer to a valid
                     DataType; only used when creating a new object that
                     doens't have any source data.

 DTA_GroupID     --  If the object isn't of this type, fail with an IoErr()
                     of ERROR_OBJECT_WRONG_TYPE.

 GA_Left
 GA_RelRight
 GA_Top
 GA_RelBottom
 GA_Width
 GA_RelWidth
 GA_Height
 GA_RelHeight    --  Specify the position of the object relative to the
                     window.

 GA_ID           --  ID of the object.

 GA_UserData     --  Application specific data for the object.

 GA_Previous     --  Previous object / gadget in the list.


Result
~~~~~~
::


 A BOOPSI object. This may be used in different contexts such as a gadget
 or image. NULL indicates failure -- in that case IoErr() gives more
 information:

 ERROR_REQUIRED_ARG_MISSING  --  A required attribute wasn't specified.
 
 ERROR_BAD_NUMBER            --  The group ID specified was invalid.

 ERROR_OBJECT_WRONG_TYPE     --  Object data type doesn't match DTA_GroupID.


Notes
~~~~~
::


 This function invokes the method OM_NEW for the specified class.

 The object should (eventually) be freed by DisposeDTObject() when no
 longer needed.



See also
~~~~~~~~

`AddDTObject()`_ `DisposeDTObject()`_ `RemoveDTObject()`_ `intuition.library/NewObjectA() <./intuition#newobjecta>`_ 

----------

ObtainDataTypeA()
=================

Synopsis
~~~~~~~~
::

 struct DataType * ObtainDataTypeA(
          ULONG type,
          APTR handle,
          struct TagItem * attrs );
 
 struct DataType * ObtainDataType(
          ULONG type,
          APTR handle,
          TAG tag, ... );

Function
~~~~~~~~
::

 Examine the data pointed to by 'handle'.


Inputs
~~~~~~
::

 type    --  specifies the stream-type of 'handle', using one of the following types;
             DTST_FILE - 'handle' is a BPTR lock
             DTST_CLIPBOARD - 'handle' is a struct IFFHandle *
             DTST_RAM - (v45) 'handle' is a STRPTR datatype-name
 handle  --  handle to return a datatype for.
 attrs   --  additional attributes.
             
             DTA_GroupID  -  (v45) (ULONG)
                             the group (GID_#?) to match.
                             0 is used as a wildcard value.

             DTA_DataType -  (v45) (struct DataType *)
                             starts/continues search from the specified
                             DataType. NULL has the same effect as not
                             using DTA_DataType.


Result
~~~~~~
::

 A pointer to a DataType or NULL if failure. IoErr() gives more information
 in the latter case:
 
 ERROR_NO_FREE_STORE     --  Not enough memory available
 ERROR_OBJECT_NOT_FOUND  --  Unable to open the data type object
 ERROR_NOT_IMPLEMENTED   --  Unknown handle type



See also
~~~~~~~~

`ReleaseDataType()`_ 

----------

ObtainDTDrawInfoA()
===================

Synopsis
~~~~~~~~
::

 APTR ObtainDTDrawInfoA(
          Object         * o,
          struct TagItem * attrs );
 
 APTR ObtainDTDrawInfo(
          Object         * o,
          TAG tag, ... );

Function
~~~~~~~~
::


 Prepare a data type object for drawing into a RastPort; this function
 will send the DTM_OBTAINDRAWINFO method the object using an opSet
 message.


Inputs
~~~~~~
::


 o      --  pointer to the data type object to obtain the drawinfo for;
            may be NULL in which case nothing is done
 attrs  --  additional attributes


Tags
~~~~
::


     None defined so far.


Result
~~~~~~
::


 A private handle that must be passed to ReleaseDTDrawInfo when the
 application is done drawing the object, or NULL if failure.



See also
~~~~~~~~

`DrawDTObjectA()`_ `ReleaseDTDrawInfo()`_ 

----------

PrintDTObjectA()
================

Synopsis
~~~~~~~~
::

 ULONG PrintDTObjectA(
          Object           * object,
          struct Window    * window,
          struct Requester * requester,
          struct dtPrint   * msg );
 
 ULONG PrintDTObject(
          Object           * object,
          struct Window    * window,
          struct Requester * requester,
          TAG tag, ... );

Function
~~~~~~~~
::


 Perform an object's DTM_PRINT method in an asynchronous manner.


Inputs
~~~~~~
::


 object     --  pointer to the data type object
 window     --  pointer to the window the object has been added to
 requester  --  pointer to the requester the object has been added to


Result
~~~~~~
::


 TRUE on success, FALSE otherwise.


Notes
~~~~~
::


 When an application has called PrintDTObjectA() it must not touch
 the printerIO union until a IDCMP_IDCMPUPDATE is received which
 contains the DTA_PrinterStatus tag.
     To abort a print, send the DTM_ABORTPRINT method to the object.
 This will signal the print process with a SIGBREAK_CTRL_C.



----------

RefreshDTObjectA()
==================

Synopsis
~~~~~~~~
::

 void RefreshDTObjectA(
          Object           * object,
          struct Window    * window,
          struct Requester * req,
          struct TagItem   * attrs );
 
 void RefreshDTObject(
          Object           * object,
          struct Window    * window,
          struct Requester * req,
          TAG tag, ... );

Function
~~~~~~~~
::


 Refresh a specified object sending the GM_RENDER message to the object.


Inputs
~~~~~~
::


 object   --  pointer to the data type object to refresh; may be NULL
 window   --  pointer to the window; may be NULL
 req      --  must be NULL
 attrs    --  additional attributes (currently none defined)



See also
~~~~~~~~

`AddDTObject()`_ `RemoveDTObject()`_ `intuition.library/RefreshGList() <./intuition#refreshglist>`_ 

----------

ReleaseDataType()
=================

Synopsis
~~~~~~~~
::

 VOID ReleaseDataType(
          struct DataType * dt );

Function
~~~~~~~~
::


 Release a DataType structure aquired by ObtainDataTypeA().


Inputs
~~~~~~
::


 dt  --  DataType structure as returned by ObtainDataTypeA(); NULL is
         a valid input.



See also
~~~~~~~~

`ObtainDataTypeA()`_ 

----------

ReleaseDTDrawInfo()
===================

Synopsis
~~~~~~~~
::

 VOID ReleaseDTDrawInfo(
          Object * o,
          APTR handle );

Function
~~~~~~~~
::


 Release the handle obtained from ObtainDTDrawInfoA(); invokes the object's
 DTM_RELEASEDRAWINFO method sending the dtReleaseDrawInfo message.


Inputs
~~~~~~
::


 o       --  pointer to the data type object the drawinfo of which to
             release; may be NULL
 handle  --  handle got from ObtainDTDrawInfoA()


Result
~~~~~~
::


 A private handle that must be passed to ReleaseDTDrawInfo when the
 application is done drawing the object, or NULL if failure.



See also
~~~~~~~~

`DrawDTObjectA()`_ `ObtainDTDrawInfoA()`_ 

----------

RemoveDTObject()
================

Synopsis
~~~~~~~~
::

 LONG RemoveDTObject(
          struct Window * window,
          Object        * object );

Function
~~~~~~~~
::


 Remove an object from the specified window's object list; this will wait
 until the AsyncLayout process is ready. The object will receive a message
 of type DTM_REMOVEDTOBJECT as a sign of it having been removed.


Inputs
~~~~~~
::


 window  --  pointer to the window in question
 object  --  pointer to the object to remove


Result
~~~~~~
::


 The position of the object in the list before it was removed; if the
 object wasn't found -1 is returned.



See also
~~~~~~~~

`AddDTObject()`_ `intuition.library/RemoveGList() <./intuition#removeglist>`_ 

----------

SaveDTObjectA()
===============

Synopsis
~~~~~~~~
::

 ULONG SaveDTObjectA(
          Object           * o,
          struct Window    * win,
          struct Requester * req,
          STRPTR file,
          ULONG mode,
          BOOL saveicon,
          struct TagItem   * attrs );
 
 ULONG SaveDTObject(
          Object           * o,
          struct Window    * win,
          struct Requester * req,
          STRPTR file,
          ULONG mode,
          BOOL saveicon,
          TAG tag, ... );

Function
~~~~~~~~
::


 Save the contents of an object to a file using DTM_WRITE.


Inputs
~~~~~~
::


 o         --  data type object to write to a file
 win       --  window the object is attached to
 req       --  requester the object is attached to
 file      --  name of the file to save the object to
 mode      --  save mode (RAW, IFF etc.), one of the DTWM_ identifiers
 saveicon  --  should an icon be saved together with the file
 attrs     --  additional attributes (these are subclass specific)


Result
~~~~~~
::


 The return value of DTM_WRITE.


Notes
~~~~~
::


 If DTM_WRITE returns 0, the file will be deleted.



----------

SetDTAttrsA()
=============

Synopsis
~~~~~~~~
::

 ULONG SetDTAttrsA(
          Object * o,
          struct Window    * win,
          struct Requester * req,
          struct TagItem   * attrs );
 
 ULONG SetDTAttrs(
          Object * o,
          struct Window    * win,
          struct Requester * req,
          TAG tag, ... );

Function
~~~~~~~~
::


 Set the attributes of a data type object.


Inputs
~~~~~~
::


 o      --  pointer to the data type object the attributes of which to set
 win    --  window that the object has been added to
 attrs  --  attributes to set (terminated with TAG_DONE)
            tags are specified in <datatypes/datatypesclass.h>



See also
~~~~~~~~

`GetDTAttrsA()`_ `intuition.library/SetGadgetAttrsA() <./intuition#setgadgetattrsa>`_ `datatypes/datatypesclass.h </documentation/developers/headerfiles/datatypes/datatypesclass.h>`_ 

----------

StartDragSelect()
=================

Synopsis
~~~~~~~~
::

 ULONG StartDragSelect(
          Object * o );

Function
~~~~~~~~
::


 Start drag-selection by the user; the drag selection will only start
 if the object in question supports DTM_SELECT, is in a window or
 requester and no layout-process is working on the object.


Inputs
~~~~~~
::


 o   --  data type object in question; may be NULL


Result
~~~~~~
::


 TRUE if all went OK, FALSE otherwise. If FALSE, IoErr() gives further
 information:

 ERROR_ACTION_NOT_KNOWN   --  the object doesn't support DTM_SELECT
 ERROR_OBJECT_IN_USE      --  the object is currently occupied



