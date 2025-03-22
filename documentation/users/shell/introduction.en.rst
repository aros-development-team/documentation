==============================
Introduction to the AROS Shell
==============================

:Authors:   Matthias Rustler
:Copyright: Copyright (C) 2006-2009, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Draft


.. Contents::


Introduction
------------
AROS has a command line interface, the 'Shell'.
You can start it with menu Wanderer>Shell. A window
with the path of the current Wanderer window will be opened. The prompt
normally shows the the number of the Shell and the current path.

.. Figure:: /documentation/users/images/shell.png
   :alt: screenshot of Shell window

   A Screenshot of a Shell window


The Shell has a command history. You can access it with cursor up and down
keys.

You can move the cursor in the current command line with the cursor
left and right keys and delete characters with the backspace and delete keys.

There is a completion feature. If you type the first letters of a command
or a filename and press the tabulator key, the Shell searches for a matching
name. If there are more possibilities, a window will be opened where you can
select an entry.

AROS commands and filenames are case insensitive. You can even use
mixed case.

AROS searches commands in the current directory and in the search path.
You can view and change the search path with the `Path <path>`_ command.


Some important commands
-----------------------

+ `CD <cd>`_ -- changes directory
+ `DIR <dir>`_ -- shows content of directory
+ `COPY <copy>`_ -- copies files and directories
+ `DELETE <delete>`_ -- deletes files and directories
+ `INFO <info>`_ -- shows available drives
+ `MAKEDIR <makedir>`_ -- creates directory
+ `RENAME <rename>`_ -- renames files and directories
+ `TYPE <type>`_ -- shows content of text file


Path
----

Absolute paths start with the drive name and a colon (:),
directories are separated with a slash (/).
The drive name can be a device name (dh0:), a volume name (workbench:)
or a logical drive (see `Assign <assign>`_ command)

::

  Example: dh0:dir1/dir2/file.dat

If you need the current path as argument of a command, you can just write "".

::

  Example: copy from ram:x to ""

When the path starts with a colon then it is relative to the root
directory of the current path.

A slash at the beginning of a path means: go one level up. Two slashes mean go
two levels up and so on.

When a path contains spaces it must be written within double quote characters.

::

  Example: type "name with spaces"


Command template
----------------

A question mark after the command shows the parameter template of the command.
The command is then in a mode where it waits for you to type in the
parameters.

::

  Example: copy ?
  FROM/M,TO/A,ALL/S,QUIET/S,BUF=BUFFER/K/N,CLONE/S,DATES/S,NOPRO/S,COM/S,NOREQ/S

The keywords can have options::

  /A -- argument must be given
  /K -- keyword must be written when using this argument
  /S -- switch; just write the keyword to access the switch
  /N -- numerical argument
  /M -- more than one argument is possible
  /F -- rest of command line
  =  -- abbreviation; you can optionally use the abbreviation

Some commands, like `Copy <copy>`_, have an extended help. You can see it when
you type again a question mark after the short help is shown.

When calling a command '=' can be used for distinct assignment between keyword
and value::

  Example: copy from=a.dat to=b.dat


Patterns
--------

Some commands allow patterns for filename parameters::

  ?  -- one arbitrary character
  #? -- zero or more arbitrary characters
  #x -- zero or more x
  ~  -- negation
  %  -- matches the null string (no characters).
  |  -- or
  () -- group
  [] -- range
  '  -- disable the following special character

Examples::

  dir #?.info
  dir #?~(.info)
  dir a(b|c)d
  dir [a-c]e
  dir a(b|d|%)#c


Redirection
-----------

::

  > redirects output to file or device
  >> redirects output and appends to file
  < redirects input from file or device

  Example: dir >ram:a


Pipe
----

If you want to forward the output of a command to another command you can use
the pipe. You have to connect the commands with a \| character. There must be
at least one space before and after the \|::

  Example: dir | othercommand

But what if the second command wants to read the input from a file? The
solution is to use the fake device 'in:'::

  Example: dir | more in:


Special devices
---------------

+ ram: you can use the ram disk like a hard drive. But after a reset its
  content is lost.
+ nil: if you don't want the messages of a command to be displayed in the
  window you   can use the 'nil:' device. Example: delete #? >nil:
+ con: read/write from/to another Shell window
+ console: the current Shell window
+ sys: the drive from which AROS was booted
+ ser: the serial interface
+ par: the parallel interface


Running in background
---------------------

Normally, a command blocks the Shell until it is finished. You can run
commands in the background with the `run <run>`_ command.

::

  Example: run delete #?


Info files
----------

Files with the suffix '.info' play an important role in Wanderer. They contain
the icon picture and some additional information. When you work with shell
commands you have to take the Info files into account.

