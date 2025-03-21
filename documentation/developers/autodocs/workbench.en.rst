=========
workbench
=========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddAppIconA()`_                        `AddAppMenuItemA()`_                    `AddAppWindowA()`_                      `AddAppWindowDropZoneA()`_              
`ChangeWorkbenchSelectionA()`_          `CloseWorkbenchObjectA()`_              `GetNextAppIcon()`_                     `MakeWorkbenchObjectVisibleA()`_        
`OpenWorkbenchObjectA()`_               `QuoteWorkbench()`_                     `RegisterWorkbench()`_                  `RemoveAppIcon()`_                      
`RemoveAppMenuItem()`_                  `RemoveAppWindow()`_                    `RemoveAppWindowDropZone()`_            `SendAppWindowMessage()`_               
`StartWorkbench()`_                     `UnregisterWorkbench()`_                `UpdateWorkbench()`_                    `UpdateWorkbenchObjectA()`_             
`WBConfig()`_                           `WBInfo()`_                             `WorkbenchControlA()`_                  
======================================= ======================================= ======================================= ======================================= 

-----------

AddAppIconA()
=============

Synopsis
~~~~~~~~
::

 struct AppIcon * AddAppIconA(
          IPTR id,
          IPTR userdata,
          const char * text,
          struct MsgPort * msgport,
          BPTR lock,
          struct DiskObject * diskobj,
          struct TagItem * taglist );
 
 struct AppIcon * AddAppIcon(
          IPTR id,
          IPTR userdata,
          const char * text,
          struct MsgPort * msgport,
          BPTR lock,
          struct DiskObject * diskobj,
          TAG tag, ... );

Function
~~~~~~~~
::


 Add an icon to the workbench's list of AppIcons. If a workbench is
 running, the icon will appear on the workbench screen given that the
 call is successful.
     When a user interacts with the AppIcon, an AppMessage of type
 MTYPE_APPICON is sent to the message port specified. The different
 supported actions are:

 1. User double-clicking on the icon. am_NumArgs is zero and am_ArgList is
    NULL.
 2. Dropping one or more icons on the AppIcon. am_Numargs is the number of
    icons dropped plus one; am_ArgList is an array of pointers to WBArg
    structures of the icons dropped.
 3. Dropping the AppIcon on another icon -- NOT SUPPORTED.
 4. Invoking an "Icons" menu item when the AppIcon is selected. am_Class
    will be set to a value in AMCLASSICON_Open ... AMCLASSICON_EmptyTrash.


Inputs
~~~~~~
::


 id        --  AppIcon identification number; only for your use (ignored by
               workbench.library)
 userdata  --  user specific data (ignored by workbench.library)
 text      --  name of the icon
 lock      --  currently unused (must be set to NULL)
 msgport   --  message port to which notification messages will be sent
 diskobj   --  pointer to a DiskObject structure filled in as described
               below:
                   do_Magic    --  0
                   do_Version  --  0
                   do_Gadget   --  a gadget structure filled in as follows:
                          NextGadget    --  NULL
                          LeftEdge      --  0
                          TopEdge       --  0
                          Width         --  width of icon hit box
                          Height        --  height of icon hit box
                          Flags         --  0 or GADGHIMAGE
                          Activation    --  0
                          GadgetType    --  0
                          GadgetRender  --  pointer to an Image structure
                                            filled in as follows:
                                LeftEdge    --  0
                                TopEdge     --  0
                                Width       --  width of image (must be <=
                                                width of icon hit box)
                                Height      --  height of image (must be <=
                                                height of icon hit box)
                                Depth       --  number of bit planes of
                                                image
                                ImageData   --  pointer to word aligned
                                                image data
                                PlanePick   --  plane mask
                                                ((1 << depth) - 1)
                                PlaneOnOff  --  0
                                NextImage   --  NULL
                          SelectRender   --  NULL
                          GadgetText     --  NULL
                          MutualExclude  --  NULL
                          SpecialInfo    --  NULL
                          GadgetID       --  NULL
                          UserData       --  NULL
                   do_Type         --  0
                   do_DefaultTool  --  NULL
                   do_ToolTypes    --  NULL
                   do_CurrentX     --  NO_ICON_POSITION (recommended)
                   do_CurrentY     --  NO_ICON_POSITION (recommended)
                   do_DrawerData   --  NULL
                   do_ToolWindow   --  NULL
                   do_StackSize    --  0

 taglist  --  tags (see below)


Tags
~~~~
::

 
 WBAPPICONA_SupportsOpen (BOOL)
 Set to TRUE if the AppIcon should respond to the "Open" menu.
 [default = TRUE]

 WBAPPICONA_SupportsCopy (BOOL)
 Set to TRUE if the AppIcon should respond to the "Copy" menu.
 [default = FALSE]

 WBAPPICONA_SupportsRename (BOOL)
 Set to TRUE if the AppIcon should respond to the "Rename" menu.
 [default = FALSE]

 WBAPPICONA_SupportsInformation (BOOL)
 Set to TRUE if the AppIcon should respond to the "Information" menu.
 [default = FALSE]

 WBAPPICONA_SupportsSnapshot (BOOL)
 Set to TRUE if the AppIcon should respond to the "Snapshot" menu.
 [default = FALSE]

 WBAPPICONA_SupportsUnSnapshot (BOOL)
 Set to TRUE if the AppIcon should respond to the "UnSnapshot" menu.
 [default = FALSE]

 WBAPPICONA_SupportsLeaveOut (BOOL)
 Set to TRUE if the AppIcon should respond to the "Leave Out" menu.
 [default = FALSE]

 WBAPPICONA_SupportsPutAway (BOOL)
 Set to TRUE if the AppIcon should respond to the "Put Away" menu.
 [default = FALSE]

 WBAPPICONA_SupportsDelete (BOOL)
 Set to TRUE if the AppIcon should respond to the "Delete" menu.
 [default = FALSE]

 WBAPPICONA_SupportsFormatDisk (BOOL)
 Set to TRUE if the AppIcon should respond to the "Format Disk" menu.
 [default = FALSE]

 WBAPPICONA_SupportsEmptyTrash (BOOL)
 Set to TRUE if the AppIcon should respond to the "Empty Trash" menu.
 [default = FALSE]

 WBAPPICONA_PropagatePosition (BOOL)
 Set to TRUE if the AppIcon's position should be updated in the DiskObject
 passed to this function when the AppIcon is moved. If this is set to TRUE,
 workbench.library will assume that the structure is not freed as long as
 the AppIcon is alive.
 [default = FALSE]

 WBAPPICONA_RenderHook (struct Hook *)
 Pointer to a hook that will be invoked when the AppIcon is rendered.
 Using this hook and WorkbenchControlA() dynamic or animated AppIcons may
 be created. The hook will be called with the following parameters:

       result = hookFunc(hook, reserved, arm);

       where the 'hookFunc' has the prototype

       LONG hookFunc(struct Hook *hook, APTR reserved,
                     struct AppIconRenderMsg *arm);

 If the hook function returns TRUE, the regular image of the AppIcon will
 be drawn; if it returns FALSE, nothing will be drawn. This allows you to
 do all the icon rendering except for when dragging the icon on the screen.

 WBAPPICONA_NotifySelectState (BOOL)
 When TRUE, you will be notificed whenever the AppIcon becomes selected or
 unselected; the am_Class will be set to AMCLASSICON_Selected or
 AMCLASSICON_Unselected.


Result
~~~~~~
::


 A pointer to an AppIcon structure -- which should be used with
 RemoveAppIcon() when you want to remove the icon -- or NULL if it was
 not possible to add the AppIcon.


Notes
~~~~~
::


 Contrary to AmigaOS, AppIcons may be added when there is no workbench
 application running.



See also
~~~~~~~~

`RemoveAppIcon()`_ `WorkbenchControlA()`_ `icon.library/DrawIconStateA() <./icon#drawiconstatea>`_ 

