===================================
AROS Application Binary Interface
===================================

:Authors:   The AROS Development Team
:Copyright: Copyright (C) 2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Describes the behaviour of the AROS main development tree.

.. Contents::


Introduction
============

This document describes the Application Binary Interface (ABI) of AROS: the
rules that compiled code must follow so that programs, libraries, devices and
the kernel can work together without being built from the same sources at the
same time.

It covers the parts of the ABI that are common to every CPU:

+ how data is represented,
+ how functions, libraries, hooks and callbacks are called,
+ how the stack is used,
+ how programs and modules are started,
+ the format of executable files, and
+ what a hosted port must do to remain compatible.

Everything that depends on the processor (register usage, vector formats,
compiler options, relocation types) is described in a separate page for each
CPU family:

+ `Motorola 68000 family (m68k) <m68k>`__
+ `x86 family (i386 and x86_64) <x86>`__
+ `ARM family (arm, armhf, armeb and aarch64) <arm>`__
+ `PowerPC (ppc) <ppc>`__
+ `RISC-V (riscv and riscv64) <riscv>`__

The intended readers are people who write assembly or compiler support for
AROS, who port AROS to a new platform, who write libraries and drivers, or who
need to debug at the machine level. Application programmers who only use C
and the system headers get the ABI for free from the compiler and the
``AROS_*`` macros, but may still find the sections on data types, tag lists
and hooks useful.

The SMP (multi-processor) aspects of the ABI are not covered here.

Terminology
-----------

Rule
    A statement using *must*, *must not* or *is* describes something that
    binary compatibility depends on.

Implementation note
    A statement introduced as an implementation note describes how the
    current sources do something. Code must not depend on it.

Port
    A combination of a platform and a CPU that AROS can be built for, for
    example ``pc-x86_64``, ``linux-x86_64``, ``raspi-aarch64`` or
    ``amiga-m68k``.

Native port
    A port where AROS runs directly on the hardware.

Hosted port
    A port where AROS runs as a program on top of another operating system
    (the *host*), such as Linux, macOS or Windows.

Module
    Any loadable AROS binary: a program, library, device, resource, handler
    or class.


Design principles
=================

AROS defines its own ABI
------------------------

AROS is a stand-alone operating system. Its ABI is defined by AROS, for
AROS, and is the same whether AROS runs natively or hosted.

For each CPU the AROS ABI is based on a well-known C calling standard (for
example the System V AMD64 ABI on x86_64 or AAPCS64 on AArch64) with a small
number of AROS specific additions. Where AROS says something different from
the base standard, or from the conventions of any other operating system,
AROS code follows the AROS rule.

One ABI for each CPU
--------------------

There is exactly one AROS ABI for each *ABI target* listed in `ABI targets`_.
The platform is not part of it. An ordinary application or library that is
built for an ABI target and that only uses the public AROS interfaces must
run unchanged on every port of that target. For example, the same x86_64
binary must run on ``pc-x86_64``, ``linux-x86_64``, ``darwin-x86_64`` and
``mingw32-x86_64``.

The only binaries that are expected to be specific to one port are those
that talk to the platform itself: the kernel, the bootstrap, hardware
drivers, and the drivers that connect a hosted AROS to its host.

Hosted ports do not influence the ABI
-------------------------------------

A host operating system has its own ABI, and it will often differ from the
AROS one: it may reserve a register, lay out variadic arguments differently,
require a different stack alignment or use a different calling convention
altogether. None of this changes the AROS ABI.

+ A hosted port must run the same AROS binaries as the native port for the
  same CPU, with the same compiler settings.
+ A hosted port must not be built with a modified ABI in order to suit its
  host. A port that can only run binaries built specially for it is not
  acceptable.
+ It is the responsibility of each hosted implementation to provide whatever
  mechanism is needed to work around the constraints of its host. Those
  mechanisms belong in the port's own kernel, bootstrap and host-interface
  code and must be invisible to applications.

The requirements are set out in detail in `Hosted ports`_.

