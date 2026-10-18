# Copyright (C) 2008-2026, The AROS Development Team. All rights reserved.


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
import logging
import json
from collections import Counter, defaultdict
from pathlib import Path
from typing import List, Dict, Tuple, Optional, Any
from dataclasses import dataclass

# Configure logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

# Relative path from the main build script to the root of the AROS source
TOPDIR = Path("..")

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


def move_if_changed(tmpfilename: str, targetfilename: str) -> None:
    """Move the tempfile to the targetfile only if it differs."""
    tmp_path = Path(tmpfilename)
    target_path = Path(targetfilename)
    
    if target_path.exists():
        if not filecmp.cmp(str(tmp_path), str(target_path), shallow=False):
            logging.info(f"{tmp_path} moved to {target_path}")
            shutil.move(str(tmp_path), str(target_path))
            return
    else:
        logging.info(f"{tmp_path} moved to {target_path}")
        shutil.move(str(tmp_path), str(target_path))
        return

    logging.debug(f"{tmp_path} removed (no changes)")
    tmp_path.unlink()


class AutoDocOutputAudit:
    """Track recognized/parsed source entries against FINAL emitted ReST headings.

    This deliberately audits the current generator's discovery scope only.
    Unsupported formats and paths not scanned by that generator are NOT PASS.
    """

    def __init__(self):
        self.records = []
        self.recognized_count = 0

    def reset(self):
        self.records.clear()
        self.recognized_count = 0

    def recognize(self):
        self.recognized_count += 1

    def expect(self, output, doc):
        output_path = Path(output).absolute()
        try:
            relative_output = output_path.relative_to(Path.cwd().absolute())
        except ValueError as error:
            raise ValueError('AutoDoc output outside build workspace') from error
        relative = relative_output.as_posix()
        if not relative.startswith('documentation/') or not relative.endswith('.en.rst'):
            raise ValueError('Unexpected AutoDoc page path: ' + relative)
        origin = getattr(doc, 'source_path', None)
        if not origin:
            raise ValueError('Missing AutoDoc source provenance: ' + doc.docname)
        self.records.append({'source': origin, 'document': relative,
                             'entry': doc.docname, 'status': 'PENDING'})

    @staticmethod
    def _headings(path):
        lines = path.read_text(encoding='utf-8').splitlines()
        return Counter(lines[index] for index in range(len(lines)-1)
                       if lines[index] and lines[index+1] == '=' * len(lines[index]))

    def verify(self):
        expected = defaultdict(Counter)
        for record in self.records:
            expected[record['document']][record['entry']] += 1
        defective = []
        for document, names in sorted(expected.items()):
            path = Path(document)
            if not path.is_file():
                for name, count in names.items():
                    defective.append({'document': document, 'entry': name,
                                      'expected': count, 'found': 0, 'reason': 'MISSING_PAGE'})
                continue
            headings = self._headings(path)
            for name, count in sorted(names.items()):
                if headings[name] != count:
                    defective.append({'document': document, 'entry': name,
                                      'expected': count, 'found': headings[name],
                                      'reason': 'ENTRY_COUNT_MISMATCH'})
        if self.recognized_count != len(self.records):
            defective.append({'reason': 'RECOGNIZED_PARSED_COUNT_MISMATCH',
                              'expected': self.recognized_count, 'found': len(self.records)})
        problem_pages = {(item['document'], item['entry']) for item in defective if 'document' in item}
        for record in self.records:
            record['status'] = ('LOST' if (record['document'], record['entry']) in problem_pages
                                else 'PUBLISHED')
        manifest = {'schema': 'AROS-AUTODOCS-R4A-0001',
                    'status': 'FAIL' if defective else 'PASS',
                    'scope': 'recognized_and_parsed_entries_in_generator_selected_C_files',
                    'source_discovery_completeness': 'UNVERIFIED',
                    'unsupported_formats_coverage': 'UNVERIFIED',
                    'public_API_contract_coverage': 'UNVERIFIED',
                    'recognized_entries': self.recognized_count,
                    'parsed_entries': len(self.records),
                    'published_entries': sum(r['status']=='PUBLISHED' for r in self.records),
                    'lost_entries': sum(r['status']=='LOST' for r in self.records),
                    'defects': defective, 'entries': self.records}
        target = os.environ.get('AROS_AUTODOCS_AUDIT_JSON')
        if target:
            p = Path(target)
            p.parent.mkdir(parents=True, exist_ok=True)
            # Treat an audit report write failure as a failed build, not a warning.
            p.write_text(json.dumps(manifest, indent=2, sort_keys=True,
                                    ensure_ascii=False) + '\n', encoding='utf-8')
        if defective:
            for item in defective[:12]:
                logging.error('AutoDoc output loss: %s', item)
            raise RuntimeError('AutoDoc R4 output audit failed: %d mismatches' % len(defective))
        logging.info('AutoDoc R4 output audit PASS: %d entries, %d pages; discovery UNVERIFIED',
                     len(self.records), len(expected))
        return manifest


