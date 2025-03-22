====
scsi
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`--background_busclass--`_              `--background_unitclass--`_             `--DMA interface--`_                    `--PIO interface--`_                    
`aoHidd_SCSIBus_BusVectors`_            `aoHidd_SCSIBus_CanSetXferMode`_        `aoHidd_SCSIBus_DMADataSize`_           `aoHidd_SCSIBus_DMAVectors`_            
`aoHidd_SCSIBus_Master`_                `aoHidd_SCSIBus_PIODataSize`_           `aoHidd_SCSIBus_PIOVectors`_            `aoHidd_SCSIBus_Slave`_                 
`aoHidd_SCSIBus_Use32Bit`_              `aoHidd_SCSIBus_Use80Wire`_             `aoHidd_SCSIBus_UseDMA`_                `aoHidd_SCSIBus_UseIOAlt`_              
`aoHidd_SCSIUnit_ConfiguredModes`_      `aoHidd_SCSIUnit_MultiSector`_          `aoHidd_SCSIUnit_XferModes`_            `moHidd_SCSIBus_GetDMAInterface`_       
`moHidd_SCSIBus_GetPIOInterface`_       `moHidd_SCSIBus_SetXferMode`_           `moHidd_SCSIBus_Shutdown`_              
======================================= ======================================= ======================================= ======================================= 

-----------

--background_busclass--
=======================

Notes
~~~~~
::

     This class serves as a base class for implementing IDE (ATA) bus drivers.
     One particularity of this class is that IDE bus is very speed-critical.
     At the other hand, the driver implements very lowlevel operations which
     are called quite often. OOP_DoMethod() call is not fast enough, and in
     order to circumvent this limitation, additionally to normal OOP API
     IDE bus drivers offer two additional non-standard interfaces. Internally
     they are implemented as library-alike function table plus driver-specific
     data. For the purpose of some performance optimizations the function
     table is private to ata.device and managed entirely by the base class.
     Driver classes have access only to data portion.

     These interfaces are documented below.



----------

--background_unitclass--
========================

Notes
~~~~~
::

     Unit class is private to ata.device. Instances of this class represent
     devices connected to IDE buses, and can be used to obtain information
     about these devices.



----------

--DMA interface--
=================

Notes
~~~~~
::

     DMA interface is optional, and is needed in order to support DMA data
     transfers.

     Function table for the interface consists of the following functions:

     BOOL dma_Setup(void *obj, APTR buffer, IPTR size, BOOL read)
     - Prepare the controller to DMA data transfer. The last argument is
       TRUE for read operation and FALSE for write. The function should
       return TRUE for success or FALSE for failure.

     VOID dma_Start(void *obj)
     - Start DMA transfer.

     VOID dma_End(void *obj, APTR buffer, IPTR size, BOOL read)
     - End DMA transfer and perform post-transfer cleanup of the given region.

     ULONG dma_Result(void *obj)
     - Get resulting status of the operation. The function should return 0
       for successful completion or error code to be passed up to ata.device
       caller in io_Result field of the IORequest.



----------

--PIO interface--
=================

Notes
~~~~~
::

     PIO interface is responsible for accessing I/O registers on the IDE
     bus, as well as performing PIO-mode 16- and 32-bit data transfers.
     This interface is mandatory and must be implemented by the driver,
     however some functions are optional. They can be either omitted
     entirely from the function table, or set to NULL pointers.

     Control functions table for the interface consists of the following
     functions (listed in their order in the array):

     VOID scsi_out(void *obj, UBYTE val, UWORD offset)
     - Write byte into primary register bank with the given offset.

     UBYTE scsi_in(void *obj, UWORD offset)
     - Read byte from primary register bank with the given offset.

     VOID scsi_out_alt(void *obj, UBYTE val, UWORD offset)
     - Write byte into alternate register bank with the given offset.
       This function is optional.

     UBYTE scsi_in_alt(void *obj, UWORD offset)
     - Read byte from alternate register bank with the given offset.
       This function is optional.

     Transfer functions table for the interface consists of the following
     functions (listed in their order in the array):

     VOID scsi_outsw(void *obj, APTR address, ULONG count)
     - Perform 16-bit PIO data write operation from the given memory
       region of the given size.

     VOID scsi_insw(void *obj, APTR address, ULONG count)
     - Perform 16-bit PIO data read operation into the given memory
       region of the given size.

     VOID scsi_outsl(void *obj, APTR address, ULONG count)
     - Perform 32-bit PIO data write operation from the given memory
       region of the given size. This function is optional.

     UBYTE scsi_insl(void *obj, APTR address, ULONG count)
     - Perform 32-bit PIO data read operation into the given memory
       region of the given size. This function is optional.



