==============================
The AROS File System Interface
==============================

:Author:    Aaron Digulla
:Copyright: Copyright © 2001, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

.. Note::

   This document is currently only a draft and as such will most likely change
   before it is accepted as an official specification. It might also be
   deprecated if a better approach has been found in the mean time, and
   doesn't necessarily correspond precisely with the current implementations.

.. Contents::
   :depth: 2


Introduction
============

As an application programmer you don't have to worry about the
file system interface -- you can do everything you want via simple calls
to DOS. However you may need to know how to interface with a file system
if you:

+ Need to write your own file system,
+ Wish to do asynchronous I/O,
+ Are writing a console driver,
+ Don't trust DOS.

Of the above the most useful of these would be doing asynchronous I/O,
although it is in many cases better to use one of the publicly available
libraries to do this, as that will hide from you the file systems'
implementation details.




It's completely different
=========================

The interface to the file systems under AROS differs from that under AmigaOS
in many ways:

+ File systems are exec devices, not process' message ports. This gives
  two main benefits -- it is possible to do some work on the callers
  schedule, which for simple requests can save two context switches;
  and it gives us a way to abort a request, which is an important
  feature for a network file system.
+ There is no difference between locks and file handles any more. This
  avoids requiring redundant methods such as `ACTION_FH_FROM_LOCK`.
+ No BCPL -- everything is a C data type or a string. A side effect
  of this is that there is no limit on string size which translates
  to no limit on filename size either.

Obviously this change renders the file system incompatible to the current
AmigaOS file systems and DOS implementation. However it should be possible
to build a bridge between the file systems if necessary.




File system devices
===================

The major API-change of file systems is that they now use the Exec Device
API. You can use the normal device functions (`DoIO()`, `AbortIO()`, etc.).
The I/O Request structure is defined in `dos/file systems.h`::

    /* IORequest from <exec/io.h> */
    struct IORequest
    {
        struct Message  io_Message;
        struct Device  *io_Device;  /* file system base pointer */
        struct Unit    *io_Unit;    /* file or directory handle */
        UWORD           io_Command; /* the command */
        UBYTE           io_Flags;   /* normal device flags (IOF_QUICK) */
        BYTE            io_Error;   /* error code from device functions */
    };

    struct IOFileSys
    {
        struct IORequest IOFS;
        LONG             io_DosError; /* secondary error code (IoErr()) */
        union {}         io_Union;    /* arguments - command dependent */
    };

The `io_DosError` field is used to return the secondary error
code to the caller. This is the code that is returned by the
`dos.library` function `IoErr()`. The `io_Error`field of `struct IORequest`
should only be used to return a simple failure/success for file system
commands, and should have the normal effect for the device open/close
commands.

The `io_Union` field is an union containing different structures for each of
the commands. This field has a variable length depending upon the command. The
fields listed in the "Input" sections of the autodocs below refer to a
specific member of this union.




Command documentation
=====================

OpenDevice()
------------

Name
""""

``OpenDevice("*.handler", 0, iofs, 0);``


Function
""""""""

Mount a new file system. The `IOFileSys` structure passed in `iofs` to the
handler should contain enough information for the handler to mount the
file system.

If a volume is mounted in this device, it's the responsibility of the handler
to add the required volume nodes to the DOS device list before returning to
the caller. Note here, that the DOS device list is already locked, so you do
not need to lock it yourself.

The file system must return a handle to the device in the `io_Unit` pointer of
the `struct IOFileSys`. The `io_Error` and `io_DosError` fields should be set
appropriately for success or failure.


Input
"""""

`iofs`
    The union field `io_OpenDevice` is being used. Fill it with these values:

    `io_DeviceName`
        Name of the exec device to mount the file system upon. This device is
        the underlying hardware of the device. Note that this field may not be
        valid for some special types of handlers (for example network
        file systems or special devices ``AUX:``, ``SER:``).

    `io_Unit`
        Unit number for the exec device. Note this is the
        `io_Union.io_DeviceName.io_Unit` field, not `io_Unit`.

    `io_Environ`
        This is a pointer to the struct DosEnvec which describes this device.


Result
""""""

`io_Device`
    device base pointer.

`io_Unit`
    logical device handle.

`io_Error`
    `IOERR_OPENFAIL` or ``0`` for no error.

`io_DosError`
    DOS error code or ``0`` for no error.


