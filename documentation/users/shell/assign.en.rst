======
Assign
======
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <ask>`_ `Next <automount>`_ 

---------------

Name
~~~~
::


     Assign [(name):] [{(target)}] [LIST] [EXISTS] [DISMOUNT] [DEFER]
            [PATH] [ADD] [PREPEND] [REMOVE] [VOLS] [DIRS] [DEVICES]


Synopsis
~~~~~~~~
::


     NAME, TARGET/M, LIST/S, EXISTS/S, DISMOUNT/S, DEFER/S, PATH/S, ADD/S,
     PREPEND/S, REMOVE/S, VOLS/S, DIRS/S, DEVICES/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     ASSIGN creates a reference to a file or directory. The reference
     is a logical device name which makes it very convenient to specify
     assigned objects using the reference instead of their paths.

     If the NAME and TARGET arguments are given, ASSIGN assigns the
     given logical name to the specified target. If the NAME given is
     already assigned to a file or directory the new target replaces the
     previous target. A colon must be included after the NAME argument.

     If only the NAME argument is given, any assigns to that NAME are
     removed. If no arguments whatsoever are given, all logical
     assigns are listed.


Inputs
~~~~~~
::


     NAME      --  the name that should be assigned to a file or directory
     TARGET    --  one or more files or directories to assign the NAME to
     LIST      --  list all assigns made
     EXISTS    --  display the target of the specified assign. If NAME is
                   not assigned, set the condition flag to WARN
     DISMOUNT  --  remove the volume or device NAME from the dos list
     DEFER     --  make an ASSIGN to a path or directory that not need to
                   exist at the time of assignment. The first time the
                   NAME is referenced the NAME is bound to the object
     PATH      --  path is assigned with a non-binding assign. This means
                   that the assign is re-evaluated each time a reference
                   to NAME is done. Like for DEFER, the path doesn't have
                   to exist when the ASSIGN command is executed
     ADD       --  don't replace an assign but add another object for a
                   NAME (multi-assigns)
     PREPEND   --  like ADD, but puts the assign at the front of the list
     REMOVE    --  remove an ASSIGN
     VOLS      --  show assigned volumes if in LIST mode
     DIRS      --  show assigned directories if in LIST mode
     DEVICES   --  show assigned devices if in LIST mode



