========================
Zune Test Specifications
========================

:Author:    Neil Cafferkey
:Copyright: Copyright © 2015-2020, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

The sections below describe test cases to confirm the basic functionality of 
Zune classes using the main Zune test program. The standard location of this 
program in binary distributions is 'Developer/Debug/Tests/Zune'.

Colorfield
==========

#. Go to the Color tab.
#. Go to the Colors subtab.
#. Check the left Colorfield is light blue.
   [tests **MUIA_Colorfield_RGB[I]**]
#. Check the right Colorfield is the same light blue.
   [tests **MUIA_Colorfield_(Red|Green|Blue)[I]**]
#. Check pen number is "253".
   [tests **MUIA_Colorfield_Pen[IG]**]
#. Enter "252" in the pen box, and press return.
#. Check the left Colorfield stays the same colour.
   [tests **MUIA_Colorfield_Pen[S]**]
#. Adjust the colour in the Coloradjust object.
#. Check the left Colorfield shows the new colour.
   [tests **MUIA_Colorfield_(Red|Green|Blue)[S]**]
#. Check the right Colorfield shows the new colour.
   [tests **MUIA_Colorfield_(Red|Green|Blue)[G]**]
#. Go to the Pens subtab.
#. Check the left Pendisplay shows the new colour.
   [tests **MUIA_Colorfield_RGB[G]**]
#. Go back to the Colors subtab.
#. Press the 'Reset' button.
#. Check the left Colorfield is light blue.
   [tests **MUIA_Colorfield_RGB[S]**]

Pendisplay
==========

#. Go to the Color tab.
#. Go to the Pens subtab.
#. Check the left Pendisplay is the "Shine" colour (usually off-white).
   [tests **MUIA_Pendisplay_Spec[I]**]
#. Check the pen spec is "m0".
   [tests **MUIA_Pendisplay_Spec[G]**]
#. Check the right Pendisplay shows light blue.
   [tests **MUIA_Pendisplay_RGBcolor[I]**]
#. Go to the Colors subtab.
#. Adjust the colour in the Coloradjust object.
#. Go back to the Pens subtab.
#. Check the left Pendisplay shows the new colour.
   [tests **MUIA_Pendisplay_RGBcolor[S]**]
#. Check the Poppen shows the new colour.
   [tests **MUIA_Pendisplay_RGBcolor[G]**]
#. Check the pen number has changed.
   [tests **MUIA_Pendisplay_Pen[G]**]
#. Select the 'Reference' checkbox.
#. Change the pen spec to "m7".
#. Check the left Pendisplay is the "Mark" colour (usually peach).
   [tests **MUIA_Pendisplay_Spec[S]**]
#. Check the right Pendisplay is the same colour as the left one.
   [tests **MUIA_Pendisplay_Reference[S]**]
#. Enter "253" in the 'Pen' box, and press return.
#. Check the left Pendisplay area has changed colour (usually to green).
   [tests **MUIM_Pendisplay_SetColormap**]
#. Press the 'Shine' button.
#. Check that the left Pendisplay shows the Shine colour.
   [tests **MUIM_Pendisplay_SetMUIPen**]
#. Press the 'Yellow' button.
#. Check the left Pendisplay shows yellow.
   [tests **MUIM_Pendisplay_SetRGB**]

Untested attributes: **MUIA_Pendisplay_Reference[IG]**

String
======

#. Go to the Text tab.
#. Go to the String subtab.
#. Check that none of the test strings are disabled.
   [tests **MUIA_String_Format[G]**, **MUIA_String_Secret[G]**]
#. Click in the first string.
#. Press the return key to advance to the second string.
   [tests **MUIA_String_AdvanceOnCR[I]**]
#. Check that the cursor is on the fourth character.
   [tests **MUIA_String_BufferPos[I]**]
#. Untick 'Advance on CR'.
#. Click in each of the test strings to check that their alignment is as
   described.
   [tests **MUIA_String_Format[I]**]
#. Type "u*" in the first string gadget.
#. Check that exactly "u" appears in the string gadget, and that a
   display-beep occurs.
   [tests **MUIA_String_Accept[I]**]
#. Type "?." in the second string gadget.
#. Check that exactly "." appears in the string gadget, and that a
   display-beep occurs.
   [tests **MUIA_String_Reject[I]**]
