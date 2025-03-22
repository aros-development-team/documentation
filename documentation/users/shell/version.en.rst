=======
Version
=======
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <uuidgen>`_ `Next <wait>`_ 

---------------

Name
~~~~
::


     Version [<library|device|file>] [<version #>] [<revision #>] [FILE] [FULL] [RES]


Synopsis
~~~~~~~~
::


     NAME/M,MD5SUM/S,VERSION/N,REVISION/N,FILE/S,FULL/S,RES/S,ARCH/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


 Prints or checks the version and revision information of a file, library or device.


Inputs
~~~~~~
::


 NAME      -- name of file, library or device to check. If not given it
              prints version and revision of Kickstart.
 MD5SUM    -- message-digest computation
 VERSION   -- checks for version and returns error code 5 (warn) if the
              version of the file is lower.
 REVISION  -- checks for revision and returns error code 5 (warn) if the
              revision of the file is lower.
 FILE      -- reads from file and ignores currently loaded libraries and devices
 FULL      -- prints additional information
 RES       -- gets version of resident commands
 ARCH      -- displays architecture information about a file


Notes
~~~~~
::

 If the tag contains a trailing space and dollar sign, you may use the Unix command ident.


