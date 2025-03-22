============
AddDataTypes
============
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <addbuffers>`_ `Next <alias>`_ 

---------------

Name
~~~~
::


     AddDataTypes (files) [QUIET] [REFRESH] [LIST]


Synopsis
~~~~~~~~
::


     FILES/M, QUIET/S, REFRESH/S, LIST/S


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     AddDataTypes allows you to activate a set of specific DataTypes.
     This might be necessary if new DataTypes were installed on your
     system or were not activated on startup.


Inputs
~~~~~~
::


     FILES  --  The name of the file(s) of the corresponding DataType.
     QUIET  --  Won't output any messages
   REFRESH  --  Refreshes the DataTypes list?
      LIST  --  This will display a list of current DataTypes loaded in
                memory


Result
~~~~~~
::


     Standard DOS error codes.


Example
~~~~~~~
::


     AddDataTypes gif.datatype REFRESH