#. Check that "aeiou?." appears in the 'Acceptable characters' string gadget.
   [tests **MUIA_String_Contents[I]**]
#. Check that exactly "\*?" appears in the 'Unacceptable characters' string
   gadget.
   [tests **MUIA_String_Contents[S]**]
#. Clear the first and second strings.
#. Remove "." from the 'Acceptable characters' string.
#. Type "i.e." in the second string gadget.
#. Check that exactly "ie" appears in the string gadget, and that two
   display-beeps occur.
   [tests **MUIA_String_Contents[G]**, **MUIA_String_Accept[SG]**]
#. Append "o" to the 'Unacceptable characters' string.
#. Type "eo" in the third string gadget.
#. Check that exactly "e" appears in the string gadget, and that a
   display-beep occurs.
   [tests **MUIA_String_Contents[G]**, **MUIA_String_Reject[SG]**]
#. Type "aeiou!" in the secret string.
#. Check that exactly "\*\*\*\*" appears.
   [tests **MUIA_String_Secret[I]**]
#. Tick 'Accept all characters'.
#. Type "hello world" in the first string.
#. Check that only "hello wo" appears.
   [tests **MUIA_String_MaxLen[I]**]
#. Check that the 'Maximum string length' field contains "8".
   [tests **MUIA_String_MaxLen[G]**]
#. Type "Hello" in the third string.
#. Set the 'Cursor position' slider to 2.
#. Click in the second string.
#. Press the return key.
#. Check that the cursor disappears (and doesn't appear in any other string).
   [tests **MUIA_String_AdvanceOnCR[SG]**]
#. Click in the second string.
#. Press the tab key to advance to the third string.
#. Check that the cursor is on the third character.
   [tests **MUIA_String_BufferPos[SG]**]
#. Press the cursor down key three times.
#. Go to the 'List' tab.
#. Go to the 'Single Column (1)' subtab.
#. Check that 'Banana' is the active entry in the 'No Multiselect' list.
   [tests **MUIA_String_AttachedList[I]**]
#. Go back to the 'Text' tab.
#. Untick 'Attach list'.
#. Click in the second string.
#. Press the cursor up key once.
#. Go to the 'List' tab.
#. Check that 'Banana' is still the active entry in the 'No Multiselect' list.
   [tests **MUIA_String_AttachedList[SG]**]
#. Go back to the 'Text' tab.
#. Tick 'Attach list'.
#. Click in the second string.
#. Press the cursor up key once.
#. Go to the 'List' tab.
#. Check that 'Apple' is the active entry in the 'No Multiselect' list.
   [tests **MUIA_String_AttachedList[SG]**]
#. Go back to the 'Text' tab.
#. Check that the 'Centered' string contains "123".
   [tests **MUIA_String_Integer[I]**]
#. Click in the 'Centered' string.
#. Press the return key.
#. Check that the 'Integer value' string contains "123".
   [tests **MUIA_String_Integer[SG]**]
#. Enter "12345678" in the 'Narrow' string.
#. Move the 'Display position' slider to 3.
#. Check that the first character shown in the 'Narrow' string is '4'.
   [tests **MUIA_String_DisplayPos[SG]**]
#. Click in the 'Secret' string.
#. Press the return key.
#. Check that the 'Plaintext' string contains "aeiu".
   [tests **MUIA_String_Acknowledge[G]**]

Untested attributes:
**MUIA_String_EditHook[ISG]**,
**MUIA_String_LonelyEditHook[ISG]**

List/Listview
=============

#. Click on the drop-down button of the PopString object.
#. Double-click the third entry in the list.
#. Check that the string gadget contains the text "Entry3".
   [tests **MUIM_List_GetEntry**]

#. Go to the List tab.

#. Check that the second and fifth lists are scrolled to the bottom.
   [tests **MUIA_List_AutoVisible[IS]**]
#. Check that there are 24 entries in each list, starting with 'Strawberry'
   and ending with 'Pumpkin'.
   [tests **MUIA_Listview_List[I]**, **MUIA_List_SourceArray[I]**]
#. Check that each list's scrollbar position and initial active entry matches
   the description in the list's help bubble.
   [tests **MUIA_Listview_ScrollerPos[I]**, **MUIA_List_Active[I]**]
#. Check that the value in the 'Visible entries' box is the number of entries
   shown in the first list (excluding the heading).
   [tests **MUIA_List_Visible[G]**]

