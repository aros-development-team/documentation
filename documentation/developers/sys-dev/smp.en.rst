===================================
Symmetric multiprocessing in AROS
===================================

:Authors:   The AROS Development Team
:Copyright: Copyright (C) 2017-2026, The AROS Development Team
:Status:    Describes the SMP task model of Exec and kernel.resource.

.. Contents::


Introduction
------------

AROS can run tasks on more than one processor core at the same time. The
implementation is called *SMP* throughout the sources. It was designed on the
pc (x86_64) port in 2017 and that design is the reference for every other
port: pc-x86_64, sbi-riscv64, raspi-aarch64 and raspi-armhf share one task
model, one spinlock and one mechanism for requests between cores.

This document is for people who work on Exec, on kernel.resource or on a
port, and for authors of drivers and system modules whose code has to be
correct when several cores run it at once. It covers:

+ how an SMP build is selected and what it changes;
+ what ``Forbid()`` and ``Disable()`` mean on an SMP system;
+ the spinlock and the rules for using it;
+ where a task is while it runs, is ready, or waits, and who may move it;
+ how ``Wait()`` and ``Signal()`` work across cores;
+ how one core asks another to do something;
+ CPU affinity;
+ what a port has to supply;
+ testing.

The `scheduler overview`__ describes the single-core scheduler that this
builds upon.

__ scheduling


Design principles
-----------------

The whole design follows from a few rules. Code that breaks one of them will
appear to work on a lightly loaded system and fail under load.

1. **A spinlock is exclusion between cores, and nothing else.** It does not
   stop task switching and it does not mask interrupts. A caller that needs
   either asks for it separately, with ``Forbid()`` or ``Disable()``.

2. **There is no per-task lock.** A task is not protected by a lock of its
   own. It is protected by ownership: a running task belongs to the core that
   runs it, and only that core changes its scheduling state.

3. **A task's state and the list it is on change together.** ``tc_State`` and
   membership of a run list are one fact. They are changed in kernel context,
   with interrupts off, under the locks of the lists involved. No core ever
   sees a task whose state says one thing while the lists say another.

4. **Work for a task that another core owns is sent to that core.** A core
   does not reach into a task running elsewhere. It sends a request and the
   owning core carries it out.

5. **Generic Exec knows nothing about a port's interrupt model.** Everything
   that differs between processors is behind a small per-port interface.


Building an SMP system
----------------------

Two preprocessor symbols control SMP. Both come from ``configure`` and are
visible through ``<aros/config.h>``.

``__AROSPLATFORM_SMP__``
    The target *can* be built for SMP. It changes the layout of a few public
    structures, which gain room for a spinlock (``struct MsgPort``,
    ``struct SemaphoreRequest``), so that binaries are the same for both
    kinds of build on that target.

``__AROSEXEC_SMP__``
    Exec and the kernel *are* built for SMP. It is defined when the target
    variant ``smp`` is selected::

        configure --target=pc-x86_64 --enable-target-variant=smp

Code that depends on SMP is wrapped in ``#if defined(__AROSEXEC_SMP__)``.
A build without it keeps the classic single-core behaviour and pays nothing
for the SMP code.

.. Note::

   SMP is in everyday use on the 64-bit targets. The 32-bit ARM port builds
   with the ``smp`` variant but is not generally enabled.


What changes for existing code
------------------------------

Forbid() and Disable()
""""""""""""""""""""""

On a single core, ``Forbid()`` guarantees that no other task runs and
``Disable()`` guarantees that nothing else runs at all. Much Amiga software
uses them as a general-purpose lock.

On an SMP system both apply **to the calling core only**:

+ ``Forbid()`` stops the calling core from switching to another task. Tasks
  on other cores keep running.
+ ``Disable()`` masks interrupts on the calling core. Other cores keep
  running tasks and taking interrupts.

Neither is exclusion any more. Data that several tasks or interrupt handlers
share needs a real lock: a ``SignalSemaphore`` where the holder may sleep, a
spinlock where it may not.

``Forbid()`` and ``Disable()`` keep their second purpose, which the spinlock
relies upon: a task that has called ``Forbid()`` is not switched out, and a
task that has called ``Disable()`` cannot be interrupted, on its own core.
See `Choosing the protection`_ below.

The nesting counts are per core. A task carries its own counts with it when
it is switched out and gets them back wherever it runs next.

ExecBase fields
"""""""""""""""

