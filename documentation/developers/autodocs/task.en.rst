====
task
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddTaskHook()`_                        `AllocTaskStorageSlot()`_               `FreeTaskStorageSlot()`_                `GetParentTaskStorageSlot()`_           
`GetTaskStorageSlot()`_                 `InitTaskHooks()`_                      `LockTaskList()`_                       `NextTaskEntry()`_                      
`QueryTaskTagList()`_                   `RestoreTaskStorage()`_                 `RunTaskHooks()`_                       `SaveTaskStorage()`_                    
`SetTaskStorageSlot()`_                 `UnLockTaskList()`_                     
======================================= ======================================= ======================================= ======================================= 

-----------

AddTaskHook()
=============

Synopsis
~~~~~~~~
::

 BOOL AddTaskHook(
          struct Hook * tHook,
          ULONG thType );


----------

AllocTaskStorageSlot()
======================

Synopsis
~~~~~~~~
::

 LONG AllocTaskStorageSlot();

Function
~~~~~~~~
::

     This function will allocate a slot in the task storage.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     The allocated SlotID, or 0 if no slotid could be allocated.


Notes
~~~~~
::

     After this function SetTaskStorageSlot(slotid) may be used to store
     values with each slotid.



See also
~~~~~~~~

`FreeTaskStorageSlot()`_ `GetTaskStorageSlot()`_ `SetTaskStorageSlot()`_ 

----------

FreeTaskStorageSlot()
=====================

Synopsis
~~~~~~~~
::

 void FreeTaskStorageSlot();

Function
~~~~~~~~
::

     This function will free a slot in task storage


Inputs
~~~~~~
::

     slotid - The slot id to free.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     Currently no checks are performed to determine if one is the owner
     of the slotid. This may be added in the future, so one should
     deallocate a slotid from the same task that allocated the slotid.



See also
~~~~~~~~

`AllocTaskStorageSlot()`_ 

----------

GetParentTaskStorageSlot()
==========================

Synopsis
~~~~~~~~
::

 IPTR GetParentTaskStorageSlot();

Function
~~~~~~~~
::

     Get a value for a task storage slot of parent task.


Inputs
~~~~~~
::

     slotid - slot ID returned from AllocTaskStorageSlot().


Result
~~~~~~
::

     Value stored by SetTaskStorageSlot() on parent task, or
     (IPTR)NULL if the slot was never used.


Notes
~~~~~
::

     Since you are accessing value of another task, the value
     might be invalid/freed by the time this function returns.
     To be sure value is still valid, call this function under
     Forbid().



See also
~~~~~~~~

`AllocTaskStorageSlot()`_ `FreeTaskStorageSlot()`_ `SetTaskStorageSlot()`_ `GetTaskStorageSlot()`_ 

----------

GetTaskStorageSlot()
====================

Synopsis
~~~~~~~~
::

 IPTR GetTaskStorageSlot();

Function
~~~~~~~~
::

     Get a value for a task storage slot.


Inputs
~~~~~~
::

     slotid - slot ID returned from AllocTaskStorageSlot().


Result
~~~~~~
::

     Value stored by SetTaskStorageSlot(), or (IPTR)NULL if the slot was
     never used.



See also
~~~~~~~~

`AllocTaskStorageSlot()`_ `FreeTaskStorageSlot()`_ `SetTaskStorageSlot()`_ 

----------

InitTaskHooks()
===============

Synopsis
~~~~~~~~
::

 BOOL InitTaskHooks(
          APTR thDispatcher,
          ULONG thType,
          ULONG thFlags );

Inputs
~~~~~~
::

         thDispatcher - default dispatcher used to call the hook.
         thType - Task Hook Type for the list.
         thFlags -
                         THF_ROA - Runs a TaskHook immidiately when it is added.
                         THF_IAR - Runs a TaskHook immidiately if the TaskHooks have been run.



----------

LockTaskList()
==============

Synopsis
~~~~~~~~
::

 struct TaskList * LockTaskList(
          ULONG flags );

Inputs
~~~~~~
::

     flags -
           LTF_WRITE     Lock The TaskList for writing
                         NB: In general software SHOULDNT
                             need to use this!

           LTF_RUNNING   Lock The TaskList to show running tasks.
           LTF_READY     Lock The TaskList to show ready tasks.
           LTF_WAITING   Lock The TaskList to show waiting/spinning tasks.
           LTF_ALL       Lock The TaskList to show all of the above tasks.


Result
~~~~~~
::

     Handle to the task list. This is not a direct pointer
     to the first list element but to a pseudo element instead.



See also
~~~~~~~~

`UnLockTaskList()`_ `NextTaskEntry()`_ 

----------

NextTaskEntry()
===============

Synopsis
~~~~~~~~
::

 struct Task * NextTaskEntry(
          struct TaskList * tlist,
          ULONG flags );

Function
~~~~~~~~
::

     Looks for the next task list entry with the right type. The list
     must be locked for this.


Inputs
~~~~~~
::

     tlist - the value given by LockTaskList()
     flags - the same flags as given to LockTaskList() or a subset
             of them.


Result
~~~~~~
::

     Pointer to task entry found or NULL if the are no more entries.



See also
~~~~~~~~

`LockTaskList()`_ `UnLockTaskList()`_ 

----------

QueryTaskTagList()
==================

Synopsis
~~~~~~~~
::

 void QueryTaskTagList(
          struct Task * task,
          struct TagItem * tagList );
 
 void QueryTaskTags(
          struct Task * task,
          TAG tag, ... );

Function
~~~~~~~~
::


     Provides information about selected system Task
 

Inputs
~~~~~~
::


     Function takes an array of tags. Data is returned for each tag. See
     specific tag description.


Tags
~~~~
::


     TaskTag_CPUNumber - (IPTR *) Returns the CPU Number the task is currently running on
     TaskTag_CPUAffinity - (IPTR *) Returns the CPU Affinity mask
     TaskTag_CPUTime - (struct timeval *) Returns the amount of cpu time a task has used .
     TaskTag_StartTime - (struct timeval *) Returns the time the task was launched .


Result
~~~~~~
::


     None



----------

RestoreTaskStorage()
====================

Synopsis
~~~~~~~~
::

 void RestoreTaskStorage();

Function
~~~~~~~~
::

     This function restores the current state of the task storage slotalloccnt.


Inputs
~~~~~~
::

     handle - ID returned from SaveTaskStorage() referring to the state.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`SaveTaskStorage()`_ 

----------

RunTaskHooks()
==============

Synopsis
~~~~~~~~
::

 BOOL RunTaskHooks(
          APTR thDispatcher,
          ULONG thType );


----------

SaveTaskStorage()
=================

Synopsis
~~~~~~~~
::

 APTR SaveTaskStorage();

Function
~~~~~~~~
::

     This function remembers the current state of the task storage slots.
     An ID will be returned with which the current state can be restored
     using RestoreTaskStorage(). NULL is returned when not enough memory
     is available.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     id - ID for use with RestoreTaskStorage(), or NULL.



See also
~~~~~~~~

`RestoreTaskStorage()`_ 

----------

SetTaskStorageSlot()
====================

Synopsis
~~~~~~~~
::

 BOOL SetTaskStorageSlot();

Function
~~~~~~~~
::

     Puts a new value in a task storage slot. If necessary, the number of
     task storage slotalloccnt will be increased.


Inputs
~~~~~~
::

     slotid - slot ID returned from AllocTaskStorageSlot().
     value - value to store in the slot.


Result
~~~~~~
::

     success - TRUE if the value was successfully stored.



See also
~~~~~~~~

`AllocTaskStorageSlot()`_ `FreeTaskStorageSlot()`_ `GetTaskStorageSlot()`_ 

----------

UnLockTaskList()
================

Synopsis
~~~~~~~~
::

 void UnLockTaskList(
          struct TaskList * tlist,
          ULONG flags );

Function
~~~~~~~~
::

     Frees a lock on the task lists given by LockTaskList().


Inputs
~~~~~~
::

     flags - the same value as given to LockTaskList().



See also
~~~~~~~~

`LockTaskList()`_ `NextTaskEntry()`_ 