#. Adjust the window's height so that the number of visible entries in each 
   list changes.
#. Check that the value in the 'Visible entries' box changes accordingly.
   [tests **MUIA_List_Visible[N]**]

#. Check that the last list has more vertical space between entries than the
   other lists.
   [tests **MUIA_List_MinLineHeight[I]**]

#. Double-click on any entry in the first list.
#. Check that the list is disabled.
   [tests **MUIA_Listview_DoubleClick[N]**]
#. Click on the 'Enable' button.

#. Select the second list (using the radio button).
#. Check that the value in the 'First visible index' box is correct.
   [tests **MUIA_List_First[G]**, **MUIA_Listview_List[G]**]
#. Check that the 'Auto visible' checkbox is selected.
   [tests **MUIA_List_AutoVisible[G]**]

#. Select 'Bottom' in the 'Insert mode' cycle gadget.
#. Click the 'Insert single' button.
#. Check that the value in the 'Last insertion index' box is one less than
   the number of entries in the list.
   [tests **MUIA_List_InsertPosition[N]**]
#. Check that the value in the 'Entries' box has been incremented by one.
   [tests **MUIA_List_Entries[G]**]

#. Select the first list.
#. Select the second list.
#. Check that the values in the 'Entries' and 'Last insertion index' boxes
   have not changed from when this list was previously active.
   [tests **MUIA_List_Entries[G]**, **MUIA_List_InsertPosition[G]**]

#. Select 'Down' in the 'Jump mode' cycle gadget.
#. Click the 'Jump' button.
#. Check that the new 'Tomato' entry is visible.
   [tests **MUIM_List_InsertSingle**, **MUIM_List_Jump**]
#. Select 'Up' in the 'Jump mode' cycle gadget.
#. Click the 'Jump' button.
#. Check that the new 'Tomato' entry is invisible.
   [tests **MUIM_List_Jump**]

#. Enter Vegetables in the 'Title' box and press return.
#. Check that the new title is shown at the top of the list.
   [tests **MUIA_List_Title[S]**]

#. Select 'Top' in the 'Jump mode' cycle gadget.
#. Click the 'Jump' button.
#. Check that the first entry is visible.
   [tests **MUIM_List_Jump**]
#. Select 'Bottom' in the 'Jump mode' cycle gadget.
#. Click the 'Jump' button.
#. Check that the last entry is visible.
   [tests **MUIM_List_Jump**]

#. Click the 'Deactivate' button.
#. Check that the second-last entry is not highlighted as active, and the
   value in the 'Active index' box is 'N/A'.
   [tests **MUIA_List_Active[SGN]**]

#. Select 'Active' in the 'Jump mode' cycle gadget.
#. Click the 'Jump' button.
#. Check that the first entry is visible.
   [tests **MUIM_List_Jump**]
#. Click on 'Blueberry' in the active list.
#. Scroll the active list to the top.
#. Click the 'Jump' button.
#. Check that 'Blueberry' is the last visible entry.
   [tests **MUIM_List_Jump**]
#. Scroll the active list to the bottom.
#. Click the 'Jump' button.
#. Check that 'Blueberry' is the first visible entry.
   [tests **MUIM_List_Jump**]
#. Select 'Index' in the 'Jump mode' cycle gadget.
#. Enter '100' in the 'Affected index 1' box.
#. Click the 'Jump' button.
#. Check that the last entry is visible.
   [tests **MUIM_List_Jump**]

#. Click the 'Activate' button.
#. Check that the last entry is highlighted as active.
   [tests **MUIA_List_Active[S]**]
#. Check that the value in the 'Active index' box is one less than
   the number of entries in the list.
   [tests **MUIA_List_Active[GN]**]
#. Select 'Top' in the 'Activate mode' cycle gadget.
#. Click the 'Activate' button.
#. Check that the first entry is visible and highlighted as active.
   [tests **MUIA_List_Active[S]**]
#. Check that the value in the 'Active index' box is '0'.
   [tests **MUIA_List_Active[GN]**]

#. Enter '0' in the 'Affected index 1' box.
#. Click the 'Select' button.
#. Check that the first entry is highlighted as selected.
   [tests **MUIM_List_Select**]
