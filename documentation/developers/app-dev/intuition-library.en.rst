============================================================
AROS Application Development Manual -- The Intuition Library
============================================================

:Authors:   Staf Verhaegen, Sebastian Rittau, Stefan Rieken, Matt Parsons,
            Adam Chodorowski, Fabio Alemagna, Matthias Rustler
:Copyright: Copyright © 1995-2008, The AROS Development Team
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


Windows
-------

============================= ================================================
`OpenWindowTagList()`_        Open a window
`OpenWindow()`_               Open a window (deprecated)
`CloseWindow()`_              Close a window
`BeginRefresh()`_             Initializes optimized refreshing
`EndRefresh()`_               Finishes refreshing
`RefreshWindowFrame()`_       Redraw window borders
`ActivateWindow()`_           Make a window active
`SizeWindow()`_               Change size of a window
`MoveWindow()`_               Move a window
`ChangeWindowBox()`_          Change size and position of a window
`WindowLimits()`_             Change the width and height limits of a window
`WindowToBack()`_             Move a window behind other windows
`WindowToFront()`_            Make a window the frontmost one
`MoveWindowInFrontOf()`_      Move window in front of a given window
`ZipWindow()`_                Change window to alternative size and position
`SetWindowTitles()`_          Set title string of a window
`SetWindowPointerA()`_        Change pointer state
`ShowWindow()`_               Make a hidden window visible
`HideWindow()`_               Make a window invisible
`IsWindowVisible()`_          Check if window is visible
`ScrollWindowRaster()`_       Scrolls the content of rectangle within a window
============================= ================================================



Requesters
----------

Requesters are a special kind of windows_. They either confront the user with
some information or request some information. Requesters always interrupt the
user's normal work flow, so they should only be used either to inform him of
some important event or to request information without which the application
can't continue. This kind of requester is called a modal requester.

Examples of informational requesters are requesters that report errors (like
failing to open a file) or about requesters which show information about the
program, when requested by the user.

Like the name indicates, requesters can also request information from the
user, like a filename (using file-requesters), his name or a simple yes/no
decision ("Really quit application?").

Requesters should only be used if an application can't go on without the
intended interaction with the user, be it acknowledgement that the user has
learned a certain fact, be it that the user provides a necessary piece of
information, or be it that displaying the requester is the current task the
user selected for the program. Therefore, most requesters will block the
application. That is to say: An application usually will not accept any input,
except that in the requester. An exception are requesters that are explicitly
requested by the user, like most file-requesters or about-requesters.
Normally, these do not block the application.


