# -*- coding: iso-8859-1 -*-
# Copyright � 2008-2025, The AROS Development Team. All rights reserved.


"""Autodoc to ReST converter.

Classes and functions for parsing autodoc headers and writing them
in ReST format.

For that the script can find the sources the documentation must be checked out like
this to the AROS directory:

AROS
    ...
    compiler
    workbench
    rom
    ...
    documentation
        scripts
...

If you have them in another directory the variable "TOPDIR" can be adjusted.
If you use a relative path take care that the script is called by the main build script
from one directory level above.
"""

# TODO:
# - handle classes which are embedded in libraries
# - fix xref of HIDDs
# - xref links to function macros
# - differ between libraries, devices and linklibs

import glob
import os
import re
import tempfile
import shutil
import filecmp
import codecs

# Relative path from the main build script to the root of the AROS source
TOPDIR = ".."

# Regex for autodoc block (without surrounding comments)
AD_REGX = re.compile(r"""
^/\*{6,}
(
.*?
^[/*\s]{4,4}NAME
.*?
)
^\*{7,}/
""", re.VERBOSE | re.MULTILINE | re.DOTALL)

# Regex for a title
TITLES_REGX = re.compile(r"""
^[/\*\s]{4,4}
(NAME|FORMAT|SYNOPSIS|LOCATION|FUNCTION|INPUTS|TAGS|RESULT|EXAMPLE|NOTES|BUGS|SEE\ ALSO|INTERNALS|HISTORY|TEMPLATE)[/\*\s]*?$
""", re.VERBOSE)

# Regex for AROS library functions
LIBFUNC_REGX = re.compile(r'AROS_.*\(\s*(.*?)\s*\,\s*(.*?)\s*\,')

# Regex for C library functions
CFUNC_REGX = re.compile(r"^\s*(.*?)(\w*)\s*\([\w,()]*$", re.MULTILINE)

# Regex for splitting a block by comma and \n
SPLIT_REGX = re.compile(r"[\n,]+", re.MULTILINE)

# Regex for parsing a line of "see also"
XREF_REGX = re.compile(r"""
^
\s*<*
(
(?P<libname>\w+?)\.library/(?P<funcname>\w+?)\(\)
|
(?P<localfuncname>\w+?)\(\)
|
(?P<header>[\w/-]+\.h)
|
(?P<command>[\w-]+)
|
(?P<path>.+?)
)
>*\s*
$
""", re.VERBOSE | re.MULTILINE)

XREF_KIND_FUNCTION = 1
XREF_KIND_LOCALFUNCTION = 2
XREF_KIND_HEADER = 3
XREF_KIND_STRING = 4
XREF_KIND_ANY = 5


def move_if_changed(tmpfilename, targetfilename):
    """Move the tempfile to the targetfile only if it differs
    """
    if os.path.exists(targetfilename):
        if not filecmp.cmp(tmpfilename, targetfilename, shallow=False):
            print(tmpfilename, "moved to", targetfilename)
            shutil.move(tmpfilename, targetfilename)
            return
    else:
        print(tmpfilename, "moved to", targetfilename)
        shutil.move(tmpfilename, targetfilename)
        return

    print(tmpfilename, "removed")
    os.remove(tmpfilename)


class FunctionIndex(object):
    def __init__(self):
        self.funcdict = {}

    def add_list(self, docpath, libdocs):
        for ldoc in libdocs.doclist:
            if ldoc.docname.endswith("()"): # leave out e.g. background etc.
                self.funcdict[ldoc.docname] = docpath

    def write(self, fdesc):
        tablesep = (("=" * 74) + " ") * 4
        fdesc.write("==============\n")
        fdesc.write("Function Index\n")
        fdesc.write("==============\n\n")
        fdesc.write(tablesep + "\n")
        entrynr = 1
        for func in sorted(self.funcdict):
            text = ("`%s <%s#%s>`_" % (func, self.funcdict[func], func[:-2].lower())).ljust(75)
            fdesc.write(text)
            if (entrynr) % 4 == 0:
                fdesc.write("\n")
            entrynr += 1
        fdesc.write("\n" + tablesep + "\n")