----------

AddAppMenuItemA()
=================

Synopsis
~~~~~~~~
::

 struct AppMenuItem * AddAppMenuItemA(
          IPTR id,
          IPTR userdata,
          APTR text,
          struct MsgPort * msgport,
          struct TagItem * taglist );
 
 struct AppMenuItem * AddAppMenuItem(
          IPTR id,
          IPTR userdata,
          APTR text,
          struct MsgPort * msgport,
          TAG tag, ... );

Function
~~~~~~~~
::


 Try to add a menu item to workbench.library's list of AppMenuItems (this
 will be shown in the 'Tools' menu strip in Workbench).


Inputs
~~~~~~
::


 id        --  menu item identifier; for your convenience (ignored by
               workbench.library)
 userdata  --  user specific data (ignored by workbench.library)
 text      --  menu item text; any text consisting merely of '-','_' and
               '~' characters corresponds to a separator bar instead of
               a textual item
 msgport   --  port to which notification messages regarding the menu
               item will be sent
 taglist   --  tags (see below)


Tags
~~~~
::


 WBAPPMENUA_CommandKeyString (STRPTR)
 Command key assigned to this menu item. If the string is empty, it will
 be ignored as will it if the command key is already in use by another
 menu item. Only the first character of the string will be used.
 [default = NULL]