The scheduling fields of ``ExecBase`` describe one core, so on an SMP build
they do not exist. ``ThisTask``, ``Quantum``, ``Elapsed``, ``IDNestCnt`` and
``TDNestCnt`` are replaced by private placeholders, and the real values are
kept in per-core storage.

+ Use ``FindTask(NULL)`` for the current task. Never read
  ``SysBase->ThisTask``.
+ Do not read or write the nesting counts or the quantum.
+ Do not walk ``TaskReady`` or ``TaskWait`` yourself. Their locks are private
  to Exec.

System lists
""""""""""""

The public lists of ``ExecBase`` (libraries, devices, resources, ports,
semaphores, interrupts, memory) each have a private spinlock. Exec's own
functions (``FindName()`` on the library list through ``OpenLibrary()``,
``AddPort()``, ``FindPort()`` and so on) take the right lock internally.

Code that walks one of these lists directly, which on a single core was
done inside ``Forbid()``, has to use ``execlock.resource``; see
`Locks for code outside the kernel`_.


Per-core state
--------------

Each core has a small block of private data that it reaches without a lock.
On x86_64 it is addressed through the ``gs`` segment, on AArch64 and ARM
through a thread-ID register (``tpidr_el1`` on AArch64), on RISC-V through
the ``tp`` register. The
block is declared in the port's ``tls.h`` and holds:

+ the core's number;
+ ``SysBase`` and ``KernelBase``;
+ the scheduler data of the core: the running task, the schedule flags, the
  quantum and elapsed ticks, and the ``IDNestCnt`` and ``TDNestCnt`` counts.

Exec does not name these fields directly. The port's ``exec_platform.h``
provides the accessors that generic code uses:

======================================  ===============================================
Macro                                   Meaning
======================================  ===============================================
``GET_THIS_TASK``                       the task running on this core
``SET_THIS_TASK(t)``                    record it (dispatcher only)
``IDNESTCOUNT_INC/DEC/GET/SET``         this core's interrupt-disable nesting
``TDNESTCOUNT_INC/DEC/GET/SET``         this core's task-switch-disable nesting
``FLAG_SCHEDQUANTUM_*``                 the running task has used its time slice
``FLAG_SCHEDSWITCH_*``                  a task switch is wanted
``FLAG_SCHEDDISPATCH_*``                a dispatch is wanted
``FLAG_SCHEDPARK_*``                    the next switch puts the task on ``TaskWait``
``SCHEDQUANTUM_*``, ``SCHEDELAPSED_*``  the quantum and elapsed counters
======================================  ===============================================

On a non-SMP build the same macros resolve to the fields of ``ExecBase``, so
generic Exec is written once.

The schedule flags are private to their core. They are written by the task
on that core and by that core's interrupt handlers, never by another core.
That is why another core cannot simply "set the reschedule flag" of a core:
it has to send a request (see `Requests between cores`_).


Spinlocks
---------

The lock
""""""""

``spinlock_t`` is declared in ``<aros/types/spinlock_s.h>``. It is one lock
word and an owner:

==================  ==========================================================
Field               Meaning
==================  ==========================================================
``lock`` bits 0-23  number of readers
``lock`` bit 27     ``SPINLOCKF_WRITE``, held for writing
``lock`` bit 31     ``SPINLOCKF_UPDATING``, the word is being changed
``s_Owner``         the task that holds the write lock, or ``NULL``
==================  ==========================================================

The layout of the word is the same on every port.

kernel.resource provides the functions:

``KrnSpinInit(lock)``
    Make a lock ready for use, unlocked.

