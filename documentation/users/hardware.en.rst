.. raw:: html

    <style> .y {color:green;} .n {color:red} .p {color:orange} </style>

.. role:: y
.. role:: n
.. role:: p

============================
Hardware Compatibility Guide
============================

:Authors:   Neil Cafferkey
:Copyright: Copyright 2018, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    N/A

This page lists some computers that have been tested with AROS. For each 
system, the compatibility of AROS with key components is shown. 
Compatibility is colour-coded using the following text colours:

 * :y:`Green`: good compatibility and performance.
 * :p:`Orange`: essential features work, but performance may be low.
 * :n:`Red`: the component does not work with AROS.
 * Black: the component has not been tested with AROS.

Note that in some cases the compatibility status shown may be outdated. 
If the distribution listed under the 'Test Distro' column is not recent, 
it may be worth testing a newer distribution, as compatibility may have 
improved (if it has, please let us know).

Since only a small number of systems is listed here currently, you may 
want to look at the `Wikibooks hardware compatibility list`_ if you 
can't find your system here. While it lists a greater variety of 
systems, many of them have not been tested with AROS, so in many cases 
the compatibility status given is only theoretical. Also take note of 
the adjoining pages for specific components such as graphics, network 
and sound cards.

.. _`Wikibooks hardware compatibility list`: https://en.wikibooks.org/wiki/Aros/Platforms/x86_Complete_System_HCL

.. Contents::

Laptops
=======

Acer
----

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - Extensa 5630Z
      - :y:`Intel GMA 4500M HD (2D)`
      - :y:`Intel HD Audio - Realtek ALC268 codec`
      - :p:`Intel ICH9M (IDE mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM 5764M`
      - :n:`RaLink RT2860`
      - Icaros Desktop 2.2
      -

