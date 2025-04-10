======================
Summary: M68k emulator
======================

:Authors:   Sven Drieling
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Finished.

.. Contents::


Abstract
========

This is a summary - basically cut and paste - of the "m68k emulator" thread
on the aros-dev mailing list during February 2001.


Writing emulator for AROS to run native programs
================================================

AROS is pretty stable and pretty complete too, as far as I can see.
There are tons of software out of there that are waiting to be
executed under our wonderful AmigaOS(tm) replacement, so why don't we
allow them to have fun? :)

+ Emulator to be more compatible with Amiga computers.
+ Amiga computers have special custom chips.
+ Amiga computers uses 68k CPUs.
+ Allowing native Amiga applications running on AROS/i386 etc.
+ Emulator for big-endian and little-endian machines.


Different types of software to emulate
======================================

+ Software using the hardware (games).
+ Software depending on Amiga 500 timings.
+ Software using bitplane formats for graphics.
+ System-friendly software which uses features which are not easy to implement
  on other systems (copper, own viewports, 880K floppy disks).
+ Mostly system-friendly software which uses some hardware 'hacks', like macros
  to disable interrupts/display.
+ System-friendly software only avaible in binary format.
+ System-friendly software available as sourcecode.


Emulator types
==============

+ Interpreter
+ JIT
+ Compiler (compiling of whole executable before start)
+ It should be easy to use the system on different hardware (CPUs).


AROS kickstart/workbench for UAE
================================

+ Only 68k binaries.
+ AROS in native code of machine
+ When UAE calls the setup routines of AROS, AROS must disable the emulation
  of all these parts of UAE that are not necessary (video chips, for example)
  and do these things directly.
+ When all chips have been disabled, we can switch of the code that tries to
  synchronize the virtual chips with the virtual CPU.
+ Right now, with the picasso emulation, all that you need to emulate are the
  cia's and paula. Is not that big effort. After the AHI emulation is finished
  it'll be necessary only the cia emulation.

Example:

+ m68k code calls OpenLibrary()
+ UAE read SysBase from virtual address 0x4
+ SysBase must point to real SysBase in AROS (which is always outside of UAE's
  virtual address space).

I see no way to make UAE work inside AROS under the assumption that UAE
directly calls something in the AROS kernel.

You must prevent the chipset from running too fast. You could do this by using
a timer so that the chipset stops when it doesn't need to run, but you would
need a very high resolution timer, just like the cia's one, and not all
computers have got it, specially the PC's. So, once again, you'll have to
synchronize the 68k with the chipset.

By running native code inside the 68k emulator you stop the emulation. The
multitasking stops, the chipset emulation stops, ALL stop but the native code.
It's not faster. Look at how picasso can slow down the whole emulation: it's
coded using such a technique you mentioned.


Allowing native code to call 68k code?
======================================

How do we allow native AROS code to call 68k code *without* knowing it's 68k
code?

+ Hooks.
+ **Recompilation** of 68k code? We could do that in the same way as the
  AmigaDE's VP does, the only difference would be that our VP code is the 68k
  code.

  We could do this only once and then store the translated software in a sort
  of cache. We could implement performance tracking, so that the code could
  get more optimized every time it's executed. We could use, in order to do
  this, a modified version of the UAE JIT compiler, with the help of the
  author, of course.

Last year I spent about three months seeing how possible this was and wrote a
small program that would convert 68K instructions into a C type language
(sort of intermediate between C and 68K ASM). Then wrote another program that
would convert my intermediate language into whatever code.

The big problem was that AmigaOS executable files are in some kind of weird
structure that I don't really know with strange headers etc... secondly the
code always assumes that it knows the hardware it's running on (with AROS
this is not true), thirdly the code generated was always poor (large and
slow executing).

My solution was to forget about using a translator. Instead I started on a
Heuristic Amiga simulator, which would run the code and try and figure out
what the code was trying to do then generate code (probably C) to do the same.
The Amiga hardware could be changed for OS calls, so there would be no
hardware problems. I am a chemist, not a computer scientist so I found the
whole thing too hard to do and by this time my A1200 was failing so I gave up.

> [...] how do you handle the case in which the 68k program tells to the OS
> the address of a 68k routine to be executed by the OS later on?
> The only viable solution that I see is the translation on load.

My solution to such a problem was to use the MMU to trap access to the Amiga
hardware address range (about 2meg...) and then emulate the registers
elsewhere in memory (i.e. an interrupt with a handler to read the pseudo
registers and then deal with the data in them correctly, maybe using code
from UAE)

Besides, this could be handled using the mmu or the sigsegv exception
under linux, just like the UAE JIT does.

Another possibility is to use the MMU. Emulated code pointers point to
wrong memory in the native environment. The exception when this code is
called will (re)start the interpreter/translator.

For now this would require the use of the mmap() function and so the
emulator should be part of the kernel, exec's perhaps. Later on we
could use the mmu.hid, also to gain OS independency.

I know that JIT engines (UAE-JIT and Kaffe come to mind) use so-called
"trampolines" to detect when a not-yet-translated subroutine is called.
I'm sorry I don't know the details, but I'm sure the problem has been
solved already.