Result
~~~~~~
::


 A pointer to an AppMenuItem which you pass to RemoveAppMenuItem() when
 you want to remove the menu item. If it was not possible to add the menu
 item, NULL will be returned.


Notes
~~~~~
::


 Contrary to AmigaOS, this function will report success even when there
 is no running workbench application.



See also
~~~~~~~~

`RemoveAppMenuItem()`_ 

----------

AddAppWindowA()
===============

Synopsis
~~~~~~~~
::

 struct AppWindow * AddAppWindowA(
          IPTR id,
          IPTR userdata,
          struct Window * window,
          struct MsgPort * msgport,
          struct TagItem * taglist );
 
 struct AppWindow * AddAppWindow(
          IPTR id,
          IPTR userdata,
          struct Window * window,
          struct MsgPort * msgport,
          TAG tag, ... );

Function
~~~~~~~~
::


 Try to add an AppWindow to workbench.library's list of AppWindows.
 The supplied message port will be used to send notification messages
 whenever an icon is dropped on the window. The message will be of
 type 'AMTYPE_APPWINDOW' and am_ArgList will point to the list of icons
 that were dropped in the window.


Inputs
~~~~~~
::


 id        --  window identifier; for your convenience (ignored by
               workbench.library)
 userdata  --  user specific data (ignored by workbench.library)
 window    --  pointer to the window to add AppWindow functionality to
 msgport   --  port to which notification messages regarding the window
               will be sent
 taglist   --  tags (must be NULL)


Result
~~~~~~
::


 A pointer to an AppWindow structure to use with RemoveAppWindow() when
 you want to remove the window from the list of AppWindows, or NULL
 if it was not possible to add the window to the AppWindow list.


Notes
~~~~~
::


 Applications generally want to call GetDiskObjectNew() -- rather than
 GetDiskObject() -- to get disk objects for icons dropped in the window.
     Contrary to AmigaOS, this function will succeed even when there
 is no running workbench application.



See also
~~~~~~~~

`AddAppWindowDropZoneA()`_ `RemoveAppWindow()`_ 

----------

AddAppWindowDropZoneA()
=======================

Synopsis
~~~~~~~~
::

 struct AppWindowDropZone * AddAppWindowDropZoneA(
          struct AppWindow * aw,
          IPTR id,
          IPTR userdata,
          struct TagItem * tags );
 
 struct AppWindowDropZone * AddAppWindowDropZone(
          struct AppWindow * aw,
          IPTR id,
          IPTR userdata,
          TAG tag, ... );