#. Click the 'Toggle' button.
#. Check that the first entry is not highlighted as selected.
   [tests **MUIM_List_Select**]
#. Select 'Down' in the 'Activate mode' cycle gadget.
#. Click the 'Activate' button.
#. Check that the second entry is visible and highlighted as active.
   [tests **MUIA_List_Active[S]**]
#. Check that the value in the 'Active index' box is '1'.
   [tests **MUIA_List_Active[GN]**]
#. Select 'Active' in the 'Select/redraw mode' cycle gadget.
#. Click the 'Select' button.
#. Check that the second entry is highlighted as selected.
   [tests **MUIM_List_Select**]
#. Click the 'Deselect' button.
#. Check that the second entry is not highlighted as selected.
   [tests **MUIM_List_Select**]
#. Click the 'Toggle' button.
#. Check that the second entry is highlighted as selected.
   [tests **MUIM_List_Select**]
#. Select 'Bottom' in the 'Activate mode' cycle gadget.
#. Click the 'Activate' button.
#. Check that the last entry is visible and highlighted as active.
   [tests **MUIA_List_Active[S]**]
#. Check that the value in the 'Active index' box is one less than
   the number of entries in the list.
   [tests **MUIA_List_Active[GN]**]
#. Select 'All' in the 'Select/redraw mode' cycle gadget.
#. Click the 'Toggle' button.
#. Check that all but second entry are highlighted as selected.
   [tests **MUIM_List_Select**]
#. Select 'Up' in the 'Activate mode' cycle gadget.
#. Click the 'Activate' button.
#. Check that the second-last entry is visible and highlighted as active.
   [tests **MUIA_List_Active[S]**]
#. Check that the value in the 'Active index' box is two less than
   the number of entries in the list.
   [tests **MUIA_List_Active[GN]**]
#. Select 'Page Up' in the 'Activate mode' cycle gadget.
#. Click the 'Activate' button.
#. Check that the first visible entry is unchanged except for being
   highlighted as active.
   [tests **MUIA_List_Active[S]**]

#. Click the 'Exchange' button.
#. Check that no entries have been exchanged.
   [tests **MUIM_List_Exchange**]
#. Enter '2' in the 'Affected index 1' box.
#. Click the 'Exchange' button.
#. Check that the first and third entries have been exchanged.
   [tests **MUIM_List_Exchange**]
#. Select 'Top' in the 'Move/Exchange mode 1' cycle gadget.
#. Click the 'Exchange' button.
#. Check that no entries have been exchanged.
   [tests **MUIM_List_Exchange**]
#. Select 'Bottom' in the 'Move/Exchange mode 1' cycle gadget.
#. Select 'Previous' in the 'Move/Exchange mode 2' cycle gadget.
#. Click the 'Exchange' button.
#. Check that the last two entries have been exchanged.
   [tests **MUIM_List_Exchange**]
#. Select 'Next' in the 'Move/Exchange mode 2' cycle gadget.
#. Click the 'Exchange' button.
#. Check that no entries have been exchanged.
   [tests **MUIM_List_Exchange**]
#. Select 'Top' in the 'Move/Exchange mode 1' cycle gadget.
#. Click the 'Exchange' button.
#. Check that the first two entries have been exchanged.
   [tests **MUIM_List_Exchange**]
#. Select 'Previous' in the 'Move/Exchange mode 2' cycle gadget.
#. Click the 'Exchange' button.
#. Check that no entries have been exchanged.
   [tests **MUIM_List_Exchange**]
#. Click on the fifth entry.
#. Check that the value in the 'Active index' box is '4'.
   [tests **MUIA_List_Active[GN]**]
#. Select 'Active' in the 'Move/Exchange mode 1' cycle gadget.
#. Click the 'Exchange' button.
#. Check that the fourth and fifth entries have been exchanged, but the
   active index is unchanged.
   [tests **MUIM_List_Exchange**]

#. Click the 'Move' button.
#. Check that the fourth and fifth entries have been exchanged, and the
   active index is unchanged.
   [tests **MUIM_List_Move**]
#. Select 'Index' in both 'Move/Exchange mode' cycle gadgets.
#. Click the 'Move' button.
#. Check that the third entry has moved to the top of the list.
   [tests **MUIM_List_Move**]
#. Select 'Top' in the 'Move/Exchange mode 1' cycle gadget.
#. Click the 'Move' button.
#. Check that no entries have been moved.
   [tests **MUIM_List_Move**]
