===================================
AROS ABI: PowerPC
===================================

:Authors:   The AROS Development Team
:Copyright: Copyright (C) 2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Describes the behaviour of the AROS main development tree.

.. Contents::


Overview
========

This page describes the parts of the AROS ABI that are specific to PowerPC.
It supplements the `common ABI document <index>`__, which should be read
first.

There is one ABI target, ``ppc``: 32-bit, big-endian, based on the System V
PowerPC ABI (the "SVR4" ABI, not the embedded EABI), with hardware floating
point. There is no 64-bit PowerPC target.

Ports
-----

====================  ====================================================
Port                  Notes
====================  ====================================================
``sam440-ppc``        Native, AMCC 440 based boards (Sam440, Sam460)
``chrp-ppc``          Native, CHRP machines; the ``efika`` variant
                      supports the Efika 5200B
``linux-ppc``         Hosted on Linux
``darwin-ppc``        Hosted on Mac OS X. See `Hosted ports`_.
====================  ====================================================

AROS can also be built to run inside MorphOS. That flavour uses the MorphOS
conventions for calling the 68k-style system libraries and is not described
by this page.


Data representation
===================

=====================  ==========
Property               Value
=====================  ==========
Byte order             big
``int``, ``long``      32
pointer                32
``AROS_WORDALIGN``     2
``AROS_LONGALIGN``     4
``AROS_QUADALIGN``     8
``AROS_PTRALIGN``      4
``AROS_WORSTALIGN``    16
``AROS_STACKALIGN``    16
``AROS_STACKSIZE``     40960
``STACKED`` slot       4 bytes
=====================  ==========

+ Structure layout follows the System V PowerPC ABI. 64-bit integers and
  ``double`` are aligned to 8 bytes.
+ ``BPTR`` is an ordinary pointer and ``BSTR`` an ordinary C string.

.. Note::

   *Implementation note.* ``<aros/cpu.h>`` defines ``AROS_DOUBLEALIGN`` as 4
   on PowerPC. This constant is used by ``InitStruct()``; it does not
   describe the layout the compiler produces.


Register usage
==============

==================  ======================================================
Register            Use
==================  ======================================================
``r0``              Scratch.
``r1``              Stack pointer.
``r2``              Reserved. See below.
``r3``-``r10``      Arguments. ``r3`` and ``r4`` hold the return value.
                    Scratch.
``r11``             Scratch. Used by library stubs for the function
                    address.
``r12``             Scratch. Library base in a C-style library call.
``r13``             Not used by AROS. See below.
``r14``-``r31``     Preserved across calls.
``f0``-``f13``      Floating point arguments (``f1``-``f8``) and return
                    value (``f1``). Scratch.
``f14``-``f31``     Preserved across calls.
``lr``, ``ctr``     Link and count registers. Scratch.
``cr2``-``cr4``     Preserved across calls. Other condition fields are
                    scratch.
==================  ======================================================

r2
    The base ABI reserves ``r2`` for the system. AROS code must not modify
    it. Its value is kept for each task and is set when the task is created.
    *Implementation note:* the ``sam440-ppc`` kernel keeps the address of
    ``SysBase`` in ``r2``; applications must not rely on this.

r13
    The base ABI uses ``r13`` as the small data area pointer. AROS has no
    small data area: modules can be loaded at any address and the loader
    does not support small-data relocations. AROS code must be built
    without small-data addressing and must not depend on the value of
    ``r13``.


Calling conventions
===================

C functions
-----------

C functions follow the System V PowerPC ABI: the first eight integer
arguments are passed in ``r3``-``r10``, the first eight floating point
arguments in ``f1``-``f8``, and further arguments on the stack.

Library functions
-----------------

Library functions are C functions with **the library base passed as an
extra last argument**, in the next free argument register or on the stack.

Each vector is a 4-byte function pointer (``LIB_VECTSIZE`` is 4), at
``base - 4 * n``. A call loads the pointer and branches through the count
register::

    lwz     r3, byteSize
    lwz     r4, requirements
    lwz     r5, SysBase
    lwz     r11, -132(r5)       # AllocMem(), LVO 33: -33 * 4
    mtctr   r11
    bctrl

C-style library functions
-------------------------

The link library stub of a C-style function loads the library base into
``r12`` and the function address into ``r11``::

    lis     r12, LibBase@ha
    lwz     r12, LibBase@l(r12)
    lwz     r11, -n*4(r12)
    mtctr   r11
    bctr

Variadic functions
------------------