Relationship to AmigaOS
-----------------------

On m68k, AROS aims to be binary compatible with AmigaOS 3.x: structures have
the same layout, library functions take their arguments in the same
registers, and AmigaOS executables can be loaded and run. See the
`m68k page <m68k>`__.

On every other CPU, AROS is source compatible with the AmigaOS API. The
register names that appear in function definitions are kept for
documentation and for m68k, but arguments are passed using the C calling
convention of the CPU.


ABI targets
===========

================  ==========  ==========  ======  ========================  ===========
ABI target        Data model  Byte order  FPU     Base calling standard     Details
================  ==========  ==========  ======  ========================  ===========
``m68k``          ILP32       big         soft    AmigaOS register calls    `m68k`__
``i386``          ILP32       little      x87     System V i386 (cdecl)     `x86`__
``x86_64``        LP64        little      SSE2    System V AMD64            `x86`__
``arm``           ILP32       little      soft    AAPCS                     `arm`__
``armhf``         ILP32       little      VFP     AAPCS, VFP variant        `arm`__
``armeb``         ILP32       big         soft    AAPCS                     `arm`__
``aarch64``       LP64        little      NEON    AAPCS64                   `arm`__
``ppc``           ILP32       big         hard    System V PowerPC          `ppc`__
``riscv``         ILP32       little      D       RISC-V psABI, ILP32D      `riscv`__
``riscv64``       LP64        little      D       RISC-V psABI, LP64D       `riscv`__
================  ==========  ==========  ======  ========================  ===========

__ m68k
__ x86
__ x86
__ arm
__ arm
__ arm
__ arm
__ ppc
__ riscv
__ riscv

Two ABI targets are never binary compatible with each other, even when they
share a CPU. In particular ``arm`` and ``armhf`` pass floating point
arguments differently and their binaries must not be mixed.


Data representation
===================

Fundamental types
-----------------

The system headers define a set of fixed-size types in ``<exec/types.h>``.
Their sizes are the same on all targets, except for the pointer-sized types.

==================  ==================  ==================================
Type                Size                Notes
==================  ==================  ==================================
``BYTE``/``UBYTE``  8 bits
``WORD``/``UWORD``  16 bits
``LONG``/``ULONG``  32 bits             Always 32 bits, including on
                                        64-bit targets. C type ``int``.
``QUAD``/``UQUAD``  64 bits
``IPTR``/``SIPTR``  size of a pointer   Integer that can hold a pointer.
                                        C type ``long``.
``APTR``            size of a pointer   ``void *``
``BOOL``            16 bits             C type ``short``
``FLOAT``           32 bits             IEEE 754 single
``DOUBLE``          64 bits             IEEE 754 double
``BPTR``            size of a pointer   See `BCPL pointers and strings`_
==================  ==================  ==================================

The 32-bit targets use the ILP32 data model (``int``, ``long`` and pointers
are 32 bits). The 64-bit targets use LP64 (``int`` is 32 bits; ``long`` and
pointers are 64 bits).

The following C types are fixed by the AROS toolchains on every target:

==============  ==========================
C type          Definition
==============  ==========================
``size_t``      ``unsigned long``
``ptrdiff_t``   ``long``
``wchar_t``     ``unsigned int`` (32 bits)
==============  ==========================

.. Note::

   A value that may hold a pointer must be stored in an ``IPTR`` (or
   ``SIPTR``, ``APTR``), never in a ``ULONG``. This is the most common
   source of errors when AmigaOS code is moved to a 64-bit target.

Byte order
----------

Multi-byte values are stored in the natural byte order of the ABI target, as
listed in `ABI targets`_. The macro ``AROS_BIG_ENDIAN`` is 1 on big-endian
targets and 0 otherwise. Data that is exchanged with files or other machines
has the byte order defined by its format and must be converted with the
``AROS_BE2LONG()`` family of macros.

Alignment and structure layout
------------------------------

System structures are laid out using the natural alignment rules of the C
compiler for the target. There is no global packing. The consequences are:

