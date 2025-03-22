====
ahci
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`--background_busclass--`_              `--background_unitclass--`_             `aoHidd_AHCIBus_Unit`_                  `moHidd_AHCIBus_Shutdown`_              

======================================= ======================================= ======================================= ======================================= 

-----------

--background_busclass--
=======================

Notes
~~~~~
::

     This class serves as a base class for implementing AHCI SATA bus drivers.



----------

--background_unitclass--
========================

Notes
~~~~~
::

     Unit class is private to ahci.device. Instances of this class represent
     devices connected to AHCI buses, and can be used to obtain information
     about these devices.



----------

aoHidd_AHCIBus_Unit
===================

Synopsis
~~~~~~~~
::

     [..G], OOP_Object *


Function
~~~~~~~~
::

     Returns a pointer to OOP object of private unit class, representing
     a drive on the bus, or NULL if there's no device.



----------

moHidd_AHCIBus_Shutdown
=======================

Synopsis
~~~~~~~~
::

     APTR OOP_DoMethod(OOP_Object *obj, struct pHidd_AHCIBus_Shutdown *Msg);

     APTR HIDD_AHCIBus_Shutdown(void);


Function
~~~~~~~~
::

     Instantly shutdown all activity on the bus.


Inputs
~~~~~~
::

     None


Result
~~~~~~
::

     None


Notes
~~~~~
::

     This method is called by ahci.device during system reset handler execution.



