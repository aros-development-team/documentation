===================================
AROS ABI: ARM family
===================================

:Authors:   The AROS Development Team
:Copyright: Copyright (C) 2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Describes the behaviour of the AROS main development tree.

.. Contents::


Overview
========

This page describes the parts of the AROS ABI that are specific to the ARM
family. It supplements the `common ABI document <index>`__, which should be
read first.

There are four ABI targets:

===========  ==========  ==========  ====================================
ABI target   Data model  Byte order  Base calling standard
===========  ==========  ==========  ====================================
``arm``      ILP32       little      AAPCS, floating point in core
                                     registers (soft-float)
``armhf``    ILP32       little      AAPCS, VFP variant (hard-float)
``armeb``    ILP32       big         AAPCS, soft-float
``aarch64``  LP64        little      AAPCS64
===========  ==========  ==========  ====================================

These are four distinct ABIs. ``arm`` and ``armhf`` differ in how floating
point arguments and results are passed, and their binaries must not be
mixed.

Ports
-----

======================  ==================================================
Port                    Notes
======================  ==================================================
``raspi-armhf``         Native, Raspberry Pi (32-bit)
``raspi-arm``           Native, Raspberry Pi (32-bit, soft-float)
``raspi-aarch64``       Native, Raspberry Pi (64-bit)
``efika-arm``           Native, Efika MX
``linux-arm``           Hosted on Linux (soft-float). Also the basis of
                        the Android port.
``linux-armhf``         Hosted on Linux (hard-float)
``darwin-aarch64``      Hosted on macOS (Apple silicon)
``linux-aarch64``       Hosted on Linux. Incomplete.
``darwin-arm``          Hosted on iOS. Incomplete.
======================  ==================================================


The platform registers
======================

Both ARM procedure call standards set one register aside as a "platform
register" and leave its meaning to the operating system: ``r9`` in AAPCS
and ``x18`` in AAPCS64. This section states what AROS, as the platform,
defines.

AArch64: x18
------------

**In the AROS ABI x18 is an ordinary caller-saved temporary register.**

+ AROS does not reserve ``x18`` and gives it no special meaning.
+ Compilers for AROS may allocate ``x18`` like any other temporary. AROS
  code must not be built with ``-ffixed-x18`` or an equivalent option.
+ ``x18`` is part of the context of each task. It is saved and restored on
  task switches, interrupts and exceptions together with the other general
  registers.
+ A called function may change ``x18`` without restoring it.

This is the rule on *every* ``aarch64`` port. Some host operating systems
give ``x18`` a meaning of their own: macOS and iOS reserve it for the
system, and Android uses it for the shadow call stack. That has no effect
on the AROS ABI. A port hosted on such a system must run the same AROS
binaries as ``raspi-aarch64``, and it is the port that has to reconcile the
two uses of the register:

+ a value that AROS code holds in ``x18`` must not be lost when the host
  interrupts that code or when the port switches tasks, and
+ if host code needs ``x18`` to hold a value of its own, the port must put
  that value in place before entering host code and treat ``x18`` as
  clobbered afterwards.

See `Hosted ports`_.

32-bit ARM: r9
--------------

**In the AROS ABI r9 is an ordinary callee-saved register**, as in the
standard AAPCS variant where it is known as ``v6``.

+ AROS does not reserve ``r9``.
+ A called function must preserve ``r9``.
+ ``r9`` is part of the context of each task.

Some host systems (notably iOS) treat ``r9`` as a scratch register that
their functions do not preserve. Hosted ports deal with this at the
boundary with the ``AROS_HOST_BARRIER`` macro, which on 32-bit ARM tells
the compiler that ``r9`` has been clobbered by the host call::

    #define AROS_HOST_BARRIER asm volatile("":::"r9");

Thread pointer registers
------------------------

The user-writable thread pointer registers (``TPIDRURW`` on ARM and
``TPIDR_EL0`` on AArch64) are not used by AROS and there is no ELF
thread-local storage. The read-only and privileged thread registers are
reserved for the kernel. Applications must not use any of them.


arm, armhf and armeb
====================

Data representation
-------------------

=====================  ==========
Property               Value
=====================  ==========
``int``, ``long``      32
pointer                32
``AROS_WORDALIGN``     2
``AROS_LONGALIGN``     4
``AROS_PTRALIGN``      4
``AROS_WORSTALIGN``    16
``AROS_STACKALIGN``    16
``AROS_STACKSIZE``     40960
``STACKED`` slot       4 bytes
=====================  ==========

