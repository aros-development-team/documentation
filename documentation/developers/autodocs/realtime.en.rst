========
realtime
========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`CreatePlayerA()`_                      `DeletePlayer()`_                       `ExternalSync()`_                       `FindConductor()`_                      
`GetPlayerAttrsA()`_                    `LockRealTime()`_                       `NextConductor()`_                      `SetConductorState()`_                  
`SetPlayerAttrsA()`_                    `UnlockRealTime()`_                     
======================================= ======================================= ======================================= ======================================= 

-----------

CreatePlayerA()
===============

Synopsis
~~~~~~~~
::

 struct Player * CreatePlayerA(
          struct TagItem * tagList );
 
 struct Player * CreatePlayer(
          TAG tag, ... );

Function
~~~~~~~~
::


 Create a player.


Inputs
~~~~~~
::


 tagList  --  pointer to an array of tags describing the player's
              attributes or NULL.


Tags
~~~~
::


 PLAYER_Name (STRPTR)         --  The name of the player; default is no
                                  name.

 PLAYER_Hook (struct Hook *)  --  Function to call every time the time
                                  changes; default is none. The hook is
                                  called with

                                  a0 -- address of Hook structure
                                  a1 -- message (see <libraries/realtime.h>)
                                  a2 -- address of Player structure

                                  Be aware of that the function is not
                                  necessarily called TICK_FREQ times per
                                  second: this is the upper limit of times
                                  it may be called.

 PLAYER_Priority (BYTE)       --  The priority of the player; default is 0.

 PLAYER_Conductor (STRPTR)    --  The name of the conductor to link the
                                  player to. If the conductor doesn't exist,
                                  it's created automatically. Passing ~0
                                  creates a private conductor.

 PLAYER_Ready (BOOL)          --  Set / clear the ready flag; default is
                                  TRUE.

 PLAYER_AlarmTime (LONG)      --  Set player's alarm time; implies setting
                                  the PLAYERF_ALARMSET flag.

 PLAYER_Alarm (BOOL)          --  Set / clear the PLAYERF_ALARMSET flag;
                                  default is FALSE.

 PLAYER_AlarmSigTask (struct Task *)
                              --  The task to signal when the alarm goes
                                  off; default is no task. If no task is
                                  specified PLAYERF_ALARMSET is turned
                                  off.

 PLAYER_AlarmSigBit (BYTE)    --  Signal bit to use for the alarm or -1
                                  to disable signalling; default is -1.

 PLAYER_Quiet (BOOL)          --  Specify whether this player should be
                                  ignored or not; default is FALSE.
                                  Generally only used by external sync
                                  applications.
                                  
 PLAYER_UserData (VOID *)     --  Set pointer to user specific data;
                                  default is NULL.

 PLAYER_ID (UWORD)            --  Set the player's ID; default is 0.

 PLAYER_Conducted (BOOL)      --  Set / clear the PLAYERF_CONDUCTED flag;
                                  default is FALSE.

 PLAYER_ExtSync (BOOL)        --  If TRUE, this player attempts to become
                                  the external sync source.

 PLAYER_ErrorCode (LONG *)    --  Optional pointer to a LONG that will
                                  contain an error code if the function
                                  fails. Possible error values are:

                                  RTE_NOMEMORY  --  memory allocation failed
                                  RTE_NOTIMER   --  timer allocation failed


Result
~~~~~~
::


 A pointer to a player structure or NULL if failure. In case of a failure
 additional information may be retreived from the LONG variable pointed
 to by PLAYER_ErrorCode if you have specified that tag.



See also
~~~~~~~~

`DeletePlayer()`_ `GetPlayerAttrsA()`_ `SetPlayerAttrsA()`_ 

----------

DeletePlayer()
==============

Synopsis
~~~~~~~~
::

 VOID DeletePlayer(
          struct Player * player );

Function
~~~~~~~~
::


 Delete a player. If this was the last player of a specific conductor,
 this conductor is deleted too.


Inputs
~~~~~~
::


 player  --  Player to delete; may be NULL in which case this function
             does nothing.



See also
~~~~~~~~

`CreatePlayerA()`_ 

----------

ExternalSync()
==============

Synopsis
~~~~~~~~
::

 BOOL ExternalSync(
          struct Player * player,
          LONG minTime,
          LONG maxTime );

Function
~~~~~~~~
::


 Constrain conductor time between 'minTime' and 'maxTime' (however, time
 can never run backwards). If the specified player isn't the current
 external synchronizing source, this function does nothing.


Inputs
~~~~~~
::


 player   --  The player in question
 minTime  --  Lower time bound
 maxTime  --  Upper time bound


Result
~~~~~~
::


 A BOOL specifying if the success of this function; FALSE means that the
 player was not the external source or that no conductor was found for
 the player.



----------

FindConductor()
===============

Synopsis
~~~~~~~~
::

 struct Conductor * FindConductor(
          STRPTR name );

Function
~~~~~~~~
::


 Get the conductor with name 'name' or NULL if no conductor exists
 with that name.


Inputs
~~~~~~
::


 name   --  The name of the conductor to find.


