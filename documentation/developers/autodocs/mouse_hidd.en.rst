==========
mouse_hidd
==========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

Classes
-------

+ `CLID_Hidd_Mouse`_
+ `CLID_HW_Mouse`_

----------

CLID_Hidd_Mouse
---------------

========================================== ========================================== ========================================== ========================================== 
`--background_mouseclass--`_               `--background_subsystem--`_                `aoHidd_Mouse_Extended`_                   `aoHidd_Mouse_IrqHandler`_                 
`aoHidd_Mouse_IrqHandlerData`_             `aoHidd_Mouse_RelativeCoords`_             `aoHidd_Mouse_State`_                      `moHidd_Mouse_AddHardwareDriver`_          
`moHidd_Mouse_RemHardwareDriver`_          
========================================== ========================================== ========================================== ========================================== 

-----------

--background_mouseclass--
=========================

Notes
~~~~~
::

     Instances of this class are virtual devices being clients of the
     pointing input subsystem. In order to receive input events, you
     have to create an object of this class and supply a callback using
     aoHidd_Mouse_IrqHandler attribute. After this your callback will be
     called every time the event arrives until you dispose your object.

     Every client receives events from all pointing devices merged into
     a single stream.



----------

--background_subsystem--
========================

Notes
~~~~~
::

     This class represents a "hub" for collecting input from various
     pointing devices (mice, tablets, touchscreens, etc) in the
     system. Events from all pointing devices are merged into a
     single stream and propagated to all clients.

     In order to get an access to pointing input subsystem you need to
     create an object of CLID_Hidd_Mouse class. The actual returned
     object is a singletone, you do not have to dispose it, and every
     call will return the same object pointer. After getting this object
     you can, for example, register your driver using moHW_AddDriver
     method, or enumerate drivers using moHW_EnumDrivers.

     If you wish to receive keyboard events, use objects of CLID_Hidd_Mouse
     class. This class implements the same interface as driver class, but
     represents receiver's side and is responsible for registering user's
     interrupt handler in the listeners chain. These objects are not real
     drivers and do not need to me registered within the subsystem.



----------

aoHidd_Mouse_Extended
=====================

Synopsis
~~~~~~~~
::

     [..G], BOOL


Function
~~~~~~~~
::

     Asks the driver if it provides extended event descriptor structure
     (struct pHidd_Mouse_ExtEvent).

     If value of this attribute is FALSE, the flags member is actually missing from
     the structure, not just zeroed out! So do not use it at all in this case.

     CLID_Hidd_Mouse class always return TRUE for this attribute.



See also
~~~~~~~~

`aoHidd_Mouse_IrqHandler`_ 

----------

aoHidd_Mouse_IrqHandler
=======================

Synopsis
~~~~~~~~
::

     [I..], APTR


Function
~~~~~~~~
::

     Specifies a pointing device interrupt handler. The handler will called be every time a
     keyboard event happens. A "C" calling convention is used, declare the handler
     functions as follows:

     void MouseIRQ(APTR data, struct pHidd_Mouse_Event *event);

     Handler parameters are:
         data  - Anything you specify using aoHidd_Mouse_IrqHandlerData
         event - A pointer to a read-only event descriptor structure with the following
                 contents:
             button - button code, or vHidd_Mouse_NoButton of the event describes a simple
                      motion.
             x, y   - event coordinates. Need to be always valid, even if the event describes
                      a button pressed without actual motion.
                      In case of mouse wheel event these fields specify horizontal and vertical
                      wheel delta respectively.
             type   - type of event (button press, button release, wheel or motion).
             flags  - event flags. Currently only one value of vHidd_Mouse_Relative is defined.
                      If this flag is not set, coordinates are assumed to be absolute.
                      This member is actually present in the structure only if the driver
                      supplies TRUE value for aoHidd_Mouse_Extended attribute.

     The handler is called inside interrupts, so usual restrictions apply to it.


Notes
~~~~~
::

     CLID_Hidd_Mouse class always provides extended form of event structure
     (struct pHidd_Mouse_ExtEvent). Drivers will not always provide it, depending
     on their aoHidd_Mouse_Extended attribute value.



See also
~~~~~~~~

`aoHidd_Mouse_IrqHandlerData`_ `aoHidd_Mouse_Extended`_ 