----------

aoHidd_SCSIBus_BusVectors
=========================

Synopsis
~~~~~~~~
::

     [I..], APTR *


Function
~~~~~~~~
::

     Specifies control functions table for building PIO interface object.
     The function table is an array of function pointers terminated
     by -1 value. The terminator must be present for purpose of
     binary compatibility with future extensions.


Notes
~~~~~
::

     This function table is mandatory to be implemented by the driver.



----------

aoHidd_SCSIBus_CanSetXferMode
=============================

Synopsis
~~~~~~~~
::

     [..G], BOOL


Function
~~~~~~~~
::

     Tells whether the bus driver implements moHidd_SCSIBus_SetXferMode method.


Bugs
~~~~
::

     Current version of ata.device does not use this attribute, and it is
     considered reserved.



See also
~~~~~~~~

`moHidd_SCSIBus_SetXferMode`_ 

----------

aoHidd_SCSIBus_DMADataSize
==========================

Synopsis
~~~~~~~~
::

     [I..], BOOL


Function
~~~~~~~~
::

     Specifies size of DMA interface data structure.



----------

aoHidd_SCSIBus_DMAVectors
=========================

Synopsis
~~~~~~~~
::

     [I..], APTR *


Function
~~~~~~~~
::

     Specifies function table for building DMA interface object. If not supplied,
     the bus is considered not DMA-capable.



See also
~~~~~~~~

`aoHidd_SCSIBus_PIOVectors`_ 

----------

aoHidd_SCSIBus_Master
=====================

Synopsis
~~~~~~~~
::

     [..G], OOP_Object *


Function
~~~~~~~~
::

     Returns a pointer to OOP object of private unit class, representing
     a master drive on the bus, or NULL if there's no master device.



See also
~~~~~~~~

`aoHidd_SCSIBus_Slave`_ 

----------

aoHidd_SCSIBus_PIODataSize
==========================

Synopsis
~~~~~~~~
::

     [I..], BOOL


Function
~~~~~~~~
::

     Specifies size of PIO interface data structure.



----------

aoHidd_SCSIBus_PIOVectors
=========================

Synopsis
~~~~~~~~
::

     [I..], APTR *


Function
~~~~~~~~
::

     Specifies transfers function table for building PIO interface object.
     The function table is an array of function pointers terminated
     by -1 value. The terminator must be present for purpose of
     binary compatibility with future extensions.


Notes
~~~~~
::

     This function table is mandatory to be implemented by the driver.



----------

aoHidd_SCSIBus_Slave
====================

Synopsis
~~~~~~~~
::

     [..G], OOP_Object *


Function
~~~~~~~~
::

     Returns a pointer to OOP object of private unit class, representing
     a slave drive on the bus, or NULL if there's no master device.



See also
~~~~~~~~

`aoHidd_SCSIBus_Master`_ 

----------

aoHidd_SCSIBus_Use32Bit
=======================

Synopsis
~~~~~~~~
::

     [.SG], BOOL


Function
~~~~~~~~
::

     When queried, tells whether the bus supports 32-bit PIO data transfers.
     When set, enables or disables 32-bit mode for PIO data transfers.



----------

aoHidd_SCSIBus_Use80Wire
========================

Synopsis
~~~~~~~~
::

     [..G], BOOL


Function
~~~~~~~~
::

     Tells whether the bus currently uses 80-conductor cable.


Notes
~~~~~
::

     This attribute actually makes difference only for DMA modes. If
     your bus driver returns FALSE, ata.device will not use modes
     higher than UDMA2 on the bus.



----------

aoHidd_SCSIBus_UseDMA
=====================

Synopsis
~~~~~~~~
::

     [..G], BOOL


Function
~~~~~~~~
::

     Tells whether the bus supports DMA transfers.



----------

aoHidd_SCSIBus_UseIOAlt
=======================

Synopsis
~~~~~~~~
::

     [..G], BOOL


Function
~~~~~~~~
::

     Tells whether the bus supports alternate registers bank
     (scsi_AltControl and scsi_AltStatus).



----------

aoHidd_SCSIUnit_ConfiguredModes
===============================

Synopsis
~~~~~~~~
::

     [..G], ULONG


Function
~~~~~~~~
::

     Tells which transfer modes are currently configured for use with the drive.
     The returned value is a bitmask of the same flags as for
     aoHidd_SCSIUnit_XferModes attribute.