+ On m68k, 16-bit and larger types are aligned to 2 bytes, which gives the
  same structure layout as AmigaOS.
+ On the other 32-bit targets, 32-bit types and pointers are aligned to 4
  bytes.
+ On 64-bit targets, pointers, ``IPTR`` and ``QUAD`` are aligned to 8 bytes.

A structure that describes a file format or an on-disk or on-wire layout is
declared with the ``__packed`` attribute and has the same layout everywhere.

Each CPU page lists the alignment constants (``AROS_LONGALIGN``,
``AROS_PTRALIGN``, ``AROS_WORSTALIGN`` and so on) from ``<aros/cpu.h>``.
``AROS_WORSTALIGN`` is the alignment that is sufficient for any object, and
is the minimum alignment of memory returned by the Exec allocators.

Tag items
---------

``struct TagItem`` consists of two pointer-sized, pointer-aligned slots on
every target::

    struct TagItem
    {
        Tag  ti_Tag;    /* occupies one IPTR-sized slot */
        IPTR ti_Data;
    };

A tag list is therefore an array of ``IPTR`` pairs. On 64-bit targets the
32-bit tag value is padded to 8 bytes.

BCPL pointers and strings
-------------------------

``BPTR`` and ``BSTR`` are the handle types of ``dos.library``.

+ On m68k a ``BPTR`` is an address divided by four and a ``BSTR`` is a
  ``BPTR`` to a string that starts with a length byte, as on AmigaOS.
+ On all other targets a ``BPTR`` is an ordinary pointer and a ``BSTR``
  points to an ordinary NUL-terminated string.

Code must always use ``BADDR()``, ``MKBADDR()`` and the ``AROS_BSTR_*``
macros from ``<dos/bptr.h>``, which do the right thing on every target, and
must use ``BNULL`` for an empty ``BPTR``.


Calling conventions
===================

AROS has four kinds of function interface:

+ ordinary C functions,
+ library functions, called through the vector table of a library base,
+ user functions (callbacks and hooks) that the system or a library calls
  back, and
+ variadic convenience functions that build a tag list or a message.

C functions
-----------

Ordinary C functions follow the base calling standard of the ABI target, as
given in `ABI targets`_ and detailed on the CPU pages. This includes argument
passing, return values, the set of registers a function must preserve, and
stack alignment at the point of a call.

Library bases and vector tables
-------------------------------

A library (and equally a device or resource) is represented by a *library
base*: a pointer to a ``struct Library`` followed by the library's own data.
Its functions are reached through a *vector table* that is located
immediately *below* the base, at negative offsets::

    lower addresses
            +---------------------------+
            | vector n                  |  base - n * LIB_VECTSIZE
            |   ...                     |
            | vector 5  (first public)  |
            | vector 4  ExtFunc         |
            | vector 3  Expunge         |
            | vector 2  Close           |
            | vector 1  Open            |  base - LIB_VECTSIZE
    base -> +---------------------------+
            | struct Library            |
            | library specific data     |
            +---------------------------+
    higher addresses

+ Each function has a fixed *library vector offset* (LVO) number ``n``,
  starting at 1. The vector for function ``n`` is at
  ``base - n * LIB_VECTSIZE``.
+ The first four vectors are reserved for ``Open``, ``Close``, ``Expunge``
  and a reserved function. Public functions start at vector 5.
+ LVO numbers are part of a library's public interface and never change once
  published.

The size and content of a vector depend on the CPU:

==================  ================  =======================================
ABI target          ``LIB_VECTSIZE``  Vector content
==================  ================  =======================================
m68k                6                 A ``JMP`` instruction to the function
32-bit, not m68k    4                 The address of the function
64-bit              8                 The address of the function
==================  ================  =======================================

On m68k a caller *jumps into* the vector. On all other targets the vector
holds a function pointer which the caller loads and calls. Code must not
hard-code either form: use the macros below, ``__AROS_GETVECADDR()`` to read
a vector, and ``SetFunction()`` to change one. ``SetFunction()`` takes the
offset as a negative byte count, that is ``-n * LIB_VECTSIZE``.