See also
""""""""

+ `CloseDevice()`_



CloseDevice()
-------------

Name
""""

``CloseDevice()``


Function
""""""""

Try to dismount a DOS device. If there are any mounted volumes in the device,
the file system should remove them from the DOS device list. Note that the DOS
device list will have already been locked by the caller, so you will not have
to do this yourself.

You should not dismount the device if there are open files or outstanding
locks remaining.


Input
"""""

`io_Unit`
    logical device handle.


Result
""""""

The DOS device shall be dismounted if possible.

`io_DosError`
    DOS error code or ``0`` for no error.


See also
""""""""

+ `OpenDevice()`_



FSA_OPEN
--------

Name
""""

``FSA_OPEN``


Function
""""""""

Create a handle to an existing file or directory. You can use this
handle to read directories or read/write files.

The filename ``io_Args[0]``
is relative to the path of the directory
associated with the handle `io_Unit`. If
`io_Unit` is `NULL` however,
the filename should be taken as relative to the root directory of
the device.

This command uses the ``io_Union.io_OPEN`` member.


Input
"""""

`io_Unit`
    Handle to the current directory.

`io_Filename`
    Relative file or directory name.

`io_FileMode`
    Mode to open with:

    `FMF_LOCK`
        lock exclusively

    `FMF_READ`
        open for reading

    `FMF_WRITE`
        open for writing

    `FMF_EXECUTE`
        open to execute


Result
""""""

`io_Unit`
    Freshly created handle.

`io_DosError`
    DOS error code or ``0`` for success.


See also
""""""""

+ FSA_OPEN_FILE_
+ FSA_CLOSE_



FSA_CLOSE
---------

Name
""""

``FSA_CLOSE`` - close an open file


Function
""""""""

Close a file or directory handle. You should write out any buffered
data before returning. It is the responsibility of the file system
to free the data pointed to by `io_Unit`.


Input
"""""

`io_Unit`
    Handle to a file or directory.


Result
""""""

`io_DosError`
    DOS error code or ``0`` for no error.


See also
""""""""

+ FSA_OPEN_
+ FSA_OPEN_FILE_



FSA_READ
--------

Name
""""

``FSA_READ``


Function
""""""""

Try and read the requested number of bytes from the file handle.
A handler will normally try and fulfil the request completely,
but special handlers (such as the console) may return less than
the requested number of bytes.

If you reach the end of the file, you should return the number
of bytes read in the current attempt. On the next call you should
return 0 for EOF. Any further attempts to read should result in
a return of -1 with an error code.

This function uses the `io_Union.io_READ_WRITE` field.


Input
"""""

`io_Unit`
    File handle.

`io_Buffer`
    Pointer to byte buffer.

`io_Length`
    Number of bytes to read from the file.


Result
""""""

The buffer `io_Buffer` should contain some data if it was
possible to read any.

`io_Length`
    Number of bytes read.

`io_DosError`
    DOS error code or ``0`` for no error.


See also
""""""""

+ FSA_WRITE_



FSA_WRITE
---------

Name
""""

``FSA_WRITE`` - Write to a file


Function
""""""""

Try to write the requested number of bytes to the file handle.
A handler should try and fulfil the request completely, but
special handlers may write less than the requested number of
bytes.

If you cannot write any bytes return 0 in `io_Length`.

This command uses the `io_Union.io_READ_WRITE` member.

Input
"""""

`io_Unit`
    File handle.

`io_Buffer`
    Byte buffer containing data to write.

`io_Length`
    Number of bytes in buffer.


Result
""""""

The contents of the buffer should have been written to the
stream.

`io_Length`
    Number of bytes read.

`io_DosError`
    DOS error code or ``0`` for no error.


See also
""""""""

+ FSA_READ_



FSA_SEEK
--------

Name
""""

``FSA_SEEK`` - Seek within a file.


Function
""""""""

This command shall change the position of the next read or write in the file.
The command will also return the old position in the file.

FIXME: Error condition for seeking before the start, or after the end of file.

This command uses the ``io_Union.io_SEEK`` member.


Notes
"""""

A command with ``io_Offset == 0``, and ``io_SeekMode == OFFSET_CURRENT`` is
a NOP in terms of seeking and will simply return the current file position.