class AutoDoc(object):
    """ Autodoc base class.

    Subclasses must set the element's
    docname (function or command name e.g. "Draw") and docfilename (lower case docname)
    """

    def __init__(self, content):
        """Constructor. Reads and parses autodoc string.

        Arguments:

        content - String of autodoc text chunk without sourrounding comment lines
        """

        self.titles = {} # dict for each title
        self.docname = "" # function or command name
        self.docfilename = "" # filename without ".en"

        current_title = None
        for line in content.splitlines():
            match = TITLES_REGX.match(line)
            if match:
                current_title = match.group(1)
                self.titles[current_title] = ""
            elif current_title:
                self.titles[current_title] += (" " + line.expandtabs())[4:] + "\n"

        # check for empty chapters, because we don't want to print them
        for title, content in self.titles.items():
            if content.strip() == "":
                self.titles[title] = ""

        # parse "see also"
        if "SEE ALSO" in self.titles:
            self.titles["XREF"] = []
            for ref in SPLIT_REGX.split(self.titles["SEE ALSO"]):
                xref = XREF_REGX.match(ref)
                if xref:
                    libname = xref.group('libname')
                    funcname = xref.group('funcname')
                    localfuncname = xref.group('localfuncname')
                    path = xref.group('path')
                    command = xref.group('command')
                    header = xref.group('header')
                    # check for allowed combinations
                    if libname and funcname and not localfuncname and not path and not command and not header:
                        # libname + funcname
                        self.titles["XREF"].append((XREF_KIND_FUNCTION, libname, funcname))
                    elif not libname and not funcname and localfuncname and not path and not command and not header:
                        # localfuncname
                        self.titles["XREF"].append((XREF_KIND_LOCALFUNCTION, localfuncname, ""))
                    elif not libname and not funcname and not localfuncname and path and not command and not header:
                        # path
                        self.titles["XREF"].append((XREF_KIND_ANY, path, ""))
                    elif not libname and not funcname and not localfuncname and not path and command and not header:
                        # command
                        self.titles["XREF"].append((XREF_KIND_STRING, command, ""))
                    elif not libname and not funcname and not localfuncname and not path and not command and header:
                        # header
                        self.titles["XREF"].append((XREF_KIND_HEADER, header, ""))
                    else:
                        print("*" * 20)
                        print(self.titles["SEE ALSO"])
                        raise ValueError("XREF parsing error")

    def __cmp__(self, other):
        """Compare function for sorting by docfilename.
        """

        return cmp(self.docfilename, other.docfilename)

    def __lt__(self, other):
        """Compare function for sorting by docfilename."""
        return self.docfilename < other.docfilename

    def write(self, fdesc, titles):
        """Write autodoc elements to file.

        Arguments:

        filehandle - filehandle of a file to write the autodoc in
        titles - what titles (e.g. Synopsis, Note) should be printed
        """

        for title in titles:
            title_key = title.upper()
            if title_key != "SEE ALSO" and title_key in self.titles:
                lines = self.titles[title_key]
                if len(lines) > 0:
                    fdesc.write(title + "\n")
                    fdesc.write("~" * len(title) + "\n")
                    fdesc.write("::\n\n")
                    fdesc.write(lines)
                    fdesc.write("\n")

    def write_xref(self, fdesc, path_to_lib, path_to_header):
        """Write xrefs ('see also') to file.

        Arguments:

        filehandle - filehandle of a file to write the autodoc in
        path_to_shell - relative path from target document to directory with Shell command documents
        path_to_lib - relative path from target document to directory with library documents
        path_to_header - relative path from target document to directory with header files
        """

        if "XREF" in self.titles:
            if len(self.titles["XREF"]) > 0:
                fdesc.write("See also\n~~~~~~~~\n\n")
                for kind, name1, name2 in self.titles["XREF"]:
                    if kind == XREF_KIND_FUNCTION:
                        self.write_xref_function(fdesc, name1, name2, path_to_lib)
                    elif kind == XREF_KIND_LOCALFUNCTION:
                        self.write_xref_localfunction(fdesc, name1)
                    elif kind == XREF_KIND_ANY:
                        self.write_xref_any(fdesc, name1)
                    elif kind == XREF_KIND_STRING:
                        self.write_xref_string(fdesc, name1)
                    elif kind == XREF_KIND_HEADER:
                        self.write_xref_header(fdesc, name1, path_to_header)
                fdesc.write("\n\n")

    def write_xref_function(self, fdesc, libname, funcname, path_to_lib):
        """ Write XREF of a function
        """
        fdesc.write("`%s.library/%s() <%s/%s#%s>`_ " % (libname, funcname, path_to_lib, libname, funcname.lower()))

    def write_xref_localfunction(self, fdesc, funcname):
        """ Write XREF of a local
        """
        fdesc.write("`%s()`_ " % (funcname))

    def write_xref_header(self, fdesc, name, path):
        """ Write XREF of a header file
        """
        fdesc.write("`%s <%s/%s>`_ " % (name, path, name))

    def write_xref_string(self, fdesc, name):
        """ Write XREF of a string
        """
        fdesc.write("`%s`_ " % (name))

    def write_xref_any(self, fdesc, name):
        """ Write XREF of a a string without a link
        """
        fdesc.write("%s " % name)


