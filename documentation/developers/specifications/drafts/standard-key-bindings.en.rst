================================
RFC #0002: Standard key bindings
================================

:Authors:   Adam Chodorowski
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Draft; not yet an AROS standard.

.. Note::

   This document is currently only a draft and as such will most likely change
   before it is accepted as an official specification. It might also be
   deprecated if a better approach has been found in the mean time, and
   doesn't necessarily correspond precisely with the current implementations.


To-do:

+ FIX:

  LAMIGA+M = next screen (+shifter version)
  LAMIGA+N = switch Workbench screen / active screen
  LAMIGA??? = next / prev window

There was some more discussion about this on IRC, so I have updated
this document. Changes done since last version:

+ Changed the completion key binding from ALT+TAB to CTRL+SPACE.
  The reason for this is that ALT+TAB is commonly used the switch
  windows, a key binding that the user might want to use. Choosing CTRL+SPACE
  as a replacement comes from the fact that it is used as a completion
  key binding in some IDE's, so it's not totally new.
+ Added key bindings for switching screens and windows, inspired by the
  key bindings in AmigaOS.

Open issues:

+ What should we call the "AMIGA"/"META" keys? Calling them "META"
  is more platform independent, but "AMIGA" is more, well, Amigaish.
  Or perhaps we should call them "AROS"? ;-)
+ Should ALT+TAB be bound to switching windows by default?
  Doesn't feel very Amigaish, and should we not educate new users
  into the "Amiga way" of things?

To-do:

+ Decide on the issues above. :)
+ Since the document probably will become larger, a better structure
  would be good. Separate into application domains, put rationale for
  key bindings in separate section and so on.


ARFC-0002: Standard AROS Key Bindings
-------------------------------------

This document specifies standard key bindings in the AROS user
interfaces. More specifically, it currently specifies what default
key bindings should be used for switching between gadgets in a GUI and
which to use for completion of strings, e.g. filenames. In the future,
more key bindings could be specified here.

Of course, all key bindings in the system should be configurable by the
user. This document merely specifies the defaults the system should
come with, and the classes of key bindings that should be available.
The main idea here is to be orthogonal, consistent and user-friendly.
Thus, there should be as few exceptions to the general rules as
possible, preferably none.

Unless otherwise noted, all key bindings defined here also have an
alternate form. If the SHIFT key is used in conjunction with the key
binding, it should have "opposite" meaning. E.g., if CTRL+TAB means
"select next gadget" then CTRL+SHIFT+TAB means "select previous gadget".

The following key bindings have been decided upon:

    ==========  ================================
    Keys        Action
    ==========  ================================
    CTRL+TAB    Select next gadget          [1]_
    TAB         Select next gadget          [2]_
    CTRL+SPACE  Completion; show next match [3]_
    LAMIGA+M    Switch to next screen
    LAMIGA+N    Switch to next window
    ==========  ================================

.. [1] These key bindings must always work, hence  a gadget or application
       should never intercept these input events.

.. [2] These key bindings should work in most cases, but gadgets or
       applications are allowed to intercept these input events for their
       own use. A typical example would be an editor gadget, where you want
       to be able to insert tabs (e.g. for indenting the text).

       Thus, the user can most of the time use the quicker TAB key binding,
       but might sometimes need to use CTRL+TAB. However, since CTRL+TAB
       *always* works, the user can always use CTRL+TAB if he/she prefers it
       for consistency.

.. [3] Completion means that the application tries to complete a string, based
       on what the user has written before, by using some sort of database or
       internal knowledge. Typical examples would be filename completion in
       the Shell, file requester string gadgets, URL completion in web
       browser string gadgets, and intelligent completion of function names in
       an editor for programmers.

       The reason for choosing CTRL+SPACE rather than TAB, which is
       traditionally used in different shells, is that it would clash with the
       definitions above. Also, CTRL+SPACE is already used as a completion key
       binding in several IDEs.

       Defining CTRL+SPACE as a generic completion key binding that can be
       used anywhere leads to a more consistent and more user-friendly user
       interface.


