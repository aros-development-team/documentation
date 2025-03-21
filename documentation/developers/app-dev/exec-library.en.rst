=======================================================
AROS Application Development Manual -- The Exec Library
=======================================================

:Authors:   Staf Verhaegen, Sebastian Rittau, Stefan Rieken, Matt Parsons,
            Adam Chodorowski, Fabio Alemagna, Matthias Rustler
:Copyright: Copyright © 1995-2011, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished; integration started (looong way left to go).
:ToDo:      Integrate the various parts. Update and revise. Complete...

`Index <index>`__

.. Warning::

   This document is not finished! It is highly likely that many parts are
   out-of-date, contain incorrect information, or are simply missing
   altogether. If you want to help rectify this, please contact us.

.. Contents::


Types
=====

In ``exec/types.h`` the following short-cuts are typedef'd. They are used
often in AROS, so you should nearly always include ``exec/types.h``.


`APTR`
    A generic pointer for multiple purposes.

`STRPTR`
    A pointer to a null-terminated string.

`UQUAD`
    Unsigned 64-bit integer variable.

`QUAD`
    Signed 64-bit integer variable.

`DOUBLE`
    64bit IEEE floating-point variable.

`ULONG`
    Unsigned 32-bit integer variable (longword).

`LONG`
    Signed 32-bit integer variable (longword).

`FLOAT`
    32 bit IEEE floating-point variable.

`UWORD`
    Unsigned 16-bit integer variable (word).

`WORD`
    Signed 16-bit integer variable (word).

`UBYTE`
    Unsigned 8-bit integer variable (byte).

`BYTE`
    Signed 8-bit integer variable (byte).

`BOOL`
    Boolean variable, `TRUE` and `FALSE` are also defined in `exec/types.h`.

`VOID`
    Void.


IPTR
----

There is another important typedef, `IPTR`. It is really important in AROS,
as it the only way to declare a field that can contain both an integer and a
pointer.

.. Note:: AmigaOS does not know this typedef. If you are porting a program
          from AmigaOS to AROS, you have to search your source for occurrences
          of `ULONG` that can also contain pointers, and change them into
          `IPTR`. If you don't do this, your program will not work on systems
          which have pointers with more than 32 bits (for example DEC Alphas
          that have 64-bit pointers).


BPTR
----

The so-called `BPTR`s were always a problem in AmigaOS and this problem was
inherited by AROS. In binary-compatible AROS versions a `BPTR` is in fact the
fourth of the real pointer. If, for example, a pointer points to address
``$80000`` the `BPTR` pointing to the same address would contain ``$20000``.
On systems without binary-compatibility, a `BPTR` is equal to an `APTR`.

To convert between a normal pointer and a `BPTR` use the macros::

    #include <dos/bptr.h>

    APTR BADDR( BPTR bptr );
    BPTR MKBADDR( APTR ptr );

There also exists something called `BSTR` which is a special kind of string.
We will not discuss this here, though, because it is used only very rarely.


History
-------

When the development of the Amiga started, it was designed as a pure
module-based games-console. As such, it didn't need any means of file system
handling. The OS was created without a file system in mind. But Commodore,
who bought the Amiga, wanted a full-fletched home-computer instead of another
games-platform. So, a short time before the Amiga's initial presentation,
a file system was needed. Instead of wasting time in developing a custom one,
the file system of an operating system called TRIPOS was ported to the Amiga.
Unfortunately TRIPOS was written in BCPL, a programming language with a quite
eccentric pointer handling. This pointer handling was inherited by the
AmigaDOS and later by AROS (even though later versions of AmigaOS and also
AROS are written in C).



Exec lists and memory management
================================

Exec lists
----------

AROS implements a system of linked lists, so-called exec lists.
A linked-list consists of a number of nodes that link to each other.
Two types of nodes are defined in `exec/nodes.h`:

`struct MinNode`
    is the basic node. You don't need to know about its structure, since
    every possible action on them is handled by some library function.

`struct Node`
    extends the simple struct `MinNode`. It provides some additional fields:

    `ln_Name`
        Each `Node` contains a pointer to a string, describing that node.

    `ln_Type`
        A list of types is defined in `exec/nodes.h`.

    `ln_Pri`
        A priority, used for sorting the list.

Both structures can be embedded into other structures. For example,
`struct Library` (defined in `exec/libraries.h`) contains a struct `Node` at
the beginning. This way all libraries can be contained in a list. The field
`ln_Name` points to the name of the library, `ln_Type` is set to `NT_LIBRARY`
to show that this node is a library and `ln_Pri` reflects the *importance* of
a library.

Of course, we need node containers: lists. These are defined in
``exec/lists.h``.
Like nodes, we have two different kind of lists:

`struct MinList`
    is the minimal list. You do not need to know about its members; look at
    it as a black-box.

`struct List`
    contains an additional field `lh_Type`, which corresponds to `ln_Type`
    of `struct Node`.

`MinList`\'s take `MinNode`\'s as members, while `List`\'s use `Node`\'s; they
are not interchangeable. While it's technically possible to use`Node`\'s in
`MinList`\'s, you loose all their advantages.

FIXME: Macros


List Manipulating Functions
---------------------------

exec.library and the link-library amiga.lib contain some functions for
manipulating exec lists. Before a list can be used, it must be
initialized. This can be done using this amiga.lib function::

    #include <proto/alib.h>

    void NewList( struct List *list );

Nodes can be added to lists with these exec.library functions::

    #include <proto/exec.h>

    void AddHead( struct List *list, struct Node *node );
    void AddTail( struct List *list, struct Node *node );
    void Enqueue( struct List *list, struct Node *node );
    void Insert( struct List *list, struct Node *node, struct Node *pred );

