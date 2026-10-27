# Copyright (C) 2002-2006, The AROS Development Team. All rights reserved.
# $Id$

"""Render a parsed contributor list as a ReST credits page."""

def format( credits ):
    """Format contributor areas and their names as ReST.

    Return a generated credits page with one titled section per work area.
    """
    result  = '=======\n' \
            + 'Credits\n' \
            + '=======\n\n' \
            + ".. This document is automatically generated from db/credits."
              
    for area in credits:
        result += '\n\n' + area[0] + '\n' + '=' * (len( area[0] ) + 3) + '\n\n' 
        
        for name in area[1]:
            result += '+ ' + name + '\n'

    return result
