===========
commodities
===========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`ActivateCxObj()`_                      `AddIEvents()`_                         `AttachCxObj()`_                        `BrokerCommand()`_                      
`ClearCxObjError()`_                    `CopyBrokerList()`_                     `CreateCxObj()`_                        `CxBroker()`_                           
`CxMsgData()`_                          `CxMsgID()`_                            `CxMsgType()`_                          `CxObjError()`_                         
`CxObjType()`_                          `DeleteCxObj()`_                        `DeleteCxObjAll()`_                     `DisposeCxMsg()`_                       
`DivertCxMsg()`_                        `EnqueueCxObj()`_                       `FreeBrokerList()`_                     `InsertCxObj()`_                        
`InvertKeyMap()`_                       `MatchIX()`_                            `ParseIX()`_                            `RemoveCxObj()`_                        
`RouteCxMsg()`_                         `SetCxObjPri()`_                        `SetFilter()`_                          `SetFilterIX()`_                        
`SetTranslate()`_                       
======================================= ======================================= ======================================= ======================================= 

-----------

ActivateCxObj()
===============

Synopsis
~~~~~~~~
::

 LONG ActivateCxObj(
          CxObj * co,
          LONG actv );

Function
~~~~~~~~
::


 Activates/deactivates a given commodity object. (An inactive object
 doesn't perform its function on its input - it just passes it on to
 the next object.) The activation depends on the value of 'actv'; if
 it's TRUE the object is activated, if it's FALSE it's deactivated.
     All objects are created in the active state except for brokers;
 remember to activate your broker when you have linked your other
 objects to it.


Inputs
~~~~~~
::


 co   - a pointer to a commodity object
 actv - boolean telling whether the object should be activated or
        deactivated


Result
~~~~~~
::


 The activation state of the object prior to the operation. (0 is
 also returned if 'co' was NULL.)



See also
~~~~~~~~

`CxBroker()`_ 

----------

AddIEvents()
============

Synopsis
~~~~~~~~
::

 VOID AddIEvents(
          struct InputEvent * events );

Function
~~~~~~~~
::


 Send input events though the commodity hierarchy. After the call the
 list of InputEvents may be disposed.


Inputs
~~~~~~
::


 events  --  a NULL-terminated linked list of InputEvents (may be NULL).



----------

AttachCxObj()
=============

Synopsis
~~~~~~~~
::

 VOID AttachCxObj(
          CxObj * headObj,
          CxObj * co );

Function
~~~~~~~~
::


 Add commodity object 'co' last in the list of objects of object
 'headObj'.


Inputs
~~~~~~
::


 headObj - pointer to a list of commodity objects
 co      - the object to add to the list



Result
~~~~~~
::


 If 'headObj' is NULL the entire tree of objects pointed to by 'co'
 is deleted. If 'co' is NULL, this is recorded in the error field of
 'headObj'.



See also
~~~~~~~~

`CxObjError()`_ `ClearCxObjError()`_ 

----------

BrokerCommand()
===============

Synopsis
~~~~~~~~
::

 ULONG BrokerCommand(
          STRPTR name,
          ULONG command );

Function
~~~~~~~~
::


 Notify a task connected to a certain broker of a state change.


Inputs
~~~~~~
::


 name     --  The name of the broker
 command  --  What to tell the task


Result
~~~~~~
::


 0 if everything was OK, a negative value otherwise:
 -1    --   Unknown broker 'name'
 -2    --   No broker message port
 -3    --   No memory for operation


Notes
~~~~~
::


 This function is present in AmigaOS too but undocumented.



----------

ClearCxObjError()
=================

Synopsis
~~~~~~~~
::

 VOID ClearCxObjError(
          CxObj * co );

Function
~~~~~~~~
::


 Clears the accumulated error of the commodity object 'co'.


Inputs
~~~~~~
::


 co  --  the object in question


Notes
~~~~~
::


 An error of type COERR_BADFILTER should not be cleared as this tells
 commodities that the filter in question is all right, and this is not
 what you want. Set a correct filter (via SetFilter() or SetFilterIX())
 or don't change the error value.
 


See also
~~~~~~~~

`CxObjError()`_ 

----------

CopyBrokerList()
================

Synopsis
~~~~~~~~
::

 LONG CopyBrokerList(
          struct List * CopyofList );

Function
~~~~~~~~
::


 Get a copy of the internal list of brokers.


Inputs
~~~~~~
::


 CopyofList -- pointer to a list