``KrnSpinLock(lock, failhook, mode)``
    Acquire the lock in ``SPINLOCK_MODE_READ`` or ``SPINLOCK_MODE_WRITE``,
    waiting while it is held. Any number of readers may hold the lock
    together; a writer holds it alone. ``failhook`` is optional and is called
    each time an attempt fails.

``KrnSpinTryLock(lock, mode)``
    One attempt. Returns the lock if it was acquired and ``NULL`` otherwise.

``KrnSpinUnLock(lock)``
    Release a lock held by the caller.

``KrnSpinIsLocked(lock)``
    For assertions and diagnostics only. The answer may be out of date by the
    time the caller looks at it.

The functions have one implementation for every port
(``rom/kernel/spinlock.c``, ``spintrylock.c``, ``spinunlock.c``). On a build
without real spinlocks they do nothing and return the lock, so code that
uses them is correct on both kinds of build.

A lock is not recursive. A core that takes a write lock it already holds
waits for itself for ever.

Owner and priority
""""""""""""""""""

A task may be switched out while it holds a spinlock, unless it prevented
that. The holder of a lock is therefore not always running, and a waiter of
higher priority could spin for ever while the holder never gets a core. The
lock deals with that itself:

+ A write lock taken by a task records the task in ``s_Owner``.
+ A task that waits for a write lock, and whose priority is above the
  owner's, lowers its own priority to the owner's until it has the lock. The
  owner can then run and release it. The waiter's original priority is
  restored as soon as it holds the lock.

A caller in supervisor mode (an interrupt handler, or kernel code) records no
owner and never changes a priority.

Choosing the protection
"""""""""""""""""""""""

Because the lock is only exclusion between cores, the caller decides what
else it needs. The question is always: *who else, on my own core, could try
to take this lock while I hold it?*

=================================  ===========================================
The lock is taken by               Take it inside
=================================  ===========================================
tasks only, held briefly           ``Forbid()`` (recommended), or nothing
tasks and interrupt handlers       ``Disable()`` in the tasks
interrupt handlers only            nothing (interrupts are already off)
the scheduler's run lists          kernel context with interrupts off
=================================  ===========================================

The second row is the one that matters most. If a task holds a lock and an
interrupt handler on the same core then waits for it, the handler spins for
ever: the task it interrupted cannot run to release the lock. Any lock that
an interrupt handler takes must be taken with interrupts disabled by every
task that takes it.

Taking a lock inside ``Forbid()`` is not required for correctness when only
tasks use it, because the priority handling above makes progress in any
case. It is still good practice for locks held for a few instructions,
since it avoids the holder being switched out with the lock.

A spinlock must be held for a short, bounded time. A task that holds one
must not call ``Wait()`` or anything that may wait (I/O, semaphores,
message replies). For anything longer use a ``SignalSemaphore``.

Lock order
""""""""""

Code that holds two locks at once must take them in the same order
everywhere. The scheduler's order is fixed:

1. ``TaskRunningSpinLock``
2. ``TaskReadySpinLock``
3. ``TaskWaitSpinLock``
4. ``TaskSpinningLock``

Locks for code outside the kernel
"""""""""""""""""""""""""""""""""

``KrnSpinLock()`` is for the kernel, Exec and system modules. Other code
uses ``execlock.resource`` (``<proto/execlock.h>``), which exists on SMP
builds:

``ObtainSystemLock(list, mode, flags)``, ``ReleaseSystemLock(list, flags)``
    Lock one of the public lists of ``ExecBase`` (for example
    ``&SysBase->LibList``) for reading or writing. ``flags`` is
    ``LOCKF_FORBID`` or ``LOCKF_DISABLE`` and says which protection is taken
    together with the lock; pass the same flag when releasing.

``AllocLock()``, ``FreeLock(lock)``, ``ObtainLock(lock, mode, flags)``, ``ReleaseLock(lock, flags)``
    A private lock with the same behaviour.

Portable code tests for the resource and falls back to ``Forbid()``::

    APTR ExecLockBase = OpenResource("execlock.resource");

    if (ExecLockBase)
        ObtainSystemLock(&SysBase->PortList, SPINLOCK_MODE_READ, LOCKF_FORBID);
    else
        Forbid();

    /* ... walk the list ... */

    if (ExecLockBase)
        ReleaseSystemLock(&SysBase->PortList, LOCKF_FORBID);
    else
        Permit();

Inside Exec the ``EXEC_LOCK_LIST_*`` and ``EXEC_UNLOCK_LIST_*`` macros of
``rom/exec/exec_locks.h`` do exactly this.


The task model
--------------

States and lists
""""""""""""""""

