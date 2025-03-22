========
lowlevel
========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddKBInt()`_                           `AddTimerInt()`_                        `AddVBlankInt()`_                       `ElapsedTime()`_                        
`GetKey()`_                             `GetLanguageSelection()`_               `QueryKeys()`_                          `ReadJoyPort()`_                        
`RemKBInt()`_                           `RemTimerInt()`_                        `RemVBlankInt()`_                       `SetJoyPortAttrsA()`_                   
`StartTimerInt()`_                      `StopTimerInt()`_                       `SystemControlA()`_                     
======================================= ======================================= ======================================= ======================================= 

-----------

AddKBInt()
==========

Synopsis
~~~~~~~~
::

 APTR AddKBInt(
          APTR intRoutine,
          APTR intData );

Function
~~~~~~~~
::

        register a callback that is called whenever a keyboard
        input event occurs.


Inputs
~~~~~~
::

     intRoutine - the routine to invoke every vblank. This routine should
                  be as short as possible to minimize its effect on overall
                  system performance.
     intData - data passed to the routine in register A1. If more than one
               long word of data is required this should be a pointer to
               a structure that contains the required data.



----------

AddTimerInt()
=============

Synopsis
~~~~~~~~
::

 APTR AddTimerInt(
          APTR intRoutine,
          APTR intData );

Function
~~~~~~~~
::


 Add a callback function that should be executed every time the timer
 interrupt triggers.
 
 The timer will be allocated, but not configured or enabled - StartIntTimer()
 must be called to initalize the correct paramaters.


Inputs
~~~~~~
::


 intRoutine  --  the callback function to invoke each vertical blank
 intData     --  data passed to the callback function


Result
~~~~~~
::


 A handle used to manipulate the interrupt or NULL if the call failed.


Bugs
~~~~
::

     This function is unimplemented.



----------

AddVBlankInt()
==============

Synopsis
~~~~~~~~
::

 APTR AddVBlankInt(
          APTR intRoutine,
          APTR intData );

Function
~~~~~~~~
::


 Add a callback function that should be executed every vertical blank.
 If your program can exit without rebooting the machine, RemVBlankInt()
 has to be called prior to exiting.
     Only one interrupt routine may be added; always check the return
 value of this function in case some other program already has used this
 function.


Inputs
~~~~~~
::


 intRoutine  --  the callback function to invoke each vertical blank
 intData     --  data passed to the callback function


Result
~~~~~~
::


 A handle used to manipulate the interrupt or NULL if the call failed.



See also
~~~~~~~~

`RemVBlankInt()`_ 

----------

ElapsedTime()
=============

Synopsis
~~~~~~~~
::

 ULONG ElapsedTime(
          struct EClockVal * context );

Bugs
~~~~
::

     This function is unimplemented.



----------

GetKey()
========

Synopsis
~~~~~~~~
::

 ULONG GetKey();

Function
~~~~~~~~
::

     returns the currently pressed 'qualifier' and 'key' combination.


Inputs
~~~~~~
::

     none


Result
~~~~~~
::

     0xFF if no key is pressed otherwise it returns the actual key in the low word,
     and qualifier in the high word -:
     
     'qualifier'     key equivalent
     LLKB_LSHIFT     Left Shift
     LLKB_RSHIFT     Rigt Shift
     LLKB_CAPSLOCK   Caps Lock
     LLKB_CONTROL    Control
     LLKB_LALT       Left Alt
     LLKB_RALT       Right Alt
     LLKB_LAMIGA     Left Amiga
     LLKB_RAMIGA     Right Amiga



----------

GetLanguageSelection()
======================

Synopsis
~~~~~~~~
::

 ULONG GetLanguageSelection();


----------

QueryKeys()
===========

Synopsis
~~~~~~~~
::

 VOID QueryKeys(
          struct KeyQuery * queryArray,
          UBYTE arraySize );

Bugs
~~~~
::

     This function is unimplemented.



----------

ReadJoyPort()
=============

Synopsis
~~~~~~~~
::

 ULONG ReadJoyPort(
          ULONG port );

Notes
~~~~~
::

     This function isn't implemented on all platforms.



----------

RemKBInt()
==========

Synopsis
~~~~~~~~
::

 VOID RemKBInt(
          APTR intHandle );

Function
~~~~~~~~
::

        remove a keyboard interrupt previously registerd
        with addkbint.



----------

RemTimerInt()
=============

Synopsis
~~~~~~~~
::

 VOID RemTimerInt(
          APTR intHandle );

Bugs
~~~~
::

     This function is unimplemented.



----------

RemVBlankInt()
==============

Synopsis
~~~~~~~~
::

 VOID RemVBlankInt(
          APTR intHandle );

Function
~~~~~~~~
::


 Remove a vertical blank interrupt routine previously added by a call to
 AddVBlankInt().


Inputs
~~~~~~
::


 intHandle  --  return value from AddVBlankInt(); may be NULL in which case
                this function is a no-op.



See also
~~~~~~~~

`AddVBlankInt()`_ 

----------

SetJoyPortAttrsA()
==================

Synopsis
~~~~~~~~
::

 BOOL SetJoyPortAttrsA(
          ULONG portNumber,
          struct TagItem * tagList );
 
 BOOL SetJoyPortAttrs(
          ULONG portNumber,
          TAG tag, ... );


----------

StartTimerInt()
===============

Synopsis
~~~~~~~~
::

 VOID StartTimerInt(
          APTR intHandle,
          ULONG timeInterval,
          BOOL continuous );

Bugs
~~~~
::

     This function is unimplemented.



----------

StopTimerInt()
==============

Synopsis
~~~~~~~~
::

 VOID StopTimerInt(
          APTR intHandle );

Bugs
~~~~
::

     This function is unimplemented.



----------

SystemControlA()
================

Synopsis
~~~~~~~~
::

 ULONG SystemControlA(
          struct TagItem * tags );
 
 ULONG SystemControl(
          TAG tag, ... );

Bugs
~~~~
::

     This functions implementation is incomplete.