Result
~~~~~~
::


 The number of brokers in the list. The elements of the input list will
 be deallocated.


Notes
~~~~~
::


 This function is present in AmigaOS too but undocumented.



----------

CreateCxObj()
=============

Synopsis
~~~~~~~~
::

 CxObj * CreateCxObj(
          ULONG type,
          IPTR arg1,
          IPTR arg2 );

Function
~~~~~~~~
::


 Creates a commodity object of type 'type'. This function should never
 be called directly; instead, use the macros defined in <libraries/
 commodties.h>. Brokers, however, should be created with the CxBroker()
 function.


Inputs
~~~~~~
::


 type  -  the type of the commodity object to be created. Possible
          types are defined in <libraries/commodities.h>.
 arg1  -  depends on the value of 'type' above.
 arg2  -  depends on the value of 'type' above.


Result
~~~~~~
::


 The commodity object or NULL if it couldn't be created. Not so severe
 problems in the creation process are recorded in an internal field
 retrievable with CxObjError(). These errors are defined in <libraries/
 commodities.h>


Notes
~~~~~
::


 This 'CxObj *' that is returned from this function (and from CxBroker())
 is the reference to your commodity object. It shall be used whenever
 dealing with your commodity objects (functions operating on commodity
 objects and so on).



See also
~~~~~~~~

`CxObjError()`_ `CxBroker()`_ cx_lib/CxSender() cx_lib/CxSignal() cx_lib/CxFilter() cx_lib/CxTranslate() cx_lib/CxCustom() cx_lib/CxDebug() 

----------

CxBroker()
==========

Synopsis
~~~~~~~~
::

 CxObj * CxBroker(
          struct NewBroker * nb,
          LONG * error );

Function
~~~~~~~~
::


 Create a commodity broker from the specifications found in the structure
 pointed to by 'nb'. The NewBroker structure is described in <Libraries/
 Commodities.h>, see this file for more info. After the call, the
 NewBroker structure isn't needed anymore and may be discarded.


Inputs
~~~~~~
::


 nb    --  pointer to an initialized NewBroker structure
 error --  pointer to a LONG where the possible error of the CxBroker
           function is stored (may be NULL)


Result
~~~~~~
::


 A pointer to a commodity broker, or NULL upon failure.  If 'error' is
 NULL, no error information is stored. The possible error types are

 CBERR_OK       --  everything went just fine

 CBERR_SYSERR   --  system problems, typically not enough memory

 CBERR_DUP      --  another broker with the same name already exists
                    (and your nb_Unique indicates that only one is
                    allowed)

 CBERR_VERSION  --  the version found in nb_Version is unknown to the
                    library



See also
~~~~~~~~

`SetCxObjPri()`_ `libraries/commodities.h </documentation/developers/headerfiles/libraries/commodities.h>`_ 

----------

CxMsgData()
===========

Synopsis
~~~~~~~~
::

 APTR CxMsgData(
          CxMsg * cxm );

Function
~~~~~~~~
::


 Get the data of a commodities message. Messages can be sent from
 both sender object and custom object. In the first case the data is
 no longer valid after you replied to the message.


Inputs
~~~~~~
::


 cxm  -  the message the data of which is to be retrieved (may be NULL).


Result
~~~~~~
::


 A pointer to the message's data or NULL if message was NULL. The type
 of the data depends on the type of the message.



See also
~~~~~~~~

cx_lib/CxSender() cx_lib/CxCustom() 

----------

CxMsgID()
=========

Synopsis
~~~~~~~~
::

 LONG CxMsgID(
          CxMsg * cxm );

Function
~~~~~~~~
::


 Retrieve the ID of a certain CxMsg 'cxm'. (IDs for sender and custom
 objects are supplied by the user when the objects are created.)


Inputs
~~~~~~
::


 cxm     --  the message in question (may NOT be NULL)


Result
~~~~~~
::


 The ID of the message 'cxm'. If not specified by the application the ID
 is 0.



See also
~~~~~~~~

cx_lib/CxSender() cx_lib/CxCustom() 

----------

CxMsgType()
===========

Synopsis
~~~~~~~~
::

 ULONG CxMsgType(
          CxMsg * cxm );

Function
~~~~~~~~
::


 Obtain the type of the commodity message 'cxm'.


Inputs
~~~~~~
::


 cxm - The message the type of which is to be determined (may NOT be
       NULL).


Result
~~~~~~
::


 The type of 'cxm'. The available types of commodity messages is defined
 in <libraries/commodities.h>.



