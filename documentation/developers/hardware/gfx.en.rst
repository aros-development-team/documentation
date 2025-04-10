================================================
AROS Hardware Manual -- Gfx Hidd Class Subsystem
================================================

:Author:    Nick Andrews
:Copyright: Copyright © 2019, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

.. Note::

   This document is w.i.p and needs a lot more detail added.
   Throughout this document "gfx" is used to refer to the gfx.hidd subsystem API and
   "graphics" is used to refer to the AmigaOS(tm) graphics.library API.


The gfx.hidd is a collection of classes used to implement and maintain all gfx
display devices available in the system. All device properties are available through
appropriate OOP_Object properties and should not be changed by hand.


How to query available gfx display devices?
===========================================

The HW Root can be queried to find available gfx display devices. Display
drivers will have CLID_Hidd_Gfx as a superclass, while the base software
implementation is exposed with OOP_OCLASS(obj) == CLID_Hidd_Gfx.

BitMap objects can also be queried to determine the gfx.hidd objects implementing them.
This is used for example by the mesagl subsystem to determine the correct gfx driver to query
for a given display.

What to do with a gfx display devices object?
=============================================

Once a  pointer to the gfx device object is known, the gfx device may be asked
for its properties, as well as some of the device properties may be changed.

Generally user code will not interact directly with the gfx subsystem but will go
through graphics.library and cybergraphics.library.


Driver creation
===============

In order to write a gfx hardware driver, one has to create a class deriving
from the CLID_Hidd_Gfx class. That simplifies the work on the driver,
as only few methods have to be implemented:

NB: For best performance it is highly recomended to cache method and object pointers that are frequently
used.

e.g.
   instance_data->putpixel = OOP_GetMethod(obj, HiddBitMapBase + moHidd_BitMap_PutPixel, &instance_data->putpixel_Class);

and use this directly.

Hidd_Gfx::New()
----------------

This method should add some attributes to the msg->attrList and pass the ::New
message to the superclass. Drivers generally provide a suitable aHidd_Name and
aHidd_HardwareName to describe the device they represent here.

THe New method must determine suitable display modes for the hardware, and create
Hidd_PixFmt/Hidd_Sync modes objects etc to register them with the gfx susbsystem.
These modes will be used by the graphics library to expose suitable display modes in
its display database and to determine the correct classes to use when creating (bitmap)
objects for a given mode.

Hidd_Gfx::CreateObject()
-------------------------

This method is used to expose the graphics drivers implementations of object classes. The
graphics subsystem will call this method to create suitable gc (graphics context) and bitmap objectst to
use with the selected hardware device. Gfx drivers which support hardware 3d using the gallium subsystem
expose the gallium object via this call. The mesagl subsystem will call this method to create an instance of
the hardware driver and use it for client applications.

currently supported classes:

CLID_Hidd_GC
    Creates a Graphics Context Object
CLID_Hidd_BitMap
    Creates a BitMap Object defined by the given attributes.
CLID_Hidd_Gallium
     Creates a gallium 3d hardware driver object (if supported)
CLID_Hidd_I2C
    Returns the Driver instances i2c Object (if supported)
    

Hidd_Gfx::CopyBox()
-------------------------

This method is used to expose a copy routine for copying between xxx.

Hidd_Gfx::CopyBoxMasked()
-------------------------

Mode Database
------------------

Hidd_Gfx::QueryModeIDs()
Hidd_Gfx::ReleaseModeIDs()
Hidd_Gfx::CheckMode()
Hidd_Gfx::NextModeID()
Hidd_Gfx::ModeProperties()
Hidd_Gfx::GetMode()
Hidd_Gfx::GetSync()
Hidd_Gfx::GetPixFmt()

Hidd_Gfx::SetMode()

Hidd_Gfx::NominalDimensions()

Hidd_Gfx::MakeViewPort()
Hidd_Gfx::CleanViewPort()
Hidd_Gfx::PrepareViewPorts()
Hidd_Gfx::ShowViewPorts()
Hidd_Gfx::Show()

Hidd_Gfx::ShowImminentReset()

Hardware Cursors
--------------------

Drivers exposing hardware cursors have to provide a few methods to expose the actual cursor..

Hidd_Gfx::SetCursorShape()
---------------------------------

This method allows the gfx subsystem to specify the imagery to use for the cursor.


Hidd_Gfx::SetCursorVisible()
---------------------------------

This method allows the gfx subsystem to tell a driver to make the cursor visible or hidden.