class ShellAutoDoc(AutoDoc):
    """Autodoc class for Shell commands and applications.
    """

    def __init__(self, content):
        """Constructor. Reads and parses autodoc string.

        Arguments:

        content - String of autodoc text chunk without sourrounding comment lines
        """

        AutoDoc.__init__(self, content)
        self.prevdocfilename = ""
        self.nextdocfilename = ""

        # get docname
        self.docname = self.titles["NAME"].split()[0]
        if self.docname == "":
            raise ValueError("docname is empty")
        self.docfilename = self.docname.lower()

    def write(self, fdesc, titles):
        """Write autodoc elements to file.

        Arguments:

        filehandle -    filehandle of a file to write the autodoc in
        titles -        what titles (e.g. Synopsis, Note) should be printed.
                        Write them in the given capitalization.

        """

        underline = "=" * len(self.docname) + "\n"
        fdesc.write(underline)
        fdesc.write(self.docname + "\n")
        fdesc.write(underline)

        fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")

        fdesc.write("`Index <index>`_ ")
        if self.prevdocfilename:
            fdesc.write("`Prev <" + self.prevdocfilename + ">`_ ")
        if self.nextdocfilename:
            fdesc.write("`Next <" + self.nextdocfilename + ">`_ ")

        fdesc.write("\n\n---------------\n\n")

        AutoDoc.write(self, fdesc, titles)

    def write_xref_string(self, fdesc, name):
        fdesc.write("`%s <%s>`_ " % (name, name.lower()))