Library functions
-----------------

A library function is defined and called with the ``AROS_LH`` (header) and
``AROS_LC`` (call) macro families from ``<aros/libcall.h>``. Each argument
names the m68k register it is assigned to::

    AROS_LH2(APTR, AllocMem,
        AROS_LHA(IPTR,  byteSize,     D0),
        AROS_LHA(ULONG, requirements, D1),
        struct ExecBase *, SysBase, 33, Exec)
    {
        AROS_LIBFUNC_INIT
        ...
        AROS_LIBFUNC_EXIT
    }

How the arguments and the library base are passed depends on the target:

==================  =========================================================
ABI target          Passing of arguments and library base
==================  =========================================================
m68k                Each argument in the named register. Base in ``A6``.
i386                Arguments on the stack in the order written. Base passed
                    as an extra *first* argument, in ``%eax``.
all others          Arguments as for a C function, in the order written. Base
                    passed as an extra *last* argument.
==================  =========================================================

On every target except m68k the register names are ignored. Passing the base
last (or in a register that is not otherwise used for arguments) means that
a function which does not need its base can simply not declare it.

Programs normally do not use ``AROS_LC`` directly. The headers in
``<proto/>`` provide each library function as an inline function or macro
that passes the library base for the caller.

C-style library functions
-------------------------

A library may also export functions that are written as plain C functions
with no register assignment and no library base argument. The C library and
most ported libraries are built this way.

Such a function is called through a small *stub* in the link library. The
stub loads the library base, fetches the function address from the vector
table and jumps to it, leaving all argument registers and the stack exactly
as the caller set them up. The function therefore sees an ordinary C call.

While jumping through the vector the stub leaves the library base in a
scratch register, where the library can pick it up if it needs it:

==================  ====================================
ABI target          Register carrying the library base
==================  ====================================
m68k                ``A0``
i386                ``%eax``
x86_64              ``%r11``
arm, armhf, armeb   ``r12`` (``ip``)
aarch64             ``x16``
ppc                 ``r12``
riscv, riscv64      ``t6``
==================  ====================================

These registers are temporaries in the base calling standard, so no register
is permanently reserved for a library base on any target.

Libraries with a separate base for each opener or each task
-----------------------------------------------------------

A library can be built so that every opener, or every task, gets its own
copy of the library base. C-style functions of such a library, and the
libraries it uses in turn, find the right base through a *task storage slot*
(provided by ``task.resource``) rather than through a reserved register. This is handled entirely by
the code that ``genmodule`` generates and by the link libraries (the
``_rel`` variants); it places no requirement on callers.

User functions and hooks
------------------------

A function that the system calls back (an interrupt handler, a task entry
point, a hook, a class dispatcher) is defined with the ``AROS_UFH`` macro
family from ``<aros/asmcall.h>`` and called with ``AROS_UFC``.

+ On m68k each argument is passed in the named register.
+ On all other targets, *including i386*, the function is an ordinary C
  function that takes the arguments in the order written.

A ``struct Hook`` entry point always has this form::

    AROS_UFH3(IPTR, MyHook,
        AROS_UFHA(struct Hook *, hook,    A0),
        AROS_UFHA(APTR,          object,  A2),
        AROS_UFHA(APTR,          message, A1))
    {
        AROS_USERFUNC_INIT
        ...
        AROS_USERFUNC_EXIT
    }

Hooks are called with ``CallHookPkt()`` or the ``CALLHOOKPKT()`` macro. Note
that the *order* of the arguments is hook, object, message on every target;
only m68k uses the registers.

Variadic functions, tag lists and messages
------------------------------------------

Many functions have a variadic form that takes a tag list or a method
message directly as arguments, for example ``OpenWindowTags()`` or
``DoMethod()``. The following rules apply on all targets:

