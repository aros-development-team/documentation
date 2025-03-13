# Copyright (C) 2002-2006, The AROS Development Team. All rights reserved.
# $Id$

def format( credits ):
    result  = '=======\n' \
            + 'Credits\n' \
            + '=======\n\n' \
            + ".. This document is automatically generated from db/credits."
              
    for area in credits:
        result += '\n\n' + area[0] + '\n' + '=' * (len( area[0] ) + 3) + '\n\n' 
        
        for name in area[1]:
            result += '+ ' + name + '\n'

    return result