Input
"""""

io_Unit
    file handle

io_Offset
    offset

io_SeekMode
    mode

    OFFSET_BEGINNING
        offset is relative to the beginning of the file

    OFFSET_CURRENT
        offset is relative to the current position

    OFFSET_END
        offset is relative to the end of the file


Result
""""""

io_Offset
    old position

io_DosError
    DOS error code or ``0`` for no error.



FSA_SET_FILE_SIZE
-----------------

Name
""""

``FSA_SET_FILE_SIZE`` - Set the size of a file.


Function
""""""""

Change the size of a file.

If the old file size is less than the new size, then the file is simply
truncated. If the file is made larger, then the data contained in the new
section is invalid.

This command uses the ``io_Union.io_SEEK`` member.


Input
"""""

io_Unit
    file handle

io_Offset
    offset

io_SeekMode
    mode

    OFFSET_BEGINNING
        offset is relative to the beginning of the file

    OFFSET_CURRENT
        offset is relative to the current position

    OFFSET_END
        offset is relative to the end of the file


Result
""""""

The file will be the new size.

io_DosError
    dos error code or 0 for success


Notes
"""""

Not all handlers will support this command.



FSA_WAIT_CHAR
-------------

Name
""""

``FSA_WAIT_CHAR`` - wait for a character to arrive


Function
""""""""

This command will wait for a character to be ready for reading. You should
only wait for a maximum of ``io_Timeout`` microseconds. If ``io_Timeout`` is
0, then you should wait indefinitely.

This command can be used on both plain files and interactive files. For plain
files it should return immediately, unless for some reason there is no data
available (a PIPE or a network file where there is no data yet).

This command uses the ``io_Union.io_WAIT_CHAR`` member.


Input
"""""

io_Unit
    File handle to wait on

io_Timeout
    number of microseconds to wait for input


Result
""""""

io_Success
    set to TRUE if a character arrived in time.

io_DosError
    set to the DOS error code, or 0 for no error


See also
""""""""

+ `FSA_IS_INTERACTIVE`_



FSA_FILE_MODE
-------------

Name
""""

``FSA_FILE_MODE`` - set the mode of a file


Function
""""""""

Apply a new mode to the file. This command uses a mask to define which of the
modes should be changed. Supplying a mask of 0 will return the current set of
modes.

This command uses the ``io_Union.io_FILE_MODE`` member.


Input
"""""

io_Unit
    File handle to change mode on

io_FileMode
    new modes to apply to the file

io_Mask
    mask of modes which are to be changed.


Result
""""""

The modes should be set to those described by the mask and mode flags.

io_FileMode
    the new set of file modes

io_DosError
    the DOS error code on failure, or 0 for success



FSA_IS_INTERACTIVE
------------------

Name
""""

``FSA_IS_INTERACTIVE`` - is this file a terminal


Function
""""""""

Query the file system as to whether this file is a interactive terminal.

This function uses the ``io_Union.io_IS_INTERACTIVE`` member.


Input
"""""

io_Unit
    File handle to query


Result
""""""

io_IsInteractive
    TRUE if the file is interactive, FALSE otherwise

io_DosError
    dos error code, or 0 for success.


See also
""""""""

+ `FSA_WAIT_CHAR`_



FSA_SAME_LOCK
-------------

Name
""""

``FSA_SAME_LOCK`` - are two locks the same?


Function
""""""""

This function will compare two locks, and return whether the refer to the same
object in the file system.

This command uses the ``io_Union.io_SAME_LOCK`` member.


Input
"""""

``io_Lock[0]``
    lock 1

``io_Lock[1]``
    lock 2


Result
""""""

io_Same
    set to LOCK_DIFFERENT or LOCK_SAME depending upon the result of the
    comparison.

io_DosError
    DOS error code, or 0 for success.


See also
""""""""

+ `FSA_OPEN`_



FSA_EXAMINE
-----------

Name
""""

``FSA_EXAMINE`` - examine a file or directory


Function
""""""""

This command will obtain information about the current file or directory and
return it in the ExAllData structure passed in.

Passing file systems the FileInfoBlock structure is not supported, as that has
limits upon the size of paths. The AROS dos.library will handle the
translation between the two structures.

You need only return the information requested, which is determined by the
value in ``io_Mode``.

This command uses the ``io_Union.io_EXAMINE``.


Input
"""""

io_Unit
    Handle of a file or directory

io_ead
    struct ExAllData to be filled.

