# Copyright (C) 2002-2007, The AROS Development Team. All rights reserved.
# $Id$

"""Provide filesystem and ReST helpers for the documentation builders."""

import os, shutil
from build.settings import *

def newer( src, dst ):
    """Return whether any source is newer than a destination.

    Accept a path or list of source paths. Return ``True`` if ``dst`` is
    absent or any source modification time is later than the destination.
    """

    if not os.path.exists( dst ): return True

    if not isinstance( src, list ): src = [ src ]

    dstmtime = os.path.getmtime( dst )
    for path in src:
        srcmtime = os.path.getmtime( path )
        if srcmtime > dstmtime:
            return True

    return False


def ignore( path ):
    """Report whether a source path should be excluded from traversal.

    Exclude known special paths and hidden basenames.
    """
    path = os.path.normpath( path )
    filename = os.path.split( path )[1]

    if filename in IGNORE_ALL or filename[0] == '.' or path in IGNORE_ABS:
        return True
    else:
        return False


def makedir( path ):
    """Create a directory and its parents when it does not exist."""
    if not os.path.exists( path ):
        os.makedirs( path )


def copy( src, dst ):
    """Copy newer source files to the destination.

    Accept one source path or a list. If ``dst`` is a directory, retain each
    source basename; otherwise use ``dst`` as the output filename.
    """
    if not isinstance( src, list ): src = [ src ]
     
    for path in src:
        if os.path.isdir( dst ):
            rdst = os.path.join( dst, os.path.basename( path ) )
        else:
            rdst = dst

        if newer( path, rdst ):
            shutil.copy( path, rdst )


def pathscopy( entries, srcpath, dstpath):
    """Copy one or more relative entries from a source directory.

    Entries may include subpaths; delegate freshness checks and copying
    to ``copy``.
    """
    if not isinstance( entries, list ): entries = [ entries ]

    pathentries= list(map( (lambda e: os.path.join( srcpath, e)), entries))
    copy( pathentries, dstpath)


def remove( path ):
    """Remove an existing file; do nothing when the path is absent."""
    if os.path.exists( path ):
        os.remove( path )


# similar shutil.copytree, but ignores .svn directory
def copytree(src, dst, symlinks=0):
    """Recursively copy a directory tree, omitting ``.svn`` directories.

    Create ``dst`` and optionally preserve symlinks. Report per-file I/O
    errors to stdout instead of propagating them.
    """
    names = os.listdir(src)
    os.mkdir(dst)
    for name in names:
        srcname = os.path.join(src, name)
        dstname = os.path.join(dst, name)
        try:
            if symlinks and os.path.islink(srcname):
                linkto = os.readlink(srcname)
                os.symlink(linkto, dstname)
            elif os.path.isdir(srcname):
                if os.path.basename(srcname) != ".svn":
                    copytree(srcname, dstname, symlinks)
            else:
                if newer( srcname, dstname ):
                    shutil.copy( srcname, dstname )
        except (IOError, os.error) as why:
            print("Can't copy %s to %s: %s" % (repr(srcname), repr(dstname), str(why)))


def reportSkipping( message ):
    """Print a colored status line for a skipped output."""
    print('\033[1m\033[32m*\033[30m', message, '\033[0m')


def reportBuilding( message ):
    """Print a colored status line for an output being built."""
    print('\033[1m\033[33m*\033[30m', message, '\033[0m')


def titleReST( title):
    """Return a ReST title with equals-sign rules and a trailing blank line."""
    return ('=' *len( title)) +'\n' +title +'\n' +('=' *len( title)) +'\n\n'


def drctReST( directive, text):
    """Return a ReST directive consisting of its name and argument."""
    return '.. ' +directive +':: ' +text +'\n'


def htmlReST( text):
    """Return a raw-HTML ReST directive for the supplied HTML fragment."""
    return drctReST( 'raw', 'html\n\n' +text)