class LibAutoDoc(AutoDoc):
    """Autodoc class for library functions (shared and static).
    """

    def __init__(self, content):
        """Constructor. Reads and parses autodoc string.

        Arguments:

        content - String of autodoc text chunk without sourrounding comment lines
        """

        AutoDoc.__init__(self, content)
        self.rettype = ""
        self.parameters = []

        if "NAME" not in self.titles:
            print(content)
            raise ValueError("Field 'NAME' is missing")
        self.docname = self.titles["NAME"].strip()
        if self.docname == "":
            print(content)
            raise ValueError("Field 'NAME' is empty")
        self.docfilename = self.docname.lower()

        # search for function name
        match = LIBFUNC_REGX.search(self.docname)
        if match:
            # AROS lib function
            funcname = match.group(2)
            self.docname = funcname + "()"
            self.rettype = match.group(1)
            self.docfilename = self.docname.lower()

            #search for parameter/type
            if "SYNOPSIS" in self.titles:
                for par in LIBFUNC_REGX.findall(self.titles["SYNOPSIS"]):
                    self.parameters.append(par)

            # create new Synopsis
            syn = " " + self.rettype + " " + funcname
            if len(self.parameters) == 0:
                syn += "();\n"
            else:
                syn += "(\n"
                for line in self.parameters:
                    syn += "          " + line[0] + " " + line[1]
                    if line is self.parameters[-1]:
                        syn += " );\n"
                    else:
                        syn += ",\n"

            # check for variadic prototype
            varproto = ""
            if len(self.parameters) > 0:
                if funcname[-1] == "A":
                    # function name ends with "A"
                    varproto = funcname[:-1]
                elif funcname[-7:] == "TagList":
                    # function name ends with "TagList"
                    varproto = funcname[:-7] + "Tags"
                elif funcname[-4:] == "Args" and (funcname not in ("ReadArgs", "FreeArgs")):
                    # function name ends with "Args"
                    varproto = funcname[:-4]
                else:
                    # last argument's type is "const struct TagItem *"
                    lastarg = self.parameters[-1] # last parameter
                    lastarg = lastarg[0] # type
                    if lastarg[-16:] == "struct TagItem *":
                        varproto = funcname + "Tags"

            # append variadic prototype
            if len(varproto) > 0:
                syn += " \n"
                syn += " " + self.rettype + " " + varproto + "(\n"
                if len(self.parameters) > 1:
                    for line in self.parameters[:-1]:
                        syn += "          " + line[0] + " " + line[1] + ",\n"
                syn += "          TAG tag, ... );\n"

            self.titles["SYNOPSIS"] = syn

        else:
            # C function
            match = CFUNC_REGX.search(self.docname)
            if match:
                funcname = match.group(2)
                self.docname = funcname + "()"
                self.rettype = match.group(1)
                self.docfilename = self.docname.lower()
                # We don't parse the Synopsis but insert the function name at the beginning
                syn = self.titles["SYNOPSIS"]
                syn = "  " + self.rettype + funcname + "(\n" + syn
                self.titles["SYNOPSIS"] = syn
            #else => use normal text autodoc format

    def write(self, fdesc, titles):
        """Write autodoc to file.

        Arguments:

        filehandle -    filehandle of a file to write the autodoc in
        titles -        what titles (e.g. Synopsis, Note) should be printed.
                        Write them in the given capitalization.
        """

        fdesc.write(self.docname + "\n")
        fdesc.write("=" * len(self.docname) + "\n\n")
        AutoDoc.write(self, fdesc, titles)
        fdesc.write("\n")


class HiddAutoDoc(AutoDoc):
    """Autodoc class for HIDD classes.
    """

    def __init__(self, content):
        """Constructor. Reads and parses autodoc string.

        Arguments:

        content - String of autodoc text chunk without sourrounding comment lines
        """

        AutoDoc.__init__(self, content)
        self.prevdocfilename = ""
        self.nextdocfilename = ""

        # get docname
        self.docname = self.titles["NAME"].split()[0]
        if self.docname == "":
            raise ValueError("docname is empty")
        self.docfilename = self.docname.lower()

    def write(self, fdesc, titles):
        """Write autodoc elements to file.

        Arguments:

        filehandle -    filehandle of a file to write the autodoc in
        titles -        what titles (e.g. Synopsis, Note) should be printed.
                        Write them in the given capitalization.

        """

        fdesc.write(self.docname + "\n")
        fdesc.write("=" * len(self.docname) + "\n\n")
        AutoDoc.write(self, fdesc, titles)
        fdesc.write("\n")


