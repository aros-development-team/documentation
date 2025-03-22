================================================
AROS Hardware Manual -- PCI Hidd Class Subsystem
================================================

:Author:    Michal Schulz
:Copyright: Copyright © 2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

.. Note::

   This draft documentation shouldn't be actually here, but instead somewhere
   within the doc tree.


The pci.hidd is a collection of classes used to maintain all PCI devices
available in the system. All device properties are available through
appropriate OOP_Object properties and should not be changed by hand
(although it is still available through six public methods of pcidriver
class).



How to ask for a PCI device?
============================

In order to query for specified PCI device, the moHidd_PCI_EnumDevices method
of the main PCI class (IID_Hidd_PCI) is to be used. It takes two parameters.
The first one is the pointer to struct Hook, defining the call-back function
called for every PCI device that matches the given requirements. The second
parameter (may be NULL) is a pointer to struct TagItem[], defining the
requirements that have to be met. Any combination of VendorID, ProductID,
RevisionID, Interface, Class, Subclass, SubsystemVendorID, and SubsystemID may
be used (see the include/hidd/pci.h for details). If NULL is given, the
call-back function will be called for every single PCI device seen by the
pci class.
The following code may be used to find the PCI device::

    /* This hook will be called for every PCI device that matches the given requirements */
    AROS_UFH3(void, Callback,
        AROS_UFHA(struct Hook *, hook, A0),
        AROS_UFHA(OOP_Object *,  obj,  A2),
        AROS_UFHA(APTR,          msg,  A1))
    {
        AROS_USERFUNC_INIT

        /* Do whatever here with the PCIDevice object stored in obj pointer */

        AROS_USERFUNC_EXIT
    }

    /* Hook defining our callback */
    static const struct Hook PCIHook = {
        h_Entry : (APTR)Callback
    };

    void Query()
    {
        OOP_Object *o;  /* Keep PCI class object */

        /* Get only VGA compatible video cards */
        struct TagItem tags[] = {
            { tHidd_PCI_Class,    3 },
            { tHidd_PCI_SubClass,    0 },
            { tHidd_PCI_Interface,    0 },
            { TAG_DONE, 0UL }
        };

        /* Create instance of pci class */
        o = OOP_NewObject(NULL, CLID_Hidd_PCI, NULL);
        if (o)
        {
            /* Enumerate through all PCI devices */
            HIDD_PCI_EnumDevices(o, &PCIHook, NULL);
            /* Enumerate through devices that met requirements only */
            HIDD_PCI_EnumDevices(o, &PCIHook, &tags);

            [do whatever you want with PCI devices]

            /* Don't need PCI object any more */
            OOP_DisposeObject(o);
        }
    }

Simple, efficient, nice :)



What to do with PCI device object?
==================================

Once the pointer to pci device object is known, the PCI device may be asked
for its properties, as well as some of the device properties may be changed.
The Bus, Dev and Sub properties define the physical address of PCI device, as
seen by the bus driver handling this device (available as Driver property). In
case of PCI-to-PCI bridges (see isBridge property) , there are some additional
properties available (some others, like base addresses 2 to 5 are unavailable
on the other hand). Most commonly used were probably:

    aHidd_PCIDevice_Base[0..5] - PCI base addresses of given device
    aHidd_PCIDevice_Size[0..5] - sizes of PCI memory/IO areas
    aHidd_PCIDevice_Type[0..5] - type of given area.

If bit ADDRB_IO in Type property is set, the region is an IO region. Otherwise
it is a memory region, which may be of prefetchable memory (bit ADDRB_PREFETCH
set).

Additionally, the driver may check, whether I/O or MEM is decoded by a given
PCI device at all (isIO, isMEM properties), whether BusMaster has been enabled
(isMaster property), and whether the device does snoop PCI bus for VGA palette
changes (paletteSnoop property). Finally, it is possible to check whether the
device does support 66MHz PCI bus (is66MHz property).

Note, that depending on driver requirements, isIO, isMEM, isMaster and
paletteSnoop properties may be also set.

All properties are obtainable through `OOP_GetAttr` call (sigh, we are really
missing the OOP_GetAttrs(obj, struct TagItem
\*\*attributes_to_get_with_one_call)!!!) and some of them are settable through
OOP_SetAttrs call (see hidd/pci.h include for details). Please also remember,
that before work with attributes is done, the IID_Hidd_PCIDevice AttrBase has
to be obtained (please don't forget to release it when it's not needed
any more).



PCIDriver class (user side)
===========================