DOC_AUDIT = AutoDocOutputAudit()


class FunctionIndex:
    """Index each function and module pair without losing duplicate names."""

    def __init__(self):
        self.funcdict: Dict[str, List[str]] = {}

    def add_list(self, docpath: str, libdocs: 'LibDocList') -> None:
        """Add functions from a library documentation list."""
        for ldoc in libdocs.doclist:
            if ldoc.docname.endswith("()"):
                paths = self.funcdict.setdefault(ldoc.docname, [])
                if docpath not in paths:
                    paths.append(docpath)

    def write(self, fdesc) -> None:
        """Write every module target, qualifying ambiguous function names."""
        entries = []
        for func in sorted(self.funcdict):
            paths = self.funcdict[func]
            for path in sorted(paths):
                label = func if len(paths) == 1 else "%s (%s)" % (func, path)
                entries.append("`%s <%s#%s>`_" % (label, path, func[:-2].lower()))
        width = max([74] + [len(entry) for entry in entries])
        tablesep = (("=" * width) + " ") * 4
        fdesc.write("==============\nFunction Index\n==============\n\n")
        fdesc.write(tablesep + "\n")
        for index, entry in enumerate(entries, 1):
            fdesc.write(entry.ljust(width + 1))
            if index % 4 == 0:
                fdesc.write("\n")
        fdesc.write("\n" + tablesep + "\n")


class AutoDoc:
    """Autodoc base class.

    Subclasses must set the element's
    docname (function or command name e.g. "Draw") and docfilename (lower case docname)
    """

    def __init__(self, content: str):
        """Constructor. Reads and parses autodoc string.

        Arguments:
        content - String of autodoc text chunk without surrounding comment lines
        """

        self.titles: Dict[str, str] = {}  # dict for each title
        self.docname: str = ""  # function or command name
        self.docfilename: str = ""  # filename without ".en.rst"

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
                    self._parse_xref(xref)

    def _parse_xref(self, xref) -> None:
        """Parse cross-reference information."""
        libname = xref.group('libname')
        funcname = xref.group('funcname')
        localfuncname = xref.group('localfuncname')
        path = xref.group('path')
        command = xref.group('command')
        header = xref.group('header')
        
        # check for allowed combinations
        if libname and funcname and not any([localfuncname, path, command, header]):
            # libname + funcname
            self.titles["XREF"].append((XREF_KIND_FUNCTION, libname, funcname))
        elif localfuncname and not any([libname, funcname, path, command, header]):
            # localfuncname
            self.titles["XREF"].append((XREF_KIND_LOCALFUNCTION, localfuncname, ""))
        elif path and not any([libname, funcname, localfuncname, command, header]):
            # path
            self.titles["XREF"].append((XREF_KIND_ANY, path, ""))
        elif command and not any([libname, funcname, localfuncname, path, header]):
            # command
            self.titles["XREF"].append((XREF_KIND_STRING, command, ""))
        elif header and not any([libname, funcname, localfuncname, path, command]):
            # header
            self.titles["XREF"].append((XREF_KIND_HEADER, header, ""))
        else:
            logging.warning(f"XREF parsing error in {self.titles['SEE ALSO']}")
            raise ValueError("XREF parsing error")

    def __lt__(self, other: 'AutoDoc') -> bool:
        """Compare function for sorting by docfilename."""
        return self.docfilename < other.docfilename

    def write(self, fdesc, titles: List[str]) -> None:
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
                    fdesc.write(f"{title}\n")
                    fdesc.write("~" * len(title) + "\n")
                    fdesc.write("::\n\n")
                    fdesc.write(lines)
                    fdesc.write("\n")

    def write_xref(self, fdesc, path_to_lib: str) -> None:
        """Write xrefs ('see also') to file.

        Arguments:
        filehandle - filehandle of a file to write the autodoc in
        path_to_lib - relative path from target document to directory with library documents
        """

        if "XREF" in self.titles and len(self.titles["XREF"]) > 0:
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
                    self.write_xref_header(fdesc, name1)
            fdesc.write("\n\n")

    def write_xref_function(self, fdesc, libname, funcname, path_to_lib):
        """ Write XREF of a function
        """
        fdesc.write("`%s.library/%s() <%s/%s#%s>`_ " % (libname, funcname, path_to_lib, libname, funcname.lower()))

    def write_xref_localfunction(self, fdesc, funcname):
        """ Write XREF of a local
        """
        fdesc.write("`%s()`_ " % (funcname))

    def write_xref_header(self, fdesc, name):
        """ Write XREF of a header file
        """
        fdesc.write("`%s </documentation/headerfiles/%s>`_ " % (name, name))

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
                if funcname.endswith("A") and self.parameters[-1][0].strip() == "RAWARG":
                    # Raw argument wrappers have no leading tag parameter.
                    syn += "          ... );\n"
                else:
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


