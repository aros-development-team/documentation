========
pci_hidd
========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

Classes
-------

+ `CLID_Hidd_PCIDevice`_
+ `CLID_Hidd_PCIDriver`_
+ `CLID_Hidd_PCI`_

----------

CLID_Hidd_PCIDevice
-------------------

========================================== ========================================== ========================================== ========================================== 
`aoHidd_PCIDevice_Owner`_                  `moHidd_PCIDevice_AddInterrupt`_           `moHidd_PCIDevice_GetVectorAttribs`_       `moHidd_PCIDevice_Obtain`_                 
`moHidd_PCIDevice_ObtainVectors`_          `moHidd_PCIDevice_Release`_                `moHidd_PCIDevice_ReleaseVectors`_         `moHidd_PCIDevice_RemoveInterrupt`_        

========================================== ========================================== ========================================== ========================================== 

-----------

aoHidd_PCIDevice_Owner
======================

Synopsis
~~~~~~~~
::

     [..G], APTR


Function
~~~~~~~~
::

     Returns name of current device's owner or NULL if the device is
     not owned by anyone.


Notes
~~~~~
::

     This attribute is provided for diagnostics utilities like PCITool.
     There is no need to check current owner before attempting to own
     the device. moHidd_PCIDevice_Obtain method performs this check
     and owns the device atomically.



----------

moHidd_PCIDevice_AddInterrupt
=============================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDevice_AddInterrupt *Msg);

     OOP_Object *HIDD_PCIDriver_AddInterrupt(OOP_Object *obj, OOP_Object *device,
                                             struct Interrupt *interrupt);


Function
~~~~~~~~
::

     Add interrupt handler for the device.


Inputs
~~~~~~
::

     obj       - Pointer to device object.
     interrupt - Interrupt structure to add.


Result
~~~~~~
::

     TRUE it successful or FALSE on failure.



See also
~~~~~~~~

`moHidd_PCIDevice_RemoveInterrupt`_ 

----------

moHidd_PCIDevice_GetVectorAttribs
=================================

Synopsis
~~~~~~~~
::

     UBYTE OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDevice_GetVectorAttribs *Msg);

     UBYTE HIDD_PCIDevice_GetVectorAttribs(OOP_Object *obj, ULONG vectorno);


Function
~~~~~~~~
::

     Returns the Hardware IRQ for a given device MSI vector.


Inputs
~~~~~~
::

     obj   - Pointer to the device object.
     vectorno - Vector to return the IRQ for.
     attribs - struct TagItem array of requested attrib details.


Result
~~~~~~
::

     Returns the Hardware IRQ on success, for use with AddIntServer.



See also
~~~~~~~~

`moHidd_PCIDevice_ObtainVectors`_ exec/AddIntServer 

----------

moHidd_PCIDevice_Obtain
=======================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDevice_Obtain *Msg);

     OOP_Object *HIDD_PCIDevice_Obtain(OOP_Object *obj, CONST_STRPTR owner);


Function
~~~~~~~~
::

     Lock the device for exclusive use.


Inputs
~~~~~~
::

     obj   - Pointer to the device object.
     owner - A string identifying the owner.


Result
~~~~~~
::

     NULL on success or string identifying current owner.



See also
~~~~~~~~

`moHidd_PCIDevice_Release`_ 

----------

moHidd_PCIDevice_ObtainVectors
==============================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDevice_ObtainVectors *Msg);

     OOP_Object *HIDD_PCIDevice_ObtainVectors(OOP_Object *obj, const struct TagItem *requirements);


Function
~~~~~~~~
::

     Allocates Hardware IRQ's and assigns them to the device MSI vector configuration.


Inputs
~~~~~~
::

     obj   - Pointer to the device object.
     requirements - TagList of allocation requirements.
     
     supported Tags-:
             tHidd_PCIVector_Min           - Minimum number of vectors/irqs to allocate
             tHidd_PCIVector_Max          - Maximum number of vectors/irqs to allocate

Result
~~~~~~
::

     TRUE on success.



See also
~~~~~~~~

`moHidd_PCIDevice_ReleaseVectors`_ 

----------

moHidd_PCIDevice_Release
========================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDevice_Release *Msg);

     OOP_Object *HIDD_PCIDevice_Release(OOP_Object *obj);


Function
~~~~~~~~
::

     Release ownership of the device.


Inputs
~~~~~~
::

     obj - Pointer to the device object.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     You should call this function only on devices owned by you. Doing
     this on someone else's devices will not do any good things.



See also
~~~~~~~~

`moHidd_PCIDevice_Obtain`_ 

----------

moHidd_PCIDevice_ReleaseVectors
===============================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDevice_ReleaseVectors *Msg);

     OOP_Object *HIDD_PCIDevice_ReleaseVectors(OOP_Object *obj);


Function
~~~~~~~~
::

     Releases the APIC IRQ's and clears the PCI devices MSI vector configuration.


Inputs
~~~~~~
::

     obj   - Pointer to the device object.



See also
~~~~~~~~

`moHidd_PCIDevice_ObtainVectors`_ 

----------

moHidd_PCIDevice_RemoveInterrupt
================================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDevice_RemoveInterrupt *Msg);

     OOP_Object *HIDD_PCIDevice_RemoveInterrupt(OOP_Object *obj, OOP_Object *device,
                                                struct Interrupt *interrupt);


Function
~~~~~~~~
::

     Remove interrupt handler from the device.


Inputs
~~~~~~
::

     obj       - Pointer to the device object.
     interrupt - Interrupt structure to remove.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`moHidd_PCIDevice_AddInterrupt`_ 

CLID_Hidd_PCIDriver
-------------------

