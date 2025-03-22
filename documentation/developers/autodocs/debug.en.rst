=====
debug
=====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`DecodeLocationA()`_                    `DisassembleCtx()`_                     `EnumerateSymbolsA()`_                  `FreeDisassembleCtx()`_                 
`GetCtxInstructionA()`_                 `InitDisassembleCtx()`_                 `RegisterModule()`_                     `UnregisterModule()`_                   

======================================= ======================================= ======================================= ======================================= 

-----------

DecodeLocationA()
=================

Synopsis
~~~~~~~~
::

 int DecodeLocationA(
          void * addr,
          struct TagItem * tags );
 
 int DecodeLocation(
          void * addr,
          TAG tag, ... );

Function
~~~~~~~~
::

     Locate the given address in the list of registered modules and return
     information about it.


Inputs
~~~~~~
::

     addr - An address to resolve
     tags - An optional taglist. ti_Tag can be one of the following tags and
            ti_Data is always a pointer to a storage of specified type.
            Resulting values will be placed into specified locations if the
            function succeeds.

         DL_ModuleName     (char *) - Module name
         DL_SegmentName    (char *) - Segment name. Can be NULL if there were
                                      no segment names provided for the module.
         DL_SegmentPointer (BPTR)   - DOS pointer to the corresponding segment.
                                      Note that it will be different from
                                      KDL_SegmentStart value
         
         DL_SegmentNumber  (unsigned int) - Order number of the segment in the
                                            module
         DL_SegmentStart   (void *) - Start address of actual segment contents
                                      in memory.
         DL_SegmentEnd     (void *) - End address of actual segment contents
                                      in memory.
         DL_FirstSegment   (BPTR) - DOS pointer to the first segment.

         The following tags may return NULL values if there was no corresponding
         information provided for the module:

         DL_SymbolName     (char *) - Symbol name (function or variable name)
         DL_SymbolStart    (void *) - Start address of contents described by this
                                      symbol.
         DL_SymbolEnd      (void *) - End address of contents described by this
                                      symbol.


Result
~~~~~~
::

     Zero if lookup failed and no corresponding module found, nonzero
     otherwise.


Notes
~~~~~
::

     If the function fails values pointed to by taglist will not be changed.



----------

DisassembleCtx()
================

Synopsis
~~~~~~~~
::

 IPTR DisassembleCtx(
          APTR ctx );

Function
~~~~~~~~
::

     Disassemble the next instruction for the given context handle.


Inputs
~~~~~~
::

     ctx             - Disassembly context handle.


Result
~~~~~~
::

     returns the size of the disassembled instruction.



----------

EnumerateSymbolsA()
===================

Synopsis
~~~~~~~~
::

 void EnumerateSymbolsA(
          struct Hook * handler,
          struct TagItem * tags );
 
 void EnumerateSymbols(
          struct Hook * handler,
          TAG tag, ... );

Function
~~~~~~~~
::

 Function will call the handler hook for all symbols from kickstart and
 loaded modules that match the given search criteria.

 The message that is passed to hook contains a pointer to struct SymbolInfo.



----------

FreeDisassembleCtx()
====================

Synopsis
~~~~~~~~
::

 void FreeDisassembleCtx(
          APTR ctx );

Function
~~~~~~~~
::

     Free the disassemble context


Inputs
~~~~~~
::

     ctx             - Disassembly context handle.



----------

GetCtxInstructionA()
====================

Synopsis
~~~~~~~~
::

 APTR GetCtxInstructionA(
          APTR ctx,
          struct TagItem * tags );
 
 APTR GetCtxInstruction(
          APTR ctx,
          TAG tag, ... );

Function
~~~~~~~~
::

     Get the requested attributes for the disasembled
             instruction, for the specified Disassembly context.


Inputs
~~~~~~
::

     ctx             - Disassembly context handle.
     tags    - Taglist of requested attributes.
                             DCIT_Instruction_Offset - instructions offset relative to the PC.
                             DCIT_Instruction_HexStr - instruction in hex format
                             DCIT_Instruction_Asm    - disassembled instruction


Result
~~~~~~
::

     number of handled attributes.



----------

InitDisassembleCtx()
====================

Synopsis
~~~~~~~~
::

 APTR InitDisassembleCtx(
          APTR start,
          APTR end,
          APTR pc );

Function
~~~~~~~~
::

     Initializes a disassembly context for the given inputs.


Inputs
~~~~~~
::

     start   - Start address of disassembly
     end     - End address of disassembly
     pc              - Program Counter value.


Result
~~~~~~
::

     returns a disassembly context handle.



----------

RegisterModule()
================

Synopsis
~~~~~~~~
::

 void RegisterModule(
          const char * name,
          BPTR segList,
          ULONG debugType,
          APTR debugInfo );

Function
~~~~~~~~
::

     Add information about the loaded executable module to the
     debug information database


Inputs
~~~~~~
::

     name      - Module name
     segList   - DOS segment list for the module
     debugType - Type of supplied debug information. The only currently
                 supported type is DEBUG_ELF.
     debugInfo - Debug information data. For DEBUG_ELF type this should be
                 a pointer to struct ELF_DebugInfo, filled in as follows:
                   eh - a pointer to ELF file header.
                   sh - a pointer to an array of ELF section headers.


Result
~~~~~~
::

     None



----------

UnregisterModule()
==================

Synopsis
~~~~~~~~
::

 void UnregisterModule(
          BPTR segList );

Function
~~~~~~~~
::

     Remove previously registered module from the debug information database


Inputs
~~~~~~
::

     segList - DOS segment list for the module to remove


Result
~~~~~~
::

     None


Notes
~~~~~
::

     The function correctly supports partial removal of the module
     (when an existing seglist is broken and only a part of the module
     is unloaded).