class ShellDocList:
    """List of Shell autodocs

    Handles the Shell autodocs of a single directory.
    """

    def __init__(self):
        """Constructor."""
        self.doclist: List[ShellAutoDoc] = []

    def read(self, srcdir: str) -> None:
        """Scan directory for autodocs

        Reads all *.c files of the given directory and scans them for autodocs.

        Arguments:
        srcdir - directory from which the autodocs should be read
        """
        src_path = Path(srcdir)
        if not src_path.exists():
            logging.warning(f"Source directory {srcdir} does not exist")
            return

        c_files = list(src_path.glob("*.c"))
        for filepath in c_files:
            logging.info(f"Reading from file {filepath}")
            try:
                with codecs.open(str(filepath), 'r', encoding='latin-1') as filehandle:
                    content = filehandle.read()  # read whole file
                    for ad_entry in AD_REGX.findall(content):
                        DOC_AUDIT.recognize()
                        try:
                            adoc = ShellAutoDoc(ad_entry)
                            if adoc.docname:
                                adoc.source_path = str(filepath.relative_to(TOPDIR))
                                self.doclist.append(adoc)
                            else:
                                raise ValueError(f'Empty AutoDoc name in {filepath}')
                        except ValueError as e:
                            raise ValueError(f"Error parsing autodoc in {filepath}: {e}") from e
            except (IOError, UnicodeDecodeError) as e:
                raise IOError(f"Error reading file {filepath}: {e}") from e

        self.doclist.sort()

        # set prev/next fields
        for docnr, doc in enumerate(self.doclist):
            if docnr > 0:
                doc.prevdocfilename = self.doclist[docnr - 1].docfilename
            if docnr < len(self.doclist) - 1:
                doc.nextdocfilename = self.doclist[docnr + 1].docfilename

    def write_index(self, fdesc, targetdir: str) -> None:
        """Write index file.

        Arguments:
        filehandle - handle of a file where the index (TOC) should be written
        targetdir - directory which should be listed
        """

        logging.info("Creating shell commands index file")
        fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")
        fdesc.write("=======================\n")
        fdesc.write("Using AROS by the Shell\n")
        fdesc.write("=======================\n\n")
        fdesc.write("+ `Introduction <introduction>`_\n")
        fdesc.write("+ `Scripts <scripts>`_\n\n")

        fdesc.write("Commands\n")
        fdesc.write("--------\n")

        write_index(fdesc, targetdir)

    def write(self, targetdir: str, titles: List[str]) -> None:
        """Write autodocs to directory.

        Each autodoc will be written in a single file.

        Arguments:
        targedir - name of a directory to where autodocs and index should be written
        titles - what titles (e.g. Synopsis, Note) should be printed.
                Write them in the given capitalization.
        """

        target_path = Path(targetdir)
        target_path.mkdir(parents=True, exist_ok=True)
        
        for doc in self.doclist:
            filename = target_path / f"{doc.docfilename}.en.rst"
            DOC_AUDIT.expect(filename, doc)
            logging.info(f"Writing to file {filename}")
            
            try:
                with codecs.open(str(filename), 'w', encoding='utf-8') as fdesc:
                    doc.write(fdesc, titles)
                    doc.write_xref(fdesc, "../../developers/autodocs")
            except IOError as e:
                raise IOError(f"Error writing file {filename}: {e}") from e

        # create index page
        index_file = target_path / "index.en.rst"
        logging.info(f"Writing index to file {index_file}")
        try:
            with codecs.open(str(index_file), 'w', encoding='utf-8') as fdesc:
                self.write_index(fdesc, str(target_path))
        except IOError as e:
            raise IOError(f"Error writing index file {index_file}: {e}") from e


