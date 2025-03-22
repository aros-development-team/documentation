=========
intuition
=========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`ActivateGadget()`_                     `ActivateWindow()`_                     `AddClass()`_                           `AddGadget()`_                          
`AddGList()`_                           `AllocRemember()`_                      `AllocScreenBuffer()`_                  `AlohaWorkbench()`_                     
`AutoRequest()`_                        `BeginRefresh()`_                       `BuildEasyRequestArgs()`_               `BuildSysRequest()`_                    
`ChangeDecoration()`_                   `ChangeScreenBuffer()`_                 `ChangeWindowBox()`_                    `ChangeWindowShape()`_                  
`ClearDMRequest()`_                     `ClearMenuStrip()`_                     `ClearPointer()`_                       `CloseScreen()`_                        
`CloseWindow()`_                        `CloseWorkBench()`_                     `CurrentTime()`_                        `DisplayAlert()`_                       
`DisplayBeep()`_                        `DisposeObject()`_                      `DoGadgetMethodA()`_                    `DoubleClick()`_                        
`DrawBorder()`_                         `DrawImage()`_                          `DrawImageState()`_                     `DumpIntuiState()`_                     
`EasyRequestArgs()`_                    `EndRefresh()`_                         `EndRequest()`_                         `EndScreenNotify()`_                    
`EraseImage()`_                         `FreeClass()`_                          `FreeMonitorList()`_                    `FreeRemember()`_                       
`FreeScreenBuffer()`_                   `FreeScreenDrawInfo()`_                 `FreeSysRequest()`_                     `GadgetMouse()`_                        
`GetAttr()`_                            `GetDefaultPubScreen()`_                `GetDefPrefs()`_                        `GetDrawInfoAttr()`_                    
`GetMonitorList()`_                     `GetPrefs()`_                           `GetScreenData()`_                      `GetScreenDrawInfo()`_                  
`HelpControl()`_                        `HideWindow()`_                         `InitRequester()`_                      `IntuiTextLength()`_                    
`IsWindowVisible()`_                    `ItemAddress()`_                        `LendMenus()`_                          `LockIBase()`_                          
`lockPubClass()`_                       `LockPubScreen()`_                      `LockPubScreenList()`_                  `MakeClass()`_                          
`MakeScreen()`_                         `ModifyIDCMP()`_                        `ModifyProp()`_                         `MoveScreen()`_                         
`MoveWindow()`_                         `MoveWindowInFrontOf()`_                `NewModifyProp()`_                      `NewObjectA()`_                         
`NextObject()`_                         `NextPubScreen()`_                      `ObtainGIRPort()`_                      `OffGadget()`_                          
`OffMenu()`_                            `OnGadget()`_                           `OnMenu()`_                             `OpenScreen()`_                         
`OpenScreenTagList()`_                  `OpenWindow()`_                         `OpenWindowTagList()`_                  `OpenWorkBench()`_                      
`PointInImage()`_                       `PrintIText()`_                         `PubScreenStatus()`_                    `QueryOverscan()`_                      
`RefreshGadgets()`_                     `RefreshGList()`_                       `RefreshWindowFrame()`_                 `ReleaseGIRPort()`_                     
`RemakeDisplay()`_                      `RemoveClass()`_                        `RemoveGadget()`_                       `RemoveGList()`_                        
`ReportMouse()`_                        `Request()`_                            `ResetMenuStrip()`_                     `RethinkDisplay()`_                     
`ScreenDepth()`_                        `ScreenPosition()`_                     `ScreenToBack()`_                       `ScreenToFront()`_                      
`ScrollWindowRaster()`_                 `ScrollWindowRasterNoFill()`_           `SetAttrsA()`_                          `SetDefaultPubScreen()`_                
`SetDMRequest()`_                       `SetEditHook()`_                        `SetGadgetAttrsA()`_                    `SetIPrefs()`_                          
`SetMenuStrip()`_                       `SetMouseQueue()`_                      `SetPointer()`_                         `SetPrefs()`_                           
`SetPubScreenModes()`_                  `SetWindowPointerA()`_                  `SetWindowTitles()`_                    `ShowTitle()`_                          
`ShowWindow()`_                         `SizeWindow()`_                         `StartScreenNotifyTagList()`_           `SysReqHandler()`_                      
`TimedDisplayAlert()`_                  `UnlockIBase()`_                        `unlockPubClass()`_                     `UnlockPubScreen()`_                    
`UnlockPubScreenList()`_                `ViewAddress()`_                        `ViewPortAddress()`_                    `WBenchToBack()`_                       
`WBenchToFront()`_                      `WindowAction()`_                       `WindowLimits()`_                       `WindowToBack()`_                       
`WindowToFront()`_                      `ZipWindow()`_                          
======================================= ======================================= ======================================= ======================================= 

-----------

ActivateGadget()
================

Synopsis
~~~~~~~~
::

 BOOL ActivateGadget(
          struct Gadget * gadget,
          struct Window * window,
          struct Requester * requester );

Function
~~~~~~~~
::

     Activates the specified gadget.


Inputs
~~~~~~
::

     gadget - The gadget to activate
     window - The window which contains the gadget
     requester - The requester which contains the gadget or
         NULL if it is not a requester gadget



----------

ActivateWindow()
================

Synopsis
~~~~~~~~
::

 void ActivateWindow(
          struct Window * window );

Function
~~~~~~~~
::

     Activates the specified window. The window gets the focus
     and all further input is sent to that window. If the window
     requested it, it will get a IDCMP_ACTIVEWINDOW message.


Inputs
~~~~~~
::

     window - The window to activate


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     If the user has an autopointer tool (sunmouse), the call will
     succeed, but the tool will deactivate the window right after
     this function has activated it. It is not a good idea to try to
     prevent this by waiting for IDCMP_INACTIVEWINDOW and activating
     the window again since that will produce an annoying flicker and
     it will slow down the computer a lot.



See also
~~~~~~~~

`ModifyIDCMP()`_ `OpenWindow()`_ `CloseWindow()`_ 

----------

AddClass()
==========

Synopsis
~~~~~~~~
::

 void AddClass(
          struct IClass * classPtr );

Function
~~~~~~~~
::

     Makes a class publically usable. This function must not be called
     before MakeClass().


Inputs
~~~~~~
::

     class - The result of MakeClass()


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     Do not use this function for private classes.


Bugs
~~~~
::

     There is no protection against creating multiple classes with
     the same name yet. The operation of the system is undefined
     in this case.



See also
~~~~~~~~

`MakeClass()`_ `FreeClass()`_ `RemoveClass()`_ "Basic Object-Oriented Programming System for Intuition" and "boopsi Class Reference" 

----------

AddGadget()
===========

Synopsis
~~~~~~~~
::

 UWORD AddGadget(
          struct Window * window,
          struct Gadget * gadget,
          ULONG position );

Function
~~~~~~~~
::

     Adds a single gadget to a window.


Inputs
~~~~~~
::

     window - Add gadget to this window
     gadget - Add this gadget
     position - The position to add the gadget in the list of
         gadgets already in the window. Use 0 to insert the
         gadget before all others or ~0 to append it to the
         list.


Result
~~~~~~
::

     The position where the gadget was really inserted.


Notes
~~~~~
::

     This just adds the gadget to the list. It will not be visible
     until you refresh the window.



----------

AddGList()
==========

Synopsis
~~~~~~~~
::

 UWORD AddGList(
          struct Window    * window,
          struct Gadget    * gadget,
          ULONG position,
          LONG numGad,
          struct Requester * requester );

Function
~~~~~~~~
::

     Add some gadgets to a window.


Inputs
~~~~~~
::

     window - Add gadgets to this window
     gadget - This is the list of gadgets to add
     position - Where to insert the gadgets in the list of gadgets
         already in the window. Use 0 to insert the gadgets
         before all others in the window or ~0 to append them.
     numGad - How many gadgets of the list should be added.
         Use -1 to add all gadgets in the list.
     requester - Pointer to the requester structure if the window is
         a requester.


Result
~~~~~~
::

     The actual position where the gadgets were inserted.


Notes
~~~~~
::

     The gadgets will just be added. To make them visible, you must
     refresh the window or the gadgets.



See also
~~~~~~~~

`RefreshGadgets()`_ `RefreshGList()`_ 

----------

AllocRemember()
===============

Synopsis
~~~~~~~~
::

 APTR AllocRemember(
          struct Remember ** rememberKey,
          ULONG size,
          ULONG flags );

Function
~~~~~~~~
::

     Allocate some memory and remember it in the Remember-List.


Inputs
~~~~~~
::

     rememberKey - Store information in this list. Must be NULL for
                   initial call.
     size - How many bytes to allocate
     flags - Attributes (see AllocMem())


Result
~~~~~~
::

     Pointer to the allocated memory or NULL.


Example
~~~~~~~
::

     struct Remember *remkey;
     remkey = NULL;
     AllocRemember(&remkey, BUFSIZE, MEMF_ANY);
     FreeRemember(&remkey, TRUE);



----------

AllocScreenBuffer()
===================

Synopsis
~~~~~~~~
::

 struct ScreenBuffer * AllocScreenBuffer(
          struct Screen * screen,
          struct BitMap * bitmap,
          ULONG flags );

Function
~~~~~~~~
::

     Allocate a ScreenBuffer (and BitMap) for double or multiple
     buffering in Intuition screens. Use this function to obtain a
     ScreenBuffer for the screen's initial BitMap and for all other
     BitMaps you want to swap in.

     This function also allocates a DBufInfo from graphics.library
     The returned ScreenBuffer contains a pointer to that DBufInfo.
     See graphics.library/AllocDBufInfo() for more information on
     how to use this struct to obtain info when it is safe to render
     into an old buffer and when to switch.


Inputs
~~~~~~
::

     screen - Screen to double-buffer
     bitmap - You may pre-allocate a BitMap for CUSTOMBITMAP screens,
         and pass the pointer to get a ScreenBuffer referring to it.
         If you specify NULL, intuition will allocate the BitMap for
         you. For non-CUSTOMBITMAP screens this parameter must be NULL.
     flags - A combination of these flags:
         SB_SCREEN_BITMAP for non-CUSTOMBITMAP screens to get a
         ScreenBuffer referring to the screen's actual BitMap
         (For CUSTOMBITMAP screens just pass the BitMap you used for
         OpenScreen() as the bitmap parameter)
         SB_COPY_BITMAP to copy the screen's BitMap intto the
         ScreenBuffer's BitMap. Use this to get intuition rendered
         stuff into your bitmap (such as menu-bars or gadgets).
         May be omitted if the screen has no intuition rendered stuff,
         as well as for allocating a ScreenBuffer for the screen's
         initial BitMap.


Result
~~~~~~
::

     Pointer to the allocated ScreenBuffer or NULL if function failed.


Notes
~~~~~
::

     You may render into the resulting BitMap.
     Use the sb_DBufInfo field to access graphics.library's ViewPort
     buffering features to e.g check if it is safe to reuse the previous
     BitMap. Otherwise you risk to write into the on-screen BitMap and
     damage menu or gadget rendering.



See also
~~~~~~~~

`FreeScreenBuffer()`_ `ChangeScreenBuffer()`_ 

----------

AlohaWorkbench()
================

Synopsis
~~~~~~~~
::

 void AlohaWorkbench(
          struct MsgPort * wbmsgport );

Function
~~~~~~~~
::

     The WorkBench program wants to call this function to signal
     Intuition that it is active or shutting down.
     Intuition then uses the MsgPort to tell the WorkBench to open or
     close its windows if the user called OpenWorkbench() or
     CloseWorkbench().

     When the MsgPort is non-NULL Intuition will send IntuiMessages to
     it with the Class field set to WBENCHMESSAGE and Code field set to
     either WBENCHOPEN or WBENCHCLOSE. Intuition assumes that when the
     WorkBench task replies this messages, it already has opened/closed
     its windows.


Inputs
~~~~~~
::

     wbmsgport - The MsgPort of the (initialized) WorkBench task or
                 NULL if the task is shutting down.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function is obsolete and should not be used directly by the
     Workbench Application. Use workbench.library/RegisterWorkbench()
     instead!



See also
~~~~~~~~

`workbench.library/RegisterWorkbench() <./workbench#registerworkbench>`_ 

----------

AutoRequest()
=============

Synopsis
~~~~~~~~
::

 BOOL AutoRequest(
          struct Window    * window,
          struct IntuiText * body,
          struct IntuiText * posText,
          struct IntuiText * negText,
          ULONG pFlag,
          ULONG nFlag,
          ULONG width,
          ULONG height );


----------

BeginRefresh()
==============

Synopsis
~~~~~~~~
::

 void BeginRefresh(
          struct Window * window );

Function
~~~~~~~~
::

     Initializes optimized refreshing. It restricts redrawing to areas which
     need refreshing after a window has been moved or has changed size.


Inputs
~~~~~~
::

     window - window which needs refreshing


Example
~~~~~~~
::

     Somewhere in your window's event handling loop:

     case IDCMP_REFRESHWINDOW:
         BeginRefresh(mywindow);
         EndRefresh(mywindow, TRUE);
         break;


Notes
~~~~~
::

     Only simple graphics.library functions are allowed between
     BeginRefresh() and EndRefresh().

     BeginRefresh()/EndRefresh() should always be called when an
     IDCMP_REFRESHWINDOW message happens.



See also
~~~~~~~~

`EndRefresh()`_ 

----------

BuildEasyRequestArgs()
======================

Synopsis
~~~~~~~~
::

 struct Window * BuildEasyRequestArgs(
          struct Window     * RefWindow,
          struct EasyStruct * easyStruct,
          ULONG IDCMP,
          RAWARG Args );
 
 struct Window * BuildEasyRequest(
          struct Window     * RefWindow,
          struct EasyStruct * easyStruct,
          ULONG IDCMP,
          TAG tag, ... );

Function
~~~~~~~~
::

     Opens a requester, which provides one or more choices. The control is
     returned to the application after the requester was opened. It is
     handled by subsequent calls to SysReqHandler() and closed by calling
     FreeSysRequest().


Inputs
~~~~~~
::

     RefWindow - A reference window. If NULL, the requester opens on
                 the default public screen.
     easyStruct - The EasyStruct structure (<intuition/intuition.h>),
                  which describes the requester.
     IDCMP - IDCMP flags, which should satisfy the requester, too. This is
             useful for requesters, which want to listen to disk changes,
             etc. Note that this is not a pointer to the flags as in
             EasyRequestArgs().
     Args - The arguments for easyStruct->es_TextFormat.


Result
~~~~~~
::

     Returns a pointer to the requester. Use this pointer only for calls
     to SysReqHandler() and FreeSysRequest().



See also
~~~~~~~~

`EasyRequestArgs()`_ `SysReqHandler()`_ `FreeSysRequest()`_ 

----------

BuildSysRequest()
=================

Synopsis
~~~~~~~~
::

 struct Window * BuildSysRequest(
          struct Window * window,
          struct IntuiText * bodytext,
          struct IntuiText * postext,
          struct IntuiText * negtext,
          ULONG IDCMPFlags,
          WORD width,
          WORD height );

