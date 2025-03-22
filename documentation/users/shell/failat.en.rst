======
FailAt
======
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <execute>`_ `Next <fault>`_ 

---------------

Name
~~~~
::

     FailAt


Format
~~~~~~
::

     FailAt <limit>


Synopsis
~~~~~~~~
::

     RCLIM/N


Location
~~~~~~~~
::

     C:


Function
~~~~~~~~
::

     FailAt sets the return code limit of the current shell script. If
     any command returns with a failure code of this value or higher
     the script shall abort.

     Common failure codes are:
         0   - No error
         5   - Warning
         10  - Error
         20  - Failure

     The normal value for the return code limit is 10.


Example
~~~~~~~
::

     If we have a script with the commands

         Copy RAM:SomeFile DF0:
         Echo "Done!"

     and the file RAM:SomeFile does not exist, the Copy command will
     return with:

         Copy: object not found
         Copy: returned with error code 20

     and the script will abort. However if you include the command

         FailAt 21

     then the script will complete since the return code from Copy is
     less than the return code limit.


Notes
~~~~~
::

     If this command is called in a script that is executed from another
     script, the new fail level will be inherited by the parent script.


