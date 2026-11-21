===================================
AROS ABI: RISC-V
===================================

:Authors:   The AROS Development Team
:Copyright: Copyright (C) 2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Describes the behaviour of the AROS main development tree.

.. Contents::


Overview
========

This page describes the parts of the AROS ABI that are specific to RISC-V.
It supplements the `common ABI document <index>`__, which should be read
first.

There are two ABI targets, both little-endian and both based on the RISC-V
ELF psABI with the double-precision floating point calling convention:

===========  ==========  ===============  ================================
ABI target   Data model  psABI variant    Baseline instruction set
===========  ==========  ===============  ================================
``riscv64``  LP64        LP64D            RVA22U64 profile
``riscv``    ILP32       ILP32D           RV32IMAFDC
===========  ==========  ===============  ================================

Ports
-----

====================  ====================================================
Port                  Notes
====================  ====================================================
``sbi-riscv64``       Native, 64-bit machines with SBI firmware. The
                      reference for this ABI.
``sbi-riscv``         32-bit. The headers, C runtime and loader support
                      it, but there is no bootable platform yet.
====================  ====================================================

``opensbi`` is accepted as an alias for the ``sbi`` platform name. There
are no hosted RISC-V ports.


Data representation
===================

=====================  ===========  ==========
Property               riscv64      riscv
=====================  ===========  ==========
Byte order             little       little
``int``                32           32
``long``, pointer      64           32
``AROS_WORDALIGN``     2            2
``AROS_LONGALIGN``     4            4
``AROS_QUADALIGN``     8            4     
``AROS_PTRALIGN``      8            4
``AROS_DOUBLEALIGN``   8            4     
``AROS_WORSTALIGN``    16           16
``AROS_STACKALIGN``    16           16
``AROS_STACKSIZE``     40960        40960
``STACKED`` slot       8 bytes      4 bytes
=====================  ===========  ==========

+ Structure layout follows the psABI. On both targets 64-bit integers and
  ``double`` are aligned to 8 bytes.
+ ``long double`` is the 128-bit IEEE quadruple format.
+ ``BPTR`` is an ordinary pointer and ``BSTR`` an ordinary C string.

.. Note::

   *Implementation note.* On the 32-bit target ``<aros/cpu.h>`` defines
   ``AROS_QUADALIGN`` and ``AROS_DOUBLEALIGN`` as 4. These constants are
   used by ``InitStruct()``; they do not describe the layout the compiler
   produces.


Register usage
==============

====================  ====================================================
Register              Use
====================  ====================================================
``zero`` (``x0``)     Always zero.
``ra`` (``x1``)       Return address.
``sp`` (``x2``)       Stack pointer.
``gp`` (``x3``)       Reserved for the kernel. See below.
``tp`` (``x4``)       Reserved for the kernel. See below.
``t0``-``t2``         Scratch. ``t0`` is used by library stubs for the
                      function address.
``s0`` (``fp``)       Preserved across calls. Frame pointer.
``s1``                Preserved across calls.
``a0``-``a7``         Arguments. ``a0`` and ``a1`` hold the return value.
                      Scratch.
``s2``-``s11``        Preserved across calls.
``t3``-``t5``         Scratch.
``t6``                Scratch. Library base in a C-style library call.
``ft0``-``ft11``      Scratch.
``fa0``-``fa7``       Floating point arguments. ``fa0`` and ``fa1`` hold
                      the return value. Scratch.
``fs0``-``fs11``      Preserved across calls.
====================  ====================================================

gp and tp
---------

**Application code must not use gp or tp.** Neither register is part of
the saved context of a task, so a value placed in one of them is not
preserved.

gp
    Holds the global pointer of the kernel image. Loadable modules are
    relocatable objects that can be loaded at any address, and the loader
    does not support global-pointer-relative relocations. Modules must
    therefore not use ``gp``-relative addressing.

tp
    The psABI assigns ``tp`` to thread-local storage. AROS has no ELF
    thread-local storage, so the toolchains never generate code that uses
    it; the register is reserved for the kernel's own use.


Calling conventions
===================

C functions
-----------

C functions follow the RISC-V psABI with the LP64D or ILP32D convention:
integer arguments in ``a0``-``a7``, floating point arguments in
``fa0``-``fa7``, and further arguments on the stack.

Library functions
-----------------

Library functions are C functions with **the library base passed as an
extra last argument**, in the next free argument register or on the stack.

Each vector is a register-width function pointer (``LIB_VECTSIZE`` is 8 on
``riscv64`` and 4 on ``riscv``), at ``base - LIB_VECTSIZE * n``::

    ld      a0, byteSize
    lw      a1, requirements
    ld      a2, SysBase
    ld      t0, -264(a2)        # AllocMem(), LVO 33: -33 * 8
    jalr    t0

C-style library functions
-------------------------

The link library stub of a C-style function loads the library base into
``t6`` and the function address into ``t0``::

    la      t6, LibBase
    ld      t6, 0(t6)
    li      t0, n*8
    sub     t0, t6, t0
    ld      t0, 0(t0)
    jr      t0

``t6`` is a temporary that is never used to pass arguments, so all eight
integer and all eight floating point argument registers reach the function
untouched.

Variadic functions
------------------

Variadic arguments are passed in registers and on the stack as the psABI
specifies. Variadic tag and message functions copy them with the
``AROS_SLOWSTACK*`` macros described in the common document.


The stack
=========

+ The stack pointer must be aligned to 16 bytes at all times.
+ There is no red zone. The kernel builds its trap frame directly below
  the stack pointer of the interrupted code.
