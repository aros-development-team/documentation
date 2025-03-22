====================
Ideas for the future
====================

:Authors: + Ian <icwhiting@taz.dra.hmg.gb>
          + Martin Steigerwald <steigerw@stud.uni-frankfurt.de>
          + Byron Montgomerie <bmontgom@morgan.ucs.mun.ca>
          + ...others...

Here you can find some random and unsorted ideas and possibly impossible
improvements which *might* be considered for inclusion after compatibility
with AmigaOS 3.1 has been more or less finished.

.. Contents::





Miscellaneous
=============

All lists and public structures must be protected by semaphores
---------------------------------------------------------------

:Author: Nils Henrik Lorentzen

A system like the hierarchical semaphores in pOS would be best.




Recursive lddaemon
------------------

:Authors: Claus Herrmann, Iain Templeton

lddaemon should be able to load more than one library at a time thus
allowing to open a library which has to be loaded from disk which opens a
library in `libOpen()` which has also to be loaded from disk.

The daemon could also search actively for a library allowing the user to
specify one if it can't be found. Paths like ``PROGDIR:`` should be
searched automatically.

If the lib can't be found, DOS_OpenLibrary() must create a message port and
a message, put the port in the reply-to field of the message as well as the
name and min-version of the lib and then send the message to the lddaemon
and wait for the reply.

Open questions: Will this interfere with the way Exec handles libraries now
(e.g. single threaded libInit())? Can this introduce deadlocks in the
locking of the exec library list? What happens if libClose() calls
libExpunge()?




Extend the datatypes concept
-------------------------------

:Authors: Nils Henrik Lorentzen

Some datatypes-alike system where data-processing methods
can be added to datatype classes. (E.g. for pictures one could add methods
like ``Rotate()``, ``Flip()`` and other typical image processing operators.
Similarly one can add sound fx methods for sound data). For this to be
useful one should probably be able to add methods to a class one by one
(so BOOPSI can probably not be used for this).

The objects should contain the data in a raw format, so that the methods
can easily operate on it. One should be able to stream data in and out
of the objects. One could have separate "converter objects" that
can convert from a data format (e.g. GIF->internal raw image format
and back e.g. raw->GIF.) So when you want to put a GIF file into
an image object the system will automatically search for installed
gif-&gt;internal raw converters and convert the GIF into a stream of
raw image data passed to the image object.

These data objects should of course have methods like ``Show()``
and ``Edit()``. The method ``Edit()`` could invoke your favourite
texteditor/paintprogram/drawprogram/etc., depending on the
object type (text/image/structured drawing).

Now, should these objects be able to show themselves,
like the old datatypes? Well, IMO they should not be bound to
a single operating system/GUI system, but they could maybe show
themselves through some RTG system(?).
But the viewer could also stream out the data from
the object to show. When the object's data has changed, the
viewer could be notified and where in the stream the "damaged" data is.
(If a text viewer GUI views the first 100 lines of a 100000 line
text data object, and the last 100 lines are changed, it wouldn't
need to re-render)

As mentioned earlier, one should be able to use this system
on different OSes, and it should maybe also be possible to
invoke methods on them over a network or even move the objects
in a network (using CORBA?). This way a heavy operation on
the data object can be done on a faster machine while you are
controlling it from a slower machine.

By keeping functionality into small components, 3rd party
programmers can easily write freeware additional functionality.
(One can add methods operating on the data one at a time.)
It will provide very much reuse of code. (Just look around on
Aminet: There are whole bunch of different image processing
programs that implement the same functionality. This
should really only have to be written once).
If the system can work on other platforms too, we get even
more developers that can support it.

I believe that if some system should have any chance at all
of taking some market share from M$ it

a) has to be free.
b) must be available on as many platforms as possible.
c) must consist of tiny components that can be added at
   run-time. =&gt; This way it'll be easier for developers to
   support it.




HIDD Installation
-----------------

:Author: Aaron Digulla

When a new HIDD is installed, it should appear in the list of
available HIDDs automatically (e.g. by file notification on the directory).




Source code converter
---------------------

:Author: Aaron Digulla

We need an automatic converter for the incompatible features of AROS
to convert the old AmigaOS code to AROS (which can then be compiled on
AmigaOS by our compatibility lib).



Comment by Henning Kiel
"""""""""""""""""""""""

The original Amiga Includes used to have an intuition/iobsolete.h
AROS wants to get rid of obsolete stuff, and therefore we are not going
to include iobsolete.h in our distribution. However, we are interested in
getting software for AROS and this may be old, but useful.
So we need a way to support old sources, but in such a way, that the old
code will be converted. (Maybe in multiple passes)
This conversion-tool should do: (open, unordered list)

+ Convert old defines to new ones
+ Convert old storage types (e.g. SHORT to WORD)




select() for AmigaOS file handles
---------------------------------

:Author: Bernhard Fastenrath

I wanted to have a select() for AmigaOS filedescriptors some time ago, that's
why I wrote the AbortPkt() patch which sends an ACTION_ABORT.

A select/asyncio handler (AsyncIO.hidd ?) which handles allocation of buffers
and IO on multiple handlers could allocate buffers, do multiple reads on
behalf of a process and signal the process when input is available. The same
would happen for write operations (writing would block when the select handler
has queued a maximum of bytes or buffers for a single process).

A process that wants to exit could just close the select handler and leave it
to the handler to deallocate the buffers when they are returned one day ...
Under AROS the handler would be able to use AbortPkt() and under AmigaOS it
would be able to use it if the patch is installed and the underlying handler
accepts the packet type ACTION_ABORT.

The idea reminds me a bit of Unix STREAMS or NT device drivers: both pass
packets through several layers of device abstractions. UnixIO could be one
layer below the select handler and would translate it to a real select()
because the buffer mechanism of the select handler is part of the Unix kernel
anyway; so a write would block when the kernel buffers are full, as usual.




Cache memory
------------

:Author: Aaron Digulla

I'm thinking about something called "cache memory". It should use all free
memory to store "nice to have" data, like for read ahead or write through
caches for disks and hard disk or a printer spooler.

This memory is allocated by special functions. It doesn't appear in the
"memory used" list but is added to the amount of free memory. Besides
allocation and freeing there are two special cases. The simple one is that
some other application needs the RAM, so parts of the cache have to be
purged. The other one is to avoid memory fragmentation. It's not possible
or useful to use all the free memory for caching. So the cache should
always be one large block divided up in several smaller chunks. If an
application needs memory, parts of the cache have to be freed *or* they
have to be copied in unused chunks (e.g. it's still faster to copy 512 bytes
than to read them back from HD and a printer spooler should not throw the
spooled data away).




Double Buffer windows
---------------------

:Author: Paulo F. Zemek

The Amiga has Smart-refreshed windows that uses an own bitmap and the Simple,
that-need to be refreshed because they use the screen bitmap. I want a Double
Buffered one. A simple refresh window where you allocate a bitmap and a
rastport for it, and this will be send to window on Refresh (or in window's
BackFill Hook) and when the Draw of All Buttons are finished, so you don't
get "flickering" (I don't know the correct word) on the graphic, and uses
almost the same memory of a Smart one.




Child/sub windows
-----------------

:Author: Paulo F. Zemek

The Amiga needs a function for opening windows into other windows, like on
Windows. The "Requester" does this, but stops the functionality of the
window, and doesn't have all Attributes of a real window. This, or something
like this, is needed for buttons which are over others, so the graphic of the
"bottom" one will not pass over the front one. And new functions for opening
Windows/Screens could be created, so you could convert a window into a
screen, create Public Windows and open other windows on them ...



Comment by Aaron Digulla
""""""""""""""""""""""""

This is dangerous; it uses a lot of memory, adds many
IDCMP event loops and the same effect can be achieved when using
clip regions; all we have to do is to make the gadgets public which render a
window, plus maybe a BOOPSI subwindow class which installs a clip region
in another window.



Comment by Bernardo Innocenti
"""""""""""""""""""""""""""""

I would like to extend Layers and Intuition to support child layers.

Basically, since V37 and up to V40 Intuition has undergone
a major philosophical rearrangement. The old structure-centric way of doing
things has been replaced by an object-centric fashion round the concept of
BOOPSI classes. Gadgets and images have been hit first by this new technology.
Windows, menus and screens would have had to, but for some reason it did not
happen (lack of time or compatibility issues).

If windows were BOOPSI classes, you could override their default behavior
simply by subclassing them.