Bugs
~~~~
::

     Currently ata.device does not distinguish between PIO modes and does not
     set any bit for them. Absence of DMA mode flags automatically means that
     PIO mode is used.



See also
~~~~~~~~

`aoHidd_SCSIUnit_XferModes`_ 

----------

aoHidd_SCSIUnit_MultiSector
===========================

Synopsis
~~~~~~~~
::

     [..G], UBYTE


Function
~~~~~~~~
::

     Tells maximum allowed number of sectors for multisector transfer.



----------

aoHidd_SCSIUnit_XferModes
=========================

Synopsis
~~~~~~~~
::

     [..G], ULONG


Function
~~~~~~~~
::

     Tells which transfer modes are supported by this device. The returned value
     is a bitwise combination of the following flags (see include/hidd/ata.h):

     AF_XFER_PIO(x)  - PIO mode number x (0 - 4)
     AF_XFER_MDMA(x) - multiword DMA mode number x (0 - 2)
     AF_XFER_UDMA(x) - Ultra DMA mode number x (0 - 6)
     AF_XFER_48BIT   - LBA48 block addressing
     AF_XFER_RWMILTI - Multisector PIO
     AF_XFER_PACKET  - ATAPI
     AF_XFER_LBA     - LBA28 block addressing
     AF_XFER_PIO32   - 32-bit PIO


Bugs
~~~~
::

     32-bit PIO is actually controller's property and not drive's property.
     Because of this AF_XFER_PIO32 flag can never be returned by this attribute.
     Nevertheless, it can be returned by aoHidd_SCSIUnit_ConfiguredModes
     attribute.



See also
~~~~~~~~

`aoHidd_SCSIUnit_ConfiguredModes`_ 

----------

moHidd_SCSIBus_GetDMAInterface
==============================

Synopsis
~~~~~~~~
::

     APTR OOP_DoMethod(OOP_Object *obj, struct pHidd_SCSIBus_GetDMAInterface *Msg);

     APTR HIDD_SCSIBus_GetDMAInterface(void);


Function
~~~~~~~~
::

     Instantiates encapsulated DMA interface object and returns its
     pointer.


Inputs
~~~~~~
::

     None


Result
~~~~~~
::

     A pointer to opaque DMA interface object or NULL upon failure or
     if DMA is not supported by this bus.


Notes
~~~~~
::

     This method should be overloaded by driver subclasses in order to
     initialize data portion of the interface object.



See also
~~~~~~~~

`moHidd_SCSIBus_GetPIOInterface`_ 

----------

moHidd_SCSIBus_GetPIOInterface
==============================

Synopsis
~~~~~~~~
::

     APTR OOP_DoMethod(OOP_Object *obj, struct pHidd_SCSIBus_GetPIOInterface *Msg);

     APTR HIDD_SCSIBus_GetPIOInterface(void);


Function
~~~~~~~~
::

     Instantiates encapsulated PIO interface object and returns its
     pointer.


Inputs
~~~~~~
::

     None


Result
~~~~~~
::

     A pointer to opaque PIO interface object or NULL in case of failure.


Notes
~~~~~
::

     This method should be overloaded by driver subclasses in order to
     initialize data portion of the interface object.



See also
~~~~~~~~

`moHidd_SCSIBus_GetDMAInterface`_ 

----------

moHidd_SCSIBus_SetXferMode
==========================

Synopsis
~~~~~~~~
::

     APTR OOP_DoMethod(OOP_Object *obj, struct pHidd_SCSIBus_SetXferMode *Msg);

     APTR HIDD_SCSIBus_SetXferMode(UBYTE unit, scsi_XferMode mode);


Function
~~~~~~~~
::

     Sets the desired transfer mode for the given drive on the bus controller.


Inputs
~~~~~~
::

     unit - drive number (0 for master and 1 for slave)
     mode - Mode number (see hidd/ata.h)


Result
~~~~~~
::

     TRUE if successful or FALSE if the desired mode is not supported
     by the hardware.


Notes
~~~~~
::

     The default implementation is provided for drivers not supporting
     DMA and always returns FALSE if the caller attempts to set any of
     DMA modes.


Bugs
~~~~
::

     Current version of ata.device does not use this method, and it is
     considered reserved.



See also
~~~~~~~~

`aoHidd_SCSIBus_CanSetXferMode`_ 

----------

moHidd_SCSIBus_Shutdown
=======================

Synopsis
~~~~~~~~
::

     APTR OOP_DoMethod(OOP_Object *obj, struct pHidd_SCSIBus_Shutdown *Msg);

     APTR HIDD_SCSIBus_Shutdown(void);


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

     This method is called by ata.device during system reset handler execution.