Every task is in one state and on the list that belongs to it:

==============  ====================  ========================================
``tc_State``    List                  Meaning
==============  ====================  ========================================
``TS_RUN``      ``TaskRunning``       running on the core in ``iet_CpuNumber``
``TS_READY``    ``TaskReady``         can run; waiting for a core
``TS_WAIT``     ``TaskWait``          in ``Wait()``
``TS_SPIN``     ``TaskSpinning``      set aside while a spinlock is held
                                      against it
==============  ====================  ========================================

``TaskReady`` and ``TaskWait`` are the public lists of ``ExecBase``;
``TaskRunning`` and ``TaskSpinning`` exist only on SMP builds, in Exec's
private base. Each list has its own spinlock.

There is **one** ready list for all cores. Any core that looks for work
takes the best task on it that the core is allowed to run. A task is
therefore free to move between cores from one time slice to the next; no
balancing step is needed to spread tasks out.

Two fields of the task's internal ``ETask`` belong to the model:

``iet_CpuNumber``
    The core the task is running on, or last ran on.

``iet_CpuAffinity``
    The cores the task may run on.

Who may move a task
"""""""""""""""""""

Only three pieces of code change a task's state or list:

``core_Switch()``
    Takes the running task off its core. The task goes to ``TaskReady``, or
    to ``TaskWait`` if it asked to be parked, or to ``TaskSpinning``.

``core_Dispatch()``
    Chooses the next task from ``TaskReady`` for this core and makes it
    ``TS_RUN``. If there is none the core idles until the next interrupt.

the reschedule entry (``core_ReschedTask()``)
    Makes a task ready, for example when ``Signal()`` wakes it or
    ``AddTask()`` adds it.

All three run in kernel context with interrupts off. A move from one list to
another is made with **both** lists' locks held, taken in the order given
above, so that the task is never on no list and never on two.

When the dispatcher starts a task it writes ``iet_CpuNumber`` first and then
publishes ``TS_RUN``. Any core that sees ``TS_RUN`` can therefore rely on the
core number beside it.

Task-level code reaches the reschedule entry through a system call
(``krnSysCallReschedTask()``, ``SC_RESCHEDTASK``). Code that is already in
kernel context, such as an interrupt handler calling ``Signal()``, makes the
move directly. A second entry (``krnSysCallSwitch()``, ``SC_REMSWITCH``) is
used by ``RemTask()`` when a task removes itself.

The scheduling cycle
""""""""""""""""""""

Each core runs the cycle of the `scheduler overview`__ on its own:

1. The core's timer interrupt counts down the quantum of its running task
   and sets the core's quantum flag when it reaches zero.
2. On the way out of an interrupt, ``core_ExitInterrupt()`` looks at the
   core's flags. If a switch is wanted and task switching is not forbidden
   on this core, it calls ``core_Schedule()``.
3. ``core_Schedule()`` decides whether the running task should give way: a
   ready task of higher priority that this core may run, or one of equal
   priority once the quantum is used up.
4. ``core_Switch()`` puts the old task on its list and ``core_Dispatch()``
   starts the next one.

Secondary cores are started by the port after Exec is running. Each gets an
idle task and enters the same cycle.

__ scheduling

Wait()
""""""

``Wait()`` takes no spinlock:

1. It calls ``Disable()`` and looks at ``tc_SigRecvd``. If a signal it wants
   is there already, it returns.