Function
~~~~~~~~
::

     Build and display a system requester.


Inputs
~~~~~~
::

     window - The window in which the requester will appear
     bodytext - The Text to be shown in the body of the requester
     postext - The Text to be shown in the positive choice gadget
     negtext - The Text to be shown in the negative choice gadget
     IDCMPFlags - The IDCMP Flags for this requester
     width, height - The dimensions of the requester



See also
~~~~~~~~

`FreeSysRequest()`_ `DisplayAlert()`_ `ModifyIDCMP()`_ `exec.library/Wait() <./exec#wait>`_ `Request()`_ `AutoRequest()`_ `EasyRequestArgs()`_ `BuildEasyRequestArgs()`_ 

----------

ChangeDecoration()
==================

Synopsis
~~~~~~~~
::

 void ChangeDecoration(
          ULONG ID,
          struct NewDecorator * nd );

Function
~~~~~~~~
::

     Setup a new decorator for intuition windows, screens or menus.


Inputs
~~~~~~
::

     ID - identifier for decorations, see screens.h
     nd - an ID dependent NewDecorator structure


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The function fails if screens are open; use ChangeIntuition() to
     notify applications that the UI will be changed.

     This function is private and AROS-specific. Do not use it in regular
     applications.



See also
~~~~~~~~

`intuition/screens.h </documentation/developers/headerfiles/intuition/screens.h>`_ 

----------

ChangeScreenBuffer()
====================

Synopsis
~~~~~~~~
::

 ULONG ChangeScreenBuffer(
          struct Screen * screen,
          struct ScreenBuffer * screenbuffer );

Function
~~~~~~~~
::

     Do double or multiple buffering on an intuition screen in an
     intuition-cooperative way. The ScreenBuffer's BitMap will be
     installed on the specified screen, if possible. After a signal from
     graphics.library, the previously installed BitMap will be available
     for re-use. Consult graphics.library/AllocDBufInfo() and
     graphics.library/ChangeVPBitMap() for further information.


Inputs
~~~~~~
::

     screen - The screen this screenbuffer belongs to
     screenbuffer - The screenbuffer obtained by AllocScreenBuffer()


Result
~~~~~~
::

     Non-zero if fuction succeeded, or zero if operation could not be
     performed, e.g. if user selects menus or gadgets.


Notes
~~~~~
::

     You need not re-install the original ScreenBuffer before closing
     a screen. Just FreeScreenBuffer() all buffers used for that screen.



See also
~~~~~~~~

`AllocScreenBuffer()`_ `FreeScreenBuffer()`_ `graphics.library/ChangeVPBitMap() <./graphics#changevpbitmap>`_ 

----------

ChangeWindowBox()
=================

Synopsis
~~~~~~~~
::

 void ChangeWindowBox(
          struct Window * window,
          LONG left,
          LONG top,
          LONG width,
          LONG height );

Function
~~~~~~~~
::

     Set the new position and size of a window in one call.


Inputs
~~~~~~
::

     window - Change this window
     left, top - New position
     width, height - New size


Notes
~~~~~
::

     This call is deferred. Wait() for IDCMP_CHANGEWINDOW if your
     program depends on the new size.



----------

ChangeWindowShape()
===================

Synopsis
~~~~~~~~
::

 struct Region * ChangeWindowShape(
          struct Window * window,
          struct Region * newshape,
          struct Hook * callback );

Inputs
~~~~~~
::

     window - The window to affect.


Notes
~~~~~
::

     This function is also present in MorphOS v50, however
     not implemented and reserved.



----------

ClearDMRequest()
================

Synopsis
~~~~~~~~
::

 BOOL ClearDMRequest(
          struct Window * window );

Function
~~~~~~~~
::

     Detach the DMRequest from the window


Inputs
~~~~~~
::

     window - The window from which the DMRequest is to be cleared


Result
~~~~~~
::

     TRUE if requester could successfully be detached.



See also
~~~~~~~~

`SetDMRequest()`_ `Request()`_ 

----------

ClearMenuStrip()
================

Synopsis
~~~~~~~~
::

 void ClearMenuStrip(
          struct Window * window );

Function
~~~~~~~~
::

     Detach menu stript from a window. Call this function before you
     change menu data.


Inputs
~~~~~~
::

     window - the window from which the menu bar should be detached



See also
~~~~~~~~

`SetMenuStrip()`_ 

----------

ClearPointer()
==============

Synopsis
~~~~~~~~
::

 void ClearPointer(
          struct Window * window );

Function
~~~~~~~~
::

     Reset the mouse pointer of this window to the default one. If the
     window is active during this call the pointer will immediately change
     its shape. Set custom mouse pointers with SetPointer().


Inputs
~~~~~~
::

     window - The window of which the mousepointer will be cleared


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`SetPointer()`_ 

----------

CloseScreen()
=============

Synopsis
~~~~~~~~
::

 BOOL CloseScreen(
          struct Screen * screen );

Function
~~~~~~~~
::

     Release all resources held by a screen and close it down visually.


Inputs
~~~~~~
::

     screen - pointer to the screen to be closed


Result
~~~~~~
::

     TRUE if the screen is successfully closed, FALSE if there were still
     windows left on the screen (which means the screen is not closed).



----------

CloseWindow()
=============

Synopsis
~~~~~~~~
::

 void CloseWindow(
          struct Window * window );

Function
~~~~~~~~
::

     Closes a window. Depending on the display, this might not happen
     at the time when this function returns, but you must not use
     the window pointer after this function has been called.


Inputs
~~~~~~
::

     window - The window to close


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The window might not have disappeared when this function returns.



See also
~~~~~~~~

`OpenWindow()`_ `OpenWindowTagList()`_ 

----------

CloseWorkBench()
================

Synopsis
~~~~~~~~
::

 LONG CloseWorkBench();

Function
~~~~~~~~
::

     Attempt to close the Workbench screen. This will fail if there are any
     non-Drawer windows open on it.


Result
~~~~~~
::

     success - TRUE if Workbench screen could be closed.


Notes
~~~~~
::

     If the Workbench screen is already closed when this function is called,
     FALSE is returned.



See also
~~~~~~~~

`OpenWorkBench()`_ 

----------

CurrentTime()
=============

Synopsis
~~~~~~~~
::

 void CurrentTime(
          ULONG * seconds,
          ULONG * micros );

Function
~~~~~~~~
::

     Copies the current time into the argument pointers.


Inputs
~~~~~~
::

     seconds - ptr to ULONG varaible which will contain the current
         seconds after function call
     micros - ptr to ULONG varaible which will contain the current
         microseconds after function call


Result
~~~~~~
::

     Copies the time values to the memory the arguments point to
     Return value is not set.


Notes
~~~~~
::

     Makes use of timer.library/timer.device



See also
~~~~~~~~

timer.device/TR_GETSYSTIME 

----------

DisplayAlert()
==============

Synopsis
~~~~~~~~
::

 BOOL DisplayAlert(
          ULONG alertnumber,
          UBYTE* string,
          UWORD height );

Function
~~~~~~~~
::

     Bring up an alert with the given message.


Inputs
~~~~~~
::

     alertnumber - Value determining type of alert. For historical reasons,
              this is the same value as passed to Alert(). However,
              this functions takes into account only AT_DeadEnd bit.
     string - A pointer to text data. Text data have the following layout:
              each string is preceded by 3 bytes. The first two of them are
              the X coordinates of the string in the alert display. This is
              given as a big-endian value. The third byte is the Y
              coordinate of the text's baseline. Then a NUL-terminated
              string follows by itself. After the NUL terminator there's
              one more byte. If it's not zero, another string starts from
              the next byte. Zero marks the end of the sequence. The text
              is always rendered using the topaz/8 font.
     height - The height of alert display in pixels.


Result
~~~~~~
::

     Always FALSE if AT_DeadEnd bit is set in alertnumber. Otherwise the
     function returns TRUE or FALSE depending on what user chooses. In
     AROS, alerts are presented in a requester with two gadgets: Ok and
     Cancel. Ok returns TRUE; Cancel returns FALSE.

     If the alert could not be posted for whatever reason, FALSE is
     returned.


Notes
~~~~~
::

     This function is obsolete and exists only for backwards compatibility
     with AmigaOS(tm). On various modern systems this function has
     different effects. On classic Amiga(tm) this function may not work
     with RTG displays, so it is generally deprecated. Please don't use it
     in new software! Use legitimate intuition requesters if you want to
     present some message to the user.



----------

DisplayBeep()
=============

Synopsis
~~~~~~~~
::

 void DisplayBeep(
          struct Screen * screen );

Function
~~~~~~~~
::

     The Amiga has no internal speaker, so it flashes the background
     color of the specified screen as a signal. If the argument is
     NULL all screens will be flashed.


Inputs
~~~~~~
::

     screen - The Screen that will be flashed.
         If NULL all screens will flash.



----------

DisposeObject()
===============

Synopsis
~~~~~~~~
::

 void DisposeObject(
          APTR object );

Function
~~~~~~~~
::

     Deletes a BOOPSI object. All memory associated with the object
     is freed. The object must have been created with NewObject().
     Some objects contain other objects which might be freed as well
     when this function is used on the "parent", while others might
     also contain children but won't free them. Read the documentation
     of the class carefully to find out how it behaves.


Inputs
~~~~~~
::

     object - The result of a call to NewObject() or a similar function,
          may be NULL.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This functions sends OM_DISPOSE to the object.



See also
~~~~~~~~

`NewObjectA()`_ `SetAttrsA()`_ `GetAttr()`_ `MakeClass()`_ "Basic Object-Oriented Programming System for Intuition" and "boopsi Class Reference" Document. 

----------

DoGadgetMethodA()
=================

Synopsis
~~~~~~~~
::

 IPTR DoGadgetMethodA(
          struct Gadget    * gad,
          struct Window    * win,
          struct Requester * req,
          Msg msg );
 
 IPTR DoGadgetMethod(
          struct Gadget    * gad,
          struct Window    * win,
          struct Requester * req,
          TAG tag, ... );

Function
~~~~~~~~
::

     Invokes a BOOPSI method on an object with a GadgetInfo derived from
     the supplied window or requester parameter.


Inputs
~~~~~~
::

     gad - The gadget to work on
     win - The window which contains the gadget or the requester with
         the gadgets.
     req - If the gadget is in a requester, you must specify that one,
         too.
     message - Send this message to the gadget.


Result
~~~~~~
::

     The result depends on the contents of the message sent to the
     gadget.



----------

DoubleClick()
=============

Synopsis
~~~~~~~~
::

 BOOL DoubleClick(
          ULONG sSeconds,
          ULONG sMicros,
          ULONG cSeconds,
          ULONG cMicros );

Function
~~~~~~~~
::

     Check if two times are within the doubleclick interval.


Inputs
~~~~~~
::

     sSeconds, sMicros - Seconds and microseconds of the first event.
     cSeconds, cMicros - Seconds and microseconds of the second event.


Result
~~~~~~
::

     TRUE if the times are within the doubleclick interval, FALSE
     otherwise.



----------

DrawBorder()
============

Synopsis
~~~~~~~~
::

 void DrawBorder(
          struct RastPort * rp,
          struct Border   * border,
          LONG leftOffset,
          LONG topOffset );

Function
~~~~~~~~
::

     Draws one or more borders in the specified RastPort. Rendering
     will start at the position which you get when you add the offsets
     leftOffset and topOffset to the LeftEdge and TopEdge specified
     in the Border structure. All coordinates are relative to that point.


Inputs
~~~~~~
::

     rp - The RastPort to render into
     border - Information what and how to render
     leftOffset, topOffset - Initial starting position


Result
~~~~~~
::

     None.


Example
~~~~~~~
::

     // Draw a house with one stroke
     // The drawing starts at the lower left edge
     WORD XY[] =
     {
         10, -10,
         10,   0,
          0, -10,
         10, -10,
          5, -15,
          0, -10,
          0,   0,
         10,   0,
     };
     struct Border demo =
     {
         100, 100,   // Position
         1, 2,   // Pens
         JAM1,   // Drawmode
         8,      // Number of pairs in XY
         XY,     // Vector offsets
         NULL    // No next border
     };

     // Render the house with the bottom left edge at 150, 50
     DrawBorder (rp, &demo, 50, -50);



----------

DrawImage()
===========

Synopsis
~~~~~~~~
::

 void DrawImage(
          struct RastPort * rp,
          struct Image    * image,
          LONG leftOffset,
          LONG topOffset );

Function
~~~~~~~~
::

     Draw an image.


Inputs
~~~~~~
::

     rp - The RastPort to render into
     image - The image to render
     leftOffset, topOffset - Where to place the image.


Result
~~~~~~
::

     None.



----------

DrawImageState()
================

Synopsis
~~~~~~~~
::

 void DrawImageState(
          struct RastPort * rp,
          struct Image    * image,
          LONG leftOffset,
          LONG topOffset,
          ULONG state,
          struct DrawInfo * drawInfo );

Function
~~~~~~~~
::

     This function renders an image in a certain state.


Inputs
~~~~~~
::

     rp - Render in this RastPort
     image - Render this image
     leftOffset, topOffset - Add this offset to the position stored in the
         image.
     state - Which state (see intuition/imageclass.h for possible
         values).
     drawInfo - The DrawInfo from the screen.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     DrawImageState(), handles both boopsi and conventional images.



----------

DumpIntuiState()
================

Synopsis
~~~~~~~~
::

 void DumpIntuiState();

Function
~~~~~~~~
::

     Private: dump the internal state of intuition.


Result
~~~~~~
::

     None.



----------

EasyRequestArgs()
=================

Synopsis
~~~~~~~~
::

 LONG EasyRequestArgs(
          struct Window     * window,
          struct EasyStruct * easyStruct,
          ULONG             * IDCMP_ptr,
          RAWARG argList );
 
 LONG EasyRequest(
          struct Window     * window,
          struct EasyStruct * easyStruct,
          ULONG             * IDCMP_ptr,
          TAG tag, ... );

Function
~~~~~~~~
::

     Opens and handles a requester, which provides one or more choices.
     It blocks the application until the user closes the requester.
     Returned is an integer indicating which gadget had been selected.


Inputs
~~~~~~
::

     Window - A reference window. If NULL, the requester opens on
         the default public screen.
     easyStruct - The EasyStruct structure (<intuition/intuition.h>)
         describing the requester.
     IDCMP_Ptr - Pointer to IDCMP flags. The requester will be closed early
         if any of the specified message types is received. This is useful
         for requesters that want to listen to disk changes etc. The
         contents of this pointer is set to the IDCMP flag that caused the
         requester to close. This pointer may be NULL.
     ArgList - The arguments for easyStruct->es_TextFormat.


Result
~~~~~~
::

     -1, if one of the IDCMP flags of IDCMP_ptr was set.
      0, if the rightmost button was clicked or an error occured.
      n, if the n-th button from the left was clicked.



See also
~~~~~~~~

`BuildEasyRequestArgs()`_ 

----------

EndRefresh()
============

