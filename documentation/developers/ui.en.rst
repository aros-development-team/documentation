==========================
User Interface Style Guide
==========================

:Authors:   Adam Chodorowski
:Copyright: Copyright © 2003-2025, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

.. FIXME: Introduction here...

.. Warning::

   This document is not finished! If you want to help rectify this, please
   contact us.

.. Contents::


-------
Windows
-------

Preferences
===========

Preference windows are similar in appearance to dialog windows, in that they
have a row of buttons along the bottom and no close gadget in the title bar.

.. Figure:: /{{ devdocpath }}ui/images/windows-prefs-titlebar.png

   Example of a preferences window title bar. Notice the absence of the close
   gadget.

.. Topic:: Rationale

   There is no close gadget because its semantics would be ambiguous. In
   other words, it would not be clear to the user exactly what the side-effect
   of closing the window is. Will it save the preferences or will it abandon
   all changes?

The following set of buttons are always present, positioned horizontally along
the bottom of the window (in this order, from left to right):

    Test
        Applies the settings in the window so that they take effect
        immediately. Does not close the window.

    Revert
        Restores the settings in the window to the state they were in when the
        window was opened and applies them immediately. Does not close the
        window.

    Save
        Applies the settings in the window immediately and saves them
        permanently [#]_. Closes the window. If it is not possible to save the
        settings permanently (e.g. if the disk where they would be saved is
        read-only) this button is ghosted.

    Use
        Applies the settings in the window immediately and saves them
        temporarily (only for this session) [#]_. Closes the window.

    Cancel
        Restores the settings in the window to the state they were in when the
        window was opened and applies them immediately. Closes the window.

.. Topic:: Layout

   The buttons are divided into two groups with Test and Revert in one and
   Save, Use and Cancel in the other, where the former group is aligned to the
   left, and the latter is aligned to the right. There is a space between the
   two groups to separate them visually [#]_. All buttons have the same width,
   which should be as small as possible (when resizing, only the space between
   the groups should grow and not the buttons).

.. Figure:: /{{ devdocpath }}ui/images/windows-prefs-buttons.png

   Example of the row of buttons in a preferences window.

.. [#] Saves both to ``ENVARC:`` and ``ENV:``.
.. [#] Saves only to ``ENV:``.
.. [#] Notice that all buttons in the left group do not close the window,
       while all buttons in the right group do close the window.