class ShellDocList(object):
    """List of Shell autodocs

    Handles the Shell autodocs of a single directory.
    """

    def __init__(self):
        """Constructor.
        """

        self.doclist = []

    def read(self, srcdir):
        """Scan directory for autodocs

        Reads all *.c files of the given directory and scans them for autodocs.

        Arguments:

        srcdir - directory from which the autodocs should be read
        """

        filenames = glob.glob(os.path.join(srcdir, "*.c"))
        for filename in filenames:
            print("Reading from file", filename)
            with codecs.open(filename, 'r', encoding='latin-1') as filehandle:
                content = filehandle.read()  # read whole file
                for ad_entry in AD_REGX.findall(content):
                    adoc = ShellAutoDoc(ad_entry)
                    if adoc.docname != "":
                        self.doclist.append(adoc)
            self.doclist.sort()

        # set prev/next fields
        for docnr in range(len(self.doclist)):
            if docnr > 0:
                self.doclist[docnr].prevdocfilename = self.doclist[docnr - 1].docfilename
            if docnr < len(self.doclist) - 1:
                self.doclist[docnr].nextdocfilename = self.doclist[docnr + 1].docfilename

    def write_index(self, fdesc, targetdir):
        """Write index file.

        Arguments:

        filehandle - handle of a file where the index (TOC) should be written
        targetdir - directory which should be listed
        """

        print("Creating index file")
        fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")
        fdesc.write("=======================\n")
        fdesc.write("Using AROS by the Shell\n")
        fdesc.write("=======================\n\n")
        fdesc.write("+ `Introduction <introduction>`_\n")
        fdesc.write("+ `Scripts <scripts>`_\n\n")

        fdesc.write("Commands\n")
        fdesc.write("--------\n")

        write_index(fdesc, targetdir)


    def write(self, targetdir, titles):
        """Write autodocs to directory.

        Each autodoc will be written in a single file.

        Arguments:

        targedir -      name of a directory to where autodocs and index should be written
        titles -        what titles (e.g. Synopsis, Note) should be printed.
                        Write them in the given capitalization.
        """

        for doc in self.doclist:
            filename = os.path.join(targetdir, doc.docfilename + ".en")
            print("Writing to file", filename)
            with codecs.open(filename, 'w', encoding='utf-8') as fdesc:
                doc.write(fdesc, titles)
                doc.write_xref(fdesc, "../../developers/autodocs", "../../developers/headerfiles")

        # create index page
        filename = os.path.join(targetdir, "index.en")
        print("Writing to file", filename)
        with codecs.open(filename, 'w', encoding='utf-8') as fdesc:
            self.write_index(fdesc, targetdir)


class LibDocList(object):
    """List of autodocs of static and shared libraries.

    Handles the autodocs of a single directory.
    """

    def __init__(self):
        """Constructor.
        """

        self.doclist = []
        self.docfilename = ""

    def read(self, srcdir, name=None):
        """Scan directory for autodocs.

        Reads all *.c files of the given directory and scans them for autodocs.

        Arguments:

        srcdir - directory from which the autodocs should be read
        name -  Name of the document. If no name is given the rightmost part of
                srcdir will be used. This name will be later used for storing the file.
        """

        if name:
            self.docfilename = name
        else:
            self.docfilename = os.path.basename(srcdir) # rightmost part of the path

        cfiles = os.listdir(srcdir)
        for infile in cfiles:
            if infile[-2:] == ".c":
                filename = os.path.join(srcdir, infile)
                print("Reading from file", filename)
                with codecs.open(filename, 'r', encoding='latin-1') as filehandle:
                    content = filehandle.read()  # read whole file
                    for ad_entry in AD_REGX.findall(content):
                        adoc = LibAutoDoc(ad_entry)
                        if adoc.docname != "":
                            self.doclist.append(adoc)
        self.doclist.sort()

    def write(self, targetdir, titles):
        """Write autodocs to directory.

        All autodocs will be written in a single file.

        Arguments:

        targedir -      name of a directory to where autodocs and index should be written
        titles -        what titles (e.g. Synopsis, Note) should be printed.
                        Write them in the given capitalization.
        """

        if len(self.doclist) > 0:
            filename = os.path.join(targetdir, self.docfilename + ".en")
            print("Writing to file", filename)
            with codecs.open(filename, 'w', encoding='utf-8') as fdesc:
                #create header
                underline = "=" * len(self.docfilename)
                fdesc.write(underline + "\n")
                fdesc.write(self.docfilename + "\n")
                fdesc.write(underline + "\n\n")

                fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")
                fdesc.write("`Index <index>`_\n\n")
                fdesc.write("----------\n\n")

                # create toc
                tablesep = (("=" * 39) + " ") * 4
                fdesc.write(tablesep + "\n")
                for docnr in range(len(self.doclist)):
                    tocname = "`" + self.doclist[docnr].docname + "`_"
                    tocname = tocname.ljust(40)
                    fdesc.write(tocname)
                    if (docnr + 1) % 4 == 0:
                        fdesc.write("\n")
                fdesc.write("\n" + tablesep)
                fdesc.write("\n\n-----------\n\n")

                for doc in self.doclist:
                    doc.write(fdesc, titles)
                    doc.write_xref(fdesc, ".", "../headerfiles")
                    # write transition
                    if doc is not self.doclist[-1]:
                        fdesc.write("----------\n\n")