Some months ago I had a very interesting technical discussion around this
topic with Massimo Tantignone, author of VisualPrefs. We talked about a
possible design to implement child layers in a semi-compatible fashion,
which would allow nested windows as well. The current Intuition already has
some features (implemented in a non-OOP fashion) which simulate nested layers.
These are GimmeZeroZero windows and requesters. Screens could be considered
containers for windows, thus adding another level, but hierarchy stops here.
There are ugly design asymmetries that prevent you from drawing in a
Requester the same way you draw in a window and other similar problems.

I must admit that in this field Windows has a cleaner design (please don't
kill me). A window is just a rectangular clip region and everything from
menus to buttons is represented by a window. Dialogs and frame windows are
just two special kinds of windows that are attached to standard window
borders and system gadgets.

X11 has a very flexible concept for window borders. Instead of belonging
to the application, the borders are drawn and refreshed by the window manager,
which can even replaced at run-time.



Comment by Georg Steger
"""""""""""""""""""""""

Child windows could be done similar to MUI's virtual groups = with
InstallClipRegion.  Unfortunately, InstallClipRegion in AmigaOS can be very
slow and in case of SMART REFRESH windows also eat terrible lots of memory
(hidden areas in the worst case might be backed up three times!!) because it
is optimized for:

one installclipregion --> many render functions --> one installclipregion

instead of:

many installclipregion with few render functions in-between.

It's also bad that there is no additional rastport-based clipping. Actually,
the gfx-functions don't know anything about a clip-region (or beginupdate
state), they just clip to the cliprect list in layer->ClipRect.
For AmigaOS, maybe it would be easier to not add real child layers, but only
child windows, which layers.library does not know about. I would also limit
the child windows to SIMPLE REFRESH (and maybe SUPERREFRESH) type, as
SMART REFRESH child windows would probably be too slow, and SMART REFRESH
layers are the most complicated ones anyway.

One would need special functions for GetMsg/ReplyMsg on win-&gt;UserPort,
similar to GT_GetIMsg and GT_ReplyIMsg from gadtools.library. These functions
would filter certain messages, for example divert IDCMP_MOUSEBUTTON, to the
correct child window, or "add" additional IDCMP_REFRESHWINDOW messages, for
example because of damage resulting from a MoveChildWindow, which would first
add this message to a private ChildWindow port. A
??_GetMsg(realwindow->UserPort) would therefore also return messages from
private ChildWindow ports.

For rendering into a child-window (assuming non-SMART child windows only)
I would use something like this::

    ObtainChildWindowRastPort(childwindow)
    {
      LockLayer(realwindow->Layer);
      save realwindow->Layer->ClipRect somewhere
      create a realwindow->Layer->ClipRect list, based on:

         childwindow->visibleRegion AND    visibleregion must be calculated here *
         childwindow->clipRegion           from a InstallChildWindowClipRegion() *
    }

    ReleaseChildWindowRastPort(childwindow)
    {
      restore realwindow->Layer->ClipRect
      UnLockLayer(realwindow->Layer);
    }

    BeginChildWindowRefresh(childwindow)
    {
      LockLayer(realwindow->Layer);
      save realwindow->Layer->ClipRect somewhere
      create a realwindow->Layer->ClipRect list, based on:

         childwindow->visibleRegion AND  visibleregion must be calculated here *
         childwindow->clipRegion AND
         childwindow->damageRegion
    }

    EndChildWindowRefresh(childwindow, done)
    {
      if (done) childwindow->damageRegion = EMPTY
      restore realwindow->Layer->ClipRect
      UnLockLayer(realwindow->Layer);
    }

Creating Layer->ClipRect lists for non-SMART REFRESH child windows is easy
as you never have to backup hidden areas, so it is basically an AllocMem
and setting some coordinates.

But if you want child layers for the actual AmigaOS, then you can only replace
layers.library completely, but not Intuition for which you need special
functions for MoveChildWindow, SizeChildWindow, ... which know about the child
layers. It is not a good idea to patch the normal MoveWindow, SizeWindow, ...
because child layers really need special functions like HideChildWindow,
MakeChildWindowVisible.



Comment by Bernardo Innocenti
"""""""""""""""""""""""""""""

This would make child layers very different from normal layers. You wouldn't
be able to render inside them using exactly the same code, which is bad
because authors of BOOPSI gadgets would have to take special precautions to
support child layers. The same is true for requesters: have you ever tried to
add BOOPSI classes to requesters? Well, you would find out that most of them
won't work because of bugs in both Intuition, the gadget class and the
subclasses.

I meant REALLY implementing child layers and child windows, not just faking
them with some clever patch. Each child window would just get its own Layer
structure and layers.library would have to be improved to take children into
account when depth arranging or moving their parents.

I was thinking about something like this::

    struct Layer
    {
        struct Layer front, *back;
        [...]
        struct Layer parent, *children;
    };