2. Otherwise it stores ``tc_SigWait``, sets the core's *park* flag
   (``FLAG_SCHEDPARK_SET``) and calls ``KrnSwitch()``.
3. ``core_Switch()`` consumes the flag. Under the lock of ``TaskWait`` it
   sets ``TS_WAIT`` and puts the task on the list.

Between steps 2 and 3 the task is still ``TS_RUN`` on its core. Every other
core therefore sees a running task and sends its ``Signal()`` to that core,
where it arrives after the switch and wakes the task. No core ever sees a
waiting task that is not yet on ``TaskWait``.

Signal()
""""""""

``Signal()`` first sets the bits in ``tc_SigRecvd`` atomically. What follows
depends on where the target is:

*The target is not running, or is running on the calling core.*
    The caller handles it itself. If the target is waiting for one of the
    signals it is made ready through the reschedule entry, and a core that
    can run it is asked to reschedule.

*The target is running on another core, or the calling core may not run it.*
    The signal is **forwarded**: the caller queues an asynchronous call to a
    core that owns the task (see `Requests between cores`_) and returns. That
    core then runs the complete ``Signal()`` for the task. There is no
    second, reduced implementation for this path.

Two details make the forwarding safe and cheap:

+ After setting the bits, ``Signal()`` reads the task's state again. If the
  task has started to run on another core in the meantime, the signal is
  forwarded there. Together with a full memory barrier on both sides this
  closes the window in which ``Wait()`` checks the bits just before
  ``Signal()`` sets them.
+ If every signal being sent is pending already, nothing is forwarded. The
  owning core has been told and will find the bits. Many senders signalling
  one busy task do not queue one call each.

``Signal()`` can be called from tasks, from interrupt handlers and from the
forwarded call itself.

Other task functions
""""""""""""""""""""

``SetTaskPri()``
    Takes the lock of the list the task is on, checks the state again once it
    holds the lock, and re-sorts the task if it is ready.

``SetSignal()``, ``SetExcept()``, ``AllocSignal()``, ``FreeSignal()``
    Change the signal fields atomically; ``Signal()`` may be setting bits in
    them from another core at the same moment.

``RemTask()``
    Withdraws the forwarded ``Signal()`` calls that are still on their way to
    the task before its memory is freed.


Requests between cores
----------------------

A core gets another core's attention with an inter-processor interrupt
(IPI). What is sent, and how it is queued, is the same on every port
(``rom/kernel/kernel_ipicall.c``); the port only supplies the interrupt.

Requests
""""""""

A *request* is one bit in the target core's **pending word**. Posting a
request sets the bit atomically and interrupts the target **only if the bit
was clear**. The target takes the whole word in its handler and acts on
every bit.

Requests are therefore idempotent. A thousand "reschedule" requests for a
core that has not yet handled the first are one interrupt, not a thousand.

``KrnScheduleCPU(mask)`` posts the reschedule request to the cores in a CPU
mask. The handler sets the target's own switch flag, and the switch happens
as the handler returns.