With `AddHead()` and `AddTail()` ``node`` is inserted at the beginning or the
end of ``list`` respectively. `Enqueue()` inserts ``node`` according to its
``ln_Pri`` field. A node can be inserted after another by using `Insert()`.
A pointer to the node to insert ``node`` after, must be provided as ``pred``.

Nodes can be removed using these exec.library functions::

    #include <proto/exec.h>

    void Remove( struct Node *node );
    struct Node *RemHead( struct List *list );
    struct Node *RemTail( struct List *list );

While `RemHead()` and `RemTail()` remove the first or last node of a ``list``
respectively and return a pointer to it, `Remove()` removes ``node`` from
whatever list it is in.

Of course, apart from `Enqueue()`, all list functions can process ``struct
MinList`` and ``struct MinNode``\'s, as well.

A list can be searched for a named node, using::

    #include <proto/exec.h>

    struct Node *FindName( struct List *list, STRPTR name );

``name`` is a pointer to a string that is to be compared with the ``ln_Name``
of the nodes in ``list``. The comparison is case-sensitive! If ``name``
matches any ``ln_Name`` field, a pointer to the corresponding node is
returned. If no field matches, ``NULL`` is returned.

.. Note::

    A list used with `FindName()` must not contain any ``struct MinList``
    entries. If it does, memory could get corrupted!

In the following example, we create a list, add three nodes to it, search
a named node and then remove it::

    #include <proto/alib.h>
    #include <proto/exec.h>
    #include <exec/types.h>
    #include <exec/lists.h>
    #include <exec/nodes.h>
    #include <dos/dos.h>    /* For RETURN_OK */

    struct List list;

    /* Our nodes */
    struct Node node1 =
    {
        NULL, NULL,    /* No predecessor and successor, yet */
        NT_UNKNOWN, 0, /* Unknown type, priority ignored */
        "First node"   /* Name of the node */
    };

    struct Node node2 =
    {
        NULL, NULL,
        NT_UNKNOWN, 0,
        "Second node"
    };

    struct Node node3 =
    {
        NULL, NULL,
        NT_UNKNOWN, 0,
        "Third node"
    };


    int main(int argc, char *argv[])
    {
        struct Node *node;

        /* Prepare the list for use. */
        NewList(&list);

        /* Add the first two nodes at the end of the list. */
        AddTail(&list, &node1);
        AddTail(&list, &node2);

        /* Insert the third node after the first node. */
        Insert(&list, &node3, &node1);

        /* Find the second node */
        node = FindName(&list, "Second node");

        /*
            If the node was found (which is always the case in this example),
            remove it.
        */

        if (node)
            Remove(&node);

        return RETURN_OK;
    }


Macros
------

AROS defines a couple of macros in various header files. All macros
cast their parameters to the correct type, so you must provide a
valid input but can safe the casts (macros are meant to make life
simpler).

``NEWLIST(list)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Initializes a list. You should not use any list before you have
    initialized it.

``GetHead(list)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Returns a pointer to the first node of a list, or ``NULL`` if the list
    is empty.

``GetTail(list)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Returns a pointer to the last node of a list, or ``NULL`` if the list
    is empty.

``GetSucc(node)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Returns a pointer to the next node of a list, or ``NULL`` if there is
    none.

``GetPred(list)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Returns a pointer to the previous node of a list, or ``NULL`` if there is
    none.

``ForeachNode(list,node)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Iterates through a list. A block of code must follow this macro. The
    block doesn't get executed if the list is empty. When the list terminates
    `node` doesn't contain ``NULL`` but ``node->ln_Succ`` will be ``NULL``.
    This macro can't be used if you want to delete the nodes in the list
    (i.e.. you must not call `Remove()` inside the block of code following the
    macro). Use `ForeachNodeSafe()` if you have to delete nodes.

    Example::

        /* Iterate through a list with complete nodes and print their names */
        t = 1;
        ForeachNode(list,node)
        {
            if (node->ln_Name)
            {
                printf ("Node %d: %s\n", t++, node->ln_Name);

                if (!strcmp (node->ln_Name, "end"))
                    break;
            }
        }

        if (node->ln_Succ)
            printf ("Not all nodes have been processed\n");
        else
            printf ("The list doesn't contain a node with the name \"end\"\n");

``ForeachNodeSafe(list,node,tmpNode)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Iterates through a list. A block of code must follow this macro. The
    block doesn't get executed if the list is empty. When the list terminates
    `node` doesn't contain ``NULL`` but ``node->ln_Succ`` will be ``NULL``.
    This macro can be used with code that deletes nodes in the list.

``SetNodeName(node,name)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Sets a new name for a node. The name is not copied, the macro will just
    make `ln_Name` point to ``name``.
    The macro casts `node` to ``struct Node *``
    so you better make sure that `node` is a full featured node.

``GetNodeName(node)``
    :Compatible: Yes
    :Location:   exec/lists.h

    Return the current name of a node.
    The macro casts `node` to ``struct Node *``
    so you better make sure that `node` is a full featured node.

``ListLength(list,count)``
    :Compatible: Yes
    :Location:   exec/lists.h

    This puts the number of nodes in `list` into `count`.


Memory Handling
---------------

You need memory for nearly everything in a program. Many things can be done
using the stack, but often you need larger chunks of memory or don't want
to use the stack for some reason. In these cases you have to allocate memory
by yourself. The exec.library provides several methods for allocating
memory. The two most important functions are::

    #include <proto/exec.h>

    APTR AllocMem( ULONG size, ULONG flags );
    APTR AllocVec( ULONG size, ULONG flags );