One of the read-only attributes of PCIDevice class, is the PCIDriver class
pointer. It points to the hardware driver which handles given PCI device
object. As will be seen later, there may be more then one driver working at
the same time in the system.

The driver class has one important attribute - aHidd_PCIDriver_DirectBus. It
is read-only, and if it is set to TRUE the driver handles a PCI bus which is
directly mapped within the CPU space. A DirectBus device may be, for example,
the typical PCI bus in a PC, handled by native AROS. Typical indirect PCI bus
would be a PCI bus handled under Linux (there is no physical *direct* access
to the PCI devices on hosted AROS on Linux). Depending on the DirectBus
property, some methods may or should be used.

While working with non-DirectBus PCI driver, the HIDD_PCIDriver_MapPCI and
HIDD_PCIDriver_UnmapPCI methods may be used to access the memory ranges of the
PCI device. The first method tries to map the PCI memory space to the CPU
memory space (using for example mmap on /dev/mem in case of Linux) so that
the given PCI memory range may be accessed. UnmapPCI method frees mapping
created previously with this method.

Additionally, in the case of a non-DirectBus PCI driver, AllocPCIMem and
FreePCIMem can be used in order to reserve/free memory accessible by PCI
devices and aligned to the page boundary. If these methods are not implemented
or there is no memory available for PCI devices, AllocPCIMem will return
(APTR)-1.

In case of DirectBus devices, the above called methods are still usable. The
MapPCI is then equivalent to HIDD_PCIDriver_PCItoCPU call and simply
translates the address seen by PCI device to address seen by CPU. The CPUtoPCI
works in the other direction.



Driver creation
===============

In order to write a PCI hardware driver, one has to create a class deriving
from the CLID_Hidd_PCIDriver class. That simplifies the work on the driver,
as only few methods have to be implemented:


PCIDriver::New()
----------------

This method should add some attributes to the msg->attrList and pass the ::New
message to the superclass. The aHidd_Name and aHidd_HardwareName are welcomed
here. Additionally, if the driver doesn't work on direct access bus, it should
set the aHidd_PCIDriver_DirectBus to FALSE (otherwise it is set to TRUE by
the superclass).

Please note that in the worst case (author doesn't want to provide aHidd_Name
and aHidd_HardwareName), the implementation of ::New may be skipped.


PCIDriver::ReadConfigLong() and PCIDriver::WriteConfigLong()
------------------------------------------------------------

These two methods *HAVE TO* be defined in the driver class. Otherwise the
superclass will complain with error messages. All other methods used to access
the PCI config space (Read/Write of Word/Byte) may be implemented by the
driver class but they doesn't have to be. As all methods are virtual, the
superclass will do the magic (it will use ReadConfigLong and WriteConfigLong
methods to access words and bytes in both read and write mode).

Additionally, the MapPCI/UnmapPCI and CPUtoPCI/PCItoCPU may require
rewriting (the default is that, in case of indirect bus, they always return
0xffffffff and in case of direct bus they return the same address as
given).


Adding driver class to the system
---------------------------------

When the driver class is successfully created, its pointer may be passed to
the main pci class. This may be done in following way (assume, that cl is the
pointer to freshly created driver class)::

    [...]
        struct pHidd_PCI_AddHardwareDriver msg;
        OOP_Object *pci;

        msg.driverClass = cl;
        msg.mID = OOP_GetMethodID(IID_Hidd_PCI, moHidd_PCI_AddHardwareDriver);

        pci = OOP_NewObject(NULL, CLID_Hidd_PCI, NULL);
        if (pci)
        {
            OOP_DoMethod(pci, (OOP_Msg)&msg);
            OOP_DisposeObject(pci);
        }
    [...]

Done. The pci subsystem will then use the passed class pointer (note: since
the class pointer is passed directly, the driver classes do not have to be
public) to scan the PCI bus handled with this hardware driver. From this point,
the PCI devices handled by the newly added driver are available for any use.


Removing driver class from the system
-------------------------------------

The driver may ask the PCI subsystem to be removed using the RemHardwareDriver
call. It's query may be, but doesn't have to be fulfilled. The driver will
not be removed if there are any other users of PCI subsystem expect the driver
wishing to be removed itself. When the RemHardwareDriver call success, the
driver class may be deleted.


Why do I need this pluggable driver?
------------------------------------
Imagine a PCI device (of any kind) which has it's own PCI bus. The device
driver does know about this bus and wants to share this with other drivers
(system user). Unfortunately only this specific device driver knows how to
handle this additional PCI bus. When it creates a driver class which know how
to talk to it and adds this driver class to pci subsystem, this PCI bus
becomes part of whole system and from now on it is accessible for anyone.