#. Select 'Bottom' in the 'Move/Exchange mode 1' cycle gadget.
#. Select 'Previous' in the 'Move/Exchange mode 2' cycle gadget.
#. Click the 'Move' button.
#. Check that the last two entries have been exchanged.
   [tests **MUIM_List_Move**]
#. Select 'Next' in the 'Move/Exchange mode 2' cycle gadget.
#. Click the 'Move' button.
#. Check that no entries have been moved.
   [tests **MUIM_List_Move**]
#. Select 'Top' in the 'Move/Exchange mode 1' cycle gadget.
#. Click the 'Move' button.
#. Check that the first two entries have been exchanged.
   [tests **MUIM_List_Move**]
#. Select 'Previous' in the 'Move/Exchange mode 2' cycle gadget.
#. Click the 'Move' button.
#. Check that no entries have been moved.
   [tests **MUIM_List_Move**]

#. Click the 'Sort' button.
#. Check that the list is sorted alphabetically, and the active index
   is unchanged.
   [tests **MUIM_List_Sort**]

#. Click the 'Clear' button.
#. Check that the list is empty.
   [tests **MUIM_List_Clear**]
#. Check that the value in the 'Active index' box is 'N/A'.
   [tests **MUIA_List_Active[GN]**]
#. Check that the value in the 'Entries' box is '0'.
   [tests **MUIA_List_Entries[N]**]
#. Check that the value in the 'First visible index' box is '0'.
   [tests **MUIA_List_First[N]**]

#. Click the 'Insert Single' button.
#. Check that there is one entry in the list.
   [tests **MUIM_List_InsertSingle**]
#. Click on the only entry.
#. Select 'Active' in the 'Insert mode' cycle gadget.
#. Click the 'Insert Multiple' button.
#. Check that there are multiple entries in the list and 'Tomato' is still
   visible and highlighted as the active entry.
   [tests **MUIM_List_Insert**, **MUIA_List_Active[GN]**]
#. Check that the value in the 'Entries' box equals the number of entries in
   the list.
   [tests **MUIA_List_Entries[N]**]
#. Check that the value in the 'Last insertion index' box is '0'.
   [tests **MUIA_List_InsertPosition[N]**]
#. Check that the value in the 'Active index' box is one less than the number
   of entries in the list.
   [tests **MUIA_List_Active[GN]**]

#. Select the first list.
#. Check that the list's title is shown in the 'Title' box.
   [tests **MUIA_List_Title[G]**]
#. Clear the 'Title' box and press return.
#. Check that the list has no title.
   [tests **MUIA_List_Title[S]**]
#. Click the 'Sort' button.
#. Check that the list is sorted in order of string length, from shortest to
   longest.
   [tests **MUIM_List_Sort**, **MUIA_List_CompareHook[I]**]

#. Select the read-only list.
#. Click on the first entry.
#. Check that the entry is not highlighted.
   [tests **MUIA_Listview_Input[I]**]
#. Press the down cursor key.
#. Check that the first entry is not visible.
   [tests **MUIA_Listview_Input[I]**]
#. Click the 'Sort' button.
#. Check that the list is sorted in order of string length, from shortest to
   longest.
   [tests **MUIM_List_Sort**, **MUIA_List_CompareHook[S]**]

#. Select the fourth list.
#. Enter '99' in the 'Affected index 1' box.
#. Click the 'Remove' button.
#. Check that no entries have been removed.
   [tests **MUIM_List_Remove**]
#. Select the first, fifth and sixth entries.
#. Select 'Selected' in the 'Remove mode' cycle gadget.
#. Click the 'Remove' button.
#. Check that the selected entries have been removed and that the fourth
   entry is now active (but unselected).
   [tests **MUIM_List_Remove**]
#. Select 'Active' in the 'Remove mode' cycle gadget.
#. Click the 'Remove' button.
#. Check that the active entry has been removed and that the new fourth
   entry is now active.
   [tests **MUIM_List_Remove**]
#. Select the last entry.
#. Select 'Last' in the 'Remove mode' cycle gadget.
#. Click the 'Remove' button.
#. Check that the last entry has been removed and that the new last
   entry is now active.
   [tests **MUIM_List_Remove**]