Hidd_Gfx::SetCursorPos()
---------------------------------

This method allows the gfx subsystem to set the current location of the cursor.

Hidd_Gfx::GetMaxSpriteSize()
---------------------------------

Gamma Correction
--------------------

Hidd_Gfx::GetGamma()
Hidd_Gfx::SetGamma()


Graphics Context
---------------------

CLID_Hidd_GC::SetClipRect()
CLID_Hidd_GC::UnsetClipRect()


Colormap Classes
--------------------

CLID_Hidd_ColorMap::SetColors()
CLID_Hidd_ColorMap::GetPixel()
CLID_Hidd_ColorMap::GetColor()


Bitmap Classes
-----------------

CLID_Hidd_BitMap::SetColors()
CLID_Hidd_BitMap::PutPixel()
CLID_Hidd_BitMap::DrawPixel()
CLID_Hidd_BitMap::PutImage()
CLID_Hidd_BitMap::PutAlphaImage()
CLID_Hidd_BitMap::PutTemplate()
CLID_Hidd_BitMap::PutAlphaTemplate()
CLID_Hidd_BitMap::PutPattern()
CLID_Hidd_BitMap::GetImage()
CLID_Hidd_BitMap::GetPixel()
CLID_Hidd_BitMap::DrawLine()
CLID_Hidd_BitMap::DrawRect()
CLID_Hidd_BitMap::FillRect()
CLID_Hidd_BitMap::DrawEllipse()
CLID_Hidd_BitMap::FillEllipse()
CLID_Hidd_BitMap::DrawPolygon()
CLID_Hidd_BitMap::FillPolygon()
CLID_Hidd_BitMap::DrawText()
CLID_Hidd_BitMap::FillText()
CLID_Hidd_BitMap::FillSpan()
CLID_Hidd_BitMap::Clear()
CLID_Hidd_BitMap::BlitColorExpansion()
CLID_Hidd_BitMap::MapColor()
CLID_Hidd_BitMap::UnmapPixel()
CLID_Hidd_BitMap::PutImageLUT()
CLID_Hidd_BitMap::PutTranspImageLUT()
CLID_Hidd_BitMap::GetImageLUT()
CLID_Hidd_BitMap::BytesPerLine()
CLID_Hidd_BitMap::ConvertPixels()
CLID_Hidd_BitMap::FillMemRect8()
CLID_Hidd_BitMap::FillMemRect16()
CLID_Hidd_BitMap::FillMemRect24()
CLID_Hidd_BitMap::FillMemRect32()
CLID_Hidd_BitMap::InvertMemRect()
CLID_Hidd_BitMap::CopyMemBox8()
CLID_Hidd_BitMap::CopyMemBox16()
CLID_Hidd_BitMap::CopyMemBox24()
CLID_Hidd_BitMap::CopyMemBox32()
CLID_Hidd_BitMap::CopyLUTMemBox16()
CLID_Hidd_BitMap::CopyLUTMemBox24()
CLID_Hidd_BitMap::CopyLUTMemBox32()
CLID_Hidd_BitMap::PutMem32Image8()
CLID_Hidd_BitMap::PutMem32Image16()
CLID_Hidd_BitMap::PutMem32Image24()
CLID_Hidd_BitMap::GetMem32Image8()
CLID_Hidd_BitMap::GetMem32Image16()
CLID_Hidd_BitMap::GetMem32Image24()
CLID_Hidd_BitMap::PutMemTemplate8()
CLID_Hidd_BitMap::PutMemTemplate16()
CLID_Hidd_BitMap::PutMemTemplate24()
CLID_Hidd_BitMap::PutMemTemplate32()
CLID_Hidd_BitMap::PutMemPattern8()
CLID_Hidd_BitMap::PutMemPattern16()
CLID_Hidd_BitMap::PutMemPattern24()
CLID_Hidd_BitMap::PutMemPattern32()
CLID_Hidd_BitMap::SetColorMap()
CLID_Hidd_BitMap::ObtainDirectAccess()
CLID_Hidd_BitMap::ReleaseDirectAccess()
CLID_Hidd_BitMap::BitMapScale()
CLID_Hidd_BitMap::SetRGBConversionFunction()
CLID_Hidd_BitMap::UpdateRect(

CLID_Hidd_PlanarBM::SetBitMap()
CLID_Hidd_PlanarBM::GetBitMap()

CLID_Hidd_ChunkyBM:


Onscreen/Offscreen Bitmaps
--------------------------------