Result
~~~~~~
::


 A pointer to the conductor you wanted or NULL if it didn't exist.


Notes
~~~~~
::


 You have to lock the conductors with LockRealTime(RT_CONDUCTORS)
 before calling this function.



See also
~~~~~~~~

`NextConductor()`_ `LockRealTime()`_ `UnlockRealTime()`_ 

----------

GetPlayerAttrsA()
=================

Synopsis
~~~~~~~~
::

 BOOL GetPlayerAttrsA(
          struct Player  * player,
          struct TagItem * tagList );
 
 BOOL GetPlayerAttrs(
          struct Player  * player,
          TAG tag, ... );

Function
~~~~~~~~
::


 Query the attributes of a player. For each tagitem ti_Tag specifies the
 attribute and ti_Data a pointer to the IPTR variable in which you want
 the value to be stored.


Inputs
~~~~~~
::


 player   --  The player the attributes of which to set; may be NULL,
              in which case the result is 0.
 tagList  --  Pointer to an array of tags describing the player's
              attributes or NULL.


Tags
~~~~
::


 See CreatePlayerA().


Result
~~~~~~
::


 The number of items successfully filled in.



See also
~~~~~~~~

`CreatePlayerA()`_ `SetPlayerAttrsA()`_ 

----------

LockRealTime()
==============

Synopsis
~~~~~~~~
::

 APTR LockRealTime(
          ULONG lockType );

Function
~~~~~~~~
::


 Lock a RealTime.library internal semaphore.


Inputs
~~~~~~
::


 lockType  --  The type of lock to aquire, see <libraries/realtime.h> for
               further information.


Result
~~~~~~
::


 A handle to pass to UnlockRealTime() to unlock the semaphore. If 'lockType'
 is invalid, NULL is returned.



See also
~~~~~~~~

`UnlockRealTime()`_ 

----------

NextConductor()
===============

Synopsis
~~~~~~~~
::

 struct Conductor * NextConductor(
          struct Conductor * previousConductor );

Function
~~~~~~~~
::


 Return the next conductor on the conductor list. If 'previousConductor'
 is NULL, return the first conductor in the list; if not, return the
 conductor following 'previousConductor'. If 'previousConductor' is the
 last conductor, this function returns NULL.


Inputs
~~~~~~
::


 previousConductor  --  The previous conductor or NULL to get the first
                        conductor.


Result
~~~~~~
::


 A pointer to the next conductor or NULL if there are no more conductors.


Notes
~~~~~
::


 You have to lock the conductors with LockRealTime(RT_CONDUCTORS)
 before calling this function.



See also
~~~~~~~~

`FindConductor()`_ `LockRealTime()`_ `UnlockRealTime()`_ 

----------

SetConductorState()
===================

Synopsis
~~~~~~~~
::

 LONG SetConductorState(
          struct Player * player,
          ULONG state,
          LONG time );

Function
~~~~~~~~
::


 Changes the state of the conductor connected to a specified player.
 The possible states are
 
 CONDSTATE_STOPPED
 CONDSTATE_PAUSED
 CONDSTATE_LOCATE
 CONDSTATE_RUNNING

 other possible "states" are

 CONDSTATE_METRIC   --  Ask the highest priority conducted node to do a
                        CONDSTATE_LOCATE
 CONDSTATE_SHUTTLE  --  Inform the players that the clock value is
                        changing without the clock running



Inputs
~~~~~~
::


 player   --  The player in question
 state    --  The new state of the conductor
 time     --  Start time offset in realtime.library units


Result
~~~~~~
::


 0 if OK, otherwise an error code. For now, these are RTE_PLAYING and
 RTE_NOCONDUCTOR.


Notes
~~~~~
::


 Going from CONDSTATE_PAUSED to CONDSTATE_RUNNING does not reset the
 cdt_ClockTime of the conductor.



----------

SetPlayerAttrsA()
=================

Synopsis
~~~~~~~~
::

 BOOL SetPlayerAttrsA(
          struct Player  * player,
          struct TagItem * tagList );
 
 BOOL SetPlayerAttrs(
          struct Player  * player,
          TAG tag, ... );

Function
~~~~~~~~
::


 Sets the attributes of a player. An attribute not specified in the array
 of tags is unchanged after this procedure.


Inputs
~~~~~~
::


 player   --  The player the attributes of which to set.
 tagList  --  Pointer to an array of tags describing the player's
              attributes or NULL.


Tags
~~~~
::


 The same tags as for CreatePlayerA().


Result
~~~~~~
::


 Success/failure indicator. If failure, then, in case the PLAYER_ErrorCode
 is provided, more information can be obtained via that pointer.



See also
~~~~~~~~

`DeletePlayer()`_ `GetPlayerAttrsA()`_ 

----------

UnlockRealTime()
================

Synopsis
~~~~~~~~
::

 VOID UnlockRealTime(
          APTR lockHandle );

Function
~~~~~~~~
::


 Unlock a RealTime.library internal semaphore.


Inputs
~~~~~~
::


 lockHandle  --  Handle returned by LockRealTime(); may be NULL.



See also
~~~~~~~~

`LockRealTime()`_ 