Where "parent" points to the parent (NULL if it's a top-level layer),
and "children" points to the front-most child layer (NULL if there are none).
Children are chained together with front/back pointers in the same fashion
as normal layers.

This way you wouldn't need to install any additional clip regions before
rendering. That's exactly like window requesters: they are just a limited
special case of child layers. The main weak points of the requesters' design
are that you can't nest a requester into another requester, and that a
different set of functions is required to manage them. Furthermore, you can't
move or depth-arrange requesters. If these limitations could be removed by
implementing child-layers in a symmetrical OOP fashion, you would just use
Open/Close/Move/SizeWindow() on them.

Another important improvement that could be done quite easily is turning
Layer and Window structures into white-box instances of BOOPSI objects,
like it has been done for Gadget and Image structures. Then the old-style
functions (Open/Close/Move/Size/Window()) would just build the appropriate
BOOPSI message and invoke the dispatcher. The same technique has been used
to add BOOPSI support in pre-V36 functions such as ActivateGadget() and
DrawImage().

Of course these ideas would require mayor reworking in both layers and
Intuition, but I bet it could be done without breaking the current API
and OS structures, so that unaware applications would continue to work
as usual.

We wanted to submit our draft proposal to the AmigaOS developers for comment.
If we could convince them of taking this way for the next Kickstart release,
we would have no reason for patching or replacing layers.library at all.



Comment by Georg Steger
"""""""""""""""""""""""

Requesters aren't child windows/layers in any way. For layers.library there is
no difference between a requester layer and a window layer. It's just
Intuition, which when moving or depth-arranging a window, additionally to the
window layer also moves/depth arranges the requester layers of a window. If
you tried to directly call MoveLayer (I know, it's not allowed) on a requester
Layer you would see that you can easily move it out of the (not so) parent
Window's layer or depth arrange it behind the parent Window's layer.

The only thing layers.library would have to do in such a case is add/remove
damage to the child windows (whose coordinates are relative to parent window)
that are non-hidden, right? Or do you think child layer cliprects should be
re-"calculated" immediately as well, like what is happening with the normal
layers.
With the ObtainChildRastPort, ReleaseChildRastPort I was talking about this
would not be done (= faster moving of top level layers) but instead
ObtainChild-RastPort would take care about it = you have precalculated
cliprects (= fast gfx functions) until you call ReleaseChildRastPort.

It is not a good idea to patch the normal MoveWindow, SizeWindow, ... because
child layers really need special functions like HideChildWindow,
MakeChildWindowVisible.



Comment by Bernardo Innocenti
"""""""""""""""""""""""""""""

We don't really need any special code for child layers: top-level layers
would just be a special case of child layers whose parent is the screen
layer_info. This asymmetry is bad, but you can't do anything about it
because layer_info must be retained for backwards compatibility.

Instead of adding adding a new set of functions to layers.library, we
would have rather implemented it through BOOPSI classes. Layers could
be turned into white-box BOOPSI objects (i.e: have a pointer to the
class at a negative offset from the Layers structure and optionally
additional instance data after the old-style structure). Then most of
the current layers.library code would be moved inside the dispatcher
of this new "layerclass", and the old functions would become stubs for
call the respective methods. I think that would be a clean and
extensible design for OOP layers.

Optionally they would have to clip the children to appear "inside" the
parent when they are partially outside the edges of their parent. Look at
Microsoft's MDI interface: if you open Word and move a document window outside
Word's main window, it gets clipped inside it.

Perhaps we could get the same effect of child layers without touching the
layers.library at all and doing OOP magic on Intuition windows instead.
What if the Window structure had a pointer to its parent window and a
linked list of children? Again, Intuition's Move/Size/OpenWindow() would
have to be extended to support child windows in a OOP fashion.



Comment by Aaron Digulla
""""""""""""""""""""""""

Moving this into Intuition looks most clean to me. Basically, what will happen
is that you get a window which moves with its parent and where the code which
calculates the size of the window (or the cliprect for it) takes the size and
position of the parent window into account. That should work best and looks
simple enough to me to work.



Comment by Bernardo Innocenti
"""""""""""""""""""""""""""""

On a second thought, there would be some hard-to-solve efficiency and aesthetic
problems when child windows are implemented without the help of the
layers.library.

I think it can be explained better by showing a piece of pseudo-code::

    MoveWindow(struct Window *w, int x, int y)
    {
        [...clip coordinates inside screen...]
         move window layer (relative to parent) *
        MoveLayer(w->WLayer, x + w->WParent->LeftEdge, y + w->WParent->TopEdge);
    #ifdef INTUITION_CHILD_WINDOWS
        struct Window *child = w->WFirstChild;
        while(child)
        {
            MoveWindow(child, child->LeftEdge , child->TopEdge);
            child = child->NextWindow;
        }
    #endif /* INTUITION_CHILD_WINDOWS */
        [...check for damage in ANY layer on the screen and send refresh
        notifications...]
    }

Here we recursively call MoveWindow() on each children to adjust their
relative position. Since MoveLayer() knows nothing about child windows,
the effect you will see on the screen is:

+ The parent slides under its children, eventually damaging other windows
  on the screen.
+ The children (which are layers in front of the parent) inflict damage to
  their parent. These damage rectangles get immediately filled by the
  layer backfilling hook.
+ Each of the children moves to "follow" its parent, eventually damaging
  each other (no matter which order you choose to move them). Again, the
  damage in the children windows is backfilled.
+ If the children had their own children (nephews? ;-)), you would see
  them moving as described above.

This scenario is awful and must be absolutely avoided. A clever workaround
could be adding a very complex function in layers.library such as
MoveMultipleLayers(), which takes a linked list of layers as an argument. I
can't imagine what kind of efforts this function should do to move all the
layers at once in a way that minimizes damage. For sure, it would be rather
complex to write.




EnqueueTail
-----------

:Author: Paulo F. Zemek

exec.library can have an EnqueueTail function; this
is easy to do, as the Enqueue function already exists.




Refresh only once
-----------------

:Author: Paulo F. Zemek

Intuition should not send more than one REFRESH message to a window (i.e.
if there is already one in the queue, then it should be removed first).




Clever OpenLibrary
------------------

:Author: Denis Bucher

``OpenLibrary()``, etc. should check for libraries in various places.
It should be possible to add paths for these and similar functions
and there should be a tool which checks and tells which library, etc.
would be opened (e.g. the path is ``libs,PROGDIR:libs,libs:`` and there
is an ``x.library`` in ``libs`` and ``libs:``. The tool should tell which
one is opened and why (i.e. ``loading libs:x.library over libs/x.library
because: libs:x.library has version 41.0 and libs/x.library has
39.20``).




Special write protection for libraries
--------------------------------------

:Author: Aaron Digulla

It should be possible to protect some files (like libraries) so
that you need to call a specific OS/FS function to replace them.
This would allow to fix all problems with tools replacing libraries
with old versions. Maybe even a patch to ``Open()`` would be enough
which checks if someone tries to write in a specific directory
and calls a tool which checks if the write is OK. This is of course
a bit dangerous.




Memory protection
-----------------

:Author: Dave Haynie

Stuff we spoke about over lunch, dating back to our days consulting for
Amiga Technologies. Andy mentioned the model they use for the 3DO
operating system (the original one, not the M2 version, which is
supposedly more like the BeOS).

In this system, each process has its own memory map, but the actual
mapping is still global (e.g, there's just one memory space). Your
process can see the rest of the world as read-only. Functions like
AllocMem() transparently work from local memory pools attached to your
process, so things stay nicely page-aligned. This has the secondary
effect of making AllocMem() faster than it is today, since you only have
to involve Exec proper (locking the system up to keep things atomic)
every so often, not at every AllocMem().

I would make the extension to this that memory contexts become first-class
Exec objects. The System context would be the "root", with read/write
access as we have today. Device drivers that need direct access to the
hardware, or the performance of using references rather than copies, could
be started on this context. You could build alternate contexts, such as the
read-only underlay, as mentioned, or even fully private memory spaces, as
in Unix. Obviously this is for new code, and Exec would need to add/enhance
functions for sending messages, copying, etc. between memory spaces. But
since you're not expecting any old code to run in a fully separate space,
some of today's bad habits wouldn't really be an issue.




Installer as a library
----------------------

:Author: Sebastian Rittau

Maybe we could rewrite Installer as library, which provides functions that
are currently contained in Installers language. This would allow programmers
to easily write Installer scripts in their preferred programming language,
instead of learning Installer's own language.

While doing this, we could also add methods to uninstall an installed
package.




Installing AROS in PC BIOS
--------------------------

:Author: Aaron Digulla

There should be a tool to create a kernel which can be put into a Flash ROM
or EEPROM or a boot file. The tool should be able to fix all absolute
addresses in the kernel, it should be able to create the resident tags or a
simple file system which allows the boot loader to find, load and init all
parts it needs.

The main reasons for this are: When you add a new driver (e.g. a hard disk
controller), you don't want to have to install a C compiler just to be able
to boot from it. The ordinary user just wants to call an "install driver"
tool which does all the work without him worrying. Also to reduce similar
code, the boot loader will probably use the same code to load drivers
as will the OS. So the "file system" which is visible to the boot loader
must be similar to what the OS sees. This becomes more important if some
driver in the ROM is not loaded/inited during booting. Then the OS will
use its normal ways to search for the driver and at this time, the
driver must be visible by some file system-like means or the searching
for it will fail.




Separate implementation and interface
-------------------------------------

:Author: Aaron Digulla

An idea just stuck me which *might* safe us a lot of trouble.

We should separate the code from the interface. Code is here: The
code for the ROM libraries and interface is here the Exec shared
library interface.

As you might remember, I dream about AROS as native emulation (i.e.
compile Amiga applications which run as native applications without
arosshell).

Most of the problems we have right now (e.g. in the mmakefiles)
come from the fact that we can't use the systems' own way to
work with shared objects but that we try to emulate Exec's way.

IMHO, it would be much better if we did this:

exec becomes a plain exec.lib which contains normal functions.
Then we create an interface for these normal functions and this
interface can be accessed as exec.library. All we have to do now
is to link the interface with the standard library. If we don't
need the interface (e.g. because we have a cool autoinit feature
like the dynamic loader from Unix), we can omit it.

This way, we could separate the Amiga-specific parts of AROS
much better from the portable parts. Also, it would be possible
to create different interfaces much better. And the interface
wouldn't be intermixed with the portable code as it is now.




Configuration Database
----------------------

:Author: Aaron Digulla

OK, since the topic has been brought up: Here is something which I'm
missing in the current config DBs/registries:

There should be a way to keep histories of configurations plus
"commit logs". Basically, the whole config should work with CVS.
That would make debugging much more simple (just throw anything
out and when it works again, do a diff to see what has changed).
It would also answer the question "why did I disable that" ?

And with tags, you can name stable states of the config and
switch between them.




Better debug support
--------------------

:Author: Bernardo Innocenti

Debugging in AROS is becoming harder as we add new functionality and
the system becomes more complex. So we need more debug support in AROS.
Here are some misc ideas:



Debugging memory
""""""""""""""""

I'm thinking of adding some tortures into AllocMem(), FreeMem()
and possibly other system calls to encourage buggy code to crash. Walls
around allocated blocks would be another great thing.



Asserting everywhere
""""""""""""""""""""

To reach rock stability we must put all kinds of validity checks everywhere
in the code. Please everybody start using those ASSERT_#? macros and create
new ones for checking structures which may need further checks. I'm planning
a ASSERT_VALID_LIST() macro for checking Exec lists against dangling pointers,
infinite loops and succ <-> pred inconsistencies.



Implementing complex checks
"""""""""""""""""""""""""""

Some of those macros might become too big to put them always inline. We may
need to add some support code into exec.library or perhaps
arossupport.library. Some I already feel the need for are _kassert() and
_kbadpointer().



Diagnostic dumps
""""""""""""""""

The need may arise to dump some system structures in a human-readable format
to help debugging. I've done some DUMP_#?() macros (such as DUMP_LAYER(l) to
track bugs in my own programs in the past, but I would like to turn them into
functions because they are usually too big for inlining.



Tracing support
"""""""""""""""

Assertions in functions such as AddNode() would be pretty useless without some
facility to trace back the call stack down to the caller. A single level might
not be sufficient and gdb can't be used to debug programs loaded by LoadSeg().
Unfortunately, this is a very CPU-dependent feature and I have no clue of how
it should be done.



Trapping exceptions
"""""""""""""""""""

We might benefit from implementing a handler to trap seg faults and other
exceptions. This could dump the CPU registers and trace into the stack.
Hits could be tracked down to the module responsible for them by adding
SegTracker-like functionality into LoadSeg().



Stack traceback
"""""""""""""""

We need to provide a CPU-dependent support function to unroll the stack to
help tracking the origin of a bug. Seeing that AddNode() got an illegal node
pointer is no big help if you don't know where AddNode() has been called from.




Tool to show the number of missing/unimplemented functions
----------------------------------------------------------

:Author: Georg Steger

The idea is to have a software which scans a software for AmigaOS functions
and reports those which are not yet implemented.




LibBase should become first argument of all functions
-----------------------------------------------------

:Author: Michael Schulz

I would like to put LibBase as first argument for every function
in every library (like in real classes). Then with __attribute__((regparm(1)))
we could force compiler to pass first argument (would be LibBase) through
register instead of stack.




Use pipes instead of files to compile
-------------------------------------

:Author: Georg Steger

Could we have some of these auto-generated files, like "functable.c" and
"endtag.c", be generated and compiled on the fly by using pipes:
~generate this files to stdout and make gcc compile from stdin?
-> no more functable.c and endtag.c files on disk -> speed-up!?



Comment by Fabio Alemagna
"""""""""""""""""""""""""

gcc cant accept source files from stdin. It can do that only if the switch
-E is given too, that means only preprocessing is being done. In order to do
that you should call cc1 manually and handle all the rest (preprocessing,
switches to pass to cc1...) manually too...




Native compiler for AROS
------------------------

:Author: Henrik Berglund

Maybe lcc would be the easiest compiler to port to AROS?
You can find lcc at https://drh.github.io/lcc/




Build Shared Thingy
-------------------

:Author: Henning Kiel

AIM: The 'Build Shared Thingy' is intended to be a tool to generate
all sorts of shared binaries in a common way.  It should be only given a
directory and produce the shared bin out of it -- or at least generate
C-code which then only needs to be compiled.  It might read in some
*global* config file which contains info on the system
(OS/Hardware).

Mainly the tool is intended to make generation of libraries easier,
but it should be also possible to create HIDDs, etc. with this tool.

'How does shared library creation work?'

THINGS IT MUST DO: We must have an archive with all the functions
code and the specification of the interface (i.e. return-value and
parameters like #?.arch), so the tool can create the library-functions
itself.  There must be a way to substitute system/machine-dependent
functions, like a directory-tree in AROS/machine/linux-i386/rom/dos, for
linux-i386-specific functions which will replace std or will be added to
AROS/rom/dos.

We must provide a short description of the library (i.e. Name,
LibBase, LibBaseType, Version, options like lib.conf).

The tool must provide standard init, open, close, expunge and null
functions, which can be overridden or better: you provide an abstract
description of what is to do (i.e. library dependencies, initializing
code, etc. -- the tool then will create the code on its own).

Archtools-functionality (inherited from the gawk scripts) must be
given: generate includes, merging archives, etc.

AutoDocs should be integrated, too, since they are closely connected
to the sources.



Comment by Iain Templeton
"""""""""""""""""""""""""

This is the text of the file ``tools/buildshared/README``, which I have
removed and put the content in this file. It turns out that some of this
functionality is implemented in the ``tools/genskeleton`` directory, and
some in the new Python-based archtools that Aaron Digulla has been working on.




Virtual Desktops
----------------

:Author: Stefan Berger et al.

Enhance Intuition to support virtual desktops. This should be
easily possible with the (hyper)layers.library and the ability to
make layers and windows invisible. Windows, by default, are opened
on the currently active virtual desktop, which is identified
by a 32 bit identifier in the screen structure. If windows are to
be opened on a different desktop, this can be specified with the WA_Desktop
tag when the window is opened. WA_Sticky allows to make the window
sticky and it will appear on all desktops.
Desktops could be identified by a bit, thus making 32 virtual desktops
available on a screen with the previously mentioned 32 bit identifier.
The sticky flag would therefore select the desktop identifier 0xffffffff.
The window and screen structures would have to be extended with a ULONG
field.
Enhance Intuition with function DisplayDesktop(screen, desktopnum).
The technology is out in the public with the X window system, although
there is a patent on this as far as I know.





Intuition ideas
===============

Workbench
---------

In general workbench has to be reworked, made more accessible to the
programming community for enhancements or even replacement.

- multi-threaded, asynchronous design

  - more than one task per window

    - one for reading new information
    - one for viewing information
    - one for user inputs
    - one for each started copy, move, delete or whatever action

- better iconformat as high speed datatype

  - direct chunky pixel support for gfx cards
  - palette remapping
  - accessing icon.library for batch processing of icons via single function

- better text-based display... (not as icons..) (DOpus-like)
- button banks, toolmanager facilities
- configurable menus
- global iconify which includes drawers.
- arexx port

Programs to consider for inspiration:
+ DOpus 5.11
+ Toolmanager
+ Toolsdaemon




Icons
-----

DiskObjects should be treated like objects; icon.library should have functions
for renaming, copying, deleting, moving, loading and saving. For
optimizing-purposes there have to be functions for saving and loading all the
icons of a drawer at once. This will allow experimentation with different
icon storage schemes without many variants of icon.library.

The DiskObject structure needs an extended image structure to handle palettes,
multiple frames (over 2) and possibly aspect ratios.

Icon storage format should be ilbm anim plus an extra block for non-image icon
data. This is to go further along the road to being able to use a paint
program to edit icon images, more important when considering animated icons.




Datatypes
---------

Datatypes should encompass more than just images for gadgets.
What about more differentiated datatypes scheme for the new OS... as
follows!?

datatype
- load-smallest-element (codec)
- load-all
- save-smallest-element (codec)
- save-all
- view (gadget)
- operators

  - e.g. convert text from one standard to another
  - or: rotate an image... and such

- editors

  - direct link to editing software or directly integrated editing
    software for each type

- arexx interface type

This would add the following features:

- able to do progressive type loading (good for those html browsers with
  progressive image loading)
- able to manipulate types contents in a modular way
- able to integrate application more smoothly in that scheme

Imagine a texteditor:

- it could use ASCII-loaders and savers
- it could have operators such as

  - delete a line
  - change a line
  - reformat a block and such

- and the main part is in the editor.subtype

You could use it to view text, but also to edit texts. And even better
only viewing texts would mean that only loadtype and viewtype will be
loaded, but not the operators and editor.subtype

Hmmm, I am getting a bit confused with the slang... is it a subtype, a
datatype sub class or what...  :-)

A new prefs accessing scheme could be implemented this way...

- load (part of) tag-based IFF PREFS file
- save ....
- change one part of the file
- edit it

  - general
  - printer, serial, screenmode bla bla....

- view contents...
- arexx interface

And in SYS:Prefs only the starters of all this in global mode.

::

    main()
    {
        OpenLibrary("inputprefsedit.class",bla)
        execute the edit function via a single call... (DoMethod?)
        CloseLibrary(bla)
    }

That's it, for one prefs program... all is modular...

But could such a scheme be implemented without to much overhead???




Gadtools
--------

The functionality of gadtools should be just a top layer on top of BOOPSI, if
not made obsolete by a layout system.

It could do with a lot of improvements, most importantly though would
be: Allowing people to remove gadgets from windows!

- full font sensitivity with gadget grouping...
  lay-outing with absolute coordinates is outdated...
- more object-orientated...

E.g. I would remove gadtools completely, or leave it there for
compatibility reasons, but I wont enhance it, I would simply replace it
with a better BOOPSI implementation...




Preferences
-----------

More preferences programs!

- global, global-user-specific, local (application-specific) and
  local-user-specific preferences
- configurator-objects that could be called in every application and added
  as a gadget to the gui
- option for using and saving prefs

  - option to have both directories for using and saving on the hard disk
    (instead of ENV: in RAM:)




GUI
----

The operating system needs a layout system.  Such a layout system should be as
deluxe as the user and the programmer would like it to be or as streamlined
and efficient as they would like it to be.  A similar system to BOOPSI or
enhancement to BOOPSI, class-related with multiple inheritance and
progressively complex classes, where the user can select via preferences which
one to use.

- full font- and window-sizing-sensitivity for _all_ new programs and
  all system programs
- object-oriented
- full configurability
- with configurator, prefs program

Layout library references:
- MUI
- BGUI
- TritonGUI
- ClassAct



Class-Based Libraries
"""""""""""""""""""""

There are several issues to be dealt with when considering adopting a class
system for the Amiga system libraries.  One issue is fall-through: If you
call a library looking for a particular function but it exists only for its
parent then the parent library has to be opened and checked for the
function as well. There is the issue of what to do when in a class-based
system a library is missing. There is also the issue of how the user
can select less complex or more complex libraries via preferences.

In order for a class system to be applied to libraries, additional
information has to be present within the libraries themselves:

Parent(s)
    Where to look when a function is not found on a child library.

Children
    Maybe.

Method Of Pass-through
    Either you use a flag in the LVO tables of child
    libraries to indicate the function exists on a
    parent library or you get into using an additional
    table containing strings for the function names
    of each library. For compatibility reasons and
    efficiency reasons the flag method would be better.

Pros:
    Setfunction problem solved. Just make a child library of
    the library whose functions you want to replace.
    User control of system complexity, if you want the super
    whiz bang layout library you select a child of the child
    of the generic layout library with the features you want.
    (How? No sure, see below)

Cons:
    Loading extra libraries looking for functions on parents.
    Time taken to search for functions in a library using a
    named offset table scheme. (Non-existent with flag
    method).
    Child libraries have to have vector tables of the same
    size as that of its immediate parent or larger, and overriding
    functions have to be at the same offsets as the parent.
    This could lead to bugs of the 'off by one' kind.
    OpenLibraryTags and its CloseLibrary function would have
    to traverse the parents of a library when they open and
    close them to update usage counts. Minor.
    Only new programs would be able to take advantage of
    class system libraries. Perhaps not.


How would this work?
''''''''''''''''''''

This scheme could be implemented with a modified OpenLibrary()
function or a new OpenLibraryTags() function with a matching
CloseLibrary().  Upon opening a library (newly opened), the function
could fill in the flag entries of any child library table with the
appropriate values from that of the parents of the child library.
(Talking single inheritance here).

Example:

+ guiclass.library
  - windowsizingcode()
  - dothisorthat()
  - FontAdaptiveCode()
  - slowdownsystem()
  - Parent: NULL

+ newguiclass.library
  - flag
  - flag
  - NewFontAdaptiveCode()
  - flag
  - Parent: guiclass.library

OpenLibraryTags() would return a pointer to the base of a new table
formed like so:

+ windowsizingcode()
+ dothisorthat()
+ NewFontAdaptiveCode()
+ slowdownsystem()

The issue of how the user would be able to select one gui class or another is
up for debate as well, any ideas?


Misc thoughts
'''''''''''''

If you open "Intuition.library", then you won't get any of the subclasses
of "Intuition.library" and if you redirect calls to it to something else
you screw up the fall-through aspect and get into looping. If OpenLibrary()
just accepts "Intuition.library" as a flag instead of a filename to open
and the actual Intuition.library is renamed to e.g. intuitionroot.library,
then this idea would be workable. A prefs program would set up child libraries
to replace root libraries in a database for OpenLibrary(). This has a problem
with only getting overridden functions in child libraries, no new
functions. Good solution for setfunction though.

If applications call child libraries directly then applications have to check
to see if they exist and if they don't call a simpler class of library. This
gets into not knowing the siblings of a particular child class. Some
standard naming perhaps could solve this or a global table of
hierarchy that applications could check which could be adjusted via prefs by
the user. Requires bullet-proofing. One possibility would be using
the tags system of AmigaOS to check for advanced features akin to
termcaps in Unix systems.

Overridden functions could be unloaded, but then they would have to be
reloaded if another application loaded a child library that didn't override
the unloaded functions of the parent library in question.  I think that would
be a good idea... partially library loading... only non-overridden functions
will be loaded from the parent library.

From practical experience with this type of system, you will find that the
entire parent libraries will be loaded all the time anyway. It depends on the
amount of classes being used. There is also a feature of this kind of
system that you can call the parent function that your child function has
overridden, to remove the need to duplicate the code of the parent function
in its entirety.  In Amiga terms, it would be like a setfunction() that wedged
into a vector, did something and called the original vector. Or call the
original vector first then do something. With libraries like intuition and
graphics etc, they are generally loaded all the time anyway.

One could make a case for making exec the root library of this system,
Intuition a child of graphics, layers a child of graphics as well etc.
The thing about this system is that the root library remains pretty much the
same as before, just a parent field added.

We need exact implementation details and programming directives or we will
end up in a mess...

Any child library has to have a vector table equal to or greater than that of
its parent. This is to avoid overriding a function of grandparent
where the parent vector table doesn't extend as far down as that of the
grandparent. You could program around that, checking for vector table sizes
but why bother with the headache?

Standard library names for child class libraries. Intuition.library would
be the simplest, Intuitionchild1.library would be the next up,
Intuitionchild2.library would be the next up (Example). Via prefs you select
which real library would go into each class, Intuitionchild1=MUIclass.library
for example. Each standard would have to have a set API of course. If a new
library wanted to implement a new API they could start a new standard class,
i.e. Intuitionchild3.library but would have to include the API of the parents,
i.e. Intuitionchild1, Intuitionchild2, and Intuition. Any ideas on a naming
system?

The system should get tag-based wherever possible...

I mean it the following. Don't let any _new_ program spy the system
structures... NEVER. For the old programs, give them a fake of the needed
structures as emulation.

There should be function like GetTagList(object, taglist),
SetTagList(object, taglist) everywhere. Exceptions from this rule _only_
where needed for efficiency.

This way you don't have to rethink how to keep the system compatible with
older software all the way... Just change anything you want, as long as
you can provide the old tags...




General
-------

Abstraction and modularization is the name of the game.  More power and more
choices.

Modularization:

- enhancement of the datatype concept

  - viewtypes, edittypes, showtypes, printtypes, loadtypes, savetypes,
    operatortypes (e.g. data manipulating, image processing functions),
    configtypes
  - enhancement of the gadget concept

    - configurators as callable gadgets

  - embedding of datatypes...

    - iff files with more than one datatype
    - guide files with inline gfx, anims, sounds...

- modularization of applications in tiles... as above

  - initialisers, configtypes, input/edittypes, operators, viewtypes,
    printtypes, savetypes

advantages of this concept described in some examples:

- a word processor could embed a complete paint program as object or
  vice versa...
- a word processor could embed _local_ printer settings via the
  printer.configtype of the system, custom configs are only needed
  when there are options missing in the system printer.configtype
- pictures could be remapped wherever needed via the remap.operator
- there could be a configurator for each shell command to set the
  default behaviour

PPaint, Wordworth, ADPro, Superview and others already have such
concepts, but they are using different implementations not
compatible to each other.





Memory protection
=================

What it is
----------

Memory Protection (or short MP) means that you want to protect vital
system structures against hostile programs or bugs.




How AROS does MP
----------------

AROS uses several different strategies to implement MP, depending on the
overhead for the resource. If you want more speed, you can disable these
schemes altogether. AROS will then run without MP.

For compatibility reasons, memory allocated with AllocMem() or similar
(with or without the MEMF_PUBLIC flag) may be read by and written to by
every task. If you want memory which other tasks can read but must not
write to, use the new MEMF_SHARED_READ (Tip: if you have put
some effort in making your code use the MEMF_PUBLIC flag for this kind
of memory, just #undef MEMF_PUBLIC and define it anew as MEMF_SHARED).

The new AROS flag MEMF_PRIVATE makes memory inaccessible for other tasks.
NOTE: Memory which is currently not allocated by anyone, is protected
like MEMF_PRIVATE.




Other ways
----------

AROS has two more ways to protect your memory. You can change the
protection for memory allocated by you with::

    MP_SetProtection (APTR memory, ULONG size, ULONG protection);

The protection might be:

MPPF_NONE
    This is the default if you didn't specify MEMF_SHARED nor MEMF_PRIVATE

MPPF_SHARED_READ
    Other tasks must not write to this memory but may read it

MPPF_PRIVATE
    Other tasks may neither read nor write to this memory.

NOTE: If you call libraries, they may access your memory like you (because
they can be thought of sub-functions) but there are some cases where a
library doesn't do the work itself. A good example is PutMsg() and
ReplyMsg(). This is how messages work on the AmigaOS:

1. You create a MsgPort
2. You allocate memory for a message
3. You fill the message with some useful contents
4. You specify the MsgPort as the ReplyPort in the message
5. You send the message to some other task via PutMsg()
6. The other task reads and/or modifies the message !!!
7. The other task replies the message via ReplyMsg()
8. You get a signal that the message came back
9. You free the message
10. You delete the MsgPort

Important are the steps 1, 2, 5, 6, and 7. Since ReplyMsg() always
needs to write to your MsgPort, you must allocate it either with
MEMF_PUBLIC or with the call to CreateMsgPort() (recommended since it will
work on future versions of the OS, too). The same applies to the message since
ReplyMsg() must remove the message from the MsgPort you sent it to and
attach it to your MsgPort. So it does NOT matter if the other task
needs only read the message. A message *must* *always* be allocated with
MEMF_PUBLIC.

If you need additional protection, for example if you are debugging the code,
you can use MP_SetProtection() to protect-specific parts of the message,
but you should not use this function in the final version of your application
since it uses *lots* of resources.




MMU Library/Resource
--------------------

``MMUInfo * MMU_QueryInfo (void)``

    ::

        typedef struct
        {
            ULONG PageSize; /* If Pagesize is 0, then no MMU is available */
        } MMUInfo;

``MMUContext * MMU_NewContext (void)``

    Create a new MMU context. There is only one context for your whole
    task, so if you call this function more than once, you will get
    the same pointer again. But note that you must pair MMU_NewContext()
    and MMU_DeleteContext() calls.

``void MMU_DeleteContext (void)``

    Delete the MMU's context. Must be called as many times as
    MMU_NewContext() was called.

``ULONG MMU_Protect (MMUContext mmuctx, APTR Memory, ULONG Size, ULONG Mode, struct Hook * Hit)``

    Memory pointer and Size will be rounded to the next multiple of the MMU's
    pagesize. Mode is one of the flags MMUF_READSELF, MMUF_WRITESELF,
    MMUF_EXECSELF, MMUF_NONESELF, MMUF_READOTHER, MMUF_WRITEOTHER,
    MMUF_EXECOTHER, MMUF_NONEOTHER.

    Hit will be called when the memory is accessed and the flag is not set
    (i.e. a read to memory by the process itself if MMUF_READSELF is not set
    or any access by someone else if MMUF_NONEOTHER is set).

    The hook will be called as so::

        CallHook (Hit, MMUContext, OffendingTask, Address, Reason)

    OffendingTask is the task structure of the task which did the illegal
    access, Address is the address in memory where the hit happened
    and Reason is one of the MMU flags (and only one). If you want to
    create some memory where other tasks can read and you can write to,
    try this::

        MMU_Protect(
            mmuctx, mem, size,
            MMUF_READSELF|MMUF_WRITESELF|MMUF_READOTHER, &hit
        );

    If the PC ever points to that memory or someone else tries to write into
    that memory, hit will be called.

    The most simple hit might be::

        RemTask (OffendingTask);

    To do something like VMM, use it like this::

        MMU_Protect(
            mmuctx, 0x80000000, size,
            MMUF_NONESELF|MMUF_NONEOTHER, &hit
        );

    Then you will trap all accesses from the address 0x80000000 to
    0x80000000+size-1. Hit would then check that the access was from a task
    which is allowed to use VMM and load the memory from the diskfile.

``APTR MMU_AllocMem (MMUContext * MMUCtx, ULONG Size, ULONG Flags, ULONG Mode)``

    Is a small utility routine to allocate some memory with the mode
    already. Use MMU_FreeMem() to get rid of the memory again. The
    protection will be cleared then. The function will pool requests with
    the same protection flags.

``MMU_FreeMem (MMUContext * MMUCtx, APTR Address, ULONG Size)``

    Free memory which was allocated by MMU_AllocMem().




The horribly complex make process, part III :-)
===============================================

As mentioned before, the make process has to have the following properties:

- it functions;
- it is fast, i.e. it does not do things which it does not need to do in
  order to complete the build;
- it needs as few extra tools to build as possible.

My suggestion, as outlined below, is based on using a single makefile concept.
This allows it to fit the second and third requirements, whether it fits the
first (and probably most important) requirement is yet to be seen.




How does it work?
-----------------

In order for this to work, every code module that can possibly build
something should define a file called Makefile.inc[1]. This file will
be conditionally read into the make process by some rules defined
in the file $(TOP)/config/$(ARCH)-$(CPU)/Makefile.inc. This makefile is
specific to the target operating system.

As an example, this is what a FreeBSD system might have (for the
moment not considering any device drivers)::

    KERNEL_MODS :=
        aros battclock boot dos exec expansion filesys hidd graphics \
        intuition keymap layers mathffp mathieeesingbas oop timer \
        utility

    kernel : arosshell

This variable will be taken by the main Makefile with a construction
something like this::

    arosshell : arosshell.c $(foreach f, $(KERNEL_MODS), $(LIBDIR)/lib$(f).a)

So by calling make kernel, you will automatically build all the required
kernel modules. Note that the kernel target here is a control target, rather
than one which actually builds a file. Because the kernel can take
different forms under different kinds of system (it might be a monolithic
kernel under an emulated system (i.e. arosshell), or some kind of dynamically
loaded thing using a bootloader).

Basically its a lot like the old MetaMake system, but without the extra
program.




What about machine dependence?
------------------------------

This is where it gets tricky. Now the problem before was that the makefiles
for all the different directories had no way of determining what files to
add to where. Because now everything can be seen this is considerably easier.
Take for example the exec.library; this needs a number of files which
are dependent upon both the host CPU and the host OS, assuming that a file
in the $(ARCH) directory is more important than an equivalent
file in the $(CPU) directory, we can do the following::

    FILE_PATHS := os/$(ARCH) cpu/$(CPU) kernel stub
    vpath
    vpath %.c $(foreach f, $(FILE_PATHS), $(TOP)/src/$(f)/exec)
    -include $(TOP)/src/os/$(ARCH)/Makefile.inc $(TOP)/src/cpu/$(CPU)/Makefile.inc

This will tell it to look in the $(ARCH), $(CPU), machine independent and
finally the stubs[2] directory. This allows us to specify all of the
functions in the src/kernel/exec directory, and if a file exists in one
of the machine independent directories, to use it instead[3]. There are
also makefiles in these directories in case we need to add any extra files
into the build, which is simply done by putting them on the right hand side
of a special target. This will probably be slightly different because we
wish to give priority to a %.s before a %.c if they both exist in the same
directory.

Note that we clear the vpath before each new module because we want to make
sure that we don't get any name clashes from different modules.




Different kinds of builds
-------------------------

How does it handle different kinds of builds? Basically in the same way
that we do at the moment. If we are building to a link library then the
kernel-exec-linklib target is referenced, otherwise we would build the
kernel-exec-module target.




Problems with this system
-------------------------

The problems with this system, whilst not catastrophic, are at least
rather annoying. The biggest problem comes from no longer being able
to redefine variables like $(CFLAGS), $(INCLUDES), etc. The reason for
this is that the values of these are not substituted until they are
used, i.e. when make actually runs the command to satisfy a rule. So if
we declare CFLAGS in kernel/exec, but again in workbench/c we will actually
get the workbench/c version in kernel/exec, because the rules will not be
run until after the workbench/c makefile has been processed.

This is rather annoying, but can be fiddled with judicious use of genmf
and really horrible variable names (make doesn't care about the names,
so we could have a variable like::

    WORKBENCH_C_CFLAGS := ...

with later on::

    $(OBJDIR)/%.o : $(CURDIR)/%.c
        %compile_q opt=$(WORKBENCH_C_CFLAGS)

If you don't actually need to change the options to a build rule, then
you don't have to define a command, since there can be one defined that
will compile what you want, this is mostly of use in the kernel though,
where the builds are all pretty much the same (or at least they should
be).

The vpath mechanism to do machine dependence is also a bit tricky,
because it makes the use of archtool much more annoying, since in order
to get the correct versions of files, we would need to unpack the archive
before we generate the functions.c file. Mind you, I don't think kernel
functions should be in archives anyway - it makes the editing unwieldy -
but I do agree with compiling them that way. Archives, though, are of
course of great use for OOP classes, although again you would have to
unpack and recombine in order to get the correct versions if you have
to do vpath stuff (which for most OOP classes is silly, because they
will already be machine dependent, i.e. HIDDs).




Biggest Problem
---------------

The biggest problem with this is working out where to start, since it
is a large task. Do I just copy all the makefiles from the MetaMake
variant, and try and fix up the problems mentioned above? To be
honest it is probably a multiple-person job, and will probably mean that
AROS will not build for a week or two.




Suggested Implementation Strategy
---------------------------------

1. Commit any outstanding code. (All my code is outstanding :-)

2. Freeze the code.

3. Make sure that the system builds under _ALL_ supported platforms as it
   is, and if possible is even fairly bug-free. This will make things much
   easier when trying to sort out obscure build problems.

4. Tag the tree and possibly even release a binary version. Archive
   the CVS tree (just in case everything is stuffed up). Perhaps doing
   this on a daily basis might be useful, just to be extra sure. I will
   admit that CVS should handle this itself satisfactorily, but you can
   never be too sure.

5. Rearrange the directory structure. This includes doing such things
   as moving includes files from under compiler/includes to their proper
   directories under src/kernel/blah/includes if that is desired.

6. Make sure that the code will still build using MetaMake. This will
   probably involve adding some rules in order to get the includes to
   work if they are moved.

7. Dearchive the code that has been combined into archives for the
   reasons outlined above. Once this is done, test the build again to make
   sure that it still works.

   NB: When I was still using my Amiga regularly, I used GoldEd as my
   editor, and being a really poor bastard[4] I couldn't load more than
   1000 line files, which many large libraries would certainly manage.

8. Start converting the mmakefile.src files into Makefile.src files
   working in a target-by-target method. It should satisfactorily build
   each stage (i.e. setup should create all the right directories etc.).
   Doing it in a step-by-step ordered way should make things much easier
   here.

   NB: This should start with empty make.cfg, make.tmpl and maybe even
   empty configure.in/host.cfg.in files in order to trim out all the
   unnecessary bits.

9. Once it builds completely, we can then start on doing important
   things like modularising the code properly. This also includes
   putting BOOPSI back into Intuition.

10. Test modularity. Basically this would involve a build that
    creates modules, whose only external references would be to C
    library functions under Unix. Also, no module should refer into
    another modules directory at all. (I.e. intuition and BOOPSI,
    the graphics subsystem - layers and graphics might be a problem
    here, but I hope not.)

Urk

---

Anyway, that is the most detailed description I can really give without
going and doing something, which I can't really do until everybody is
happy with the idea.

.. [1] Of course, you can use genmf to start with Makefile.src and create a
       Makefile.inc

.. [2] This is a thing to talk about: Should obviously machine dependent files
       such as exec/cause.c exist in src/kernel/exec even in their stub form,
       or should they be somewhere else, so you could for example copy this
       directory instead of trying to figure out what files to copy
       from the exec directory? Stubs probably isn't a very good name either.

.. [3] This is probably how we should have done this in the first place,
       and it would have made life much easier now too.

.. [4] I.e. a Uni student.




Comments
--------

Note that these aren't really in any specific order.



Aaron Digulla
"""""""""""""

Well, I think something between MMake and pure make is necessary. What
we need is basically an IMake-like system: The real makefiles are created
with the aid of some tool and then make takes over. This new tool must
allow this:

- Create syntactically correct makefiles

- Allow to modify global make variables (e.g. CFLAGS) just for a single
  makefile (that could basically mean "if the user sets CFLAGS in a
  makefile, replace all occurrences of CFLAGS in this makefile with
  xxx_CFLAGS"). But I don't think that this will be the biggest
  problem: We need two things: Add flags to CFLAGS (can be done easily
  with LOCAL_DEFINES and LOCAL_CFLAGS; they are assigned with := and
  then no problems can happen.) and use own versions of CFLAGS. But we don't
  need an arbitrary amount of CFLAGS. In the end, there are only three
  types of CFLAGS: Compile code for the native OS, compile code which
  mixes native and AROS calls and compile code inside/for AROS. So it
  would be sufficient to have three CFLAGS variables, e.g. NATIVE_CFLAGS,
  CFLAGS and AROS_CFLAGS.

- It must be able to collect files from different directories (i.e. a
  VPATH-like functionality, maybe VPATH alone would be enough).

- The archtool could be omitted if we would put several files into small
  packets (e.g. a list-packet, a semaphore-packet, etc.) Then exec would
  be 15 files instead of 150. That would be a good compromise between CVS
  and GCC.

- It should be possible to rewrite MetaMake (MMake II ?) to create one single
  Makefile instead of calling make itself. It would just mean to traverse the
  build tree of MMake, put the include statements in the parent makefiles and
  call make one time instead of for every makefile.

- Not quite. The basic idea for MetaMake was that you don't have to edit
  a makefile if a new target/makefile is added. The new build process should
  allow for the same. I really hate the way KDE does it: When you download
  a second package, you have to compile it manually instead of being able to
  say "make" at once place.

  With MetaMake, you download the new package somewhere below AROS/ and
  just say "mmake" and it gets compiled at the right place and time.

  [Iain: Eh? I then commented that I could not see a use for this...]

  Usually, someone adds a new directory and then he has to edit a makefile
  in one of the parent directories. With MetaMake, the tool itself searches
  for its makefiles. This way, you can't forget something and you don't have
  to do work which can be automated (basically, having to maintain parent
  makefiles is clumsy and unnecessary).



Bernado Innocenti
"""""""""""""""""

Then: But how can you redefine TOP and CURDIR for each file? Consider that
make is going to process all them as a _single_ Makefile, and so the variables
will just have the last value you give them...

What about using different variables for each subdir? I mean something like
EXEC_TOP, INTUITION_TOP, etc. Since make can't cd to the subproject directory,
we don't need a CURDIR variable any more.

MetaMake will also create the real makefile from the template.

[Iain's reply:

It depends upon where you use them. If you redefine the values at the top
of the makefile and use them in the dependencies, then there is no problem,
since these are evaluated at the time the makefile is read. Using them in
commands is a no-no. (Actually $TOP never changes).

CURDIR is also useful because it requires less typing, and makes moving
directories easier (not that we really want to do that all that much).

]

I mean something easy like this::

    TOP_SUBDIRS = rom workbench demos games

    -include $(foreach i, $(TOP_SUBDIRS), $(i)/Makefile.inc)

Likewise, each makefile will include the makefiles in its subdirectories.
This way the user can speed up the build process by doing::

   make TOP_SUBDIRS=rom

Even better, all these #?_SUBDIRS stuff might be kept together in a single
place, let's say in AROS/config/config.mk. This way it would be easy to
switch the various targets on and off.

We could even make each Makefile.inc usable as a standalone Makefile.
I mean something like::

     cd rom/intuition ; make -f Makefile.inc

If we need common variables and rules, we could move them into the file
AROS/config/common.mk. Each sub-project will then do something like this::

    .ifndef COMMON_MK_INCLUDED
    -include ../../config/common.mk
    .endif

 (please forgive me, I can't remember the correct GNU make syntax for this).

[Iain:

That was something like what I intended, except that the rules like
TOP_SUBDIRS would be defined in config/$(ARCH)-$(CPU)/Makefile.inc to enable
different architectures to build only the things that make sense to them.

The idea of each makefile.inc being a standalone file is quite an interesting
and useful idea though.

]


What??? So you mean that when I'm working on some new Intuition feature
I should wait for half AROS to rebuild each time I want to recompile a file?

I still think we should absolutely keep the dependencies to a reasonable
minimum. Anyway, you may not hope to catch all the hidden dependencies, not
even using a single Makefile and generating dependencies with mkdepend.
Sometimes you change something in A that will break something else in B,
even if B is not #include'-ing A.

[Iain:
Yes, but there should be nothing to recompile in all the other
directories, you would probably be talking about a very short wait
(a few seconds maybe - longer on Amigas, I guess)

].

Well, in AROS there are already a lot of places where we need special
compiler flags for some files or some modules. Sometimes it's needed to
workaround bugs in the compiler, sometimes because you're going to compile
ROM code that needs to be relocatable or perhaps because there are unwanted
side effects in some optimizations.

[Iain:
Each top level directory should have its own set of flags. I.e. the kernel,
the workbench/c, the workbench/libs etc.
]

To show an example of this, note that I had to turn off inlining in the init
code of native Amiga libraries because otherwise gcc would elect the
"return -1" library entry point as a possible candidate for inlining and
would move it last in the code segment. Now I've worked around this by
changing the entry point to an integer containing the machine code for
"moveq #-1,d0 ; rts", but it's still a horrible hack.

[Iain:
Isn't there a better way of doing this? I guess not otherwise you
would probably have used it :-)
]

Unfortunately, when you write an OS kernel you sometimes _need_ to use
hacks. This is also true for NetBSD and Linux.

[Iain:
But I'd like to see as few of these as possible. FreeBSD has ONE set of
compiler flags for everything and still manages to compile.
]

Yes, it has been done like that in NetBSD. They also define DEBUG to
a number such as 1, 2 or 3, each identifying a different level of
verbosity. Then they use macros such as TRACE1, TRACE2 and TRACE3 that will
only produce debug output if DEBUG is defined to be greater or equal to that
number.

We could have something like DEBUG_INTUITION, DEBUG_EXEC, and so on. If
we implement function level debugging, we should make sure that defining
DEBUG_EXEC also turns on debugging on ALL Exec's functions. We can obtain
this effect with a very complex trick::


  #ifdef DEBUG
      #define DEBUG_EXEC
  #endif

  #ifdef DEBUG_EXEC
      #ifndef DEBUG_EXEC_CacheClearE
          #define DEBUG_EXEC_CacheClearE
      #endif
      #ifndef DEBUG_EXEC_OpenLibrary
          #define DEBUG_EXEC_OpenLibrary
      #endif

      ...

  #endif

Is there a better way? Or, is it possible to auto-generate this stuff
with some clever script?

[Iain: Lets hope so]




Booting
-------

A slightly different topic which has also come up during this discussion
is that of how to load AROS into memory. Currently there are two ways
in use. The first is a monolithic kernel, like used by Unix systems, the
other method is to add entries into the system using the existing Exec,
but this will obviously only work on Amigas.

I like the idea of a bootloader as now exists in FreeBSD, which is loaded
into memory, parses some kind of configuration file, loads all sorts of things
into memory, then commits suicide after jumping to the kernel entry.

The thing about this is that it could be used on many different platforms
if written properly - simply separate the MD and MI parts. I mean we could
even reuse the InternalLoadSeg_XXX() code with a bit of trickery (well,
actually, by expanding the interface to include things as symbol table loading
for debugging).

Anyway, here are a few comments from other people:



Aaron Digulla
"""""""""""""

In reply to Iain,

> What problems could we have. Easy: The suggested structure here would mean
> that drivers are loaded into AROS after it has already started. This
> means that basically we need a really clever bootloader for standalone
> systems, or some interesting glue code on emulated systems (which, mind you,
> is the way to go, in my opinion).

What should be the problem ? AROS can load modules... if the hard disk
driver is already available :-)

