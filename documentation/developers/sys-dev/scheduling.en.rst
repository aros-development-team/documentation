============================
How does the scheduler work?
============================

Scheduling is based upon AmigaOS(tm)'s round-robin scheme and provisions for
multitasking. it is implemented using the following public Exec functions:

+ Dispatch(); // dispatch next available task.
+ Schedule(); // check if the current task should be rescheduled.
+ Reschedule(); // give up the current tasks remaining CPU time to other ready
  tasks, if there are any.
+ Switch(); // switch away from the current task.
+ Wait(); // make a task wait for incoming signals
+ Signal(); // signal a waiting task

These functions on their own provide a co-operative multi tasking system. The
addition of an interrupt drives the full pre-emptive multitasking, forcing a
task switch when the currently running task has used its time slice (quantum).


AROS implementation details
---------------------------

System startup
""""""""""""""

When the system is first brought up, there are no interrupts and the system is
usually in a supervisor state. The kernel will first initialize the platform
base hardware and processor, as well as interrupt controller - jumping into
a user state and starting up exec.

During execs initialization it will prepare a "bootstrap" task structure and add
a vblank interrupt handler to drive pre-emption, which it does by setting the
quantum-expired and switch scheduling flags.

Exec will then initialize all the SINGLETASK resident modules. One of the first
residents to initialize is execs late initialization - which is run after
platform specific modules that may probe and initialize addition processor cores
and timesources, etc., for the system to utilize. On SMP platforms the scheduler
is started on additional cores and set to run an idle task.

After SINGLETASK residents are initialized, DOS is brought up which starts real
boot process. DOS will launch a new process to run the disk boot sequence, and
let the bootstrap task die, triggering the scheduler to begin.

Scheduling
""""""""""

Periodically the system will trigger an interrupt that results in Schedule being
called to see if another task should run. If there is a readytask with the same
or higher priority, and the current task has no pending exception and has used
its time quantum schedule will signify the task should be switched out.

Switch is next called to put the currently running task into a ready state.
Finally Dispatch is called to select the next suitable task and launch it.

Tasks waiting for input from other events, call Wait() and are put into a
waiting task list. When a triggering event for them occurs, they have the
appropriate signal bits set via Signal() and are moved into the ready list,
so that the schedular can allow them to process the events when it is next time
to run.

Caveats
"""""""

Under AmigaOS the Exec fields ThisTask, Quantum, Elapsed, IDNestCnt and
TDNestCnt are used to store the scheduling information used by Exec. AROS also
supports SMP based systems, which have per-processor core versions of these
fields so the exec versions are deprecated [1]_ and unavailable on those
architectures.  It is advised to use FindTask(NULL); to determine the current
task in all cases to ensure code compiles for all AROS targets and gets the
correct value. Other scheduling values should not be accessed.

.. [1] ThisTask does exist on binary compatible AROS targets and can be accessed
   as normal, however such code is not portable to all AROS targets.