Synopsis
~~~~~~~~
::

 void EndRefresh(
          struct Window * window,
          BOOL complete );

Function
~~~~~~~~
::

     Finishes refreshing which was initialized with BeginRefresh().
     The argument |complete| is usually TRUE. It can be useful to
     set it to FALSE when refreshing is split into several tasks.


Inputs
~~~~~~
::

     window   - the window to be refreshed
     complete - BOOL which states if all refreshing is done



See also
~~~~~~~~

`BeginRefresh()`_ 

----------

EndRequest()
============

Synopsis
~~~~~~~~
::

 void EndRequest(
          struct Requester * requester,
          struct Window * window );

Function
~~~~~~~~
::

     Remove a requester from the specified window. Other open requesters
     of this window stay alive.


Inputs
~~~~~~
::

     requester - The requester to be deleted
     window - The window to which the requester belongs


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`InitRequester()`_ `Request()`_ 

----------

EndScreenNotify()
=================

Synopsis
~~~~~~~~
::

 BOOL EndScreenNotify(
          APTR notify );

Function
~~~~~~~~
::

     Remove a Screen Notification from Intuition.


Inputs
~~~~~~
::

     notify - notification returned from StartScreenNotifyTagList()


Result
~~~~~~
::

     BOOL - if FALSE, Notification is in use and cannot be removed; try
         later.


Notes
~~~~~
::

     This function is compatible with AmigaOS v4.



See also
~~~~~~~~

`StartScreenNotifyTagList()`_ 

----------

EraseImage()
============

Synopsis
~~~~~~~~
::

 void EraseImage(
          struct RastPort * rp,
          struct Image    * image,
          LONG leftOffset,
          LONG topOffset );

Function
~~~~~~~~
::

     Erase an image on the screen.


Inputs
~~~~~~
::

     rp - Render in this RastPort
     image - Erase this image
     leftOffset, topOffset - Add this offset the the position in the
         image.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`DrawImage()`_ `DrawImageState()`_ 

----------

FreeClass()
===========

Synopsis
~~~~~~~~
::

 BOOL FreeClass(
          struct IClass * iclass );

Function
~~~~~~~~
::

     Only for class implementatores.

     Tries to free a class which has been created with MakeClass() in the
     first place. This will not succeed in all cases: Classes which
     still have living objects or which are still being used by subclasses
     can't simply be freed. In this case this call will fail.

     Public classes will always be removed with RemoveClass() no matter
     if FreeClass() would succeed or not. This gurantees that after the
     call to FreeClass() no new objects can be created.

     If you have a pointer to allocated memory in cl_UserData, you must
     make a copy of that pointer, call FreeClass() and if the call
     succeeded, you may free the memory. If you don't follow these rules,
     you might end up with a class which is partially freed.


Inputs
~~~~~~
::

     iclass - The pointer you got from MakeClass().


Result
~~~~~~
::

     FALSE if the class couldn't be freed at this time. This can happen
     either if there are still objects from this class or if the class
     is used a SuperClass of at least another class.

     TRUE if the class could be freed. You must not use iclass after
     that.


Example
~~~~~~~
::

     // Free a public class with dynamic memory in cl_UserD

     int freeMyClass (Class * cl)
     {
         struct MyPerClassData * mpcd;

         mpcd = (struct MyPerClassData *)cl->cl_UserData;

         if (FreeClass (cl)
         {
             FreeMem (mpcd, sizeof (struct MyPerClassData));
             return (TRUE);
         }

         return (FALSE);
     }


Notes
~~~~~
::

     *Always* calls RemoveClass().



See also
~~~~~~~~

`MakeClass()`_ "Basic Object-Oriented Programming System for Intuition" and "Boopsi Class Reference" Document. 

----------

FreeMonitorList()
=================

Synopsis
~~~~~~~~
::

 void FreeMonitorList(
          Object ** list );

Function
~~~~~~~~
::

     Frees an array of monitor class objects obtained using
     GetMonitorList().


Inputs
~~~~~~
::

     list - a pointer to the list to free.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function is compatible with MorphOS v2.



See also
~~~~~~~~

`GetMonitorList()`_ 

----------

FreeRemember()
==============

Synopsis
~~~~~~~~
::

 void FreeRemember(
          struct Remember ** rememberKey,
          LONG reallyForget );

Function
~~~~~~~~
::

     Free memory allocated by AllocRemember().


Inputs
~~~~~~
::

     rememberKey  - address of a pointer to struct Remember
     reallyForget - TRUE  release all memory
                    FALSE release only link nodes



See also
~~~~~~~~

`AllocRemember()`_ 

----------

FreeScreenBuffer()
==================

Synopsis
~~~~~~~~
::

 void FreeScreenBuffer(
          struct Screen * screen,
          struct ScreenBuffer * screenbuffer );

Function
~~~~~~~~
::

     Frees a ScreenBuffer allocated by AllocScreenBuffer() and releases
     associated resources. You have to call this before closing your
     screen.


Inputs
~~~~~~
::

     screen - The screen this screenbuffer belongs to
     screenbuffer - The screenbuffer obtained by AllocScreenBuffer().
         It is safe to pass NULL.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     When used SB_SCREEN_BITMAP on allocating the ScreenBuffer
     (ie. the ScreenBuffer only refers to the screen's BitMap) you must
     FreeScreenBuffer() the ScreenBuffer before closing the screen.
     Intuition will recognize when FreeScreenBuffer() is called for the
     currently installed ScreenBuffer that it must not free the BitMap.
     This is left to the CloseScreen() function.



See also
~~~~~~~~

`AllocScreenBuffer()`_ `ChangeScreenBuffer()`_ 

----------

FreeScreenDrawInfo()
====================

Synopsis
~~~~~~~~
::

 void FreeScreenDrawInfo(
          struct Screen   * screen,
          struct DrawInfo * drawInfo );

Function
~~~~~~~~
::

     Tell intuition that you have finished work with struct DrawInfo
     returned by GetScreenDrawInfo().


Inputs
~~~~~~
::

     screen - The screen you passed to GetScreenDrawInfo()
     drawInfo - The DrawInfo structure returned by GetScreenDrawInfo()


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`GetScreenDrawInfo()`_ 

----------

FreeSysRequest()
================

Synopsis
~~~~~~~~
::

 void FreeSysRequest(
          struct Window * window );

Function
~~~~~~~~
::

     Frees a requester made with BuildSysRequest() or
     BuildEasyRequestArgs().


Inputs
~~~~~~
::

     window - The requester to be freed. May be NULL or 1.


Bugs
~~~~
::

     BuildSysRequest() requesters not supported, yet.



See also
~~~~~~~~

`BuildSysRequest()`_ `BuildEasyRequestArgs()`_ 

----------

GadgetMouse()
=============

Synopsis
~~~~~~~~
::

 void GadgetMouse(
          struct Gadget     * gadget,
          struct GadgetInfo * ginfo,
          WORD              * mousepoint );

Function
~~~~~~~~
::

     Determines the current mouse position relative to the upper-left
     corner of a custom gadget. It is recommended not to call this
     function!


Inputs
~~~~~~
::

     gadget - The gadget to take as origin.
     ginfo - The GadgetInfo structure as passed to the custom gadget hook
         routine.
     mousepoint - Pointer to an array of two WORDs or a structure of type
         Point.


Result
~~~~~~
::

     None. Fills in the two WORDs pointed to by mousepoint.


Notes
~~~~~
::

     This function is useless, because programs which need this
     information can get it in a cleaner way. It is recommended not to
     call this function!



----------

GetAttr()
=========

Synopsis
~~~~~~~~
::

 ULONG GetAttr(
          ULONG attrID,
          Object * object,
          IPTR * storagePtr );

Function
~~~~~~~~
::

     Asks the specified object for the value of an attribute. This is not
     possible for all attributes of an object. Read the documentation for
     the class to find out which can be read and which can't.


Inputs
~~~~~~
::

     attrID - ID of the attribute you want
     object - Ask the attribute from this object
     storagePtr - This is a pointer to memory which is large enough
         to hold a copy of the attribute. Most classes will simply
         put a copy of the value stored in the object here but this
         behaviour is class specific. Therefore read the instructions
         in the class description carefully.


Result
~~~~~~
::

     Mostly TRUE if the method is supported for the specified attribute
     and FALSE if it isn't or the attribute can't be read at this time.
     See the classes documentation for details.


Notes
~~~~~
::

     This function sends OM_GET to the object.



See also
~~~~~~~~

`NewObjectA()`_ `DisposeObject()`_ `SetAttrsA()`_ `MakeClass()`_ "Basic Object-Oriented Programming System for Intuition" and "Boopsi Class Reference" Document. 

----------

GetDefaultPubScreen()
=====================

Synopsis
~~~~~~~~
::

 struct Screen * GetDefaultPubScreen(
          UBYTE * nameBuffer );

Function
~~~~~~~~
::

     Returns the name of the current default public screen. This will be
     "Workbench" if there is no default public screen.


Inputs
~~~~~~
::

     nameBuffer - A buffer of length MAXPUBSCREENNAME


Result
~~~~~~
::

     Pointer to the default public screen or NULL, if there is none.


Notes
~~~~~
::

     Only Public Screen Manager utilities want to use this function
     since it is easy to open a window on the default public screen
     without specifying a name.

     The returned Screen pointer can become invalid any time, if the screen
     gets closed after the return of GetDefaultPubScreen(). This function
     does not lock the screen.

     Better use LockPubScreen(NULL).



See also
~~~~~~~~

`SetDefaultPubScreen()`_ `OpenWindow()`_ `LockPubScreen()`_ 

----------

GetDefPrefs()
=============

Synopsis
~~~~~~~~
::

 struct Preferences * GetDefPrefs(
          struct Preferences * prefbuffer,
          WORD size );

Function
~~~~~~~~
::

     Gets a copy of the Intuition default Preferences structure.


Inputs
~~~~~~
::

     prefbuffer - The buffer which contains your settings for the
         preferences.
     size - The number of bytes of the buffer you want to be copied.


Result
~~~~~~
::

     Returns your parameter buffer.



See also
~~~~~~~~

`GetPrefs()`_ `SetPrefs()`_ 

----------

GetDrawInfoAttr()
=================

Synopsis
~~~~~~~~
::

 ULONG GetDrawInfoAttr(
          struct DrawInfo * drawInfo,
          ULONG attrID,
          IPTR * resultPtr );

Function
~~~~~~~~
::

      Gets value of the specified attribute from DrawInfo object, or
      system default value (for some attributes).


Inputs
~~~~~~
::

      drawInfo - an object pointer to query. It is possible to set this
                 argument to NULL when querying GDIA_Color or GDIA_Pen
                 attributes. In this case values will be retrieved from
                 system preferences.
      attrID   - ID of the attribute you want. The following IDs are
                 currently defined:

        GDIA_Color       - 0RGB value of the color corresponding to a given pen.
                           It is possible to retrieve these values only from
                           DrawInfos belonging to direct-color screens. Pen ID
                           should be ORed with attribute ID.
        GDIA_Pen         - LUT color number corresponding to a given pen.
        GDIA_Version     - Version number of the DrawInfo object.
        GDIA_DirectColor - TRUE if the DrawInfo belongs to direct-color screen. Note
                           that in case of failure it also sets success indicator to
                           FALSE.
        GDIA_NumPens     - Number of pens or colors defined in this DrawInfo object.
        GDIA_Font        - Font specified in this DrawInfo.
        GDIA_Depth       - Depth of this DrawInfo. Note that this attribute will
                           return real depth of DrawInfo's screen, however dri_Depth
                           member will contain 8 for AmigaOS(tm) compatibility.
        GDIA_ResolutionX - X resolution in ticks
        GDIA_ResolutionY - Y resolution in ticks
        GDIA_CheckMark   - A pointer to CheckMark image object for the menu.
        GDIA_MenuKey     - A pointer to Menu (Amiga) key image object for the menu.

      resultPtr - an optional storage area for success indicator. You
                  can set this parameter to NULL.


Result
~~~~~~
::

      A value of the specified attribute. resultPtr, if supplied, gets
      TRUE for success and FALSE for failure.


Notes
~~~~~
::

      This function is compatible with MorphOS



----------

GetMonitorList()
================

Synopsis
~~~~~~~~
::

 Object ** GetMonitorList(
          struct TagItem * tags );
 
 Object ** GetMonitorListTags(
          TAG tag, ... );

Function
~~~~~~~~
::

     Obtain an array of monitorclass objects installed in the
     system


Inputs
~~~~~~
::

     tags - an optional pointer to a taglist with additional options.
            Currently only one tag is defined:

            GMLA_DisplayID - list only monitors matching the given
                             display ID


Result
~~~~~~
::

     A pointer to a NULL-terminated array of BOOPSI object pointers.
     This is a copy of internal list, you need to free it using
     FreeMonitorList()


Notes
~~~~~
::

     This function is compatible with MorphOS v2.



See also
~~~~~~~~

`FreeMonitorList()`_ 

----------

GetPrefs()
==========

Synopsis
~~~~~~~~
::

 struct Preferences * GetPrefs(
          struct Preferences * prefbuffer,
          WORD size );

Function
~~~~~~~~
::

     Gets a copy of the current Preferences structure.


Inputs
~~~~~~
::

     prefbuffer - The buffer which contains your settings for the
         preferences.
     size - The number of bytes of the buffer you want to be copied.


Result
~~~~~~
::

     Returns your parameter buffer.



See also
~~~~~~~~

`GetDefPrefs()`_ `SetPrefs()`_ 

----------

GetScreenData()
===============

Synopsis
~~~~~~~~
::

 LONG GetScreenData(
          APTR buffer,
          ULONG size,
          ULONG type,
          struct Screen * screen );

Function
~~~~~~~~
::

     Copy part or all infos about a screen into a private buffer.

     To copy the Workbench, one would call

         GetScreenData (buffer, sizeof(struct Screen), WBENCHSCREEN, NULL)

     If the screen is not open, this call will open it. You can use
     this function for these purposes:

     1) Get information about the workbench in order to open a window
        on it (eg. size).
     2) Clone a screen.


Inputs
~~~~~~
::

     buffer - The data gets copied here
     size - The size of the buffer in bytes
     type - The type of the screen as in OpenWindow().
     screen - Ignored unless type is CUSTOMSCREEN.


Result
~~~~~~
::

     TRUE if successful, FALSE if the screen could not be opened.



----------

GetScreenDrawInfo()
===================

Synopsis
~~~~~~~~
::

 struct DrawInfo * GetScreenDrawInfo(
          struct Screen * screen );

Function
~~~~~~~~
::

     Returns a pointer to struct DrawInfo of the passed screen.
     This data is READ ONLY. The version of the struct DrawInfo
     is given in the dri_Version field.


Inputs
~~~~~~
::

     screen - The screen you want to get the DrawInfo from.
         Must be valid and open.


Result
~~~~~~
::

     Returns pointer to struct DrawInfo defined in intuition/screens.h


Notes
~~~~~
::

     Call FreeScreenDrawInfo() after finishing using the pointer.
     This function does not prevent the screen from being closed.