+ Functions maintain a frame pointer in ``s0``. A new task starts with
  ``s0`` set to zero, which ends a backtrace.
+ A new task receives all eight of its arguments in ``a0``-``a7``.
  ``NewStackSwap()`` does the same; the stack pointer passed to it must be
  aligned to 16 bytes.


Code model
==========

Modules can be loaded anywhere in the address space. All AROS code must be
compiled with the **medany code model** (``-mcmodel=medany``), which
addresses code and data relative to the program counter, and without
position independence. The loader rejects GOT relocations, which indicate
code built as position independent.

The linker's relaxation of references to ``gp``-relative form does not take
place for modules, because they are produced by a partial link.


Instruction set
===============

+ ``riscv64`` code is built for the RVA22U64 profile. This includes the
  compressed (C) instructions, so instructions may be 16 bits long.
+ ``riscv`` code is built for RV32IMAFDC.
+ The single and double precision floating point extensions are required
  and application code may use them without checking.
+ The vector (V) extension is not part of the baseline and its state is
  not currently preserved for tasks. Applications must not use vector
  instructions.
+ ``Zifencei`` is optional in RVA22; code that modifies instructions must
  use ``CacheClearE()`` rather than executing ``fence.i`` itself.


Processor state of a task
=========================

``struct ExceptionContext`` (``<aros/cpucontext.h>``) holds the general
registers other than ``zero``, ``gp`` and ``tp``, the program counter, the
status register, and pointers to the floating point and vector state.

``f0``-``f31`` and ``fcsr`` are preserved for every task.

*Implementation note.* On the ``sbi`` platform all code, including tasks,
runs in supervisor mode on top of SBI firmware. The ``ecall`` instruction
is the interface to that firmware and is not an AROS system call;
applications must not execute ``ecall`` or ``ebreak``. All system services
are reached through libraries.


setjmp buffer
=============

``jmp_buf`` holds the return address, ``s0``-``s11``, ``sp`` and
``fs0``-``fs11``.

===========  =====================================  ==============
ABI target   Layout                                 Size in bytes
===========  =====================================  ==============
``riscv64``  Return address and 25 8-byte slots     208
``riscv``    Return address and 37 4-byte slots     152
===========  =====================================  ==============

``gp``, ``tp`` and ``fcsr`` are not saved.


Executable file format
======================

ELF machine ``EM_RISCV``, little-endian, class 64 for ``riscv64`` and class
32 for ``riscv``, with ``RELA`` relocations on both. The loader accepts:

``R_RISCV_32``, ``R_RISCV_64``, ``R_RISCV_32_PCREL``, ``R_RISCV_BRANCH``,
``R_RISCV_JAL``, ``R_RISCV_CALL``, ``R_RISCV_CALL_PLT``,
``R_RISCV_PCREL_HI20``, ``R_RISCV_PCREL_LO12_I``,
``R_RISCV_PCREL_LO12_S``, ``R_RISCV_HI20``, ``R_RISCV_LO12_I``,
``R_RISCV_LO12_S``, ``R_RISCV_RVC_BRANCH``, ``R_RISCV_RVC_JUMP``,
``R_RISCV_ADD8`` to ``R_RISCV_ADD64``, ``R_RISCV_SUB8`` to
``R_RISCV_SUB64``, ``R_RISCV_SUB6``, ``R_RISCV_SET6`` to
``R_RISCV_SET32``, ``R_RISCV_SET_ULEB128``, ``R_RISCV_SUB_ULEB128``,
``R_RISCV_RELAX``, ``R_RISCV_ALIGN``, ``R_RISCV_NONE``.

+ ``R_RISCV_RELAX`` and ``R_RISCV_ALIGN`` are accepted and ignored: the
  loader does not relax code, and alignment padding is already in place.
+ Global-pointer-relative (``R_RISCV_GPREL_*``) and thread-local
  (``R_RISCV_TPREL_*``, ``R_RISCV_TLS_*``) relocations are not supported.
+ The loader does not check the floating point ABI recorded in the ELF
  header flags. Installing binaries built for a different floating point
  convention is not detected.


Compiler configuration
======================

==============================  ==============================================
Setting                         Value
==============================  ==============================================
Target triple                   ``riscv64-aros`` (64-bit)
Instruction set, ``riscv64``    ``-march=rva22u64``
Instruction set, ``riscv``      ``-march=rv32imafdc``
Calling convention              ``-mabi=lp64d``, ``-mabi=ilp32d``
Code model                      ``-mcmodel=medany``
Position independent code       Not used
Thread-local storage            Emulated
Exception handling              DWARF 2
==============================  ==============================================

The same options are used for every RISC-V platform; they are set by the
CPU, not by the port.

.. Note::

   GCC does not define ``__riscv64``. Code that needs to distinguish the
   two targets must test ``defined(__riscv) && (__riscv_xlen == 64)``.


Source references
=================

=============================================  ============================
Location                                       Content
=============================================  ============================
``arch/riscv-all/include/aros/cpu.h``          Types, alignment, vectors
                                               (both widths)
``arch/riscv-all/include/aros/genmodule.h``    Library stubs
``arch/riscv-all/include/aros/cpucontext.h``   Saved processor state
``arch/riscv-all/include/aros/xlen.h``         Register width helpers
``arch/riscv-all/exec``                        Stack swapping, task setup
``arch/riscv-all/crt``                         ``setjmp``/``longjmp``
``arch/riscv64-sbi``                           SBI platform and kernel
``configure.in``                               Compiler flags
=============================================  ============================