#. Select the third list.
#. Select the first three entries.
#. Select 'Safe Loop' in the 'Remove mode' cycle gadget.
#. Click the 'Remove' button.
#. Check that the first three entries have been removed.
   [tests **MUIM_List_Remove**, **MUIM_List_NextSelected**]
#. Click the 'Remove' button.
#. Check that the active entry has been removed.
   [tests **MUIM_List_Remove**, **MUIM_List_NextSelected**]

#. Select the first list.
#. Select the 'Quiet' checkbox.
#. Move the scroll bar to the bottom.
#. Check that the the top of the list is still visible.
   [tests **MUIA_List_Quiet[S]**]
#. Deselect the 'Quiet' checkbox.
#. Check that the the bottom of the list is now visible.
   [tests **MUIA_List_Quiet[S]**]

#. Check that the 'Draggable' and 'Drag sortable' checkboxes are selected.
   [tests **MUIA_Listview_DragType[IG]**, **MUIA_List_DragSortable[IG]**]
#. Drag the first item over other items in the list and check that drop 
   marks are shown.
   [tests **MUIA_List_ShowDropMarks[I]**]
#. Drop the item between the fourth and fifth items.
#. Check that the old first item is now positioned between the old fourth and
   fifth items, and is still active.
   [tests **MUIA_List_DragSortable[I]**, **MUIA_Listview_DragType[I]**]
#. Check that the value in the 'Last drop index' box is '4'.
   [tests **MUIA_List_DropMark[G]**]

#. Select the second list.
#. Attempt to drag the first item and check that it fails.
   [tests **MUIA_Listview_DragType[I]**]
#. Select the 'Draggable' checkbox.
#. Attempt to drag the first item and check that it succeeds.
   [tests **MUIA_Listview_DragType[S]**]
#. Drag the first item and drop it between the fourth and fifth items.
#. Check that the item has not moved.
#. Select the 'Drag sortable' checkbox.
#. Deselect the 'Show drop marks' checkbox.
#. Drag the first item over other items in the list and check that drop 
   marks are not shown.
   [tests **MUIA_List_ShowDropMarks[S]**]
#. Drop the item between the third and fourth items.
#. Check that the old first item is now positioned between the old fourth and
   fifth items.
   [tests **MUIA_List_DragSortable[S]**]
#. Check that the value in the 'Last drop index' box is '3'.
   [tests **MUIA_List_DropMark[G]**]
#. Select the first list.
#. Check that the 'Show drop marks' checkbox is selected.
   [tests **MUIA_List_ShowDropMarks[G]**]

#. Click on the first entry in the first list.
#. Click on the third entry in the list.
#. Check that only the third entry is highlighted in the list.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Shift-click on the first entry in the first list.
#. Check that only the first entry is highlighted in the list.
   [tests **MUIA_Listview_MultiSelect[I]**]

#. Click on the first entry in the third list.
#. Click on the third entry in the list.
#. Check that only the third entry is highlighted in the list.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Shift-click on the first entry in the list.
#. Check that only the first and third entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Drag-click over the first, second and third entries.
#. Check that only the first, second and third entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Drag-click over the fourth, fifth and sixth entries.
#. Check that only the fourth, fifth and sixth entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Shift-drag-click over the first, second and third entries.
#. Check that only the first six entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**]

#. Select the fourth list.

#. Click the 'Remove' button.
#. Drag-click over the first six entries.
#. Check that the entries beginning with a consonent are highlighted and
   those beginning with a vowel are not.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Check that the value in the 'Selected entries' box is '4'.
   [tests **MUIA_Listview_SelectChange[N]**]
#. Click on the second entry and check that it isn't highlighted as selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Click on the third entry and check that it is no longer highlighted as
   selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Deselect the remaining selected entries in the list.
#. Click on the second entry and check that it is highlighted as selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Click on the first entry and check that it isn't highlighted as selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Click on the fourth entry and check that it isn't highlighted as selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Check that the second entry is still highlighted as selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Click on the second entry and check that it is no longer highlighted as
   selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Drag-click over the second to sixth entries (in that order).
#. Check that only the second entry is highlighted as selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Click on the second entry and check that it is no longer highlighted as
   selected.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Click the 'Select' button.
#. Check that the entries beginning with a consonent are highlighted and
   those beginning with a vowel are not.
   [tests **MUIA_List_MultiTestHook[I]**]