See also
~~~~~~~~

`FreeScreenDrawInfo()`_ `LockPubScreen()`_ `intuition/screens.h </documentation/developers/headerfiles/intuition/screens.h>`_ 

----------

HelpControl()
=============

Synopsis
~~~~~~~~
::

 void HelpControl(
          struct Window * window,
          ULONG flags );

Function
~~~~~~~~
::

     Turn on or off Gadget-Help for your window. Gadget-Help will also be
     changed for all members of the same help-group to make
     multiple-windows apps behave well.


Inputs
~~~~~~
::

     window - The window to affect. All windows of the same help-group
         will be affected as well.
     flags - HC_GADGETHELP or zero for turning help on or off.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The WA_HelpGroup and WA_HelpGroupWindow tags are relevant to this
     function.



See also
~~~~~~~~

`OpenWindowTagList()`_ 

----------

HideWindow()
============

Synopsis
~~~~~~~~
::

 BOOL HideWindow(
          struct Window * window );

Function
~~~~~~~~
::

     Make a window invisible.


Inputs
~~~~~~
::

     window - The window to affect.


Result
~~~~~~
::

     Success indicator. On AROS this is always TRUE.


Notes
~~~~~
::

     This function is source-compatible with AmigaOS v4.
     This function is also present in MorphOS v50, however
     considered private.



See also
~~~~~~~~

`ShowWindow()`_ 

----------

InitRequester()
===============

Synopsis
~~~~~~~~
::

 void InitRequester(
          struct Requester * requester );

Function
~~~~~~~~
::

     This function is OBSOLETE and should not be called. To preserve
     compatibility with old programs, calling this function is a no-op.


Inputs
~~~~~~
::

     requester - The struct Requester to be initialized


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function is obsolete.



See also
~~~~~~~~

`Request()`_ `EndRequest()`_ 

----------

IntuiTextLength()
=================

Synopsis
~~~~~~~~
::

 LONG IntuiTextLength(
          struct IntuiText * iText );

Function
~~~~~~~~
::

     Measure the length of the IntuiText passed to the function. Further
     IntuiTexts in iText->NextText are ignored. The length is measured in
     pixels.


Inputs
~~~~~~
::

     iText - The size of this text. If iText->ITextFont contains NULL,
         the system's font is used (and *not* the font of the currently
         active screen!).


Result
~~~~~~
::

     The width of the text in pixels.



----------

IsWindowVisible()
=================

Synopsis
~~~~~~~~
::

 LONG IsWindowVisible(
          struct Window * window );

Function
~~~~~~~~
::

     Check whether a window is visible or not. This does not
     check whether the window is within the visible area of
     the screen but rather whether it is in visible state.


Inputs
~~~~~~
::

     window - The window to affect.


Result
~~~~~~
::

     TRUE if window is currently visible, FALSE otherwise.


Notes
~~~~~
::

     This function is also present in MorphOS v50, however
     considered private.



----------

ItemAddress()
=============

Synopsis
~~~~~~~~
::

 struct MenuItem * ItemAddress(
          struct Menu * menustrip,
          UWORD menunumber );

Function
~~~~~~~~
::

     Returns the address of the menuitem 'menunumber' of 'menustrip'.
     The number is the one you get from intuition after the user has
     selected a menu.
     The menunumber must be well-defined.
     Valid numbers are MENUNULL, which makes the routine return NULL,
     or valid item number of your menustrip, which contains
     - a valid menu number
     - a valid item number
     - if the menu-item has a sub-item, a valid sub-item number
     Menu number and item number must be specified. Sub-item, if
     available, is optional, therefore this function returns either
     the item or sub-item.


Inputs
~~~~~~
::

     menustrip - Pointer to the first menu of the menustrip.
     menunumber - Packed value describing the menu, item and if
         appropriate sub-item.


Result
~~~~~~
::

     Returns NULL for menunumber == MENUNULL or the address of the
     menuitem described by menunumber.



----------

LendMenus()
===========

Synopsis
~~~~~~~~
::

 void LendMenus(
          struct Window * fromwindow,
          struct Window * towindow );

Function
~~~~~~~~
::

     This function "lends" the menus of one window to another. This makes
     the menu events (e.g. menu button presses) take place in another
     window's menu (i.e. the other window's strip and screen).

     This function is used to unify two windows on different attached
     screens. (E.g. a painting program with an attached palette screen
     can open the menu on the main screen if the menu button is
     pressed on the palette screen.)


Inputs
~~~~~~
::

     fromwindow - This window's menu events will go to another window.
     towindow - This is the window that will react on the menu actions
         of the other window. If NULL 'lending' will be turned off.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`SetMenuStrip()`_ `ClearMenuStrip()`_ 

----------

LockIBase()
===========

Synopsis
~~~~~~~~
::

 ULONG LockIBase(
          ULONG What );

Function
~~~~~~~~
::

     Locks Intuition. While you hold this lock, no fields of Intuition
     will change. Please release this as soon as possible.


Inputs
~~~~~~
::

     What - Which fields of Intuition should be locked. The only allowed
         value for this is currently 0 which means to lock everything.


Result
~~~~~~
::

     The result of this function must be passed to UnlockIBase().


Notes
~~~~~
::

     You *must not* call this function if you have any locks on other
     system resources like layers and LayerInfo locks.



See also
~~~~~~~~

`UnLockIBase()`_ 

----------

lockPubClass()
==============

Synopsis
~~~~~~~~
::

 void lockPubClass();

Function
~~~~~~~~
::

     Locks the public classes list.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`UnlockPubClass()`_ 

----------

LockPubScreen()
===============

Synopsis
~~~~~~~~
::

 struct Screen * LockPubScreen(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     Locks a public screen, thus preventing it from closing. This is
     useful if you want to put up a visitor window on a public screen
     and need to check some of the public screen's fields first -- not
     locking the screen may lead to the public screen not existing when
     your visitor window is ready.

     If you try to lock the Workbench screen or the default public screen
     and there isn't any, the Workbench screen will be automatically opened
     and locked.

     The local variable PUBSCREEN can be used to override the name of the
     default public screen to use ("set PUBSCREEN mypubscreen").
     If the screen does not exist, the PUBSCREEN content is ignored.


Inputs
~~~~~~
::

     name - Name of the public screen or NULL for the default public
            screen. The name "Workbench" refers to the Workbench screen.
            The name is case insensitive.


Result
~~~~~~
::

     A pointer to the screen or NULL if something went wrong. Failure can
     happen for instance when the public screen is in private state or
     doesn't exist.


Example
~~~~~~~
::

     To open a visitor window which needs information from the screen
     structure of the public screen to open on, do this:

     if((pubscreen = LockPubScreen("PubScreentoOpenon")) != NULL)
     {
         ...check pubscreen's internal data...
         OpenWindow(VisitorWindow, pubscreen);
         UnlockPubScreen(NULL, pubscreen);
         ...use your visitor window...
         CloseWindow(VisitorWindow);
     }


Notes
~~~~~
::

     You don't need to hold the lock when your visitor window is opened as
     the pubscreen cannot be closed as long as there are visitor windows
     on it.



See also
~~~~~~~~

`OpenWindow()`_ `UnlockPubScreen()`_ `GetScreenData()`_ 

----------

LockPubScreenList()
===================

Synopsis
~~~~~~~~
::

 struct List * LockPubScreenList();

Function
~~~~~~~~
::

     Arbitrates access to the system public screen list. This is for Public
     Screen Manager programs only! The list should be locked for as short a
     time as possible.


Notes
~~~~~
::

     The list's nodes are PubScreenNodes as defined in
     <intuition/screens.h>.



See also
~~~~~~~~

`UnlockPubScreenList()`_ 

----------

MakeClass()
===========

Synopsis
~~~~~~~~
::

 struct IClass * MakeClass(
          ClassID classID,
          ClassID superClassID,
          struct IClass * superClassPtr,
          ULONG instanceSize,
          ULONG flags );

Function
~~~~~~~~
::

     Only for class implementators.

     This function creates a new public BOOPSI class. The SuperClass
     should be another BOOPSI class; all BOOPSI classes are subclasses
     of the ROOTCLASS.

     SuperClasses can by private or public. You can specify a name/ID
     for the class if you want it to become a public class. For public
     classes, you must call AddClass() afterwards to make it public
     accessible.

     The return value contains a pointer to the IClass structure of your
     class. You must specify your dispatcher in cl_Dispatcher. You can
     also store shared data in cl_UserData.

     To get rid of the class, you must call FreeClass().


Inputs
~~~~~~
::

     classID - NULL for private classes otherwise the name/ID of the
         public class.
     superClassID - Name/ID of a public SuperClass. NULL is you don't
         want to use a public SuperClass or if you have the pointer
         your SuperClass.
     superClassPtr - Pointer to the SuperClass. If this is non-NULL,
         then superClassID is ignored.
     instanceSize - The amount of memory which your objects need (in
         addition to the memory which is needed by the SuperClass(es))
     flags - For future extensions. To maintain comaptibility, use 0
         for now.


Result
~~~~~~
::

     Pointer to the new class or NULL if
         - There wasn't enough memory
         - The superclass couldn't be found
         - There already is a class with the same name/ID.


Notes
~~~~~
::

     No copy is made of classID. So make sure the lifetime of the contents
     of classID is at least the same as the lifetime of the class itself.



----------

MakeScreen()
============

Synopsis
~~~~~~~~
::

 LONG MakeScreen(
          struct Screen * screen );

Function
~~~~~~~~
::

     Create viewport of the screen.


Inputs
~~~~~~
::

     Pointer to your custom screen.


Result
~~~~~~
::

     Zero for success, non-zero for failure.



See also
~~~~~~~~

`RemakeDisplay()`_ `RethinkDisplay()`_ graphics.library/MakeVPort(). 

----------

ModifyIDCMP()
=============

Synopsis
~~~~~~~~
::

 BOOL ModifyIDCMP(
          struct Window * window,
          ULONG flags );

Function
~~~~~~~~
::

     This routine modifies the state of your window's IDCMP (Intuition
     Direct Communication Message Port).

     Depending on the current state in the IDCMPFlags of the window and
     the specified flags these actions are possible:

     IDCMP   flags   Action
     0       0       Nothing happens.
     0       !=0     The flags are copied in the IDCMPFlags of the window
                     and a MessagePort is created and stored in the
                     UserPort of the window.
     !=0     0       The IDCMPFlags are cleared and the MessagePort in the
                     UserPort is deleted.
     !=0     !=0     The flags are copied to the IDCMPFlags of the
                     window.


Inputs
~~~~~~
::

     window - The window to change the IDCMPFlags in.
     flags - New flags for the IDCMPFlags of the window. See
         intuition/intuition.h for the available flags.


Result
~~~~~~
::

     TRUE if the change could be made and FALSE otherwise.


Notes
~~~~~
::

     You can set up the Window->UserPort to any port of your own
     before you call ModifyIDCMP().  If IDCMPFlags is non-null but
     your UserPort is already initialized, Intuition will assume that
     it's a valid port with task and signal data preset and Intuition
     won't disturb your set-up at all, Intuition will just allocate
     the Intuition message port half of it.  The converse is true
     as well:  if UserPort is NULL when you call here with
     IDCMPFlags == NULL, Intuition will deallocate only the Intuition
     side of the port.

     This allows you to use a port that you already have allocated:

     - OpenWindow() with IDCMPFlags equal to NULL (open no ports)
     - set the UserPort variable of your window to any valid port of your
       own choosing
     - call ModifyIDCMP with IDCMPFlags set to what you want
     - then, to clean up later, set UserPort equal to NULL before calling
       CloseWindow() (leave IDCMPFlags alone)  BUT FIRST: you must make
       sure that no messages sent your window are queued at the port,
       since they will be returned to the memory free pool.

     For an example of how to close a window with a shared IDCMP,
     see the description for CloseWindow().

     Intuition v50 features a WA_UserPort tag, which allows to set
     the UserPort at OpenWindow stage. Please note that using this tag
     changes the behaviour of ModifyIDCMP() slightly. Creating/disposing
     message ports is now up to the app. ModifyIDCMP(win,0) still clears
     win->UserPort pointer, but the message port is NOT disposed - you
     need to store it and dispose yourself! Also calling
     ModifyIDCMP(win,someidcmp) on a window with NULL win->UserPort will
     NOT create a new port!



See also
~~~~~~~~

`OpenWindow()`_ `CloseWindow()`_ `intuition/extensions.h </documentation/developers/headerfiles/intuition/extensions.h>`_ 

----------

ModifyProp()
============

Synopsis
~~~~~~~~
::

 void ModifyProp(
          struct Gadget    * gadget,
          struct Window    * window,
          struct Requester * requester,
          ULONG flags,
          ULONG horizPot,
          ULONG vertPot,
          ULONG horizBody,
          ULONG vertBody );

Function
~~~~~~~~
::

     Changes the values in the PropInfo-structure of a proportional
     gadget and refreshes the display.


Inputs
~~~~~~
::

     gadget - Must be a PROPGADGET
     window - The window which contains the gadget
     requester - If the gadget has GTYP_REQGADGET set, this must be
         non-NULL.
     flags - New flags
     horizPot - New value for the HorizPot field of the PropInfo
     vertPot - New value for the VertPot field of the PropInfo
     horizBody - New value for the HorizBody field of the PropInfo
     vertBody - New value for the VertBody field of the PropInfo


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function causes all gadgets from this gadget to the end of
     the gadget list to be refreshed. If you want a better behaviour,
     use NewModifProp().



See also
~~~~~~~~

`NewModifyProp()`_ 

----------

MoveScreen()
============

Synopsis
~~~~~~~~
::

 void MoveScreen(
          struct Screen * screen,
          LONG dx,
          LONG dy );

Function
~~~~~~~~
::

     Move a screen by the specified amount in X/Y direction. The
     resolution is always the screen resolution.


Inputs
~~~~~~
::

     screen - Move this screen
     dx - Move it by this amount along the X axis (> 0 to the right,
         < 0 to the left).
     dy - Move it by this amount along the Y axis (> 0 down, < 0 up)


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     Depending on other restrictions, the screen may not move as far
     as specified. It will move as far as possible and you can check
     LeftEdge and TopEdge of the screen to see how far it got.



See also
~~~~~~~~

`RethinkDisplay()`_ 

----------

MoveWindow()
============

Synopsis
~~~~~~~~
::

 void MoveWindow(
          struct Window * window,
          LONG dx,
          LONG dy );

Function
~~~~~~~~
::

     Change the position of a window on the screen.


Inputs
~~~~~~
::

     window - Move this window
     dx, dy - Move it that many pixels along the axis (right, down)


Result
~~~~~~
::

     The window will move when the next input event will be received.



See also
~~~~~~~~

`SizeWindow()`_ 

----------

MoveWindowInFrontOf()
=====================

Synopsis
~~~~~~~~
::

 void MoveWindowInFrontOf(
          struct Window * window,
          struct Window * behindwindow );

Function
~~~~~~~~
::

     Arrange the relative depth of a window.