+ Every tag, tag value, method identifier and message field that is passed
  as a variadic argument occupies one ``IPTR``-sized slot. Smaller values
  are widened. On a 64-bit target a pointer or an ``IPTR`` value must not be
  truncated to 32 bits, and an integer constant that is passed where a
  pointer-sized value is expected must have the right type.
+ A structure that mirrors a variadic argument list, such as a BOOPSI method
  message, declares each field with the ``STACKED`` attribute so that the
  structure has the same layout as the list of slots.
+ The variadic function converts its arguments into a real ``struct
  TagItem`` array or message before calling the non-variadic function. On
  most targets the arguments are passed in registers and must be copied; the
  ``AROS_SLOWSTACKTAGS``, ``AROS_SLOWSTACKMETHODS`` and
  ``AROS_SLOWSTACKHOOKS`` macro families hide the difference. On m68k and
  i386 the arguments are already laid out contiguously on the stack and are
  used in place.

Code must never assume that variadic arguments form an array in memory. New
variadic wrappers must be written with the ``AROS_SLOWSTACK*`` macros.


The stack
=========

+ The stack grows towards lower addresses on every target.
+ The stack pointer must be aligned as required by the ABI target at every
  call. ``AROS_STACKALIGN`` gives the alignment that Exec applies to the
  initial stack pointer of a new task: 8 bytes on m68k and 16 bytes on all
  other targets.
+ **Memory below the stack pointer does not belong to the running code.**
  The kernel may build exception and interrupt frames on the stack of the
  interrupted task. AROS code must not use a "red zone" or any other scheme
  that keeps live data below the stack pointer, and compilers for AROS
  targets must be configured accordingly.
+ Every task has a fixed-size stack described by ``tc_SPLower`` and
  ``tc_SPUpper``. Stacks do not grow automatically. ``AROS_STACKSIZE`` is
  the default and, except on m68k, the minimum stack size for a new task:
  40960 bytes (16384 on m68k).
+ To run code on a different stack use ``NewStackSwap()``. It calls a
  function with up to eight ``IPTR`` arguments on the new stack and returns
  its result. Code must not switch stacks by any other means, because Exec
  must know the bounds of the stack that is in use.

Programs can request a larger stack by defining the ``__stack`` variable;
the startup code then re-runs ``main()`` on a stack of that size.


Program and module entry
========================

Programs
--------

The entry point of a program is the first byte of its first code segment.
It has this interface::

    AROS_PROCH(entry, argstr, argsize, SysBase)

    SIPTR entry(STRPTR argstr, ULONG argsize, struct ExecBase *SysBase);

``argstr`` and ``argsize`` describe the command line. The return value is
the program's return code. On m68k the arguments arrive in ``A0`` and ``D0``
as on AmigaOS; see the `m68k page <m68k>`__.

The standard startup code provides this entry point, places it in the
``.aros.startup`` section so that it is linked first, initialises the C
runtime and calls ``main()``.

Libraries, devices and resources
--------------------------------

A module is found through its ``struct Resident`` ("ROMTag") structure. Its
initialisation function receives the library base, the segment list of the
module and ``SysBase``, in that order (``D0``, ``A0``, ``A6`` on m68k).

Finding SysBase
---------------

``SysBase``, the base of ``exec.library``, is the root from which every
other system service is reached.

+ On m68k the address of ``SysBase`` is stored at absolute address 4, as on
  AmigaOS.
+ **On all other targets there is no fixed address.** ``SysBase`` is passed
  to every program and module when it is started, as shown above, and the
  startup code stores it in the global variable ``SysBase``.

Code other than m68k code must never read address 4.


Executable file format
======================

ELF relocatable objects
-----------------------

AROS programs and modules are ELF files of type ``ET_REL``, that is,
*relocatable objects*, on every target. A module is the result of a final
partial link (``ld -r``) by ``collect-aros``, the linker driver of the AROS
toolchain, with all references between its own object files resolved.

+ The file must match the ELF class, byte order and machine type of the ABI
  target.
