====================================
Zune metodi- ja atribuuttitunnisteet
====================================

.. Contents::


--------------
Varatut alueet
--------------

+ Alue 0x90400000-0x904FFFFF on varattu AROS:ille.
+ Alue 0x90420000-0x9042FFFF on varattu Zunen ydinluokille, kuten
  muimaster.library:n sisäiset luokat (SVN:workbench/libs/muimaster).
+ Alue 0x90470000-0x9047FFFF on varattu AROS:in ydinluokille, kuten ulkoisille
  luokille (SVN:workbench/classes/zune).

Mukavuuden vuoksi ovat seuraavat definet käytettävissä::

    MUIB_MUI  = TAG_USER                   = 0x80000000  /* Base for legacy MUI identifiers   */
    MUIB_RSVD = (MUIB_MUI   |  0x10400000) = 0x90400000  /* Base for AROS reserved range      */
    MUIB_ZUNE = (MUIB_RSVD  |  0x00020000) = 0x90420000  /* Base for Zune core reserved range */
    MUIB_AROS = (MUIB_RSVD  |  0x00070000) = 0x90470000  /* Base for AROS core reserved range */


-----------------------
Tunnisteiden varaaminen
-----------------------

Tunnisteet ovat muodossa ``(BASE | 0x0000ccnn)``, missä:

+ ``BASE`` on joko ``MUIB_ZUNE`` tai ``MUIB_AROS``.
+ ``cc`` on luokan numero.
+ ``nn`` on metodin taikka atribuutin numero.

Luokka-, metodi- ja atribuuttinumerot varataan *sekventiaalisesti* jotta
tyhjät paikat löytyvät helposti. Metodi- ja atribuuttitunnisteet sijaitsevat
eri numeroavaruudessa, joten metodilla voi olla (ja todennäköisesti onkin)
sama tunniste kuin atribuutilla.

Kun uusi luokka luodaan, valitaan sopiva ``BASE`` riippuen luokan tyypistä.
Sen jälkeen varataan luokan numero valitsemalla pienin mahdollinen vielä
varaamaton numero. Luokan ensimmäinen metodi (ja ensimmäinen atribuutti) tulee
saamaan tunnisteen ``(BASE | 0x0000cc00 | 0x00000000)``, ja toinen ``(BASE |
0x0000cc00 | 0x00000001)`` ja niin edelleen.

.. Important::

   **Aina** varmista että päivität seuraavassa osiossa olevan arkiston
   luodessasi uuden luokan, metodin ja/tai atribuutin! Tämä on tarpeen
   jotteivät tunnisteet törmää toisiinsa.
   
.. Note::
   
   Kaikki MUI luokat saavat omat alueensa Zunen ytimen alueelta missä varataan
   tunnisteet Zune laajennoksille näihin luokkiin (esim. lisättäessä uusi
   metodi MUIC_Window:ille).


-------
Arkisto
-------

AROS ydinluokat
===============

Yleiskatsaus
------------

========================  =========================  ========================
Base                      Nimi                       Luokka
========================  =========================  ========================
(MUIB_AROS | 0x00000000)  MUIB_Clock                 Clock.mcc
(MUIB_AROS | 0x00000100)  MUIB_Calendar              Calendar.mcc
(MUIB_AROS | 0x00000200)  MUIB_PrefsWindow           PrefsWindow.mcc
(MUIB_AROS | 0x00000300)  MUIB_IconImage             IconImage.mcc
(MUIB_AROS | 0x00000400)  MUIB_AboutWindow           AboutWindow.mcc
(MUIB_AROS | 0x00000500)  MUIB_PrefsEditor           PrefsEditor.mcc
(MUIB_AROS | 0x00000600)  MUIB_SystemPrefsWindow     SystemPrefsWindow.mcc
========================  =========================  ========================


Luokka: Clock.mcc
-----------------

=====================================  ====================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                               Nimi                                  P
=====================================  ====================================  =
(MUIB_Clock | 0x00000000)              MUIM_Clock_Timer
=====================================  ====================================  =

=========================  ===============================  =  =  =  =  ====================
Atribuutit
--------------------------------------------------------------------------------------------
Tunniste                   Nimi                             I  S  G  P  Tyyppi              
=========================  ===============================  =  =  =  =  ====================
(MUIB_Clock | 0x00000000)  MUIA_Clock_Hour                     X  X     UWORD
(MUIB_Clock | 0x00000001)  MUIA_Clock_Min                      X  X     UWORD
(MUIB_Clock | 0x00000002)  MUIA_Clock_Sec                      X  X     UWORD
(MUIB_Clock | 0x00000003)  MUIA_Clock_Time                  X  X  X     struct ClockData *
(MUIB_Clock | 0x00000004)  MUIA_Clock_Ticked                            BOOL
(MUIB_Clock | 0x00000005)  MUIA_Clock_Frozen                X  X  X     BOOL
(MUIB_Clock | 0x00000006)  MUIA_Clock_EditHand              X  X  X     WORD
=========================  ===============================  =  =  =  =  ====================


Luokka: Calendar.mcc
--------------------

============================  ===============================  =  =  =  =  ====================
Atribuutit
-----------------------------------------------------------------------------------------------
Tunniste                      Nimi                             I  S  G  P  Tyyppi              
============================  ===============================  =  =  =  =  ====================
(MUIB_Calendar | 0x00000000)  MUIA_Calendar_Date               X  X  X     struct ClockData *
(MUIB_Calendar | 0x00000001)  MUIA_Calendar_MonthDay              X  X     UWORD
(MUIB_Calendar | 0x00000002)  MUIA_Calendar_MonthDay0             X  X     UWORD
(MUIB_Calendar | 0x00000003)  MUIA_Calendar_Month                 X  X     UWORD
(MUIB_Calendar | 0x00000004)  MUIA_Calendar_Month0                X  X     UWORD
(MUIB_Calendar | 0x00000005)  MUIA_Calendar_Year                  X  X     UWORD
(MUIB_Calendar | 0x00000006)  MUIA_Calendar_DayLabels          X           STRPTR [12]
============================  ===============================  =  =  =  =  ====================


Luokka: PrefsWindow.mcc
-----------------------

===============================  ====================================  =
Metodit
------------------------------------------------------------------------
Tunniste                         Nimi                                  P
===============================  ====================================  =
(MUIB_PrefsWindow | 0x00000000)  MUIM_PrefsWindow_Test
(MUIB_PrefsWindow | 0x00000001)  MUIM_PrefsWindow_Revert
(MUIB_PrefsWindow | 0x00000002)  MUIM_PrefsWindow_Save
(MUIB_PrefsWindow | 0x00000003)  MUIM_PrefsWindow_Use
(MUIB_PrefsWindow | 0x00000004)  MUIM_PrefsWindow_Cancel
===============================  ====================================  =

===============================  ================================  =  =  =  =  ====================
Atribuutit
---------------------------------------------------------------------------------------------------
Tunniste                         Nimi                              I  S  G  P  Tyyppi              
===============================  ================================  =  =  =  =  ====================
(MUIB_PrefsWindow | 0x00000000)  MUIM_PrefsWindow_Test_Disabled    X  X  X     BOOL
(MUIB_PrefsWindow | 0x00000001)  MUIM_PrefsWindow_Revert_Disabled  X  X  X     BOOL
(MUIB_PrefsWindow | 0x00000002)  MUIM_PrefsWindow_Save_Disabled    X  X  X     BOOL
(MUIB_PrefsWindow | 0x00000003)  MUIM_PrefsWindow_Use_Disabled     X  X  X     BOOL
(MUIB_PrefsWindow | 0x00000004)  MUIM_PrefsWindow_Cancel_Disabled  X  X  X     BOOL
===============================  ================================  =  =  =  =  ====================


Luokka: IconImage.mcc
---------------------

=============================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------------
Tunniste                       Nimi                             I  S  G  P  Tyyppi              
=============================  ===============================  =  =  =  =  ====================
(MUIB_IconImage | 0x00000000)  MUIA_IconImage_DiskObject        X           struct DiskObject *
(MUIB_IconImage | 0x00000001)  MUIA_IconImage_File              X           CONST_STRPTR
=============================  ===============================  =  =  =  =  ====================


Luokka: AboutWindow.mcc
-----------------------