Function
~~~~~~~~
::


 A regular AppWindow, when created with AddAppWindowA() will respond to
 dropping icons anywhere in the window. With this function you can specify
 which parts of the window are suitable for dropping icons on.


Inputs
~~~~~~
::


 aw        --  An AppWindow structure as returned by AddAppWindowA()
 id        --  drop zone identifier; for your convenience (ignored by
               workbench.library)
 taglist   --  tags (see below)


Tags
~~~~
::


 WBDZA_Left (WORD)
 Left edge of the drop zone relative to the left window edge.
 
 WBDZA_RelRight (WORD)
 Left edge of the drop zone relative to the right window edge. A value
 of -20 would create a zone located 20 pixels to the left of the right
 window edge.

 WBDZA_Top (WORD)
 Top edge of the drop zone relative to the top of the window.

 WBDZA_RelBottom (WORD)
 Top edge of the drop zone relative to the window height; a value of -20
 would create a zone located 20 pixels above the window bottom edge.

 WBDZA_Width (WORD)
 Widthof the drop zone in pixels.

 WBDZA_RelWidth (WORD)
 Width of the drop zone relative to the width of the window; a value of
 -20 would create a zone that is 20 pixels narrower than the window.

 WBDZA_Height (WORD)
 Height of the drop zone in pixels.

 WBDZA_RelHeight
 Height of the drop zone relative to the height of the window; a value of
 -20 would create a zone that is 20 pixels smaller than the window.

 WBDZA_Box (struct IBox *)
 Position and size of the drop zone

 WBDZA_Hook (struct Hook *)
 Pointer to a hook that will be called whenever the mouse enters or leaves
 your drop zone. The hook will be called with the following parameters.

      hookFunc(hook, reserved, arm);

 where the 'hookFunc' is prototyped as:

      LONG hookFunc(struct Hook *hook, APTR reserved,
                    struct AppWindowDropZoneMsg *adzm);

 Your hook function should always return 0. You must limit the rendering
 done in the 'hookFunc' to simple graphics.library operations as otherwise
 you risk deadlocking the system.


Result
~~~~~~
::


 A drop zone identifier or NULL if the drop zone could not be created.


Notes
~~~~~
::


 When a drop zone is installed, the messages received when icons are
 dropped are of type 'AMTYPE_APPWINDOWZONE' instead of 'AMTYPE_APPWINDOW'.
     You must be able to handle both types of messages if you call this
 function.
     Drop zones must be created with a position and a size; otherwise this
 function will fail.
     When an icon is dropped on a drop zone, the AppMessage am_MouseX and
 am_MouseY members will be relative to the window top left corner and NOT
 relative to the drop zone coordinates.



----------

ChangeWorkbenchSelectionA()
===========================

Synopsis
~~~~~~~~
::

 BOOL ChangeWorkbenchSelectionA(
          STRPTR name,
          struct Hook * hook,
          struct TagItem * tags );
 
 BOOL ChangeWorkbenchSelection(
          STRPTR name,
          struct Hook * hook,
          TAG tag, ... );


----------

CloseWorkbenchObjectA()
=======================

Synopsis
~~~~~~~~
::

 BOOL CloseWorkbenchObjectA(
          STRPTR name,
          struct TagItem * tags );
 
 BOOL CloseWorkbenchObject(
          STRPTR name,
          TAG tag, ... );


----------

GetNextAppIcon()
================

Synopsis
~~~~~~~~
::

 struct DiskObject * GetNextAppIcon(
          struct DiskObject * lastdiskobj,
          char * text );

Function
~~~~~~~~
::


 Accesses AppIcon information from workbench.library. This function
 is meant for iterations through wblibs´ AppIcon storage as needed
 to display those.
     Initialised with a NULL as the first argument, it iterates
 through all AppIcons stored in workbench.library by returning the
 pointer to the next AppIcon´s DiskObject structure and copies the
 name of the given AppIcon to the given array. The function returns
 a NULL if the end of AppIcon list was reached or if no AppIcons
 were stored.


