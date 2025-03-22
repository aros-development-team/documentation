====
Eval
====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <endskip>`_ `Next <execute>`_ 

---------------

Name
~~~~
::


     Eval


Synopsis
~~~~~~~~
::


     VALUE1/A,OP,VALUE2/M,TO/K,LFORMAT/K


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     Evaluate an integer expression and print the result. The result is
     written to standard output if not the TO switch are used which instead
     prints the result to a file. Using the switch LFORMAT, it is
     possible to direct how to write the result. Numbers prefixed by
     0x or #x are interpreted as hexadecimal and those prefixed by # or 0
     are interpreted as octals. Alphabetical characters are indicated
     by a leading single quotation mark ('), and are evaluated as their
     ASCII equivalent.


Inputs
~~~~~~
::


     VALUE1,
     OP,
     VALUE2      --  The expression to evaluate. The following operators
                     are supported

                     Operator              Symbols
                     ----------------------------------
                     addition              +
                     subtraction           -
                     multiplication        *
                     division              /
                     modulo                mod, M, m, %
                     bitwise and           &
                     bitwise or            |
                     bitwise not           ~
                     left shift            lsh, L, l
                     right shift           rsh, R, r
                     negation              -
                     exclusive or          xor, X, x
                     bitwise equivalence   eqv, E, e

     TO          --  File to write the result to
     LFORMAT     --  printf-like specification of what to write.
                     The possible swiches are:
                      
                     %xd --  hexadecimal output, width digit d
                     %od --  octal output, width digit d
                     %n  --  decimal output
                     %c  --  character output (the ANSI-character
                             corresponding to the result value)
                             
                     By specifying *n in the LFORMAT string, a newline
                     is output.