===============================  ===============================  =  =  =  =  ====================
Atribuutit
--------------------------------------------------------------------------------------------------
Tunniste                         Nimi                             I  S  G  P  Tyyppi              
===============================  ===============================  =  =  =  =  ====================
(MUIB_AboutWindow | 0x00000000)  MUIA_AboutWindow_Image           X           Object *
(MUIB_AboutWindow | 0x00000001)  MUIA_AboutWindow_Title           X           CONST_STRPTR
(MUIB_AboutWindow | 0x00000002)  MUIA_AboutWindow_Version_Number  X           CONST_STRPTR
(MUIB_AboutWindow | 0x00000003)  MUIA_AboutWindow_Version_Date    X           CONST_STRPTR
(MUIB_AboutWindow | 0x00000004)  MUIA_AboutWindow_Version_Extra   X           CONST_STRPTR
(MUIB_AboutWindow | 0x00000005)  MUIA_AboutWindow_Copyright       X           CONST_STRPTR
(MUIB_AboutWindow | 0x00000006)  MUIA_AboutWindow_Description     X           CONST_STRPTR
(MUIB_AboutWindow | 0x00000007)  MUIA_AboutWindow_Authors         X           struct TagItem *
(MUIB_AboutWindow | 0x00000008   MUIA_AboutWindow_Sponsors        X           struct TagItem *
===============================  ===============================  =  =  =  =  ====================


Luokka: PrefsEditor.mcc
-----------------------

FIXME


Luokka: SystemPrefsWindow.mcc
-----------------------------

FIXME


Zune ydinluokat
===============

Yleiskatsaus
------------

========================  =========================  ========================
Base                      Nimi                       Luokka
========================  =========================  ========================
(MUIB_ZUNE | 0x00004000)  MUIB_ChunkyImage           ChunkyImage.mui
(MUIB_ZUNE | 0x00004100)  MUIB_Scrollbutton          Scrollbutton.mui
(MUIB_ZUNE | 0x00004200)  MUIB_IconList              IconList.mui
(MUIB_ZUNE | 0x00004300)  MUIB_IconDrawerList        IconDrawerList.mui
(MUIB_ZUNE | 0x00004400)  MUIB_IconVolumeList        IconVolumeList.mui
(MUIB_ZUNE | 0x00004500)  MUIB_IconListview          IconListview.mui
========================  =========================  ========================



Luokka: ChunkyImage.mui
-----------------------

===============================  ===============================  =  =  =  =  ====================
Atribuutit
--------------------------------------------------------------------------------------------------
Tunniste                         Nimi                             I  S  G  P  Tyyppi              
===============================  ===============================  =  =  =  =  ====================
(MUIB_ChunkyImage | 0x00000000)  MUIA_ChunkyImage_Pixels          X  X  X     UBYTE *
(MUIB_ChunkyImage | 0x00000001)  MUIA_ChunkyImage_Palette         X  X  X     UBYTE *
(MUIB_ChunkyImage | 0x00000002)  MUIA_ChunkyImage_NumColors       X  X  X     LONG
(MUIB_ChunkyImage | 0x00000003)  MUIA_ChunkyImage_Modulo          X  X  X     LONG
===============================  ===============================  =  =  =  =  ====================


Luokka: Scrollbutton.mui
------------------------

================================  ===============================  =  =  =  =  ====================
Atribuutit
---------------------------------------------------------------------------------------------------
Tunniste                          Nimi                             I  S  G  P  Tyyppi              
================================  ===============================  =  =  =  =  ====================
(MUIB_Scrollbutton | 0x00000000)  MUIA_Scrollbutton_NewPosition          X     ULONG
(MUIB_Scrollbutton | 0x00000001)  MUIA_Scrollbutton_Horiz             X  X     WORD
(MUIB_Scrollbutton | 0x00000002)  MUIA_Scrollbutton_Vert              X  X     WORD
(MUIB_Scrollbutton | 0x00000003)  MUIA_Scrollbutton_HorizProp            X     Object *
(MUIB_Scrollbutton | 0x00000004)  MUIA_Scrollbutton_VertProp             X     Object *
================================  ===============================  =  =  =  =  ====================


Luokka: IconList.mui
--------------------

============================  ==================================================  =
Metodit
-----------------------------------------------------------------------------------
Tunniste                      Nimi                                                P
============================  ==================================================  =
(MUIB_IconList | 0x00000000)  MUIM_IconList_Clear
(MUIB_IconList | 0x00000001)  MUIM_IconList_Update
(MUIB_IconList | 0x00000002)  MUIM_IconList_Add
(MUIB_IconList | 0x00000003)  MUIM_IconList_NextSelected
(MUIB_IconList | 0x00000004)  MUIM_IconList_UnselectAll
============================  ==================================================  =

============================  ===============================  =  =  =  =  ====================
Atribuutit
-----------------------------------------------------------------------------------------------
Tunniste                      Nimi                             I  S  G  P  Tyyppi              
============================  ===============================  =  =  =  =  ====================
(MUIB_IconList | 0x00000000)  MUIA_IconList_DoubleClick              X     BOOL
(MUIB_IconList | 0x00000001)  MUIA_IconList_Left                     X     LONG
(MUIB_IconList | 0x00000002)  MUIA_IconList_Top                      X     LONG
(MUIB_IconList | 0x00000003)  MUIA_IconList_Width                    X     LONG
(MUIB_IconList | 0x00000004)  MUIA_IconList_Height                   X     LONG
(MUIB_IconList | 0x00000005)  MUIA_IconList_IconsDropped             X     struct IconList_Entry *
(MUIB_IconList | 0x00000006)  MUIA_IconList_Clicked                  X     struct IconList_Click *
============================  ===============================  =  =  =  =  ====================


Luokka: IconDrawerList.mui
--------------------------

==================================  ===============================  =  =  =  =  ====================
Atribuutit
-----------------------------------------------------------------------------------------------------
Tunniste                            Nimi                             I  S  G  P  Tyyppi              
==================================  ===============================  =  =  =  =  ====================
(MUIB_IconDrawerList | 0x00000000)  MUIA_IconDrawerList_Drawer       X  X  X     LONG
==================================  ===============================  =  =  =  =  ====================


Luokka: IconVolumeList.mui
--------------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: IconListview.mui
------------------------

================================  ===============================  =  =  =  =  ====================
Atribuutit
---------------------------------------------------------------------------------------------------
Tunniste                          Nimi                             I  S  G  P  Tyyppi              
================================  ===============================  =  =  =  =  ====================
(MUIB_IconListview | 0x00000000)  MUIA_IconListview_IconList       X     X     Object *
(MUIB_IconListview | 0x00000001)  MUIA_IconListview_UseWinBorder   X           BOOL
================================  ===============================  =  =  =  =  ====================


Zune laajennokset legacy MUI luokkiin
=====================================

Yleiskatsaus
------------

========================  =========================  ========================
Base                      Nimi                       Luokka
========================  =========================  ========================
(MUIB_ZUNE | 0x00000000)  MUIB_Aboutmui              Aboutmui.mui
(MUIB_ZUNE | 0x00000100)  MUIB_Application           Application.mui
(MUIB_ZUNE | 0x00000200)  MUIB_Area                  Area.mui
(MUIB_ZUNE | 0x00000300)  MUIB_Balance               Balance.mui
(MUIB_ZUNE | 0x00000400)  MUIB_Bitmap                Bitmap.mui
(MUIB_ZUNE | 0x00000500)  MUIB_Bodychunk             Bodychunk.mui
(MUIB_ZUNE | 0x00000600)  MUIB_Boopsi                Boopsi.mui
(MUIB_ZUNE | 0x00000700)  MUIB_Coloradjust           Coloradjust.mui
(MUIB_ZUNE | 0x00000800)  MUIB_Colorfield            Colorfield.mui
(MUIB_ZUNE | 0x00000900)  MUIB_Configdata            Configdata.mui
(MUIB_ZUNE | 0x00000a00)  MUIB_Cycle                 Cycle.mui
(MUIB_ZUNE | 0x00000b00)  MUIB_Dataspace             Dataspace.mui
(MUIB_ZUNE | 0x00000c00)  MUIB_Family                Family.mui
(MUIB_ZUNE | 0x00000d00)  MUIB_Frameadjust           Frameadjust.mui
(MUIB_ZUNE | 0x00000e00)  MUIB_Framedisplay          Framedisplay.mui
(MUIB_ZUNE | 0x00000f00)  MUIB_Gauge                 Gauge.mui
(MUIB_ZUNE | 0x00001000)  MUIB_Group                 Group.mui
(MUIB_ZUNE | 0x00001100)  MUIB_Imageadjust           Imageadjust.mui
(MUIB_ZUNE | 0x00001200)  MUIB_Imagedisplay          Imagedisplay.mui
(MUIB_ZUNE | 0x00001300)  MUIB_Image                 Image.mui
(MUIB_ZUNE | 0x00001400)  MUIB_List                  List.mui
(MUIB_ZUNE | 0x00001500)  MUIB_Floattext             Floattext.mui
(MUIB_ZUNE | 0x00001600)  MUIB_Volumelist            Volumelist.mui
(MUIB_ZUNE | 0x00001700)  MUIB_Scrmodelist           Scrmodelist.mui
(MUIB_ZUNE | 0x00001800)  MUIB_Dirlist               Dirlist.mui
(MUIB_ZUNE | 0x00001900)  MUIB_Listview              Listview.mui
(MUIB_ZUNE | 0x00001a00)  MUIB_Menustrip             Menustrip.mui
(MUIB_ZUNE | 0x00001b00)  MUIB_Menu                  Menu.mui
(MUIB_ZUNE | 0x00001c00)  MUIB_Menuitem              Menuitem.mui
(MUIB_ZUNE | 0x00001d00)  MUIB_Notify                Notify.mui
(MUIB_ZUNE | 0x00001e00)  MUIB_Numeric               Numeric.mui
(MUIB_ZUNE | 0x00001f00)  MUIB_Penadjust             Penadjust.mui
(MUIB_ZUNE | 0x00002000)  MUIB_Pendisplay            Pendisplay.mui
(MUIB_ZUNE | 0x00002100)  MUIB_Popasl                Popasl.mui
(MUIB_ZUNE | 0x00002200)  MUIB_Popframe              Popframe.mui
(MUIB_ZUNE | 0x00002300)  MUIB_Popimage              Popimage.mui
(MUIB_ZUNE | 0x00002400)  MUIB_Popobject             Popobject.mui
(MUIB_ZUNE | 0x00002500)  MUIB_Poplist               Poplist.mui
(MUIB_ZUNE | 0x00002600)  MUIB_Popscreen             Popscreen.mui
(MUIB_ZUNE | 0x00002700)  MUIB_Poppen                Poppen.mui
(MUIB_ZUNE | 0x00002800)  MUIB_Popstring             Popstring.mui
(MUIB_ZUNE | 0x00002900)  MUIB_Prop                  Prop.mui
(MUIB_ZUNE | 0x00002a00)  MUIB_Radio                 Radio.mui
(MUIB_ZUNE | 0x00002b00)  MUIB_Rectangle             Rectange.mui
(MUIB_ZUNE | 0x00002c00)  MUIB_Register              Register.mui
(MUIB_ZUNE | 0x00002d00)  MUIB_Scale                 Scale.mui
(MUIB_ZUNE | 0x00002e00)  MUIB_Scrollbar             Scrollbar.mui
(MUIB_ZUNE | 0x00002f00)  MUIB_Scrollgroup           Scrollgroup.mui
(MUIB_ZUNE | 0x00003000)  MUIB_Semaphore             Semaphore.mui
(MUIB_ZUNE | 0x00003100)  MUIB_Settingsgroup         Settingsgroup.mui
(MUIB_ZUNE | 0x00003200)  MUIB_Settings              Settings.mui
(MUIB_ZUNE | 0x00003300)  MUIB_Slider                Slider.mui
(MUIB_ZUNE | 0x00003400)  MUIB_String                String.mui
(MUIB_ZUNE | 0x00003500)  MUIB_Text                  Text.mui
(MUIB_ZUNE | 0x00003600)  MUIB_Window                Window.mui
(MUIB_ZUNE | 0x00003700)  MUIB_Virtgroup             Virtgroup.mui
========================  =========================  ========================


Luokka: Application.mui
-----------------------

===============================  ==================================================  =
Metodit
--------------------------------------------------------------------------------------
Tunniste                         Nimi                                                P
===============================  ==================================================  =
(MUIB_Application | 0x00000000)  MUIM_Application_SetConfigdata
(MUIB_Application | 0x00000001)  MUIM_Application_OpenWindows
(MUIB_Application | 0x00000002)  MUIM_Application_Iconify
(MUIB_Application | 0x00000003)  MUIM_Application_Execute
===============================  ==================================================  =

===============================  ===============================  =  =  =  =  ====================
Atribuutit
--------------------------------------------------------------------------------------------------
Tunniste                         Nimi                             I  S  G  P  Tyyppi              
===============================  ===============================  =  =  =  =  ====================
(MUIB_Application | 0x00000000)  MUIA_Application_Configdata         X        Object *
(MUIB_Application | 0x00000001)  MUIA_Application_Version_Number  X     X     CONST_STRPTR
(MUIB_Application | 0x00000002)  MUIA_Application_Version_Date    X     X     CONST_STRPTR
(MUIB_Application | 0x00000003)  MUIA_Application_Version_Extra   X     X     CONST_STRPTR
===============================  ===============================  =  =  =  =  ====================


Luokka: Area.mui
----------------

========================  ==================================================  =
Metodit
-------------------------------------------------------------------------------
Tunniste                  Nimi                                                P
========================  ==================================================  =
(MUIB_Area | 0x00000000)  MUIM_Layout
(MUIB_Area | 0x00000001)  MUIM_DrawParentBackground
(MUIB_Area | 0x00000002)  MUIM_DragQueryExtended                              X
(MUIB_Area | 0x00000003)  MUIM_Timer                                          X
========================  ==================================================  =

========================  ===============================  =  =  =  =  ====================
Atribuutit
-------------------------------------------------------------------------------------------
Tunniste                  Nimi                             I  S  G  P  Tyyppi              
========================  ===============================  =  =  =  =  ====================
(MUIB_Area | 0x00000000)  MUIA_NestedDisabled              X  X  X     BOOL
========================  ===============================  =  =  =  =  ====================


Luokka: Balance.mui
-------------------

===========================  ===============================  =  =  =  =  ====================
Atribuutit
----------------------------------------------------------------------------------------------
Tunniste                     Nimi                             I  S  G  P  Tyyppi              
===========================  ===============================  =  =  =  =  ====================
(MUIB_Balance | 0x00000000)  MUIA_Balance_Quiet               X           LONG
===========================  ===============================  =  =  =  =  ====================


Luokka: Boopsi.mui
------------------

==========================  ===============================  =  =  =  =  ====================
Atribuutit
---------------------------------------------------------------------------------------------
Tunniste                    Nimi                             I  S  G  P  Tyyppi              
==========================  ===============================  =  =  =  =  ====================
(MUIB_Boopsi | 0x00000000)  MUIA_Boopsi_OnlyTrigger             X     X  BOOL
==========================  ===============================  =  =  =  =  ====================


Luokka: Configdata.mui
----------------------

==============================  ==================================================  =
Metodit
-------------------------------------------------------------------------------------
Tunniste                        Nimi                                                P
==============================  ==================================================  =
(MUIB_Configdata | 0x00000000)  MUIM_Configdata_GetString
(MUIB_Configdata | 0x00000001)  MUIM_Configdata_GetULong
(MUIB_Configdata | 0x00000002)  MUIM_Configdata_SetULong
(MUIB_Configdata | 0x00000003)  MUIM_Configdata_SetImspec
(MUIB_Configdata | 0x00000004)  MUIM_Configdata_SetFramespec
(MUIB_Configdata | 0x00000005)  MUIM_Configdata_SetFont
(MUIB_Configdata | 0x00000006)  MUIM_Configdata_Save
(MUIB_Configdata | 0x00000007)  MUIM_Configdata_Load
==============================  ==================================================  =

==============================  ===============================  =  =  =  =  ====================
Atribuutit
-------------------------------------------------------------------------------------------------
Tunniste                        Nimi                             I  S  G  P  Tyyppi              
==============================  ===============================  =  =  =  =  ====================
(MUIB_Configdata | 0x00000000)  MUIA_Configdata_Application      X           Object *
(MUIB_Configdata | 0x00000001)  MUIA_Configdata_ZunePrefs              X  X  struct ZunePrefsNew *
(MUIB_Configdata | 0x00000002)  MUIA_Configdata_ApplicationBase  X           Object *
==============================  ===============================  =  =  =  =  ====================


Luokka: Frameadjust.mui
-----------------------

===============================  ===============================  =  =  =  =  ====================
Atribuutit
--------------------------------------------------------------------------------------------------
Tunniste                         Nimi                             I  S  G  P  Tyyppi              
===============================  ===============================  =  =  =  =  ====================
(MUIB_Frameadjust | 0x00000000)  MUIA_Frameadjust_Spec            X     X     CONST_STRPTR
===============================  ===============================  =  =  =  =  ====================


Luokka: Gauge.mui
-----------------

=========================  ===============================  =  =  =  =  ====================
Atribuutit
--------------------------------------------------------------------------------------------
Tunniste                   Nimi                             I  S  G  P  Tyyppi              
=========================  ===============================  =  =  =  =  ====================
(MUIB_Gauge | 0x00000000)  MUIA_Gauge_DupInfoText           X           BOOL
=========================  ===============================  =  =  =  =  ====================


Luokka: Group.mui
-----------------

=========================  ==================================================  =
Metodit
--------------------------------------------------------------------------------
Tunniste                   Nimi                                                P
=========================  ==================================================  =
(MUIB_Group | 0x00000000)  MUIM_Group_DoMethodNoForward
=========================  ==================================================  =

=========================  ===============================  =  =  =  =  ====================
Atribuutit
--------------------------------------------------------------------------------------------
Tunniste                   Nimi                             I  S  G  P  Tyyppi              
=========================  ===============================  =  =  =  =  ====================
(MUIB_Group | 0x00000000)  MUIA_Group_Virtual               X           BOOL
=========================  ===============================  =  =  =  =  ====================


Luokka: Imageadjust.mui
-----------------------

===============================  ==================================================  =
Metodit
--------------------------------------------------------------------------------------
Tunniste                         Nimi                                                P
===============================  ==================================================  =
(MUIB_Imageadjust | 0x00000000)  MUIM_Imageadjust_ReadExternal                       X
===============================  ==================================================  =


Luokka: Imagedisplay.mui
------------------------

================================  ===============================  =  =  =  =  ====================
Atribuutit
---------------------------------------------------------------------------------------------------
Tunniste                          Nimi                             I  S  G  P  Tyyppi              
================================  ===============================  =  =  =  =  ====================
(MUIB_Imagedisplay | 0x00000000)  MUIA_Imagedisplay_FreeHoriz      X           BOOL
(MUIB_Imagedisplay | 0x00000001)  MUIA_Imagedisplay_FreeVert       X           BOOL
================================  ===============================  =  =  =  =  ====================


Luokka: List.mui
----------------

========================  ==================================================  =
Metodit
-------------------------------------------------------------------------------
Tunniste                  Nimi                                                P
========================  ==================================================  =
(MUIB_List | 0x00000004)  MUIM_List_SelectChange                              X
(MUIB_List | 0x00000005)  MUIM_List_InsertSingleAsTree (removed)
========================  ==================================================  =

========================  ===============================  =  =  =  =  ====================
Atribuutit
-------------------------------------------------------------------------------------------
Tunniste                  Nimi                             I  S  G  P  Tyyppi              
========================  ===============================  =  =  =  =  ====================
(MUIB_List | 0x00000000)  MUIA_List_HorizProp_Entries               X  LONG
(MUIB_List | 0x00000001)  MUIA_List_HorizProp_Visible               X  LONG
(MUIB_List | 0x00000002)  MUIA_List_HorizProp_First                 X  LONG
========================  ===============================  =  =  =  =  ====================

.. Note::

   Lisäksi on seuraavat atribuuttialiakset määritetty:
   
   ==========================  ======================
   Mistä                       Mihin
   ==========================  ======================
   MUIA_List_VertProp_Entries  MUIA_List_Prop_Entries
   MUIA_List_VertProp_Visible  MUIA_List_Prop_Visible
   MUIA_List_VertProp_First    MUIA_List_Prop_First
   ==========================  ======================


Luokka: Menuitem.mui
--------------------

============================  ===============================  =  =  =  =  ====================
Atribuutit
-----------------------------------------------------------------------------------------------
Tunniste                      Nimi                             I  S  G  P  Tyyppi              
============================  ===============================  =  =  =  =  ====================
(MUIB_Menuitem | 0x00000000)  MUIA_Menuitem_NewMenu                  X     struct NewMenu *
============================  ===============================  =  =  =  =  ====================


Luokka: Notify.mui
------------------

==========================  ==================================================  =
Metodit
---------------------------------------------------------------------------------
Tunniste                    Nimi                                                P
==========================  ==================================================  =
(MUIB_Notify | 0x00000000)  MUIM_ConnectParent
(MUIB_Notify | 0x00000001)  MUIM_DisconnectParent
==========================  ==================================================  =


Luokka: Penadjust.mui
---------------------

=============================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------------
Tunniste                       Nimi                             I  S  G  P  Tyyppi              
=============================  ===============================  =  =  =  =  ====================
(MUIB_Penadjust | 0x00000000)  MUIA_Penadjust_Spec              X  X  X  X  struct MUI_Penspec *
=============================  ===============================  =  =  =  =  ====================


Luokka: Popframe.mui
--------------------

============================  ==================================================  =
Metodit
-----------------------------------------------------------------------------------
Tunniste                      Nimi                                                P
============================  ==================================================  =
(MUIB_Popframe | 0x00000000)  MUIM_Popframe_OpenWindow                            X
(MUIB_Popframe | 0x00000001)  MUIM_Popframe_CloseWindow                           X
============================  ==================================================  =


Luokka: Popimage.mui
--------------------

============================  ==================================================  =
Metodit
-----------------------------------------------------------------------------------
Tunniste                      Nimi                                                P
============================  ==================================================  =
(MUIB_Popimage | 0x00000000)  MUIM_Popimage_OpenWindow                            X
(MUIB_Popimage | 0x00000001)  MUIM_Popimage_CloseWindow                           X
============================  ==================================================  =


Luokka: Poppen.mui
------------------

==========================  ==================================================  =
Metodit
---------------------------------------------------------------------------------
Tunniste                    Nimi                                                P
==========================  ==================================================  =
(MUIB_Poppen | 0x00000000)  MUIM_Poppen_OpenWindow                              X
(MUIB_Poppen | 0x00000001)  MUIM_Poppen_CloseWindow                             X
==========================  ==================================================  =


Luokka: Prop.mui
----------------

========================  ===============================  =  =  =  =  ====================
Atribuutit
-------------------------------------------------------------------------------------------
Tunniste                  Nimi                             I  S  G  P  Tyyppi              
========================  ===============================  =  =  =  =  ====================
(MUIB_Prop | 0x00000000)  MUIA_Prop_OnlyTrigger               X     X  BOOL
========================  ===============================  =  =  =  =  ====================


Luokka: Text.mui
----------------

========================  ===============================  =  =  =  =  ====================
Atribuutit
-------------------------------------------------------------------------------------------
Tunniste                  Nimi                             I  S  G  P  Tyyppi              
========================  ===============================  =  =  =  =  ====================
(MUIB_Text | 0x00000000)  MUIA_Text_Editable               X           BOOL
(MUIB_Text | 0x00000001)  MUIA_Text_Multiline              X           BOOL
========================  ===============================  =  =  =  =  ====================


Luokka: Window.mui
------------------

==========================  ==================================================  =
Metodit
---------------------------------------------------------------------------------
Tunniste                    Nimi                                                P
==========================  ==================================================  =
(MUIB_Window | 0x00000000)  MUIM_Window_AddControlCharHandler                   X
(MUIB_Window | 0x00000001)  MUIM_Window_AllocGadgetID
(MUIB_Window | 0x00000002)  MUIM_Window_DrawBackground                          X
(MUIB_Window | 0x00000003)  MUIM_Window_DragObject                              X
(MUIB_Window | 0x00000004)  MUIM_Window_FreeGadgetID
(MUIB_Window | 0x00000005)  MUIM_Window_RecalcDisplay                           X
(MUIB_Window | 0x00000006)  MUIM_Window_RemControlCharHandler                   X
==========================  ==================================================  =

==========================  ===============================  =  =  =  =  ====================
Atribuutit
---------------------------------------------------------------------------------------------
Tunniste                    Nimi                             I  S  G  P  Tyyppi              
==========================  ===============================  =  =  =  =  ====================
(MUIB_Window | 0x00000000)  MUIA_Window_EraseArea            X           BOOL
(MUIB_Window | 0x00000001)  MUIA_Window_WandererBackdrop        X        BOOL
==========================  ===============================  =  =  =  =  ====================


Legacy MUI metodit ja atribuutit
================================

Luokka: Aboutmui.mui
--------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00422523)  MUIA_Aboutmui_Application        X           Object *
=======================  ===============================  =  =  =  =  ====================


