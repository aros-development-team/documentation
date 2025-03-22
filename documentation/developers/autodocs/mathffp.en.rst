=======
mathffp
=======

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`SPAbs()`_                              `SPAdd()`_                              `SPCeil()`_                             `SPCmp()`_                              
`SPDiv()`_                              `SPFix()`_                              `SPFloor()`_                            `SPFlt()`_                              
`SPMul()`_                              `SPNeg()`_                              `SPSub()`_                              `SPTst()`_                              

======================================= ======================================= ======================================= ======================================= 

-----------

SPAbs()
=======

Synopsis
~~~~~~~~
::

 float SPAbs(
          float fnum1 );

Function
~~~~~~~~
::

     Calculate the absolute value of a given floating point number


Result
~~~~~~
::

     absolute value of fnum1

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : 0


----------

SPAdd()
=======

Synopsis
~~~~~~~~
::

 float SPAdd(
          float fnum1,
          float fnum2 );

Function
~~~~~~~~
::

     Calculate the sum of two ffp numbers


Result
~~~~~~
::

     sum of fnum1 and fnum2.

     Flags:
     zero : result is zero
     negative : result is negative
     overflow : result is too large or too small for ffp format



----------

SPCeil()
========

Synopsis
~~~~~~~~
::

 float SPCeil(
          float y );

Function
~~~~~~~~
::

     Calculate the least integer ffp-number
     greater than or equal to fnum1


Result
~~~~~~
::

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : 0



----------

SPCmp()
=======

Synopsis
~~~~~~~~
::

 LONG SPCmp(
          float fnum1,
          float fnum2 );

Function
~~~~~~~~
::

     Compares two FFP numbers.


Result
~~~~~~
::

    +1 : fnum1 > fnum2
     0 : fnum1 = fnum2
    -1 : fnum1 < fnum2


     Flags:
       zero     : fnum2 = fnum1
       negative : fnum2 < fnum1
       overflow : 0



----------

SPDiv()
=======

Synopsis
~~~~~~~~
::

 float SPDiv(
          float fnum1,
          float fnum2 );

Function
~~~~~~~~
::

     Divide two ffp numbers
     fnum = fnum2 / fnum1;


Result
~~~~~~
::

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : result is out of range


Bugs
~~~~
::

     The parameters are swapped!



----------

SPFix()
=======

Synopsis
~~~~~~~~
::

 LONG SPFix(
          float fnum );

Function
~~~~~~~~
::

     Convert ffp-number to integer


Result
~~~~~~
::

     absolute value of fnum1

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : ffp out of integer-range



----------

SPFloor()
=========

Synopsis
~~~~~~~~
::

 float SPFloor(
          float y );

Function
~~~~~~~~
::

     Calculate the largest integer ffp-number
     less than or equal to fnum


Result
~~~~~~
::

     FFP number

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : 0 (???)


Example
~~~~~~~
::

    floor(10.5) = 10
    floor(0.5)  = 0
    floor(-0.5) = -1
    floor(-10.5)= -11



----------

SPFlt()
=======

Synopsis
~~~~~~~~
::

 float SPFlt(
          LONG inum );

Result
~~~~~~
::

     FFP number

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : ffp is not exactly the integer



----------

SPMul()
=======

Synopsis
~~~~~~~~
::

 float SPMul(
          float fnum1,
          float fnum2 );

Function
~~~~~~~~
::

     Multiply two ffp numbers
     fnum = fnum1 * fnum2;


Result
~~~~~~
::

     FFP number

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : result is out of range



----------

SPNeg()
=======

Synopsis
~~~~~~~~
::

 float SPNeg(
          float fnum1 );

Function
~~~~~~~~
::

     Calculate fnum1*(-1)


Result
~~~~~~
::

     -fnum1

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : 0



----------

SPSub()
=======

Synopsis
~~~~~~~~
::

 float SPSub(
          float fnum1,
          float fnum2 );

Function
~~~~~~~~
::

     Subtract two floating point numbers
     fnum = fnum2 - fnum1;


Result
~~~~~~
::

     FFP number

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : result is out of range



See also
~~~~~~~~

`SPAdd()`_ 

----------

SPTst()
=======

Synopsis
~~~~~~~~
::

 LONG SPTst(
          float fnum );

Function
~~~~~~~~
::

     Compare a ffp-number against zero.


Result
~~~~~~
::

     +1 : fnum > 0.0
      0 : fnum = 0.0
     -1 : fnum < 0.0

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : 0



