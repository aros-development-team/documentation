===================================
RFC #0001: Home directories in AROS
===================================

:Authors:   Daniel Holmen, Peter Eriksson
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Draft; not yet an AROS standard.

.. Note::

   This document is currently only a draft and as such will most likely change
   before it is accepted as an official specification. It might also be
   deprecated if a better approach has been found in the mean time, and
   doesn't necessarily correspond precisely with the current implementations.

We'd like the AROS system to support several users much like what other
operating platforms do (like MacOS and WindowsXP). Before we say anything more
though, we'd like to stress that this is considered as AROS "extras"; your
AROS setup doesn't necessarily need all this. If you're are the only one using
your box, then some of this will hardly apply to your situation. Every system
however, no matter how many users actually use it, should have a "HOME:"
assign present.

With this in mind, here's what we'd like to see:

1. A system running AROS recognizes different users with different preferences.
   Every user gets his or her own homedirectory, known as "HOME:". This assign
   points to a subdirectory within the "SYS:Home/" directory (the default
   name). Every user with access to the system will be given one of these
   directories. One name is reserved for system use ("System").

   ::

       SYS:
       +- Home/
          +- lys/
          +- petah/
          +- Mom/
          +- Dad/
          .
          . [... more users ...]
          .
          +- System/ [reserved]

2. Every home directory is free to use at the user's own personal discretion.
   However, there are some standard subdirectories: "HOME:S/", "HOME:EnvArc/",
   "HOME:T/", "HOME:Trashcan/" and "HOME:Settings/".

   ::

       HOME:
       +- Settings
       |  +- Programs/
       |  |  +- SnoopDOS/
       |  |  +- XDME/
       |  |  +- ...
       |  +- UI/ [reserved]
       |     +- HDToolBox.prui
       |     +- Calculator.prui
       |     +- ...
       +- S/
       |  +- User-Startup
       |  +- ...
       +- EnvArc/
       |  +- Sys/
       |     +- User.prefs
       +- T/
       +- Trashcan/

   The subdirectories carry user preferences. The preferences programs and
   "IPrefs" will have to know about this, and so will AROS applications, which
   will store non-variable data in HOME:Settings/Programs/<ProgramName>.

   The "HOME:Settings/UI/" subdirectory is reserved for system use. This
   directory stores information about application User Interface ("UI"). We've
   defined a new IFF standard for this purpose - "IFF-PRUI" ("Persistant User
   Interface"). Read more about this in the IFF-PRUI RFC.

   "HOME:EnvArc/Sys/User.prefs" holds information about the user him/herself.
   Although this IFF-format is yet to be determined, it will contain data such
   as the user's real name and e-mail address.

   (Permanent) Shell variables will be stored in "HOME:EnvArc/". Every user
   gets his or her own personal trashcan ("HOME:Trashcan/"). Also note that
   all users have their own "User-Startup" script (stored in HOME:S/) and a
   directory for temporary data (HOME:T/).

   The "System" home directory (SYS:Home/System/) is used by the AROS system
   itself, mainly for system defaults and system "global" settings (such as
   user passwords). If an application fails to find some given settings in the
   HOME: directory, the System directory should be searched for the system
   default settings.

3. The "HOME:" assign will be given by the AROS Login Manager, once the user
   has identified him/herself. When AROS is being installed on a new system,
   the Installer will ask the user whether he'd like AROS Login Manager to
   show up or not. Although the Login Manager will launch a GUI by default,
   this can be overridden by passing USER and PASSWORD ReadArgs() style
   arguments. In this case, the user will have exclusive access to the AROS
   system.

   When the user logs out, the HOME: directory assign will reset to
   SYS:Home/System/.

   A long term goal should be dos.library support for multiple assign targets
   in case AROS will support several users logged on the same system
   simultaneously (e.g. thru ssh/nfs/samba access).

4. Of course, this system needs to have filesystem support for security
   reasons. Users should not be forced to share anything they don't want to
   with other users. We feel filesystem support is another issue right now
   however, which is why we won't go into any details in this document.