Luokka: Application.mui
-----------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x0042d21d)  MUIM_Application_AboutMUI
(MUIB_MUI | 0x0042f099)  MUIM_Application_AddInputHandler
(MUIB_MUI | 0x00424d68)  MUIM_Application_CheckRefresh
(MUIB_MUI | 0x0042c0a7)  MUIM_Application_GetMenuCheck
(MUIB_MUI | 0x0042a58f)  MUIM_Application_GetMenuState
(MUIB_MUI | 0x0042d0f5)  MUIM_Application_Input
(MUIB_MUI | 0x00427e59)  MUIM_Application_InputBuffered
(MUIB_MUI | 0x0042f90d)  MUIM_Application_Load
(MUIB_MUI | 0x00423ba6)  MUIM_Application_NewInput
(MUIB_MUI | 0x004299ba)  MUIM_Application_OpenConfigWindow
(MUIB_MUI | 0x00429ef8)  MUIM_Application_PushMethod
(MUIB_MUI | 0x0042e7af)  MUIM_Application_RemInputHandler
(MUIB_MUI | 0x004276ef)  MUIM_Application_ReturnID
(MUIB_MUI | 0x004227ef)  MUIM_Application_Save
(MUIB_MUI | 0x00424a80)  MUIM_Application_SetConfigItem
(MUIB_MUI | 0x0042a707)  MUIM_Application_SetMenuCheck
(MUIB_MUI | 0x00428bef)  MUIM_Application_SetMenuState
(MUIB_MUI | 0x00426479)  MUIM_Application_ShowHelp
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x004260ab)  MUIA_Application_Active          X  X  X     BOOL
(MUIB_MUI | 0x00424842)  MUIA_Application_Author          X     X     STRPTR
(MUIB_MUI | 0x0042e07a)  MUIA_Application_Base            X     X     STRPTR
(MUIB_MUI | 0x0042dbce)  MUIA_Application_Broker                X     Broker *
(MUIB_MUI | 0x00428f4b)  MUIA_Application_BrokerHook      X  X  X     struct Hook *
(MUIB_MUI | 0x0042e0ad)  MUIA_Application_BrokerPort      X  X  X     struct MsgPort *
(MUIB_MUI | 0x0042c8d0)  MUIA_Application_BrokerPri       X     X     LONG
(MUIB_MUI | 0x00428648)  MUIA_Application_Commands        X  X  X     struct MUI_Command *
(MUIB_MUI | 0x0042ef4d)  MUIA_Application_Copyright       X     X     STRPTR
(MUIB_MUI | 0x00421fc6)  MUIA_Application_Description     X     X     STRPTR
(MUIB_MUI | 0x004235cb)  MUIA_Application_DiskObject      X  X  X     struct DiskObject *
(MUIB_MUI | 0x00423bc6)  MUIA_Application_DoubleStart           X     BOOL
(MUIB_MUI | 0x00421266)  MUIA_Application_DropObject      X  X        Object *
(MUIB_MUI | 0x004257df)  MUIA_Application_ForceQuit             X     BOOL
(MUIB_MUI | 0x004293f4)  MUIA_Application_HelpFile        X  X  X     STRPTR
(MUIB_MUI | 0x0042a07f)  MUIA_Application_Iconified          X  X     BOOL
(MUIB_MUI | 0x00428961)  MUIA_Application_MenuAction            X     ULONG
(MUIB_MUI | 0x0042540b)  MUIA_Application_MenuHelp              X     ULONG
(MUIB_MUI | 0x004252d9)  MUIA_Application_Menustrip       X           Object *
(MUIB_MUI | 0x00427c42)  MUIA_Application_RexxHook        X  X  X     struct Hook *
(MUIB_MUI | 0x0042fd88)  MUIA_Application_RexxMsg               X     struct RxMsg *
(MUIB_MUI | 0x0042d711)  MUIA_Application_RexxString         X        STRPTR
(MUIB_MUI | 0x0042a2c8)  MUIA_Application_SingleTask      X           BOOL
(MUIB_MUI | 0x00425711)  MUIA_Application_Sleep              X        BOOL
(MUIB_MUI | 0x004281b8)  MUIA_Application_Title           X     X     STRPTR
(MUIB_MUI | 0x00425ee5)  MUIA_Application_UseCommodities  X           BOOL
(MUIB_MUI | 0x0042e9a7)  MUIA_Application_UsedClasses     X           STRPTR []
(MUIB_MUI | 0x00422387)  MUIA_Application_UseRexx         X           BOOL
(MUIB_MUI | 0x0042b33f)  MUIA_Application_Version         X     X     STRPTR
(MUIB_MUI | 0x0042bfe0)  MUIA_Application_Window          X           Object *
(MUIB_MUI | 0x00429abe)  MUIA_Application_WindowList            X     struct List *
(MUIB_MUI | 0x00420e1f)  MUIA_Application_Menu            X     X     struct NewMenu *
=======================  ===============================  =  =  =  =  ====================


