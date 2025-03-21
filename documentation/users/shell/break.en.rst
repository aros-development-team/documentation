=====
Break
=====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <binddrivers>`_ `Next <cd>`_ 

---------------

Name
~~~~
::

     Break


Format
~~~~~~
::

     Break <process> [ALL|C|D|E|F]


Synopsis
~~~~~~~~
::

     PROCESS/N,PORT,NAME/K,ALL/S,C/S,D/S,E/S,F/S


Location
~~~~~~~~
::

     C:


Function
~~~~~~~~
::

     BREAK sends one or more signals to a CLI process.
     The argument PROCESS specifies the numeric ID of the CLI process that
     you wish to send the signal to. The STATUS command will list all currently
     running CLI processes along with ther ID.
     You can also specify a public port name and send signal's to the
     port's task.

     You can send all signals at once via option ALL or any combination of the
     flags CTRL-C, CTRL-D, CTRL-E and CTRL-F by their respective options.
     When only the CLI process ID is specified the CTRL-C signal will be sent.

     The effect of using the BREAK command is the same as selecting
     the console window of a process and pressing the relevant key
     combination.

     The normal meaning of the keys is:
         CTRL-C      -       Halt a process
         CTRL-D      -       Halt a shell script
         CTRL-E      -       Close a process' window
         CTRL-F      -       Make active the process' window

     Not all programs respond to these signals, however most should
     respond to CTRL-C.


Inputs
~~~~~~
::

     PROCESS     --  Process Identification number.
     PORT        --  Public port name.
     NAME        --  Process Name. Wildcards are supported.
     ALL         --  All signals are sent.
     C           --  Signal CTRL-C is sent.
     D           --  Signal CTRL-D is sent.
     E           --  Signal CTRL-E is sent.
     F           --  Signal CTRL-F is sent.


Example
~~~~~~~
::


     1.SYS:> BREAK 1

         Send the CTRL-C signal to the process numbered 1.

     1.SYS:> BREAK 4 E

         Send the CTRL-E signal to the process numbered 4.

     1.SYS:> BREAK NAME c:dhcpclient

         Send the CTRL-C signal to the process named "c:dhcpclient".

     1.SYS:> BREAK NAME COPY#?

         Send the CTRL-C signal to the process which matches the pattern COPY#?.


