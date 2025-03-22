==========
GfxControl
==========
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <getenv>`_ `Next <iconx>`_ 

---------------

Name
~~~~
::


     GfxControl


Synopsis
~~~~~~~~
::


     PREVENT_DIRECT_BITMAP_ACCESS=PDBA/S,
     ALLOW_DIRECT_BITMAP_ACCESS=ADBA/S,
     DUMP/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Change some internal options of cybergraphics.library
     

Inputs
~~~~~~
::


     PREVENT_DIRECT_BITMAP_ACCESS   --  Causes LockBitMapTagList() calls to
                                        always fail

     ALLOW_DIRECT_BITMAP_ACCESS     --  Allow LocKBitMapTagList() to go to
                                        gfx driver which may or may not
                                        support it. (default)

     DUMP                           --  Show current settings
     

Result
~~~~~~
::


     Standard DOS return codes.


Notes
~~~~~
::

     By default