Luokka: Area.mui
----------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x00423874)  MUIM_AskMinMax
(MUIB_MUI | 0x0042d985)  MUIM_Cleanup
(MUIB_MUI | 0x00429d2e)  MUIM_ContextMenuBuild
(MUIB_MUI | 0x00420f0e)  MUIM_ContextMenuChoice
(MUIB_MUI | 0x00421c41)  MUIM_CreateBubble
(MUIB_MUI | 0x0042eb6f)  MUIM_CreateDragImage
(MUIB_MUI | 0x00428e93)  MUIM_CreateShortHelp
(MUIB_MUI | 0x00428d73)  MUIM_CustomBackfill
(MUIB_MUI | 0x004211af)  MUIM_DeleteBubble
(MUIB_MUI | 0x00423037)  MUIM_DeleteDragImage
(MUIB_MUI | 0x0042d35a)  MUIM_DeleteShortHelp
(MUIB_MUI | 0x004216bb)  MUIM_DoDrag
(MUIB_MUI | 0x0042c03a)  MUIM_DragBegin
(MUIB_MUI | 0x0042c555)  MUIM_DragDrop
(MUIB_MUI | 0x004251f0)  MUIM_DragFinish
(MUIB_MUI | 0x00420261)  MUIM_DragQuery
(MUIB_MUI | 0x0042edad)  MUIM_DragReport
(MUIB_MUI | 0x00426f3f)  MUIM_Draw
(MUIB_MUI | 0x004238ca)  MUIM_DrawBackground
(MUIB_MUI | 0x0042491a)  MUIM_GoActive
(MUIB_MUI | 0x00422c0c)  MUIM_GoInactive
(MUIB_MUI | 0x00426d66)  MUIM_HandleEvent
(MUIB_MUI | 0x00422a1a)  MUIM_HandleInput
(MUIB_MUI | 0x0042f20f)  MUIM_Hide
(MUIB_MUI | 0x00428354)  MUIM_Setup
(MUIB_MUI | 0x0042cc84)  MUIM_Show
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042545b)  MUIA_Background                  X  X        LONG
(MUIB_MUI | 0x0042e552)  MUIA_BottomEdge                        X     LONG
(MUIB_MUI | 0x0042b704)  MUIA_ContextMenu                 X  X  X     Object *
(MUIB_MUI | 0x0042a2c1)  MUIA_ContextMenuTrigger                X     Object *
(MUIB_MUI | 0x0042120b)  MUIA_ControlChar                 X  X  X     char
(MUIB_MUI | 0x00420a63)  MUIA_CustomBackfill              X           
(MUIB_MUI | 0x00421ce7)  MUIA_CycleChain                  X  X  X     LONG
(MUIB_MUI | 0x00423661)  MUIA_Disabled                    X  X  X     BOOL
(MUIB_MUI | 0x00420b6e)  MUIA_Draggable                   X  X  X     BOOL
(MUIB_MUI | 0x0042fbce)  MUIA_Dropable                    X  X  X     BOOL
(MUIB_MUI | 0x004294a3)  MUIA_FillArea                    X  X        BOOL
(MUIB_MUI | 0x0042a92b)  MUIA_FixHeight                   X           LONG
(MUIB_MUI | 0x004276f2)  MUIA_FixHeightTxt                X           STRPTR
(MUIB_MUI | 0x0042a3f1)  MUIA_FixWidth                    X           LONG
(MUIB_MUI | 0x0042d044)  MUIA_FixWidthTxt                 X           STRPTR
(MUIB_MUI | 0x0042be50)  MUIA_Font                        X     X     struct TextFont *
(MUIB_MUI | 0x0042ac64)  MUIA_Frame                       X           LONG
(MUIB_MUI | 0x0042ed76)  MUIA_FramePhantomHoriz           X           BOOL
(MUIB_MUI | 0x0042d1c7)  MUIA_FrameTitle                  X           STRPTR
(MUIB_MUI | 0x00423237)  MUIA_Height                            X     LONG
(MUIB_MUI | 0x00429615)  MUIA_HorizDisappear              X  X  X     LONG
(MUIB_MUI | 0x00426db9)  MUIA_HorizWeight                 X  X  X     WORD
(MUIB_MUI | 0x0042f2c0)  MUIA_InnerBottom                 X     X     LONG
(MUIB_MUI | 0x004228f8)  MUIA_InnerLeft                   X     X     LONG
(MUIB_MUI | 0x004297ff)  MUIA_InnerRight                  X     X     LONG
(MUIB_MUI | 0x00421eb6)  MUIA_InnerTop                    X     X     LONG
(MUIB_MUI | 0x0042fb04)  MUIA_InputMode                   X           LONG
(MUIB_MUI | 0x0042bec6)  MUIA_LeftEdge                          X     LONG
(MUIB_MUI | 0x004293e4)  MUIA_MaxHeight                   X           LONG
(MUIB_MUI | 0x0042f112)  MUIA_MaxWidth                    X           LONG
(MUIB_MUI | 0x00423535)  MUIA_Pressed                           X     BOOL
(MUIB_MUI | 0x0042ba82)  MUIA_RightEdge                         X     LONG
(MUIB_MUI | 0x0042654b)  MUIA_Selected                    X  X  X     BOOL
(MUIB_MUI | 0x00428fe3)  MUIA_ShortHelp                   X  X  X     STRPTR
(MUIB_MUI | 0x00429ba8)  MUIA_ShowMe                      X  X  X     BOOL
(MUIB_MUI | 0x0042caac)  MUIA_ShowSelState                X           BOOL
(MUIB_MUI | 0x00426435)  MUIA_Timer                             X     LONG
(MUIB_MUI | 0x0042509b)  MUIA_TopEdge                           X     LONG
(MUIB_MUI | 0x0042d12f)  MUIA_VertDisappear               X  X  X     LONG
(MUIB_MUI | 0x004298d0)  MUIA_VertWeight                  X  X  X     WORD
(MUIB_MUI | 0x00421d1f)  MUIA_Weight                      X           WORD
(MUIB_MUI | 0x0042b59c)  MUIA_Width                             X     LONG
(MUIB_MUI | 0x00421591)  MUIA_Window                            X     struct Window *
(MUIB_MUI | 0x0042669e)  MUIA_WindowObject                      X     Object *
(MUIB_MUI | 0x0042d76e)  MUIA_ExportID                    X  X  X     ULONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Balance.mui
-------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Bitmap.mui
------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x004279bd)  MUIA_Bitmap_Bitmap               X  X  X     struct BitMap *
(MUIB_MUI | 0x00421560)  MUIA_Bitmap_Height               X  X  X     LONG
(MUIB_MUI | 0x0042e23d)  MUIA_Bitmap_MappingTable         X  X  X     UBYTE *
(MUIB_MUI | 0x00420c74)  MUIA_Bitmap_Precision            X  X  X     LONG
(MUIB_MUI | 0x00423a47)  MUIA_Bitmap_RemappedBitmap             X     struct BitMap *
(MUIB_MUI | 0x00425360)  MUIA_Bitmap_SourceColors         X  X  X     ULONG *
(MUIB_MUI | 0x00422805)  MUIA_Bitmap_Transparent          X  X  X     LONG
(MUIB_MUI | 0x004239d8)  MUIA_Bitmap_UseFriend            X           BOOL
(MUIB_MUI | 0x0042eb3a)  MUIA_Bitmap_Width                X  X  X     LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Bodychunk.mui
---------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042ca67)  MUIA_Bodychunk_Body              X  X  X     UBYTE *
(MUIB_MUI | 0x0042de5f)  MUIA_Bodychunk_Compression       X  X  X     UBYTE
(MUIB_MUI | 0x0042c392)  MUIA_Bodychunk_Depth             X  X  X     LONG
(MUIB_MUI | 0x00423b0e)  MUIA_Bodychunk_Masking           X  X  X     UBYTE
=======================  ===============================  =  =  =  =  ====================