class AppsDocList(ShellDocList):
    """List of autodocs of applications.

    Handles the autodocs of a single directory.
    """

    def write_index(self, fdesc, targetdir):
        """Write index file.

        Arguments:

        filehandle - handle of a file where the index (TOC) should be written.
        targetdir - directory which should be listed
        """

        # create index page
        fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")
        fdesc.write("==============\n")
        fdesc.write("Applications\n")
        fdesc.write("==============\n\n")
        write_index(fdesc, targetdir)


class HiddDocList(object):
    """List of autodocs of HIDD classes.

    Handles the autodocs of a single directory.
    """

    def __init__(self):
        """Constructor.
        """

        self.doclist = {} # key is classname, content is list of documents per class
        self.docfilename = ""

    def read(self, srcdir, name=None):
        """Scan directory for autodocs.

        Reads all *.c files of the given directory and scans them for autodocs.

        Arguments:

        srcdir - directory from which the autodocs should be read
        name -  Name of the document. If no name is given the rightmost part of
                srcdir will be used. This name will be later used for storing the file.
        """

        if name:
            self.docfilename = name
        else:
            self.docfilename = os.path.basename(srcdir) + "_hidd" # rightmost part of the path

        cfiles = os.listdir(srcdir)
        for infile in cfiles:
            if infile[-2:] == ".c":
                filename = os.path.join(srcdir, infile)
                print("Reading from file", filename)
                with codecs.open(filename, 'r', encoding='latin-1') as filehandle:
                    content = filehandle.read()  # read whole file
                    for ad_entry in AD_REGX.findall(content):
                        adoc = HiddAutoDoc(ad_entry)
                        if adoc.docname != "":
                            if "LOCATION" in adoc.titles:
                                classname = adoc.titles["LOCATION"].strip()
                                if classname in self.doclist:
                                    self.doclist[classname].append(adoc)
                                else:
                                    self.doclist[classname] = [adoc]
                            else:
                                raise ValueError("'%s' hidd doc has no LOCATION" % (adoc.docname))

        for _, value in self.doclist.items():
            value.sort()

    def write(self, targetdir, titles):
        """Write autodocs to directory.

        All autodocs will be written in a single file.

        Arguments:

        targedir -      name of a directory to where autodocs and index should be written
        titles -        what titles (e.g. Synopsis, Note) should be printed.
                        Write them in the given capitalization.
        """

        if len(self.doclist) > 0:
            filename = os.path.join(targetdir, self.docfilename + ".en")
            print("Writing to file", filename)
            with codecs.open(filename, 'w', encoding='utf-8') as fdesc:
                # create header
                underline = "=" * len(self.docfilename)
                fdesc.write(underline + "\n")
                fdesc.write(self.docfilename + "\n")
                fdesc.write(underline + "\n\n")

                fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")
                fdesc.write("`Index <index>`_\n\n")
                fdesc.write("----------\n\n")

                # create list of classes
                if len(self.doclist) > 1: # only when more than one class exists
                    fdesc.write("Classes\n-------\n\n")
                    for classname, doclist in self.doclist.items():
                        fdesc.write("+ `" + classname + "`_\n")
                    fdesc.write("\n----------\n\n")

                for classname, doclist in self.doclist.items():
                    if len(self.doclist) > 1:
                        fdesc.write(classname + "\n" + len(classname) * "-" + "\n\n")

                    # create toc
                    tablesep = (("=" * 42) + " ") * 4
                    fdesc.write(tablesep + "\n")
                    for docnr in range(len(doclist)):
                        tocname = "`" + doclist[docnr].docname + "`_"
                        tocname = tocname.ljust(43)
                        fdesc.write(tocname)
                        if (docnr + 1) % 4 == 0:
                            fdesc.write("\n")
                    fdesc.write("\n" + tablesep)
                    fdesc.write("\n\n-----------\n\n")

                    for doc in doclist:
                        doc.write(fdesc, titles)
                        doc.write_xref(fdesc, ".", "../headerfiles")
                        # write transition
                        if doc is not doclist[-1]: # not last entry
                            fdesc.write("----------\n\n")