Calls
"""""

A *call* asks a core to run a hook in its interrupt handler. It is how
``Signal()`` is forwarded.

+ Each core has a call queue. Any core adds to it with one atomic
  compare-and-exchange; no lock is taken.
+ "There are calls" is itself a request bit, so the target is interrupted
  when its queue **stops being empty**, not once per call.
+ The target takes the whole queue with one atomic exchange and runs the
  calls in the order they were queued.
+ Call records come from a pool that belongs to the sending core and return
  to it the same way, so senders do not contend with each other for
  records either.

A call is asynchronous (the sender continues at once) or synchronous (the
sender waits until every target has run the hook). A sender that waits, and
that cannot be interrupted itself, runs its own queue while it waits so that
two cores calling each other cannot deadlock.

Calls can be cancelled by hook and object, which ``RemTask()`` uses. A
cancelled call that a core has already started is waited for.

The hook receives a ``struct IPIHook`` (the hook and up to five arguments).
It runs in interrupt context: it must be short, must not wait, and may take
only locks that are taken with interrupts disabled everywhere else.

The kernel-internal entry is ``core_DoCallIPI()``. It is not part of the
public interface of kernel.resource.


CPU affinity
------------

A task may be restricted to some of the cores.

``KrnGetCPUCount()``
    The number of cores that are running.

``KrnGetCPUNumber()``
    The number of the calling core. The answer is only stable inside
    ``Forbid()`` or ``Disable()``; otherwise the task may have moved by the
    time it is used.

``KrnAllocCPUMask()``, ``KrnFreeCPUMask()``, ``KrnClearCPUMask()``, ``KrnGetCPUMask(n, mask)``, ``KrnCPUInMask(n, mask)``
    Build and test CPU masks. A mask is an opaque object sized for the
    system's cores; do not assume it is one machine word.

The affinity of a new task is given with the ``TASKTAG_AFFINITY`` tag of
``NewAddTask()`` / ``NewCreateTaskA()``. Its value is a CPU mask or one of:

``TASKAFFINITY_BOOT``
    The core the system booted on.

``TASKAFFINITY_ANY``
    Any core. This is the default.

``TASKAFFINITY_ALL_BUT_SELF``
    Every core except the one that makes the call.

``SetTaskAffinity(task, affinity)`` of task.resource changes it for an
existing task. If the task is running on a core that the new mask excludes,
that core is asked to reschedule so the task moves.

The dispatcher only gives a core tasks whose affinity includes it. Use
affinity sparingly: a task tied to one core cannot be moved to an idle one.


Porting
-------

A port provides the following for SMP. The pc port is the reference; the
other ports follow it function for function.

``kernel/kernel_spinlock.h``
    The atomic steps of the spinlock: ``krnSpinTryWrite()``,
    ``krnSpinTryRead()``, ``krnSpinReleaseWrite()``,
    ``krnSpinReleaseRead()``, ``krnSpinPause()`` and ``krnSpinThisTask()``,
    with ``KRN_SPINLOCK_ATOMICS`` defined. Everything else about the lock is
    shared and must not be reimplemented.

``kernel/tls.h`` and ``exec/exec_platform.h``
    The per-core block and the accessor macros of `Per-core state`_,
    including the park flag.

``kernel/kernel_scheduler.c``
    ``core_Schedule()``, ``core_Switch()``, ``core_Dispatch()`` and the
    reschedule entry, following the locking rules of `Who may move a task`_.

System call arguments
    ``krnSysCall2()`` and ``KRNSYSCALL_ARG1()`` / ``KRNSYSCALL_ARG2()``, so
    that the shared ``core_SysCall()`` can serve ``SC_RESCHEDTASK`` and
    ``SC_REMSWITCH``.

``kernel/kernel_ipiport.h``
    How a core is interrupted: ``krnIPIPortRaise()``, the number of the
    calling core, how to mask and restore interrupts, a pause, and how a
    sender that has to wait serves its own calls. The port's IPI handler
    calls ``krnIPIAck()`` and ``krnIPICallDrain()``.

Secondary core start-up
    Bring each core up, give it its per-core block and an idle task, add it
    to the mask of online cores and let it enter the scheduler.

Kernel context must not trap
    ``Signal()`` runs in the IPI handler. ``KrnCli()``, ``KrnSti()``,
    ``KrnSchedule()`` and ``KrnCause()`` must work when called in supervisor
    mode, by acting directly or by setting the core's flags, instead of
    issuing a system call.

Things a port must not do:

+ add a lock to ``struct Task``, or take any lock on behalf of one task;
+ change a task's state or list outside the three functions named above;
+ put processor-specific conditionals into ``rom/exec``.


Checklist for SMP-safe code
---------------------------

+ ``Forbid()`` and ``Disable()`` do not protect data from other cores. Use a
  semaphore or a spinlock.
+ Take a spinlock that an interrupt handler also takes only inside
  ``Disable()``.
+ Hold spinlocks briefly and never across anything that can wait.
+ Take multiple locks in one fixed order.
+ Use ``FindTask(NULL)``, not ``SysBase->ThisTask``.
+ Update flags and counters that several cores touch with atomic
  operations (``AROS_ATOMIC_INC()``, ``AROS_ATOMIC_OR()`` and the others of
  ``<aros/atomic.h>``).
+ Do not cache "which core am I on" across a point where the task can be
  switched.
+ Do not assume that a higher-priority task has finished before a lower one
  runs. With more than one core both run at once.
+ Per-core data needs no lock, but only while the task cannot move:
  access it inside ``Forbid()`` or ``Disable()``.


Testing
-------

The SMP tests are in ``developer/debug/test/smp`` and are installed in
``SYS:Developer/Debug/Tests/smp``. Each prints its result to the debug
output and returns ``RETURN_OK`` on success.

====================  ========================================================
Program               Exercises
====================  ========================================================
``SMP-Sched``         migration of unpinned tasks between cores, preemption
                      of a busy core by a woken task, ``SetTaskPri()``
``SMP-Preempt``       time slicing on every core
``SMP-Affinity``      affinity inheritance and ``SetTaskAffinity()``
``SMP-Proc``          processes created with ``NP_Affinity``
``SMP-SigRace``       ``Signal()`` from another core against ``RemTask()``
``SMP-MultiWake``     many cores signalling one waiter; ``DISTINCT`` uses
                      several signals so that most are forwarded
``SMP-IntCtx``        behaviour in interrupt context
``SMP-Sem``           the semaphore paths, including ``Procure()`` /
                      ``Vacate()`` and ``ObtainSemaphoreList()``
``SMP-Lists``         the locked system lists (ports, semaphores, resources)
``SMP-DoIO``          device I/O round trips from every core
``SMP-Timer``         timer.device waits and wake-ups across cores
``SMP-MMap``          ``KrnMapGlobal()`` / ``KrnUnmapGlobal()``
``SMP-Stress``        semaphores, pools, messages and software interrupts
                      from tasks pinned across the cores
``SMP-Trace``         semaphores and allocation, with a progress log that
                      localises a hang
``SMP-PThreads``      the pthread layer
``SMP-Net``           bsdsocket.library from several cores (needs a network)
``SMP-PThreads-Net``  sockets from pthreads (needs a network)
``SMP-Test``          an interactive demonstration that renders on all cores
``SMP-SmallPT``       a path tracer that renders on all cores
====================  ========================================================

``make test-smp`` builds the set; ``SMP-MultiWake`` is built with
``make test-smp-multiwake``.

QEMU runs all the SMP targets. Vary the number of cores (``-smp 4``,
``-smp 16``): problems of ordering tend to appear with few cores and
problems of contention with many. A result from an emulator does not replace
a run on real hardware, where cores make true simultaneous progress.


Limitations
-----------

+ The run lists are shared by all cores and each has one lock. This lets a
  task float freely between cores but bounds how far scheduling scales.
+ There is no load balancing beyond the shared ready list, and no notion of
  cache or NUMA locality.
+ ``RemTask()`` of a task that is running on another core is not safe in all
  cases.


Source map
----------

==========================================  =================================
File                                        Contents
==========================================  =================================
``rom/kernel/spinlock.c`` and siblings      the spinlock
``rom/kernel/kernel_spinlock.h``            what a port supplies for it
``rom/kernel/kernel_ipicall.c``, ``.h``     requests and calls between cores
``rom/kernel/kernel_intr.c``                interrupt exit, system calls
``rom/exec/wait.c``, ``signal.c``           ``Wait()`` and ``Signal()``
``rom/exec/exec_locks.c``, ``.h``           ``execlock.resource``
``rom/exec/exec_intern.h``                  run lists and their locks
``rom/task/SetTaskAffinity.c``              changing affinity
``arch/all-pc/kernel/kernel_scheduler.c``   the reference scheduler
``arch/all-pc/exec/exec_platform.h``        the reference accessor macros
``arch/*/kernel/kernel_ipiport.h``          each port's IPI glue
``developer/debug/test/smp``                the tests
==========================================  =================================