Luokka: Boopsi.mui
------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00426999)  MUIA_Boopsi_Class                X  X  X     struct IClass *
(MUIB_MUI | 0x0042bfa3)  MUIA_Boopsi_ClassID              X  X  X     char *
(MUIB_MUI | 0x0042757f)  MUIA_Boopsi_MaxHeight            X  X  X     ULONG
(MUIB_MUI | 0x0042bcb1)  MUIA_Boopsi_MaxWidth             X  X  X     ULONG
(MUIB_MUI | 0x00422c93)  MUIA_Boopsi_MinHeight            X  X  X     ULONG
(MUIB_MUI | 0x00428fb2)  MUIA_Boopsi_MinWidth             X  X  X     ULONG
(MUIB_MUI | 0x00420178)  MUIA_Boopsi_Object                     X     Object *
(MUIB_MUI | 0x0042f4bd)  MUIA_Boopsi_Remember             X           ULONG
(MUIB_MUI | 0x0042b8d7)  MUIA_Boopsi_Smart                X           BOOL
(MUIB_MUI | 0x0042bae7)  MUIA_Boopsi_TagDrawInfo          X  X  X     ULONG
(MUIB_MUI | 0x0042bc71)  MUIA_Boopsi_TagScreen            X  X  X     ULONG
(MUIB_MUI | 0x0042e11d)  MUIA_Boopsi_TagWindow            X  X  X     ULONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Coloradjust.mui
-----------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00420eaa)  MUIA_Coloradjust_Red             X  X  X     ULONG
(MUIB_MUI | 0x004285ab)  MUIA_Coloradjust_Green           X  X  X     ULONG
(MUIB_MUI | 0x0042b8a3)  MUIA_Coloradjust_Blue            X  X  X     ULONG 
(MUIB_MUI | 0x0042f899)  MUIA_Coloradjust_RGB             X  X  X     ULONG
(MUIB_MUI | 0x0042ec59)  MUIA_Coloradjust_ModeID          X  X  X     ULONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Colorfield.mui
----------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042713a)  MUIA_Colorfield_Pen                    X     ULONG
(MUIB_MUI | 0x004279f6)  MUIA_Colorfield_Red              X  X  X     ULONG
(MUIB_MUI | 0x00424466)  MUIA_Colorfield_Green            X  X  X     ULONG
(MUIB_MUI | 0x0042d3b0)  MUIA_Colorfield_Blue             X  X  X     ULONG
(MUIB_MUI | 0x0042677a)  MUIA_Colorfield_RGB              X  X  X     ULONG *
=======================  ===============================  =  =  =  =  ====================


Luokka: Configdata.mui
----------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Cycle.mui
-----------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00421788)  MUIA_Cycle_Active                X  X  X     LONG
(MUIB_MUI | 0x00420629)  MUIA_Cycle_Entries               X           STRPTR
=======================  ===============================  =  =  =  =  ====================


Luokka: Dataspace.mui
---------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x00423366)  MUIM_Dataspace_Add
(MUIB_MUI | 0x0042b6c9)  MUIM_Dataspace_Clear
(MUIB_MUI | 0x0042832c)  MUIM_Dataspace_Find
(MUIB_MUI | 0x00423e2b)  MUIM_Dataspace_Merge
(MUIB_MUI | 0x00420dfb)  MUIM_Dataspace_ReadIFF
(MUIB_MUI | 0x0042dce1)  MUIM_Dataspace_Remove
(MUIB_MUI | 0x00425e8e)  MUIM_Dataspace_WriteIFF
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00424cf9)  MUIA_Dataspace_Pool              X           APTR
=======================  ===============================  =  =  =  =  ====================


Luokka: Family.mui
------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x0042e200)  MUIM_Family_AddHead
(MUIB_MUI | 0x0042d752)  MUIM_Family_AddTail
(MUIB_MUI | 0x00424d34)  MUIM_Family_Insert
(MUIB_MUI | 0x0042f8a9)  MUIM_Family_Remove
(MUIB_MUI | 0x00421c49)  MUIM_Family_Sort
(MUIB_MUI | 0x0042c14a)  MUIM_Family_Transfer
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042c696)  MUIA_Family_Child                X           Object *
(MUIB_MUI | 0x00424b9e)  MUIA_Family_List                       X     struct MinList *
=======================  ===============================  =  =  =  =  ====================


Luokka: Frameadjust.mui
-----------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Framedisplay.mui
------------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00421794)  MUIA_Framedisplay_Spec           X  X  X     struct MUI_FrameSpec *
=======================  ===============================  =  =  =  =  ====================


Luokka: Gauge.mui
-----------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042f0dd)  MUIA_Gauge_Current               X  X  X     LONG
(MUIB_MUI | 0x0042d8df)  MUIA_Gauge_Divide                X  X  X     LONG
(MUIB_MUI | 0x004232dd)  MUIA_Gauge_Horiz                 X           BOOL
(MUIB_MUI | 0x0042bf15)  MUIA_Gauge_InfoText              X  X  X     STRPTR
(MUIB_MUI | 0x0042bcdb)  MUIA_Gauge_Max                   X  X  X     LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Group.mui
-----------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x0042d1cc)  MUIM_Group_ExitChange
(MUIB_MUI | 0x00420887)  MUIM_Group_InitChange
(MUIB_MUI | 0x80427417)  MUIM_Group_Sort
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00424199)  MUIA_Group_ActivePage            X  X  X     LONG
(MUIB_MUI | 0x004226e6)  MUIA_Group_Child                 X           Object *
(MUIB_MUI | 0x00424748)  MUIA_Group_ChildList                   X     struct List *
(MUIB_MUI | 0x0042f416)  MUIA_Group_Columns               X  X        LONG
(MUIB_MUI | 0x00421422)  MUIA_Group_Forward                  X        BOOL
(MUIB_MUI | 0x0042536b)  MUIA_Group_Horiz                 X           BOOL
(MUIB_MUI | 0x0042c651)  MUIA_Group_HorizSpacing          X  X  X     LONG
(MUIB_MUI | 0x0042c3b2)  MUIA_Group_LayoutHook            X           struct Hook *
(MUIB_MUI | 0x00421a5f)  MUIA_Group_PageMode              X           BOOL
(MUIB_MUI | 0x0042b68f)  MUIA_Group_Rows                  X  X        LONG
(MUIB_MUI | 0x0042037e)  MUIA_Group_SameHeight            X           BOOL
(MUIB_MUI | 0x00420860)  MUIA_Group_SameSize              X           BOOL
(MUIB_MUI | 0x0042b3ec)  MUIA_Group_SameWidth             X           BOOL
(MUIB_MUI | 0x0042866d)  MUIA_Group_Spacing               X  X        LONG
(MUIB_MUI | 0x0042e1bf)  MUIA_Group_VertSpacing           X  X  X     LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Imageadjust.mui
-----------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00422f2b)  MUIA_Imageadjust_Type            X           LONG
(MUIB_MUI | 0x004279e1)  MUIA_Imageadjust_Spec                  X     char *
=======================  ===============================  =  =  =  =  ====================