========================================== ========================================== ========================================== ========================================== 
`moHidd_PCIDriver_AddInterrupt`_           `moHidd_PCIDriver_RemoveInterrupt`_        
========================================== ========================================== ========================================== ========================================== 

-----------

moHidd_PCIDriver_AddInterrupt
=============================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDriver_AddInterrupt *Msg);

     OOP_Object *HIDD_PCIDriver_AddInterrupt(OOP_Object *obj, OOP_Object *device,
                                             struct Interrupt *interrupt);


Function
~~~~~~~~
::

     Add interrupt handler for the specified device.

     This method is present in order to provide abstraction for
     different PCI implementations. Default implementation of
     this method assumes 1:1 mapping between system interrupts
     and PCI interrupts. However, on some machines this is not
     true (an example is Amiga(tm) bridgeboards). In this case
     you will have to provide alternate implementation of this
     method.


Inputs
~~~~~~
::

     obj       - Pointer to your driver object.
     device    - A pointer to the device object.
     interrupt - Interrupt structure to add.


Result
~~~~~~
::

     TRUE it succesful or FALSE on failure.



See also
~~~~~~~~

`moHidd_PCIDriver_RemoveInterrupt`_ 

----------

moHidd_PCIDriver_RemoveInterrupt
================================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCIDriver_RemoveInterrupt *Msg);

     OOP_Object *HIDD_PCIDriver_RemoveInterrupt(OOP_Object *obj, OOP_Object *device,
                                                struct Interrupt *interrupt);


Function
~~~~~~~~
::

     Remove interrupt handler from the specified device.

     This method is present in order to provide abstraction for
     different PCI implementations. Default implementation of
     this method assumes 1:1 mapping between system interrupts
     and PCI interrupts. However, on some machines this is not
     true (an example is Amiga(tm) bridgeboards). In this case
     you will have to provide alternate implementation of this
     method.


Inputs
~~~~~~
::

     obj       - Pointer to your driver object.
     device    - A pointer to the device object.
     interrupt - Interrupt structure to remove.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`moHidd_PCIDriver_AddInterrupt`_ 

CLID_Hidd_PCI
-------------

========================================== ========================================== ========================================== ========================================== 
`moHidd_PCI_AddHardwareDriver`_            `moHidd_PCI_EnumDevices`_                  `moHidd_PCI_RemHardwareDriver`_            
========================================== ========================================== ========================================== ========================================== 

-----------

moHidd_PCI_AddHardwareDriver
============================

Synopsis
~~~~~~~~
::

     OOP_Object *OOP_DoMethod(OOP_Object *obj, struct pHidd_PCI_AddHardwareDriver *Msg);

     OOP_Object *HIDD_PCI_AddHardwareDriver(OOP_Object *obj, OOP_Class *driverClass);


Function
~~~~~~~~
::

     Creates a bus driver object and registers it in the system.

     Since V4 this interface is obsolete and deprecated. Use moHW_AddDriver
     method in order to install the driver.


Inputs
~~~~~~
::

     obj         - A PCI subsystem object.
     driverClass - A pointer to OOP class of the driver. In order to create an object
                   of some previously registered public class, use
                   oop.library/OOP_FindClass().
     instanceTags - Tags used during driver instance creation.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`moHidd_PCI_RemHardwareDriver`_ 

----------

moHidd_PCI_EnumDevices
======================

Synopsis
~~~~~~~~
::

     void OOP_DoMethod(OOP_Object *obj, struct pHidd_PCI_EnumDrivers *Msg);

     void HIDD_PCI_EnumDevices(OOP_Object *obj, struct Hook *callback,
                               const struct TagItem *requirements);


Function
~~~~~~~~
::

     This method calls the callback hook for every PCI device in the system
     that meets requirements specified (or every device if tags=NULL). It
     iterates not only through one PCI bus, but instead through all buses
     managed by all drivers present in the system.


Inputs
~~~~~~
::

     obj          - A PCI subsystem object.
     callback     - A user-supplied hook which will be called for every device.
     requirements - A TagList specifying search parameters.

     The hook will be called with the following parameters:
         AROS_UFHA(struct Hook *, hook        , A0)
             - A pointer to hook structure itself
         AROS_UFHA(OOP_Object * , deviceObject, A2)
             - A PCI device object
         AROS_UFHA(APTR         , unused     , A1)
             - Not used
     
     The following tags are accepted as search parameters:
         tHidd_PCI_VendorID          - vendor ID
         tHidd_PCI_ProductID         - product ID
         tHidd_PCI_RevisionID        - revision ID
         tHidd_PCI_Interface         - PCI interface ID
         tHidd_PCI_Class             - PCI class ID
         tHidd_PCI_SubClass          - PCI subclass ID
         tHidd_PCI_SubsystemVendorID - subsystem vendor ID
         tHidd_PCI_SubsystemID       - subsystem ID
         tHidd_PCI_Driver            - a pointer to bus driver object [V4]


Result
~~~~~~
::

     None.



----------

moHidd_PCI_RemHardwareDriver
============================

Synopsis
~~~~~~~~
::

     void OOP_DoMethod(OOP_Object *obj, struct pHidd_PCI_RemHardwareDriver *Msg);

     void HIDD_PCI_RemHardwareDriver(OOP_Object *obj, OOP_Class *driverClass);


Function
~~~~~~~~
::

     Unregisters and disposes bus driver objects of the given class.

     Since V4 this interface is obsolete and deprecated. Use moHW_RemoveDriver
     method in order to remove drivers.


Inputs
~~~~~~
::

     obj         - A PCI subsystem object.
     driverClass - A pointer to a driver class.


Result
~~~~~~
::

     None



See also
~~~~~~~~

`moHidd_PCI_AddHardwareDriver`_ 