+ ``collect-aros`` marks the file with ``EI_OSABI`` = ``ELFOSABI_AROS`` (15)
  and ``EI_ABIVERSION`` = 1.
+ There is no dynamic linking. A module must not have undefined symbols
  (undefined *weak* symbols resolve to zero) and must not contain common
  symbols. Code in different modules is connected at run time through
  libraries and their vector tables, not through symbols.
+ There is no dynamic global offset table or procedure linkage table.
  Modules must be compiled as non-position-independent code.
+ There is no ELF thread-local storage. See `Thread-local storage`_.

Loading
-------

``LoadSeg()`` turns the allocatable sections of the file into a *segment
list*, the same structure AmigaOS uses: a chain of memory blocks, each
starting with its size and a ``BPTR`` to the next. It then applies the
relocations. The CPU pages list the relocation types each loader accepts;
a module that contains any other relocation type is not loaded.

Segments are placed wherever memory is available. Because of this:

+ a module must not assume any particular load address, and
+ code must be built with a code model that works at any address. The
  required compiler options are given on each CPU page.

A section whose name ends in ``.MEMF_CHIP``, ``.MEMF_LOCAL``,
``.MEMF_KICK``, ``.MEMF_FAST`` or ``.MEMF_PUBLIC`` is loaded into memory of
that type.

Hunk format
-----------

The m68k ports also load AmigaOS "hunk" executables, and the binaries on
``amiga-m68k`` installation media are distributed in hunk format; see the
`m68k page <m68k>`__.

Symbol sets
-----------

Constructors, destructors, library auto-opening and module initialisation
functions are collected at link time into *symbol sets* (the
``ADD2INIT()``, ``ADD2EXIT()``, ``ADD2LIBS()`` macros of
``<aros/symbolsets.h>``). ``collect-aros`` gathers the entries of each set
into a table that the startup code walks. This is an agreement between the
toolchain and the startup code, not something the loader knows about.


Thread-local storage
====================

AROS has no ELF thread-local storage and reserves no thread pointer register
for applications. The GNU toolchain is configured without TLS support and
the LLVM toolchain uses emulated TLS.

Per-task data is kept in task storage slots (``AllocTaskStorageSlot()``,
``GetTaskStorageSlot()`` and ``SetTaskStorageSlot()`` of ``task.resource``)
or in ``tc_UserData``.

Where a CPU defines a thread pointer register it is not available to
applications; the CPU pages give the details.


C and C++ runtime
=================

+ ``jmp_buf`` is defined in ``<setjmp.h>`` as a return address followed by a
  CPU-specific number of register slots, aligned to 16 bytes. Its size and
  the registers saved are listed on each CPU page.
+ C++ exceptions and other stack unwinding use DWARF 2 call frame
  information, or the ARM exception handling ABI on 32-bit ARM.
  ``setjmp``/``longjmp`` based exception handling is not used.
+ Static constructors and destructors are run by the startup code through
  the symbol sets described above.


Processor state of a task
=========================

+ The full general-purpose register set belongs to the running task and is
  preserved across task switches, interrupts and exceptions.
+ Where the ABI target has a floating point or vector unit (see `ABI
  targets`_), tasks may use it freely; its state is preserved for each task.
  The exact set of registers that is preserved is listed on each CPU page.
+ The saved state of a task is described by ``struct ExceptionContext`` from
  ``<aros/cpucontext.h>``. Its layout is CPU-specific and is intended for
  debuggers and trap handlers.
+ The privilege level at which tasks run differs between ports and is not
  part of the ABI. Code that needs to run privileged must use
  ``Supervisor()``; code must not assume that it is, or is not, privileged.


Hosted ports
============

This section turns the principle that `hosted ports do not influence the
ABI`_ into concrete requirements.

Requirements
------------

1. **Same binaries.** A hosted port must load and run the same ELF modules
   as every other port for its ABI target. AROS code for a hosted port is
   built with the AROS cross-toolchain and the same ABI-affecting options as
   the native port, never with the host's compiler conventions.