+ Structure layout follows the AAPCS. 64-bit integers and ``double`` are
  aligned to 8 bytes by the compiler.
+ Enumerations are the size of ``int`` (the "aapcs-linux" variant); they
  are not shortened.
+ ``long double`` is the same as ``double``.
+ ``BPTR`` is an ordinary pointer and ``BSTR`` an ordinary C string.

.. Note::

   *Implementation note.* ``<aros/cpu.h>`` defines ``AROS_QUADALIGN`` and
   ``AROS_DOUBLEALIGN`` as 4 on 32-bit ARM. These constants are used by
   ``InitStruct()``; they do not describe the layout the compiler
   produces.

Register usage
--------------

================  ========================================================
Register          Use
================  ========================================================
``r0``-``r3``     Arguments and return value. Scratch.
``r4``-``r8``     Preserved across calls.
``r9``            Preserved across calls. See `32-bit ARM: r9`_.
``r10``           Preserved across calls.
``r11`` (``fp``)  Preserved across calls. Frame pointer.
``r12`` (``ip``)  Scratch. Library base in a C-style library call.
``r13`` (``sp``)  Stack pointer.
``r14`` (``lr``)  Link register.
``r15`` (``pc``)  Program counter.
``d0``-``d7``     ``armhf`` only: floating point arguments and return
                  value. Scratch.
``d8``-``d15``    ``armhf`` only: preserved across calls.
================  ========================================================

Calling conventions
-------------------

C functions follow the AAPCS. On ``arm`` and ``armeb`` floating point
values are passed in core registers and on the stack; on ``armhf`` they are
passed in VFP registers.

Library functions are C functions with **the library base passed as an
extra last argument**. With four or more arguments the base is therefore on
the stack.

Each vector is a 4-byte function pointer (``LIB_VECTSIZE`` is 4), at
``base - 4 * n``.