I think QNX uses something like this: They have a primitive NVRAM "hard disk"
emulator (i.e. they can create a file system in NVRAM and load things from it)
and it should be equally easy to write a hard disk emulator for a
file system in ROM or in the bootfile.

[Iain: The thing about bootloaders is that they often can use the primitives
available to other OS's. For example the PC BIOS gives us facilities for
reading the hard disks without even having to worry about whether they are
IDE, SCSI or whatever. Plus file system reading is MUCH simpler than file
system writing, so you don't need a full file system implementation.]

Well, I'd like to have a simple file system in the kernel because it's most
flexible *and* modular. To create a new kernel, you would create a file,
then a file system in that file, copy all parts of the OS into it and put the
bootloader in front of it. Then the bootloader would only have to contain
a very basic initialisation code plus the file system. The bootloader would
put itself in the list of available modules (the same code would probably be
used later to load the other modules when the whole system is up). So the
bootloader would be the "kernel" of the OS and the rest would be loaded on
demand.

[Bernardo:
In other words, you are describing the current implementation of the Amiga
Kickstart. The bootstrap code is your bootloader, and the rest of the ROM
contains all the modules concatenated one after the other. Each one is
identified by a magic cookie (the resident tag). You can view this
as a very basic ROM file system. The boot code will just scan the ROM and
collect all the resident tags into a list sorted by priority. I guess this
could be done in a regular file too. If you also need to relocate the
residents, you could append reloc hunks to the resident tag just in a way
similar to executable files.
]

File systems which are loaded "later" can put themselves before the bootloader
which would allow to load newer versions of the drivers and to fall back
to the "compiled in" drivers if none can be found elsewhere.

[Bernardo:
Yes, but how can you kick the old drivers out of your way? I think this
idea is rather complex to implement. Why would one need a "minimal" kickstart
that loads everything else from the hard disk and then commits suicide? ;-)
]

