==========
rexxsyslib
==========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`ClearRexxMsg()`_                       `CreateArgstring()`_                    `CreateRexxMsg()`_                      `DeleteArgstring()`_                    
`DeleteRexxMsg()`_                      `FillRexxMsg()`_                        `IsRexxMsg()`_                          `LengthArgstring()`_                    
`LockRexxBase()`_                       `UnlockRexxBase()`_                     
======================================= ======================================= ======================================= ======================================= 

-----------

ClearRexxMsg()
==============

Synopsis
~~~~~~~~
::

 VOID ClearRexxMsg(
          struct RexxMsg * msgptr,
          ULONG count );

Function
~~~~~~~~
::

     This function will clear a specified number of arguments by calling
     DeleteArgstring on them.


Inputs
~~~~~~
::

     msgptr - RexxMsg to clear the arguments from
     count  - The number of arguments in the message to clear


Result
~~~~~~
::

     void



See also
~~~~~~~~

`FillRexxMsg()`_ `DeleteArgstring()`_ 

----------

CreateArgstring()
=================

Synopsis
~~~~~~~~
::

 UBYTE * CreateArgstring(
          CONST UBYTE * string,
          ULONG length );

Function
~~~~~~~~
::

     This function will create a RexxArg structure and copy the supplied
     string into it.


Inputs
~~~~~~
::

     string - String to copy into the RexxArg structure
     length - Length of the string to copy.


Result
~~~~~~
::

     A pointer to the string part of the allocated RexxArg structure.


Notes
~~~~~
::

     Pointer to the string returned by this function may be used as a
     null terminated C string but should be considered read-only.



See also
~~~~~~~~

`DeleteArgstring()`_ `LengthArgstring()`_ 

----------

CreateRexxMsg()
===============

Synopsis
~~~~~~~~
::

 struct RexxMsg * CreateRexxMsg(
          struct MsgPort * port,
          UBYTE          * extension,
          UBYTE          * host );

Function
~~~~~~~~
::

     Creation and initialization of a RexxMsg structure


Inputs
~~~~~~
::

     port      - ReplyPort where the message is replied when it has been
                 handled
     extension - The filename extension to use when searching for macros
     host      - Name of the port to use as the initial command host
                 (e.g. as used in the ADDRESS Rexx statement). When NULL
                 is given "REXX" will be used.


Result
~~~~~~
::

     Pointer to the freshly allocated RexxMsg.



See also
~~~~~~~~

`DeleteRexxMsg()`_ `IsRexxMsg()`_ `FillRexxMsg()`_ `ClearRexxMsg()`_ 

----------

DeleteArgstring()
=================

Synopsis
~~~~~~~~
::

 VOID DeleteArgstring(
          UBYTE * argstring );

Function
~~~~~~~~
::

     Deletes a RexxArg structure previously created with CreateArgstring


Inputs
~~~~~~
::

     Pointer to the string part of the RexxArg structure returned from
     CreateArgstring


Result
~~~~~~
::

     void



See also
~~~~~~~~

`CreateArgstring()`_ 

----------

DeleteRexxMsg()
===============

Synopsis
~~~~~~~~
::

 VOID DeleteRexxMsg(
          struct RexxMsg * packet );

Function
~~~~~~~~
::

      Deletes a RexxMsg structure


Inputs
~~~~~~
::

      packet - The RexxMsg to delete.


Result
~~~~~~
::

      void



See also
~~~~~~~~

`CreateRexxMsg()`_ 

----------

FillRexxMsg()
=============

Synopsis
~~~~~~~~
::

 BOOL FillRexxMsg(
          struct RexxMsg * msgptr,
          ULONG count,
          ULONG mask );

Function
~~~~~~~~
::

     This function will convert the value(s) provided in rm_Args of the
     RexxMsg. The input can be either a string or a number.


Inputs
~~~~~~
::

     msgptr - RexxMsg to create the RexxArgs for.
     count  - The number of ARGs in the rm_Args structure field that is
              filled with a value and has to be converted.
     mask   - Bits 0 to 'count' from this mask indicate whether the
              corresponding value in rm_Args is a string or a number. When
              the bit is cleared the value is a pointer to a string. When
              it is set it is treated as a signed integer.


Result
~~~~~~
::

     Returns TRUE if succeeded, FALSE otherwise. When FALSE is returned all
     memory already allocated will be freed before returning.


Example
~~~~~~~
::

     This code will convert a string and a number to RexxArgs:

     struct RexxMsg *rm;

     ...

     rm->rm_Args[0] = "Test";
     rm->rm_Args[1] = (UBYTE *)5;

     if (!FillRexxMsg(rm, 2, 1<<1))
     ...



See also
~~~~~~~~

`ClearRexxMsg()`_ `CreateRexxMsg()`_ `CreateArgstring()`_ 

----------

IsRexxMsg()
===========

Synopsis
~~~~~~~~
::

 BOOL IsRexxMsg(
          struct RexxMsg * msgptr );

Function
~~~~~~~~
::

     Test to see if given Message is a RexxMsg


Inputs
~~~~~~
::

     msgptr - Message to test


Result
~~~~~~
::

     TRUE if it is one, FALSE otherwise



See also
~~~~~~~~

`CreateRexxMsg()`_ 

----------

LengthArgstring()
=================

Synopsis
~~~~~~~~
::

 ULONG LengthArgstring(
          UBYTE * argstring );

Function
~~~~~~~~
::

     This will return the length of a string created with CreateArgstring


Inputs
~~~~~~
::

     argstring - Pointer to the string part of a RexxArg structure returned
                 from CreateArgstring


Result
~~~~~~
::

     length of the argstring



See also
~~~~~~~~

`CreateArgstring()`_ 

----------

LockRexxBase()
==============

Synopsis
~~~~~~~~
::

 VOID LockRexxBase(
          ULONG resource );


----------

UnlockRexxBase()
================

Synopsis
~~~~~~~~
::

 VOID UnlockRexxBase(
          ULONG resource );