----------

aoHidd_Mouse_IrqHandlerData
===========================

Synopsis
~~~~~~~~
::

     [I..], APTR


Function
~~~~~~~~
::

     Specifies a user-defined value that will be passed to interrupt handler as a first
     parameter. The purpose of this is to pass some static data to the handler.
     The system will not assume anything about this value.

     Defaults to NULL if not specified.



See also
~~~~~~~~

`aoHidd_Mouse_IrqHandler`_ 

----------

aoHidd_Mouse_RelativeCoords
===========================

Synopsis
~~~~~~~~
::

     [..G], BOOL


Function
~~~~~~~~
::

     Asks the driver it the device provides relative (like mouse) or absolute (like
     touchscreen or tabled) coordinates.

     Drivers which provide extended event structure may not implement this attribute
     because they may provide mixed set of events. In this case coordinates type
     is determined by flags member of struct pHidd_Mouse_ExtEvent.

     CLID_Hidd_Mouse class does not implement this attribute since it provides mixed
     stream of events.



See also
~~~~~~~~

`aoHidd_Mouse_IrqHandler`_ `aoHidd_Mouse_Extended`_ 

----------

aoHidd_Mouse_State
==================

Synopsis
~~~~~~~~
::

     [..G], struct pHidd_Mouse_Event


Function
~~~~~~~~
::

     Obtains current pointing devices state.

     This attribute was historically implemented only in PS/2 mouse driver, but the
     implementation was broken and incomplete. At the moment this attribute is considered
     reserved. Do not use it, the specification may change in future.


Bugs
~~~~
::

     Not implemented, considered reserved.



----------

moHidd_Mouse_AddHardwareDriver
==============================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_Mouse_AddHardwareDriver *Msg);

     OOP_Object *HIDD_Mouse_AddHardwareDriver(OOP_Object *obj, OOP_Class *driverClass, struct TagItem *tags)


Function
~~~~~~~~
::

     Creates a hardware driver object and registers it in the system.

     It does not matter on which instance of CLID_Hidd_Mouse class this method is
     used. Hardware driver objects are shared between all of them.

     Since V2 this interface is obsolete and deprecated. Use moHW_AddDriver
     method on CLID_HW_Mouse class in order to install the driver.


Inputs
~~~~~~
::

     obj         - Any object of CLID_Hidd_Mouse class.
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

     Do not dispose the returned object yourself, use HIDD_Mouse_RemHardwareDriver() for it.



See also
~~~~~~~~

`moHidd_Mouse_RemHardwareDriver`_ 

----------

moHidd_Mouse_RemHardwareDriver
==============================

Synopsis
~~~~~~~~
::

     void OOP_DoMethod(OOP_Object *obj, struct pHidd_Mouse_RemHardwareDriver *Msg);

     void HIDD_Mouse_RemHardwareDriver(OOP_Object *obj, OOP_Object *driver);


Function
~~~~~~~~
::

     Unregisters and disposes pointing device hardware driver object.

     It does not matter on which instance of CLID_Hidd_Mouse class this method is
     used. Hardware driver objects are shared between all of them.

     Since V2 this interface is obsolete and deprecated. Use moHW_RemoveDriver
     method on CLID_HW_Kbd class in order to remove the driver.


Inputs
~~~~~~
::

     obj    - Any object of CLID_Hidd_Mouse class.
     driver - A pointer to a driver object, returned by HIDD_Mouse_AddHardwareDriver().


Result
~~~~~~
::

     None



See also
~~~~~~~~

`moHidd_Mouse_AddHardwareDriver`_ 

CLID_HW_Mouse
-------------

========================================== ========================================== ========================================== ========================================== 
`--hardware_drivers--`_                    
========================================== ========================================== ========================================== ========================================== 

-----------

--hardware_drivers--
====================

Notes
~~~~~
::

     A hardware driver should be a subclass of CLID_Hidd and implement IID_Hidd_Mouse
     interface according to the following rules:

     1. A single object of driver class represents a single hardware unit.
     2. A single driver object maintains a single callback address (passed to it
        using aoHidd_Mouse_IrqHandler). Under normal conditions this callback is
        supplied by CLID_HW_Mouse class.