2. **All registers behave as the AROS ABI says.** If the host treats a
   register differently from the AROS ABI, for example by reserving it for
   its own use or by not preserving it, the port must hide this. AROS code
   remains free to use every register that the AROS ABI makes available.

3. **Host calls are confined.** Only the port's own modules call the host,
   and only through the mechanisms below. Every such call must convert
   between the two ABIs where they differ: calling convention, variadic
   argument layout, stack alignment, and registers that the host may
   clobber.

4. **Task state is complete.** The port's task switching must save and
   restore everything that the AROS ABI defines as belonging to a task,
   whatever the host's own notion of thread state is.

5. **Host restrictions are the port's problem.** Restrictions such as a
   prohibition on memory that is both writable and executable, or a host
   that sends asynchronous signals on the task's stack, must be handled
   inside the port.

Mechanisms
----------

``hostlib.resource``
    Lets a module open a host shared library and obtain the addresses of
    host functions. Calls to host functions are serialised and bracketed by
    the port.

The host interface
    A table of functions that the host-side bootstrap hands to the AROS
    kernel. On ports where the bootstrap is built with a compiler that uses
    a different calling convention, the entries are declared with the AROS
    convention so that AROS code calls them normally.

``AROS_HOST_BARRIER``
    A macro from ``<aros/cpu.h>`` that must follow each call into the host.
    It tells the compiler about registers that the host may have changed
    although the AROS ABI says they are preserved. It expands to nothing on
    ports where no register is affected.

Calling convention attributes
    Where the host uses a different calling convention, host function
    pointers are declared with an explicit attribute so that the compiler
    generates the conversion. The Windows-hosted x86_64 port, for example,
    declares Windows functions as ``ms_abi``.

Argument layout shims
    Where the host lays out arguments differently, the port calls the host
    through a prototype that puts each argument where the host expects it.
    ``<host_vacall.h>`` does this for variadic host functions on macOS on
    AArch64.

These mechanisms exist so that the differences are dealt with at the
boundary. They must not be used as a reason to build AROS itself
differently.


ABI version
===========

``aros.library`` reports the major version of the ABI through
``ArosInquire()`` with the ``AI_ArosABIMajor`` tag. The value ``-1`` means
that the ABI is still under development and may change; this is the value in
the current development tree. The same value is installed as the file
``ENVARC:ABI``.

Executables carry ``EI_ABIVERSION`` = 1 in their ELF header, as described in
`Executable file format`_. The loaders do not currently verify the OS ABI
or ABI version fields.


Source references
=================

The ABI is defined by the following parts of the AROS source tree. Where
this document and the sources disagree, the sources are authoritative.

=================================================  ============================
Location                                           Content
=================================================  ============================
``compiler/include/aros/cpu.h``                    CPU selection and defaults
``arch/<cpu>-all/include/aros/cpu.h``              Per-CPU types, alignment and
                                                   vector format
``arch/<cpu>-all/include/aros/genmodule.h``        Per-CPU library stubs
``arch/<cpu>-all/include/aros/cpucontext.h``       Saved processor state
``compiler/arossupport/include/libcall.h``         ``AROS_LH``/``AROS_LC``
``compiler/arossupport/include/asmcall.h``         ``AROS_UFH``/``AROS_UFC``
``compiler/include/exec/types.h``                  Fundamental types
``compiler/include/exec/libraries.h``              Library base and vectors
``compiler/include/utility/tagitem.h``             Tag items and variadic tags
``compiler/include/utility/hooks.h``               Hooks
``compiler/include/dos/bptr.h``                    ``BPTR`` and ``BSTR``
``compiler/include/dos/elf.h``                     ELF definitions
``rom/dos/internalloadseg_elf.c``                  ELF loader and relocations
``tools/collect-aros``                             Linker driver
``tools/genmodule``                                Module glue code generator
``tools/crosstools``                               Toolchain patches
``configure.in``                                   ABI-affecting compiler flags
=================================================  ============================