Inputs
~~~~~~
::


 lastdiskobj  --  NULL (initial value) or pointer to a DiskObject
                  structure stored in workbench.library
 text         --  char array pointer to store AppIcon´s name in


Result
~~~~~~
::


 A pointer to an DiskObject structure -- which should be used within
 the next function call to access the next AppIcon -- or NULL if no
 AppIcons were found or end of list was reached.


Example
~~~~~~~
::


   struct DiskObject *_nb_dob = NULL;
   char text[32];

   while ( _nb_dob = GetNextAppIcon(_nb_dob, &text) )
   {
       printf("appicon found: %s \n", text);
   }




See also
~~~~~~~~

`AddAppIconA()`_ `RemoveAppIcon()`_ `WorkbenchControlA()`_ `icon.library/DrawIconStateA() <./icon#drawiconstatea>`_ 

----------

MakeWorkbenchObjectVisibleA()
=============================

Synopsis
~~~~~~~~
::

 BOOL MakeWorkbenchObjectVisibleA(
          STRPTR name,
          struct TagItem * tags );
 
 BOOL MakeWorkbenchObjectVisible(
          STRPTR name,
          TAG tag, ... );


----------

OpenWorkbenchObjectA()
======================

Synopsis
~~~~~~~~
::

 BOOL OpenWorkbenchObjectA(
          STRPTR name,
          struct TagItem * tags );
 
 BOOL OpenWorkbenchObject(
          STRPTR name,
          TAG tag, ... );


----------

QuoteWorkbench()
================

Synopsis
~~~~~~~~
::

 BOOL QuoteWorkbench(
          ULONG stringNum );


----------

RegisterWorkbench()
===================

Synopsis
~~~~~~~~
::

 BOOL RegisterWorkbench(
          struct MsgPort * messageport );

Function
~~~~~~~~
::

     The workbench application uses this function to register itself with
     the library. When it has done this, the library sends messages to the
     specified port about actions the application is supposed to carry out.
     
     All messages sent to the message port are of struct WBHandlerMessage,
     which is specified in <workbench/handler.h>. The wbhm_Type field
     identifies the type of message and which part of the wbhm_Data union
     is relevant. The following types are currently defined:
     
     WBHM_TYPE_SHOW
         Intuition has (re)opened the Workbench Screen, and request that
         you open all your windows. When the message is replied, Intuition
         assumes that the windows have been opened.

     WBHM_TYPE_HIDE
         Intuition is about to close the Workbench Screen, and request that
         you close all your windows. When the message is replied, Intuition
         assumes that the windows have been closed and will try to close the
         screen.
         
     WBHM_TYPE_OPEN
         Request to open the specified drawer.
         
     WBHM_TYPE_UPDATE
         The state of the specified disk object has changed, and this
         message serves as a notification and suggestion that you should
         update its visual representation to the user. For example, it
         might have been deleted or renamed.


Inputs
~~~~~~
::

     messageport - The message port to send the to.


Result
~~~~~~
::

     TRUE if the message port was successfully registered, FALSE otherwise.
     The registration will fail if an other message port has already been
     registered earlier or if a NULL pointer was passed in.


Notes
~~~~~
::

     As you can read above, only one workbench application can be registered
     at a time. This is intentional. Note that "workbench application" in
     this context means the program that is the file manager and handles
     the GUI, not a program that is started using OpenWorkbenchObjectA()!



See also
~~~~~~~~

`UnregisterWorkbench()`_ 

----------

RemoveAppIcon()
===============

Synopsis
~~~~~~~~
::

 BOOL RemoveAppIcon(
          struct AppIcon * appIcon );

Function
~~~~~~~~
::


 Try to remove an AppIcon from workbench.library's list of AppIcons.


Inputs
~~~~~~
::


 appIcon  --  pointer to an AppIcon got from AddAppIconA()


Result
~~~~~~
::


 TRUE if the icon could be removed, FALSE otherwise.