Both functions return a pointer to a memory area of the requested ``size``
provided as argument. If not enough memory was available, ``NULL`` is
returned, instead. You must check for this condition, before using the
memory. If the memory was successfully allocated, you can do with it
whatever you want to.

You can provide additional ``flags`` to get a special kind of memory. The
following flags are defined in ``exec/memory.h``:

MEMF_CLEAR
    The allocated memory area is initialized with zeros.

MEMF_LOCAL
    Get memory that will not be flushed, if the computer is reset.

MEMF_CHIP
    Get memory that is accessible by graphics and sound chips. Some
    functions require this type of memory.

MEMF_FAST
    Get memory that is not accessible by graphics and sound chips. *You
    should normally not set this flag! It is needed only for some very
    esoteric functions. Many systems don't have this kind of memory.*

MEMF_PUBLIC
    This flag must be set, if the memory you allocate is to be accessible by
    other tasks. If you do not set it, the allocated memory is *private* to
    your task. This issue will be discussed in detail in the chapter about
    .. FIXME:: *inter-task communication*.

MEMF_REVERSE
    If this flag is set, the order of the search for empty memory blocks is
    reversed. Blocks that are at the end of the list of empty memory will be
    found first.

MEMF_NO_EXPUNGE
    Normally, if not enough free memory of the requested size is found, AROS
    tries to free unused memory, for example by flushing unused libraries
    out of the memory. If this flag is set, this behavior is turned off.

Memory allocated with these functions *must be freed* after use with one of
the following functions. *Note well that you should never access memory after
it has been freed.*::

    #include <proto/exec.h>

    void FreeMem( APTR memory, ULONG size );
    void FreeVec( APTR memory );

Of course, `FreeMem()` must be used for memory allocated with `AllocMem()`
and `FreeVec()` for memory allocated with `AllocVec()`. The synopsis for
these two functions shows the difference between `AllocMem()` and
`AllocVec()`: `AllocVec()` remembers the size of the chunk of memory it
allocated. So, if you use `AllocVec()`, you don't have to store the
requested size, while you have to if you use `AllocMem()`.


Allocating Multiple Regions of Memory at once
---------------------------------------------

Sometimes you may want to make multiple memory allocations at once. The usual
way to do this is calling `AllocVec()` with the size of all memory-blocks
added together and then making pointers relative to the returned pointer.
But what do you do, if you need memory of different kinds, with different
``MEMF_`` flags set?
You could make multiple allocations or simply use this function::

    #include <proto/exec.h>

    struct MemList *AllocEntry( struct MemList *oldlist );

As you will have noticed, `AllocEntry()` uses a pointer to a
``struct MemList`` as only argument and as result. We find the definition of
this structure in ``exec/memory.h``::

    struct MemEntry
    {
        union
        {
            ULONG meu_Reqs;
            APTR  meu_Addr;
        } me_Un;
        ULONG me_Length;
    };


    struct MemList
    {
        struct Node     ml_Node;
        UWORD           ml_NumEntries;
        struct MemEntry ml_ME[1];
    };

The array ``ml_ME`` of ``struct MemList`` has a variable number of elements.
The number of its elements is set in ``ml_NumEntries``. The struct
``MemEntry`` describes one memory-entry. Stored are its size
(``me_Length``), its requirements (i.e. the ``MEMF_``, set in
``me_Un.meu_Reqs``) and possibly a pointer to the memory-block
(``me_Un.meu_Addr``). The struct ``MemList``, you pass in as ``oldlist``,
must have set the field ``ml_NumEntries`` to the actual number of struct
``MemEntry``'s contained in ``ml_ME``. The struct ``MemEntry``'s
must have set the fields ``me_Length`` and ``me_Un.meu_Reqs``. The other
fields are ignored. The function returns a pointer to a copy of the struct
``MemEntry``, passed in as ``oldlist``, with all the relevant fields set
(especially ``me_Un.meu_Addr``). An error is indicated by setting the most
significant bit of the pointer returned. So you always have to check it,
before using the pointer returned. Memory allocated with `AllocEntry()` too
must be freed using `FreeMem()`.


Memory Pools
------------

AROS manages several so-called memory-pools. Each memory-pool contains a list
of memory-areas. Of these, the most important memory-pool is the pool that
contains all free memory in the system. But you also can create memory-pools
yourself. This has some advantages:

+ Every time you allocate some memory, the memory in the system becomes more
  fragmented. This fragmentation causes the available memory chunks to become
  smaller. This way larger allocations may fail. To prevent this problem,
  memory-pools were introduced. Instead of allocating many small chunks of
  memory, the pool-management routines allocate large chunks and then return
  small chunks out of it, when memory-requests are made.

+ Private memory-pools have the ability to keep track of all the allocations
  you made so that all memory in a pool can be freed with one simple
  function-call (but you can also free memory individually).

Before a memory-pool can be used, it must be created. This is done with the
function::

    #include <proto/exec.h>

    APTR CreatePool( ULONG flags, ULONG puddleSize, ULONG threshSize );

The `flags` specifies the type of memory you want to get from the
`AllocPooled()` function . All ``MEMF_`` definitions as described above are
allowed here.

The `puddleSize` is the size of the chunks of memory that are allocated by
the pool functions. Usually a size about ten times bigger than the average
memory-size, you need to allocate, is a good guess. But on the other hand
the `puddleSize` should not be too large. Normally you should limit it to
about ``50kb``. Note well, though, that these are only suggestions and no
real limitations.