class LibDocList:
    """List of autodocs of static and shared libraries.

    Handles the autodocs of a single directory.
    """

    def __init__(self):
        """Constructor."""
        self.doclist: List[LibAutoDoc] = []
        self.docfilename: str = ""

    def read(self, srcdir: str, name: Optional[str] = None) -> None:
        """Scan directory for autodocs.

        Reads all *.c files of the given directory and scans them for autodocs.

        Arguments:
        srcdir - directory from which the autodocs should be read
        name - Name of the document. If no name is given the rightmost part of
               srcdir will be used. This name will be later used for storing the file.
        """
        src_path = Path(srcdir)
        
        if not src_path.exists():
            logging.warning(f"Source directory {srcdir} does not exist")
            return

        self.docfilename = name if name else src_path.name

        c_files = list(src_path.glob("*.c"))
        for filepath in c_files:
            logging.info(f"Reading from file {filepath}")
            try:
                with codecs.open(str(filepath), 'r', encoding='latin-1') as filehandle:
                    content = filehandle.read()  # read whole file
                    for ad_entry in AD_REGX.findall(content):
                        DOC_AUDIT.recognize()
                        try:
                            adoc = LibAutoDoc(ad_entry)
                            if adoc.docname:
                                adoc.source_path = str(filepath.relative_to(TOPDIR))
                                self.doclist.append(adoc)
                            else:
                                raise ValueError(f'Empty AutoDoc name in {filepath}')
                        except ValueError as e:
                            raise ValueError(f"Error parsing autodoc in {filepath}: {e}") from e
            except (IOError, UnicodeDecodeError) as e:
                raise IOError(f"Error reading file {filepath}: {e}") from e
                
        self.doclist.sort()

    def write(self, targetdir: str, titles: List[str]) -> None:
        """Write autodocs to directory.

        All autodocs will be written in a single file.

        Arguments:
        targedir - name of a directory to where autodocs and index should be written
        titles - what titles (e.g. Synopsis, Note) should be printed.
                Write them in the given capitalization.
        """

        if not self.doclist:
            return

        target_path = Path(targetdir)
        target_path.mkdir(parents=True, exist_ok=True)
        
        filename = target_path / f"{self.docfilename}.en.rst"
        for doc in self.doclist:
            DOC_AUDIT.expect(filename, doc)
        logging.info(f"Writing to file {filename}")
        
        try:
            with codecs.open(str(filename), 'w', encoding='utf-8') as fdesc:
                # create header
                underline = "=" * len(self.docfilename)
                fdesc.write(f"{underline}\n")
                fdesc.write(f"{self.docfilename}\n")
                fdesc.write(f"{underline}\n\n")

                fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")
                fdesc.write("`Index <index>`_\n\n")
                fdesc.write("----------\n\n")

                # create toc
                tablesep = (("=" * 39) + " ") * 4
                fdesc.write(tablesep + "\n")
                for docnr, doc in enumerate(self.doclist):
                    tocname = f"`{doc.docname}`_"
                    tocname = tocname.ljust(40)
                    fdesc.write(tocname)
                    if (docnr + 1) % 4 == 0:
                        fdesc.write("\n")
                fdesc.write(f"\n{tablesep}")
                fdesc.write("\n\n-----------\n\n")

                for i, doc in enumerate(self.doclist):
                    doc.write(fdesc, titles)
                    doc.write_xref(fdesc, ".")
                    # write transition
                    if i < len(self.doclist) - 1:
                        fdesc.write("----------\n\n")
        except IOError as e:
            raise IOError(f"Error writing file {filename}: {e}") from e


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
                        DOC_AUDIT.recognize()
                        adoc = HiddAutoDoc(ad_entry)
                        if adoc.docname != "":
                            adoc.source_path = str(Path(filename).relative_to(TOPDIR))
                            if "LOCATION" in adoc.titles:
                                classname = adoc.titles["LOCATION"].strip()
                                if classname in self.doclist:
                                    self.doclist[classname].append(adoc)
                                else:
                                    self.doclist[classname] = [adoc]
                            else:
                                raise ValueError("'%s' hidd doc has no LOCATION" % (adoc.docname))
                        else:
                            raise ValueError('Empty HIDD AutoDoc name in %s' % filename)

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
            filename = os.path.join(targetdir, self.docfilename + ".en.rst")
            for doclist in self.doclist.values():
                for doc in doclist:
                    DOC_AUDIT.expect(filename, doc)
            print("Writing to file", filename)
            os.makedirs(os.path.dirname(filename), exist_ok=True)
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
                        doc.write_xref(fdesc, ".")
                        # write transition
                        if doc is not doclist[-1]: # not last entry
                            fdesc.write("----------\n\n")


