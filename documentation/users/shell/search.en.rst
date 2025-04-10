======
Search
======
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <run>`_ `Next <set>`_ 

---------------

Name
~~~~
::


 Search


Synopsis
~~~~~~~~
::


 Search [FROM] {(name | pattern} [SEARCH] (string | pattern) [ALL]
        [NONUM] [QUIET] [QUICK] [FILE] [PATTERN] [LINES=Number]


Location
~~~~~~~~
::


 C:


Function
~~~~~~~~
::


 Search looks through the files contained in the FROM directory for
 a specified string (SEARCH); in case the ALL switch is specified,
 the subdirectories of the FROM directory are also searched. The name
 of all files containing the SEARCH string is displayed together with
 the numbers of the lines where the string occurred.
     If CTRL-C is pressed, the search will be abandoned. CTRL-D will
 abandon searching the current file.


Inputs
~~~~~~
::


 NONUM    --  no line numbers are printed
 QUIET    --  don't display the name of the file being searched
 QUICK    --  more compact output
 FILE     --  look for a file with a specific name rather than a string
              in a file
 PATTERN  --  use pattern matching when searching
 CASE     --  use case sensitive pattern matching when searching
 LINES    --  extra lines after a line match which should be shown


Result
~~~~~~
::


 If the object is found, the condition flag is set to 0. Otherwise it's
 set to WARN.