Inputs
~~~~~~
::

     window - the window to reposition
     behindwindow - the window the other one will be brought in front of


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`WindowToFront()`_ `WindowToBack()`_ `hyperlayers.library/MoveLayerInFrontOf() <./hyperlayers#movelayerinfrontof>`_ 

----------

NewModifyProp()
===============

Synopsis
~~~~~~~~
::

 void NewModifyProp(
          struct Gadget    * gadget,
          struct Window    * window,
          struct Requester * requester,
          ULONG flags,
          ULONG horizPot,
          ULONG vertPot,
          ULONG horizBody,
          ULONG vertBody,
          LONG numGad );

Function
~~~~~~~~
::

     Changes the values in the PropInfo-structure of a proportional
     gadget and refreshes the specified number of gadgets beginning
     at the proportional gadget. If numGad is 0 (zero), then no
     refreshing is done.


Inputs
~~~~~~
::

     gadget - Must be a PROPGADGET.
     window - The window which contains the gadget
     requester - If the gadget has GTYP_REQGADGET set, this must be
         non-NULL.
     flags - New flags
     horizPot - New value for the HorizPot field of the PropInfo
     vertPot - New value for the VertPot field of the PropInfo
     horizBody - New value for the HorizBody field of the PropInfo
     vertBody - New value for the VertBody field of the PropInfo
     numGad - How many gadgets to refresh. 0 means none (not even
         the current gadget) and -1 means all of them.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     If NewModifyProp does not work for you, check if you
     really have a gadget with GTYP_PROPGADGET set. If you
     create a new gadget object from PROPGCLASS, you
     might very well get a GTYP_CUSTOMGADGET gadget.
     As a workaround, you might have to set the
     gadget type to GTYP_PROPGADGET manually during the
     call to NewModifyProp. Intuition does this, too.



See also
~~~~~~~~

`ModifyProp()`_ `RefreshGadgets()`_ `RefreshGList()`_ 

----------

NewObjectA()
============

Synopsis
~~~~~~~~
::

 APTR NewObjectA(
          struct IClass  * classPtr,
          UBYTE          * classID,
          struct TagItem * tagList );
 
 APTR NewObject(
          struct IClass  * classPtr,
          UBYTE          * classID,
          TAG tag, ... );