----------

CxObjError()
============

Synopsis
~~~~~~~~
::

 LONG CxObjError(
          CxObj * co );

Function
~~~~~~~~
::


 Obtain the ackumulated error of commodity object 'co'.


Inputs
~~~~~~
::


 co  -  the object the error of which to get


Result
~~~~~~
::


 The ackumulated error of the object 'co'. See <libraries/commodities.h>
 for the possible errors.



See also
~~~~~~~~

`ClearCxObjError()`_ 

----------

CxObjType()
===========

Synopsis
~~~~~~~~
::

 ULONG CxObjType(
          CxObj * co );

Function
~~~~~~~~
::


 Obtain the type of the commodity object 'co'.


Inputs
~~~~~~
::


 co  --  the object the type of which to get


Result
~~~~~~
::


 The type of the object 'co'. See <libraries/commodities.h> for the
 possible types. If 'co' is NULL, CX_INVALID is returned.



See also
~~~~~~~~

`CreateCxObj()`_ 

----------

DeleteCxObj()
=============

Synopsis
~~~~~~~~
::

 VOID DeleteCxObj(
          CxObj * co );

Function
~~~~~~~~
::


 Delete the commodity object 'co'. By deleting, it's meant that the
 memory used for the object is freed and if the object was in the
 commodity hierarchy, it's removed.


Inputs
~~~~~~
::


 co  --  the object to be deleted (may be NULL)


Notes
~~~~~
::


 After deleting the commodity object, the handle 'co' is no longer valid.
 Deleteing an object that has other objects attached to it is (that
 should be deleted too) is easiest accomplished by using the
 DeleteCxObjAll() function.



See also
~~~~~~~~

`DeleteCxObjAll()`_ 

----------

DeleteCxObjAll()
================

Synopsis
~~~~~~~~
::

 VOID DeleteCxObjAll(
          CxObj * co );

Function
~~~~~~~~
::


 Delete object and and all objects connected to commodity object 'co'.
 Handy for instances like when you are shutting down your commodity.
 To remove your commodity tree, just DeleteCxObjAll(YourBroker).


Inputs
~~~~~~
::


 co  --  the object in question (may be NULL)


Notes
~~~~~
::


 The handle 'co' is invalid after the operation.



See also
~~~~~~~~

`DeleteCxObj()`_ 

----------

DisposeCxMsg()
==============

Synopsis
~~~~~~~~
::

 VOID DisposeCxMsg(
          CxMsg * cxm );

Function
~~~~~~~~
::


 Delete the commodity message 'cxm'. This function can be used to
 swallow all InputEvents by disposing every commodity message of type
 CXM_IEVENT.


Inputs
~~~~~~
::


 cxm  -  the commodity message to delete (must NOT be NULL)


Notes
~~~~~
::


 This function can only be used within the context of the input handler,
 and not from within a commodities' context; that is if you for instance
 get a CXM_IEVENT CxMsg from a commodity sender object, you must
 ReplyMsg() it instead of Disposing it.



----------

DivertCxMsg()
=============

Synopsis
~~~~~~~~
::

 VOID DivertCxMsg(
          CxMsg * cxm,
          CxObj * headObj,
          CxObj * returnObj );

Function
~~~~~~~~
::


 Send the commodity message 'cxm' down the list of objects connected to
 'headObj' and set the destination to 'returnObj'. This means that when
 the message has travelled through the objects within the 'headObj' tree,
 the _successor_ of returnObj will receive the message.


Inputs
~~~~~~
::


 cxm       -- the message to be diverted.
 headObj   -- the start object
 returnObj -- the successor of this object will get the message after
              travelling through 'headObj' and friends.


Example
~~~~~~~
::


 When a filter gets a message that matches with its description, it
 sends the message down its list using:

     DivertCxMsg(msg, filter, filter);



See also
~~~~~~~~

`RouteCxMsg()`_ 

----------

EnqueueCxObj()
==============

Synopsis
~~~~~~~~
::

 VOID EnqueueCxObj(
          CxObj * headObj,
          CxObj * co );

Function
~~~~~~~~
::


 Insert commodity object 'co' into the list of objects connected to
 'headObj' according to the priority of 'co'. (The priority of an object
 can be set by the function SetCxObjPri().)


Inputs
~~~~~~
::


 headObj - the object to which 'co' shall be inserted.
 co      - a pointer to a commodity object


