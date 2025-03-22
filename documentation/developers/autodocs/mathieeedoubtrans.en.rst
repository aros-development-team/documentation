=================
mathieeedoubtrans
=================

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`IEEEDPAcos()`_                         `IEEEDPAsin()`_                         `IEEEDPAtan()`_                         `IEEEDPCos()`_                          
`IEEEDPCosh()`_                         `IEEEDPExp()`_                          `IEEEDPFieee()`_                        `IEEEDPLog()`_                          
`IEEEDPLog10()`_                        `IEEEDPPow()`_                          `IEEEDPSin()`_                          `IEEEDPSincos()`_                       
`IEEEDPSinh()`_                         `IEEEDPSqrt()`_                         `IEEEDPTan()`_                          `IEEEDPTanh()`_                         
`IEEEDPTieee()`_                        
======================================= ======================================= ======================================= ======================================= 

-----------

IEEEDPAcos()
============

Synopsis
~~~~~~~~
::

 double IEEEDPAcos(
          double x );

Function
~~~~~~~~
::

     Calculate the arcus cosine of the IEEE double precision number


Result
~~~~~~
::

  IEEE double precision floating point number

   flags:
     zero     : result is zero
     negative : result is negative
     overflow : argument is out of range



----------

IEEEDPAsin()
============

Synopsis
~~~~~~~~
::

 double IEEEDPAsin(
          double x );

Function
~~~~~~~~
::

     Calculate the arcus sine of the IEEE double precision number


Result
~~~~~~
::

     IEEE double precision floating point number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : argument is out of range



----------

IEEEDPAtan()
============

Synopsis
~~~~~~~~
::

 double IEEEDPAtan(
          double y );

Function
~~~~~~~~
::

     Calculates the angle of a given number representing the tangent
     of that angle. The angle will be in radians.


Result
~~~~~~
::

     IEEE double precision floating point number



----------

IEEEDPCos()
===========

Synopsis
~~~~~~~~
::

 double IEEEDPCos(
          double y );

Function
~~~~~~~~
::

     Calculate the cosine of a given IEEE double precision number in radians


Result
~~~~~~
::

     IEEE double precision floating point number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : 0



----------

IEEEDPCosh()
============

Synopsis
~~~~~~~~
::

 double IEEEDPCosh(
          double y );

Function
~~~~~~~~
::

     Calculate the hyperbolic cosine of the IEEE single precision number


Result
~~~~~~
::

     IEEE single precision floating point number

     flags:
     zero     : result is zero
     negative : 0 (not possible)
     overflow : result too big for ffp-number



----------

IEEEDPExp()
===========

Synopsis
~~~~~~~~
::

 double IEEEDPExp(
          double y );

Function
~~~~~~~~
::

     Calculate e^x


Result
~~~~~~
::

     IEEE double precision number

     flags:
     zero     : result is zero
     negative : 0
     overflow : the result was out of range for the IEEE single precision
                format



----------

IEEEDPFieee()
=============

Synopsis
~~~~~~~~
::

 double IEEEDPFieee(
          LONG y );

Function
~~~~~~~~
::

     Convert IEEE single to IEEE double precision


Result
~~~~~~
::

     IEEE double precision floting point number

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : 0



----------

IEEEDPLog()
===========

Synopsis
~~~~~~~~
::

 double IEEEDPLog(
          double y );

Function
~~~~~~~~
::

     Calculate logarithm (base e) of the given IEEE double precision number


Result
~~~~~~
::

     IEEE double precision number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : argument was negative



----------

IEEEDPLog10()
=============

Synopsis
~~~~~~~~
::

 double IEEEDPLog10(
          double y );

Function
~~~~~~~~
::

     Calculate logarithm (base 10) of the given IEEE double precision number


Result
~~~~~~
::

     IEEE double precision number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : argument was negative



----------

IEEEDPPow()
===========

Synopsis
~~~~~~~~
::

 double IEEEDPPow(
          double x,
          double y );

Function
~~~~~~~~
::

     Calculate y raised to the x power (y^x)


Result
~~~~~~
::

     IEEE double precision floating point number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : result is too big



----------

IEEEDPSin()
===========

Synopsis
~~~~~~~~
::

 double IEEEDPSin(
          double y );

Function
~~~~~~~~
::

     Calculate the sine of a given IEEE double precision number in radians


Result
~~~~~~
::

     IEEE double precision floating point number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : 0



----------

IEEEDPSincos()
==============

Synopsis
~~~~~~~~
::

 double IEEEDPSincos(
          double * z,
          double y );

Function
~~~~~~~~
::

     Calculate the cosine and the sine of the given IEEE double
     precision number where y represents an angle in radians. The
     function returns the sine of that number as a result and puts
     the cosine of that number into *z which must represent
     a valid pointer to a IEEE double precision number.


Result
~~~~~~
::

     *z            - IEEE double precision floating point number
     direct result - IEEE double precision floating point number



----------

IEEEDPSinh()
============

Synopsis
~~~~~~~~
::

 double IEEEDPSinh(
          double y );

Function
~~~~~~~~
::

     Calculate the hyperbolic sine of the IEEE double precision number


Result
~~~~~~
::

     IEEE double precision floating point number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : result is too big for IEEE double precsion format



----------

IEEEDPSqrt()
============

Synopsis
~~~~~~~~
::

 double IEEEDPSqrt(
          double y );

Function
~~~~~~~~
::

     Calculate square root of IEEE double precision floating point number


Result
~~~~~~
::

     Motorola fast floating point number

     flags:
     zero     : result is zero
     negative : 0
     overflow : square root could not be calculated



----------

IEEEDPTan()
===========

Synopsis
~~~~~~~~
::

 double IEEEDPTan(
          double y );

Function
~~~~~~~~
::

     Calculate the tangens of the given IEEE double precision number
     where y represents an angle in radians.


Result
~~~~~~
::

     result - IEEE double precision floating point number



----------

IEEEDPTanh()
============

Synopsis
~~~~~~~~
::

 double IEEEDPTanh(
          double y );

Function
~~~~~~~~
::

     Calculate hyperbolic tangens of the IEEE double precision number


Result
~~~~~~
::

     IEEE double precision floating point number

     flags:
     zero     : result is zero
     negative : result is negative
     overflow : (not possible)



----------

IEEEDPTieee()
=============

Synopsis
~~~~~~~~
::

 LONG IEEEDPTieee(
          double y );

Function
~~~~~~~~
::

     Convert IEEE double to IEEE single precision number


Result
~~~~~~
::

     IEEE single precision number

     Flags:
       zero     : result is zero
       negative : result is negative
       overflow : value was out of range for IEEE single precision