def write_index(fdesc, targetdir: str) -> None:
    """Append directory listing to index file

    Arguments:
    filehandle - file where directory listing should be appended
    targedir - directory which should be listed
    """
    target_path = Path(targetdir)
    if not target_path.exists():
        logging.warning(f"Target directory {targetdir} does not exist")
        return

    files = [f.name for f in target_path.iterdir() if f.is_file()]
    files.sort()

    tablesep = (("=" * 49) + " ") * 5
    fdesc.write(tablesep + "\n")
    docnr = 1
    
    for doc in files:
        if (doc.endswith(".en.rst") and 
            not doc.startswith("index") and 
            doc != ".svn" and 
            not doc.startswith("scripts") and
            not doc.startswith("introduction") and 
            not doc.startswith("functionindex")):
            
            docname = doc[:-7]  # remove .en.rst
            tocname = f"`{docname} <{docname}>`_"
            tocname = tocname.ljust(50)
            fdesc.write(tocname)
            if docnr % 5 == 0:
                fdesc.write("\n")
            docnr += 1
    fdesc.write(f"\n{tablesep}\n")


class ModuleOutputRegistry:
    """Allocate one unambiguous page per source directory in this generator run.

    Keep the first (generic) page name for backward-compatible links. Later
    architecture or module variants receive a source-relative qualified name.
    """

    def __init__(self, source_root: Path):
        self.source_root = source_root.resolve()
        self.owners: Dict[str, Path] = {}

    def claim(self, name: str, directory: Path) -> str:
        origin = Path(directory).resolve()
        relative = origin.relative_to(self.source_root)
        if name not in self.owners:
            self.owners[name] = origin
            return name
        if self.owners[name] == origin:
            raise ValueError(f"Duplicate AutoDoc output from the same source: {origin}")
        suffix = "-".join(relative.parts)
        alternate = f"{name}--{suffix}"
        if alternate in self.owners:
            raise ValueError(f"Duplicate qualified AutoDoc output: {alternate}")
        self.owners[alternate] = origin
        logging.warning(
            "AutoDoc module page collision resolved: %s (%s) -> %s; canonical from %s",
            name, relative, alternate, self.owners[name])
        return alternate