Result
~~~~~~
::


 If 'headObj' is NULL, the object 'co' and all objects connected to it
 are deleted. If 'co' is NULL and 'headObj' is a valid object, the
 latter's accumulated error will be adjusted to incorporate
 COERR_NULLATTACH.


Notes
~~~~~
::


 For nodes with equal priority, this function inserts object like within
 a FIFO queue.



See also
~~~~~~~~

`SetCxObjPri()`_ `CxObjError()`_ `ClearCxObjError()`_ `libraries/commodities.h </documentation/developers/headerfiles/libraries/commodities.h>`_ 

----------

FreeBrokerList()
================

Synopsis
~~~~~~~~
::

 VOID FreeBrokerList(
          struct List * brokerList );

Function
~~~~~~~~
::


 Free the list of brokers obtained by calling GetBrokerList.


Inputs
~~~~~~
::


 brokerList  --  List of commodity brokers (a list of struct BrokerCopy
                 nodes).


Notes
~~~~~
::


 This function is present in AmigaOS too, but undocumented.



----------

InsertCxObj()
=============

Synopsis
~~~~~~~~
::

 VOID InsertCxObj(
          CxObj * headObj,
          CxObj * co,
          CxObj * pred );

Function
~~~~~~~~
::


 Insert commodity object 'co' into the list of object connected to
 'headObj' after the object 'pred'.


Inputs
~~~~~~
::


 headObj  -  poiter to a list of objects to which 'co' shall be inserted
 co       -  commodity object to be inserted (may be NULL)
 pred     -  the object 'co' shall be inserted after (may be NULL)


Result
~~~~~~
::


 If 'headObj' is NULL, the object 'co' and all objects connected to it
 are deleted. If 'co' is NULL and 'headObj' is a valid object, the
 latter's accumulated error will be adjusted to incorporate
 COERR_NULLATTACH. If 'pred' is NULL, the object will be inserted first
 in the list.



See also
~~~~~~~~

`CxObjError()`_ `ClearCxObjError()`_ 

----------

InvertKeyMap()
==============

Synopsis
~~~~~~~~
::

 BOOL InvertKeyMap(
          ULONG ansiCode,
          struct InputEvent * event,
          struct KeyMap     * km );

Function
~~~~~~~~
::


 Translate a given ANSI character code to an InputEvent. The InputEvent
 pointed to by 'event' is initialized to match the 'ansiCode'. The
 translation is done using the keymap 'km'. If 'km' is NULL, the default
 system keymap is used.


Inputs
~~~~~~
::


 ansiCode  -  the ANSI character code to be translated
 event     -  the inputevent that will contain the translation
 km        -  keymap used for the translation (if 'km' is NULL the system
              default keymap is used).


Result
~~~~~~
::


 TRUE if the translation was successful, otherwise FALSE.


Bugs
~~~~
::


 Only one-deep dead keys are handled, for instance <alt f>e. It doesn't
 look up the high key map (keycodes with scan codes greater than 0x40).



See also
~~~~~~~~

cx_lib/InvertString() 

----------

MatchIX()
=========

Synopsis
~~~~~~~~
::

 BOOL MatchIX(
          struct InputEvent * event,
          IX * ix );

Function
~~~~~~~~
::


 Check if an input event matches an input expression.


Inputs
~~~~~~
::


 event  --  the input event to match against the input expression
 ix     --  the input expression


Result
~~~~~~
::


 TRUE if the input event matches the input expression, FALSE otherwise.


Notes
~~~~~
::


 Applications don't normally need this function as filter objects take
 care of the event filtering. However, this function is in some cases
 nice to have.



See also
~~~~~~~~

`libraries/commodities.h </documentation/developers/headerfiles/libraries/commodities.h>`_ `ParseIX()`_ 

----------

ParseIX()
=========

Synopsis
~~~~~~~~
::

 LONG ParseIX(
          CONST_STRPTR desc,
          IX * ix );

Function
~~~~~~~~
::


 Fill in an InputXpression 'ix' according to the specifications given
 in the string pointed to by 'desc'.

 The string should be formatted according to:

 [class] {[-] (qualifier|synonym)} [[-] upstroke] [HighMap|ANSICode]

 For more information on this, consult "xxx/CxParse.doc".


Inputs
~~~~~~
::


 desc  --  pointer to the string specifying the conditions and codes of
           the InputXpression.
 ix    --  pointer to an (uninitizlized) InputXpression structure that
           will be filled according to 'desc'.


