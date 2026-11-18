#ifndef CLIB_MATHFFP_PROTOS_H
#define CLIB_MATHFFP_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/mathffp/mathffp.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP1(LONG, SPFix,
         AROS_LPA(LONG, fnum, D0),
         LIBBASETYPEPTR, MathBase, 5, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP1(LONG, SPFlt,
         AROS_LPA(LONG, inum, D0),
         LIBBASETYPEPTR, MathBase, 6, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP2(LONG, SPCmp,
         AROS_LPA(LONG, fnum1, D1),
         AROS_LPA(LONG, fnum2, D0),
         LIBBASETYPEPTR, MathBase, 7, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP1(LONG, SPTst,
         AROS_LPA(LONG, fnum, D1),
         LIBBASETYPEPTR, MathBase, 8, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP1(LONG, SPAbs,
         AROS_LPA(LONG, fnum1, D0),
         LIBBASETYPEPTR, MathBase, 9, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP1(LONG, SPNeg,
         AROS_LPA(LONG, fnum1, D0),
         LIBBASETYPEPTR, MathBase, 10, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP2(LONG, SPAdd,
         AROS_LPA(LONG, fnum1, D1),
         AROS_LPA(LONG, fnum2, D0),
         LIBBASETYPEPTR, MathBase, 11, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP2(LONG, SPSub,
         AROS_LPA(LONG, fnum1, D1),
         AROS_LPA(LONG, fnum2, D0),
         LIBBASETYPEPTR, MathBase, 12, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP2(LONG, SPMul,
         AROS_LPA(LONG, fnum1, D1),
         AROS_LPA(LONG, fnum2, D0),
         LIBBASETYPEPTR, MathBase, 13, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__)
AROS_LP2(LONG, SPDiv,
         AROS_LPA(LONG, fnum1, D1),
         AROS_LPA(LONG, fnum2, D0),
         LIBBASETYPEPTR, MathBase, 14, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (0 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (33 <= __MATHFFP_LIBAPI__)
AROS_LP1(LONG, SPFloor,
         AROS_LPA(LONG, y, D0),
         LIBBASETYPEPTR, MathBase, 15, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (33 <= __MATHFFP_LIBAPI__) */

#if !defined(__MATHFFP_LIBAPI__) || (33 <= __MATHFFP_LIBAPI__)
AROS_LP1(LONG, SPCeil,
         AROS_LPA(LONG, y, D0),
         LIBBASETYPEPTR, MathBase, 16, Mathffp
);

#endif /* !defined(__MATHFFP_LIBAPI__) || (33 <= __MATHFFP_LIBAPI__) */

__END_DECLS

#endif /* CLIB_MATHFFP_PROTOS_H */