Dell
----

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - Latitude E6330
      - :p:`Intel HD Graphics (VESA only)`
      - :n:`Intel HD Audio - IDT 92HD93 codec`
      - :p:`Intel PCH (non-RAID mode)`
      - N/A
      - :p:`Intel xHCI/EHCI (1.1/2.0 only)`
      - :n:`Intel 82579LM`
      - :n:`Broadcom BCM4313`
      - Icaros Desktop 2.2
      -
    * - Latitude D630
      - :p:`nVidia Quadro NVS 135M (VESA only)`
      - :p:`Intel HD Audio - STAC9205 codec (playback only)`
      - :p:`Intel ICH8M (IDE mode)`
      - :y:`Intel ICH8M`
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM5755M`
      - :n:`Intel 3945ABG`
      - Icaros Desktop 2.2
      -

Fujitsu Siemens
---------------

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - Emilo Li 1718
      - :p:`ATI Mobility Radeon M200 (VESA only)`
      - :y:`ATI HD Audio - Realtek ALC861 codec`
      - :p:`ATI IXP460 (IDE mode)`
      - :y:`ATI IXP460`
      - :p:`ATI OHCI/EHCI (very unstable)`
      - :y:`Realtek RTL8100CL`
      - :y:`Atheros AR5007EG`
      - Icaros Desktop 2.2
      - Boot fails if both ATA and VESA are enabled. The test machine's
        wireless card was broken, but it should work.

Lenovo
------

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - ThinkPad T530i
      - :p:`Intel HD Graphics 4000 (VESA only)`
      - :y:`Intel HD Audio - Realtek ALC3202 codec`
      - :y:`Intel 7-Series PCH`
      - N/A
      - :p:`Intel EHCI/xHCI (1.1/2.0 only)`
      - :n:`Intel 82579LM`
      - :n:`Intel 6205`
      - Icaros Desktop 2.2
      -

HP/Compaq
---------

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - Compaq nc6320
      - :y:`Intel GMA 950 (3D)`
      - :p:`Intel HD Audio - Analog Devices AD1981HD codec (headphones only)`
      - :p:`Intel ICH7 (IDE mode)`
      - :y:`Intel ICH7`
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM5788`
      - :n:`Intel 3945ABG`
      - Icaros Desktop 2.2
      -
    * - Compaq nc6710b
      - :y:`Intel GMA 965 (2D)`
      - :n:`Intel HD Audio - Analog Devices AD1981 codec`
      - :p:`Intel ICH8 (IDE mode)`
      - :y:`Intel ICH8`
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM5787M`
      - :n:`Intel 3945ABG`
      - Icaros Desktop 2.2.5
      - Only 8GB of the HD is accessible in AHCI mode.
    * - 255 G5
      - :p:`AMD Radeon R2/R4/R5 (VESA only)`
      - :p:`AMD HD Audio - Realtek ALC3227 codec (playback only)`
      - :p:`AMD FCH`
      - N/A
      - :p:`AMD EHCI/xHCI (no 3.0)`
      - :y:`Realtek RTL8168`
      - :n:`Intel 3165`
      - Icaros Desktop 2.2
      -

Sony
----

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - Vaio VGN SR29VN
      - :p:`ATI HD 3400 (VESA only)`
      - :p:`Intel HD Audio (too quiet)`
      - :p:`Intel (IDE mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :n:`Marvell 8040`
      - :n:`Intel 5100`
      - Icaros Desktop 1.5
      -

Netbooks
========

Acer
----

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - Aspire One A110/AOA110/ZG5
      - :y:`Intel GMA (3D)`
      - :y:`Intel HD Audio - Realtek ALC268 codec`
      - :p:`Intel ICH7M (IDE mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :y:`Realtek RTL8102E`
      - :y:`Atheros AR5BXB63`
      - Icaros Desktop 2.2
      -
    * - Aspire One D270
      - :p:`PowerVR (VESA)`
      - :n:`Intel HD Audio - Realtek ALC269VB codec`
      - :p:`Intel ICH7M (IDE mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :y:`Realtek RTL810xE`
      - :n:`Broadcom BCM4313`
      - Icaros Desktop 2.2.5
      - Only 8GB of the HD is accessible in AHCI mode.

Sony
----

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Wireless
      - Test Distro
      - Notes
    * - Vaio VGN-P11Z
      - :p:`PowerVR (VESA only)`
      - :n:`Intel HD Audio - Realtek ALC262 codec`
      - N/A
      - :y:`Intel SCH`
      - :y:`Intel EHCI/UHCI`
      - :n:`Marvell 88E8057`
      - :n:`Atheros AR928X`
      - Icaros Desktop 2.0.3
      - Rarely boots!

Desktops
========

Acer
----

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Test Distro
      - Notes
    * - E380-2B7H
      - :y:`nVidia GeForce 6150SE (3D)`
      - :y:`nVidia HD Audio - Realtek ALC888 codec`
      - :p:`nVidia MCP61 (IDE mode)`
      - :y:`nVidia MCP61`
      - :y:`nVidia EHCI/OHCI`
      - :n:`Marvell 88E8056`
      - Icaros Desktop 1.5.2
      - Does not boot with Icaros Desktop 2.x. Use rear green socket for audio.

Dell
----

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Test Distro
      - Notes
    * - Dimension 3000
      - :p:`Intel Extreme (VGA)`
      - :n:`Intel AC97 - Analog Devices AD1980 codec`
      - N/A
      - :y:`Intel ICH5`
      - :y:`Intel EHCI/UHCI`
      - :y:`Intel 82562EZ`
      - Icaros Desktop 2.2.5
      - Does not boot with VESA enabled.
    * - Dimension 4600
      - :p:`Intel Extreme (VESA)`
      - :p:`Intel AC97 (playback only, use rear black port)`
      - Intel ICH5 (untested)
      - :y:`Intel ICH5`
      - :y:`Intel EHCI/UHCI`
      - :y:`Intel 82562EZ`
      - Icaros Desktop 1.5.2
      -
    * - Optiplex GX260
      - :p:`Intel Extreme (VESA)`
      - :p:`Intel AC97 (playback only)`
      - N/A
      - :y:`Intel ICH4`
      - :y:`Intel EHCI/UHCI`
      - :n:`Intel 82540EM`
      - Nightly Build 2014-09-27
      -
    * - Optiplex GX270
      - :p:`Intel Extreme (VESA)`
      - :p:`Intel AC97 - Analog Devices AD1981B codec (playback only)`
      - :p:`Intel ICH5 (IDE mode)`
      - :y:`Intel ICH5`
      - :y:`Intel EHCI/UHCI`
      - :n:`Intel 82540EM`
      - Icaros Desktop 1.5.2
      -
    * - Optiplex GX280
      - :p:`Intel GMA (only VESA tested)`
      - :p:`Intel AC97 (playback only)`
      - :p:`Intel ICH6 (IDE mode)`
      - :y:`Intel ICH6`
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM5751`
      - Nightly Build 2014-09-27
      -
    * - Optiplex GX520
      - :y:`Intel GMA (3D)`
      - :p:`Intel AC97 (playback only, no line-out)`
      - :p:`Intel ICH7 (IDE mode)`
      - :y:`Intel ICH7`
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM5751`
      - Icaros Desktop 2.2
      -
    * - Optiplex 170L
      - :p:`Intel Extreme (VESA)`
      - :n:`Intel AC97`
      - :p:`Intel ICH5 (IDE mode)`
      - :y:`Intel ICH5`
      - :y:`Intel EHCI/UHCI`
      - :y:`Intel PRO/100`
      - ?
      -
    * - Optiplex 745
      - :p:`Intel GMA (VESA)`
      - :p:`Intel HD Audio - Analog Devices AD1983 codec (no volume control)`
      - :p:`Intel ICH8 (IDE mode)`
      - N/A
      - :p:`Intel EHCI/UHCI (only keyboard/mouse - legacy mode)`
      - :n:`Broadcom BCM5754`
      - ?
      -
    * - Optiplex 755
      - :p:`Intel GMA (VESA)`
      - :n:`Intel HD Audio - Analog Devices AD1984 codec`
      - :p:`Intel ICH9 (IDE mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :n:`Intel 82566DM-2`
      - Icaros Desktop 1.5.1
      - Around 25 second delay in booting from USB.
    * - Optiplex 990
      - :p:`Intel HD (VESA)`
      - :n:`Intel HD Audio - Realtek ALC269 codec`
      - :p:`Intel 6 Series (non-RAID mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :n:`Intel 82579LM`
      - Nightly Build 2014-09-27
      -
    * - Precision 340
      - N/A
      - :y:`Intel AC97`
      - N/A
      - :y:`Intel ICH2`
      - :y:`Intel UHCI`
      - :y:`3Com 3C905C`
      - Nightly Build 2014-09-27
      -
    * - Precision T7500
      - N/A
      - :n:`Intel HD Audio - Analog Devices AD1984A codec`
      - :p:`Intel ICH10 (IDE mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM5761`
      - Icaros Desktop 2.2
      -

Fujitsu Siemens
---------------

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Test Distro
      - Notes
    * - Scenic T i845
      - N/A
      - Intel AC97
      - N/A
      - Intel ICH4
      - Intel EHCI/UHCI
      - Intel PRO/100 VE
      - Icaros Desktop 1.5.2
      - AROS does not boot.

HP
--

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Test Distro
      - Notes
    * - Compaq dc5800
      - :p:`Intel GMA (VESA)`
      - :p:`Intel HD Audio - Analog Devices AD1884 codec (headphones only)`
      - :p:`Intel ICH9 (IDE mode)`
      - N/A
      - :y:`Intel EHCI/UHCI`
      - :n:`Intel 82566DM-2`
      - Icaros Desktop 2.2
      - May need 'noacpi' boot option if using integrated graphics.
    * - Compaq d230
      - :p:`Intel Extreme (VESA)`
      - :p:`Intel AC97 (speaker/headphones only, no line-out)`
      - N/A
      - :y:`Intel ICH4`
      - :y:`Intel EHCI/UHCI`
      - :n:`Broadcom BCM4401`
      - Icaros Desktop 1.4.5
      -
    * - Compaq DX2000 MT
      - :p:`Intel Extreme (VESA)`
      - :n:`Intel AC97 - ADI AD1888 codec`
      - N/A
      - :y:`Intel ICH5`
      - :y:`Intel EHCI/UHCI`
      - Intel PRO/100 (untested)
      - Icaros Desktop 1.5.1
      -
    * - Pavilion t530
      - :p:`nVidia GeForce FX5200 (2D)`
      - :p:`Intel AC97 - Realtek ALC658D codec (playback only)`
      - N/A
      - :y:`Intel ICH4`
      - :y:`Intel EHCI/UHCI`
      - :y:`Realtek RTL8101L`
      - Nightly Build 2012-09-22
      -

Motherboards
============

Biostar
-------

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Test Distro
      - Notes
    * - GF8100 M2+ SE
      - :y:`nVidia GeForce 8100 (3D)`
      - :y:`nVidia HD Audio - Realtek ALC662 codec`
      - :p:`nVidia MCP78 (IDE mode)`
      - :y:`nVidia MCP78`
      - :y:`nVidia EHCI/OHCI`
      - :n:`nVidia MCP78`
      - Icaros Desktop 2.2
      -

MSI
---

.. list-table::
    :header-rows: 1

    * - Model
      - Video
      - Audio
      - SATA
      - PATA
      - USB
      - Ethernet
      - Test Distro
      - Notes
    * - KM4AM-V
      - :p:`VIA UniChrome (VESA)`
      - :n:`VIA AC97 - VT1617 codec`
      - :p:`VIA VT8237R (IDE mode)`
      - :y:`VIA VT8237R`
      - :y:`VIA EHCI/UHCI`
      - :y:`VIA VT6103`
      - Icaros Desktop 2.2
      -

Conventions
===========

If you are adding systems to this page, please follow the following 
conventions, as well as the style used in existing entries:

 * Generally, only items tagged as partially working should have notes
   appended to them. One exception is graphics, where either "2D" or "3D"
   should be noted for working components that have native drivers.
 * Audio should only be tagged as fully working if both playback and recording
   work (unless the hardware doesn't support recording).
 * For SATA/PATA, the name of the manufacturer and chipset should be given.
 * For USB, the name of the manufacturer and interface type that provides USB
   should be given.
 * For Ethernet/wireless, the name of the manufacturer and chipset should be
   given.
 * The Notes column should only contain caveats and tips regarding AROS
   support for the computer. In most cases it should be empty. It should not
   include opinions on the quality of the hardware etc., nor a summary of the
   computer's suitability for AROS.
