========
kbd_hidd
========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

Classes
-------

+ `CLID_Hidd_Kbd`_
+ `CLID_HW_Kbd`_

----------

CLID_Hidd_Kbd
-------------

========================================== ========================================== ========================================== ========================================== 
`--background_kbdclass--`_                 `aoHidd_Kbd_IrqHandler`_                   `aoHidd_Kbd_IrqHandlerData`_               `moHidd_Kbd_AddHardwareDriver`_            
`moHidd_Kbd_RemHardwareDriver`_            
========================================== ========================================== ========================================== ========================================== 

-----------

--background_kbdclass--
=======================

Notes
~~~~~
::

     Instances of this class are virtual devices being clients of the
     keyboard input subsystem. In order to receive keyboard events, you
     have to create an object of this class and supply a callback using
     aoHidd_Kbd_IrqHandler attribute. After this your callback will be
     called every time the event arrives until you dispose your object.

     Every client receives events from all keyboard devices merged into
     a single stream.



----------

aoHidd_Kbd_IrqHandler
=====================

Synopsis
~~~~~~~~
::

     [I..], APTR


Function
~~~~~~~~
::

     Specifies a keyboard event handler. The handler will be called every time a
     keyboard event occurs.  Handlers should be declared using 'C' calling conventions,
     e.g.:

     void KeyboardIRQ(APTR data, KbdIrqData_t keyData)

     Handler parameters are:
         data    - The handler will be called with this set to the value
                   defined using the aoHidd_Kbd_IrqHandlerData attribute.
         keyData - The keyData is an OR'd value of the input handlers flags
                   and the raw key code as specified in devices/rawkeycodes.h.
                   keyData = (flags << 16 ) | rawkeycode.
                   A key 'release' event is indicated by OR'ing this value
                   with IECODE_UP_PREFIX (defined in devices/inputevent.h)
                   currently supported flags are -:
                   KBD_NOCAPSUP - The keyboard does not generate an UP event for Caps Lock.

     The handler is called inside interrupts, so usual restrictions apply to it.


Bugs
~~~~
::

     Not all hosted drivers provide this attribute.



See also
~~~~~~~~

`aoHidd_Kbd_IrqHandlerData`_ 

----------

aoHidd_Kbd_IrqHandlerData
=========================

Synopsis
~~~~~~~~
::

     [I..], APTR


Function
~~~~~~~~
::

     Specifies a user-defined value that will be passed to IRQ handler as a first
     parameter. The purpose of this is to pass some static data to the handler.
     The system will not assume anything about this value.

     Defaults to NULL if not specified.



See also
~~~~~~~~

`aoHidd_Kbd_IrqHandler`_ 

----------

moHidd_Kbd_AddHardwareDriver
============================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_Kbd_AddHardwareDriver *Msg);

     OOP_Object *HIDD_Kbd_AddHardwareDriver(OOP_Object *obj, OOP_Class *driverClass,
                                            struct TagItem *tags);


Function
~~~~~~~~
::

     Creates a hardware driver object and registers it in the system.

     It does not matter on which instance of CLID_Hidd_Kbd class this method is
     used. Hardware driver objects are shared between all of them.

     Since V2 this interface is obsolete and deprecated. Use moHW_AddDriver
     method on CLID_HW_Kbd class in order to install the driver.


Inputs
~~~~~~
::

     obj         - Any object of CLID_Hidd_Kbd class.
     driverClass - A pointer to OOP class of the driver. In order to create an object
                   of some previously registered public class, use
                   oop.library/OOP_FindClass().
     tags        - An optional taglist which will be passed to driver class' New() method.


Result
~~~~~~
::

     A pointer to driver object.


Notes
~~~~~
::

     Do not dispose the returned object yourself, use HIDD_Kbd_RemHardwareDriver() for it.



See also
~~~~~~~~

`moHidd_Kbd_RemHardwareDriver`_ 

----------

moHidd_Kbd_RemHardwareDriver
============================

Synopsis
~~~~~~~~
::

     void OOP_DoMethod(OOP_Object *obj, struct pHidd_Kbd_RemHardwareDriver *Msg);

     void HIDD_Kbd_RemHardwareDriver(OOP_Object *obj, OOP_Object *driver);


Function
~~~~~~~~
::

     Unregisters and disposes keyboard hardware driver object.

     It does not matter on which instance of CLID_Hidd_Kbd class this method is
     used. Hardware driver objects are shared between all of them.

     Since V2 this interface is obsolete and deprecated. Use moHW_RemoveDriver
     method on CLID_HW_Kbd class in order to remove the driver.


Inputs
~~~~~~
::

     obj    - Any object of CLID_Hidd_Kbd class.
     driver - A pointer to a driver object, returned by HIDD_Kbd_AddHardwareDriver().


Result
~~~~~~
::

     None



See also
~~~~~~~~

`moHidd_Kbd_AddHardwareDriver`_ 

CLID_HW_Kbd
-----------

========================================== ========================================== ========================================== ========================================== 
`--background_kbdsubsystem--`_             `--hardware_drivers--`_                    
========================================== ========================================== ========================================== ========================================== 

-----------

--background_kbdsubsystem--
===========================

Notes
~~~~~
::

     This class represents a keyboard input subsystem in AROS. Additionally
     it serves as a "hub" for collecting input from various keyboard devices
     in the system. Events from all keyboard devices are merged into a single
     stream and propagated to all clients.

     In order to get an access to keyboard input subsystem you need to
     create an object of CLID_HW_Kbd class. The actual returned object is a
     singletone, you do not have to dispose it, and every call will return
     the same object pointer. After getting this object, you can, for example,
     register your driver using moHW_AddDriver method, or enumerate drivers
     using moHW_EnumDrivers.

     If you wish to receive keyboard events, use objects of CLID_Hidd_Kbd
     class. This class implements the same interface as driver class, but
     represents receiver's side and is responsible for registering user's
     interrupt handler in the listeners chain. These objects are not real
     drivers and do not need to me registered within the subsystem.



----------

--hardware_drivers--
====================

Notes
~~~~~
::

     A hardware driver should be a subclass of CLID_Hidd and implement IID_Hidd_Kbd
     interface according to the following rules:

     1. A single object of driver class represents a single hardware unit.
     2. A single driver object maintains a single callback address (passed to it
        using aoHidd_Kbd_IrqHandler). Under normal conditions this callback is supplied
        by CLID_Hidd_Kbd class.



