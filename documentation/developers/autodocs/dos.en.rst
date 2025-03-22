===
dos
===

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AbortPkt()`_                           `AddBuffers()`_                         `AddDosEntry()`_                        `AddPart()`_                            
`AddSegment()`_                         `AllocDosObject()`_                     `AssignAdd()`_                          `AssignAddToList()`_                    
`AssignLate()`_                         `AssignLock()`_                         `AssignPath()`_                         `AttemptLockDosList()`_                 
`ChangeMode()`_                         `CheckSignal()`_                        `Cli()`_                                `CliInit()`_                            
`CliInitNewcli()`_                      `CliInitRun()`_                         `Close()`_                              `CompareDates()`_                       
`CreateDir()`_                          `CreateNewProc()`_                      `CreateProc()`_                         `CurrentDir()`_                         
`DateStamp()`_                          `DateToStr()`_                          `Delay()`_                              `DeleteFile()`_                         
`DeleteVar()`_                          `DeviceProc()`_                         `DoPkt()`_                              `DupLock()`_                            
`DupLockFromFH()`_                      `EndNotify()`_                          `ErrorReport()`_                        `ExAll()`_                              
`ExAllEnd()`_                           `Examine()`_                            `ExamineFH()`_                          `Execute()`_                            
`Exit()`_                               `ExNext()`_                             `Fault()`_                              `FGetC()`_                              
`FGets()`_                              `FilePart()`_                           `FindArg()`_                            `FindCliProc()`_                        
`FindDosEntry()`_                       `FindSegment()`_                        `FindVar()`_                            `Flush()`_                              
`Format()`_                             `FPutC()`_                              `FPuts()`_                              `FRead()`_                              
`FreeArgs()`_                           `FreeDeviceProc()`_                     `FreeDosEntry()`_                       `FreeDosObject()`_                      
`FWrite()`_                             `GetArgStr()`_                          `GetConsoleTask()`_                     `GetCurrentDirName()`_                  
`GetDeviceProc()`_                      `GetFileSysTask()`_                     `GetProgramDir()`_                      `GetProgramName()`_                     
`GetPrompt()`_                          `GetSegListInfo()`_                     `GetVar()`_                             `Info()`_                               
`Inhibit()`_                            `Input()`_                              `InternalLoadSeg()`_                    `InternalUnLoadSeg()`_                  
`IoErr()`_                              `IsFileSystem()`_                       `IsInteractive()`_                      `LoadSeg()`_                            
`Lock()`_                               `LockDosList()`_                        `LockRecord()`_                         `LockRecords()`_                        
`MakeDosEntry()`_                       `MakeLink()`_                           `MatchEnd()`_                           `MatchFirst()`_                         
`MatchNext()`_                          `MatchPattern()`_                       `MatchPatternNoCase()`_                 `MaxCli()`_                             
`NameFromFH()`_                         `NameFromLock()`_                       `NewLoadSeg()`_                         `NextDosEntry()`_                       
`Open()`_                               `OpenFromLock()`_                       `Output()`_                             `ParentDir()`_                          
`ParentOfFH()`_                         `ParsePattern()`_                       `ParsePatternNoCase()`_                 `PathPart()`_                           
`PrintFault()`_                         `PutStr()`_                             `Read()`_                               `ReadArgs()`_                           
`ReadItem()`_                           `ReadLink()`_                           `Relabel()`_                            `RemAssignList()`_                      
`RemDosEntry()`_                        `RemSegment()`_                         `Rename()`_                             `ReplyPkt()`_                           
`RunCommand()`_                         `SameDevice()`_                         `SameLock()`_                           `Seek()`_                               
`SelectInput()`_                        `SelectOutput()`_                       `SendPkt()`_                            `SetArgStr()`_                          
`SetComment()`_                         `SetConsoleTask()`_                     `SetCurrentDirName()`_                  `SetFileDate()`_                        
`SetFileSize()`_                        `SetFileSysTask()`_                     `SetIoErr()`_                           `SetMode()`_                            
`SetOwner()`_                           `SetProgramDir()`_                      `SetProgramName()`_                     `SetPrompt()`_                          
`SetProtection()`_                      `SetVar()`_                             `SetVBuf()`_                            `SplitName()`_                          
`StartNotify()`_                        `StrToDate()`_                          `StrToLong()`_                          `SystemTagList()`_                      
`UnGetC()`_                             `UnLoadSeg()`_                          `UnLock()`_                             `UnLockDosList()`_                      
`UnLockRecord()`_                       `UnLockRecords()`_                      `VFPrintf()`_                           `VFWritef()`_                           
`VPrintf()`_                            `WaitForChar()`_                        `WaitPkt()`_                            `Write()`_                              
`WriteChars()`_                         
======================================= ======================================= ======================================= ======================================= 

-----------

AbortPkt()
==========

Synopsis
~~~~~~~~
::

 void AbortPkt(
          struct MsgPort   * port,
          struct DosPacket * pkt );

Function
~~~~~~~~
::

     This function currently does nothing. You can use WaitForChar()
     to poll for characters from an interactive handler.

     The planned purpose of this function is:
     Tries to abort an asynchronous packet. There is no guarantee
     that this succeeds. You must wait with WaitPkt() for the packet
     to return before you can reuse or deallocate it.


Inputs
~~~~~~
::

     port - The message port to where the packet was sent.
     pkt  - The packet to be aborted.



See also
~~~~~~~~

`SendPkt()`_ `WaitForChar()`_ `WaitPkt()`_ 

----------

AddBuffers()
============

Synopsis
~~~~~~~~
::

 LONG AddBuffers(
          CONST_STRPTR devicename,
          LONG numbuffers );

Function
~~~~~~~~
::

     Add or remove cache memory to/from a filesystem. The amount of memory
     per cache buffer and the limit depends on the filesystem.


Inputs
~~~~~~
::

     devicename - DOS device name (with trailing ':' and NUL terminated).
     numbuffers - Number of buffers to add. May be negative for decreasing.


Result
~~~~~~
::

     DOSTRUE on success (IoErr() gives the actual number of buffers).
     DOSFALSE on error (IoErr() gives the error code).


Example
~~~~~~~
::

     LONG res1, res2;
     res1 = AddBuffers("DF0:", 10);
     res2 = IoErr();


Notes
~~~~~
::

     Although some old filesystems return the new buffer count instead of
     a success indication, a work-around for that case is built into the
     AROS implementation of this function.



See also
~~~~~~~~

`IoErr()`_ 

----------

AddDosEntry()
=============

Synopsis
~~~~~~~~
::

 LONG AddDosEntry(
          struct DosList * dlist );

Function
~~~~~~~~
::

     Adds a given dos list entry to the DOS list. Automatically
     locks the list for writing. There may be not more than one device
     or assign node of the same name. There are no restrictions on
     volume nodes except that the time stamps must differ.


Inputs
~~~~~~
::

     dlist - Pointer to DOS list entry.


Result
~~~~~~
::

     DOSTRUE if all went well.
     DOSFALSE for errors; IoErr() will return additional error code.


Notes
~~~~~
::

     Since anybody who wants to use a device or volume node in the
     DOS list has to lock the list, filesystems may be called with
     the DOS list locked. So if you want to add a DOS list entry
     out of a filesystem don't just wait on the lock but serve all
     incoming requests until the dos list is free instead.

     The dlist pointer may become invalid after a call to AddDosEntry()
     unless you have locked the DOS list.



See also
~~~~~~~~

`RemDosEntry()`_ `FindDosEntry()`_ `NextDosEntry()`_ `LockDosList()`_ `MakeDosEntry()`_ `FreeDosEntry()`_ `AttemptLockDosList()`_ 

----------

AddPart()
=========

Synopsis
~~~~~~~~
::

 BOOL AddPart(
          STRPTR dirname,
          CONST_STRPTR filename,
          ULONG size );

Function
~~~~~~~~
::

     AddPart() will add a file, directory or other path name to a
     directory path. It will take into account any pre-existing
     separator characters (':','/').

     If filename is an absolute path it will replace
     the current value of dirname.


Inputs
~~~~~~
::

     dirname  - The path to add the new path to.
     filename - The path you wish added.
     size     - The size of the dirname buffer (must NOT be 0).


Result
~~~~~~
::

     Non-zero if everything succeeded, FALSE if the buffer would have
     overflowed.

     If the buffer would have overflowed, then dirname will not have
     been changed.


Example
~~~~~~~
::

     UBYTE buffer[80];
     buffer[0]='\0';
     AddPart(buffer, "Work:", 80);
     AddPart(buffer, "Programming/Include/exec", 80);

     FPuts(Output(), buffer);
     --> Work:Programming/Include/exec

     AddPart(buffer, "/graphics", 80);

     FPuts(Output(), buffer);
     --> Work:Programming/Include/graphics

     AddPart(buffer, "gfxmacros.h", 80);
     FPuts(Output(), buffer);
     --> Work:Programming/Include/graphics/gfxmacros.h



See also
~~~~~~~~

`FilePart()`_ `PathPart()`_ 

----------

AddSegment()
============

Synopsis
~~~~~~~~
::

 BOOL AddSegment(
          CONST_STRPTR name,
          BPTR seg,
          LONG type );

Function
~~~~~~~~
::

     Adds a program segment to the system resident list. You can later
     use these segments to run programs.

     The name field should refer to a NULL terminated strings, which
     will be copied. The type field determines the type of resident
     program. Normal programs should have type >= 0, system segments
     should have type == CMD_SYSTEM.

     Note that all other values of type are reserved.


Inputs
~~~~~~
::

     name            - Name of the segment. This is used by FindSegment().
     seg             - Segment to add.
     type            - What type of segment (initial use count).


Result
~~~~~~
::

     Segment will have been added to the DOS resident list.

     != 0    success
     == 0    failure


Bugs
~~~~
::

     Uses Forbid() based locking.



See also
~~~~~~~~

`FindSegment()`_ `RemSegment()`_ 

----------

AllocDosObject()
================

Synopsis
~~~~~~~~
::

 APTR AllocDosObject(
          ULONG type,
          const struct TagItem * tags );
 
 APTR AllocDosObjectTags(
          ULONG type,
          TAG tag, ... );

Function
~~~~~~~~
::

     Creates a new dos object of a given type. This memory has to be
     freed with FreeDosObject().


Inputs
~~~~~~
::

     type - Object type.
     tags - Pointer to taglist array with additional information. See
            <dos/dostags.h> for a list of all supported tags.


Result
~~~~~~
::

     Pointer to new object or NULL, to indicate an error.



----------

AssignAdd()
===========

Synopsis
~~~~~~~~
::

 BOOL AssignAdd(
          CONST_STRPTR name,
          BPTR lock );

Function
~~~~~~~~
::

     Create a multi-directory assign, or adds to it if it already was one.
     Do not use or free the lock after calling this function - it becomes
     the assign and will be freed by the system when the assign is removed.


Inputs
~~~~~~
::

     name - NULL terminated name of the assign.
     lock - Lock on the assigned directory.


Result
~~~~~~
::

     != 0 success, 0 on failure. IoErr() gives additional information
     in that case. The lock is not freed on failure.


Notes
~~~~~
::

     This will only work with an assign created with AssignLock() or
     a resolved AssignLate() assign.



See also
~~~~~~~~

`Lock()`_ `AssignLock()`_ `AssignPath()`_ `AssignLate()`_ `DupLock()`_ `RemAssignList()`_ 

----------

AssignAddToList()
=================

Synopsis
~~~~~~~~
::

 BOOL AssignAddToList(
          CONST_STRPTR name,
          BPTR lock,
          ULONG position );


----------

AssignLate()
============

Synopsis
~~~~~~~~
::

 BOOL AssignLate(
          CONST_STRPTR name,
          CONST_STRPTR path );

Function
~~~~~~~~
::

     Create an assign for the given name, which will be resolved upon the
     first reference to it. If this succeeds (i.e. the path exists and
     can be locked) it will be turned into an AssignLock() type assign.
     This way you can create assigns to unmounted volumes which will only
     be requested when accessed.


Inputs
~~~~~~
::

     name  --  NULL terminated name of the assign.
     path  --  NULL terminated path to be resolved on the first reference.


Result
~~~~~~
::

     != 0 success, 0 on failure. IoErr() gives additional information
     in that case.



See also
~~~~~~~~

`Lock()`_ `AssignAdd()`_ `AssignPath()`_ `AssignLock()`_ 

----------

AssignLock()
============

Synopsis
~~~~~~~~
::

 LONG AssignLock(
          CONST_STRPTR name,
          BPTR lock );

Function
~~~~~~~~
::

     Create an assign from a given name to a lock. Replaces any older
     assignments from that name, 0 cancels the assign completely. Do not
     use or free the lock after calling this function - it becomes
     the assign and will be freed by the system if the assign is removed.


Inputs
~~~~~~
::

     name -- NUL terminated name of the assign.
     lock -- Lock to assigned directory.


Result
~~~~~~
::

     != 0 success, 0 on failure. IoErr() gives additional information
     in that case. The lock is not freed on failure.



----------

AssignPath()
============

Synopsis
~~~~~~~~
::

 BOOL AssignPath(
          CONST_STRPTR name,
          CONST_STRPTR path );

Function
~~~~~~~~
::

     Create an assign for the given name, which will be resolved upon
     each reference to it. There will be no permanent lock kept on the
     specified path. This way you can create assigns to unmounted volumes
     which will only be requested when accessed. Also, using AssignPath()
     to assign C: to df0:c would make references go to to df0:c even if
     you change the disk.


Inputs
~~~~~~
::

     name  -- NULL terminated name of the assign.
     path  -- NULL terminated path to be resolved on each reference.


Result
~~~~~~
::

     != 0 in case of success, 0 on failure. IoErr() gives additional
     information in that case.



See also
~~~~~~~~

`AssignAdd()`_ `AssignLock()`_ `AssignLate()`_ `Open()`_ 

----------

AttemptLockDosList()
====================

Synopsis
~~~~~~~~
::

 struct DosList * AttemptLockDosList(
          ULONG flags );

Function
~~~~~~~~
::

     Tries to get a lock on some of the dos lists. If all went
     well a handle is returned that can be used for FindDosEntry().
     Don't try to busy wait until the lock can be granted - use
     LockDosList() instead.


Inputs
~~~~~~
::

     flags  --  what lists to lock


Result
~~~~~~
::

     Handle to the dos list or NULL. This is not a direct pointer
     to the first list element but to a pseudo element instead.



----------

ChangeMode()
============

Synopsis
~~~~~~~~
::

 BOOL ChangeMode(
          ULONG type,
          BPTR object,
          ULONG newmode );

Function
~~~~~~~~
::

     Try to change the access mode of a lock or filehandle.


Inputs
~~~~~~
::

     type    - CHANGE_FH or CHANGE_LOCK.
     object  - Filehandle or lock.
     newmode - New mode, either SHARED_LOCK or EXCLUSIVE_LOCK.


Result
~~~~~~
::

     != 0 if all went well, otherwise 0. IoErr() gives additional
     information in the latter case.



----------

CheckSignal()
=============

Synopsis
~~~~~~~~
::

 LONG CheckSignal(
          LONG mask );

Function
~~~~~~~~
::

     Checks the current task to see if any of the signals specified in
     the mask have been set. The mask of all signals which were set is
     returned. The signals specified in the mask will be cleared.


Inputs
~~~~~~
::

     mask - The signal mask to check.


Result
~~~~~~
::

     The mask of all signals which were set.



----------

Cli()
=====

Synopsis
~~~~~~~~
::

 struct CommandLineInterface * Cli();

Function
~~~~~~~~
::

     Returns a pointer to the CLI structure of the current process.


Result
~~~~~~
::

     Pointer to CLI structure.


Notes
~~~~~
::

     Do not use this function to test if the process was started from
     the shell. Check pr_CLI instead.



----------

CliInit()
=========

Synopsis
~~~~~~~~
::

 IPTR CliInit(
          struct DosPacket * dp );

Function
~~~~~~~~
::

     Set up the first shell process.

     Currently, no DOS Packet arguments are used by this
     routine.

     A new Boot Cli process is created, and 'dp' is
     sent to it. If the boot shell succeeds, then 'dp'
     is returned with dp_Res1 = DOSTRUE.
     has started.
 

Inputs
~~~~~~
::

     dp - startup arguments specified as a packet


Result
~~~~~~
::

     RETURN_OK on success, ERROR_* (from dp_Res2) on failure.


Notes
~~~~~
::

     This function is internal to AROS, and should never be
     called by user space.



----------

CliInitNewcli()
===============

Synopsis
~~~~~~~~
::

 IPTR CliInitNewcli(
          struct DosPacket * dp );

Function
~~~~~~~~
::

     Set up a process to be a shell using a startup packet.


Inputs
~~~~~~
::

     packet  --  startup arguments that were passed to the shell
                 If NULL, defaults will be used


Notes
~~~~~
::

     Called to initialize CLI private data structures, when
     the User Shell is in interactive mode.



See also
~~~~~~~~

`CliInitRun()`_ 

----------

CliInitRun()
============

Synopsis
~~~~~~~~
::

 IPTR CliInitRun(
          struct DosPacket * dp );

Function
~~~~~~~~
::

     Set up a process to be a shell.


Inputs
~~~~~~
::

     dp  --  startup arguments specified as a packet


Notes
~~~~~
::

     Called to initialize CLI private data structures, when
     the User Shell is not interactive.



See also
~~~~~~~~

`CliInitNewcli()`_ 

----------

Close()
=======

Synopsis
~~~~~~~~
::

 BOOL Close(
          BPTR file );

Function
~~~~~~~~
::

     Close a filehandle opened with Open(). If the file was used
     with buffered I/O, the final write may fail and thus Close()
     may return an error. The file is closed in any case.


Inputs
~~~~~~
::

     file - filehandle


Result
~~~~~~
::

     0 if there was an error. != 0 on success.



----------

CompareDates()
==============

Synopsis
~~~~~~~~
::

 LONG CompareDates(
          const struct DateStamp * date1,
          const struct DateStamp * date2 );

Function
~~~~~~~~
::

     Compares two dates.


Inputs
~~~~~~
::

     date1, date2 - The two dates to compare.


Result
~~~~~~
::

     < 0 if date1 is later than date2, == 0 if they are equal or > 0
     if date2 is later than date1.


Notes
~~~~~
::

     This is NOT the same ordering as strcmp() !



----------

CreateDir()
===========

Synopsis
~~~~~~~~
::

 BPTR CreateDir(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Creates a new directory under the given name. If all went well, an
     exclusive lock on the new diretory is returned.


Inputs
~~~~~~
::

     name - NUL terminated name.


Result
~~~~~~
::

     Exclusive lock to the new directory or 0 if it couldn't be created.
     IoErr() gives additional information in that case.



----------

CreateNewProc()
===============

Synopsis
~~~~~~~~
::

 struct Process * CreateNewProc(
          const struct TagItem * tags );
 
 struct Process * CreateNewProcTags(
          TAG tag, ... );

Function
~~~~~~~~
::

     Create a new process using the tagitem array.


Inputs
~~~~~~
::

     tags - information on the new process.


Result
~~~~~~
::

     Pointer to the new process or NULL on error.


Notes
~~~~~
::

     It is possible to supply NP_Input, NP_Output and NP_Error tags
     with BNULL values. This is equal to NIL: handle, however if NP_Input
     is set to BNULL, NP_Arguments tag will not work. Arguments are
     passed to the process via input stream, and the stream needs
     to be a valid handle for this. This is original AmigaOS(tm) feature.



----------

CreateProc()
============

Synopsis
~~~~~~~~
::

 struct MsgPort * CreateProc(
          CONST_STRPTR name,
          LONG pri,
          BPTR segList,
          LONG stackSize );

Function
~~~~~~~~
::

     CreateProc() will create a new process (a process is a superset
     of an exec Task), with the name 'name' and the priority 'pri'.

     You should pass a segList as returned by LoadSeg() (or similar)
     in the 'segList' parameter, and specify the stack size in
     'stackSize'.

     You should really use CreateNewProc() rather than this function
     as it is much more flexible.


Inputs
~~~~~~
::

     name      - Name of the new process.
     pri       - Starting priority.
     segList   - BCPL pointer to a seglist.
     stackSize - The size of the initial process stack.


Result
~~~~~~
::

     Pointer to the pr_MsgPort in the Process structure. Will
     return NULL on failure.


Notes
~~~~~
::

     This will not free the seglist when the process finishes.

     This does not return a pointer to the Process structure, but
     rather the MsgPort structure contained within it. You can
     get the real Process structure by:

     struct Process *pr;
     struct MsgPort *mp;

     mp = CreateProc(...);
     pr = (struct Process *)((struct Task *)mp - 1);

     // Shouldn't use mp after this point



See also
~~~~~~~~

`CreateNewProc()`_ `LoadSeg()`_ `UnLoadSeg()`_ 

----------

CurrentDir()
============

Synopsis
~~~~~~~~
::

 BPTR CurrentDir(
          BPTR lock );

Function
~~~~~~~~
::

     Sets a new directory as the current directory. Returns the old one.
     0 is valid in both cases and represents the boot filesystem.


Inputs
~~~~~~
::

     lock - Lock for the new current directory.


Result
~~~~~~
::

     Old current directory.



----------

DateStamp()
===========

Synopsis
~~~~~~~~
::

 struct DateStamp * DateStamp(
          struct DateStamp * date );

Function
~~~~~~~~
::

     Fills the structure with the current time. Time is measured from
     Jan 1, 1978.


Inputs
~~~~~~
::

     date - The structure to fill.


Result
~~~~~~
::

     date->ds_Days is filled with the days from Jan 1, 1978.
     date->ds_Minute is filled with the number of minutes elapsed in the
     day. date->ds_Tick is the number of ticks elapsed in the current
     minute. A tick happens 50 times a second. DateStamp() ensures that
     the day and minute are consistent. All three elements are zero if
     the date is unset.


Notes
~~~~~
::

     The original function could only return even multiples of 50 ticks.



----------

DateToStr()
===========

Synopsis
~~~~~~~~
::

 BOOL DateToStr(
          struct DateTime * datetime );

Function
~~~~~~~~
::

     DateToStr converts an AmigaDOS DateStamp to a human
     readable ASCII string as requested by your settings in the
     DateTime structure.


Inputs
~~~~~~
::

     DateTime - a pointer to an initialized DateTime structure. The
                DateTime structure should be initialized as follows:

     dat_Stamp: The datestamp to convert to ascii

     dat_Format: How to convert the datestamp into
             dat_StrDate. Can be any of the following:

         FORMAT_DOS: AmigaDOS format (dd-mmm-yy). This
             is the default if you specify something other
             than any entry in this list.

         FORMAT_INT: International format (yy-mmm-dd).

         FORMAT_USA: American format (mm-dd-yy).

         FORMAT_CDN: Canadian format (dd-mm-yy).

         FORMAT_DEF default format for locale.


     dat_Flags: Modifies dat_Format. The only flag
             used by this function is DTF_SUBST. If set, then
             a string like "Today" or "Monday" is generated
             instead of the normal format if possible.

     dat_StrDay: Pointer to a buffer to receive the day of
             the week string. (Monday, Tuesday, etc.). If null,
             this string will not be generated.

     dat_StrDate: Pointer to a buffer to receive the date
             string, in the format requested by dat_Format,
             subject to possible modifications by DTF_SUBST. If
             null, this string will not be generated.

     dat_StrTime: Pointer to a buffer to receive the time
             of day string. If NULL, this will not be generated.



Result
~~~~~~
::

     A zero return indicates that the DateStamp was invalid, and could
     not be converted.  Non-zero indicates that the call succeeded.



See also
~~~~~~~~

`DateStamp()`_ `StrtoDate()`_ 

----------

Delay()
=======

Synopsis
~~~~~~~~
::

 void Delay(
          ULONG timeout );

Function
~~~~~~~~
::

     Waits for at least the time specified as timeout.


Inputs
~~~~~~
::

     timeout - the minimum time to wait in ticks (1/50 seconds)



----------

DeleteFile()
============

Synopsis
~~~~~~~~
::

 BOOL DeleteFile(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Tries to delete a file or directory by a given name.
     May fail if the file is in use or protected from deletion.


Inputs
~~~~~~
::

     name - NUL terminated name.


Result
~~~~~~
::

     != 0 if the file is gone, 0 if is still there.
     IoErr() gives additional information in that case.



----------

DeleteVar()
===========

Synopsis
~~~~~~~~
::

 LONG DeleteVar(
          CONST_STRPTR name,
          ULONG flags );

Function
~~~~~~~~
::

     Deletes a local or environment variable.

     The default is to delete a local variable if one was found,
     or to delete a global environment variable otherwise.

     A global environment variable will only be deleted for the
     type LV_VAR.


Inputs
~~~~~~
::

     name  - the name of the variable to delete. Note that variable
             names follow the same syntax and semantics as filesystem
             names.

     flags - A combination of the type of variable (low 8 bits), and
             flags to control the behaviour of this routine.
             Currently defined flags:

             GVF_LOCAL_ONLY  - delete a local variable.
             GVF_GLOBAL_ONLY - delete a global environment variable.
             GVF_SAVE_VAR    - delete a global variable permanently.


Result
~~~~~~
::

     If non-zero, the variable was deleted successfully,
     DOSFALSE otherwise.


Notes
~~~~~
::

     When the GVF_SAVE_VAR flag is set, and only one of the global
     variable pair could be deleted (either the in memory or on disk
     variable), DOSFALSE will be returned.



----------

DeviceProc()
============

Synopsis
~~~~~~~~
::

 struct MsgPort * DeviceProc(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     DeviceProc() is an obsolete function that returns the
     MsgPort responsible for a DOS device.

     DeviceProc() will fail if you ask for the MsgPort of a device
     created with AssignPath() as there is no process to return.
     If the device requested is an assign, the IoErr() will contain
     the Lock to the directory (the function will return the device
     on which the lock is set).


Inputs
~~~~~~
::

     name - The name of the DOS device, INCLUDING the ':'.


Result
~~~~~~
::

     Either a pointer to the MsgPort, or NULL.


Notes
~~~~~
::

     You should really use GetDeviceProc(), as that function
     returns a more useful structure (DevProc), that will
     persist until FreeDeviceProc() is called on it.


Bugs
~~~~
::

     Does not support late- and non-bound assigns, or multiple
     path assigns very well.



See also
~~~~~~~~

`GetDeviceProc()`_ `FreeDeviceProc()`_ 

----------

DoPkt()
=======

Synopsis
~~~~~~~~
::

 SIPTR DoPkt(
          struct MsgPort * port,
          LONG action,
          SIPTR arg1,
          SIPTR arg2,
          SIPTR arg3,
          SIPTR arg4,
          SIPTR arg5 );

Function
~~~~~~~~
::

     Send a dos packet to a filesystem and wait for the action to complete.


Notes
~~~~~
::

     Callable from a task.

     This function should NOT be used; it's only here for AmigaOS
     compatibility.



----------

DupLock()
=========

Synopsis
~~~~~~~~
::

 BPTR DupLock(
          BPTR lock );

Function
~~~~~~~~
::

     Clone a lock on a file or directory. This will only work on shared
     locks.


Inputs
~~~~~~
::

     lock - Old lock.


Result
~~~~~~
::

     The new lock or NULL in case of an error. IoErr() will give additional
     information in that case.



----------

DupLockFromFH()
===============

Synopsis
~~~~~~~~
::

 BPTR DupLockFromFH(
          BPTR handle );

Function
~~~~~~~~
::

     Clone a lock on a file or directory. This will only work on shared
     locks.


Inputs
~~~~~~
::

     lock - Old lock.


Result
~~~~~~
::

     The new lock or NULL in case of an error. IoErr() will give additional
     information in that case.



----------

EndNotify()
===========

Synopsis
~~~~~~~~
::

 void EndNotify(
          struct NotifyRequest * notify );

Function
~~~~~~~~
::

     End a notification (quit notifying for a request previously sent with
     StartNotify()).


Inputs
~~~~~~
::

     notify - NotifyRequest used with StartNotify()



See also
~~~~~~~~

`StartNotify()`_ 

----------

ErrorReport()
=============

Synopsis
~~~~~~~~
::

 BOOL ErrorReport(
          LONG code,
          LONG type,
          IPTR arg1,
          struct MsgPort * device );

Function
~~~~~~~~
::

     Displays a requester with Retry/Cancel buttons for an error.
     IoErr() is set to "code".


Inputs
~~~~~~
::

     code   - The error to put up the requester for
     type   - Type of request:
                  REPORT_LOCK   - arg1 is a lock (BPTR).
                  REPORT_FH     - arg1 is a filehandle (BPTR).
                  REPORT_VOLUME - arg1 is a volumenode (C pointer).
                  REPORT_INSERT - arg1 is the string for the volume name.

     arg1   - Argument according to type (see above)
     device - Optional handler task address (obsolete!)


Result
~~~~~~
::

     DOSFALSE - user has selected "Retry"
     DOSTRUE  - user has selected "Cancel" or code wasn't understood or
                pr_WindowPtr is -1 or if an attempt to open the requester
                fails.



----------

ExAll()
=======

Synopsis
~~~~~~~~
::

 BOOL ExAll(
          BPTR lock,
          struct ExAllData * buffer,
          LONG size,
          LONG data,
          struct ExAllControl * control );

Function
~~~~~~~~
::

     Examine an entire directory.


Inputs
~~~~~~
::

     lock    - lock on the directory to be examined
     buffer  - buffer for the data that is returned (must be aligned)
               which is filled with (partial) ExAllData structures
               (see NOTES)
     size    - size of 'buffer' in bytes
     data    - type of the data to be returned
     control - a control structure allocated by AllocDosObject()


Result
~~~~~~
::

     An indicator of whether ExAll() is finished. If FALSE is returned,
     either ExAll() has completed, in which case IoErr() is
     ERROR_NO_MORE_ENTRIES, or an error occurred. If a non-zero value is
     returned, ExAll() must be called again until it returns FALSE.


Notes
~~~~~
::

     The following information is essential information in the ExAllData
     structure:

     ed_Type:

         ED_NAME       - filename
         ED_TYPE       - type
         ED_SIZE       - size in bytes
         ED_PROTECTION - protection bits
         ED_DATE       - date information (3 longwords)
         ED_COMMENT    - file comment (NULL if no comment exists)
         ED_OWNER      - owner user and group id

         This is an incremental list, meaning that if you specify ED_OWNER
         you will get ALL attributes!

         Filesystems that support ExAll() must support at least up to
         ED_COMMENT. If a filesystem doesn't support a particular type,
         ERROR_BAD_NUMBER must be returned.

     ed_Next: pointer to the next entry in the buffer. The last entry
              has a NULL value for ed_Next.

     The control structure have the following fields:

     eac_Entries: the number of entries in the buffer after a call to
                  ExAll(). Make sure that your code handles the case when
                  eac_Entries is 0 and ExAll() returns TRUE.

     eac_LastKey: must be initialized to 0 before calling ExAll() for the
                  first time.

     eac_MatchString: if NULL then information on all files will be returned.
                      If non-NULL it's interpreted as a pointer to a string
                      used for pattern matching which files to return
                      information on. This string must have been parsed by
                      ParsePatternNoCase()!

     eac_MatchFunc: pointer to a hook that will be called to decide if an
                    entry should be included in the buffer. If NULL, no
                    matching function will be called. The hook is called as
                    follows:

                         BOOL = MatchFunc(hook, data, typeptr)



See also
~~~~~~~~

`Examine()`_ `ExNext()`_ `MatchPatternNoCase()`_ `ParsePatternNoCase()`_ `AllocDosObject()`_ `ExAllEnd()`_ 

----------

ExAllEnd()
==========

Synopsis
~~~~~~~~
::

 void ExAllEnd(
          BPTR lock,
          struct ExAllData * buffer,
          LONG size,
          LONG data,
          struct ExAllControl * control );

Function
~~~~~~~~
::

     Stop an ExAll() operation before returning ERROR_NO_MORE_ENTRIES.


Inputs
~~~~~~
::

     The inputs should correspond to the inputs for the ExAll() function.

     lock    - lock on the directory that is being examined
     buffer  - buffer for data returned
     size    - size of 'buffer' in bytes
     type    - type of data to be returned
     control - control data structure


Notes
~~~~~
::

     The control data structure must have been allocated with
     AllocDosObject().



See also
~~~~~~~~

`ExAll()`_ `AllocDosObject()`_ 

----------

Examine()
=========

Synopsis
~~~~~~~~
::

 LONG Examine(
          BPTR lock,
          struct FileInfoBlock * fib );

Function
~~~~~~~~
::

     Fill in a FileInfoBlock structure concerning a file or directory
     associated with a particular lock.


Inputs
~~~~~~
::

     lock - lock to examine
     fib  - FileInfoBlock where the result of the examination is stored


Result
~~~~~~
::

     A boolean telling whether the operation was successful or not.


Notes
~~~~~
::

     FileInfoBlocks should be allocated with AllocDosObject(). You may make
     a copy of the FileInfoBlock but, however, this copy may NOT be passed
     to ExNext()!



See also
~~~~~~~~

`Lock()`_ `UnLock()`_ `ExNext()`_ `AllocDosObject()`_ `ExAll()`_ `dos/dos.h </documentation/developers/headerfiles/dos/dos.h>`_ 

----------

ExamineFH()
===========

Synopsis
~~~~~~~~
::

 BOOL ExamineFH(
          BPTR fh,
          struct FileInfoBlock * fib );


----------

Execute()
=========

Synopsis
~~~~~~~~
::

 BOOL Execute(
          CONST_STRPTR string,
          BPTR input,
          BPTR output );

Function
~~~~~~~~
::

     Execute a CLI command specified in 'string'. This string may contain
     features you may use on the shell commandline like redirection using >,
     < or >>. Execute() doesn't return until the command(s) that should be
     executed are finished.

     If 'input' is not NULL, more commands will be read from this stream
     until end of file is reached. 'output' will be used as the output stream
     of the commands (if output is not redirected). If 'output' is NULL the
     current window is used for output -- note that programs run from the
     Workbench doesn't normally have a current window.


Inputs
~~~~~~
::

     string - pointer to a NULL-terminated string with commands
              (may be NULL)
     input  - stream to use as input (may be NULL)
     output - stream to use as output (may be NULL)


Result
~~~~~~
::

     Boolean telling whether Execute() could find and start the specified
     command(s). (This is NOT the return code of the command(s).)



See also
~~~~~~~~

`SystemTagList()`_ 

----------

Exit()
======

Synopsis
~~~~~~~~
::

 void Exit(
          LONG returnCode );

Function
~~~~~~~~
::

     Instantly terminate the program.


Inputs
~~~~~~
::

     returnCode - Process' return code.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     Calling this function bypasses normal termination sequence of your program.
     Automatically opened libraries will not be closed, destructors will not be
     called, etc. Do this only if you really know what are you doing. It's not
     advised to use this function at all.



----------

ExNext()
========

Synopsis
~~~~~~~~
::

 LONG ExNext(
          BPTR lock,
          struct FileInfoBlock * fileInfoBlock );

Function
~~~~~~~~
::

     Examine the next entry in a directory.


Inputs
~~~~~~
::

     lock - lock on the direcory the contents of which to examine
     fib  - a FileInfoBlock previously initialized by Examine()
            (or used before with ExNext())


Result
~~~~~~
::

     success  --  a boolean telling whether the operation was successful
              or not. A failure occurs also if there is no "next" entry in
              the directory. Then IoErr() equals ERROR_NO_MORE_ENTRIES.


Example
~~~~~~~
::

     To examine a directory, do the following:

     1.  Pass a lock on the directory and a FileInfoBlock (allocated by
         AllocDosObject()) to Examine().
     2.  Pass the same parameters to ExNext().
     3.  Do something with the FileInfoBlock returned.
     4.  Call ExNext() repeatedly until it returns FALSE and use the
         information you are provided. When ExNext returns FALSE, check
         IoErr() to make sure that there was no real failure
         (ERROR_NO_MORE_ENTRIES).


Notes
~~~~~
::

     If scanning a filesystem tree recursively, you'll need to allocate a
     new FileInfoBlock for each directory level.



See also
~~~~~~~~

`Examine()`_ `IoErr()`_ `AllocDosObject()`_ `ExAll()`_ 

----------

Fault()
=======

Synopsis
~~~~~~~~
::

 BOOL Fault(
          LONG code,
          CONST_STRPTR header,
          STRPTR buffer,
          LONG len );

Function
~~~~~~~~
::

     Fault will obtain the error message string for the given error
     code. First the header string is copied to the buffer, followed
     by a ":" (colon), then the NULL terminated string for the error
     message into the buffer.

     By convention, error messages are ALWAYS less than 80 (plus 1 for
     NULL termination), and ideally less than 60 characters.

     If the error code is not known, then the string "Unknown error"
     followed by the error number will be added to the string.


Inputs
~~~~~~
::

     code   - The error code.
     header - The string to prepend to the buffer before the error
              text. This may be NULL in which case nothing is prepended.
     buffer - The destination buffer.
     len    - Length of the buffer.


Result
~~~~~~
::

     Number of characters placed in the buffer. May be 0.



----------

FGetC()
=======

Synopsis
~~~~~~~~
::

 LONG FGetC(
          BPTR file );

Function
~~~~~~~~
::

     Get a character from a buffered file. Buffered I/O is more efficient
     for small amounts of data but less for big chunks. You have to
     use Flush() between buffered and non-buffered I/O or you'll
     clutter your I/O stream.


Inputs
~~~~~~
::

     file   - filehandle


Result
~~~~~~
::

     The character read or EOF if the file ended or an error happened.
     IoErr() gives additional information in that case.



See also
~~~~~~~~

`IoErr()`_ `Flush()`_ 

----------

FGets()
=======

Synopsis
~~~~~~~~
::

 STRPTR FGets(
          BPTR fh,
          STRPTR buf,
          ULONG buflen );

Function
~~~~~~~~
::

     Read until NEWLINE (\n), EOF is encountered or buflen-1
     characters have been read. If a NEWLINE is read, it will
     be the last character in the buffer. The buffer will always
     be \0-terminated.


Inputs
~~~~~~
::

     fh - Read buffered from this filehandle
     buf - Put read chars in this buffer
     buflen - The size of the buffer


Result
~~~~~~
::

     buf or NULL if the first thing read is EOF.



----------

FilePart()
==========

Synopsis
~~~~~~~~
::

 STRPTR FilePart(
          CONST_STRPTR path );

Function
~~~~~~~~
::

     Get a pointer to the last component of a path, which is normally the
     filename.


Inputs
~~~~~~
::

     path - pointer AmigaDOS path string
         May be relative to the current directory or the current disk.


Result
~~~~~~
::

     A pointer to the first char of the filename!


Example
~~~~~~~
::

     FilePart("xxx:yyy/zzz/qqq") returns a pointer to the first 'q'.
     FilePart("xxx:yyy")         returns a pointer to the first 'y'.
     FilePart("yyy")             returns a pointer to the first 'y'.


Bugs
~~~~
::

     None known.



See also
~~~~~~~~

`PathPart()`_ `AddPart()`_ 

----------

FindArg()
=========

Synopsis
~~~~~~~~
::

 LONG FindArg(
          CONST_STRPTR template,
          CONST_STRPTR keyword );

Function
~~~~~~~~
::

     Search for keyword in the template string.
     Abbreviations are handled.


Inputs
~~~~~~
::

     template - template string to be searched
     keyword  - keyword to search for


Result
~~~~~~
::

     Index of the keyword or -1 if not found.



----------

FindCliProc()
=============

Synopsis
~~~~~~~~
::

 struct Process * FindCliProc(
          ULONG num );

Function
~~~~~~~~
::

     Find a CLI process by its task number. The number must be greater
     than 0.


Inputs
~~~~~~
::

     num - The task number of the CLI to find.


Result
~~~~~~
::

     Pointer to the process if found, NULL otherwise.


Notes
~~~~~
::

     The process calling this function doesn't need to do any locking.



See also
~~~~~~~~

`Cli()`_ `MaxCli()`_ 

----------

FindDosEntry()
==============

Synopsis
~~~~~~~~
::

 struct DosList * FindDosEntry(
          struct DosList * dlist,
          CONST_STRPTR name,
          ULONG flags );

Function
~~~~~~~~
::

     Looks for the next dos list entry with the right name. The list
     must be locked for this. There may be not more than one device
     or assign node of the same name. There are no such restrictions
     on volume nodes.


Inputs
~~~~~~
::

     dlist - the value given by LockDosList() or the last call to
             FindDosEntry().
     name  - logical device name without colon. Case insensitive.
     flags - the same flags as given to LockDosList() or a subset
             of them.


Result
~~~~~~
::

     Pointer to dos list entry found or NULL if the are no more entries.



----------

FindSegment()
=============

Synopsis
~~~~~~~~
::

 struct Segment * FindSegment(
          CONST_STRPTR name,
          struct Segment * seg,
          LONG system );

Function
~~~~~~~~
::

     Search for a resident segment by name and type (system or user).
     The first segment that exactly matches the name and type will be
     returned. The name is case insensitive. If the system argument is
     non-zero, only system segments will be returned (i.e. those that
     have a negative seg_UC value); if zero, only user segments will
     be returned (i.e. those with a non-negative seg_UC value).

     You can continue searching for multiple segments that share the
     same name and type by specifying the last returned segment as
     the seg argument.

     FindSegment() does no locking of the segment list. You should
     lock the list by calling Forbid() before calling FindSegment(),
     and unlock the list by calling Permit() once you have finished
     calling FindSegment().

     If you wish to prevent a user segment from being unloaded, you
     must increment its seg_UC value before unlocking the list. Once
     finished with the segment, you must decrement its seg_UC value
     under Forbid()/Permit() protection. The seg_UC value of system
     segments should never be altered.


Inputs
~~~~~~
::

     name - Name of the segment to search for.
     seg  - Start search from this point.
     system - Search for a system segment.


Result
~~~~~~
::

     A matching segment, or NULL.



See also
~~~~~~~~

`AddSegment()`_ `RemSegment()`_ 

----------

FindVar()
=========

Synopsis
~~~~~~~~
::

 struct LocalVar * FindVar(
          CONST_STRPTR name,
          ULONG type );

Function
~~~~~~~~
::

     Finds a local variable structure.


Inputs
~~~~~~
::

     name - the name of the variable you wish to find. Note that
            variable names follow the same syntax and semantics
            as filesystem names.
     type - The type of variable to be found (see <dos/var.h>).
            Actually, only the lower 8 bits of "type" are used
            by FindVar().


Result
~~~~~~
::

     A pointer to the LocalVar structure for that variable if it was
     found. If the variable wasn't found, or was of the wrong type,
     NULL will be returned.



See also
~~~~~~~~

`DeleteVar()`_ `GetVar()`_ `SetVar()`_ 

----------

Flush()
=======

Synopsis
~~~~~~~~
::

 LONG Flush(
          BPTR file );

Function
~~~~~~~~
::

     Flushes any pending writes on the file. If the file was used
     for input and there is still some data to read it tries to
     seek back to the expected position.


Inputs
~~~~~~
::

     file - filehandle


Result
~~~~~~
::

     != 0 on success, 0 on error. IoErr() gives additional information
     in that case.


Notes
~~~~~
::

     On AROS calling Flush() from different tasks on the same file handle
     is serialised. This means that most of the time it is possible to
     do I/O in one task to a file handle where Flush() is being called
     in another task on that file handle.
     No multi-thread safety is guaranteed though and data may be lost if
     I/O is done in parallel from different tasks on the same file handle.



----------

Format()
========

Synopsis
~~~~~~~~
::

 BOOL Format(
          CONST_STRPTR devicename,
          CONST_STRPTR volumename,
          ULONG dostype );

Function
~~~~~~~~
::

     Initialise a filesystem for use by the system. This instructs
     a filesystem to write out the data that it uses to describe the
     device.

     The device should already have been formatted.


Inputs
~~~~~~
::

     devicename - Name of the device to format.
     volumename - The name you wish the volume to be called.
     dostype    - The DOS type you wish on the disk.


Result
~~~~~~
::

     != 0 if the format was successful, 0 otherwise.



----------

FPutC()
=======

Synopsis
~~~~~~~~
::

 LONG FPutC(
          BPTR file,
          LONG character );

Function
~~~~~~~~
::

     Write a character to a file handle.

     The write is buffered.

     If the file handle is an interactive stream,
     the buffer is automatically flushed on a linefeed,
     carriage return or ASCII NUL.


Inputs
~~~~~~
::

     file      - Filehandle to write to.
     character - Character to write.


Result
~~~~~~
::

     The character written or EOF in case of an error.
     IoErr() gives additional information in that case.


Notes
~~~~~
::

     You should use Flush() when switching between
     buffered and unbuffered IO.



See also
~~~~~~~~

`FGetC()`_ `IoErr()`_ `Flush()`_ `FWrite()`_ 

----------

FPuts()
=======

Synopsis
~~~~~~~~
::

 LONG FPuts(
          BPTR file,
          CONST_STRPTR string );

Function
~~~~~~~~
::

 This routine writes an unformatted string to the filehandle.  No
 newline is appended to the string.  This routine is buffered.


Inputs
~~~~~~
::

     file   - Filehandle to write to.
     string - String to write.


Result
~~~~~~
::

     0 if all went well or EOF in case of an error.
     IoErr() gives additional information in that case.



See also
~~~~~~~~

`FGetC()`_ `IoErr()`_ 

----------

FRead()
=======

Synopsis
~~~~~~~~
::

 LONG FRead(
          BPTR fh,
          APTR block,
          ULONG blocklen,
          ULONG number );

Function
~~~~~~~~
::

     Read a number of blocks from a file.
     The read is buffered.


Inputs
~~~~~~
::

     fh - Read from this file
     block - The data is put here
     blocklen - This is the size of a single block
     number - The number of blocks


Result
~~~~~~
::

     The number of blocks read from the file or 0 on EOF.
     This function may return fewer than the requested number of blocks.
     IoErr() gives additional information in case of an error.



See also
~~~~~~~~

`Open()`_ `FWrite()`_ `FPutc()`_ `Close()`_ 

----------

FreeArgs()
==========

Synopsis
~~~~~~~~
::

 void FreeArgs(
          struct RDArgs * args );

Function
~~~~~~~~
::

     FreeArgs() will clean up after a call to ReadArgs(). If the
     RDArgs structure was allocated by the system in a call to
     ReadArgs(), then it will be freed. If however, you allocated
     the RDArgs structure with AllocDosObject(), then you will
     have to free it yourself with FreeDosObject().


Inputs
~~~~~~
::

     args - The data used by ReadArgs(). May be NULL, in which case,
            FreeArgs() does nothing.


Result
~~~~~~
::

     Some memory will have been returned to the system.



See also
~~~~~~~~

`ReadArgs()`_ `AllocDosObject()`_ `FreeDosObject()`_ 

----------

FreeDeviceProc()
================

Synopsis
~~~~~~~~
::

 void FreeDeviceProc(
          struct DevProc * dp );

Function
~~~~~~~~
::

     FreeDeviceProc() will clean up after a call to GetDeviceProc().


Inputs
~~~~~~
::

     dp - DevProc structure as returned by GetDeviceProc(), or NULL.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`GetDeviceProc()`_ 

----------

FreeDosEntry()
==============

Synopsis
~~~~~~~~
::

 void FreeDosEntry(
          struct DosList * dlist );

Function
~~~~~~~~
::

     Free a dos list entry created with MakeDosEntry().


Inputs
~~~~~~
::

     dlist - pointer to dos list entry. May be NULL.



----------

FreeDosObject()
===============

Synopsis
~~~~~~~~
::

 void FreeDosObject(
          ULONG type,
          APTR ptr );

Function
~~~~~~~~
::

     Frees an object allocated with AllocDosObject.


Inputs
~~~~~~
::

     type - object type. The same parameter as given to AllocDosObject().
     ptr  - Pointer to object.



See also
~~~~~~~~

`AllocDosObject()`_ 

----------

FWrite()
========

Synopsis
~~~~~~~~
::

 LONG FWrite(
          BPTR fh,
          CONST_APTR block,
          ULONG blocklen,
          ULONG numblocks );

Function
~~~~~~~~
::

     Buffered write of a number of blocks to a stream.
     May write fewer blocks than requested.


Inputs
~~~~~~
::

     fh        - Write to this file
     block     - The data begins here
     blocklen  - number of bytes per block.  Must be > 0.
     numblocks - number of blocks to write.  Must be > 0.


Result
~~~~~~
::

     The number of blocks written to the file or EOF on error. IoErr()
     gives additional information in case of an error.


Notes
~~~~~
::

     Some releases of AmigaOS may not clear IoErr(), while AROS
     does. For full backwards compatibility, you may want to call
     SetIoErr(0L) before FWrite() if you need to be able to check
     the error code.



See also
~~~~~~~~

`Open()`_ `FRead()`_ `FPutc()`_ `Close()`_ 

----------

GetArgStr()
===========

Synopsis
~~~~~~~~
::

 STRPTR GetArgStr();

Function
~~~~~~~~
::

     Returns a pointer to the argument string passed to the current
     process at startup.


Result
~~~~~~
::

     Pointer to argument string.



See also
~~~~~~~~

`SetArgStr()`_ `RunCommand()`_ 

----------

GetConsoleTask()
================

Synopsis
~~~~~~~~
::

 struct MsgPort * GetConsoleTask();

Function
~~~~~~~~
::

     Return the console handler for the current Process. The return
     type depends upon whether AROS is running binary compatible.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     The address of the console handler, or NULL if none is set.


Notes
~~~~~
::

     You will only get NULL from this call if you call it on a Task,
     or when the Process is not attached to a console.



See also
~~~~~~~~

`SetConsoleTask()`_ 

----------

GetCurrentDirName()
===================

Synopsis
~~~~~~~~
::

 BOOL GetCurrentDirName(
          STRPTR buf,
          LONG len );

Function
~~~~~~~~
::

     Copies the name of the current directory from the CLI structure
     into the buffer. If the buffer is too small the name is truncated,
     and a failure is returned. If the current process doesn't have
     a CLI structure, a 0 length string is put into the buffer and a
     failure is returned.


Inputs
~~~~~~
::

     buf - Buffer for the name.
     len - Size of the buffer in bytes.


Result
~~~~~~
::

     !=0 on success, 0 on failure. IoErr() gives additional information
     in that case.


Notes
~~~~~
::

     Documented as returning ERROR_OBJECT_WRONG_TYPE if CLI structure
     is not present but actually it fallbacks to NameFromLock().



See also
~~~~~~~~

`SetCurrentDirName()`_ 

----------

GetDeviceProc()
===============

Synopsis
~~~~~~~~
::

 struct DevProc * GetDeviceProc(
          CONST_STRPTR name,
          struct DevProc * dp );

Function
~~~~~~~~
::

     GetDeviceProc() will search for the filesystem handler which
     you should send a command to for a specific path.

     By calling GetDeviceProc() multiple times, the caller will
     be able to handle multi-assign paths.

     The first call to GetDeviceProc() should have the |dp| parameter
     as NULL.


Inputs
~~~~~~
::

     name - Name of the object to find.
     dp   - Previous result of GetDeviceProc() or NULL.


Result
~~~~~~
::

     A pointer to a DevProc structure containing the information
     required to send a command to a filesystem.


Bugs
~~~~
::

     Currently doesn't return dvp_DevNode for locks which are
     relative to "PROGDIR:", ":", or the current directory.



See also
~~~~~~~~

`FreeDeviceProc()`_ 

----------

GetFileSysTask()
================

Synopsis
~~~~~~~~
::

 struct MsgPort * GetFileSysTask();

Function
~~~~~~~~
::

     Return the default filesystem handler for this process.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     The default filesystem handler for this process.



See also
~~~~~~~~

`SetFileSysTask()`_ 

----------

GetProgramDir()
===============

Synopsis
~~~~~~~~
::

 BPTR GetProgramDir();

Function
~~~~~~~~
::

     This function will return the shared lock on the directory that
     the current process was loaded from. You can use this to help
     you find data files which were supplied with your program.

     A NULL return is possible, which means that you may be running
     from the Resident list.

     You should NOT under any circumstance UnLock() this lock.


Result
~~~~~~
::

     A shared lock on the directory the program was started from.



----------

GetProgramName()
================

Synopsis
~~~~~~~~
::

 BOOL GetProgramName(
          STRPTR buf,
          LONG len );

Function
~~~~~~~~
::

     Copies the name of the current program from the CLI structure
     into the buffer. If the buffer is too small the name is truncated,
     and a failure is returned. If the current process doesn't have
     a CLI structure, a 0 length string is put into the buffer and a
     failure is returned.


Inputs
~~~~~~
::

     buf - Buffer for the name.
     len - Size of the buffer in bytes.


Result
~~~~~~
::

     !=0 on success, 0 on failure. IoErr() gives additional information
     in that case.



See also
~~~~~~~~

`SetProgramName()`_ 

----------

GetPrompt()
===========

Synopsis
~~~~~~~~
::

 BOOL GetPrompt(
          STRPTR buf,
          LONG len );

Function
~~~~~~~~
::

     Copies the prompt from the CLI structure into the buffer. If the
     buffer is too small the name is truncated, and a failure is returned.
     If the current process doesn't have a CLI structure, a 0 length string
     is put into the buffer and a failure is returned.


Inputs
~~~~~~
::

     buf - Buffer for the prompt.
     len - Size of the buffer in bytes.


Result
~~~~~~
::

     !=0 on success, 0 on failure. IoErr() gives additional information
     in that case.



See also
~~~~~~~~

`SetPrompt()`_ 

----------

GetSegListInfo()
================

Synopsis
~~~~~~~~
::

 ULONG GetSegListInfo(
          BPTR seglist,
          const struct TagItem * taglist );
 
 ULONG GetSegListInfoTags(
          BPTR seglist,
          TAG tag, ... );

Function
~~~~~~~~
::

     returns information about a loaded seglist.


Inputs
~~~~~~
::

     seglist - The segment list.


Result
~~~~~~
::

     returns number of tags aknowledged.



See also
~~~~~~~~

`LoadSeg()`_ 

----------

GetVar()
========

Synopsis
~~~~~~~~
::

 LONG GetVar(
          CONST_STRPTR name,
          STRPTR buffer,
          LONG size,
          LONG flags );

Function
~~~~~~~~
::

     This function will return the value of a local or environmental
     variable in the supplied buffer.

     It is advised to only use ASCII characters with a variable, but
     this is not required.

     If GVF_BINARY_VAR is not specified, this function will stop putting
     characters into the destination buffer when a '\n' is hit, or the
     end of the buffer is reached. Otherwise it will complete fill the
     buffer.


Inputs
~~~~~~
::

     name    -   the name of the variable you want.
     buffer  -   Space to store the returned variable.
     size    -   Length of the buffer in bytes.
     flags   -   A combination of the type of variable to get (lower
                 8 bits) and flags that control the value of this
                 function. Current flags are:

                 GVF_GLOBAL_ONLY    - only tries to get a global variable.
                 GVF_LOCAL_ONLY     - only tries to get a local variable.
                 GVF_BINARY_VAR     - do not stop at a '\n' character.
                 GVF_DONT_NULL_TERM - no NULL termination. This only
                                      applies to GVF_BINARY_VAR.


Result
~~~~~~
::

     Will return the number of characters put in the buffer, or -1
     if the variable is not defined. The '\n' character if it exists
     will not be placed in the buffer.

     If the value would overflow the user buffer, then the number of
     characters copied into the buffer will be returned and the buffer
     truncated.The buffer will be NULL terminated unless
     GVF_DONT_NULL_TERM is set.

     IoErr() will contain either:
       ERROR_OBJECT_NOT_FOUND
           if the variable is not defined.
       ERROR_BAD_NUMBER
           if the size of the buffer is 0.
       the total length of the variable
           otherwise.


Bugs
~~~~
::

     LV_VAR is the only type that can be global.



See also
~~~~~~~~

`DeleteVar()`_ `FindVar()`_ `SetVar()`_ 

----------

Info()
======

Synopsis
~~~~~~~~
::

 LONG Info(
          BPTR lock,
          struct InfoData * parameterBlock );

Function
~~~~~~~~
::

     Get information about a volume in the system.


Inputs
~~~~~~
::

     lock           - a lock on any file on the volume for which information
                      should be supplied, or 0
     parameterBlock - pointer to an InfoData structure


Result
~~~~~~
::

     Boolean indicating success or failure. If TRUE (success) the
     'parameterBlock' is filled with information on the volume.


Notes
~~~~~
::

     Supplying a lock of 0 will return InfoData from the task that is
     returned from GetFileSysTask() (usually the boot volume's filesystem
     "SYS:").
     


See also
~~~~~~~~

`dos/dos.h </documentation/developers/headerfiles/dos/dos.h>`_ 

----------

Inhibit()
=========

Synopsis
~~~~~~~~
::

 LONG Inhibit(
          CONST_STRPTR name,
          LONG onoff );

Function
~~~~~~~~
::

     Stop a filesystem from being used.


Inputs
~~~~~~
::

     name  - Name of the device to inhibit (including a ':')
     onoff - Specify whether to inhibit (DOSTRUE) or uninhibit (DOSFALSE)
             the device


Result
~~~~~~
::

     A boolean telling whether the action was carried out.


Notes
~~~~~
::

     After uninhibiting a device anything might have happened like the disk
     in the drive was removed.



----------

Input()
=======

Synopsis
~~~~~~~~
::

 BPTR Input();

Function
~~~~~~~~
::

     Returns the current input stream or 0 if there is no current
     input stream.


Result
~~~~~~
::

     Input stream handle.



----------

InternalLoadSeg()
=================

Synopsis
~~~~~~~~
::

 BPTR InternalLoadSeg(
          BPTR fh,
          BPTR table,
          LONG_FUNC * funcarray,
          LONG * stack );

Function
~~~~~~~~
::

     Loads from fh.
     Functionarray is a pointer to an array of functions. See below.

     This function really only tries to load the different file
     formats aos, elf and aout.


Inputs
~~~~~~
::

     fh            : Filehandle to load from
     table         : ignored
     funcarray : array of functions to be used for read, seek, alloc and free
        FuncTable[0] -> bytes  = ReadFunc(readhandle, buffer, length), DOSBase
                        D0                D1          A0      D0       A6
        FuncTable[1] -> Memory = AllocFunc(size,flags), ExecBase
                        D0                 D0   D1      A6
        FuncTable[2] -> FreeFunc(memory, size), ExecBase
                                 A1       D0    A6
        FuncTable[3] -> pos    = SeekFunc(readhandle, pos, mode), DOSBase
                        D0                D0          D1   D2
     stack         : pointer to storage (LONG) for stacksize.
                     (currently ignored)


Result
~~~~~~
::

     seglist  - pointer to loaded Seglist or NULL in case of failure.


Notes
~~~~~
::

     FuncTable[3] is not used for Amiga HUNK format files, but is required
                  for ELF.


Bugs
~~~~
::

    Use of table and stack are not implemented, yet!



See also
~~~~~~~~

`UnLoadSeg()`_ 

----------

InternalUnLoadSeg()
===================

Synopsis
~~~~~~~~
::

 BOOL InternalUnLoadSeg(
          BPTR seglist,
          VOID_FUNC freefunc );

Function
~~~~~~~~
::

     Unloads a seglist loaded with InternalLoadSeg().


Inputs
~~~~~~
::

     seglist  - Seglist
     freefunc - Function to be called to free memory


Result
~~~~~~
::

     DOSTRUE if everything went OK.



----------

IoErr()
=======

Synopsis
~~~~~~~~
::

 SIPTR IoErr();

Function
~~~~~~~~
::

     Get the dos error code for the current process.


Result
~~~~~~
::

     Error code.



----------

IsFileSystem()
==============

Synopsis
~~~~~~~~
::

 BOOL IsFileSystem(
          CONST_STRPTR devicename );

Function
~~~~~~~~
::

     Query the device whether it is a filesystem.


Inputs
~~~~~~
::

     devicename      - Name of the device to query.


Result
~~~~~~
::

     TRUE if the device is a filesystem, FALSE otherwise.


Notes
~~~~~
::

     DF0:, HD0:, ... are filesystems.
     CON:, PIPE:, AUX:, ... are not

     In AmigaOS if devicename contains no ":" then result
     is always TRUE. Also volume and assign names return
     TRUE.
     


----------

IsInteractive()
===============

Synopsis
~~~~~~~~
::

 LONG IsInteractive(
          BPTR file );

Function
~~~~~~~~
::

     Check if file is bound to an interactive device such as a console
     or shell window.


Inputs
~~~~~~
::

     file   - filehandle


Result
~~~~~~
::

     != 0 if the file is interactive, 0 if it is not.



----------

LoadSeg()
=========

Synopsis
~~~~~~~~
::

 BPTR LoadSeg(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Loads an executable file into memory. Each hunk of the loadfile
     is loaded into its own memory section and a handle on all of them
     is returned. The segments can be freed with UnLoadSeg().


Inputs
~~~~~~
::

     name - NUL terminated name of the file.


Result
~~~~~~
::

     Handle to the loaded executable or NULL if the load failed.
     IoErr() gives additional information in that case.


Notes
~~~~~
::

     This function is built on top of InternalLoadSeg()



See also
~~~~~~~~

`UnLoadSeg()`_ 

----------

Lock()
======

Synopsis
~~~~~~~~
::

 BPTR Lock(
          CONST_STRPTR name,
          LONG accessMode );

Function
~~~~~~~~
::

     Gets a lock on a file or directory. There may be more than one
     shared lock on a file but only one if it is an exclusive one.
     Locked files or directories may not be deleted.


Inputs
~~~~~~
::

     name       - NUL terminated name of the file or directory.
     accessMode - One of SHARED_LOCK
                         EXCLUSIVE_LOCK


Result
~~~~~~
::

     Handle to the file or directory or 0 if the object couldn't be locked.
     IoErr() gives additional information in that case.


Notes
~~~~~
::

     The lock structure returned by this function is different
     from that of AmigaOS (in fact it is identical to a filehandle).
     Do not try to read any internal fields.



----------

LockDosList()
=============

Synopsis
~~~~~~~~
::

 struct DosList * LockDosList(
          ULONG flags );

Function
~~~~~~~~
::

     Waits until the desired dos lists are free then gets a lock on them.
     A handle is returned that can be used for FindDosEntry().
     Calls to this function nest, i.e. you must call UnLockDosList()
     as often as you called LockDosList(). Always lock all lists
     at once - do not try to get a lock on one of them then on another.


Inputs
~~~~~~
::

     flags - what lists to lock


Result
~~~~~~
::

     Handle to the dos list. This is not a direct pointer
     to the first list element but to a pseudo element instead.



----------

LockRecord()
============

Synopsis
~~~~~~~~
::

 BOOL LockRecord(
          BPTR fh,
          ULONG offset,
          ULONG length,
          ULONG mode,
          ULONG timeout );

Function
~~~~~~~~
::

     Lock a portion of a file for exclusive access. A timeout may be
     specified which is the maximum amount of time to wait for the record
     to be available.


Inputs
~~~~~~
::

     fh      - file handle for the file to lock a record of
     offset  - starting position of the lock
     length  - length of the record in bytes
     mode    - lock type
     timeout - timeout interval measured in ticks (may be 0)


Result
~~~~~~
::

     Success/failure indicator.


Notes
~~~~~
::

     Record locks are cooperative, meaning that they only affect other calls
     to LockRecord().



See also
~~~~~~~~

`LockRecords()`_ `UnLockRecord()`_ 

----------

LockRecords()
=============

Synopsis
~~~~~~~~
::

 BOOL LockRecords(
          struct RecordLock * recArray,
          ULONG timeout );

Function
~~~~~~~~
::

     Lock several records at the same time. The timeout specified is applied
     to each lock to attempt. The array of RecordLock:s is terminated with
     an entry where rec_FH is equal to NULL.


Inputs
~~~~~~
::

     recArray - array of records to lock
     timeout  - maximum number of ticks to wait for a lock to be ready


Result
~~~~~~
::

     Success/failure indication. In case of a success, all the record locks
     are locked. In case of failure, no record locks are locked.


Notes
~~~~~
::

     A set of records should always be locked in the same order so as to
     reduce possiblities of deadlock.



See also
~~~~~~~~

`UnLockRecords()`_ 

----------

MakeDosEntry()
==============

Synopsis
~~~~~~~~
::

 struct DosList * MakeDosEntry(
          CONST_STRPTR name,
          LONG type );

Function
~~~~~~~~
::

     Create an entry for the dos list. Depending on the type this may
     be a device, a volume or an assign node.


Inputs
~~~~~~
::

     name - pointer to name
     type - type of list entry to create


Result
~~~~~~
::

     The new device entry, or NULL if it couldn't be created.



See also
~~~~~~~~

`AddDosEntry()`_ `RemDosEntry()`_ `FindDosEntry()`_ `LockDosList()`_ `NextDosEntry()`_ `FreeDosEntry()`_ 

----------

MakeLink()
==========

Synopsis
~~~~~~~~
::

 LONG MakeLink(
          CONST_STRPTR name,
          SIPTR dest,
          LONG soft );

Function
~~~~~~~~
::

     MakeLink() will create a link between two files or directories.
     A link is a filesystem object that refers to another file.

     A soft link refers to another file or directory by name, and is
     resolved by the filesystem and the caller. Soft links are not
     restricted to the same volume and the target does not have to exist.

     A hard link refers to another file by the location on a disk, and
     is resolved by the filesystem. Hard links are restricted to files
     or directories on the same volume.


Inputs
~~~~~~
::

     name - The name of the link to create
     dest - If 'soft' is TRUE this must be a filename; if it is FALSE a lock
            pointing to the file to be hard-linked must be provided
     soft - TRUE, if a soft link is to be created, FALSE for a hard link


Result
~~~~~~
::

     boolean - DOSTRUE or DOSFALSE. On error, IoErr() will contain more
     information.



See also
~~~~~~~~

`ReadLink()`_ 

----------

MatchEnd()
==========

Synopsis
~~~~~~~~
::

 void MatchEnd(
          struct AnchorPath * AP );

Function
~~~~~~~~
::

     Free the memory and file locks that were allocated by calls to
     MatchFirst() and MatchNext().


Inputs
~~~~~~
::

     AP - pointer to Anchor Path structure which had been passed to
          MatchFirst() before.


Result
~~~~~~
::

     None.



----------

MatchFirst()
============

Synopsis
~~~~~~~~
::

 LONG MatchFirst(
          CONST_STRPTR pat,
          struct AnchorPath * AP );

Function
~~~~~~~~
::

     Searches for the first file or directory that matches a given pattern.
     MatchFirst() initializes the AnchorPath structure for you but you
     must initilize the following fields: ap_Flags, ap_Strlen, ap_BreakBits
     and ap_FoundBreak. The first call to MatchFirst() also passes you
     the first matching file, which you can examine in ap_Info, and
     the directory the file is in, in ap_Current->an_Lock. After the first
     call to MatchFirst(), call MatchNext(). The search begins wherever the
     current directory is set to (see CurrentDir()). For more info on
     patterns, see ParsePattern().


Inputs
~~~~~~
::

     pat - pattern to search for
     AP  - pointer to (initilized) AnchorPath structure


Result
~~~~~~
::

     0     = success
     other = DOS error code



See also
~~~~~~~~

`MatchNext()`_ `MatchEnd()`_ `ParsePattern()`_ `Examine()`_ `CurrentDir()`_ `dos/dosasl.h </documentation/developers/headerfiles/dos/dosasl.h>`_ 

----------

MatchNext()
===========

Synopsis
~~~~~~~~
::

 LONG MatchNext(
          struct AnchorPath * AP );

Function
~~~~~~~~
::

     Find next file or directory that matches a given pattern.
     See <dos/dosasl.h> for more docs and how to control MatchNext().


Inputs
~~~~~~
::

     AP - pointer to Anchor Path structure which had been passed to
          MatchFirst() before.


Result
~~~~~~
::

     Zero on success, or error code on failure.



See also
~~~~~~~~

MatchFirst() MatchEnd() CurrentDir() Examine() ExNext() ParsePattern() <dos/dosasl.h 

----------

MatchPattern()
==============

Synopsis
~~~~~~~~
::

 BOOL MatchPattern(
          CONST_STRPTR pat,
          CONST_STRPTR str );

Function
~~~~~~~~
::

     Check if a string matches a pattern. The pattern must be a pattern as
     output by ParsePattern(). Note that this routine is case sensitive.


Inputs
~~~~~~
::

     pat - Pattern string (as returned by ParsePattern())
     str - The string to match against the pattern 'pat'


Result
~~~~~~
::

     Boolean telling whether the string matched the pattern.



See also
~~~~~~~~

`ParsePattern()`_ `MatchPatternNoCase()`_ `MatchFirst()`_ `MatchNext()`_ 

----------

MatchPatternNoCase()
====================

Synopsis
~~~~~~~~
::

 BOOL MatchPatternNoCase(
          CONST_STRPTR pat,
          CONST_STRPTR str );

Function
~~~~~~~~
::

     Similar to MatchPattern(), only case insensitive (see there for
     more information). For use with ParsePatternNoCase().


Inputs
~~~~~~
::

     pat - Pattern as returned by ParsePatternNoCase()
     str - String to match against the pattern 'pat'


Result
~~~~~~
::

     Boolean telling whether the match was successful or not.



See also
~~~~~~~~

`MatchPattern()`_ `ParsePatternNoCase()`_ 

----------

MaxCli()
========

Synopsis
~~~~~~~~
::

 ULONG MaxCli();

Function
~~~~~~~~
::

     Returns the highest Cli number currently in use. Since processes
     may be added and removed at any time the returned value may already
     be wrong.


Result
~~~~~~
::

     Maximum Cli number (_not_ the number of Clis).



----------

NameFromFH()
============

Synopsis
~~~~~~~~
::

 BOOL NameFromFH(
          BPTR fh,
          STRPTR buffer,
          LONG length );

Function
~~~~~~~~
::

     Get the full path name associated with file-handle into a
     user supplied buffer.


Inputs
~~~~~~
::

     fh     - File-handle to file or directory.
     buffer - Buffer to fill. Contains a NUL terminated string if
              all went well.
     length - Size of the buffer in bytes.


Result
~~~~~~
::

     !=0 if all went well, 0 in case of an error. IoErr() will
     give additional information in that case.



----------

NameFromLock()
==============

Synopsis
~~~~~~~~
::

 BOOL NameFromLock(
          BPTR lock,
          STRPTR buffer,
          LONG length );

Function
~~~~~~~~
::

     Get the full path name associated with a lock to a file or
     directory into a user supplied buffer.
     If the lock is zero the buffer will be filled with "SYS:".


Inputs
~~~~~~
::

     lock   - Lock to file or directory or 0.
     buffer - Buffer to fill. Contains a NUL terminated string if
              all went well.
     length - Size of the buffer in bytes.


Result
~~~~~~
::

     !=0 if all went well, 0 in case of an error. IoErr() will
     give additional information in that case.



----------

NewLoadSeg()
============

Synopsis
~~~~~~~~
::

 BPTR NewLoadSeg(
          CONST_STRPTR file,
          const struct TagItem * tags );
 
 BPTR NewLoadSegTags(
          CONST_STRPTR file,
          TAG tag, ... );

Function
~~~~~~~~
::

     Loads an executable file into memory via LoadSeg() and takes
     additional actions based upon the supplied tags.


Inputs
~~~~~~
::

     file - NULL terminated name of the file
     tags - pointer to the tagitems


Result
~~~~~~
::

     Handle to the loaded executable or 0 if the load failed.
     IoErr() gives additional information in that case.


Bugs
~~~~
::

     As there are no tags currently defined, all this function does is
     call LoadSeg()



See also
~~~~~~~~

`LoadSeg()`_ `UnLoadSeg()`_ `InternalLoadSeg()`_ `InternalUnloadSeg()`_ 

----------

NextDosEntry()
==============

Synopsis
~~~~~~~~
::

 struct DosList * NextDosEntry(
          struct DosList * dlist,
          ULONG flags );

Function
~~~~~~~~
::

     Looks for the next dos list entry with the right type. The list
     must be locked for this.


Inputs
~~~~~~
::

     dlist - the value given by LockDosList() or the last call to
             FindDosEntry().
     flags - the same flags as given to LockDosList() or a subset
             of them.


Result
~~~~~~
::

     Pointer to dos list entry found or NULL if the are no more entries.



----------

Open()
======

Synopsis
~~~~~~~~
::

 BPTR Open(
          CONST_STRPTR name,
          LONG accessMode );

Function
~~~~~~~~
::

     Opens a file for read and/or write depending on the accessmode given.


Inputs
~~~~~~
::

     name       - NUL terminated name of the file.
     accessMode - One of MODE_OLDFILE   - open existing file
                         MODE_NEWFILE   - delete old, create new file
                                          exclusive lock
                         MODE_READWRITE - open new one if it doesn't exist


Result
~~~~~~
::

     Handle to the file or 0 if the file couldn't be opened.
     IoErr() gives additional information in that case.



----------

OpenFromLock()
==============

Synopsis
~~~~~~~~
::

 BPTR OpenFromLock(
          BPTR lock );

Function
~~~~~~~~
::

     Convert a lock into a filehandle. If all went well the lock
     will be gone. In case of an error it must still be freed.


Inputs
~~~~~~
::

     lock - Lock to convert.


Result
~~~~~~
::

     New filehandle or 0 in case of an error. IoErr() will give
     additional information in that case.



----------

Output()
========

Synopsis
~~~~~~~~
::

 BPTR Output();

Function
~~~~~~~~
::

     Returns the current output stream or 0 if there is no current
     output stream.


Result
~~~~~~
::

     Output stream handle.



----------

ParentDir()
===========

Synopsis
~~~~~~~~
::

 BPTR ParentDir(
          BPTR lock );

Function
~~~~~~~~
::

     Returns a lock to the parent directory of the supplied lock.


Inputs
~~~~~~
::

     lock - Lock to get parent directory of.


Result
~~~~~~
::

     Returns a lock to the parent directory or NULL, in which case the
     supplied lock has no parent directory (because it is the root
     directory) or an error occured. IoErr() returns 0 in the former case
     and a different value on error.



----------

ParentOfFH()
============

Synopsis
~~~~~~~~
::

 BPTR ParentOfFH(
          BPTR fh );

Function
~~~~~~~~
::

     Lock the directory a file is located in.


Inputs
~~~~~~
::

     fh   - Filehandle of which you want to obtain the parent


Result
~~~~~~
::

     lock - Lock on the parent directory of the filehandle or
            NULL for failure.



See also
~~~~~~~~

`Lock()`_ `UnLock()`_ `ParentDir()`_ 

----------

ParsePattern()
==============

Synopsis
~~~~~~~~
::

 LONG ParsePattern(
          CONST_STRPTR Source,
          STRPTR Dest,
          LONG DestLength );

Function
~~~~~~~~
::

     Takes a pattern containing wildcards and transforms it into some
     intermediate representation for use with the MatchPattern() function.
     The intermediate representation is longer but generally a buffer
     size of 2*(strlen(Source)+1) is enough. Nevertheless you should check
     the returncode to be sure that everything went fine.


Inputs
~~~~~~
::

     Source     - Pattern describing the kind of strings that match.
                  Possible tokens are:
                  #x     - The following character or item is repeaded 0 or
                           more times.
                  ?      - Item matching a single non-NUL character.
                  a|b|c  - Matches one of multiple strings.
                  ~x     - This item matches if the item x doesn't match.
                  (a)    - Parens
                  [a-z]  - Matches a single character out of the set.
                  [~a-z] - Matches a single non-NUL character not in the set.
                  'c     - Escapes the following character.
                  *      - Same as #?, but optional.
     Dest       - Buffer for the destination.
     DestLength - Size of the buffer.


Result
~~~~~~
::

      1 - There are wildcards in the pattern (it might match more than
          one string).
      0 - No wildcards in it, all went fine.
     -1 - An error happened. IoErr() gives additional information in
          that case.



----------

ParsePatternNoCase()
====================

Synopsis
~~~~~~~~
::

 LONG ParsePatternNoCase(
          CONST_STRPTR Source,
          STRPTR Dest,
          LONG DestLength );

Function
~~~~~~~~
::

     Similar to ParsePattern(), only case insensitive (see there
     for more information). For use with MatchPatternNoCase().



See also
~~~~~~~~

`ParsePattern()`_ `MatchPatternNoCase()`_ 

----------

PathPart()
==========

Synopsis
~~~~~~~~
::

 STRPTR PathPart(
          CONST_STRPTR path );

Function
~~~~~~~~
::

     Returns a pointer to the character after the last
     directory in path (see examples).


Inputs
~~~~~~
::

     path - Search this path.


Result
~~~~~~
::

     A pointer to a character in path.


Example
~~~~~~~
::

     PathPart("xxx:yyy/zzz/qqq") would return a pointer to the last '/'.
     PathPart("xxx:yyy") would return a pointer to the first 'y').



----------

PrintFault()
============

Synopsis
~~~~~~~~
::

 BOOL PrintFault(
          LONG code,
          CONST_STRPTR header );

Function
~~~~~~~~
::

     Prints the header and the text associated with the error code to
     the console (buffered), then sets the value returned by IoErr() to
     the error code given.


Inputs
~~~~~~
::

     code   - Error code.
     header - Text to print before the error message. This may be NULL
              in which case only the error message is printed.


Result
~~~~~~
::

     Boolean success indicator.



See also
~~~~~~~~

`IoErr()`_ `Fault()`_ `SetIoErr()`_ 

----------

PutStr()
========

Synopsis
~~~~~~~~
::

 LONG PutStr(
          CONST_STRPTR string );

Function
~~~~~~~~
::

     This routine writes an unformatted string to the default output.  No
     newline is appended to the string and any error is returned.  This
     routine is buffered.


Inputs
~~~~~~
::

     str   - Null-terminated string to be written to default output


Result
~~~~~~
::

     error - 0 for success, -1 for any error.



See also
~~~~~~~~

`FGetC()`_ `IoErr()`_ 

----------

Read()
======

Synopsis
~~~~~~~~
::

 LONG Read(
          BPTR file,
          APTR buffer,
          LONG length );

Function
~~~~~~~~
::

     Read some data from a given file. The request is directly
     given to the filesystem - no buffering is involved. For
     small amounts of data it's probably better to use the
     buffered I/O routines.


Inputs
~~~~~~
::

     file   - filehandle
     buffer - pointer to buffer for the data
     length - number of bytes to read. The filesystem is
              advised to try to fulfill the request as well
              as possible.


Result
~~~~~~
::

     The number of bytes actually read, 0 if the end of the
     file was reached, -1 if an error happened. IoErr() will
     give additional information in that case.



----------

ReadArgs()
==========

Synopsis
~~~~~~~~
::

 struct RDArgs * ReadArgs(
          CONST_STRPTR template,
          SIPTR * array,
          struct RDArgs * rdargs );

Function
~~~~~~~~
::

     Parses the commandline, a given string or Input() and fills
     an argument array according to the options template given.
     The array must be initialized to the wanted defaults before
     each call to ReadArgs(). If the rdargs argument is NULL
     ReadArgs() tries to parse the commandline and continues
     on the input channel if it just consists of a single '?',
     prompting the user for input.


Inputs
~~~~~~
::

     template - Template string. The template string is given as
                a number of options separated by ',' and modified
                by '/' modifiers, e.g. 'NAME,WIDTH/N,HEIGHT/N'
                means get a name string and two numbers (width and
                height). The possible modifiers are:
                /S Option is a switch. It may be either set or
                   left out.
                /T Option is a boolean value. Requires an argument
                   which may be "ON", "YES" (setting the respective
                   argument to 1), "OFF" or "NO" (setting the
                   respective argument to 0).
                /N Option is a number. Strings are not allowed.
                   If the option is optional, a pointer to the
                   actual number is returned. This is how you know
                   if it was really given. The number is always of type
                   LONG.
                /A Argument is required. If it is left out ReadArgs()
                   fails.
                /K The keyword must be given when filling the option.
                   Normally it's skipped.
                /M Multiple strings or, when used in combination with /N,
                   numbers. The result is returned as an array of pointers
                   to strings or LONGs, and is terminated with NULL. /M
                   eats all strings that don't fit into any other option.
                   If there are unfilled /A arguments after parsing they
                   steal strings from /M. This makes it possible to, for
                   example, write a Copy command template like
                   'FROM/A/M,TO/A'. There may be only one /M option in a
                   template.
                /F Eats the rest of the line even if there are option
                   keywords in it.
     array    - Array to be filled with the result values. The array must
                be intialized to the default values before calling
                ReadArgs().
     rdargs   - An optional RDArgs structure determining the type of
                input to process.


Result
~~~~~~
::

     A handle for the memory allocated by ReadArgs(). Must be freed
     with FreeArgs() later.



See also
~~~~~~~~

`FreeArgs()`_ `Input()`_ 

----------

ReadItem()
==========

Synopsis
~~~~~~~~
::

 LONG ReadItem(
          STRPTR buffer,
          LONG maxchars,
          struct CSource * input );

Function
~~~~~~~~
::

     Read an item from a given character source. Items are words
     or quoted strings separated by whitespace or '=' just like on
     the commandline. The separator is unread and the output string
     is terminated by a NUL character.


Inputs
~~~~~~
::

     buffer   - Buffer to be filled.
     maxchars - Size of the buffer. Must be at least 1 (for the NUL
                terminator).
     input    - A ready to use CSource structure or NULL which means
                "read from the input stream".


Result
~~~~~~
::

     One of ITEM_UNQUOTED - Normal word read.
            ITEM_QUOTED   - Quoted string read.
            ITEM_NOTHING  - End of line found. Nothing read.
            ITEM_EQUAL    - '=' read. Buffer is empty.
            ITEM_ERROR    - An error happened.


Notes
~~~~~
::

     This function handles conversion of '**', '*"', etc. inside quotes.

     This function has well known bugs, and should be avoided
     in new applications.


Bugs
~~~~
::

     1. Forgets to unread a separator character (equal sign, whitespace or
        tabulation).
     2. Tries to unread an end-of-line, which actually causes unreading the
        last read character of CSource if supplied. Even if it's not a
        separator, but belongs to the last read item.
     3. IoErr() is never modified by this function.

     As AOS programs that use ReadItem() depend on this broken behaviour,
     it will not be fixed.

     4. If maxchars == 0, buffer[0] is set to NUL anyway.



----------

ReadLink()
==========

Synopsis
~~~~~~~~
::

 LONG ReadLink(
          struct MsgPort * port,
          BPTR lock,
          CONST_STRPTR path,
          STRPTR buffer,
          ULONG size );

Function
~~~~~~~~
::

     Read the filename referred to by the soft-linked object contained
     in |path| (relative to the lock |lock|) into the buffer |buffer|.
     The variable |path| should contain the name of the object that
     caused the original OBJECT_IS_SOFT_LINK error.


Inputs
~~~~~~
::

     port            - The handler to send the request to.
     lock            - Object that |path| is relative to.
     path            - Name of the object that caused the error.
     buffer          - Buffer to fill with resolved filename.
     size            - Length of the buffer.


Result
~~~~~~
::

     >= 0    length of resolved filename in case of success
     == -1   failure, see IoErr() for more information
     == -2   buffer size was too small to store resolved filename



See also
~~~~~~~~

`MakeLink()`_ 

----------

Relabel()
=========

Synopsis
~~~~~~~~
::

 LONG Relabel(
          CONST_STRPTR drive,
          CONST_STRPTR newname );

Function
~~~~~~~~
::

     Change names of a volume.


Inputs
~~~~~~
::

     drive   - The name of the device to rename (including the ':').
     newname - The new name for the device (without the ':').


Result
~~~~~~
::

     A boolean telling whether the name change was successful or not.



----------

RemAssignList()
===============

Synopsis
~~~~~~~~
::

 LONG RemAssignList(
          CONST_STRPTR name,
          BPTR lock );

Function
~~~~~~~~
::

     Remove an entry from a multi-dir assign. The entry removed will be
     the first one that the SameLock() function called on the 'lock'
     parameter returns that they belong to the same object.

     The entry for this lock will be removed from the lock, and the
     lock for the entry in the list will be unlocked.


Inputs
~~~~~~
::

     name    - Name of the device to remove lock from. This should
               not contain the trailing ':'.
     lock    - Lock on the object to remove from the list.


Result
~~~~~~
::

     success - Have we actually succeeded


Bugs
~~~~
::

     If this is the first lock in a list, this will not set
     dol_Device/dol_Unit correctly.



----------

RemDosEntry()
=============

Synopsis
~~~~~~~~
::

 LONG RemDosEntry(
          struct DosList * dlist );

Function
~~~~~~~~
::

     Removes a given dos list entry from the dos list. Automatically
     locks the list for writing.


Inputs
~~~~~~
::

     dlist - pointer to dos list entry.


Result
~~~~~~
::

     !=0 if all went well, 0 otherwise.


Notes
~~~~~
::

     Since anybody who wants to use a device or volume node in the
     dos list has to lock the list, filesystems may be called with
     the dos list locked. So if you want to add a dos list entry
     out of a filesystem don't just wait on the lock but serve all
     incoming requests until the dos list is free instead.



----------

RemSegment()
============

Synopsis
~~~~~~~~
::

 LONG RemSegment(
          struct Segment * seg );

Function
~~~~~~~~
::

     Remove the segment seg from the DOS resident command list.

     The segment to be removed should be in the list, and should
     have a usercount of 0. System or internal segment cannot be
     removed (although they can be replaced).


Inputs
~~~~~~
::

     seg - Segment to remove.


Result
~~~~~~
::

     != 0    Segment was removed
     == 0    Segment was not removed (not in list, or not free).



See also
~~~~~~~~

`AddSegment()`_ `FindSegment()`_ 

----------

Rename()
========

Synopsis
~~~~~~~~
::

 LONG Rename(
          CONST_STRPTR oldName,
          CONST_STRPTR newName );

Function
~~~~~~~~
::

     Renames a given file. The old name and the new name must point to the
     same volume.


Inputs
~~~~~~
::

     oldName - Name of the file to rename
     newName - New name of the file to rename


Result
~~~~~~
::

     boolean - DOSTRUE or DOSFALSE. IoErr() provides additional information
     on DOSFALSE.



----------

ReplyPkt()
==========

Synopsis
~~~~~~~~
::

 void ReplyPkt(
          struct DosPacket * dp,
          SIPTR res1,
          LONG res2 );


----------

RunCommand()
============

Synopsis
~~~~~~~~
::

 LONG RunCommand(
          BPTR segList,
          ULONG stacksize,
          CONST_STRPTR argptr,
          ULONG argsize );

Function
~~~~~~~~
::

     RunCommand() will run the command loaded in the |segList| with the
     arguments specified with a new stack of |stacksize| bytes. Note
     that the stacksize may be extended if this is required.

     The return code of the command run will be returned.

     This call will not return until the command has completed.


Inputs
~~~~~~
::

     segList         - segment of program to run.
     stacksize       - size of the stack to use.
     argptr          - pointer to NULL-terminated arguments.
     argsize         - size of the arguments string.


Result
~~~~~~
::

     The return code from the program, or -1 if the command could not be
     started (e.g. no memory for the stack). See also IoErr().


Notes
~~~~~
::

     Programs expect the argument string to end with a newline ('\n')
     character (ReadArgs() requires it to work properly).



See also
~~~~~~~~

`SystemTagList()`_ 

----------

SameDevice()
============

Synopsis
~~~~~~~~
::

 BOOL SameDevice(
          BPTR lock1,
          BPTR lock2 );

Function
~~~~~~~~
::

     Checks if two locks are on the same device.


Inputs
~~~~~~
::

     lock1, lock2 - locks to compare


Result
~~~~~~
::

     DOSTRUE when locks are on the same device



----------

SameLock()
==========

Synopsis
~~~~~~~~
::

 LONG SameLock(
          BPTR lock1,
          BPTR lock2 );

Function
~~~~~~~~
::

     Compares two locks.


Inputs
~~~~~~
::

     lock1, lock2 - locks to compare


Result
~~~~~~
::

     LOCK_SAME        - locks points to the same object
     LOCK_SAME_VOLUME - locks are on the same volume
     LOCK_DIFFERENT   - locks are different



----------

Seek()
======

Synopsis
~~~~~~~~
::

 LONG Seek(
          BPTR file,
          LONG position,
          LONG mode );

Function
~~~~~~~~
::

     Changes the current read/write position in a file and/or
     reads the current position, e.g to get the current position
     do a Seek(file,0,OFFSET_CURRENT).

     This function may fail (obviously) on certain devices such
     as pipes or console handlers.


Inputs
~~~~~~
::

     file     - filehandle
     position - relative offset in bytes (positive, negative or 0).
     mode     - Where to count from. Either OFFSET_BEGINNING,
                OFFSET_CURRENT or OFFSET_END.


Result
~~~~~~
::

     Absolute position in bytes before the Seek(), -1 if an error
     happened. IoErr() will give additional information in that case.



----------

SelectInput()
=============

Synopsis
~~~~~~~~
::

 BPTR SelectInput(
          BPTR fh );

Function
~~~~~~~~
::

     Sets the current input stream returned by Input() to a new
     value. Returns the old input stream.


Inputs
~~~~~~
::

     fh - New input stream.


Result
~~~~~~
::

     Old input stream handle.



----------

SelectOutput()
==============

Synopsis
~~~~~~~~
::

 BPTR SelectOutput(
          BPTR fh );

Function
~~~~~~~~
::

     Sets the current output stream returned by Output() to a new
     value. Returns the old output stream.


Inputs
~~~~~~
::

     fh - New output stream.


Result
~~~~~~
::

     Old output stream handle.



----------

SendPkt()
=========

Synopsis
~~~~~~~~
::

 void SendPkt(
          struct DosPacket * dp,
          struct MsgPort   * port,
          struct MsgPort   * replyport );

Function
~~~~~~~~
::

     Send a packet to a handler without waiting for the result. The packet
     will be returned to 'replyport'.


Inputs
~~~~~~
::

     packet    - the (initialized) packet to send
     port      - the MsgPort to send the packet to
     replyport - the MsgPort to which the packet will be replied


Result
~~~~~~
::

     This function is callable from a task.



See also
~~~~~~~~

`DoPkt()`_ `WaitPkt()`_ `AbortPkt()`_ 

----------

SetArgStr()
===========

Synopsis
~~~~~~~~
::

 STRPTR SetArgStr(
          CONST_STRPTR string );

Function
~~~~~~~~
::

     Sets the arguments to the current process. The arguments must be
     reset to the original value before process exit.


Inputs
~~~~~~
::

     string - The new argument string (a C string).


Result
~~~~~~
::

     The address of the previous argument string. May be NULL.



See also
~~~~~~~~

`GetArgStr()`_ `RunCommand()`_ 

----------

SetComment()
============

Synopsis
~~~~~~~~
::

 LONG SetComment(
          CONST_STRPTR name,
          CONST_STRPTR comment );

Function
~~~~~~~~
::

     Change the comment on a file or directory. The comment may be any
     NUL-terminated string. The supported size varies from filesystem
     to filesystem. In order to clear an existing comment, an empty
     string should be specified.


Inputs
~~~~~~
::

     name    - name of the file
     comment - new comment for the file.


Result
~~~~~~
::

     Boolean success indicator. IoErr() gives additional information upon
     failure.



----------

SetConsoleTask()
================

Synopsis
~~~~~~~~
::

 struct MsgPort * SetConsoleTask(
          struct MsgPort * handler );

Function
~~~~~~~~
::

     Set the console handler for the current process, and return the
     old handler.


Inputs
~~~~~~
::

     handler - The new console handler for the process.


Result
~~~~~~
::

     The address of the old handler.



See also
~~~~~~~~

`GetConsoleTask()`_ 

----------

SetCurrentDirName()
===================

Synopsis
~~~~~~~~
::

 BOOL SetCurrentDirName(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Sets the name of the current directory in the CLI structure.
     If the name doesn't fit the old name is kept and a failure
     returned. If the current process doesn't have a CLI structure
     this function does nothing.


Inputs
~~~~~~
::

     name - Name for the current directory.


Result
~~~~~~
::

     !=0 on success, 0 on failure.


Bugs
~~~~
::

     Never copies more than 255 bytes.



See also
~~~~~~~~

`GetCurrentDirName()`_ 

----------

SetFileDate()
=============

Synopsis
~~~~~~~~
::

 BOOL SetFileDate(
          CONST_STRPTR name,
          const struct DateStamp * date );

Function
~~~~~~~~
::

     Change the modification time of a file or directory.


Inputs
~~~~~~
::

     name - name of the file
     date - new file time


Result
~~~~~~
::

     Boolean success indicator. IoErr() gives additional information upon
     failure.



----------

SetFileSize()
=============

Synopsis
~~~~~~~~
::

 LONG SetFileSize(
          BPTR file,
          LONG offset,
          LONG mode );

Function
~~~~~~~~
::

     Change the size of a file.


Inputs
~~~~~~
::

     file   - filehandle
     offset - relative size
     mode   - OFFSET_BEGINNING, OFFSET_CURRENT or OFFSET_END


Result
~~~~~~
::

     New size of the file or -1 in case of an error.
     IoErr() gives additional information in that case.



----------

SetFileSysTask()
================

Synopsis
~~~~~~~~
::

 struct MsgPort * SetFileSysTask(
          struct MsgPort * task );

Function
~~~~~~~~
::

     Set the default filesystem handler for the current process,
     the old filesystem handler will be returned.


Inputs
~~~~~~
::

     task - The new filesystem handler.


Result
~~~~~~
::

     The old filesystem handler.



See also
~~~~~~~~

`GetFileSysTask()`_ 

----------

SetIoErr()
==========

Synopsis
~~~~~~~~
::

 SIPTR SetIoErr(
          SIPTR result );

Function
~~~~~~~~
::

     Sets the dos error code for the current process.


Inputs
~~~~~~
::

     result - new error code


Result
~~~~~~
::

     Old error code.



----------

SetMode()
=========

Synopsis
~~~~~~~~
::

 LONG SetMode(
          BPTR fh,
          LONG mode );

Function
~~~~~~~~
::

     SetMode() can be used to change a console handler between
     RAW: mode and CON: mode.


Inputs
~~~~~~
::

     fh   - The filehandle describing the console.
     mode - The new mode of the console:
                1 - RAW: mode
                0 - CON: mode


Result
~~~~~~
::

     This function will return whether it succeeded:

     == DOSTRUE  console mode changed
     != DOSTRUE  console mode change failed.



----------

SetOwner()
==========

Synopsis
~~~~~~~~
::

 BOOL SetOwner(
          STRPTR name,
          ULONG owner_info );

Inputs
~~~~~~
::

     name       - name of the file
     owner_info - (UID << 16) + GID


Result
~~~~~~
::

     != 0 if all went well, 0 else. IoErr() gives additional
     information in that case.



----------

SetProgramDir()
===============

Synopsis
~~~~~~~~
::

 BPTR SetProgramDir(
          BPTR lock );

Function
~~~~~~~~
::

     This function will set a shared lock on the directory that the
     current program was loaded from. This can be accessed through
     the path PROGDIR:. The use of this path is to allow the program
     to easily access files which are supplied with the program.


Inputs
~~~~~~
::

     lock - The lock to set as the new program directory. NULL
            is a valid value.


Result
~~~~~~
::

     This function will return the old program directory lock.


Notes
~~~~~
::

     This function will not duplicate the lock, so you should not
     free the lock.



See also
~~~~~~~~

`GetProgramDir()`_ 

----------

SetProgramName()
================

Synopsis
~~~~~~~~
::

 BOOL SetProgramName(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Sets the name for the current program in the CLI structure. If the
     name doesn't fit the old name is kept and a failure is returned.
     If the current process doesn't have a CLI structure this function
     does nothing.


Inputs
~~~~~~
::

     name - Name for the current program.


Result
~~~~~~
::

     != 0 on success, 0 on failure.


Bugs
~~~~
::

     Never copies more than 255 bytes.



See also
~~~~~~~~

`GetProgramName()`_ 

----------

SetPrompt()
===========

Synopsis
~~~~~~~~
::

 BOOL SetPrompt(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Sets the prompt in the current CLI structure. If the name doesn't
     fit the old name is kept and a failure is returned. If the current
     process doesn't have a CLI structure this function does nothing.


Inputs
~~~~~~
::

     name - The prompt to be set.


Result
~~~~~~
::

     !=0 on success, 0 on failure.


Bugs
~~~~
::

     Never copies more than 255 bytes.



See also
~~~~~~~~

`GetPrompt()`_ 

----------

SetProtection()
===============

Synopsis
~~~~~~~~
::

 LONG SetProtection(
          CONST_STRPTR name,
          ULONG protect );

Inputs
~~~~~~
::

     name    - name of the file
     protect - new protection bits


Result
~~~~~~
::

     != 0 if all went well, 0 else. IoErr() gives additional
     information in that case.



----------

SetVar()
========

Synopsis
~~~~~~~~
::

 BOOL SetVar(
          CONST_STRPTR name,
          CONST_STRPTR buffer,
          LONG size,
          LONG flags );

Function
~~~~~~~~
::

     This function will set a local or environmental variable. Although
     it is recommended that you only use ASCII strings within variables,
     this is not actually required.

     Variable names are not case sensitive.

     SetVar() for an already existing variable changes the variable's
     value to "buffer".


Inputs
~~~~~~
::

     name        -   The name of the variable to set.
     buffer      -   The actual data of the variable.
     size        -   The size of the data in the buffer.
     flags       -   Combination of the type of variable to set (lower
                     8 bits of the value), and various flags which control
                     this function. Flags defined are:

                     GVF_LOCAL_ONLY  -   set a local variable only,
                     GVF_GLOBAL_ONLY -   set a global environmental
                                         variable only.
                     GVF_SAVE_VAR    -   If GVF_GLOBAL_ONLY is set, then
                                         this flag will cause SetVar() to
                                         save the variable to ENVARC: as well
                                         as to ENV:.
                     GVF_BINARY_VAR and GVF_DONT_NULL_TERM are stored in
                     the lv_Flags field for local variables, but not
                     used otherwise by SetVar().

                     Note the default is to set a local environmental
                     variable.

                     The following variable types are defined:
                     LV_VAR          - local environment variable
                     LV_ALIAS        - shell alias
                     LVF_IGNORE      - internal shell use

                     LV_VAR and LV_ALIAS should be treated as
                     "exclusive or".



Result
~~~~~~
::

     Zero if this function failed, non-zero otherwise.


Notes
~~~~~
::

     It is possible to have two variables with the same name as
     long as they have different types.


Bugs
~~~~
::

     Only type LV_VAR can be made global.

     If you set GVF_SAVE_VAR, and this function returns failure, the
     variable may have still been set in ENV:.



See also
~~~~~~~~

`DeleteVar()`_ `FindVar()`_ `GetVar()`_ 

----------

SetVBuf()
=========

Synopsis
~~~~~~~~
::

 LONG SetVBuf(
          BPTR file,
          STRPTR buff,
          LONG type,
          LONG size );

Function
~~~~~~~~
::

     Changes the buffering modes and buffer size for a filehandle.
     With buff == NULL, the current buffer will be deallocated (if it
     was not a user-supplied one) and a new one of (approximately) size
     will be allocated. If buffer is non-NULL, it will be used for
     buffering and must be at least max(size,208) bytes long, and MUST
     be longword aligned. If size is -1, then only the buffering mode
     will be changed.


Inputs
~~~~~~
::

     file - Filehandle
     buff - buffer pointer for buffered I/O or NULL.
     type - buffering mode (see <dos/stdio.h>)
     size - size of buffer for buffered I/O (sizes less than 208 bytes
            will be rounded up to 208), or -1.


Result
~~~~~~
::

     0 if operation succeeded.



----------

SplitName()
===========

Synopsis
~~~~~~~~
::

 LONG SplitName(
          CONST_STRPTR name,
          ULONG separator,
          STRPTR buf,
          LONG oldpos,
          LONG size );

Function
~~~~~~~~
::

     Split a path into parts at the position of separator.


Inputs
~~~~~~
::

     name - Split this path
     separator - Split it at this separator
     buf - Copy the current part into this buffer
     oldpos - Begin at this place with the search for separator.
             If you call this function for the first time, set it
             to 0.
     size - The size of the buffer. If the current part of the
             path is bigger than size-1, only size-1 bytes will
             be copied.


Result
~~~~~~
::

     The next position to continue for the next part or -1 if
     there is no separator after name+oldpos.



----------

StartNotify()
=============

Synopsis
~~~~~~~~
::

 BOOL StartNotify(
          struct NotifyRequest * notify );

Function
~~~~~~~~
::

     Send a notification request to a filesystem. You will then be notified
     whenever the file (or directory) changes.


Inputs
~~~~~~
::

     notify - a notification request for the file or directory to monitor


Result
~~~~~~
::

     Success/failure indicator.


Notes
~~~~~
::

     The file or directory connected to a notification request does not
     have to exist at the time of calling StartNotify(). The NotifyRequest
     used with this function should not be altered while active.



See also
~~~~~~~~

`EndNotify()`_ `dos/notify.h </documentation/developers/headerfiles/dos/notify.h>`_ 

----------

StrToDate()
===========

Synopsis
~~~~~~~~
::

 BOOL StrToDate(
          struct DateTime * datetime );

Function
~~~~~~~~
::

     Converts a human readable ASCII string into an AmigaDOS
     DateStamp.


Inputs
~~~~~~
::

     DateTime - a pointer to an initialized DateTime structure.
             The structure should be initialized as follows:

             dat_Stamp: The converted date will be written here

             dat_Format: How to convert the datestamp into
                 dat_StrDate. Can be any of the following:

                 FORMAT_DOS: AmigaDOS format (dd-mmm-yy). This
                         is the default if you specify something other
                         than any entry in this list.

                 FORMAT_INT: International format (yy-mmm-dd).

                 FORMAT_USA: American format (mm-dd-yy).

                 FORMAT_CDN: Canadian format (dd-mm-yy).

                 FORMAT_DEF: default format for locale.


             dat_Flags: Modifies dat_Format. The only flag
                     used by this function is DTF_FUTURE. If set, then
                     a string like "Monday" refers to the next monday.
                     Otherwise it refers to the last monday.

             dat_StrDay: Ignored.

             dat_StrDate: Pointer to valid string representing the
                     date. This can be a "DTF_SUBST" style string such
                     as "Today" "Tomorrow" "Monday", or it may be a
                     string as specified by the dat_Format byte. This
                     will be converted to the ds_Days portion of the
                     DateStamp. If this pointer is NULL,
                     DateStamp->ds_Days will not be affected.

             dat_StrTime: Pointer to a buffer which contains the
                     time in the ASCII format hh:mm:ss. This will be
                     converted to the ds_Minutes and ds_Ticks portions
                     of the DateStamp.  If this pointer is NULL,
                     ds_Minutes and ds_Ticks will be unchanged.



Result
~~~~~~
::

     A zero return indicates that a conversion could not be performed. A
     non-zero return indicates that the DateTime.dat_Stamp variable
     contains the converted values.



See also
~~~~~~~~

`DateStamp()`_ `DateToStr()`_ 

----------

StrToLong()
===========

Synopsis
~~~~~~~~
::

 LONG StrToLong(
          CONST_STRPTR string,
          LONG * value );

Function
~~~~~~~~
::

     Convert a string to a long number.


Inputs
~~~~~~
::

     string - The value to convert
     value - The result is returned here


Result
~~~~~~
::

     How many characters in the string were considered when it was
     converted or -1 if no valid number could be found.


Notes
~~~~~
::

     The routine doesn't check if the number is too large.
     Examples of valid number: 5, -1, +3, +0007, etc.



----------

SystemTagList()
===============

Synopsis
~~~~~~~~
::

 LONG SystemTagList(
          CONST_STRPTR command,
          const struct TagItem * tags );
 
 LONG SystemTags(
          CONST_STRPTR command,
          TAG tag, ... );

Function
~~~~~~~~
::

     Execute a command via a shell. As defaults, the process will use the
     current Input() and Output(), and the current directory as well as the
     path will be inherited from your process. If no path is specified, this
     path will be used to find the command.

     Normally, the boot shell is used but other shells may be specified
     via tags. The tags are passed through to CreateNewProc() except those
     that conflict with SystemTagList(). Currently, these are

         NP_Seglist
         NP_FreeSeglist
         NP_Entry
         NP_Input
         NP_Error
         NP_Output
         NP_CloseInput
         NP_CloseOutput
         NP_CloseError
         NP_HomeDir
         NP_Cli
         NP_Arguments
         NP_Synchrounous
         NP_UserData


Inputs
~~~~~~
::

     command - program and arguments as a string
     tags    - see <dos/dostags.h>. Note that both SystemTagList() tags and
               tags for CreateNewProc() may be passed.


Result
~~~~~~
::

     The return code of the command executed or -1 if the command could
     not run because the shell couldn't be created. If the command is not
     found, the shell will return an error code, usually RETURN_ERROR.


Notes
~~~~~
::

     You must close the input and output filehandles yourself (if needed)
     after System() returns if they were specified via SYS_Input or
     SYS_Output (also, see below).

     You may NOT use the same filehandle for both SYS_Input and SYS_Output.
     If you want them to be the same CON: window, set SYS_Input to a
     filehandle on the CON: window and set SYS_Output to NULL. Then the
     shell will automatically set the output by opening CONSOLE: on that
     handler. Note that SYS_Error also follows this rule, so passing it
     set to NULL will automatically set the error by opening CONSOLE: on
     that handler.

     If you specified SYS_Asynch, both the input and the output filehandles
     will be closed when the command is finished (even if this was your
     Input() and Output()).



See also
~~~~~~~~

`Execute()`_ `CreateNewProc()`_ `Input()`_ `Output()`_ `dos/dostags.h </documentation/developers/headerfiles/dos/dostags.h>`_ 

----------

UnGetC()
========

Synopsis
~~~~~~~~
::

 LONG UnGetC(
          BPTR file,
          LONG character );

Function
~~~~~~~~
::

     Push a character back into a read filehandle. If you've read
     a character from that file you may always push at least 1 character
     back. UnGetC(file,-1) ungets the last character read. This also
     works for EOF.


Inputs
~~~~~~
::

     file      - Filehandle you've read from.
     character - Character to push back or EOF.


Result
~~~~~~
::

     !=0 if all went well, 0 if the character couldn't be pushed back.
     IoErr() gives additional information in that case.



See also
~~~~~~~~

`FGetC()`_ `IoErr()`_ 

----------

UnLoadSeg()
===========

Synopsis
~~~~~~~~
::

 BOOL UnLoadSeg(
          BPTR seglist );

Function
~~~~~~~~
::

     Free a segment list allocated with LoadSeg().


Inputs
~~~~~~
::

     seglist - The segment list.


Result
~~~~~~
::

     success = returns whether everything went ok. Returns FALSE if
               seglist was NULL.



See also
~~~~~~~~

`LoadSeg()`_ 

----------

UnLock()
========

Synopsis
~~~~~~~~
::

 BOOL UnLock(
          BPTR lock );

Function
~~~~~~~~
::

     Free a lock created with Lock().


Inputs
~~~~~~
::

     lock - The lock to free



----------

UnLockDosList()
===============

Synopsis
~~~~~~~~
::

 void UnLockDosList(
          ULONG flags );

Function
~~~~~~~~
::

     Frees a lock on the dos lists given by LockDosList().


Inputs
~~~~~~
::

     flags - the same value as given to LockDosList().



----------

UnLockRecord()
==============

Synopsis
~~~~~~~~
::

 BOOL UnLockRecord(
          BPTR fh,
          ULONG offset,
          ULONG length );

Function
~~~~~~~~
::

     Release a lock made with LockRecord().


Inputs
~~~~~~
::

     fh     - filehandle the lock was made on
     offset - starting position of the lock
     length - length of the record in bytes


Notes
~~~~~
::

     The length and offset must match the corresponding LockRecord()
     call.



See also
~~~~~~~~

`LockRecord()`_ `UnLockRecords()`_ 

----------

UnLockRecords()
===============

Synopsis
~~~~~~~~
::

 BOOL UnLockRecords(
          struct RecordLock * recArray );

Function
~~~~~~~~
::

     Release an array of record locks obtained with LockRecords().


Inputs
~~~~~~
::

     recArray - array of record locks (previously locked with LockRecords())


Result
~~~~~~
::

     success - Boolean success indicator.


Notes
~~~~~
::

     An array of records may not be modified when records are locked.



See also
~~~~~~~~

`LockRecords()`_ 

----------

VFPrintf()
==========

Synopsis
~~~~~~~~
::

 LONG VFPrintf(
          BPTR file,
          CONST_STRPTR format,
          RAWARG argarray );

Function
~~~~~~~~
::

     Write a formatted (RawDoFmt) string to a specified file (buffered).


Inputs
~~~~~~
::

     file     - Filehandle to write to
     format   - RawDoFmt() style formatting string
     argarray - Pointer to array of formatting values


Result
~~~~~~
::

     Number of bytes written or -1 for an error



----------

VFWritef()
==========

Synopsis
~~~~~~~~
::

 LONG VFWritef(
          BPTR fh,
          CONST_STRPTR fmt,
          const IPTR * argarray );

Function
~~~~~~~~
::

     Write a formatted string (with supplied values) to a specified file.
     The string may be of any length and the routine is buffered.
     The following format commands may be used (preceded by a '%') a la
     printf().

         S  - string (C style)
         Tx - writes a left justified string padding it to be (at least)
              x bytes long
         C  - character
         Ox - octal number; maximum width x characters
         Xx - hexadecimal number; maximum width x characters
         Ix - decimal number; maximum width x chararcters
         N  - decimal number; any length
         Ux - unsigned decimal number; maximum width x characters
         $  - ignore parameter

     Note: 'x' above is the character value - '0'.


Inputs
~~~~~~
::

     fh       - file to write the output to
     fmt      - format string
     argarray - pointer to an array of formatting values


Result
~~~~~~
::

     The number of bytes written or -1 if there was an error.



See also
~~~~~~~~

`VFPrintf()`_ `FPutC()`_ 

----------

VPrintf()
=========

Synopsis
~~~~~~~~
::

 LONG VPrintf(
          CONST_STRPTR format,
          RAWARG argarray );

Function
~~~~~~~~
::

     Writes a formatted string to standard output.


Inputs
~~~~~~
::

     format   - RawDoFmt like format string
     argarray - Pointer to array of formatting values


Result
~~~~~~
::

     Number of bytes written or -1 for an error



----------

WaitForChar()
=============

Synopsis
~~~~~~~~
::

 LONG WaitForChar(
          BPTR file,
          LONG timeout );

Function
~~~~~~~~
::

     Wait for a character to arrive at a filehandle. The filehandle
     can be either a console handle, or a regular file. For a regular
     file most filesystems will return a character immediately, but
     sometimes (for example, a network handler) the character may not
     have arrived.


Inputs
~~~~~~
::

     file    - File to wait for a character on.
     timeout - Number of microseconds to wait for the character
               to arrive.


Result
~~~~~~
::

     != 0    if a character arrived before the timeout expired
     == 0    if no character arrived


Notes
~~~~~
::

     Many filesystems do not implement this function.



----------

WaitPkt()
=========

Synopsis
~~~~~~~~
::

 struct DosPacket * WaitPkt();

Function
~~~~~~~~
::

     Wait for a packet to arrive at your process's pr_MsgPort. It will call
     pr_PktWait if such a function is installed.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     packet - The packet we received.


Notes
~~~~~
::

     The packet will be released from the port.

     This function should NOT be used. It's there only for AmigaOS
     compatibility.



----------

Write()
=======

Synopsis
~~~~~~~~
::

 LONG Write(
          BPTR file,
          APTR buffer,
          LONG length );

Function
~~~~~~~~
::

     Write some data from a given file. The request is directly
     given to the filesystem - no buffering is involved. For
     small amounts of data it's probably better to use the
     buffered I/O routines.


Inputs
~~~~~~
::

     file   - filehandle
     buffer - pointer to buffer for the data
     length - number of bytes to write. The filesystem is
              advised to try to fulfill the request as good
              as possible.


Result
~~~~~~
::

     The number of bytes actually written, 0 if the end of the
     file was reached, -1 if an error happened. IoErr() will
     give additional information in that case.



----------

WriteChars()
============

Synopsis
~~~~~~~~
::

 LONG WriteChars(
          CONST_STRPTR buf,
          ULONG buflen );

Function
~~~~~~~~
::

     Writes the contents of the buffer to the current output stream.
     The number of bytes written is returned.


Inputs
~~~~~~
::

     buf - Buffer to be written.
     buflen - Size of the buffer in bytes.


Result
~~~~~~
::

     The number of bytes written or EOF on failure. IoErr() gives
     additional information in that case.



See also
~~~~~~~~

`FPuts()`_ `FPutC()`_ `FWrite()`_ `PutStr()`_ 