Notes
~~~~~
::


 You must do a final check for messages on your AppMessage port as messages
 may have been sent between the last time you checked and the call to
 this function.



See also
~~~~~~~~

`AddAppIconA()`_ 

----------

RemoveAppMenuItem()
===================

Synopsis
~~~~~~~~
::

 BOOL RemoveAppMenuItem(
          struct AppMenuItem * appMenuItem );

Function
~~~~~~~~
::


 Try to remove an AppMenuItem from workbench.library's list of AppMenuItems.


Inputs
~~~~~~
::


 Pointer to an AppMenuItem structure as returned by AddAppMenuItem().


Result
~~~~~~
::


 TRUE if the menu item could be removed, FALSE otherwise.


Notes
~~~~~
::


 You have to do a final check for messages on your AppMenuItem message
 port as messages may have arrived between the last time you checked this
 and the call to this function.



See also
~~~~~~~~

`AddAppMenuItemA()`_ 

----------

RemoveAppWindow()
=================

Synopsis
~~~~~~~~
::

 BOOL RemoveAppWindow(
          struct AppWindow * appWindow );

Function
~~~~~~~~
::


 Try to remove an AppWindow from workbench.library's list of AppWindow:s.


Inputs
~~~~~~
::


 appWindow  --  pointer to AppWindow structure got from AddAppWindow().


Result
~~~~~~
::


 TRUE if the window could be removed, FALSE otherwise.


Notes
~~~~~
::


 You have to do another check for messages on the AppWindow message port
 you specified at the AppWindow creation time (AddAppWindow()) after the
 window is removed as it may have arrived messages between the last time
 you checked and the call of this function.
     Before the AppWindow is removed, all its drop zones will be removed.
 Thus there is no need to call RemoveAppWindowDropZone() explicitly.



See also
~~~~~~~~

`AddAppWindowA()`_ `RemoveAppWindowDropZone()`_ 

----------

RemoveAppWindowDropZone()
=========================

Synopsis
~~~~~~~~
::

 BOOL RemoveAppWindowDropZone(
          struct AppWindow * aw,
          struct AppWindowDropZone * dropZone );

Function
~~~~~~~~
::


 Try to remove a drop zone from an AppWindow.


Inputs
~~~~~~
::


 appWindow  --  pointer to the AppWindow (as returned by AddAppWindow()) to
                try to remove the drop zone from; a value of NULL will
                result in no operation
 dropZone   --  pointer to an AppWindowDropZone (as returned by
                AddAppWindowDropZone()); a value of NULL will result in
                no operation


Result
~~~~~~
::


 TRUE if the drop zone could be removed, FALSE otherwise. In case of
 failure, the reason may be obtained from dos.library/IoErr(). This
 function may fail if the specified drop zone is not registered with
 the supplied AppWindow.


Notes
~~~~~
::

 
 You must check for drop zone messages for zones that you just removed as
 there might have been messages sent between the last time you checked and
 the call to this function.



----------

SendAppWindowMessage()
======================

Synopsis
~~~~~~~~
::

 BOOL SendAppWindowMessage(
          struct Window * win,
          ULONG numfiles,
          char ** files,
          UWORD class,
          WORD mousex,
          WORD mousey,
          ULONG seconds,
          ULONG micros );

Function
~~~~~~~~
::

     This function sends the given list of files to a registered
     AppWindow's application. If the window is not an AppWindow, nothing
     is done.


Inputs
~~~~~~
::

     win -  window that should be checked
     numfiles - number of files in the attached array of string pointers
     files - files "list"


Result
~~~~~~
::

     TRUE if action succeeded


Example
~~~~~~~
::


     char *FileList[] =
         {"images:image1.png", "images:image2.png", "images:image3.png"};

     SendAppWindowMessage(myWindow, 3, FileList);



----------

StartWorkbench()
================

Synopsis
~~~~~~~~
::

 BOOL StartWorkbench(
          ULONG flags,
          APTR ptr );