Function
~~~~~~~~
::

     Use this function to create BOOPSI objects (BOOPSI stands for
     "Basic Object Oriented Programming System for Intuition").

     You may specify a class either by its name (if it's a public class)
     or by a pointer to its definition (if it's a private class). If
     classPtr is NULL, classID is used.


Inputs
~~~~~~
::

     classPtr - Pointer to a private class (or a public class if you
         happen to have a pointer to it)
     classID - Name of a public class
     tagList - Initial attributes. Read the documentation of the class
         carefully to find out which attributes must or can be specified
         here.


Result
~~~~~~
::

     A BOOPSI object which can be manipulated with general functions and
     which must be disposed of with DisposeObject() later.


Notes
~~~~~
::

     This function sends OM_NEW to the dispatcher of the class.



See also
~~~~~~~~

`DisposeObject()`_ `SetAttrsA()`_ `GetAttr()`_ `MakeClass()`_ "Basic Object-Oriented Programming System for Intuition" and "Boopsi Class Reference" Document. 

----------

NextObject()
============

Synopsis
~~~~~~~~
::

 APTR NextObject(
          APTR objectPtrPtr );

Function
~~~~~~~~
::

     Use this function to iterate through a list of BOOPSI objects.
     You may do whatever you want with the object returned, even
     remove it from the list or dispose it, and then continue to
     iterate through the list.


Inputs
~~~~~~
::

     objectPtrPtr - the pointer to a variable. This must be the same
         variable, as long as you iterate though the same list. This
         variable must initially be filled with the lh_Head of a list.


Result
~~~~~~
::

     A BOOPSI object, which can be manipulated.



See also
~~~~~~~~

`NewObjectA()`_ "Basic Object-Oriented Programming System for Intuition" and "Boopsi Class Reference" Document. 

----------

NextPubScreen()
===============

Synopsis
~~~~~~~~
::

 UBYTE * NextPubScreen(
          struct Screen * screen,
          UBYTE * namebuff );

Function
~~~~~~~~
::

     Gets the next public screen in the system; this allows visitor windows
     to jump among public screens in a cycle.


Inputs
~~~~~~
::

     screen   - Pointer to the public screen your window is open in or
                NULL if you don't have a pointer to a public screen.
     namebuff - Pointer to a buffer with (at least) MAXPUBSCREENNAME+1
                characters to put the name of the next public screen in.


Result
~~~~~~
::

     Returns 'namebuff' or NULL if there are no public screens.


Notes
~~~~~
::

     We cannot guarantee that the public screen, the name of which you got
     by using this function, is available when you call for instance
     LockPubScreen(). Therefore you must be prepared to handle failure of
     that kind of functions.

     This function may return the name of a public screen which is in
     private mode.

     The cycle order is undefined, so draw no conclusions based on it!



See also
~~~~~~~~

`OpenScreen()`_ `PubScreenStatus()`_ 

----------

ObtainGIRPort()
===============

Synopsis
~~~~~~~~
::

 struct RastPort * ObtainGIRPort(
          struct GadgetInfo * gInfo );

Function
~~~~~~~~
::

     This function sets up a RastPort for exclusive use by custom
     gadget hook routines. Call this function each time a hook
     routine needs to render into the gadget and ReleaseGIRPort()
     immediately afterwards.


Inputs
~~~~~~
::

     gInfo - Pointer to GadgetInfo structure, as passed to each
         custom gadget hook function.


Result
~~~~~~
::

     Pointer to a RastPort you can render to. NULL if you aren't
     allowed to render into this gadget.


Notes
~~~~~
::

     If a routine passes a RastPort, eg. GM_RENDER, ObtainGIRPort()
     needn't be called.



See also
~~~~~~~~

`ReleaseGIRPort()`_ 

----------

OffGadget()
===========

Synopsis
~~~~~~~~
::

 void OffGadget(
          struct Gadget    * gadget,
          struct Window    * window,
          struct Requester * requester );

Function
~~~~~~~~
::

     Disable a gadget. It will appear ghosted.


Inputs
~~~~~~
::

     gadget - The gadget to deactivate
     window - The window, the gadget is in
     requester - The requester, the gadget is in or NULL if the
         gadget is in no requester


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function will update the gadget (unlike the original function
     which would update all gadgets in the window).



See also
~~~~~~~~

`AddGadget()`_ `RefreshGadgets()`_ 

----------

OffMenu()
=========

Synopsis
~~~~~~~~
::

 void OffMenu(
          struct Window    * window,
          UWORD menunumber );

Function
~~~~~~~~
::

     Disable a whole menu, an item or a sub-item depending on
     the menunumber.


Inputs
~~~~~~
::

     window - The window, the menu belongs to
     menunumber - The packed information on what piece of menu to disable


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`OnMenu()`_ `ResetMenuStrip()`_ 

----------

OnGadget()
==========

Synopsis
~~~~~~~~
::

 void OnGadget(
          struct Gadget    * gadget,
          struct Window    * window,
          struct Requester * requester );

Function
~~~~~~~~
::

     Enable a gadget. It will appear normal.


Inputs
~~~~~~
::

     gadget - The gadget to deactivate
     window - The window, the gadget is in
     requester - The requester, the gadget is in or NULL if the
         gadget is in no requester


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function will update the gadget (unlike the original function
     which would update all gadgets in the window).



----------

OnMenu()
========

Synopsis
~~~~~~~~
::

 void OnMenu(
          struct Window    * window,
          UWORD menunumber );

Function
~~~~~~~~
::

     Enable a whole menu, an item or a sub-item depending on
     the menunumber.


Inputs
~~~~~~
::

     window - The window, the menu belongs to
     menunumber - The packed information on what piece of menu to enable


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`OffMenu()`_ `ResetMenuStrip()`_ 

----------

OpenScreen()
============

Synopsis
~~~~~~~~
::

 struct Screen * OpenScreen(
          struct NewScreen * newScreen );


----------

OpenScreenTagList()
===================

Synopsis
~~~~~~~~
::

 struct Screen * OpenScreenTagList(
          struct NewScreen * newScreen,
          struct TagItem   * tagList );
 
 struct Screen * OpenScreenTags(
          struct NewScreen * newScreen,
          TAG tag, ... );

Function
~~~~~~~~
::

     Open a screen


Inputs
~~~~~~
::

     newScreen - struct with screen specification. This is for compatibility
         with OpenScreen() and usually set to NULL.
     tagList   - tags which specify the screen


Tags
~~~~
::

     SA_Left
         Default: 0
         
     SA_Top
         Default: 0
         
     SA_Width
         Default depends on display clip

     SA_Height
         Default depends on display clip
         
     SA_Depth
         Select depth of screen. This specifies how many
         colors the screen can display.
         Default: 1
         
     SA_DetailPen
         Pen number for details.
         Default: 0
         
     SA_BlockPen
         Pen number for block fills.
         Default: 1
         
     SA_Title (STRPTR)
         Default: NULL
     
     SA_Font (struct TextAttr *)
         Default: NULL, meaning user's preferred monospace font
         
     SA_BitMap (struct BitMap *)
         Provide a custom bitmap.

     SA_ShowTitle (BOOL)
         Default: TRUE
     
     SA_Behind (BOOL)
         Screen will be created behind other open screens.
         Default: FALSE
         
     SA_Quiet (BOOL)
         Intuition doesn't draw system gadgets and screen title.
         Defaults: FALSE

     SA_Type
         PUBLICSCREEN or CUSTOMSCREEN.

     SA_DisplayID
         32-bit display mode ID, as defined in the <graphics/modeid.h>.

     SA_Overscan
         Set an overscan mode.

         Possible values:

         OSCAN_TEXT - A region which is fully visible.
         Recommended for text display.

         OSCAN_STANDARD - A region whose edges are "just out of view."
         Recommended for games and presentations.

         OSCAN_MAX - Largest region which Intuition can handle comfortably.

         OSCAN_VIDEO - Largest region the graphics.library can display.

         Default: OSCAN_TEXT

     SA_DClip (struct Rectangle *)
         Define a DisplayClip region. See QueryOverscan().
         It's easier to use SA_Overscan.

     SA_AutoScroll (BOOL)
         Screens can be larger than the DisplayClip region. Set this tag
         to TRUE if you want to enable automatic scrolling when you reach
         the edge of the screen with the mouse pointer.

     SA_PubName (STRPTR)
         Make this screen a public screen with the given name.
         Screen is opened in "private" mode.

     SA_Pens (UWORD *)
         Define the pen array for struct DrawInfo. This enables
         the 3D look.

         This array contains often just the terminator ~0.
         You define a list of pens which overwrite the DrawInfo pens.
         The pen arrayy must be terminated with ~0.
         
     SA_PubTask (struct Task *)
         Task to be signalled, when last visitor window of a public
         screen is closed.

     SA_PubSig (UBYTE)
         Signal number used to notify a task when the last visitor window
         of a public screen is closed.

     SA_Colors (struct ColorSpec *)
         Screen's initial color palette. Array must be terminated
         with ColorIndex = -1.

     SA_FullPalette (BOOL)
         Intuition maintains a set of 32 preference colors.
         Default: FALSE

     SA_ErrorCode (ULONG *)
         Intuition puts additional error code in this field when
         opening the screen failed.
         OSERR_NOMONITOR     - monitor for display mode not available.
         OSERR_NOCHIPS       - you need newer custom chips for display mode.
         OSERR_NOMEM         - couldn't get normal memory
         OSERR_NOCHIPMEM     - couldn't get chip memory
         OSERR_PUBNOTUNIQUE  - public screen name already used
         OSERR_UNKNOWNMODE   - don't recognize display mode requested
         OSERR_TOODEEP       - screen too deep to be displayed on
                               this hardware (V39)
         OSERR_ATTACHFAIL    - An illegal attachment of screens was
                               requested (V39)

     SA_SysFont
         Select screen font type. This overwrites SA_Font.

         Values:
             0 - Fixed-width font (old-style)
             1 - Font which is set by font preferences editor. Note:
                 windows opened on this screen will still have the rastport
                 initialized with the fixed-width font (sysfont 0).

         Default: 0

     SA_Parent (struct Screen *)
         Attach the screen to the given parent screen.

     SA_FrontChild (struct Screen *)
         Attach given child screen to this screen. Child screen
         must already be open. The child screen will go to the
         front of the screen group.

     SA_BackChild (struct Screen *)
         Attach given child screen to this screen. Child screen
         must already be open. The child screen will go behind other
         child screens.

     SA_BackFill (struct Hook *)
         Backfill hook (see layers.library/InstallLayerInfoHook() ).

     SA_Draggable (BOOL)
         Make screen draggable.
         Default: TRUE

     SA_Exclusive (BOOL)
         Set to TRUE if the screen must not share the display with
         other screens. The screen will not be draggable and doesn't
         appear behind other screens, but it still is depth arrangeable.
         Default: FALSE

     SA_SharePens (BOOL)
         Per default, Intuition obtains the pens of a public screen with
         PENF_EXCLUSIVE. Set this to TRUE to instruct Intuition to leave
         the pens unallocated.
         Default: FALSE

     SA_Colors32 (ULONG *)
         Data is forwarded to graphics.library/LoadRGB32().
         Overwrites values which were set by SA_Colors.

     SA_Interleaved (BOOL)
         Request interleaved bimap. It this fails a non-interleaved
         bitmap will be allocated.
         Default: FALSE

     SA_VideoControl (struct TagItem *)
         Taglist which will be  passed to VideoControl() after the
         screen is open.

     SA_ColorMapEntries:
         Number of entries of the ColorMap.
         Default: 1<<depth, but not less than 32

     SA_LikeWorkbench (BOOL)
         Inherit depth, colors, pen-array, screen mode, etc. from
         the Workbench screen. Individual attributes can be overridden
         with tags.
         Default: FALSE

     SA_MinimizeISG (BOOL)
         Minimize the Inter-Screen-Gap. For compatibility,


Result
~~~~~~
::

     Pointer to screen or NULL if opening fails.


Notes
~~~~~
::

     If you need a pointer to the screen's bitmap use
     Screen->RastPort.BitMap instead of &Screen->BitMap.

     If you want DOS requester to appear on your screen you have to do:
         process = FindTask(0);
         process->pr_WindowPtr = (APTR) window;
     The old value of pr->WindowPtr must be reset before you quit your
     program.



----------

OpenWindow()
============

Synopsis
~~~~~~~~
::

 struct Window * OpenWindow(
          struct NewWindow * newWindow );

Function
~~~~~~~~
::

     Opens a new window with the characteristics specified in
     newWindow.


Inputs
~~~~~~
::

     newWindow - How you would like your new window.


Result
~~~~~~
::

     A pointer to the new window or NULL if it couldn't be opened. Reasons
     for this might be lack of memory or illegal attributes.



See also
~~~~~~~~

`CloseWindow()`_ `ModifyIDCMP()`_ 

----------

OpenWindowTagList()
===================

Synopsis
~~~~~~~~
::

 struct Window * OpenWindowTagList(
          struct NewWindow * newWindow,
          struct TagItem   * tagList );
 
 struct Window * OpenWindowTags(
          struct NewWindow * newWindow,
          TAG tag, ... );

Function
~~~~~~~~
::

     Open a new window.


Inputs
~~~~~~
::

     NewWindow - structure with window specification. This is for
                 compatibility with OpenWindow() and usually set to NULL
     tagList   - tags which specify appearance and behaviour of the window


Tags
~~~~
::

     WA_Left      - Left edge of the window
     WA_Top       - Top edge of the window
     WA_Width     - Width of the window
     WA_Height    - Height of the window
     WA_DetailPen - Pen number for window details (obsolete)
     WA_BlockPen  - Pen number for filled blocks (obsolete)
     WA_IDCMP     - Define what events should send messages to your task

     WA_Flags
         Initial values for various boolean window properties. Can be
         overwritten by WA_... tags.

     WA_Gadgets (struct Gadget *)
         Pointer to a linked list of gadgets

     WA_Title (STRPTR) - Window title string

     WA_CustomScreen (struct Screen *)
         Open window on the given screen

     WA_SuperBitMap (struct BitMap *)
         Create window with superbitmap refreshing

     WA_MinWidth           - Minimum width of the window
     WA_MinHeight          - Minimum height of the window
     WA_MaxWidth           - Maximum width of the window
     WA_MaxHeight          - Maximum height of the window
         Use 0 to keep the current size as limit. The maximums can be
         set to -1 or ~0 to limit size only to screen dimension.

     WA_SizeGadget (BOOL)  - Make window resizeable
     WA_DragBar (BOOL)     - Make window dragable
     WA_DepthGadget (BOOL) - Add a depth gadget
     WA_CloseGadget (BOOL) - Add a close gadget

     WA_Backdrop (BOOL)
         Create a window which is placed behind other windows

     WA_ReportMouse (BOOL) - Store mouse position in struct Window

     WA_NoCareRefresh (BOOL)
         Use this if you don't want to be responsible for calling
         BeginRefresh()/EndRefresh().

     WA_Borderless (BOOL) - Create borderless window

     WA_Activate (BOOL)
         Make this window the active one, i.e. it
         receives the input from mouse and keyboard.

     WA_RMBTrap (BOOL)
         Set to TRUE if you want to get button events
         events for the right mouse button.

     WA_SimpleRefresh (BOOL)
         Enable simplerefresh mode. Only specify if TRUE.

     WA_SmartRefresh (BOOL)
         Enable smartrefresh mode. Only specify if TRUE.

     WA_SizeBRight (BOOL)    - Place size gadget in right window border
     WA_SizeBBottom (BOOL)   - Place size gadget in bottom window border

     WA_GimmeZeroZero (BOOL)
         Create a GimmeZeroZero window. The window borders have their own
         layer, so you can't overdraw it. The coordinate 0,0 is related to
         the inner area of the window. This makes handling of windows
         easier, but it slows down the system.

     WA_NewLookMenus (BOOL)
         Use DrawInfo colors for rendering the menu bar.

     WA_ScreenTitle (STRPTR)
         Screen title which is shown when window is active.

     WA_AutoAdjust (BOOL)
         TRUE means that Intuition can move or shrink the window
         to fit on the screen, within the limits given with
         WA_MinWidth and WA_MinHeight. This attribute defaults
         to TRUE when you call OpenWindowTags() with a NULL pointer
         for NewWindow.

     WA_InnerWidth
     WA_InnerHeight
         Dimensions of the interior region of the window.

         Note that this restricts border gadgets:
         - GACT_LEFTBORDER gadgets can't be GFLG_RELWIDTH if
           WA_InnerWidth is used.
         - GACT_RIGHTBORDER gadgets must be GFLG_RELRIGHT if
           WA_InnerWidth is used.
         - GACT_TOPBORDER gadgets can't be GFLG_RELHEIGHT if
           WA_InnerHeight is used.
         - GACT_BOTTOMBORDER gadgets must be GFLG_RELBOTTOM if
           WA_InnerHeight is used.

     WA_PubScreen (struct Screen *)
         Open the window on the public screen with the given address.
         An address of NULL means default public screen. You're
         responsible that the screen stays open until OpenWindowTags()
         has finished, i.e.
         you're the owner of the screen,
         you have already a window open on the screen
         or you use LockPubScreen()

     WA_PubScreenName (STRPTR)
         Open the window on the public screen with the given name.

     WA_PubScreenFallBack (BOOL)
         TRUE means that the default public screen can be used if
         the specified named public screen is not available.

     WA_Zoom (WORD *)
         4 WORD's define the initial Left/Top/Width/Height of the
         alternative zoom position/dimension. This adds a zoom
         gadget to the window. If both left and top are set to ~0
         the window will only be resized.

     WA_MouseQueue
         Limits the number of possible mousemove messages. Can
         be changed with SetMouseQueue().

     WA_RptQueue
         Limits the number of possible repeated IDCMP_RAWKEY,
         IDCMP_VANILLAKEY and IDCMP_IDCMPUPDATE messages.

     WA_BackFill (struct Hook *)
         Function to be called for backfilling

     WA_MenuHelp (BOOL)
         Enables menuhelp. Pressing the help key during menu handling
         sends IDCMP_MENUHELP messages.

     WA_NotifyDepth (BOOL)
         If TRUE send IDCMP_CHANGEWINDOW events when window is
         depth arranged. Code field will be CWCODE_DEPTH.

     WA_Checkmark (struct Image *)
         Image to use as a checkmark in menus.

     WA_AmigaKey (struct Image *)
         Image to use as the Amiga-key symbol in menus.

     WA_Pointer (APTR)
         The pointer to associate with the window. Use NULL
         for the Preferences default pointer. You can create
         custom pointers with NewObject() on "pointerclass".
         Default: NULL.

     WA_BusyPointer (BOOL)
         Enable the Preferences busy-pointer.
         Default: FALSE.

     WA_PointerDelay (BOOL)
         Set this to TRUE to delay change of the pointer image.
         This avoids flickering of the mouse pointer when it's
         changed for short times.

     WA_HelpGroup (ULONG)
         Get IDCMP_GADGETHELP messages not only from the active
         window, but from all its windows.
         You have to get a help ID with utility.library/GetUniqueID()
         and use it as data for WA_HelpGroup for all windows.

     WA_HelpGroupWindow (struct Window *)
         Alternative for WA_HelpGroup. Use the helpgroup of
         another window.

     WA_TabletMessages (BOOL)
         Request extended tablet data.
         Default: FALSE

     WA_ToolBox (BOOL)
         Make this window a toolbox window

     WA_Parent (struct Window *)
         Make the window a child of the given window.

     WA_Visible (BOOL)
         Make window visible.
         Default: TRUE

     WA_ShapeRegion (struct Region *)

     WA_ShapeHook (struct Hook *)


Result
~~~~~~
::

     A pointer to the new window or NULL if it couldn't be
     opened. Reasons for this might be lack of memory or illegal
     attributes.



----------

OpenWorkBench()
===============

Synopsis
~~~~~~~~
::

 IPTR OpenWorkBench();

Function
~~~~~~~~
::

     Attempt to open the Workbench screen.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     Tries to (re)open WorkBench screen. If successful return value
     is a pointer to the screen structure, which shouldn't be used,
     because other programs may close the WorkBench and make the
     pointer invalid. If this function fails the return value is NULL.



See also
~~~~~~~~

`CloseWorkBench()`_ 

----------

PointInImage()
==============

Synopsis
~~~~~~~~
::

 BOOL PointInImage(
          ULONG point,
          struct Image * image );

Function
~~~~~~~~
::

     Check whether a point is inside an image.


Inputs
~~~~~~
::

     point - This are the packed point coordinates. The X coordinate
         in in the upper 16 bits and the Y coordinate is in the
         lower 16 bits. The coordinates are signed.
     image - Check against this image.


Result
~~~~~~
::

     TRUE if the point is inside the image, FALSE otherwise.



----------

PrintIText()
============

Synopsis
~~~~~~~~
::

 void PrintIText(
          struct RastPort  * rp,
          struct IntuiText * iText,
          LONG leftOffset,
          LONG topOffset );

Function
~~~~~~~~
::

     Render an IntuiText in the specified RastPort with the
     specified offset.


Inputs
~~~~~~
::

     rp - Draw into this RastPort
     iText - Render this text
     leftOffset, topOffset - Starting-Point. All coordinates in the
         IntuiText structures are relative to this point.


Result
~~~~~~
::

     None.



----------

PubScreenStatus()
=================

Synopsis
~~~~~~~~
::

 UWORD PubScreenStatus(
          struct Screen * Scr,
          UWORD StatusFlags );

Function
~~~~~~~~
::

     Change the status flags for a given public screen.


Inputs
~~~~~~
::

     Scr         - The screen the flags of which to change.
     StatusFlags - The new values for the flags, see <intuition/screens.h>
                   for further information on the flag bits.


Result
~~~~~~
::

     Clears bit 0 if the screen wasn't public or if it was impossible
     to make private (PSNF_PRIVATE) as visitor windows are open on it.
     The other bits in the return value are reserved for future use.



See also
~~~~~~~~

`OpenScreen()`_ 

----------

QueryOverscan()
===============

Synopsis
~~~~~~~~
::

 LONG QueryOverscan(
          ULONG displayid,
          struct Rectangle * rect,
          WORD oscantype );

Function
~~~~~~~~
::

     Query overscan dimensions. The resulting rectangle can be used
     with SA_DisplayID.

     Overscan types:
     OSCAN_TEXT: completely visible. Left/Top is always 0,0.
     OSCAN_STANDARD: visible bounds of monitor. Left/Top may be negative.
     OSCAN_MAX: The largest displayable region.
     OSCAN_VIDEO: The absolute largest region that the graphics.library
         can display.  This region must be used as-is.


Inputs
~~~~~~
::

     displayid - ID to be queried
     rect      - Pointer to struct Rectangle to store result
     oscantype - OSCAN_TEXT, OSCAN_STANDARD, OSCAN_MAX, OSCAN_VIDEO


Result
~~~~~~
::

     TRUE  - Monitorspec exists
     FALSE - Monitorspec doesn't exist



----------

RefreshGadgets()
================

Synopsis
~~~~~~~~
::

 void RefreshGadgets(
          struct Gadget    * gadgets,
          struct Window    * window,
          struct Requester * requester );

Function
~~~~~~~~
::

     Refreshes all gadgets starting at the specified gadget.


Inputs
~~~~~~
::

     gadgets - The first gadget to be refreshed
     window - The gadget must be in this window
     requester - If any gadget has GTYP_REQGADGET set, this must
         point to a valid Requester. Otherwise the value is ignored.


Result
~~~~~~
::

     None.


Example
~~~~~~~
::

     // Refresh all gadgets of a window
     RefreshGadgets (win->FirstGadget, win, NULL);



See also
~~~~~~~~

`RefreshGList()`_ 

----------

RefreshGList()
==============

Synopsis
~~~~~~~~
::

 void RefreshGList(
          struct Gadget    * gadgets,
          struct Window    * window,
          struct Requester * requester,
          LONG numGad );

Function
~~~~~~~~
::

     Refresh (draw anew) the specified number of gadgets starting
     at the specified gadget.


Inputs
~~~~~~
::

     gadgets - This is the first gadget which will be refreshed.
     window - The window which contains the gadget
     requester - If the gadget has GTYP_REQGADGET set, this must be
         a pointer to a Requester; otherwise the value is
         ignored.
     numGad - How many gadgets should be refreshed. The value
         may range from 0 to MAXLONG. If there are less gadgets
         in the list than numGad, only the gadgets in the
         list will be refreshed.


Result
~~~~~~
::

     None.


Example
~~~~~~~
::

     // Refresh one gadget
     RefreshGList (&gadget, win, NULL, 1);

     // Refresh all gadgets in the window
     RefreshGList (win->FirstGadget, win, NULL, -1L);


Notes
~~~~~
::

     This function *must not* be called inside a
     BeginRefresh()/EndRefresh() pair.



----------

RefreshWindowFrame()
====================

Synopsis
~~~~~~~~
::

 void RefreshWindowFrame(
          struct Window * window );

Function
~~~~~~~~
::

     Redraw window borders.


Inputs
~~~~~~
::

     window - pointer to a window whose borders should be redrawn



----------

ReleaseGIRPort()
================

Synopsis
~~~~~~~~
::

 void ReleaseGIRPort(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Release a RastPort previously obtained by ObtainGIRPort().


Inputs
~~~~~~
::

     rp - The result of ObtainGIRPort()


Result
~~~~~~
::

     None.



----------

RemakeDisplay()
===============

Synopsis
~~~~~~~~
::

 LONG RemakeDisplay();

Function
~~~~~~~~
::

     Remake the entire Intuition display.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     Zero for success, non-zero for failure.



See also
~~~~~~~~

`RethinkDisplay()`_ `MakeScreen()`_ `graphics.library/MakeVPort() <./graphics#makevport>`_ `graphics.library/MrgCop() <./graphics#mrgcop>`_ `graphics.library/LoadView() <./graphics#loadview>`_ 

----------

RemoveClass()
=============

Synopsis
~~~~~~~~
::

 void RemoveClass(
          struct IClass * classPtr );

Function
~~~~~~~~
::

     Makes a public class inaccessible. This function may be called
     several times on the same class and even if the class never was
     in the public list.


Inputs
~~~~~~
::

     classPtr - Pointer to the result of MakeClass(). May be NULL.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`MakeClass()`_ `FreeClass()`_ `AddClass()`_ "Basic Object-Oriented Programming System for Intuition" and "Boopsi Class Reference" Document. 

----------

RemoveGadget()
==============

Synopsis
~~~~~~~~
::

 UWORD RemoveGadget(
          struct Window * window,
          struct Gadget * gadget );

Function
~~~~~~~~
::

     Remove a gadget from the list of gadgets in a window.


Inputs
~~~~~~
::

     window - Remove the gadget from this list.
     gadget - Remove this gadget.


Result
~~~~~~
::

     The position of the gadget or 0xFFFF if the gadget doesn't
     exist or the gadget is the 65535th of the list.



----------

RemoveGList()
=============

Synopsis
~~~~~~~~
::

 UWORD RemoveGList(
          struct Window * remPtr,
          struct Gadget * gadget,
          LONG numGad );

Function
~~~~~~~~
::

     Remove sublist of gadgets from a window.


Inputs
~~~~~~
::

     remPtr - window from which gadgets should be removed
     gadget - pointer gadget to be removed
     numGad - number of gadgets to remove. Use -1 to remove
              all gadgets to the end of the list.


Result
~~~~~~
::

     Ordinal number of the removed gadget or -1 on failure



See also
~~~~~~~~

`RemoveGadget()`_ `AddGadget()`_ `AddGList()`_ 

----------

ReportMouse()
=============

Synopsis
~~~~~~~~
::

 void ReportMouse(
          LONG flag,
          struct Window * window );

Function
~~~~~~~~
::

     Enable or disable the window flag REPORTMOUSE. If the flag is
     set, you will receive an IDCMP event every time the user moves
     the mouse.


Inputs
~~~~~~
::

     flag - Enable (TRUE) or disable (FALSE) the reports.
     window - Do it in this window.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     As you might have noticed, the arguments are twisted.



----------

Request()
=========

Synopsis
~~~~~~~~
::

 BOOL Request(
          struct Requester * requester,
          struct Window * window );

Function
~~~~~~~~
::

     Add a requester to specified window and display it.


Inputs
~~~~~~
::

     requester - The requester to be displayed
     window - The window to which the requester belongs


Result
~~~~~~
::

     TRUE if requester was opened successfully, FALSE else.



See also
~~~~~~~~

`EndRequest()`_ `InitRequester()`_ 

----------

ResetMenuStrip()
================

Synopsis
~~~~~~~~
::

 BOOL ResetMenuStrip(
          struct Window * window,
          struct Menu * menu );

Function
~~~~~~~~
::

     Works like a "fast" SetMenuStrip() as it doesn't check Menu or
     calculate internal values before attaching the Menu to the Window.
     Use this function only if the Menu has been added before by
     SetMenuStrip() and you changed nothing in the struct except
     CHECKED and ITEMENABLED flags.


Inputs
~~~~~~
::

     window - The window to add the MenuStrip to
     menu   - The menu to be added to the window above.


Result
~~~~~~
::

     Always TRUE.


Notes
~~~~~
::

     Yes, I do repeat it again:
     Use this function only if the Menu has been added before by
     SetMenuStrip() and you changed nothing in the struct except
     CHECKED and ITEMENABLED flags.



See also
~~~~~~~~

`SetMenuStrip()`_ `ClearMenuStrip()`_ 

----------

RethinkDisplay()
================

Synopsis
~~~~~~~~
::

 LONG RethinkDisplay();

Function
~~~~~~~~
::

     Check and update, i.e. redisplay the whole Intuition display.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     Zero for success, non-zero for failure.



See also
~~~~~~~~

`RemakeDisplay()`_ `MakeScreen()`_ `graphics.library/MakeVPort() <./graphics#makevport>`_ `graphics.library/MrgCop() <./graphics#mrgcop>`_ `graphics.library/LoadView() <./graphics#loadview>`_ 

----------

ScreenDepth()
=============

Synopsis
~~~~~~~~
::

 void ScreenDepth(
          struct Screen * screen,
          ULONG flags,
          APTR reserved );

Function
~~~~~~~~
::

     Move the specified screen to the front or back, based on passed flag.
     If the screen is in a group, the screen will change its position in
     the group only. If the screen is the parent of a group, the whole
     group will be moved.


Inputs
~~~~~~
::

     screen - Move this screen.
     flags - SDEPTH_TOFRONT or SDEPTH_TOBACK for bringing the screen to
         front or back.
         If the screen is a child of another screen you may specify
         SDEPTH_INFAMILY to move the screen within the family. If
         not specified the whole family will move.
     reserved - For future use. MUST be NULL by now.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     Only the owner of the screen should use SDEPTH_INFAMILY.
     Intentionally commodities should not change the internal arrangement
     of screen families.


Bugs
~~~~
::

     I am not sure, if it is enough to just send a SNOTIFY message to one
     screen. I would suggest, the former FirstScreen gets a SDEPTH_TOBACK
     message and the new FirstScreen gets a SDEPTH_TOFRONT message.
     Currently only the screen supplied with ScreenDepth gets a message.

     But those messages need to be sent in front of the actual
     screen depth change because of the SNOTIFY_WAIT_REPLY-flag must be
     able to block the action. But we only know after int_screendepth(),
     if there was a change and which change took place.

     So I leave it, as it is. This way SNOTIFY_WAIT_REPLY should work
     at least. Is there something written in the AutoDocs, how this has
     to be done (each screen gets a message)?

     (o1i)



See also
~~~~~~~~

`ScreenToBack()`_ `ScreenToFront()`_ 

----------

ScreenPosition()
================

Synopsis
~~~~~~~~
::

 void ScreenPosition(
          struct Screen * screen,
          ULONG flags,
          LONG x1,
          LONG y1,
          LONG x2,
          LONG y2 );

Function
~~~~~~~~
::

     Move a screen to the specified position or by the specified
     increment. Resolution is always the screen resolution.
     If this move would be out of bounds, the move is clipped at
     these boundaries. The real new position can be obtained from
     LeftEdge and TopEdge of the screen's structure.


Inputs
~~~~~~
::

     screen - Move this screen
     flags - One of SPOS_RELATIVE, SPOS_ABSOLUTE or SPOS_MAKEVISIBLE
         Use SPOS_FORCEDRAG to override non-movable screens ie. screens
         opened with {SA_Draggable,FLASE} attribute.

         SPOS_RELATIVE (or NULL) moves the screen by a delta of x1,y1.

         SPOS_ABSOLUTE moves the screen to the specified position x1,y1.

         SPOS_MAKEVISIBLE moves an oversized scrolling screen to make
         the rectangle (x1,y1),(x2,y2) visible
     x1,y1 - Absolute (SPOS_ABSOLUTE) or relative (SPOS_RELATIVE) coordinate
         to move screen, or upper-left corner of rectangle
         (SPOS_MAKEVISIBLE)
     x2,y2 - Ignored with SPOS_ABSOLUTE and SPOS_RELATIVE.
         Lower-right corner of rectangle with SPOS_MAKEVISIBLE.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     SPOS_FORCEDRAG should only be used by the owner of the screen.



See also
~~~~~~~~

`MoveScreen()`_ `RethinkDisplay()`_ 

----------

ScreenToBack()
==============

Synopsis
~~~~~~~~
::

 void ScreenToBack(
          struct Screen * screen );

Function
~~~~~~~~
::

     Move a screen behind all other screens. If the screen is in a
     group, the screen will be moved behind all other screens in the
     group only. If the screen is the parent of a group, the whole
     group will be moved in the back.


Inputs
~~~~~~
::

     screen - Move this screen.


Result
~~~~~~
::

     You will see the screen move behind all other screens. If some
     screen before this screen occupies the whole display, then it
     will disappear completely. If all other screens occupy only part
     of the display, the screen will appear behind the screens.



See also
~~~~~~~~

`ScreenToFront()`_ `ScreenDepth()`_ 

----------

ScreenToFront()
===============

Synopsis
~~~~~~~~
::

 void ScreenToFront(
          struct Screen * screen );

Function
~~~~~~~~
::

     Move a screen in front of all other screens. If the screen is in a
     group, the screen will be moved in front of all other screens in the
     group only. If the screen is the parent of a group, the whole
     group will be moved in the front.


Inputs
~~~~~~
::

     screen - Move this screen.


Result
~~~~~~
::

     You will see the screen move in front of all other screens.



See also
~~~~~~~~

`ScreenToBack()`_ `ScreenDepth()`_ 

----------

ScrollWindowRaster()
====================

Synopsis
~~~~~~~~
::

 void ScrollWindowRaster(
          struct Window * win,
          WORD dx,
          WORD dy,
          WORD xmin,
          WORD ymin,
          WORD xmax,
          WORD ymax );

Function
~~~~~~~~
::

     Scrolls the content of the rectangle defined by (xmin,ymin)-
     (xmax,ymax) by (dx,dy) towards (0,0). This function calls
     ScrollRasterBF().
     The advantage of this function over calling ScrollRasterBF() is
     that the window will be informed about damages. A damage happens
     if in a simple window parts from concelealed areas are scrolled
     to visible areas. The visible areas will be blank as simple
     windows store no data for concealed areas.
     The blank parts that appear due to the scroll will be filled
     with EraseRect() and are not considered damaged areas.


Inputs
~~~~~~
::

     win       - pointer to window in which to scroll
     dx,dy     - scroll by (dx,dy) towards (0,0)
     xmin,ymin - upper left corner of the rectangle that will be
                 affected by the scroll
     xmax,ymax - lower rigfht corner of the rectangle that will be
                 affected by the scroll



----------

ScrollWindowRasterNoFill()
==========================

Synopsis
~~~~~~~~
::

 void ScrollWindowRasterNoFill(
          struct Window * win,
          WORD dx,
          WORD dy,
          WORD xmin,
          WORD ymin,
          WORD xmax,
          WORD ymax );

Function
~~~~~~~~
::

     Scrolls the content of the rectangle defined by (xmin,ymin)-
     (xmax,ymax) by (dx,dy) towards (0,0). This function calls
     ScrollRasterBF().
     The advantage of this function over calling ScrollRasterBF() is
     that the window will be informed about damages. A damage happens
     if in a simple window parts from concelealed areas are scrolled
     to visible areas. The visible areas will be blank as simple
     windows store no data for concealed areas.
     The blank parts that appear due to the scroll will be filled
     with EraseRect() and are not considered damaged areas.


Inputs
~~~~~~
::

     win       - pointer to window in which to scroll
     dx,dy     - scroll by (dx,dy) towards (0,0)
     xmin,ymin - upper left corner of the rectangle that will be
                 affected by the scroll
     xmax,ymax - lower rigfht corner of the rectangle that will be
                 affected by the scroll


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function is compatible with MorphOS.



----------

SetAttrsA()
===========

Synopsis
~~~~~~~~
::

 ULONG SetAttrsA(
          APTR object,
          struct TagItem * tagList );
 
 ULONG SetAttrs(
          APTR object,
          TAG tag, ... );

Function
~~~~~~~~
::

     Changes several attributes of an object at the same time. How the
     object interprets the new attributes depends on the class.


Inputs
~~~~~~
::

     object - Change the attributes of this object
     tagList - This is a list of attribute/value-pairs


Result
~~~~~~
::

     Depends on the class. For gadgets, this value is non-zero if
     they need redrawing after the values have changed. Other classes
     will define other return values.


Notes
~~~~~
::

     This function sends OM_SET to the object.



See also
~~~~~~~~

`NewObjectA()`_ `DisposeObject()`_ `GetAttr()`_ `MakeClass()`_ "Basic Object-Oriented Programming System for Intuition" and "Boopsi Class Reference" Document. 

----------

SetDefaultPubScreen()
=====================

Synopsis
~~~~~~~~
::

 void SetDefaultPubScreen(
          UBYTE * name );

Function
~~~~~~~~
::

     Specifies the default public screen for visitor windows to open up on.
     The screen is used when a requested public screen is not available
     and the FALLBACK option is enabled or when the visitor window asks for
     the default public screen.


Inputs
~~~~~~
::

     name - The name of the public screen that should be used as default,
            or NULL to specify the Workbench screen.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`OpenWindow()`_ `OpenScreen()`_ 

----------

SetDMRequest()
==============

Synopsis
~~~~~~~~
::

 BOOL SetDMRequest(
          struct Window * window,
          struct Requester * dmrequest );

Function
~~~~~~~~
::

     Try to set the DMRequest of a window. A DMRequest is a requester that
     appears if the user double-clicks with the menu button.

     The new DMRequest will only be set if the old DMRequest is not in use.
     The official way to change the DMRequest is to call ClearDMRequest()
     until it returns TRUE and then call SetDMRequest().


Inputs
~~~~~~
::

     window - The window from which the DMRequest is to be set
     dmrequest - Pointer to the requester


Result
~~~~~~
::

     TRUE if old DMRequest was not in use and therefore changed to
     the new one, or FALSE if the old DMRequest was in use and could
     not be set to the new one.


Notes
~~~~~
::

     If the DMRequest has the POINTREL flag set, the DMR will show up
     as close to the pointer as possible. The RelLeft/Top fields are
     used to fine-tune the positioning.



See also
~~~~~~~~

`ClearDMRequest()`_ `Request()`_ 

----------

SetEditHook()
=============

Synopsis
~~~~~~~~
::

 struct Hook * SetEditHook(
          struct Hook * hook );

Function
~~~~~~~~
::

     Sets the global (default) string editing hook of Intuition
     string gadgets.


Inputs
~~~~~~
::

     The string gadget editing hook to replace the old one.


Result
~~~~~~
::

     The old edit hook.



----------

SetGadgetAttrsA()
=================

Synopsis
~~~~~~~~
::

 IPTR SetGadgetAttrsA(
          struct Gadget * gadget,
          struct Window * window,
          struct Requester * requester,
          struct TagItem * tagList );
 
 IPTR SetGadgetAttrs(
          struct Gadget * gadget,
          struct Window * window,
          struct Requester * requester,
          TAG tag, ... );

Function
~~~~~~~~
::

     Sets some tags and provides gadget specific data. Prefer this to
     SetAttrsA(), if you are manipulating gadgets.


Inputs
~~~~~~
::

     gadget - Change the attributes of this gadget
     window - The window of the gadget
     requester - The requester of the gadget (or NULL)
     tagList - This is a list of attribute/value-pairs


Result
~~~~~~
::

     Depends in the class. For gadgets, this value is non-zero if
     they need redrawing after the values have changed. Other classes
     will define other return values.


Notes
~~~~~
::

     This function sends OM_SET to the gadget object.



See also
~~~~~~~~

`NewObjectA()`_ `SetAttrsA()`_ `GetAttr()`_ `DoGadgetMethodA()`_ "Basic Object-Oriented Programming System for Intuition" and "Boopsi Class Reference" Document. 

----------

SetIPrefs()
===========

Synopsis
~~~~~~~~
::

 ULONG SetIPrefs(
          APTR data,
          ULONG length,
          ULONG type );

Result
~~~~~~
::

     Depending on the operation.


Notes
~~~~~
::

     This function is currently considered private.



----------

SetMenuStrip()
==============

Synopsis
~~~~~~~~
::

 BOOL SetMenuStrip(
          struct Window * window,
          struct Menu   * menu );

Function
~~~~~~~~
::

     This function adds a MenuStrip to the Window, which can be invoked
     by the user after this call by pressing the right mouse button.
     Menus with no MenuItems will not be attached.


Inputs
~~~~~~
::

     window - The window to add the MenuStrip to
     menu   - The menu to be added to the window above.


Result
~~~~~~
::

     TRUE if all menus have at least one menuitem.


Notes
~~~~~
::

     This function calculates internal values and is therfore the
     official way to add a new MenuStrip to Window.
     Always do a ClearMenuStrip() before closing the Window or adding
     another MenuStrip to the Window.



See also
~~~~~~~~

`ResetMenuStrip()`_ `ClearMenuStrip()`_ 

----------

SetMouseQueue()
===============

Synopsis
~~~~~~~~
::

 LONG SetMouseQueue(
          struct Window * window,
          UWORD queuelength );

Function
~~~~~~~~
::

     Change the number of mouse messages for your window to be allowed
     to be outstanding.


Inputs
~~~~~~
::

     window - the window
     queuelength - the number of mouse messages to be allowed to be
         outstanding


Result
~~~~~~
::

     Returns -1 if the window is unknown otherwise the old value of the
     queuelength is returned.


Notes
~~~~~
::

     There should be a function for changing the repeat key queue limit
     too.



See also
~~~~~~~~

`OpenWindow()`_ 

----------

SetPointer()
============

Synopsis
~~~~~~~~
::

 void SetPointer(
          struct Window * window,
          const UWORD   * pointer,
          LONG height,
          LONG width,
          LONG xOffset,
          LONG yOffset );

Function
~~~~~~~~
::

     Changes the shape of the mouse pointer for a given window.


Inputs
~~~~~~
::

     window - Change it for this window
     pointer - The shape of the new pointer as a bitmap with depth 2.
     height - Height of the pointer
     width - Width of the pointer (must be <= 16)
     xOffset, yOffset - The offset of the "hot spot" relative to the
         left, top edge of the bitmap.



See also
~~~~~~~~

`ClearPointer()`_ 

----------

SetPrefs()
==========

Synopsis
~~~~~~~~
::

 struct Preferences * SetPrefs(
          struct Preferences * prefbuffer,
          LONG size,
          BOOL inform );

Function
~~~~~~~~
::

     Sets the current Preferences structure.


Inputs
~~~~~~
::

     prefbuffer - The buffer which contains your settings for the
         preferences.
     size - The number of bytes of the buffer you want to be copied.
     inform - If TRUE, all windows with IDCMP_NEWPREFS IDCMPFlags set
         get an IDCMP_NEWPREFS message.


Result
~~~~~~
::

     Returns your parameter buffer.



See also
~~~~~~~~

`GetDefPrefs()`_ `GetPrefs()`_ 

----------

SetPubScreenModes()
===================

Synopsis
~~~~~~~~
::

 UWORD SetPubScreenModes(
          UWORD modes );

Function
~~~~~~~~
::

     Specify global intuition public screen handling.


Inputs
~~~~~~
::

     modes - The new set of flags to consider. Currently defined flags are:
        SHANGHAI: Workbench windows are opened on the default public
            screen.
        POPPUBSCREEN: When a visitor window opens on a public screen, the
            screen is brought to front.


Result
~~~~~~
::

     The flags set before the change was made.



See also
~~~~~~~~

`OpenScreen()`_ 

----------

SetWindowPointerA()
===================

Synopsis
~~~~~~~~
::

 void SetWindowPointerA(
          struct Window * window,
          struct TagItem * taglist );
 
 void SetWindowPointer(
          struct Window * window,
          TAG tag, ... );


----------

SetWindowTitles()
=================

Synopsis
~~~~~~~~
::

 void SetWindowTitles(
          struct Window * window,
          CONST_STRPTR windowTitle,
          CONST_STRPTR screenTitle );

Function
~~~~~~~~
::

     Changes the current window and/or the screen title.


Inputs
~~~~~~
::

     window - Change the title for this window or the screen which the
         window contains.
     windowTitle - New title for the window or ((UBYTE *)~0L) to keep the
         old title or NULL for no title. If you specify a string,
         this string is *NOT* copied.
     screenTitle - New title for the screen of the window or ((UBYTE *)~0L)
         to keep the old title or NULL for no title. If you specify
         a title for the screen, this title will be shown when the
         window becomes active. If you specify a string, this string
         is *NOT* copied.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     You should be careful with specifying a screen title because that
     may irritate the user.



----------

ShowTitle()
===========

Synopsis
~~~~~~~~
::

 void ShowTitle(
          struct Screen * screen,
          BOOL ShowIt );

Function
~~~~~~~~
::

     Modify SHOWTITLE flag of the screen and refresh the screen and
     its windows.

     If ShowIt is TRUE the screen's title bar will be shown in front of
     WFLG_BACKDROP windows. A value of FALSE will bring the title bar
     behind all windows.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The default of the SHOWTITLE flag for new screens is TRUE.



----------

ShowWindow()
============

Synopsis
~~~~~~~~
::

 BOOL ShowWindow(
          struct Window * window,
          struct Window * other );

Function
~~~~~~~~
::

     Make a window visible. This function does not bring the
     window back into the visible area of the screen but rather
     switches it into visible state.


Inputs
~~~~~~
::

     window - The window to affect.


Result
~~~~~~
::

     Success indicator. On AROS it's always TRUE.


Notes
~~~~~
::

     This function is soure-compatible with AmigaOS v4.
     This function is also present in MorphOS v50, however
     considered private.



See also
~~~~~~~~

`HideWindow()`_ 

----------

SizeWindow()
============

Synopsis
~~~~~~~~
::

 void SizeWindow(
          struct Window * window,
          LONG dx,
          LONG dy );

Function
~~~~~~~~
::

     Modify the size of a window by the specified offsets.


Inputs
~~~~~~
::

     window - The window to resize.
     dx - Add this to the width.
     dy - Add this to the height.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The resize of the window may be delayed. If you depend on the
     information that is has changed size, wait for IDCMP_NEWSIZE.



----------

StartScreenNotifyTagList()
==========================

Synopsis
~~~~~~~~
::

 APTR StartScreenNotifyTagList(
          struct TagItem * tags );
 
 APTR StartScreenNotifyTags(
          TAG tag, ... );

Function
~~~~~~~~
::

     Add Notifications to Intuition. You will be notified when
     the screen changes.


Inputs
~~~~~~
::

     tags - see below


Tags
~~~~
::

     SNA_PubName (STRPTR)          - Name of the public screen. NULL means
                                     you'll get notifications for all
                                     screens.
     SNA_MsgPort (struct MsgPort*) - Notifications will be sent to this
                                     port.
     SNA_SigBit (BYTE)             - The signal bit to use
     SNA_SigTask (struct Task*)    - The task to signal
     SNA_UserData (IPTR)           - For your personal use. Will be copied
                                     into snm_UserData of the messages you
                                     receive.
     SNA_Hook (struct Hook*)
     SNA_Priority (Byte)           - Priority in the notification queue.
     SNA_Notify (ULONG)            - SNOTIFY_ flags, see
                                     intuition/intuition.h


Result
~~~~~~
::

     The value is private; only a test against ZERO is allowed and means
     Failure.


Notes
~~~~~
::

     This function is compatible with AmigaOS v4.



See also
~~~~~~~~

`EndScreenNotify()`_ 

----------

SysReqHandler()
===============

Synopsis
~~~~~~~~
::

 LONG SysReqHandler(
          struct Window  * window,
          ULONG   * IDCMPFlagsPtr,
          BOOL WaitInput );

Function
~~~~~~~~
::

     Handles a requester, which was opened with BuildSysRequest() or
     BuildEasyRequestArgs(). When this function is called all outstanding
     IDCMP requests are processed. If an IDCMP request that would close
     a normal EasyRequestArgs() is encountered, SysReqHandler() returns
     with a return code equally to the return code EasyRequestArgs()
     would have returned. You may call this function in synchronous or
     asynchronous mode, by setting the WaitInput parameter.


Inputs
~~~~~~
::

     window - The window pointer returned by either BuildSysRequest() or
              BuildEasyRequestArgs().
     IDCMPFlagsPtr - Pointer to a ULONG to store the IDCMP flag that was
                     received by the window. This will be set if you
                     provided additional IDCMP flags to BuildSysRequest() or
                     BuildEasyRequest(). You may set this to NULL. You must
                     initialize the pointed to ULONG every time you call
                     SysReqHandler().
     WaitInput - Set this to TRUE, if you want this function to wait for
                 the next IDCMP request, if there is none at the moment
                 the function is called.


Result
~~~~~~
::

     -2, if the requester was not satisfied. Normally you want to call
         this function at least until this function returns something
         different than -2.
     -1, if one of the IDCMP flags of idcmpPTR was set.
      0, if the rightmost button was clicked or an error occured.
      n, if the n-th button from the left was clicked.


Bugs
~~~~
::

     Gadget placing is still untidy.
     Does not support BuildSysRequest() requesters, yet.



See also
~~~~~~~~

`BuildSysRequest()`_ `BuildEasyRequestArgs()`_ 

----------

TimedDisplayAlert()
===================

Synopsis
~~~~~~~~
::

 BOOL TimedDisplayAlert(
          ULONG alertnumber,
          UBYTE * string,
          UWORD height,
          ULONG time );

Function
~~~~~~~~
::

     Display an alert with automatic time-out. See DisplayAlert()
     documentation.


Inputs
~~~~~~
::

     alertnumber - Alert code
     string - Text data to display
     height - Total height of alert display in pixels
     time   - Timeout measured in display frame refresh periods.


Result
~~~~~~
::

     TRUE or FALSE depending on user's reaction. FALSE in case of timeout.


Notes
~~~~~
::

     See DisplayAlert() documentation for detailed description of
     parameters.


Bugs
~~~~
::

     In AROS timeout is currently not implemented. Note that this
     function is obsolete and strongly deprecated for use in software.
     It is present only for backwards compatibility with AmigaOS(tm).



See also
~~~~~~~~

`DisplayAlert()`_ 

----------

UnlockIBase()
=============

Synopsis
~~~~~~~~
::

 void UnlockIBase(
          ULONG ibLock );

Function
~~~~~~~~
::

     Release parts of Intuition which have been blocked with a prior
     call to LockIBase().


Inputs
~~~~~~
::

     ibLock - The result of LockIBase().


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`LockIBase()`_ 

----------

unlockPubClass()
================

Synopsis
~~~~~~~~
::

 void unlockPubClass();

Function
~~~~~~~~
::

     Unlocks the public classes list.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`lockPubClass()`_ 

----------

UnlockPubScreen()
=================

Synopsis
~~~~~~~~
::

 void UnlockPubScreen(
          UBYTE         * name,
          struct Screen * screen );

Function
~~~~~~~~
::

     Release a lock to a screen locked by LockPubScreen().
     Identify screen by the pointer returned from LockPubScreen()
     and pass NULL name in normal cases.

     Sometimes it might be useful to specify the name string. In
     this case the screen pointer will be ignored.


Inputs
~~~~~~
::

     name - Name of the public screen to unlock. The name is case
         insensitive.
     screen - Pointer to the screen to unlock.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The screen parameter will be ignored if name is non-NULL.



See also
~~~~~~~~

`LockPubScreen()`_ 

----------

UnlockPubScreenList()
=====================

Synopsis
~~~~~~~~
::

 VOID UnlockPubScreenList();

Function
~~~~~~~~
::

     Release lock made by LockPubScreenList().


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`LockPubScreenList()`_ 

----------

ViewAddress()
=============

Synopsis
~~~~~~~~
::

 struct View * ViewAddress();

Function
~~~~~~~~
::

     Returns the address of the Intuition View structure. This view
     is needed if you want to use any of the graphics, text or animation
     functions in your window that need the pointer to the view structure.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     Address of the Intuition View structure



See also
~~~~~~~~

graphics.library 

----------

ViewPortAddress()
=================

Synopsis
~~~~~~~~
::

 struct ViewPort * ViewPortAddress(
          struct Window * Window );

Function
~~~~~~~~
::

     Returns the address of the viewport of a given window. Use this
     call, if you want to use any graphics, text or animation functions
     that require the address of a viewport for your window.


Inputs
~~~~~~
::

     Window - pointer to a Window structure


Result
~~~~~~
::

     Address of the Intuition ViewPort structure for the screen that your
     window is displayed on.



See also
~~~~~~~~

graphics.library 

----------

WBenchToBack()
==============

Synopsis
~~~~~~~~
::

 BOOL WBenchToBack();

Function
~~~~~~~~
::

     Bring the WorkBench behind all other screens.


Result
~~~~~~
::

     TRUE if the Workbench screen is open, FALSE otherwise.


Notes
~~~~~
::

     This function does not influence the position of the screen,
     it just changes the depth-arrangement of the screens.



See also
~~~~~~~~

`ScreenToBack()`_ `ScreenToFront()`_ `WBenchToFront()`_ 

----------

WBenchToFront()
===============

Synopsis
~~~~~~~~
::

 BOOL WBenchToFront();

Function
~~~~~~~~
::

     Make the WorkBench screen the frontmost.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     TRUE if the Workbench screen is open, FALSE else.


Notes
~~~~~
::

     This function does not influence the position of the screen,
     it just changes the depth-arrangement of the screens.



See also
~~~~~~~~

`ScreenToBack()`_ `ScreenToFront()`_ `WBenchToBack()`_ 

----------

WindowAction()
==============

Synopsis
~~~~~~~~
::

 void WindowAction(
          struct Window * window,
          ULONG action,
          struct TagItem * tags );
 
 void WindowActionTags(
          struct Window * window,
          ULONG action,
          TAG tag, ... );

Function
~~~~~~~~
::

     Perform an asynchronous action on a window that is not controlled
     by the caller task.

     This function is safe even when the window is destroyed by the owner
     during the call.


Inputs
~~~~~~
::

     window - a window to act upon
     action - a requested action code
     tags   - additional parameters, depending on the action

     Currently defined actions are:

       WAC_SENDIDCMPCLOSE - send an IDCMP_CLOSEWINDOW message.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function is compatible with MorphOS.

     The requested action is executed asynchronously; the function actually
     returns before it is complete.


Bugs
~~~~
::

     At the moment only WAC_SENDIDCMPCLOSE action is implemented.



----------

WindowLimits()
==============

Synopsis
~~~~~~~~
::

 BOOL WindowLimits(
          struct Window * window,
          WORD MinWidth,
          WORD MinHeight,
          UWORD MaxWidth,
          UWORD MaxHeight );

Function
~~~~~~~~
::

     This function sets the minimum and maximum sizes of a window.


Inputs
~~~~~~
::

     window - window to change
     MinWidth, MinHeight - the minimum size, may be 0 for no change
     MaxWidth, MaxHeight - the maximum size, may be 0 for no change,
         may be -1 for no maximum size


Result
~~~~~~
::

     A boolean. FALSE is returned if any of the provided sizes is out
     of range. Note that the other sizes take effect, though. TRUE if
     all sizes could be set.



See also
~~~~~~~~

`OpenWindow()`_ 

----------

WindowToBack()
==============

Synopsis
~~~~~~~~
::

 void WindowToBack(
          struct Window * window );

Function
~~~~~~~~
::

     Bring a window to the back (i.e. behind any other window).


Inputs
~~~~~~
::

     window - Which window


Result
~~~~~~
::

     None.



----------

WindowToFront()
===============

Synopsis
~~~~~~~~
::

 void WindowToFront(
          struct Window * window );

Function
~~~~~~~~
::

     Bring a window to the front (i.e. before any other window).


Inputs
~~~~~~
::

     window - Which window


Result
~~~~~~
::

     None.



----------

ZipWindow()
===========

Synopsis
~~~~~~~~
::

 void ZipWindow(
          struct Window * window );

Function
~~~~~~~~
::

     "Zip" (move and resize) a window to the coordinates and dimensions
     the window had at the last call of ZipWindow(), or invoked via the
     zoom-gadget.


Inputs
~~~~~~
::

     window - Which window


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This call is deferred. Wait() for IDCMP_CHANGEWINDOW if your
     program depends on the new size.



See also
~~~~~~~~

`ChangeWindowBox()`_ `MoveWindow()`_ `SizeWindow()`_ 