Result
~~~~~~
::


 0   --  Everything went OK.
 -1  --  Tokens after end
 -2  --  'desc' was NULL



See also
~~~~~~~~

`MatchIX()`_ `libraries/commodities.h </documentation/developers/headerfiles/libraries/commodities.h>`_ 

----------

RemoveCxObj()
=============

Synopsis
~~~~~~~~
::

 VOID RemoveCxObj(
          CxObj * co );

Function
~~~~~~~~
::


 Removes 'co' from the lists it's in. The function handles smoothly the
 cases when 'co' is NULL or haven't been inserted in a list.


Inputs
~~~~~~
::


 co  --  the commodity object to remove (may be NULL)



See also
~~~~~~~~

`AttachCxObj()`_ `EnqueueCxObj()`_ `InsertCxObj()`_ 

----------

RouteCxMsg()
============

Synopsis
~~~~~~~~
::

 VOID RouteCxMsg(
          CxMsg * cxm,
          CxObj * co );

Function
~~~~~~~~
::


 Set the next destination of a commodity message to be 'co'.
 ('co' must be a valid commodity object and linked in to the commodities
 hierarchy.)


Inputs
~~~~~~
::


 cxm  -  the commodity message to route (may NOT be NULL)
 co   -  the commodity object to route the message to (may NOT be NULL)



See also
~~~~~~~~

`DivertCxMsg()`_ 

----------

SetCxObjPri()
=============

Synopsis
~~~~~~~~
::

 LONG SetCxObjPri(
          CxObj * co,
          LONG pri );

Function
~~~~~~~~
::


 Set the priority of the commodity object 'co'.


Inputs
~~~~~~
::


 co   --  the commodity object the priority of which to change (may be
          NULL)
 pri  --  the new priority to give the object (priorities range from
          -128 to 127, a value of 0 is normal)


Result
~~~~~~
::


 The old priority, that is the priority of the object prior to this
 operation.


Bugs
~~~~
::


 When using this function, the object is NOT repositioned according to
 the priority given. To achive this, remove the object from the commodity
 hierarchy using RemoveCxObj(), use SetCxPri() and reinsert it with
 EnqueueCxObj().



See also
~~~~~~~~

`EnqueueCxObj()`_ 

----------

SetFilter()
===========

Synopsis
~~~~~~~~
::

 VOID SetFilter(
          CxObj * filter,
          STRPTR text );

Function
~~~~~~~~
::


 Make 'filter' match events of the type specified in 'text'.


Inputs
~~~~~~
::


 filter  -  the commodity filter the matching conditions of which to set
 text    -  description telling what to filter


Result
~~~~~~
::


 The internal error field will be updated (COERR_BADFILTER) according to
 the success or failure of the operation.



See also
~~~~~~~~

`SetFilterIX()`_ `CxObjError()`_ 

----------

SetFilterIX()
=============

Synopsis
~~~~~~~~
::

 VOID SetFilterIX(
          CxObj * filter,
          IX * ix );

Function
~~~~~~~~
::


 Set the filter description by supplying an InputXpression.


Inputs
~~~~~~
::


 filter  --  the commodity filter object the attributes of which to set
             (may be NULL)
 ix      --  InputXpression describing the filter


Result
~~~~~~
::


 The internal error field will be updated (COERR_BADFILTER) depending on
 whether the function succeeded or failed.


Notes
~~~~~
::


 The first field in the IX structure must be set to IX_VERSION as
 defined in <libraries/commodities.h>, to indicate which version of
 the IX structure is used.



See also
~~~~~~~~

`SetFilter()`_ `CxObjError()`_ `libraries/commodities.h </documentation/developers/headerfiles/libraries/commodities.h>`_ 

----------

SetTranslate()
==============

Synopsis
~~~~~~~~
::

 VOID SetTranslate(
          CxObj * translator,
          struct InputEvent * events );

Function
~~~~~~~~
::


 Set translation (a list of input events) for a commodity translator
 object.


Inputs
~~~~~~
::


 translator  --  the commodity translator the translation result of which
                 to set (may be NULL)
 events      --  the new input event list


Notes
~~~~~
::


 If events is set to NULL, all commodity messages passed to the object
 are swallowed. Neither commodities.library nor any other commodities
 user will change your list of InputEvents; however, it will be used
 asynchronously to the application program which means you shouldn't
 in any way corrupt the chain.



See also
~~~~~~~~

cx_lib/CxTranslate() `devices/inputevent.h </documentation/developers/headerfiles/devices/inputevent.h>`_ 