io_Size
    size of the buffer in bytes.

io_Mode
    type of information to obtain.


Result
""""""

io_DosError
    one of the DOS error codes, or 0 for success.


See also
""""""""

+ `FSA_EXAMINE_ALL`_



FSA_EXAMINE_ALL
---------------

Name
""""

``FSA_EXAMINE_ALL`` - Examine the contents of a directory


Function
""""""""

Read the directory information of the current file or directory. If the handle
is for a file, then you need only fill in the information for that file. You
need only fill in the information requested by the caller.

You should continue filling in information in the buffer until you run out of
space. The ed_Next fields of the ExAllData structure are used to link the
entries together. The last entry should have ``ed_Next = NULL``. Entries
should be aligned to the size of the system pointer datatype.

If ``io_DosError != 0``, then the contents of the buffer is undefined.
If you need space to store filenames, comments strings, etc. these
should be placed at the end of the buffer.


Input
"""""

io_Unit
    Handle of a file or directory

io_ead
    struct ExAllData[] buffer to be filled

io_Size
    size of the buffer in bytes

io_Mode
    type of information to get


Result
""""""

io_DosError
    dos error code or 0 for success.


See also
""""""""

+ `FSA_EXAMINE`_
+ `FSA_EXAMINE_ALL_END`_



FSA_EXAMINE_ALL_END
-------------------

Name
""""

``FSA_EXAMINE_ALL_END`` - Finish examining a number of files.


Function
""""""""

Finish examining a number of objects in the file system. This is used to reset
the file systems internal state if required.

This command does not use the ``io_Union`` field.


Input
"""""

io_Unit
    File handle


Result
""""""

io_DosError
    DOS error code, or 0 for success.


See also
""""""""

+ `FSA_EXAMINE`_
+ `FSA_EXAMINE_ALL`_



FSA_OPEN_FILE
-------------

Name
""""

``FSA_OPEN_FILE``


Function
""""""""

Open a handle for a file, creating the file if necessary. This command only
works on files, not directories.


Function
""""""""

Open a handle for a file, creating the file if necessary. Thee
``io_Filename`` field gives the name of the file, which is relative to the
handle passed in ``io_Unit``. If the ``io_Unit`` handle is NULL, then the file
is relative to the root of the directory tree.

This command also allows you to change the protection bits of the file.


Input
"""""

io_Unit
    Handle of the current directory.

io_Filename
    filename relative to ``io_Unit``.

io_FileMode
    mode to open with:

    FMF_LOCK
        lock exclusively

    FMF_READ
        open for reading

    FMF_WRITE
        open for writing

    FMF_EXECUTE
        open to execute

    FMF_CREATE
        create the file if it doesn't exist

    FMF_CLEAR
        delete the file before opening

    FMF_RAW
        open cooked console in raw mode (and vice versa).

io_Protection
    The protection bits for the file.


Result
""""""

io_Unit
    pointer to the newly created handle.

io_DosError
    dos error code or 0 for success.


See also
""""""""

+ `FSA_OPEN`_
+ `FSA_CLOSE`_



FSA_CREATE_DIR
--------------

Name
""""

``FSA_CREATE_DIR`` - Create a new directory


Function
""""""""

This command tells the file system to create a new directory, lock it, and
return a handle to the lock. The directory should be created with the modes
given in ``io_Args[1]``.

FIXME: Is the lock read or write?

The lock should be relative to the handle in ``io_Unit``, or to the root
directory if ``io_Unit == NULL``.


Input
"""""

io_Unit
    Handle of the current directory or ``NULL``.

io_Filename
    relative name of directory to create

io_Protection
    protection flags for the new directory


Result
""""""

The requested directory exists, if it could be created.

io_Unit
    handle to the new directory

io_DosError
    dos error code or 0 for success


See also
""""""""

+ `FSA_OPEN`_



FSA_CREATE_HARDLINK
-------------------

Name
""""

``FSA_CREATE_HARDLINK`` - Create a hard link to a file.


Function
""""""""

Create a hard link to a file. There is no difference between a hard link and
its original file. If the original file is deleted, the data will still exist
because of the link.

Hard links can not point across devices.

This command uses the ``io_Union.io_CREATE_HARDLINK`` member.


Input
"""""

io_Unit
    Handle of the current directory or ``NULL``.

io_Filename
    filename of the hard link.

io_OldFile
    file to make the hard link towards.


