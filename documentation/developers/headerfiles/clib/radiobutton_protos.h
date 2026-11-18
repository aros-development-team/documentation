#ifndef CLIB_RADIOBUTTON_PROTOS_H
#define CLIB_RADIOBUTTON_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/radiobutton/radiobutton.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <intuition/classes.h>
#include <intuition/gadgetclass.h>
#include <gadgets/radiobutton.h>

/* varargs forms: stubs in libreaction.a */
__BEGIN_DECLS
struct Node *AllocRadioButtonNode(UWORD columns, Tag tag1, ...);
void SetRadioButtonNodeAttrs(struct Node *node, Tag tag1, ...);
void GetRadioButtonNodeAttrs(struct Node *node, Tag tag1, ...);
__END_DECLS

__BEGIN_DECLS


#if !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__)
AROS_LP0(Class *, RADIOBUTTON_GetClass,
         LIBBASETYPEPTR, RadioButtonBase, 5, RadioButton
);

#endif /* !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__) */

#if !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__)
AROS_LP2(struct Node *, AllocRadioButtonNodeA,
         AROS_LPA(UWORD, columns, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, RadioButtonBase, 6, RadioButton
);

#endif /* !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__) */

#if !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__)
AROS_LP1(void, FreeRadioButtonNode,
         AROS_LPA(struct Node *, node, A0),
         LIBBASETYPEPTR, RadioButtonBase, 7, RadioButton
);

#endif /* !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__) */

#if !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__)
AROS_LP2(void, SetRadioButtonNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, RadioButtonBase, 8, RadioButton
);

#endif /* !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__) */

#if !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__)
AROS_LP2(void, GetRadioButtonNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, RadioButtonBase, 9, RadioButton
);

#endif /* !defined(__RADIOBUTTON_LIBAPI__) || (44 <= __RADIOBUTTON_LIBAPI__) */

__END_DECLS

#endif /* CLIB_RADIOBUTTON_PROTOS_H */