Variadic arguments are passed in registers and on the stack as the base ABI
specifies. Variadic tag and message functions copy them with the
``AROS_SLOWSTACK*`` macros described in the common document.


The stack
=========

+ The stack pointer ``r1`` must be aligned to 16 bytes at all times.
+ Stack frames follow the System V layout: the word at ``0(r1)`` is the
  back chain to the caller's frame and the word at ``4(r1)`` is where a
  called function saves the link register. The outermost frame of a task
  has a back chain of zero.
+ There is no red zone. The kernel may build an exception frame
  immediately below ``r1``.
+ A new task receives all eight of its arguments in ``r3``-``r10``.
  ``NewStackSwap()`` does the same.


Processor state of a task
=========================

``struct ExceptionContext`` (``<aros/cpucontext.h>``) is source compatible
with the AmigaOS 4 structure of the same name. It holds the general
registers, ``msr``, ``ip``, ``cr``, ``xer``, ``ctr``, ``lr``, the floating
point registers and ``fpscr``, and has room for AltiVec state.

+ Tasks run with the floating point unit enabled. ``f0``-``f31`` and
  ``fpscr`` are preserved for every task.
+ AltiVec state is not currently preserved. Applications must not use
  AltiVec.

*Implementation note.* On the native ports tasks run in user mode and the
kernel is entered with the ``sc`` instruction. Applications do not use
``sc`` directly; all system services are reached through libraries.


setjmp buffer
=============

``jmp_buf`` consists of the return address followed by 58 word-sized
slots.

==================  ==========================
Byte offset         Content
==================  ==========================
0                   Link register
4                   ``r1``
8                   ``r2``
12                  Condition register
16-84               ``r14``-``r31``
88-224              ``f14``-``f31``
==================  ==========================

``r13``, ``fpscr`` and AltiVec registers are not saved.


Executable file format
======================

ELF class 32, big-endian, machine ``EM_PPC``, with ``RELA`` relocations.
The loader accepts:

``R_PPC_ADDR32``, ``R_PPC_ADDR16_LO``, ``R_PPC_ADDR16_HA``,
``R_PPC_REL24``, ``R_PPC_REL32``, ``R_PPC_REL16_LO``, ``R_PPC_REL16_HA``,
``R_PPC_NONE``.

+ Small-data relocations (``R_PPC_SDAREL16``, ``R_PPC_EMB_SDA21`` and
  related types) are not supported.
+ Direct branches (``R_PPC_REL24``) have a range of 32 MB and the loader
  does not insert trampolines. Calls between modules always go through a
  library vector or a function pointer.


Compiler configuration
======================

==============================  ==============================================
Setting                         Value
==============================  ==============================================
Target triple                   ``powerpc-aros``
Base ABI                        System V (``-mcall-sysv`` conventions)
Floating point                  Hardware
Small data                      Not used
Position independent code       Not used
==============================  ==============================================

Ports select the processor model: ``sam440-ppc`` is built with
``-mcpu=440fp`` and the ``efika`` variant of ``chrp-ppc`` with
``-mcpu=603e``. Binaries intended to run on every PowerPC port must be
built for the common 32-bit PowerPC instruction set.


Hosted ports
============

The hosted PowerPC ports run the same binaries as the native ports. The
requirements are given in the `common document <index#hosted-ports>`__.

+ On Linux, ``r2`` belongs to the host's thread library. AROS code never
  modifies ``r2``, and each task keeps the value it was created with, so no
  conversion is needed.
+ Mac OS X uses a different PowerPC ABI from AROS, in which some registers
  that AROS code expects to be preserved are not. The difference must be
  resolved at the host-call boundary with an ``AROS_HOST_BARRIER``
  definition for PowerPC.

Conformance of the current ports
--------------------------------

``darwin-ppc`` does not yet define ``AROS_HOST_BARRIER`` for PowerPC and is
therefore not a working port.


Source references
=================

=============================================  ============================
Location                                       Content
=============================================  ============================
``arch/ppc-all/include/aros/cpu.h``            Types, alignment, vectors
``arch/ppc-all/include/aros/genmodule.h``      Library stubs
``arch/ppc-all/include/aros/cpucontext.h``     Saved processor state
``arch/ppc-all/exec``                          Stack swapping
``arch/ppc-all/stdc``                          ``setjmp``/``longjmp``
``arch/ppc-sam440``, ``arch/ppc-chrp``         Native kernels
``arch/all-linux/kernel/cpu_ppc.h``            Linux host support
``arch/all-darwin``                            Mac OS X host support
``configure.in``                               Compiler flags for each port
=============================================  ============================