def write_index(fdesc, targetdir):
    """Append directory listing to index file

    Arguments:

    filehandle - file where directory listing should be appended
    targedir - directory which should be listed
    """

    files = os.listdir(targetdir)
    files.sort()

    tablesep = (("=" * 49) + " ") * 5
    fdesc.write(tablesep + "\n")
    docnr = 1
    for doc in files:
        if doc[-3:] == ".en" and doc[:5] != "index" and doc != ".svn" and doc[:7] != "scripts" \
                and doc[:12] != "introduction" and doc[:13] != "functionindex":
            docname = doc[:-3]
            tocname = "`%s <%s>`_" %(docname, docname)
            tocname = tocname.ljust(50)
            fdesc.write(tocname)
            if (docnr) % 5 == 0:
                fdesc.write("\n")
            docnr = docnr + 1
    fdesc.write("\n" + tablesep + "\n")


def create_module_docs():
    """Create the module docs.
    """
    
    function_index = FunctionIndex()
    
    module_titles = ("Synopsis", "Template", "Function",
                     "Inputs", "Tags", "Result", "Example", "Notes", "Bugs", "See also")  # The titles we want
                                                                                          # to be printed
    targetdir = os.path.join("documentation", "developers", "autodocs")
    srcdirs = (os.path.join(TOPDIR, "rom"),
               os.path.join(TOPDIR, "rom", "devs"),
               os.path.join(TOPDIR, "arch", "all-hosted"),
               os.path.join(TOPDIR, "arch", "all-pc"),
               os.path.join(TOPDIR, "arch", "m68k-amiga"),
               os.path.join(TOPDIR, "workbench", "libs"),
               os.path.join(TOPDIR, "workbench", "libs", "mesa"))
    for sdir in srcdirs:
        create_lib_docs_dir(sdir, targetdir, module_titles, function_index)

    # add some docs for linker libs in AROS/compiler
    subdirs = (os.path.join(TOPDIR, "compiler", "alib"),
               os.path.join(TOPDIR, "compiler", "arossupport"),
               os.path.join(TOPDIR, "compiler", "crt/stdc"),
               os.path.join(TOPDIR, "compiler", "crt/posixc"))

    for docpath in subdirs:
        libdocs = LibDocList()
        libdocs.read(docpath)
        libdocs.write(targetdir, module_titles)

    # add HIDD docs
    srcdirs = (os.path.join(TOPDIR, "rom", "hidds"),
               os.path.join(TOPDIR, "workbench", "hidds"),
               os.path.join(TOPDIR, "arch", "all-unix", "hidd"),
               os.path.join(TOPDIR, "rom", "devs", "ata"))
    for sdir in srcdirs:
        create_hidd_docs_dir(sdir, targetdir, module_titles)

    # print index file
    filename = os.path.join(targetdir, "index.en")
    print("Writing to file", filename)
    with codecs.open(filename, 'w', encoding='utf-8') as fdesc:
        fdesc.write("======================\n")
        fdesc.write("Autodocs for Modules\n")
        fdesc.write("======================\n\n")
        fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")

        write_index(fdesc, targetdir)
        fdesc.write("\n`Function Index <functionindex>`_\n")

    # print function index
    filename = os.path.join(targetdir, "functionindex.en")
    print("Writing to file", filename)
    with codecs.open(filename, 'w', encoding='utf-8') as fdesc:
        function_index.write(fdesc)

    print("Done")


