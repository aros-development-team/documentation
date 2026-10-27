# Copyright (C) 2002, The AROS Development Team. All rights reserved.
# $Id$

"""Parse the credits stream into work areas and contributor names."""

#FIXME: Write better documentation.

import os, sys, string

def parse( file ):
    """Parse a credits stream into contributor lists grouped by area.

    Return ``[[area, [contributor, ...]], ...]`` in source order. Area
    headings are lines containing a colon; other nonempty lines are names.
    """
    credits = []
    names   = []

    for line in file:
        line = line.strip()

        if ':' in line:
            if len( names ) > 0:
                credits.append( [ area, names ] )

            area = line[:-1]

            names = []

        elif line != '':
            names.append( line )

    if len( names ) > 0:
        credits.append( [ area, names ] )

    return credits