----------

UnregisterWorkbench()
=====================

Synopsis
~~~~~~~~
::

 BOOL UnregisterWorkbench(
          struct MsgPort * messageport );

Function
~~~~~~~~
::

     The workbench application uses this functions to unregister itself
     with the library. When it is done, messages will no longer be sent.


Inputs
~~~~~~
::

     msgport - The message port of that was earlier passed in to
               RegisterWorkbench().


Result
~~~~~~
::

     TRUE if the message port was successfully unregistered, FALSE otherwise.
     The unregistration will fail if the message port isn't the same that
     was passed in with RegisterWorkbench() earlier or if the passed
     in pointer is NULL.


Notes
~~~~~
::

     Note that "Workbench Application" in this context means the program that
     is the file manager and handles the GUI of Workbench, not a program that
     is started from Workbench!



See also
~~~~~~~~

`RegisterWorkbench()`_ 

----------

UpdateWorkbench()
=================

Synopsis
~~~~~~~~
::

 BOOL UpdateWorkbench(
          CONST_STRPTR name,
          BPTR parentlock,
          LONG action );

Function
~~~~~~~~
::


 This function does the "magic" of letting Workbench know that
 an object has been added, changed, or removed. The name is
 the name of the object, the lock is a lock on the directory that
 contains the object. The action determines what has happened.
 If UPDATEWB_ObjectAdded, the object is either NEW or has CHANGED.
 If UPDATEWB_ObjectRemoved, the object has been deleted.


Inputs
~~~~~~
::

 
 name         - Name of the object (without the .info)
 parentlock   - Lock on the object's parent directory.
 action       - UPDATEWB_ObjectAdded for a new or changed object
                UPDATEWB_ObjectRemoved for a deleted object


Result
~~~~~~
::


 Workbench will update its display, if needed. An object that has
 been deleted will be removed from the display. An object that is
 new will be added to the respective display if it is not already
 there; if it is already there, its appearance will be changed if
 necessary.



----------

UpdateWorkbenchObjectA()
========================

Synopsis
~~~~~~~~
::

 BOOL UpdateWorkbenchObjectA(
          STRPTR name,
          LONG type,
          struct TagItem * tags );
 
 BOOL UpdateWorkbenchObject(
          STRPTR name,
          LONG type,
          TAG tag, ... );

Function
~~~~~~~~
::

     Informs the workbench application that an object has changed, and that
     it should update it's visual representation.


Inputs
~~~~~~
::

     name - Name of object that has changed.
     type - Type of object (WBDISK, WBTOOL, ...).
     tags - Additional options.
     

Tags
~~~~
::

     No tags are defined at this time.


Notes
~~~~~
::

     This function is TEMPORARY! It will hopefully go away before AROS 1.0,
     and it might change it's API several times before that!


Bugs
~~~~
::

     The existance of this function is a bug itself. It should be removed
     once there is a adequate notification API in dos.library that works.



----------

WBConfig()
==========

Synopsis
~~~~~~~~
::

 BOOL WBConfig(
          ULONG unk1,
          ULONG unk2 );


----------

WBInfo()
========

Synopsis
~~~~~~~~
::

 BOOL WBInfo(
          BPTR lock,
          CONST_STRPTR name,
          struct Screen * screen );

Inputs
~~~~~~
::

     lock - Lock to directory or disk
     name - Name of the object in directory.
            Note: also for def icons, name has to be passed without .info
            extension to be able to edit def icon attributes. Passing a
            name.info should open information on the .info file itself (a
            binary file without any icon attributes). This behavior is
            confirmed with Workbench.


Bugs
~~~~
::

     screen argument is currently ingored



----------

WorkbenchControlA()
===================

Synopsis
~~~~~~~~
::

 BOOL WorkbenchControlA(
          STRPTR name,
          struct TagItem * tags );
 
 BOOL WorkbenchControl(
          STRPTR name,
          TAG tag, ... );


