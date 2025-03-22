===========
RequestFile
===========
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <requestchoice>`_ `Next <requeststring>`_ 

---------------

Name
~~~~
::


     RequestFile


Synopsis
~~~~~~~~
::


     DRAWER,FILE/K,PATTERN/K,TITLE/K,POSITIVE/K,NEGATIVE/K,
     ACCEPTPATTERN/K,REJECTPATTERN/K,SAVEMODE/S,MULTISELECT/S,
     DRAWERSONLY/S,NOICONS/S,PUBSCREEN/K,INITIALVOLUMES/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::

 
     Creates file requester. The selected files will be displayed separated
     by spaces. If no file is selected the return code is 5 (warn).
 

Inputs
~~~~~~
::

     DRAWER          -- initial content of drawer field
     FILE            -- initial content of file field
     PATTERN         -- content of pattern field (e.g. #?.c)
     TITLE           -- title of the dialog box
     POSITIVE        -- string for the left button
     NEGATIVE        -- string for the right button
     ACCEPTPATTERN   -- only files which match the pattern are displayed
     REJECTPATTERN   -- files which match the pattern aren't displayed
     SAVEMODE        -- requester is displayed as save requester
     MULTISELECT     -- more than one file can be selected
     DRAWERSONLY     -- only drawers are displayed
     NOICONS         -- no icon files (#?.info) are displayed
     PUBSCREEN       -- requester is opened on the given public screen
     INITIALVOLUMES  -- shows the volumes
     

Result
~~~~~~
::


     Standard DOS error codes.