Result
""""""

A hard link will have been created, if possible.

io_DosError
    DOS error code, or 0 for success.


See also
""""""""

+ `FSA_CREATE_SOFTLINK`_



FSA_CREATE_SOFTLINK
-------------------

Name
""""

``FSA_CREATE_SOFTLINK`` - Create a soft link to a file.


Function
""""""""

Create a soft link to a file. There is a difference between a soft link and
its original file. If the original file is deleted, the soft link will no
longer be valid (but it will not be deleted).

As soft links are stored as the filename of the link to file, they can be used
across devices. This means that the filename stored **must** be an absolute
filename, as the current directory will be unknown at read time.

This command uses the ``io_Union.io_CREATE_SOFTLINK`` member.


Input
"""""

io_Unit
    Handle of the current directory or ``NULL``.

io_Filename
    filename of the soft link to create.

io_Reference
    filename to make the soft link point towards.


Result
""""""

A soft link will have been created if possible.

io_DosError
    DOS error code, or 0 for success.


See also
""""""""

+ `FSA_CREATE_HARDLINK`_



FSA_RENAME
----------

Name
""""

``FSA_RENAME`` - Rename an object in the file system


Function
""""""""

Rename an object in the file system. This function may be called on a file
which doesn't exist. The filenames specified should be considered relative to
``io_Unit`` which specifies the current directory (or NULL for the root
directory).

Renaming a directory is equivalent to moving the entire contents of the
directory.

This command uses the ``io_Union.io_RENAME`` member.


Input
"""""

io_Unit
    Handle of the current directory or ``NULL``.

io_Filename
    old filename

io_NewName
    new filename


Result
""""""

io_DosError
    DOS error code, or 0 for success.



FSA_READ_SOFTLINK
-----------------

Name
""""

``FSA_READ_SOFTLINK`` - Read the name of a soft-linked file.


Function
""""""""

This command will read the name of the file referenced by file ``io_Unit``.
The filename returned is an absolute filename.

This command uses the ``io_Union.io_READ_SOFTLINK`` member.


Input
"""""

io_Unit
    Handle of the file to resolve the soft link from.

io_Buffer
    buffer to fill with the pathname

io_Size
    size of the buffer. Return ``ERROR_LINE_TOO_LONG`` if the buffer is not
    large enough.


Result
""""""

The buffer ``io_Buffer`` will contain the absolute filename that this link
refers to.

io_DosError
    DOS error code, or 0 for success.


See also
""""""""

+ `FSA_CREATE_SOFTLINK`_



FSA_DELETE_OBJECT
-----------------

Name
""""

``FSA_DELETE_OBJECT`` - Delete an object from the file system


Function
""""""""

Delete a given file or directory. It is illegal to try and delete a directory
which contains files - you should return ``ERROR_DIRECTORY_NOT_EMPTY`` if an
attempt is made.

Files with outstanding handles cannot be deleted.

If the ``io_Unit`` handle is ``NULL``, the file to delete is relative to the
root of the file system.


Input
"""""

io_Unit
    Handle of the current directory or ``NULL``.

io_Filename
    relative filename


Result
""""""

io_DosError
    dos error code or 0



FSA_SET_COMMENT
---------------

Name
""""

``FSA_SET_COMMENT`` - Set the comment of an object


Function
""""""""

Set a new comment for a file or directory. The maximum length for
a comment has historically been 80 characters (including NULL
termination).


Input
"""""

io_Unit
    Handle of the current directory.

io_Filename
    relative filename

io_Comment
    pointer to a C string (STRPTR)


Result
""""""

The object will have a new comment.

io_DosError
    dos error code or 0 for success



FSA_SET_PROTECT
---------------

Name
""""

``FSA_SET_PROTECT`` - Set protection bits for a file


Function
""""""""

Set the protection bits on a file or directory. Note that there are four
groups of protection bits:

+ Owner read, write, execute, delete
+ Group read, write, execute, delete
+ Other read, write, execute, delete
+ Pure, Script, Archived

You should note that the owner bits are handled a bit strangely
as they are active low (i.e. 0 means enabled/set).

Note that if ``io_Unit`` is valid (i.e. non-NULL) and ``io_Args[0]`` is NULL,
then you should change the mode of the object described by the ``io_Unit``
handle.


Input
"""""

io_Unit
    Handle of the current directory.