[Iain: Now that has some interesting ideas. In particular, the idea of newer
disk-based versions. I think this could easily be done, simply by
concatenating all the modules into a file, called kernel, which is scanned by
the loader to create a list of modules, and later you can look elsewhere if a
module is yet to be loaded, and if you find a newer version then load that
instead. Although, this way you cannot really reclaim the memory used by the
kernel.]

[Aaron (in reply):]

When a driver is not used any more, you can unload it (that's what the HIDD
documents say and that's what should happen). If course, it won't be possible
to change the CPU "driver" while the system is up but that's not the point
(and virtually never necessary). You need some drivers which must be in
ROM (e.g. the drivers for the hard disk...) Others can be loaded from disk or
ROM. My point is that we could have a minimal driver in ROM and update them
on hard disk. By clever use of the search path, the new drivers on hard disk
would be used if the bootloader doesn't need the driver.

[Iain: It might be difficult to unload something that is loaded into the
kernel at boot time, since you would basically have to construct a list of
what pages of memory it uses.]

My point was this: I don't like drivers which depend on each other. I
especially don't like how Linux does it: When you want to add a new
driver to the kernel, you must recompile the whole thing. With my
approach, you could create an image which is basically a file with a
primitive file system inside. Adding a new driver would mean to compile
the driver and copy it into the primitive file system.

[Iain:
But if we really abstract the drivers so that they have to use other
HIDDs for interrupts and buses, then they will depend upon each other. I
would like to know the advantages of using a file with a primitive file system
over simply using a file system. I suppose the biggest one is security, in
that it would take more effort to overwrite a module in the PrimFS than in the
real FS.
]

That's the theory. In practise, many drivers which you need and which
can be compiled as a module, can't be loaded if the kernel has not been
compiled with the option to load that driver as a module (you will get
undefined symbols). That sucks. You should be able to compile a driver
completely independent of the rest of the kernel and load it *without*
having to recompile the whole kernel.

[Iain: Definitely, I think FreeBSD 3 can do this.]

[Bernardo:
That's because Linux (and NetBSD) modules are really object code that
is statically linked to the kernel at run time (funny ;-). On an
AmigaOS system, we don't need this. Our modules are in fact shared
libraries, handlers and devices. They can be loaded "on demand" and
even purged from memory when they are no longer in use. That's what
both Linux and NetBSD failed to provide with their monolithic kernels.

[Aaron Digulla:
Right. Even if the rest of the boot process is similar to Linux, this
must be Amiga-like :-)
]

I still believe that the Amiga design beats Unix on some important
aspects. The Amiga provides dynamic linking with very little overhead.
library jumptables, messages and IO requests all provide ways for
modules to interface with each other in a very independent way.

I still can't see the difference between adding a file into a primitive
file system and appending a resident tag to a kickstart-like file.
Building a kickstart at West Chester was just a matter of concatenating
all parts together, being careful to support a backwards compatibility
hack called "Kickety-Split".
]