Luokka: Imagedisplay.mui
------------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042a547)  MUIA_Imagedisplay_Spec           X  X  X     struct MUI_ImageSpec *
=======================  ===============================  =  =  =  =  ====================


Luokka: Image.mui
-----------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042815d)  MUIA_Image_FontMatch             X           BOOL
(MUIB_MUI | 0x00429f26)  MUIA_Image_FontMatchHeight       X           BOOL
(MUIB_MUI | 0x004239bf)  MUIA_Image_FontMatchWidth        X           BOOL
(MUIB_MUI | 0x0042da84)  MUIA_Image_FreeHoriz             X           BOOL
(MUIB_MUI | 0x0042ea28)  MUIA_Image_FreeVert              X           BOOL
(MUIB_MUI | 0x00424f3d)  MUIA_Image_OldImage              X           struct Image *
(MUIB_MUI | 0x004233d5)  MUIA_Image_Spec                  X           char *
(MUIB_MUI | 0x0042a3ad)  MUIA_Image_State                 X  X        LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: List.mui
----------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x0042ad89)  MUIM_List_Clear
(MUIB_MUI | 0x00421b68)  MUIM_List_Compare
(MUIB_MUI | 0x0042d662)  MUIM_List_Construct
(MUIB_MUI | 0x00429804)  MUIM_List_CreateImage
(MUIB_MUI | 0x00420f58)  MUIM_List_DeleteImage
(MUIB_MUI | 0x00427d51)  MUIM_List_Destruct
(MUIB_MUI | 0x00425377)  MUIM_List_Display
(MUIB_MUI | 0x0042468c)  MUIM_List_Exchange
(MUIB_MUI | 0x004280ec)  MUIM_List_GetEntry
(MUIB_MUI | 0x00426c87)  MUIM_List_Insert
(MUIB_MUI | 0x004254d5)  MUIM_List_InsertSingle
(MUIB_MUI | 0x0042baab)  MUIM_List_Jump
(MUIB_MUI | 0x004253c2)  MUIM_List_Move
(MUIB_MUI | 0x00425f17)  MUIM_List_NextSelected
(MUIB_MUI | 0x00427993)  MUIM_List_Redraw
(MUIB_MUI | 0x0042647e)  MUIM_List_Remove
(MUIB_MUI | 0x004252d8)  MUIM_List_Select
(MUIB_MUI | 0x00422275)  MUIM_List_Sort
(MUIB_MUI | 0x00425f48)  MUIM_List_TestPos
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042391c)  MUIA_List_Active                 X  X  X     LONG
(MUIB_MUI | 0x0042850d)  MUIA_List_AdjustHeight           X           BOOL
(MUIB_MUI | 0x0042354a)  MUIA_List_AdjustWidth            X           BOOL
(MUIB_MUI | 0x0042a445)  MUIA_List_AutoVisible            X  X  X     BOOL
(MUIB_MUI | 0x00425c14)  MUIA_List_CompareHook            X  X        struct Hook *
(MUIB_MUI | 0x0042894f)  MUIA_List_ConstructHook          X  X        struct Hook *
(MUIB_MUI | 0x004297ce)  MUIA_List_DestructHook           X  X        struct Hook *
(MUIB_MUI | 0x0042b4d5)  MUIA_List_DisplayHook            X  X        struct Hook *
(MUIB_MUI | 0x00426099)  MUIA_List_DragSortable           X  X  X     BOOL
(MUIB_MUI | 0x0042aba6)  MUIA_List_DropMark                     X     LONG
(MUIB_MUI | 0x00421654)  MUIA_List_Entries                      X     LONG
(MUIB_MUI | 0x004238d4)  MUIA_List_First                        X     LONG
(MUIB_MUI | 0x00423c0a)  MUIA_List_Format                 X  X  X     STRPTR
(MUIB_MUI | 0x0042d0cd)  MUIA_List_InsertPosition               X     LONG
(MUIB_MUI | 0x0042d1c3)  MUIA_List_MinLineHeight          X           LONG
(MUIB_MUI | 0x0042c2c6)  MUIA_List_MultiTestHook          X  X        struct Hook *
(MUIB_MUI | 0x00423431)  MUIA_List_Pool                   X           APTR
(MUIB_MUI | 0x0042a4eb)  MUIA_List_PoolPuddleSize         X           ULONG
(MUIB_MUI | 0x0042c48c)  MUIA_List_PoolThreshSize         X           ULONG
(MUIB_MUI | 0x0042d8c7)  MUIA_List_Quiet                     X        BOOL
(MUIB_MUI | 0x0042c6f3)  MUIA_List_ShowDropMarks          X  X  X     BOOL
(MUIB_MUI | 0x0042c0a0)  MUIA_List_SourceArray            X           APTR
(MUIB_MUI | 0x00423e66)  MUIA_List_Title                  X  X  X     char *
(MUIB_MUI | 0x0042191f)  MUIA_List_Visible                      X     LONG
(MUIB_MUI | 0x0042a8f5)  MUIA_List_Prop_Entries              X  X  X  LONG
(MUIB_MUI | 0x004273e9)  MUIA_List_Prop_Visible              X  X  X  LONG
(MUIB_MUI | 0x00429df3)  MUIA_List_Prop_First                X  X  X  LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Floattext.mui
---------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042dc03)  MUIA_Floattext_Justify           X  X  X     BOOL
(MUIB_MUI | 0x00425c7d)  MUIA_Floattext_SkipChars         X  X        STRPTR
(MUIB_MUI | 0x00427d17)  MUIA_Floattext_TabSize           X  X        LONG
(MUIB_MUI | 0x0042d16a)  MUIA_Floattext_Text              X  X  X     STRPTR
=======================  ===============================  =  =  =  =  ====================


Luokka: Volumelist.mui
----------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Scrmodelist.mui
-----------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Dirlist.mui
-------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x00422d71)  MUIM_Dirlist_ReRead
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042760a)  MUIA_Dirlist_AcceptPattern       X  X        STRPTR
(MUIB_MUI | 0x0042ea41)  MUIA_Dirlist_Directory           X  X  X     STRPTR
(MUIB_MUI | 0x0042b379)  MUIA_Dirlist_DrawersOnly         X  X        BOOL
(MUIB_MUI | 0x0042896a)  MUIA_Dirlist_FilesOnly           X  X        BOOL
(MUIB_MUI | 0x00424ad2)  MUIA_Dirlist_FilterDrawers       X  X        BOOL
(MUIB_MUI | 0x0042ae19)  MUIA_Dirlist_FilterHook          X  X        struct Hook *
(MUIB_MUI | 0x00428653)  MUIA_Dirlist_MultiSelDirs        X  X        BOOL
(MUIB_MUI | 0x00429e26)  MUIA_Dirlist_NumBytes                  X     LONG
(MUIB_MUI | 0x00429cb8)  MUIA_Dirlist_NumDrawers                X     LONG
(MUIB_MUI | 0x0042a6f0)  MUIA_Dirlist_NumFiles                  X     LONG
(MUIB_MUI | 0x00426176)  MUIA_Dirlist_Path                      X     STRPTR
(MUIB_MUI | 0x00424808)  MUIA_Dirlist_RejectIcons         X  X        BOOL
(MUIB_MUI | 0x004259c7)  MUIA_Dirlist_RejectPattern       X  X        STRPTR
(MUIB_MUI | 0x0042bbb9)  MUIA_Dirlist_SortDirs            X  X        LONG
(MUIB_MUI | 0x00421896)  MUIA_Dirlist_SortHighLow         X  X        BOOL
(MUIB_MUI | 0x004228bc)  MUIA_Dirlist_SortType            X  X        LONG
(MUIB_MUI | 0x004240de)  MUIA_Dirlist_Status                    X     LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Listview.mui
--------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042d1b3)  MUIA_Listview_ClickColumn              X     LONG
(MUIB_MUI | 0x0042b296)  MUIA_Listview_DefClickColumn     X  X  X     LONG
(MUIB_MUI | 0x00424635)  MUIA_Listview_DoubleClick        X     X     BOOL
(MUIB_MUI | 0x00425cd3)  MUIA_Listview_DragType           X  X  X     LONG
(MUIB_MUI | 0x0042682d)  MUIA_Listview_Input              X           BOOL
(MUIB_MUI | 0x0042bcce)  MUIA_Listview_List               X     X     Object *
(MUIB_MUI | 0x00427e08)  MUIA_Listview_MultiSelect        X           LONG
(MUIB_MUI | 0x0042b1b4)  MUIA_Listview_ScrollerPos        X           BOOL
(MUIB_MUI | 0x0042178f)  MUIA_Listview_SelectChange             X     BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Menustrip.mui
---------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042815b)  MUIA_Menustrip_Enabled           X  X  X     BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Menu.mui
----------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042ed48)  MUIA_Menu_Enabled                X  X  X     BOOL
(MUIB_MUI | 0x0042a0e3)  MUIA_Menu_Title                  X  X  X     STRPTR
=======================  ===============================  =  =  =  =  ====================


Luokka: Menuitem.mui
--------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042562a)  MUIA_Menuitem_Checked            X  X  X     BOOL
(MUIB_MUI | 0x00425ace)  MUIA_Menuitem_Checkit            X  X  X     BOOL
(MUIB_MUI | 0x0042b9cc)  MUIA_Menuitem_CommandString      X  X  X     BOOL
(MUIB_MUI | 0x0042ae0f)  MUIA_Menuitem_Enabled            X  X  X     BOOL
(MUIB_MUI | 0x00420bc6)  MUIA_Menuitem_Exclude            X  X  X     LONG
(MUIB_MUI | 0x00422030)  MUIA_Menuitem_Shortcut           X  X  X     STRPTR
(MUIB_MUI | 0x004218be)  MUIA_Menuitem_Title              X  X  X     STRPTR
(MUIB_MUI | 0x00424d5c)  MUIA_Menuitem_Toggle             X  X  X     BOOL
(MUIB_MUI | 0x00426f32)  MUIA_Menuitem_Trigger                  X     struct MenuItem *
=======================  ===============================  =  =  =  =  ====================