def create_module_docs() -> None:
    """Create the module docs."""
    logging.info("Creating module documentation...")
    
    function_index = FunctionIndex()
    module_output_registry = ModuleOutputRegistry(TOPDIR)
    
    module_titles = ("Synopsis", "Template", "Function",
                     "Inputs", "Tags", "Result", "Example", "Notes", "Bugs", "See also")
                                                                                          
    targetdir = Path("documentation") / "developers" / "autodocs"
    
    # Define source directories using Path objects
    srcdirs = [
        TOPDIR / "rom",
        TOPDIR / "rom" / "devs",
        TOPDIR / "arch" / "all-hosted",
        TOPDIR / "arch" / "all-pc",
        TOPDIR / "arch" / "m68k-amiga",
        TOPDIR / "workbench" / "libs",
        TOPDIR / "workbench" / "libs" / "mesa"
    ]
    
    for sdir in srcdirs:
        create_lib_docs_dir(str(sdir), str(targetdir), module_titles, function_index, module_output_registry)

    # The diskimage.device has its vectors below the device subdirectory.
    diskimage_device_path = TOPDIR / "workbench" / "devs" / "diskimage" / "device"
    diskimage_device_docs = LibDocList()
    diskimage_device_docs.read(str(diskimage_device_path))
    if diskimage_device_docs.doclist:
        diskimage_device_docs.docfilename = module_output_registry.claim("diskimage_device", diskimage_device_path)
        diskimage_device_docs.write(str(targetdir), module_titles)
        function_index.add_list(diskimage_device_docs.docfilename, diskimage_device_docs)

    # ramdrive.device is under workbench/devs, outside the module search roots.
    ramdrive_docs = LibDocList()
    ramdrive_docs.read(str(TOPDIR / "workbench" / "devs" / "ramdrive"))
    ramdrive_docs.write(str(targetdir), module_titles)
    function_index.add_list("ramdrive", ramdrive_docs)

    # Poseidon is nested under rom/usb and is outside the module scan roots.
    poseidon_dir = TOPDIR / "rom" / "usb" / "poseidon"
    poseidon_docs = LibDocList()
    poseidon_docs.read(str(poseidon_dir))
    if poseidon_docs.doclist:
        poseidon_docs.docfilename = module_output_registry.claim(poseidon_docs.docfilename, poseidon_dir)
        poseidon_docs.write(str(targetdir), module_titles)
        function_index.add_list(poseidon_docs.docfilename, poseidon_docs)

    # Colorwheel conversion APIs live outside the default module roots.
    colorwheel_path = TOPDIR / "workbench" / "classes" / "gadgets" / "colorwheel"
    colorwheel_docs = LibDocList()
    colorwheel_docs.read(str(colorwheel_path), name="colorwheel")
    if colorwheel_docs.doclist:
        colorwheel_docs.docfilename = module_output_registry.claim(
            colorwheel_docs.docfilename, colorwheel_path)
        colorwheel_docs.write(str(targetdir), module_titles)
        function_index.add_list(colorwheel_docs.docfilename, colorwheel_docs)

    # pthread is a link library outside the module search roots.
    pthread_path = TOPDIR / "compiler" / "pthread"
    pthread_docs = LibDocList()
    pthread_docs.read(str(pthread_path))
    if pthread_docs.doclist:
        pthread_docs.docfilename = module_output_registry.claim("pthread", pthread_path)
        pthread_docs.write(str(targetdir), module_titles)
        function_index.add_list(pthread_docs.docfilename, pthread_docs)

    # MiamiPanel is nested within AROSTCP, outside the module scan roots.
    miamipanel_dir = TOPDIR / "workbench" / "network" / "stacks" / "AROSTCP" / "MUI.MiamiPanel"
    miamipanel_docs = LibDocList()
    miamipanel_docs.read(str(miamipanel_dir), name="miamipanel")
    if miamipanel_docs.doclist:
        miamipanel_docs.docfilename = module_output_registry.claim(
            miamipanel_docs.docfilename, miamipanel_dir)
        miamipanel_docs.write(str(targetdir), module_titles)
        function_index.add_list(miamipanel_docs.docfilename, miamipanel_docs)

    # add some docs for linker libs in AROS/compiler
    subdirs = [
        TOPDIR / "compiler" / "alib",
        TOPDIR / "compiler" / "arossupport",
        TOPDIR / "compiler" / "crt" / "stdc",
        TOPDIR / "compiler" / "crt" / "posixc"
    ]

    for docpath in subdirs:
        libdocs = LibDocList()
        libdocs.read(str(docpath))
        if docpath == TOPDIR / "compiler" / "crt" / "stdc":
            # Math entry points belong to the same C runtime document.
            libdocs.read(str(docpath / "math"), name="stdc")
            libdocs.read(str(docpath / "math" / "ld80"), name="stdc")
        if libdocs.doclist:
            libdocs.docfilename = module_output_registry.claim(libdocs.docfilename, docpath)
            libdocs.write(str(targetdir), module_titles)
            function_index.add_list(libdocs.docfilename, libdocs)

    # The PNG datatype's direct interface is distinct from png.library.
    png_datatype_path = TOPDIR / "workbench" / "classes" / "datatypes" / "png"
    png_datatype_docs = LibDocList()
    png_datatype_docs.read(str(png_datatype_path))
    if png_datatype_docs.doclist:
        png_datatype_docs.docfilename = module_output_registry.claim("png_datatype", png_datatype_path)
        png_datatype_docs.write(str(targetdir), module_titles)
        function_index.add_list(png_datatype_docs.docfilename, png_datatype_docs)

    # ReAction AutoDocs live in class-specific directories outside module roots.
    reaction_root = TOPDIR / "workbench" / "classes" / "reaction"
    for classname in (
        'bevel',
        'bitmap',
        'button',
        'checkbox',
        'chooser',
        'clicktab',
        'drawlist',
        'fuelgauge',
        'getfile',
        'getfont',
        'getscreenmode',
        'glyph',
        'integer',
        'label',
        'layout',
        'led',
        'listbrowser',
        'page',
        'palette',
        'penmap',
        'radiobutton',
        'requester',
        'scroller',
        'slider',
        'space',
        'speedbar',
        'string',
        'textfield',
        'window',
    ):
        class_path = reaction_root / classname
        class_docs = LibDocList()
        class_docs.read(str(class_path), name="reaction-" + classname)
        if class_docs.doclist:
            class_docs.docfilename = module_output_registry.claim(
                class_docs.docfilename, class_path)
            class_docs.write(str(targetdir), module_titles)
            function_index.add_list(class_docs.docfilename, class_docs)

    # AHI device AutoDocs are outside the module search roots.
    ahi_dir = TOPDIR / "workbench" / "devs" / "AHI" / "Device"
    ahi_docs = LibDocList()
    ahi_docs.read(str(ahi_dir), name="ahi_device")
    if ahi_docs.doclist:
        ahi_docs.docfilename = module_output_registry.claim(
            ahi_docs.docfilename, ahi_dir)
        ahi_docs.write(str(targetdir), module_titles)
        function_index.add_list(ahi_docs.docfilename, ahi_docs)

    # Envoy library APIs and service-local vectors.
    envoy_root = TOPDIR / "workbench" / "network" / "envoy"
    for relative in ("nipc", "accounts", "services", "envoy",
                     "efsservice", "services/echo"):
        source_dir = envoy_root / relative
        docs = LibDocList()
        docs.read(str(source_dir), name="envoy_" + relative.replace("/", "_"))
        if docs.doclist:
            docs.docfilename = module_output_registry.claim(docs.docfilename, source_dir)
            docs.write(str(targetdir), module_titles)
            if relative in ("nipc", "accounts", "services", "envoy"):
                function_index.add_list(docs.docfilename, docs)

    # AsyncIO implementation sources are below the library scan depth.
    asyncio_dir = TOPDIR / "workbench" / "libs" / "asyncio" / "src"
    asyncio_docs = LibDocList()
    asyncio_docs.read(str(asyncio_dir), name="asyncio")
    if asyncio_docs.doclist:
        asyncio_docs.docfilename = module_output_registry.claim("asyncio", asyncio_dir)
        asyncio_docs.write(str(targetdir), module_titles)
        function_index.add_list(asyncio_docs.docfilename, asyncio_docs)

    # add HIDD docs
    srcdirs = [
        TOPDIR / "rom" / "hidds",
        TOPDIR / "workbench" / "hidds",
        TOPDIR / "arch" / "all-unix" / "hidd",
        TOPDIR / "rom" / "devs" / "ata"
    ]
    
    for sdir in srcdirs:
        create_hidd_docs_dir(str(sdir), str(targetdir), module_titles, module_output_registry)

    # The base HIDD keeps the bus and storage classes one level below base.
    # These existing AutoDocs are outside the generic HIDD directory scan.
    for dirname in ("bus", "storage"):
        hidd_path = TOPDIR / "rom" / "hidds" / "base" / dirname
        hidd_docs = HiddDocList()
        hidd_docs.read(str(hidd_path))
        if hidd_docs.doclist:
            hidd_docs.docfilename = module_output_registry.claim(hidd_docs.docfilename, hidd_path)
            hidd_docs.write(str(targetdir), module_titles)

    # print index file
    index_file = targetdir / "index.en.rst"
    logging.info(f"Writing index to file {index_file}")
    try:
        with codecs.open(str(index_file), 'w', encoding='utf-8') as fdesc:
            fdesc.write("======================\n")
            fdesc.write("Autodocs for Modules\n")
            fdesc.write("======================\n\n")
            fdesc.write(".. This document is automatically generated. Don't edit it!\n\n")

            write_index(fdesc, str(targetdir))
            fdesc.write("\n`Function Index <functionindex>`_\n")
    except IOError as e:
        raise IOError(f"Error writing index file: {e}") from e

    # print function index
    func_index_file = targetdir / "functionindex.en.rst"
    logging.info(f"Writing function index to file {func_index_file}")
    try:
        with codecs.open(str(func_index_file), 'w', encoding='utf-8') as fdesc:
            function_index.write(fdesc)
    except IOError as e:
        raise IOError(f"Error writing function index file: {e}") from e

    DOC_AUDIT.verify()
    logging.info("Module documentation creation completed")