#. Click the 'Deselect' button.

#. Deselect the 'Filter multiselect' checkbox.
#. Click on the first entry in the list.
#. Click on the third entry in the list.
#. Check that only the first and third entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Shift-click on the fifth entry in the list.
#. Check that only the first, third and fifth entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Drag-click over the first and second entries.
#. Check that only the third and fifth entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**]
#. Drag-click over the first, second and third entries.
#. Check that only the first, second, third and fifth entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**, **MUIA_List_MultiTestHook[I]**]
#. Drag-click over the fourth, fifth and sixth entries.
#. Check that only the first six entries are highlighted.
   [tests **MUIA_Listview_MultiSelect[I]**, **MUIA_List_MultiTestHook[I]**]

#. Select the 'Filter multiselect' checkbox.
#. Check that no entries are highlighted as selected.
   [tests **MUIA_List_MultiTestHook[S]**]
#. Click on the fourth entry and check that it is highlighted as selected.
   [tests **MUIA_List_MultiTestHook[S]**]
#. Click on the second entry and check that selections haven't changed.
   [tests **MUIA_List_MultiTestHook[S]**]
#. Click on the third entry and check that selections haven't changed.
   [tests **MUIA_List_MultiTestHook[S]**]

#. Go to the 'Multicolumn' subtab.
#. Check that the two lists contain entries.
   [tests **MUIA_List_ConstructHook[IS]**, **MUIA_List_DisplayHook[IS]**]
#. Check that the left-hand list does not change width when the window is
   resized.
   [tests **MUIA_List_AdjustWidth[I]**]
#. Check that the right-hand list does not change height when the window is
   resized.
   [tests **MUIA_List_AdjustHeight[I]**]
#. Click in the second column of the left-hand list.
#. Check that the value in the 'Clicked column' box is '1'.
   [tests **MUIA_Listview_ClickColumn[N]**]
#. Check that the value in the 'Default clicked column' box is '1'.
   [tests **MUIA_Listview_DefClickColumn[IG]**]
#. Enter '2' in the 'Default clicked column' box, and press the return key.
#. Make the left-hand list active.
#. If necessary, click on one of the first two columns to ensure that the
   value in the 'Clicked column' box is not '2'.
#. Press the return key.
#. Check that the value in the 'Clicked column' box is '2'.
   [tests **MUIA_Listview_DefClickColumn[S]**, **MUIA_Listview_ClickColumn[N]**]
#. Check that column headings are shown.
   [tests **MUIA_List_Title[I]**]
#. Check that the 'Show column headings' checkbox is selected.
   [tests **MUIA_List_Title[G]**]
#. Deselect the 'Show column headings' checkbox.
#. Check that column headings are not shown.
   [tests **MUIA_List_Title[S]**]
#. Check that three columns are shown in the right-hand list and there are
   dividers between them.
   [tests **MUIA_List_Format[I]**]
#. Check that the 'Format' box contains the string "BAR,BAR,".
   [tests **MUIA_List_Format[G]**]
#. Remove the first three letters ("BAR") in the 'Format' box and press
   return.
#. Check that the divider between the first two columns in the right-hand
   list has disappeared.
   [tests **MUIA_List_Format[S]**]
#. Check that the 'Format' box is still active.
   [tests **MUIA_List_Format[N]**]

#. Select the 'Show image' checkbox.
#. Check that a blue box is shown in the first column of both lists.
   [tests **MUIM_List_CreateImage**, **MUIM_List_Redraw**]

#. Double-click on any entry in the right-hand list.
#. Check that the value reported is 1.
   [tests **MUIA_Listview_DoubleClick[G]**]
#. Press the 'OK' button.
#. Check that the highlighted entry in the list doesn't change as the mouse
   pointer is moved vertically through the list.

Automatically tested attributes:
**MUIA_Listview_ClickColumn[G]**,
**MUIA_List_DestructHook[IS]**

Untested attributes:
**MUIA_Listview_SelectChange[G]**

Untestable attributes:
**MUIA_List_Pool[I]**,
**MUIA_List_PoolPuddleSize[I]**,
**MUIA_List_PoolThreshSize[I]**

Untestable methods:
**MUIM_List_DeleteImage**

Untested methods:
**MUIM_List_TestPos**