Luokka: Notify.mui
------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x0042b96b)  MUIM_CallHook
(MUIB_MUI | 0x00420f1c)  MUIM_Export
(MUIB_MUI | 0x0042c196)  MUIM_FindUData
(MUIB_MUI | 0x00423edb)  MUIM_GetConfigItem
(MUIB_MUI | 0x0042ed0c)  MUIM_GetUData
(MUIB_MUI | 0x0042d012)  MUIM_Import
(MUIB_MUI | 0x0042d240)  MUIM_KillNotify
(MUIB_MUI | 0x0042b145)  MUIM_KillNotifyObj
(MUIB_MUI | 0x0042d356)  MUIM_MultiSet
(MUIB_MUI | 0x0042216f)  MUIM_NoNotifySet
(MUIB_MUI | 0x0042c9cb)  MUIM_Notify
(MUIB_MUI | 0x0042549a)  MUIM_Set
(MUIB_MUI | 0x00422590)  MUIM_SetAsString
(MUIB_MUI | 0x0042c920)  MUIM_SetUData
(MUIB_MUI | 0x0042ca19)  MUIM_SetUDataOnce
(MUIB_MUI | 0x00428d86)  MUIM_WriteLong
(MUIB_MUI | 0x00424bf4)  MUIM_WriteString
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042d3ee)  MUIA_ApplicationObject                 X     Object *
(MUIB_MUI | 0x00421955)  MUIA_AppMessage                        X     struct AppMessage *
(MUIB_MUI | 0x0042a825)  MUIA_HelpLine                    X  X  X     LONG
(MUIB_MUI | 0x00420b85)  MUIA_HelpNode                    X  X  X     STRPTR
(MUIB_MUI | 0x004237f9)  MUIA_NoNotify                       X        BOOL
(MUIB_MUI | 0x0042d76e)  MUIA_ObjectID                    X  X  X     ULONG
(MUIB_MUI | 0x0042e35f)  MUIA_Parent                            X     Object *
(MUIB_MUI | 0x00427eaa)  MUIA_Revision                          X     LONG
(MUIB_MUI | 0x00420313)  MUIA_UserData                    X  X  X     ULONG
(MUIB_MUI | 0x00422301)  MUIA_Version                           X     LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Numeric.mui
-------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x004243a7)  MUIM_Numeric_Decrease
(MUIB_MUI | 0x00426ecd)  MUIM_Numeric_Increase
(MUIB_MUI | 0x0042032c)  MUIM_Numeric_ScaleToValue
(MUIB_MUI | 0x0042ab0a)  MUIM_Numeric_SetDefault
(MUIB_MUI | 0x00424891)  MUIM_Numeric_Stringify
(MUIB_MUI | 0x00423e4f)  MUIM_Numeric_ValueToScale
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00421594)  MUIA_Numeric_CheckAllSizes       X  X  X     BOOL
(MUIB_MUI | 0x004263e8)  MUIA_Numeric_Default             X  X  X     LONG
(MUIB_MUI | 0x004263e9)  MUIA_Numeric_Format              X  X  X     STRPTR
(MUIB_MUI | 0x0042d78a)  MUIA_Numeric_Max                 X  X  X     LONG
(MUIB_MUI | 0x0042e404)  MUIA_Numeric_Min                 X  X  X     LONG
(MUIB_MUI | 0x0042f2a0)  MUIA_Numeric_Reverse             X  X  X     BOOL
(MUIB_MUI | 0x004294a7)  MUIA_Numeric_RevLeftRight        X  X  X     BOOL
(MUIB_MUI | 0x004252dd)  MUIA_Numeric_RevUpDown           X  X  X     BOOL
(MUIB_MUI | 0x0042ae3a)  MUIA_Numeric_Value               X  X  X     LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Penadjust.mui
---------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00421cbb)  MUIA_Penadjust_PSIMode           X           BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Pendisplay.mui
----------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x004243a7)  MUIM_Pendisplay_SetColormap
(MUIB_MUI | 0x00426ecd)  MUIM_Pendisplay_SetMUIPen
(MUIB_MUI | 0x0042032c)  MUIM_Pendisplay_SetRGB
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042a748)  MUIA_Pendisplay_Pen                    X     Object *
(MUIB_MUI | 0x0042dc24)  MUIA_Pendisplay_Reference        X  X  X     Object *
(MUIB_MUI | 0x0042a1a9)  MUIA_Pendisplay_RGBcolor         X  X  X     struct MUI_RGBcolor *
(MUIB_MUI | 0x0042a204)  MUIA_Pendisplay_Spec             X  X  X     struct MUI_PenSpec *
=======================  ===============================  =  =  =  =  ====================


Luokka: Popasl.mui
------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00421b37)  MUIA_Popasl_Active                     X     BOOL
(MUIB_MUI | 0x0042b703)  MUIA_Popasl_StartHook            X  X  X     struct Hook *
(MUIB_MUI | 0x0042d8d2)  MUIA_Popasl_StopHook             X  X  X     struct Hook *
(MUIB_MUI | 0x0042df3d)  MUIA_Popasl_Type                 X     X     ULONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Popframe.mui
--------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Popimage.mui
--------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Popobject.mui
---------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00424cb5)  MUIA_Popobject_Follow            X  X  X     BOOL
(MUIB_MUI | 0x0042a5a3)  MUIA_Popobject_Light             X  X  X     BOOL
(MUIB_MUI | 0x004293e3)  MUIA_Popobject_Object            X     X     Object *
(MUIB_MUI | 0x0042db44)  MUIA_Popobject_ObjStrHook        X  X  X     struct Hook *
(MUIB_MUI | 0x0042fbe1)  MUIA_Popobject_StrObjHook        X  X  X     struct Hook *
(MUIB_MUI | 0x004252ec)  MUIA_Popobject_Volatile          X  X  X     BOOL
(MUIB_MUI | 0x0042f194)  MUIA_Popobject_WindowHook        X  X  X     struct Hook *
=======================  ===============================  =  =  =  =  ====================


Luokka: Poplist.mui
-------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042084c)  MUIA_Poplist_Array               X           char **
=======================  ===============================  =  =  =  =  ====================


Luokka: Popscreen.mui
---------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Poppen.mui
------------------

Ei dokumentoituja metodeja tai atribuutteja.


Luokka: Popstring.mui
---------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x0042dc52)  MUIM_Popstring_Close
(MUIB_MUI | 0x004258ba)  MUIM_Popstring_Open
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042d0b9)  MUIA_Popstring_Button            X     X     Object *
(MUIB_MUI | 0x004256bf)  MUIA_Popstring_CloseHook         X  X  X     struct Hook *
(MUIB_MUI | 0x00429d00)  MUIA_Popstring_OpenHook          X  X  X     struct Hook *
(MUIB_MUI | 0x004239ea)  MUIA_Popstring_String            X     X     Object *
(MUIB_MUI | 0x00422b7a)  MUIA_Popstring_Toggle            X  X  X     BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Prop.mui
----------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x00420dd1)  MUIM_Prop_Decrease
(MUIB_MUI | 0x0042cac0)  MUIM_Prop_Increase
=======================  ==================================================  =

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042fbdb)  MUIA_Prop_Entries                X  X  X     LONG
(MUIB_MUI | 0x0042d4b2)  MUIA_Prop_First                  X  X  X     LONG
(MUIB_MUI | 0x0042f4f3)  MUIA_Prop_Horiz                  X     X     BOOL
(MUIB_MUI | 0x00429c3a)  MUIA_Prop_Slider                 X  X  X     BOOL
(MUIB_MUI | 0x0042deee)  MUIA_Prop_UseWinBorder           X           LONG
(MUIB_MUI | 0x0042fea6)  MUIA_Prop_Visible                X  X  X     LONG
(MUIB_MUI | 0x00429839)  MUIA_Prop_Release                      X  X  BOOL
(MUIB_MUI | 0x00427c5e)  MUIA_Prop_DeltaFactor            X  X        LONG
(MUIB_MUI | 0x004236ce)  MUIA_Prop_DoSmooth               X           LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Radio.mui
-----------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00429b41)  MUIA_Radio_Active                X  X  X     LONG
(MUIB_MUI | 0x0042b6a1)  MUIA_Radio_Entries               X           STRPTR *
=======================  ===============================  =  =  =  =  ====================


Luokka: Rectange.mui
--------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00426689)  MUIA_Rectangle_BarTitle          X     X     STRPTR
(MUIB_MUI | 0x0042c943)  MUIA_Rectangle_HBar              X     X     BOOL
(MUIB_MUI | 0x00422204)  MUIA_Rectangle_VBar              X     X     BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Register.mui
--------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042349b)  MUIA_Register_Frame              X     X     BOOL
(MUIB_MUI | 0x004297ec)  MUIA_Register_Titles             X     X     STRPTR
=======================  ===============================  =  =  =  =  ====================


Luokka: Scale.mui
-----------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042919a)  MUIA_Scale_Horiz                 X  X  X     BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Scrollbar.mui
---------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042fb6b)  MUIA_Scrollbar_Type              X           LONG
=======================  ===============================  =  =  =  =  ====================


Luokka: Scrollgroup.mui
-----------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00421261)  MUIA_Scrollgroup_Contents        X     X     Object *
(MUIB_MUI | 0x004292f3)  MUIA_Scrollgroup_FreeHoriz       X           BOOL
(MUIB_MUI | 0x004224f2)  MUIA_Scrollgroup_FreeVert        X           BOOL
(MUIB_MUI | 0x0042b63d)  MUIA_Scrollgroup_HorizBar              X     Object *
(MUIB_MUI | 0x004284c1)  MUIA_Scrollgroup_UseWinBorder    X           BOOL
(MUIB_MUI | 0x0042cdc0)  MUIA_Scrollgroup_VertBar               X     Object *
=======================  ===============================  =  =  =  =  ====================


Luokka: Semaphore.mui
---------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x00426ce2)  MUIM_Semaphore_Attempt
(MUIB_MUI | 0x00422551)  MUIM_Semaphore_AttemptShared
(MUIB_MUI | 0x004276f0)  MUIM_Semaphore_Obtain
(MUIB_MUI | 0x0042ea02)  MUIM_Semaphore_ObtainShared
(MUIB_MUI | 0x00421f2d)  MUIM_Semaphore_Release
=======================  ==================================================  =


