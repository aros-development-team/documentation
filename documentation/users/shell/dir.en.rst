===
Dir
===
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <devlist>`_ `Next <diskchange>`_ 

---------------

Name
~~~~
::


 Dir [(dir | pattern)] [OPT A | I | D | F] [ALL] [DIRS] [FILES] [INTER]



Synopsis
~~~~~~~~
::


 DIR,OPT/K,ALL/S,DIRS/S,FILES/S,INTER/S


Location
~~~~~~~~
::


 C:


Function
~~~~~~~~
::


 DIR displays the file or directory contained in the current or
 specified directory. Directories get listed first, then in alphabetical
 order, the files are listed in two columns. Pressing CTRL-C aborts the
 directory listing.



Inputs
~~~~~~
::


 ALL    --  Display all subdirectories and their files recursively.
 DIRS   --  Display only directories.
 FILES  --  Display only files.
 INTER  --  Enter interactive mode.

            Interactive listing mode stops after each name to display
            a question mark at which you can enter commands. These
            commands are:

            Return      --  Goto the next file or directory.
            E/ENTER     --  Enters a directory.
            B/BACK      --  Go back one directory level.
            DEL/DELETE  --  Delete a file or an empty directory.
            T/TYPE      --  Display content of a file.
            C/COM       --  Let the file or directory be the input of
                            a DOS command (which specified after the C or
                            COM or specified separately later).
            Q/QUIT      --  Quit interactive mode.


Bugs
~~~~
::


 Interactive mode isn't fully working. It only walks stepwise
 through the directory.


