====
Path
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <partition>`_ `Next <pathpart>`_ 

---------------

Name
~~~~
::


     Path [{<dir>}] [ADD] [SHOW] [RESET] [REMOVE] [QUIET] [HEAD]


Synopsis
~~~~~~~~
::


     PATH/M,ADD/S,SHOW/S,RESET/S,REMOVE/S,QUIET/S,HEAD/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::

     
     Changes the search path for commands. Without arguments it shows the path.
     

Inputs
~~~~~~
::


     PATH    -- path
     ADD     -- adds path
     SHOW    -- shows path
     RESET   -- removes existing path and replaces it by new path
     REMOVE  -- removes the given path
     QUIET   -- suppresses dialog when a path is not found
     HEAD    -- inserts path at beginning of path list
     

Example
~~~~~~~
::


     path dh0:work add
     