Easy Requesters
"""""""""""""""

The so-called easy requesters are simple requesters. They can be used to
either provide information or to ask for a choice. The number of choices is
limited to 256, but it is generally a bad idea to have more than about five
different choices. You also have to take into account that the width of the
screen is limited.

FIXME: EasyRequestArgs(), BuildEasyRequest()


Complex Requesters
""""""""""""""""""

FIXME

============================= ================================================
`Request()`_                  Add requester to specified window and display it
`EndRequest()`_               Remove a requester from the specified window
`EasyRequestArgs()`_          Open and handle requester
`BuildEasyRequestArgs()`_     Open a requester
`SysReqHandler()`_            Handle EasyRequests
`AutoRequest()`_              Build and handle simple requesters
`BuildSysRequest()`_          Build and display a system requester
`FreeSysRequest()`_           Free a requester.
`SetDMRequest()`_             Set up requester for menu button double click
`ClearDMRequest()`_           Detach the DMRequest from the window
`DisplayAlert()`_             Bring up an alert with the given message
`TimedDisplayAlert()`_        Display an alert with automatic time-out
`DisplayBeep()`_              Flashes background of screen as signal
============================= ================================================



Screens
-------

============================= ================================================
`OpenScreenTagList()`_        Open a screen
`OpenScreen()`_               Open a screen (obsolete)
`CloseScreen()`_              Close a screen
`MoveScreen()`_               Move a screen
`ScreenPosition()`_           Move a screen
`ScreenToBack()`_             Move a screen behind all other screens
`ScreenToFront()`_            Move a screen in front of all other screens
`ScreenDepth()`_              Move the specified screen to the front or back
`ShowTitle()`_                Show screen title in front of backdrop windows
`GetScreenDrawInfo()`_        Return pointer to a screens struct DrawInfo
`FreeScreenDrawInfo()`_       Free data obtained with `GetScreenDrawInfo()`_
`GetScreenData()`_            Obsolete method of getting info about a screen
`QueryOverscan()`_            Query overscan dimensions
`LockPubScreen()`_            Lock a public screen
`UnlockPubScreen()`_          Release public screen
`NextPubScreen()`_            Get the next public screen in the system
`PubScreenStatus()`_          Change the status flags for a public screen
`LockPubScreenList()`_        Arbitrates access to system public screen list
`UnlockPubScreenList()`_      Release lock made by `LockPubScreenList()`_
`SetDefaultPubScreen()`_      Specifies the default public screen
`SetPubScreenModes()`_        Specify global intuition public screen handling
`GetDefaultPubScreen()`_      Returns name of current default public screen
`StartScreenNotifyTagList()`_ Add Notifications to Intuition
`EndScreenNotify()`_          Remove a Screen Notifications from Intuition
`OpenWorkBench()`_            Attempt to open the Workbench screen
`CloseWorkBench()`_           Attempt to close the Workbench screen
`WBenchToBack()`_             Bring the WorkBench behind all other screens
`WBenchToFront()`_            Make the WorkBench screen the frontmost
`ViewAddress()`_              Return address of the Intuition View structure
`ViewPortAddress()`_          Return the address of the viewport of a window
`MakeScreen()`_               Create viewport of the screen
`RethinkDisplay()`_           Redisplay the whole Intuition display
`RemakeDisplay()`_            Remake the entire Intuition display
`AllocScreenBuffer()`_        Allocate a ScreenBuffer multiple buffering
`ChangeScreenBuffer()`_       Change current buffer
`FreeScreenBuffer()`_         Free ScreenBuffer from `AllocScreenBuffer()`_
============================= ================================================



Gadgets
-------

============================= ================================================
`AddGadget()`_                Add a single gadget to a window
`AddGList()`_                 Add some gadgets to a window
`RemoveGadget()`_             Remove gadget from a window's list of gadgets
`RemoveGList()`_              Remove sublist of gadgets from a window
`RefreshGList()`_             Refresh (draw anew) specified number of gadgets
`RefreshGadgets()`_           Refresh all gadgets starting at specified gadget
`ModifyProp()`_               Change the values of a proportional gadget
`NewModifyProp()`_            Change the values of a proportional gadget
`OffGadget()`_                Disable a gadget
`OnGadget()`_                 Enable a gadget
`ActivateGadget()`_           Activate the specified gadget
`SetEditHook()`_              Set the string editing hook of string gadgets
`GadgetMouse()`_              Determine current mouse position relative to
                              the upper-left corner of a custom gadget
`HelpControl()`_              Turn Gadget-Help on or off for a window
============================= ================================================



Menus
-----

============================= ================================================
`SetMenuStrip()`_             Add a menu strip to the Window
`ClearMenuStrip()`_           Detach menu strip from a window
`ResetMenuStrip()`_           Refresh menu strip, after status changes
`ItemAddress()`_              Return the address of the menu item
`OffMenu()`_                  Disable a whole menu, an item, or a sub-item
`OnMenu()`_                   Enable a whole menu, an item, or a sub-item
`LendMenus()`_                Lend the menus of one window to another
============================= ================================================



Images/Line Drawing
-------------------

============================= ================================================
`DrawBorder()`_               Draw one or more borders in a specified RastPort
`DrawImage()`_                Draw an image
`DrawImageState()`_           Render an image in a certain state
`EraseImage()`_               Erase an image on the screen
`PrintIText()`_               Render an IntuiText in the specified RastPort
`IntuiTextLength()`_          Measure the length of an IntuiText
`GetScreenDrawInfo()`_        Return a pointer to struct DrawInfo of a screen
`FreeScreenDrawInfo()`_       Release data from `GetScreenDrawInfo()`_
`PointInImage()`_             Check whether a point is inside an image
============================= ================================================



Input/Output
------------

============================= ================================================
`ModifyIDCMP()`_              Modify the state of your window's IDCMP port
============================= ================================================



Mouse/Keyboard
--------------

============================= ================================================
`DoubleClick()`_              Check if two times are in double-click interval
`SetPointer()`_               Change shape of the mouse pointer for a window
`ClearPointer()`_
`SetMouseQueue()`_
`ReportMouse()`_
============================= ================================================



BOOPSI
------

============================= ================================================
`NewObjectA()`_               Create BOOPSI object
`DisposeObject()`_            Delete BOOPSI object from `NewObjectA()`_
`SetAttrsA()`_                Change several attributes of an object
`SetGadgetAttrsA()`_          Change several attributes of a gadget
`GetAttr()`_                  Ask an object for the value of an attribute
`MakeClass()`_                Create a new public BOOPSI class
`FreeClass()`_                Free a class from `MakeClass()`_
`AddClass()`_                 Make a class publicly available
`RemoveClass()`_              Make a public class inaccessible
`ObtainGIRPort()`_            Get a rastport for gadget imagery
`ReleaseGIRPort()`_           Release a RastPort from `ObtainGIRPort()`_
`DoGadgetMethodA()`_          Invoke a BOOPSI method on an object
`NextObject()`_               Iterate through a list of BOOPSI objects
============================= ================================================



Miscellaneous
-------------

============================= ================================================
`AllocRemember()`_            Allocate memory and remember it in Remember-List
`FreeRemember()`_             Free memory allocated by `AllocRemember()`_
`LockIBase()`_                Lock Intuition
`UnlockIBase()`_              Release a lock obtained with `LockIBase()`_
`CurrentTime()`_              Copy the current time into the argument pointers
`ChangeDecoration()`_         Set up a new screen, window, or menu decorator
`SetPrefs()`_                 Set the current Preferences structure
`GetPrefs()`_                 Get a copy of the current Preferences structure
`GetDefPrefs()`_              Get a copy of the default Preferences structure
============================= ================================================


.. _ActivateGadget(): ../autodocs/intuition#activategadget
.. _ActivateWindow(): ../autodocs/intuition#activatewindow
.. _AddClass(): ../autodocs/intuition#addclass
.. _AddGList(): ../autodocs/intuition#addglist
.. _AddGadget(): ../autodocs/intuition#addgadget
.. _AllocIntuiMessage(): ../autodocs/intuition#allocintuimessage
.. _AllocRemember(): ../autodocs/intuition#allocremember
.. _AllocScreenBuffer(): ../autodocs/intuition#allocscreenbuffer
.. _AlohaWorkbench(): ../autodocs/intuition#alohaworkbench
.. _AutoRequest(): ../autodocs/intuition#autorequest
.. _BeginRefresh(): ../autodocs/intuition#beginrefresh
.. _BuildEasyRequestArgs(): ../autodocs/intuition#buildeasyrequestargs
.. _BuildSysRequest(): ../autodocs/intuition#buildsysrequest
.. _ChangeDecoration(): ../autodocs/intuition#changedecoration
.. _ChangeScreenBuffer(): ../autodocs/intuition#changescreenbuffer
.. _ChangeWindowBox(): ../autodocs/intuition#changewindowbox
.. _ChangeWindowShape(): ../autodocs/intuition#changewindowshape
.. _ClearDMRequest(): ../autodocs/intuition#cleardmrequest
.. _ClearMenuStrip(): ../autodocs/intuition#clearmenustrip
.. _ClearPointer(): ../autodocs/intuition#clearpointer
.. _CloseScreen(): ../autodocs/intuition#closescreen
.. _CloseWindow(): ../autodocs/intuition#closewindow
.. _CloseWorkBench(): ../autodocs/intuition#closeworkbench
.. _CurrentTime(): ../autodocs/intuition#currenttime
.. _DisplayAlert(): ../autodocs/intuition#displayalert
.. _DisplayBeep(): ../autodocs/intuition#displaybeep
.. _DisposeObject(): ../autodocs/intuition#disposeobject
.. _DoGadgetMethodA(): ../autodocs/intuition#dogadgetmethoda
.. _DoNotify(): ../autodocs/intuition#donotify
.. _DoubleClick(): ../autodocs/intuition#doubleclick
.. _DrawBorder(): ../autodocs/intuition#drawborder
.. _DrawImage(): ../autodocs/intuition#drawimage
.. _DrawImageState(): ../autodocs/intuition#drawimagestate
.. _EasyRequestArgs(): ../autodocs/intuition#easyrequestargs
.. _EndRefresh(): ../autodocs/intuition#endrefresh
.. _EndRequest(): ../autodocs/intuition#endrequest
.. _EndScreenNotify(): ../autodocs/intuition#endscreennotify
.. _EraseImage(): ../autodocs/intuition#eraseimage
.. _FindClass(): ../autodocs/intuition#findclass
.. _FreeClass(): ../autodocs/intuition#freeclass
.. _FreeICData(): ../autodocs/intuition#freeicdata
.. _FreeIntuiMessage(): ../autodocs/intuition#freeintuimessage
.. _FreeRemember(): ../autodocs/intuition#freeremember
.. _FreeScreenBuffer(): ../autodocs/intuition#freescreenbuffer
.. _FreeScreenDrawInfo(): ../autodocs/intuition#freescreendrawinfo
.. _FreeSysRequest(): ../autodocs/intuition#freesysrequest
.. _GadgetMouse(): ../autodocs/intuition#gadgetmouse
.. _GetAttr(): ../autodocs/intuition#getattr
.. _GetDefPrefs(): ../autodocs/intuition#getdefprefs
.. _GetDefaultPubScreen(): ../autodocs/intuition#getdefaultpubscreen
.. _GetPrefs(): ../autodocs/intuition#getprefs
.. _GetScreenData(): ../autodocs/intuition#getscreendata
.. _GetScreenDrawInfo(): ../autodocs/intuition#getscreendrawinfo
.. _HelpControl(): ../autodocs/intuition#helpcontrol
.. _HideWindow(): ../autodocs/intuition#hidewindow
.. _InitRequester(): ../autodocs/intuition#initrequester
.. _IntuiTextLength(): ../autodocs/intuition#intuitextlength
.. _IsWindowVisible(): ../autodocs/intuition#iswindowvisible
.. _ItemAddress(): ../autodocs/intuition#itemaddress
.. _LateIntuiInit(): ../autodocs/intuition#lateintuiinit
.. _LendMenus(): ../autodocs/intuition#lendmenus
.. _LockIBase(): ../autodocs/intuition#lockibase
.. _LockPubScreen(): ../autodocs/intuition#lockpubscreen
.. _LockPubScreenList(): ../autodocs/intuition#lockpubscreenlist
.. _MakeClass(): ../autodocs/intuition#makeclass
.. _MakeScreen(): ../autodocs/intuition#makescreen
.. _ModifyIDCMP(): ../autodocs/intuition#modifyidcmp
.. _ModifyProp(): ../autodocs/intuition#modifyprop
.. _MoveScreen(): ../autodocs/intuition#movescreen
.. _MoveWindow(): ../autodocs/intuition#movewindow
.. _MoveWindowInFrontOf(): ../autodocs/intuition#movewindowinfrontof
.. _NewModifyProp(): ../autodocs/intuition#newmodifyprop
.. _NewObjectA(): ../autodocs/intuition#newobjecta
.. _NextObject(): ../autodocs/intuition#nextobject
.. _NextPubScreen(): ../autodocs/intuition#nextpubscreen
.. _ObtainGIRPort(): ../autodocs/intuition#obtaingirport
.. _OffGadget(): ../autodocs/intuition#offgadget
.. _OffMenu(): ../autodocs/intuition#offmenu
.. _OnGadget(): ../autodocs/intuition#ongadget
.. _OnMenu(): ../autodocs/intuition#onmenu
.. _OpenScreen(): ../autodocs/intuition#openscreen
.. _OpenScreenTagList(): ../autodocs/intuition#openscreentaglist
.. _OpenWindow(): ../autodocs/intuition#openwindow
.. _OpenWindowTagList(): ../autodocs/intuition#openwindowtaglist
.. _OpenWorkBench(): ../autodocs/intuition#openworkbench
.. _PointInImage(): ../autodocs/intuition#pointinimage
.. _PrintIText(): ../autodocs/intuition#printitext
.. _PubScreenStatus(): ../autodocs/intuition#pubscreenstatus
.. _QueryOverscan(): ../autodocs/intuition#queryoverscan
.. _RefreshGList(): ../autodocs/intuition#refreshglist
.. _RefreshGadgets(): ../autodocs/intuition#refreshgadgets
.. _RefreshWindowFrame(): ../autodocs/intuition#refreshwindowframe
.. _ReleaseGIRPort(): ../autodocs/intuition#releasegirport
.. _RemakeDisplay(): ../autodocs/intuition#remakedisplay
.. _RemoveClass(): ../autodocs/intuition#removeclass
.. _RemoveGList(): ../autodocs/intuition#removeglist
.. _RemoveGadget(): ../autodocs/intuition#removegadget
.. _ReportMouse(): ../autodocs/intuition#reportmouse
.. _Request(): ../autodocs/intuition#request
.. _ResetMenuStrip(): ../autodocs/intuition#resetmenustrip
.. _RethinkDisplay(): ../autodocs/intuition#rethinkdisplay
.. _ScreenDepth(): ../autodocs/intuition#screendepth
.. _ScreenPosition(): ../autodocs/intuition#screenposition
.. _ScreenToBack(): ../autodocs/intuition#screentoback
.. _ScreenToFront(): ../autodocs/intuition#screentofront
.. _ScrollWindowRaster(): ../autodocs/intuition#scrollwindowraster
.. _ScrollWindowRasterNoFill(): ../autodocs/intuition#scrollwindowrasternofill
.. _SendIntuiMessage(): ../autodocs/intuition#sendintuimessage
.. _SetAttrsA(): ../autodocs/intuition#setattrsa
.. _SetDMRequest(): ../autodocs/intuition#setdmrequest
.. _SetDefaultPubScreen(): ../autodocs/intuition#setdefaultpubscreen
.. _SetDefaultScreenFont(): ../autodocs/intuition#setdefaultscreenfont
.. _SetEditHook(): ../autodocs/intuition#setedithook
.. _SetGadgetAttrsA(): ../autodocs/intuition#setgadgetattrsa
.. _SetIPrefs(): ../autodocs/intuition#setiprefs
.. _SetMenuStrip(): ../autodocs/intuition#setmenustrip
.. _SetMouseQueue(): ../autodocs/intuition#setmousequeue
.. _SetPointer(): ../autodocs/intuition#setpointer
.. _SetPointerBounds(): ../autodocs/intuition#setpointerbounds
.. _SetPrefs(): ../autodocs/intuition#setprefs
.. _SetPubScreenModes(): ../autodocs/intuition#setpubscreenmodes
.. _SetWindowPointerA(): ../autodocs/intuition#setwindowpointera
.. _SetWindowTitles(): ../autodocs/intuition#setwindowtitles
.. _ShowTitle(): ../autodocs/intuition#showtitle
.. _ShowWindow(): ../autodocs/intuition#showwindow
.. _SizeWindow(): ../autodocs/intuition#sizewindow
.. _StartScreenNotifyTagList(): ../autodocs/intuition#startscreennotifytaglist
.. _SysReqHandler(): ../autodocs/intuition#sysreqhandler
.. _TimedDisplayAlert(): ../autodocs/intuition#timeddisplayalert
.. _UnlockIBase(): ../autodocs/intuition#unlockibase
.. _UnlockPubScreen(): ../autodocs/intuition#unlockpubscreen
.. _UnlockPubScreenList(): ../autodocs/intuition#unlockpubscreenlist
.. _ViewAddress(): ../autodocs/intuition#viewaddress
.. _ViewPortAddress(): ../autodocs/intuition#viewportaddress
.. _WBenchToBack(): ../autodocs/intuition#wbenchtoback
.. _WBenchToFront(): ../autodocs/intuition#wbenchtofront
.. _WindowAction(): ../autodocs/intuition#windowaction
.. _WindowLimits(): ../autodocs/intuition#windowlimits
.. _WindowToBack(): ../autodocs/intuition#windowtoback
.. _WindowToFront(): ../autodocs/intuition#windowtofront
.. _ZipWindow(): ../autodocs/intuition#zipwindow