[Bernardo is now chair :-)]
OK, don't call me mad. What about using a simple archive format to store
the modules? Perhaps a very simple but common format, such as tar or zip.
vmlinuz is compressed by means of gzip, and the small zlib implementation
in the bootload can decompress it. So we could have a "zkick" file, which
is just a zip archive (like Java classes) or perhaps a gzipped tar archive.
The module "bootstrap" is a plain executable that is joined with this
archive. Using a standard archive format allows us to rip out working
source code from any freeware program and put it inside "bootstrap".

We could then extract and initialize all the modules just after
"bootstrap" has finished with the preliminary set-up, and it would replace
the Kickstart code that scans the ROM for magic cookies in the original
AmigaOS.

If instead we really need to be able to load the modules at run time, just
like their file-based counterparts, we could even implement a "romlib" module
similar to the well known "ramlib". This one would patch itself into Exec's
OpenLibrary() and OpenDevice() to extract the modules from the archive
transparently.

[Iain: Or even make this standard behaviour for Exec. Actually I think this
part of the OS might need some overhaul. We would then have THREE different
ways of opening libraries. From memory, from disk, from bootimage. We are
now starting to get a bit messy with all the patching, there must be a nicer
way of doing it. Perhaps we could have a complete redesign of the image
loading system with dynamically loadable image loaders (for ELF, a.out,
Amiga HUNK, etc) and also for places to load modules from (memory,
library/device path, bootfile standard command path).
]