io_Filename
    relative filename

io_Protection
    new protection bits


Result
""""""

The object will have new protection bits.

io_DosError
    dos error code or 0 for success.



FSA_SET_OWNER
-------------

Name
""""

``FSA_SET_OWNER`` - Set the owner of a file


Function
""""""""

This command allows a user to set the ownership of files. The file should be
changed to reflect the new owner of the directory.

The owner and group fields in the arguments are interpreted as 32-bit values,
however in general, they will only be 16-bit values. If the values are outside
the 16-bit range, and you are unable to handle the values then you can return
an error. The ``ERROR_BAD_NUMBER`` appears to be the most appropriate error
number.

Special User ID's:

===  ===================================
  0  root/Supervisor
 -1  No owner (0x0000FFFF or 0xFFFFFFFF)
===  ===================================

Special Group ID's:

===  ===================================
  0  wheel/Supergroup
 -1  No group (0x0000FFFF or 0xFFFFFFFF)
===  ===================================

Typically AmigaOS file systems have had little multi-user support, and it
should be expected that few file systems will actually support this command.
For security reasons, only the superuser or the owner of a file should be
allowed to change the ownership.


Input
"""""

io_Unit
    Handle of the current directory.

io_Filename
    relative filename

io_UID
    new user ID

io_GID
    new group ID


Result
""""""

The file will now be owned by a different user.

io_DosError
    dos error code or 0 or success.



FSA_SET_DATE
------------

Name
""""

``FSA_SET_DATE`` - Set the date of a file/directory


Function
""""""""

Set the modification date of a file or directory. If the file system does not
support the date, for example if it's too old, then you should return
``ERROR_BAD_NUMBER``. It should not be possible to set the creation date of an
object (except by creating it).


Input
"""""

io_Unit
    Handle of the current directory

io_Filename
    relative filename

io_Date
    struct DateStamp describing new date.


Result
""""""

The modification date will have been changed.

io_DosError
    dos error code or 0 for success.



FSA_IS_FILESYSTEM
-----------------

Name
"""""

``FSA_IS_FILESYSTEM`` - Ask the file system handler whether it's a file system


Function
""""""""

Query the file system as to whether it is a proper file system. An example of
something that is not a file system is a device handler, like PAR:.

This command uses the ``io_Union.io_IS_FILESYSTEM`` member.


Input
"""""

None.


Result
""""""

io_IsFilesystem
    TRUE if this is a file system, FALSE otherwise.

io_DosError
    DOS error code, or 0 for success.



FSA_MORE_CACHE
--------------

Name
""""

``FSA_MORE_CACHE`` - Add more cache buffers to the file system.


Function
""""""""

Add the number io_NumBuffers of cache buffers to the file system. The size of
the buffer should have been given during the initial file system open.

If the number of buffers is negative, then the result will be to remove
buffers from the device. You can not have less than 0 buffers.

This command uses the ``io_Union.io_MORE_CACHE`` member.


Input
"""""

io_NumBuffers
    The number of buffers to add/remove.


Result
""""""

The number of buffers will have been altered if possible.

io_NumBuffers
    The new number of buffers in the file system. This should be returned,
    even on failure.

io_DosError
    DOS error code, or 0 for success.



FSA_FORMAT
----------

Name
""""

``FSA_FORMAT`` - Initialize a file system


Function
""""""""

Initialize a device to be used by this file system. The device media should
have already been initialized, and this command simply gets the file system
to write its own data.

This command uses the ``io_Union.io_FORMAT`` member.


Input
"""""

io_VolumeName
    the new name for the volume.

io_DosType
    the new type of the volume. This is file system-specific.


Result
""""""

The file system will have been initialized, and is ready for mounting.

io_DosError
    DOS error code, or 0 for success.



FSA_MOUNT_MODE
--------------

Name
""""

``FSA_MOUNT_MODE``


Function
""""""""

Change or read the mount modes of the volume passed in ``io_Unit``.
The mask is used to select which modes are to be changed.

This command uses the ``io_Union.io_MOUNT_MODE`` member.


Input
"""""

io_MountMode
    The new mount mode of the file system.

io_Mask
    The mask of flags to change in the mount mode.

io_Password
    The password which is required for MMF_LOCKED. It is a good idea not to
    store this password as plain text.


Result
""""""

io_MountMode
    The new mount modes of the file system.