def create_lib_docs_dir(srcdir: str, targetdir: str, titles: List[str], function_index: FunctionIndex, registry: ModuleOutputRegistry) -> None:
    """Scan whole parent directory.

    Scans a parent directory like AROS/rom for subdirectories with
    *.c files with autodoc headers.

    Arguments:
    srcdir - parent directory of directory with autodocs.
    targetdir - the directory where the resulting ReST files should be stored
    titles - what titles (e.g. Synopsis, Note) should be printed.
            Write them in the given capitalization.
    """
    src_path = Path(srcdir)
    if not src_path.exists():
        logging.warning(f"Source directory {srcdir} does not exist")
        return

    subdirs = [d for d in src_path.iterdir() if d.is_dir() and d.name not in {".svn", "ata"}]
    
    for sdir in subdirs:  # exec, graphics etc.
        libdocs = LibDocList()
        libdocs.read(str(sdir))
        if libdocs.doclist:
            libdocs.docfilename = registry.claim(libdocs.docfilename, sdir)
            libdocs.write(targetdir, titles)
            function_index.add_list(libdocs.docfilename, libdocs)


def create_hidd_docs_dir(srcdir: str, targetdir: str, titles: List[str], registry: ModuleOutputRegistry) -> None:
    """Scan whole parent directory.

    Scans a parent directory like AROS/rom/hidds for subdirectories with
    *.c files with autodoc headers.

    Arguments:
    srcdir - parent directory of directory with autodocs.
    targetdir - the directory where the resulting ReST files should be stored
    titles - what titles (e.g. Synopsis, Note) should be printed.
            Write them in the given capitalization.
    """
    src_path = Path(srcdir)
    if not src_path.exists():
        logging.warning(f"Source directory {srcdir} does not exist")
        return

    subdirs = [d for d in src_path.iterdir() if d.is_dir() and d.name != ".svn"]
    
    for sdir in subdirs:  # kbd, mouse, graphics etc.
        hidddocs = HiddDocList()
        hidddocs.read(str(sdir))
        if hidddocs.doclist:
            hidddocs.docfilename = registry.claim(hidddocs.docfilename, sdir)
            hidddocs.write(targetdir, titles)