Finally, the `threshSize` specifies how large the requested chunk of memory
must be to be allocated automatically, rather than after checking the pool.
If, for example, the `threshSize` is set to 25kb and you want to allocate a
piece of memory with the size of 30kb, the internal lists of chunks of that
memory-pool is not searched at all. Instead, the memory is allocated
directly. If the memory to be allocated was only 20kb, first the chunk-list
would have been searched for a piece of free memory of that size. Of course,
the `threshSize` shouldn't be larger than the `puddleSize` and it should not
be too small, either. Half the `puddleSize` is a good guess here.

`CreatePool()` returns a private pointer to a pool-structure that must be
saved for further use. ``NULL`` is returned if no memory for the
pool-structure was available. You have to check for this condition.

After use, all memory-pools must be destroyed by calling::

    #include <proto/exec.h>

    void DeletePool( APTR pool );

This function deletes the `pool` passed in. Additionally all memory that was
allocated in this pool is freed. This way, you don't need to remember every
single piece of memory, you allocated in a pool. Just call `DeletePool()` at
the end. Note that you should be careful not to access pooled memory after
its pool was deleted!

If you want to allocate memory from a pool, you need to call::

    #include <proto/exec.h>

    void *AllocPooled( APTR pool, ULONG size );

Besides the `pool` to allocate memory from, the `size` of the memory to be
allocated must be passed in. Returned is a pointer to a block of memory of
the requested size or ``NULL`` to indicate that not enough memory was
available.

Memory allocated with `AllocPooled()` can be freed by either destroying the
whole pool with `DeletePool()` or individually by calling::

    #include <proto/exec.h>

    void FreePooled( APTR pool, void *memory, ULONG size );

This function frees exactly one piece of memory that was previously allocated
with `AllocPooled()`. The pointer to the `memory` pointer, returned by
`AllocPooled()`, its `size` and the pool it is in, have to be supplied as
arguments.