The link library stub of a C-style function loads the library base into
``r12`` and jumps through the vector::

    ldr     r12, =LibBase
    ldr     r12, [r12]
    ldr     pc, [r12, #-n*4]

Variadic arguments do not form an array in memory; variadic tag and message
functions copy them with the ``AROS_SLOWSTACK*`` macros.

Instruction set
---------------

+ AROS code is built in ARM state (``-marm``). The ELF loader does not
  accept Thumb relocations, so modules must not contain Thumb code.
+ The baseline architecture is ARMv7-A.
+ ``armhf`` requires VFPv3. Ports may raise the baseline further; for
  example ``raspi-armhf`` is built for VFPv4 with NEON.

Stack
-----

+ The stack pointer must be aligned to 8 bytes at every public interface,
  as the AAPCS requires. New tasks start with a stack pointer aligned to
  16 bytes.
+ A new task receives its first four arguments in ``r0``-``r3`` and the
  rest on the stack. ``NewStackSwap()`` does the same.

Processor state
---------------

``struct ExceptionContext`` holds ``r0``-``r11``, ``ip``, ``sp``, ``lr``,
``pc`` and ``cpsr``, and a pointer to the floating point state.

Where the processor has VFP, the VFP state of every task (``d0``-``d15`` or
``d0``-``d31``, and ``fpscr``) is saved and restored on each task switch.

*Implementation note.* On the native ports tasks run in User mode, and the
kernel is entered with the ``svc`` instruction. Applications do not use
``svc`` directly; all system services are reached through libraries.

setjmp buffer
-------------

``jmp_buf`` is 256 bytes. It holds the return address, ``r4``-``r11`` and
``sp``, and on builds with VFP also ``d8``-``d15`` and ``fpscr``.

Executable file format
----------------------

ELF class 32, machine ``EM_ARM``, byte order of the target. The AROS
binutils produce ``REL`` relocations; the loader also accepts ``RELA``.
Accepted relocation types:

``R_ARM_ABS32``, ``R_ARM_REL32``, ``R_ARM_TARGET1``, ``R_ARM_TARGET2``,
``R_ARM_PREL31``, ``R_ARM_CALL``, ``R_ARM_JUMP24``, ``R_ARM_PC24``,
``R_ARM_MOVW_ABS_NC``, ``R_ARM_MOVT_ABS``, ``R_ARM_V4BX``, ``R_ARM_NONE``.

+ Branches have a range of 32 MB and the loader does not insert veneers.
  It places all segments of a module in one contiguous area so that they
  are in range of each other. Calls between modules always go through a
  library vector or a function pointer.
+ The loader reads the ``.ARM.attributes`` section and refuses a module
  that needs a newer CPU architecture or floating point unit than the
  machine provides.
+ The loader does not check whether a module was built for ``arm`` or
  ``armhf``. Installing binaries for the wrong target is not detected.

Compiler configuration
----------------------

==============================  ==============================================
Setting                         Value
==============================  ==============================================
Target triple                   ``arm-aros`` (``armeb-aros`` for big-endian)
Instruction set                 ``-marm -march=armv7-a``
Floating point, ``arm``         ``-mfloat-abi=soft``
Floating point, ``armhf``       ``-mfloat-abi=hard -mfpu=vfpv3`` or better
Position independent code       Not used
Exception handling              ARM EHABI unwind tables
==============================  ==============================================


aarch64
=======

Data representation
-------------------

=====================  ==========
Property               Value
=====================  ==========
Byte order             little
``int``                32
``long``, pointer      64
``AROS_WORDALIGN``     2
``AROS_LONGALIGN``     4
``AROS_QUADALIGN``     8
``AROS_PTRALIGN``      8
``AROS_DOUBLEALIGN``   8
``AROS_WORSTALIGN``    16
``AROS_STACKALIGN``    16
``AROS_STACKSIZE``     40960
``STACKED`` slot       8 bytes
=====================  ==========

``long double`` is the 128-bit IEEE quadruple format. ``BPTR`` is an
ordinary pointer and ``BSTR`` an ordinary C string.

Register usage
--------------

==================  ======================================================
Register            Use
==================  ======================================================
``x0``-``x7``       Arguments and return value. Scratch.
``x8``              Indirect result location. Scratch.
``x9``-``x15``      Scratch.
``x16`` (``ip0``)   Scratch. Library base in a C-style library call.
``x17`` (``ip1``)   Scratch. Used by library stubs.
``x18``             Scratch. See `AArch64: x18`_.
``x19``-``x28``     Preserved across calls.
``x29`` (``fp``)    Preserved across calls. Frame pointer.
``x30`` (``lr``)    Link register.
``sp``              Stack pointer.
``v0``-``v7``       Floating point and vector arguments and return value.
                    Scratch.
``v8``-``v15``      The low 64 bits are preserved across calls.
``v16``-``v31``     Scratch.
==================  ======================================================

No register is reserved.

Calling conventions
-------------------

C functions follow AAPCS64 without change. Variadic arguments are passed in
registers and on the stack exactly like other arguments.

Library functions are C functions with **the library base passed as an
extra last argument**, in the next free argument register::

    mov     x0, byteSize
    mov     w1, requirements
    ldr     x2, SysBase
    ldr     x16, [x2, #-264]    // AllocMem(), LVO 33: -33 * 8
    blr     x16

Each vector is an 8-byte function pointer (``LIB_VECTSIZE`` is 8), at
``base - 8 * n``.

The link library stub of a C-style function loads the library base into
``x16`` and uses ``x17`` for the function address::

    ldr     x16, =LibBase
    ldr     x16, [x16]
    mov     x17, #n*8
    sub     x17, x16, x17
    ldr     x17, [x17]
    br      x17

Variadic tag and message functions copy their arguments with the
``AROS_SLOWSTACK*`` macros.

Stack
-----

+ The stack pointer must be aligned to 16 bytes at all times.
+ Functions maintain an AAPCS64 frame record in ``x29``. A new task starts
  with ``x29`` set to zero, which ends a backtrace.
+ A new task receives all eight of its arguments in ``x0``-``x7``.
  ``NewStackSwap()`` does the same; the stack pointer passed to it must be
  aligned to 16 bytes.

Code model
----------

Modules can be loaded anywhere in the 64-bit address space. All AROS code
must be compiled with the **large code model** (``-mcmodel=large``) and
without position independence. The loader rejects GOT-relative relocations,
which indicate code built without these options.

Processor state
---------------

``struct ExceptionContext`` holds ``x0``-``x28``, ``fp``, ``lr``, ``sp``,
``pc`` and the processor state, and a pointer to the floating point state.

+ Floating point and Advanced SIMD are always available and application
  code may use them without checking.
+ ``v0``-``v31``, ``fpcr`` and ``fpsr`` are preserved for every task.

*Implementation note.* On the native ports tasks run privileged, at
exception level 1 using the ``SP_EL0`` stack pointer, and the kernel is
entered with ``svc``. As everywhere, code must not depend on its privilege
level and must not use ``svc`` directly.

setjmp buffer
-------------

``jmp_buf`` is 256 bytes. It holds the return address, ``x19``-``x30``,
``sp`` and ``d8``-``d15``. ``x18`` is not saved.

Executable file format
----------------------

ELF class 64, little-endian, machine ``EM_AARCH64``, with ``RELA``
relocations. Accepted relocation types:

``R_AARCH64_ABS64``, ``R_AARCH64_ABS32``, ``R_AARCH64_PREL64``,
``R_AARCH64_PREL32``, ``R_AARCH64_MOVW_UABS_G0`` to ``_G3`` (with and
without ``_NC``), ``R_AARCH64_ADR_PREL_PG_HI21`` (and ``_NC``),
``R_AARCH64_ADR_PREL_LO21``, ``R_AARCH64_ADD_ABS_LO12_NC``,
``R_AARCH64_LDST8_ABS_LO12_NC`` to ``R_AARCH64_LDST128_ABS_LO12_NC``,
``R_AARCH64_LD_PREL_LO19``, ``R_AARCH64_CALL26``, ``R_AARCH64_JUMP26``,
``R_AARCH64_CONDBR19``, ``R_AARCH64_TSTBR14``, ``R_AARCH64_NONE``.

Direct branches have a range of 128 MB and the loader does not insert
veneers. It places all segments of a module in one contiguous area so that
they are in range of each other.

Compiler configuration
----------------------

==============================  ==============================================
Setting                         Value
==============================  ==============================================
Target triple                   ``aarch64-aros``
Code model                      ``-mcmodel=large``
Position independent code       Not used (``-fno-pic -fno-pie``)
Reserved registers              None. ``x18`` is allocatable.
Thread-local storage            Emulated
Exception handling              DWARF 2
==============================  ==============================================

Ports choose the baseline architecture; ``raspi-aarch64`` is built for
ARMv8-A with CRC and Advanced SIMD.


Hosted ports
============

The hosted ARM ports run the same binaries as the native ports. The
requirements are given in the `common document <index#hosted-ports>`__;
this section lists how the ARM hosts are known to differ from the AROS ABI.

==================  ============================  ============================
Host                Difference from the AROS ABI  Where it must be handled
==================  ============================  ============================
iOS, 32-bit         ``r9`` is not preserved by    ``AROS_HOST_BARRIER`` after
                    host functions                every host call
macOS/iOS, AArch64  ``x18`` is reserved by the    The port's host-call and
                    host                          task switching code
macOS, AArch64      Variadic arguments are        ``HOST_VACALL3()`` in
                    passed on the stack           ``<host_vacall.h>``
macOS, AArch64      Memory may not be writable    The port's loader support
                    and executable at once        (segments are made
                                                  executable after relocation)
Android, AArch64    ``x18`` is used for the       The port's host-call and
                    shadow call stack             task switching code
==================  ============================  ============================

None of these differences may be resolved by building AROS code
differently for the port.

Conformance of the current ports
--------------------------------

+ ``darwin-aarch64`` builds AROS code with the standard AROS options and
  saves and restores ``x18`` with the rest of a task's registers, but does
  not yet contain a dedicated mechanism to protect ``x18`` from the host.
+ ``linux-aarch64`` is not yet a working port: it lacks the kernel support
  for the CPU and does not apply the AArch64 compiler options above.


Source references
=================

===============================================  ============================
Location                                         Content
===============================================  ============================
``arch/arm-all/include/aros-armel/cpu.h``        ARM types, alignment, vectors
``arch/arm-all/include/aros-armeb/cpu.h``        The same for big-endian
``arch/arm-all/include/aros/genmodule.h``        ARM library stubs
``arch/aarch64-all/include/aros/cpu.h``          AArch64 types, alignment,
                                                 vectors
``arch/aarch64-all/include/aros/genmodule.h``    AArch64 library stubs
``arch/*-all/include/aros/cpucontext.h``         Saved processor state
``arch/*-all/exec``                              Stack swapping, task setup
``arch/*-all/stdc``                              ``setjmp``/``longjmp``
``arch/arm-native``, ``arch/aarch64-native``     Native kernels
``arch/all-unix/include/host_vacall.h``          Host variadic call shim
``arch/all-darwin``                              macOS and iOS host support
``configure.in``                                 Compiler flags for each port
===============================================  ============================