Endianness is a concern but Georg made a proposal how to run m68k files on a
little-endian processor and switch between emulated and native execution.
Hm, maybe some analyzer (disassembler) for m68k files would also be
interesting and sufficient at the beginning to see whether this can be done.
Can one for example avoid translating (= disassembling) hardcoded structures,
i.e.


Endianness
==========

For example, if an 68k program would call OpenWindow. It gets back a pointer
to a struct Window. If you only convert the Window Pointer to big-endian then
the 68k emu has the correct pointer, but the stuff in the structure is still
all little-endian. So if the 68k program reads something from this structure::

   winwidth = window->Width;

then it will get the wrong value, because normal 68k emus are big-endian.

The other problem (endianness) has been solved with C++ templates
but they are not complete. We need someone with some time or
a lot of C++ knowledge to fill the missing gaps::

    int i;
    ULONG a, b;

    a = b;
    i = a;

In the first case, there is no need for endianness conversion and in the
second, there is. A C++ compile can figure this out but C can't (the
developer has to and he better shouldn't make any mistakes). I think
with this technique, we have these advantages:

+ Compiler adds conversions only when necessary
+ Compiler warns about missing conversions (-> template defines no
  conversion). It simply cannot happen anymore that a necessary
  conversion is missing.
+ Much more readable.

Hmm :-\

68k program::

    struct NewWindow nw = {10,20,30, ...} /* DATA hunk */
    win = OpenWindow(&nw);

Does this mean that the AROS native OpenWindow() when accessing
the NewWindow structure must be prepared that the newwindow might
be big-endian -> it must use some macro to access the fields?

NewWindow is a small problem, as it is only used by OpenWindow().
But what for example about struct Gadget. There is tons of AROS native
code which deals (peeks inside structure) with gadgets.

Same with taglists.

Another problem:

68k program::

    WORD var;

    case IDCMP_MENUPICK:
        menuitem = ItemAddress();
        var = menuitem->MutualExclude;

Assuming the menuitem is native (little-endian), because it was created with
gadtools.library/CreateMenusA(). The 68k program above saves (stupid example)
the menuitem's MutualExclude in a WORD (16 bit) variable, but the menuitem's
MutualExclude field is actually LONG (32 bit). If you are lucky the 68k code
looks like this::

    move.l menuitem,a0
    move.l MutualExclude(a0),d0
    move   d0, var

but if you are unlucky it could look like this::

    move.l menuitem,a0
    move   MutualExclude+2(a0),var

Assuming menuitem->MutualExclude contains 0x00001234, then in little-endian
it is::

    0x34 0x12 0x00 00

So your 68k emu in the unlucky case from above, will put "0" into var,
instead of 0x1234.

To switch between native and emulated execution is not a problem. It could for
example be done with an illegal m68k code in the jump tables where the
emulator realizes that it has to execute i386 (or whatever) code now and has
to pass the arguments in the registers to the function.

The problem is the endianness of the m68k program and the environment it is
supposed to be running in. A NewWindow structure that is hard coded into the
m68k program cannot be passed as is to the OpenWindow() function for example.
All the data in the structure are in big-endian whereas the function expects
them to be in little-endian. So you would have to swap all data before you
pass it to the function and swap it back when it returns from the
OpenWindow(). Then what is returned by the OpenWindow() function is a pointer
to a Window structure where all data are in little-endian but here you must
not swap the content since the system needs the content to be alright for its
own purposes.
The endianness really is the problem and I really also believe that AROS can
have an emulator on a big-endian (!) machine like PowerPC; that would work
just fine.


Disassemble Amiga binaries
==========================

+ Sometimes it works but often data and code is not separated so it is not
  easy to decide what is a 68k command and what is data.
+ Some assumption about the compiler, compiler version and compiler options
  could be helpful.

I just finished an "intelligent" disassembler specialized into KickStart
disassembly. The way it works is really simple : it follows the code and
when an opcode like JSR, BSR, (cp)Bcc or (cp)DBcc is found, the address is
saved in a stack. When a JMP or BRA is found, the disassembler's PC is
loaded with the new address. And, when an RTS or RTE is found, the PC is
loaded with the stack.

Digitial's solution for this in their x86 emulator for Alpha CPU-s was to run
the code through a normal (step-by-step emulation) and "learning" what the
code did (i.e. converting it to Alpha code). When the code jumped to a place
which already had been converted, the Alpha code was used directly. Maybe
something we can learn from?


Copyright
=========

Who owns the code generated?

The copyright would probably lie with the original owner. Any automatic
translation of a file should, I guess, be considered a mere a copy, if one
stored in a rather unusual way.


Conclusion
==========

An easy solution would be a 68k emulation for big-endian machines only, for
100% system-friendly software which don't use any hardware features of AmigaOS
but could be sped up with a JIT plus kickstart/workbench in native format.

Then additional software could be supported with emulation of (parts) of the
Amiga hardware.

On little-endian machines an AROS version which internally always works with
big-endian could be a (slow?) solution.