.. Note::

    You may ask yourself: "If `DeletePool()` deletes all the memory of a
    pool, why should I ever use `FreePooled()`?" The answer is easy: to save
    memory. Normally it's good style to free memory as soon as you don't
    need it any more. But sometimes it is easier just to free a memory-pool
    after a bunch of allocations.
    Nevertheless, you should not use this feature if you are not sure when
    the memory-pool will be deleted. Imagine a program like this (do not try
    to compile it; it won't)::

        #define <exec/types.h>
        #define <exec/memory.h>
        #define <dos/dos.h>

        int main(int argc, char *argv[])
        {
            APTR pool;
            APTR mem;

            /* Create our memory pool and test, if it was successful. */
            pool = CreatePool(MEMF_ANY, 50*1024, 25*1024);
            if (pool)
            {

                /* Just a dummy function. Image that this function will open
                   a window, with two buttons "Do Action" and "Quit".
                */
                open_our_window();

                for(;;)
                {
                    /* Another dummy function that returns one of the
                       definitions below.
                    */
                    switch(get_action())
                    {
                    /* This is returned, if the button "Do Action" was released. */
                    case DOACTION:
                        mem = AllocPooled(pool, 10*1024);
                        if (mem)
                        {
                            /* Another dummy function that uses our memory. */
                            silly_function(mem);
                        }
                        break;
                    /* This is returned, if the button "Quit" was released. */
                    case QUIT:
                        return RETURN_OK;
                    }
                }

                /* Close the window, we have opened above. */
                close_our_window();

                /* Delete our pool. */
                DeletePool(pool);
            }
        }

    Each time the button ``Do Action`` is released, some memory is allocated.
    This memory is freed at the end of the program, when `DeletePool()` is
    called. Of course, the longer the program is used, the more memory will
    be in use. That is why it would be much better to free the memory after
    use. This is done by replacing the part between ``case DOACTION:`` and
    ``case QUIT:`` by::

        mem = AllocPooled(pool, 10*1024);
        if (mem)
        {
            silly_function(mem);
            FreePooled(pool, mem, 10*1024);
        }
        break;


Obsolete Memory Pool Functions
------------------------------

Memory-pools are managed with ``struct MemHeader``'s. If you have a pointer
to such a structure, you may try to allocate some memory from its pool::

    #include <proto/exec.h>

    void *Allocate( struct MemHeader *mh, ULONG size );

Apart from the pointer to the struct ``MemHeader`` passed in as ``mh``, you
have to supply the ``size`` of the memory-block you want to allocate. This
function returns either a pointer to the first memory-block found or
``NULL`` if no matching block was found.

You must free every memory-block allocated with `Allocate()` with::

    #include <proto/exec.h>

    void Deallocate( struct MemHeader *mh, APTR mem, ULONG size );

You have to pass the same ``mh`` and ``size`` to `Deallocate()` that you
passed to `Allocate()` and additionally the pointer it returned.

intuition.library provides another way to handle memory pools with the
functions `AllocRemember()` and `FreeRemember()`. Note, though, that these
are obsolete. You should use the normal pool-functions of exec.library,
instead.


Allocating a specific memory address
------------------------------------

Under very rare circumstances you may need to allocate memory at a specific
memory address. This performed by using::

    #include <proto/exec.h>

    void *AllocAbs( ULONG size, APTR address );

This function tries to allocate `size` bytes at `address`. If this is
successful, a pointer to the requested address is returned. If some memory of
the requested block is already allocated or is not available in the system,
``NULL`` is returned, instead.

.. Warning::

    You *should not write* to the beginning of the memory-block!
    The beginning of the returned memory block will have been used by exec
    to store its node-data (the exact size is calculated by
    ``(2*sizeof (void *)) )``. Therefore, this area will not be available to
    you. Either don't write there, or if there's memory before the address
    you need, request a slightly larger block, starting far enough before
    the intended start-address to make room for exec's data.
    Because of these obstacles, you should not use `AllocAbs()`, except in
    case you really need it.

Memory allocated with ``AllocAbs()`` must also be freed using ``FreeMem()``.


Querying memory size and available memory
-----------------------------------------

To get the size of available memory, use the function::

    #include <proto/exec.h>

    ULONG AvailMem( ULONG type );

The `type` parameter consists of some of the following flags (or-ed),
as defined in `exec/memory.h`:

``MEMF_ANY``
    Return the size of all free memory in the system.

``MEMF_CHIP``
    Return the size of memory, which is accessible by graphics and sound
    chips.

``MEMF_FAST``
    Return the size of memory that is not accessible by graphics and sound
    chips.

``MEMF_LARGEST``
    Return only the largest block, instead of all memory of the type
    specified.

You may also specify other ``MEMF_`` flags, however, they will simply be
ignored.

.. Note::

    Note well that the returned memory-size need not reflect the real size
    of the memory available, as in a multitasking system this may change at
    any moment, even while `AvailMem()` is being executed.

A program to list memory available in the system::

    #include <stdio.h>
    #include <exec/memory.h>

    int main(int argc, char *argv[])
    {
        printf("Total free memory: %h, largest block: %h\n",
        AvailMem(MEMF_ANY), AvailMem(MEMF_ANY|MEMF_LARGEST));

        printf("Free chip memory:  %h, largest block: %h\n",
        AvailMem(MEMF_CHIP), AvailMem(MEMF_CHIP|MEMF_LARGEST));

        printf("Free fast memory:  %h, largest block: %h\n",
        AvailMem(MEMF_FAST), AvailMem(MEMF_FAST|MEMF_LARGEST));
    }


Adding memory to the system
---------------------------

This chapter is only of concern to you, if you want to write a
hardware-driver for a piece of hardware which adds memory to the system.
This exec function adds memory to the list of free memory in the system::

    #include <proto/exec.h>

    void AddMemList
    (
        ULONG size, ULONG type, LONG priority,
        APTR address, STRPTR name
    );

You have supply the `address` and the `size` of the memory to add. The
`type` has to be set to at least one of the ``MEMF_`` flags, which are
defined in `exec/memory.h`:

``MEMF_FAST``
    Your memory must not be accessed by graphics or sound chips.

``MEMF_CHIP``
    Your memory is reachable for graphics and sound chips.

You can provide a `priority` with which your memory will be added to the
memory list. The general rule is: The quicker your memory, the higher the
priority should be. If you don't know, what to supply here, supply ``0``.
Finally, you can provide a `name`, with which your memory can be identified
by the system and its users. You may provide ``NULL`` instead of a name, but
giving your memory a name is recommended.

Once your memory is added to the list of free memory,
it can't be removed again.


Low memory situations
---------------------

FIXME: AddMemHandler()/RemMemHandler()


============================== ===============================================
`AllocMem()`_                  Allocate some memory
`FreeMem()`_                   Free memory allocated by `AllocMem()`_
`AllocVec()`_                  Allocate block of memory and remember its size
`FreeVec()`_                   Free memory allocated by AllocVec()
`AllocEntry()`_                Allocate a number of blocks
`NewAllocEntry()`_             Improved version of `AllocEntry()`_
`FreeEntry()`_                 Free `AllocEntry()`_/`NewAllocEntry()`_ memory
`AddMemList()`_                Add memory to the public list of memory
`AllocAbs()`_                  Allocate memory at a given address
`Allocate()`_                  Allocate memory from a specific MemHeader
`Deallocate()`_                Free memory allocated by `Allocate()`_
`AllocPooled()`_               Allocate memory in a pool
`FreePooled()`_                Free memory allocated by `AllocPooled()`_
`AllocVecPooled()`_            Allocate pool memory and remember its size
`FreeVecPooled()`_             Free memory allocated by `AllocVecPooled()`_
`CreatePool()`_                Create a memory pool
`DeletePool()`_                Delete a memory pool including all its memory
`AvailMem()`_                  Indicate how much memory is available
`CopyMem()`_                   Copy memory
`CopyMemQuick()`_              Copy aligned memory
`TypeOfMem()`_                 Examine memory
`AddMemHandler()`_             Add a low memory handler
`RemMemHandler()`_             Remove a memory handler
============================== ===============================================



Lists
=====

============================== ===============================================
`AddHead()`_                   Add a node to the head of a list
`AddTail()`_                   Add a node at the end of a list
`Enqueue()`_                   Add a node into a sorted list
`FindName()`_                  Search for a node by name
`Insert()`_                    Insert a node into a list
NEWLIST()                      Initialize a list
`RemHead()`_                   Remove the first node of a list
`RemTail()`_                   Remove the last node of a list
`Remove()`_                    Remove a node from a list
============================== ===============================================



Balanced Binary Search Trees
============================

============================== ===============================================
`AVL_AddNode()`_               Add a new node to an AVL tree
`AVL_FindFirstNode()`_         Find the smallest node in an AVL tree
`AVL_FindLastNode()`_          Find the largest node in an AVL tree
`AVL_FindNextNodeByAddress()`_ Perform an in-order traversal to the next node
`AVL_FindNextNodeByKey()`_     Find the next node matching the key
`AVL_FindNode()`_              Find an entry in the AVL tree by key
`AVL_FindPrevNodeByAddress()`_ Inverse-order traversal to the previous node
`AVL_FindPrevNodeByKey()`_     Find the previous node matching the key
`AVL_RemNodeByAddress()`_      Remove a given node from the tree
`AVL_RemNodeByKey()`_          Find a node in the tree by key and remove it
============================== ===============================================



Signals
=======

============================== ===============================================
`AllocSignal()`_               Allocate a signal
`FreeSignal()`_                Free a signal
`SetSignal()`_                 Examine and/or modify the signals of a task
`Signal()`_                    Send some signal to a given task
`Wait()`_                      Wait for some signal
`WaitPort()`_                  Wait for a message on a port
============================== ===============================================



Messages and Ports
==================

============================== ===============================================
`AddPort()`_                   Add a port to the public list of ports
`RemPort()`_                   Removes a port from the list of public ports
`CreateMsgPort()`_             Create a new message port
`DeleteMsgPort()`_             Free a message port
`FindPort()`_                  Search a port by name
`GetMsg()`_                    Get a message from a message port
`PutMsg()`_                    Send a message to a port
`ReplyMsg()`_                  Reply a message
============================== ===============================================



Semaphores
==========

============================== ===============================================
`AddSemaphore()`_              Add a semaphore to the public semaphore list
`AttemptSemaphore()`_          Try to lock a semaphore
`AttemptSemaphoreShared()`_    Try to lock a semaphore shared
`FindSemaphore()`_             Search a semaphore by name
`InitSemaphore()`_             Initialize a signal semaphore
`ObtainSemaphore()`_           Lock a semaphore
`ObtainSemaphoreList()`_       Lock all semaphores in a list at once
`ObtainSemaphoreShared()`_     Get a shared lock on a semaphore
`ReleaseSemaphore()`_          Release a semaphore
`ReleaseSemaphoreList()`_      Release all semaphores in a list
`RemSemaphore()`_              Remove a semaphore from public semaphores list
`Procure()`_                   Try to lock a semaphore
`Vacate()`_                    Release a lock obtained with Procure()
============================== ===============================================



Tasks
=====

Task Handling
-------------

============================== ===============================================
`AddTask()`_                   Add a task
`NewAddTask()`_                Add a task
`RemTask()`_                   Remove a task
`CreateTask()`_                amiga.lib function for creation of tasks
`DeleteTask()`_                amiga.lib function for deletion of tasks
`AllocTrap()`_                 Allocate a trap
`FreeTrap()`_                  Free a trap
`FindTask()`_                  Search a task by name
`Forbid()`_                    Prevent tasks switches from taking place
`Permit()`_                    Allow tasks switches to occur
`SetExcept()`_                 Examine/modify signals causing an exception
`SetTaskPri()`_                Change the priority of a task
`StackSwap()`_                 Swap the stack of a task
`CacheClearE()`_               Clear the caches with extended control
`CacheClearU()`_               Simple way of clearing the caches
`CacheControl()`_              Global control of the system caches
`CachePostDMA()`_              Do what is necessary for DMA
`CachePreDMA()`_               Do what is necessary for DMA
`GetCC()`_                     Read the CPU condition codes in an easy way
`SetSR()`_                     Modify the CPU status register
`SuperState()`_                Switch the processor into a higher plane
`Supervisor()`_                Execute some code in a privileged environment
`UserState()`_                 Return to normal mode after changing things
`Switch()`_                    Switch to the next available task
`ChildFree()`_                 Free child task information on a dead child
`ChildOrphan()`_               Make any children of this task orphans
`ChildStatus()`_               Find out the status of a child task
`ChildWait()`_                 Wait for a task to finish its processing
============================== ===============================================


Task Storage
------------

An AROS-specific feature for tasks is that each Task gets an array of IPTRs
that can be used for Task-specific data. It can, for example, be used by
shared libraries to easily associate data with a task or by compilers to
make a program pure.

Slots can be allocated with `AllocTaskStorageSlot()`_ and freed with
`FreeTaskStorageSlot()`_. After a slot has been allocated the data associated
with the slot can be manipulated by accessing
`tc_UnionETask.tc_TaskStorage[slot]` from a `struct Task`.

Generally, when a new task is run, the contents of all the slots of the
parent Task are copied into the new task. This holds for AddTask(),
NewAddTask() and CreateNewProc(). When RunCommand() is used, however, the
parent TaskStorage is reused in the child; changes made in the child to
TaskStorage will be visible in parent after the child has exited.
If these default behavior is not acceptable, user code has to implement
checks and override it.

Functions:

============================== ===============================================
`AllocTaskStorageSlot()`_      Allocate a TaskStorage slot
`FreeTaskStorageSlot()`_       Free a TaskStorage slot
============================== ===============================================



Devices
=======

============================== ===============================================
`AddDevice()`_                 Add a device to the public list of devices
`RemDevice()`_                 Remove a device from public list of devices
`CreateIORequest()`_           Create an I/O request
`DeleteIORequest()`_           Free an I/O request
`OpenDevice()`_                Open a device
`CloseDevice()`_               Close a device
`DoIO()`_                      Start an IO request and wait till it completes
`SendIO()`_                    Start an asynchronous I/O request
`CheckIO()`_                   Check if an I/O request is completed
`WaitIO()`_                    Wait until IO request completes
`AbortIO()`_                   Abort an I/O request
`BeginIO()`_                   amiga.lib: Call a device's BeginIO() function
`CreateExtIO()`_               amiga.lib: Create extended IORequest structure
`DeleteExtIO()`_               amiga.lib: Free an I/O request
============================== ===============================================



Libraries
=========

============================== ===============================================
`AddLibrary()`_                Add a library to the public list of libraries
`RemLibrary()`_                Remove a library from list of public libraries
`MakeLibrary()`_               Make a library ready for use
`OpenLibrary()`_               Open a library
`CloseLibrary()`_              Close a library
`SetFunction()`_               Patch a library or device function
`SumLibrary()`_                Build checksum for a library
`FindResident()`_              Search a resident module by name
`InitResident()`_              Build library / device from resident structure
`InitCode()`_                  Initialize resident modules
`InitStruct()`_                Initialize a structure
`MakeFunctions()`_             Create the jump table for shared library/device
============================== ===============================================



Resources
=========

============================== ===============================================
`AddResource()`_               Add a resource to the public list of resources
`RemResource()`_               Remove a resource from public resources list
`OpenResource()`_              Open a resource
============================== ===============================================



Interrupts
==========

============================== ===============================================
`AddIntServer()`_              Add interrupt client to interrupt server chain
`RemIntServer()`_              Remove an interrupt handler
`Cause()`_                     Cause a software interrupt
`Disable()`_                   Stop interrupts from occurring
`Enable()`_                    Allow interrupts to occur after `Disable()`_
`SetIntVector()`_              Install an interrupt handler
`ObtainQuickVector()`_         Obtain and install a Quick Interrupt vector
============================== ===============================================



I/O
===

============================== ===============================================
`RawDoFmt()`_                  Format a string
`VNewRawDoFmt()`_              Format a string (va_list)
`Alert()`_                     Display an alert
============================== ===============================================


Miscellaneous
=============

============================== ===============================================
`ColdReboot()`_                Reboot the computer
`Debug()`_                     Start the internal debugger
`SumKickData()`_               Calculate the checksum for the kickstart
============================== ===============================================


.. _AVL_AddNode(): ../autodocs/exec#avl_addnode
.. _AVL_FindFirstNode(): ../autodocs/exec#avl_findfirstnode
.. _AVL_FindLastNode(): ../autodocs/exec#avl_findlastnode
.. _AVL_FindNextNodeByAddress(): ../autodocs/exec#avl_findnextnodebyaddress
.. _AVL_FindNextNodeByKey(): ../autodocs/exec#avl_findnextnodebykey
.. _AVL_FindNode(): ../autodocs/exec#avl_findnode
.. _AVL_FindPrevNodeByAddress(): ../autodocs/exec#avl_findprevnodebyaddress
.. _AVL_FindPrevNodeByKey(): ../autodocs/exec#avl_findprevnodebykey
.. _AVL_RemNodeByAddress(): ../autodocs/exec#avl_remnodebyaddress
.. _AVL_RemNodeByKey(): ../autodocs/exec#avl_remnodebykey
.. _AbortIO(): ../autodocs/exec#abortio
.. _AddDevice(): ../autodocs/exec#adddevice
.. _AddHead(): ../autodocs/exec#addhead
.. _AddIntServer(): ../autodocs/exec#addintserver
.. _AddLibrary(): ../autodocs/exec#addlibrary
.. _AddMemHandler(): ../autodocs/exec#addmemhandler
.. _AddMemList(): ../autodocs/exec#addmemlist
.. _AddPort(): ../autodocs/exec#addport
.. _AddResource(): ../autodocs/exec#addresource
.. _AddSemaphore(): ../autodocs/exec#addsemaphore
.. _AddTail(): ../autodocs/exec#addtail
.. _AddTask(): ../autodocs/exec#addtask
.. _Alert(): ../autodocs/exec#alert
.. _AllocAbs(): ../autodocs/exec#allocabs
.. _AllocEntry(): ../autodocs/exec#allocentry
.. _AllocMem(): ../autodocs/exec#allocmem
.. _AllocPooled(): ../autodocs/exec#allocpooled
.. _AllocSignal(): ../autodocs/exec#allocsignal
.. _AllocTaskStorageSlot(): ../autodocs/exec#alloctaskstorageslot
.. _AllocTrap(): ../autodocs/exec#alloctrap
.. _AllocVec(): ../autodocs/exec#allocvec
.. _AllocVecPooled(): ../autodocs/exec#allocvecpooled
.. _Allocate(): ../autodocs/exec#allocate
.. _AttemptSemaphore(): ../autodocs/exec#attemptsemaphore
.. _AttemptSemaphoreShared(): ../autodocs/exec#attemptsemaphoreshared
.. _AvailMem(): ../autodocs/exec#availmem
.. _CacheClearE(): ../autodocs/exec#cachecleare
.. _CacheClearU(): ../autodocs/exec#cacheclearu
.. _CacheControl(): ../autodocs/exec#cachecontrol
.. _CachePostDMA(): ../autodocs/exec#cachepostdma
.. _CachePreDMA(): ../autodocs/exec#cachepredma
.. _Cause(): ../autodocs/exec#cause
.. _CheckIO(): ../autodocs/exec#checkio
.. _ChildFree(): ../autodocs/exec#childfree
.. _ChildOrphan(): ../autodocs/exec#childorphan
.. _ChildStatus(): ../autodocs/exec#childstatus
.. _ChildWait(): ../autodocs/exec#childwait
.. _CloseDevice(): ../autodocs/exec#closedevice
.. _CloseLibrary(): ../autodocs/exec#closelibrary
.. _ColdReboot(): ../autodocs/exec#coldreboot
.. _CopyMem(): ../autodocs/exec#copymem
.. _CopyMemQuick(): ../autodocs/exec#copymemquick
.. _CreateIORequest(): ../autodocs/exec#createiorequest
.. _CreateMsgPort(): ../autodocs/exec#createmsgport
.. _CreatePool(): ../autodocs/exec#createpool
.. _Deallocate(): ../autodocs/exec#deallocate
.. _Debug(): ../autodocs/exec#debug
.. _DeleteIORequest(): ../autodocs/exec#deleteiorequest
.. _DeleteMsgPort(): ../autodocs/exec#deletemsgport
.. _DeletePool(): ../autodocs/exec#deletepool
.. _Disable(): ../autodocs/exec#disable
.. _Dispatch(): ../autodocs/exec#dispatch
.. _DoIO(): ../autodocs/exec#doio
.. _Enable(): ../autodocs/exec#enable
.. _Enqueue(): ../autodocs/exec#enqueue
.. _Exception(): ../autodocs/exec#exception
.. _FindName(): ../autodocs/exec#findname
.. _FindPort(): ../autodocs/exec#findport
.. _FindResident(): ../autodocs/exec#findresident
.. _FindSemaphore(): ../autodocs/exec#findsemaphore
.. _FindTask(): ../autodocs/exec#findtask
.. _Forbid(): ../autodocs/exec#forbid
.. _FreeEntry(): ../autodocs/exec#freeentry
.. _FreeMem(): ../autodocs/exec#freemem
.. _FreePooled(): ../autodocs/exec#freepooled
.. _FreeSignal(): ../autodocs/exec#freesignal
.. _FreeTaskStorageSlot(): ../autodocs/exec#freetaskstorageslot
.. _FreeTrap(): ../autodocs/exec#freetrap
.. _FreeVec(): ../autodocs/exec#freevec
.. _FreeVecPooled(): ../autodocs/exec#freevecpooled
.. _GetCC(): ../autodocs/exec#getcc
.. _GetMsg(): ../autodocs/exec#getmsg
.. _InitCode(): ../autodocs/exec#initcode
.. _InitResident(): ../autodocs/exec#initresident
.. _InitSemaphore(): ../autodocs/exec#initsemaphore
.. _InitStruct(): ../autodocs/exec#initstruct
.. _Insert(): ../autodocs/exec#insert
.. _MakeFunctions(): ../autodocs/exec#makefunctions
.. _MakeLibrary(): ../autodocs/exec#makelibrary
.. _NewAddTask(): ../autodocs/exec#newaddtask
.. _NewAllocEntry(): ../autodocs/exec#newallocentry
.. _ObtainQuickVector(): ../autodocs/exec#obtainquickvector
.. _ObtainSemaphore(): ../autodocs/exec#obtainsemaphore
.. _ObtainSemaphoreList(): ../autodocs/exec#obtainsemaphorelist
.. _ObtainSemaphoreShared(): ../autodocs/exec#obtainsemaphoreshared
.. _OldOpenLibrary(): ../autodocs/exec#oldopenlibrary
.. _OpenDevice(): ../autodocs/exec#opendevice
.. _OpenLibrary(): ../autodocs/exec#openlibrary
.. _OpenResource(): ../autodocs/exec#openresource
.. _Permit(): ../autodocs/exec#permit
.. _PrepareContext(): ../autodocs/exec#preparecontext
.. _Procure(): ../autodocs/exec#procure
.. _PutMsg(): ../autodocs/exec#putmsg
.. _RawDoFmt(): ../autodocs/exec#rawdofmt
.. _RawIOInit(): ../autodocs/exec#rawioinit
.. _RawMayGetChar(): ../autodocs/exec#rawmaygetchar
.. _RawPutChar(): ../autodocs/exec#rawputchar
.. _ReleaseSemaphore(): ../autodocs/exec#releasesemaphore
.. _ReleaseSemaphoreList(): ../autodocs/exec#releasesemaphorelist
.. _RemDevice(): ../autodocs/exec#remdevice
.. _RemHead(): ../autodocs/exec#remhead
.. _RemIntServer(): ../autodocs/exec#remintserver
.. _RemLibrary(): ../autodocs/exec#remlibrary
.. _RemMemHandler(): ../autodocs/exec#remmemhandler
.. _RemPort(): ../autodocs/exec#remport
.. _RemResource(): ../autodocs/exec#remresource
.. _RemSemaphore(): ../autodocs/exec#remsemaphore
.. _RemTail(): ../autodocs/exec#remtail
.. _RemTask(): ../autodocs/exec#remtask
.. _Remove(): ../autodocs/exec#remove
.. _ReplyMsg(): ../autodocs/exec#replymsg
.. _Reschedule(): ../autodocs/exec#reschedule
.. _SendIO(): ../autodocs/exec#sendio
.. _SetExcept(): ../autodocs/exec#setexcept
.. _SetFunction(): ../autodocs/exec#setfunction
.. _SetIntVector(): ../autodocs/exec#setintvector
.. _SetSR(): ../autodocs/exec#setsr
.. _SetSignal(): ../autodocs/exec#setsignal
.. _SetTaskPri(): ../autodocs/exec#settaskpri
.. _Signal(): ../autodocs/exec#signal
.. _StackSwap(): ../autodocs/exec#stackswap
.. _SumKickData(): ../autodocs/exec#sumkickdata
.. _SumLibrary(): ../autodocs/exec#sumlibrary
.. _SuperState(): ../autodocs/exec#superstate
.. _Supervisor(): ../autodocs/exec#supervisor
.. _Switch(): ../autodocs/exec#switch
.. _TaggedOpenLibrary(): ../autodocs/exec#taggedopenlibrary
.. _TypeOfMem(): ../autodocs/exec#typeofmem
.. _UserState(): ../autodocs/exec#userstate
.. _VNewRawDoFmt(): ../autodocs/exec#vnewrawdofmt
.. _Vacate(): ../autodocs/exec#vacate
.. _Wait(): ../autodocs/exec#wait
.. _WaitIO(): ../autodocs/exec#waitio
.. _WaitPort(): ../autodocs/exec#waitport

.. _CreateTask(): ../autodocs/alib#createtask
.. _DeleteTask(): ../autodocs/alib#deletetask
.. _BeginIO(): ../autodocs/alib#beginio
.. _CreateExtIO(): ../autodocs/alib#createextio
.. _DeleteExtIO(): ../autodocs/alib#deleteextio