Luokka: Settingsgroup.mui
-------------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x00427043)  MUIM_Settingsgroup_ConfigToGadgets
(MUIB_MUI | 0x00425242)  MUIM_Settingsgroup_GadgetsToConfig
=======================  ==================================================  =


Luokka: Settings.mui
--------------------

Ei dokumentoituja metodeja eikä atributteja.


Luokka: Slider.mui
------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042fad1)  MUIA_Slider_Horiz                X  X  X     BOOL
(MUIB_MUI | 0x00420b26)  MUIA_Slider_Quiet                X           BOOL
(MUIB_MUI | 0x0042ae3a)  MUIA_Slider_Level                X  X  X     LONG
(MUIB_MUI | 0x0042d78a)  MUIA_Slider_Max                  X  X  X     LONG
(MUIB_MUI | 0x0042e404)  MUIA_Slider_Min                  X  X  X     LONG
(MUIB_MUI | 0x0042f2a0)  MUIA_Slider_Reverse              X  X  X     BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: String.mui
------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042e3e1)  MUIA_String_Accept               X  X  X     STRPTR
(MUIB_MUI | 0x0042026c)  MUIA_String_Acknowledge                X     STRPTR
(MUIB_MUI | 0x004226de)  MUIA_String_AdvanceOnCR          X  X  X     BOOL
(MUIB_MUI | 0x00420fd2)  MUIA_String_AttachedList         X  X  X     Object *
(MUIB_MUI | 0x00428b6c)  MUIA_String_BufferPos               X  X     LONG
(MUIB_MUI | 0x00428ffd)  MUIA_String_Contents             X  X  X     STRPTR
(MUIB_MUI | 0x0042ccbf)  MUIA_String_DisplayPos              X  X     LONG
(MUIB_MUI | 0x00424c33)  MUIA_String_EditHook             X  X  X     struct Hook *
(MUIB_MUI | 0x00427484)  MUIA_String_Format               X     X     LONG
(MUIB_MUI | 0x00426e8a)  MUIA_String_Integer              X  X  X     ULONG
(MUIB_MUI | 0x00421569)  MUIA_String_LonelyEditHook       X  X  X     BOOL
(MUIB_MUI | 0x00424984)  MUIA_String_MaxLen               X     X     LONG
(MUIB_MUI | 0x0042179c)  MUIA_String_Reject               X  X  X     STRPTR
(MUIB_MUI | 0x00428769)  MUIA_String_Secret               X     X     BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Text.mui
----------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x0042f8dc)  MUIA_Text_Contents               X  X  X     STRPTR
(MUIB_MUI | 0x004218ff)  MUIA_Text_HiChar                 X           char
(MUIB_MUI | 0x004214f5)  MUIA_Text_HiCharIdx              X           char
(MUIB_MUI | 0x0042566d)  MUIA_Text_PreParse               X  X  X     STRPTR
(MUIB_MUI | 0x00424d0a)  MUIA_Text_SetMax                 X           BOOL
(MUIB_MUI | 0x00424e10)  MUIA_Text_SetMin                 X           BOOL
(MUIB_MUI | 0x00420d8b)  MUIA_Text_SetVMax                X           BOOL
=======================  ===============================  =  =  =  =  ====================


Luokka: Window.mui
------------------

=======================  ==================================================  =
Metodit
------------------------------------------------------------------------------
Tunniste                 Nimi                                                P
=======================  ==================================================  =
(MUIB_MUI | 0x00422cc0)  MUIM_Window_ActionIconify
(MUIB_MUI | 0x004203b7)  MUIM_Window_AddEventHandler
(MUIB_MUI | 0x0042ab26)  MUIM_Window_Cleanup
(MUIB_MUI | 0x0042679e)  MUIM_Window_RemEventHandler
(MUIB_MUI | 0x0042913d)  MUIM_Window_ScreenToBack
(MUIB_MUI | 0x004227a4)  MUIM_Window_ScreenToFront
(MUIB_MUI | 0x0042c34c)  MUIM_Window_Setup
(MUIB_MUI | 0x0042945e)  MUIM_Window_Snapshot
(MUIB_MUI | 0x0042152e)  MUIM_Window_ToBack
(MUIB_MUI | 0x0042554f)  MUIM_Window_ToFront
(MUIB_MUI | 0x00420414)  MUIM_Window_GetMenuCheck
(MUIB_MUI | 0x00420d2f)  MUIM_Window_GetMenuState
(MUIB_MUI | 0x00426510)  MUIM_Window_SetCycleChain
(MUIB_MUI | 0x00422243)  MUIM_Window_SetMenuCheck
(MUIB_MUI | 0x00422b5e)  MUIM_Window_SetMenuState
=======================  ==================================================  =

=======================  ===================================  =  =  =  =  ====================
Atribuutit
----------------------------------------------------------------------------------------------
Tunniste                 Nimi                                 I  S  G  P  Tyyppi              
=======================  ===================================  =  =  =  =  ====================
(MUIB_MUI | 0x00428d2f)  MUIA_Window_Activate                 X  X  X     BOOL
(MUIB_MUI | 0x00427925)  MUIA_Window_ActiveObject                X  X     Object *
(MUIB_MUI | 0x0042cce3)  MUIA_Window_AltHeight                X     X     LONG
(MUIB_MUI | 0x00422d65)  MUIA_Window_AltLeftEdge              X     X     LONG
(MUIB_MUI | 0x0042e99b)  MUIA_Window_AltTopEdge               X     X     LONG
(MUIB_MUI | 0x004260f4)  MUIA_Window_AltWidth                 X     X     LONG
(MUIB_MUI | 0x004280cf)  MUIA_Window_AppWindow                X           BOOL
(MUIB_MUI | 0x0042c0bb)  MUIA_Window_Backdrop                 X           BOOL
(MUIB_MUI | 0x00429b79)  MUIA_Window_Borderless               X           BOOL
(MUIB_MUI | 0x0042a110)  MUIA_Window_CloseGadget              X           BOOL
(MUIB_MUI | 0x0042e86e)  MUIA_Window_CloseRequest                   X     BOOL
(MUIB_MUI | 0x004294d7)  MUIA_Window_DefaultObject            X  X  X     Object *
(MUIB_MUI | 0x00421923)  MUIA_Window_DepthGadget              X           BOOL
(MUIB_MUI | 0x00424c36)  MUIA_Window_DisableKeys              X  X  X     ULONG
(MUIB_MUI | 0x0042045d)  MUIA_Window_DragBar                  X           BOOL
(MUIB_MUI | 0x0042bd0e)  MUIA_Window_FancyDrawing             X  X  X     BOOL
(MUIB_MUI | 0x00425846)  MUIA_Window_Height                   X     X     LONG
(MUIB_MUI | 0x004201bd)  MUIA_Window_ID                       X  X  X     ULONG
(MUIB_MUI | 0x004247d8)  MUIA_Window_InputEvent                     X     struct InputEvent *
(MUIB_MUI | 0x0042b5aa)  MUIA_Window_IsSubWindow              X  X  X     BOOL
(MUIB_MUI | 0x00426c65)  MUIA_Window_LeftEdge                 X     X     LONG
(MUIB_MUI | 0x00427521)  MUIA_Window_MenuAction               X  X  X     ULONG
(MUIB_MUI | 0x0042855e)  MUIA_Window_Menustrip                X     X     Object *
(MUIB_MUI | 0x0042bf9b)  MUIA_Window_MouseObject                    X     Object *
(MUIB_MUI | 0x0042372a)  MUIA_Window_NeedsMouseObject         X           BOOL
(MUIB_MUI | 0x00429df5)  MUIA_Window_NoMenus                  X  X        BOOL
(MUIB_MUI | 0x00428aa0)  MUIA_Window_Open                        X  X     BOOL
(MUIB_MUI | 0x004278e4)  MUIA_Window_PublicScreen             X  X  X     STRPTR
(MUIB_MUI | 0x004201f4)  MUIA_Window_RefWindow                X  X        Object *
(MUIB_MUI | 0x0042cba5)  MUIA_Window_RootObject               X  X  X     Object *
(MUIB_MUI | 0x0042df4f)  MUIA_Window_Screen                   X  X  X     struct Screen *
(MUIB_MUI | 0x004234b0)  MUIA_Window_ScreenTitle              X  X  X     STRPTR
(MUIB_MUI | 0x0042e33d)  MUIA_Window_SizeGadget               X           BOOL
(MUIB_MUI | 0x00424780)  MUIA_Window_SizeRight                X           BOOL
(MUIB_MUI | 0x0042e7db)  MUIA_Window_Sleep                       X  X     BOOL
(MUIB_MUI | 0x0042ad3d)  MUIA_Window_Title                    X  X  X     STRPTR
(MUIB_MUI | 0x00427c66)  MUIA_Window_TopEdge                  X     X     LONG
(MUIB_MUI | 0x00424e79)  MUIA_Window_UseBottomBorderScroller  X  X  X     BOOL
(MUIB_MUI | 0x0042433e)  MUIA_Window_UseLeftBorderScroller    X  X  X     BOOL
(MUIB_MUI | 0x0042c05e)  MUIA_Window_UseRightBorderScroller   X  X  X     BOOL
(MUIB_MUI | 0x0042dcae)  MUIA_Window_Width                    X     X     LONG
(MUIB_MUI | 0x00426a42)  MUIA_Window_Window                         X     struct Window *
(MUIB_MUI | 0x0042db94)  MUIA_Window_Menu                     X           struct NewMenu *
=======================  ===================================  =  =  =  =  ====================


Luokka: Virtgroup.mui
---------------------

=======================  ===============================  =  =  =  =  ====================
Atribuutit
------------------------------------------------------------------------------------------
Tunniste                 Nimi                             I  S  G  P  Tyyppi              
=======================  ===============================  =  =  =  =  ====================
(MUIB_MUI | 0x00423038)  MUIA_Virtgroup_Height                  X     LONG
(MUIB_MUI | 0x00427f7e)  MUIA_Virtgroup_Input             X           BOOL
(MUIB_MUI | 0x00429371)  MUIA_Virtgroup_Left              X  X  X     LONG
(MUIB_MUI | 0x00425200)  MUIA_Virtgroup_Top               X  X  X     LONG
(MUIB_MUI | 0x00427c49)  MUIA_Virtgroup_Width                   X     LONG
=======================  ===============================  =  =  =  =  ====================