def create_shell_docs() -> None:
    """Create the Shell commands docs."""
    logging.info("Creating shell documentation...")
    
    srcdirs = [
        TOPDIR / "workbench" / "c",
        TOPDIR / "workbench" / "c" / "shellcommands",
        TOPDIR / "workbench" / "c" / "Unpack",
        TOPDIR / "workbench" / "c" / "Shell",
        TOPDIR / "workbench" / "c" / "R",
        TOPDIR / "workbench" / "c" / "Identify",
        TOPDIR / "workbench" / "c" / "Partition",
        TOPDIR / "workbench" / "c" / "Decoration",
        TOPDIR / "workbench" / "c" / "iprefs"
    ]
    
    targetdir = Path("documentation") / "users" / "shell"  # relative to main build script
    shell_titles = ("Name", "Format", "Template", "Synopsis", "Location", "Function",
                    "Inputs", "Tags", "Result", "Example", "Notes", "Bugs", "See also")
                                                                                         
    shelldocs = ShellDocList()
    for sdir in srcdirs:
        shelldocs.read(str(sdir))
    shelldocs.write(str(targetdir), shell_titles)
    DOC_AUDIT.verify()
    logging.info("Shell documentation creation completed")


def create_apps_docs() -> None:
    """Create the application docs."""
    logging.info("Creating applications documentation...")
    
    srcdirs = [
        TOPDIR / "workbench" / "tools" / "commodities",
        TOPDIR / "workbench" / "tools" / "WiMP",
        TOPDIR / "workbench" / "tools" / "BoingIconBar",
        TOPDIR / "workbench" / "tools"
    ]

    targetdir = Path("documentation") / "users" / "applications"  # relative to main build script
    apps_titles = ("Name", "Format", "Template", "Synopsis", "Location", "Function",
                   "Inputs", "Tags", "Result", "Example", "Notes", "Bugs", "See also")
                                                                                        
    appsdocs = AppsDocList()
    for sdir in srcdirs:
        appsdocs.read(str(sdir))
    appsdocs.write(str(targetdir), apps_titles)
    DOC_AUDIT.verify()
    logging.info("Applications documentation creation completed")


def create_all_docs() -> None:
    """Create all docs."""
    logging.info("Creating all documentation...")
    DOC_AUDIT.reset()
    create_shell_docs()
    create_module_docs()
    create_apps_docs()
    logging.info("All documentation creation completed")


if __name__ == "__main__":
    # Setup logging for standalone execution
    logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
    
    current_dir = Path.cwd()
    parent_dir = current_dir.parent
    
    if parent_dir.exists():
        os.chdir(str(parent_dir))  # because we have relative paths
        logging.info(f"Changed working directory to {parent_dir}")
    else:
        logging.warning(f"Parent directory {parent_dir} does not exist")
    
    create_all_docs()
