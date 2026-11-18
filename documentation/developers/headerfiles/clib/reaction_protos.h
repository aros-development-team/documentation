#ifndef CLIB_REACTION_PROTOS_H
#define CLIB_REACTION_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/reaction/reaction.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


#include <intuition/intuition.h>
#include <intuition/classes.h>
#include <utility/tagitem.h>

__BEGIN_DECLS

struct Window *RA_OpenWindow(Object *windowobj);
void RA_CloseWindow(Object *windowobj);
ULONG RA_HandleInput(Object *windowobj, WORD *code);
BOOL RA_DisposeWindowObject(Object *windowobj);

__END_DECLS


__BEGIN_DECLS


#if !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__)
AROS_LP1(struct Window *, RA_OpenWindow,
         AROS_LPA(Object *, windowobj, A0),
         LIBBASETYPEPTR, ReactionBase, 5, Reaction
);

#endif /* !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__) */

#if !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__)
AROS_LP1(void, RA_CloseWindow,
         AROS_LPA(Object *, windowobj, A0),
         LIBBASETYPEPTR, ReactionBase, 6, Reaction
);

#endif /* !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__) */

#if !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__)
AROS_LP2(ULONG, RA_HandleInput,
         AROS_LPA(Object *, windowobj, A0),
         AROS_LPA(WORD *, code, A1),
         LIBBASETYPEPTR, ReactionBase, 7, Reaction
);

#endif /* !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__) */

#if !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__)
AROS_LP1(BOOL, RA_DisposeWindowObject,
         AROS_LPA(Object *, windowobj, A0),
         LIBBASETYPEPTR, ReactionBase, 8, Reaction
);

#endif /* !defined(__REACTION_LIBAPI__) || (44 <= __REACTION_LIBAPI__) */

__END_DECLS

#endif /* CLIB_REACTION_PROTOS_H */