def create_lib_docs_dir(srcdir, targetdir, titles, function_index):
    """Scan whole parent directory.

    Scans a parent directory like AROS/rom for subdirectories with
    *.c files with autodoc headers.

    Arguments:

    srcdir -    parent directory of directory with autodocs.
    targetdir - the directory where the resulting ReST files should be stored
    titles -    what titles (e.g. Synopsis, Note) should be printed.
                Write them in the given capitalization.
    """

    subdirs = os.listdir(srcdir)
    for sdir in subdirs: # exec ,graphics etc.
        docpath = os.path.join(srcdir, sdir)
        if (sdir != ".svn") and (sdir != "ata") and os.path.isdir(docpath):
            libdocs = LibDocList()
            libdocs.read(docpath)
            libdocs.write(targetdir, titles)
            function_index.add_list(sdir, libdocs)

def create_hidd_docs_dir(srcdir, targetdir, titles):
    """Scan whole parent directory.

    Scans a parent directory like AROS/rom/hidds for subdirectories with
    *.c files with autodoc headers.

    Arguments:

    srcdir -    parent directory of directory with autodocs.
    targetdir - the directory where the resulting ReST files should be stored
    titles -    what titles (e.g. Synopsis, Note) should be printed.
                Write them in the given capitalization.
    """

    subdirs = os.listdir(srcdir)
    for sdir in subdirs: # kbd, mouse, graphics etc.
        docpath = os.path.join(srcdir, sdir)
        if (sdir != ".svn") and os.path.isdir(docpath):
            hidddocs = HiddDocList()
            hidddocs.read(docpath)
            hidddocs.write(targetdir, titles)

def create_shell_docs():
    """Create the Shell commands docs.
    """

    srcdirs = (os.path.join(TOPDIR, "workbench", "c"),
               os.path.join(TOPDIR, "workbench", "c", "shellcommands"),
               os.path.join(TOPDIR, "workbench", "c", "Shell"),
               os.path.join(TOPDIR, "workbench", "c", "R"),
               os.path.join(TOPDIR, "workbench", "c", "Identify"),
               os.path.join(TOPDIR, "workbench", "c", "Partition"),
               os.path.join(TOPDIR, "workbench", "c", "Decoration"),
               os.path.join(TOPDIR, "workbench", "c", "iprefs"))
    targetdir = os.path.join("documentation", "users", "shell") # relative to main build script
    shell_titles = ("Name", "Format", "Template", "Synopsis", "Location", "Function",
                    "Inputs", "Tags", "Result", "Example", "Notes", "Bugs", "See also")  # The titles we want
                                                                                         # to be printed
    shelldocs = ShellDocList()
    for sdir in srcdirs:
        shelldocs.read(sdir)
    shelldocs.write(targetdir, shell_titles)
    print("Done")

def create_apps_docs():
    """Create the application docs.
    """

    srcdirs = (os.path.join(TOPDIR, "workbench", "tools", "commodities"),
               os.path.join(TOPDIR, "workbench", "tools", "WiMP"),
               os.path.join(TOPDIR, "workbench", "tools", "BoingIconBar"),
               os.path.join(TOPDIR, "workbench", "tools"))

    targetdir = os.path.join("documentation", "users", "applications") # relative to main build script
    apps_titles = ("Name", "Format", "Template", "Synopsis", "Location", "Function",
                   "Inputs", "Tags", "Result", "Example", "Notes", "Bugs", "See also")  # The titles we want
                                                                                        # to be printed
    appsdocs = AppsDocList()
    for sdir in srcdirs:
        appsdocs.read(sdir)
    appsdocs.write(targetdir, apps_titles)
    print("Done")

def create_all_docs():
    """Create all docs.
    """
    create_shell_docs()
    create_module_docs()
    create_apps_docs()


if __name__ == "__main__":
    os.chdir("..") # because we have relative paths
    create_all_docs()
