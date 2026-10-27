# Copyright (C) 2026, The AROS Development Team. All rights reserved.
"""Generate the MUI class reference independently of library function AutoDocs."""
import re
from collections import defaultdict
from pathlib import Path

SOURCE_FILES = ("list.c", "listview.c", "panelgroup.c", "string.c", "window.c")
SECTIONS = {"NAME", "SUPERCLASS", "DESCRIPTION", "SYNOPSIS", "FUNCTION",
            "INPUTS", "TAGS", "RESULT", "NOTES", "EXAMPLE", "BUGS",
            "SEE ALSO", "INTERNALS", "HISTORY", "METHODS", "ATTRIBUTES"}
HEADER = re.compile(r"^/\*{6}\s*(?P<class_name>[A-Za-z][A-Za-z0-9_]*)\.mui/"
                    r"(?P<symbol>MUI[ACM]_[A-Za-z0-9_]+)\s+\*+\s*$", re.M)


def _candidate_source_files(source_dir):
    """Keep required historical sources and discover additional native MUI blocks."""
    root = Path(source_dir)
    if not root.is_dir():
        raise FileNotFoundError(root)
    required = tuple(SOURCE_FILES)
    for name in required:
        path = root / name
        if not path.is_file() or path.is_symlink():
            raise FileNotFoundError(path)
    additional = []
    for path in sorted(root.glob("*.c")):
        if path.is_symlink():
            raise ValueError(f"Symlinked MUI source requires explicit ownership: {path}")
        if path.name in required:
            continue
        if HEADER.search(path.read_text(encoding="latin-1")):
            additional.append(path.name)
    return required + tuple(additional)

def read_mui_docs(source_dir):
    """Extract MUI class AutoDocs from the selected C source files.

    Read five mandatory Latin-1 source files. Return ``(class, symbol,
    sections)`` tuples, rejecting unterminated comments, duplicate sections,
    incorrect declared symbols, and duplicate symbols with ``ValueError``.
    Missing source files raise ``FileNotFoundError``.
    """
    result = []
    for filename in _candidate_source_files(source_dir):
        path = Path(source_dir) / filename
        if not path.is_file():
            raise FileNotFoundError(path)
        source = path.read_text(encoding="latin-1")
        for match in HEADER.finditer(source):
            end = source.find("*/", match.end())
            if end < 0:
                raise ValueError(f"Unterminated MUI AutoDoc: {path}: {match['symbol']}")
            current, sections = None, {}
            for line in source[match.end():end].splitlines():
                line = re.sub(r"^\s*\*(?: ?)", "", line).rstrip()
                if re.fullmatch(r"\*+", line.strip()):
                    continue
                heading = line.strip()
                if heading in SECTIONS:
                    if heading in sections:
                        raise ValueError(f"Repeated MUI section {heading}: {match['symbol']}")
                    current = heading
                    sections[heading] = []
                elif current:
                    sections[current].append(line)
            sections = {k: "\n".join(v).strip("\n") for k, v in sections.items()}
            names = sections.get("NAME", "").strip().splitlines()
            if not names:
                raise ValueError(f"Missing MUI AutoDoc NAME: {path}: {match['symbol']}")
            declared = names[0].split(" --", 1)[0].split(" (", 1)[0].strip()
            if declared != match["symbol"]:
                raise ValueError(f"MUI AutoDoc symbol mismatch: {path}: {match['symbol']} vs {declared}")
            result.append((match["class_name"], match["symbol"], sections))
    symbols = [symbol for _, symbol, _ in result]
    if len(symbols) != len(set(symbols)):
        raise ValueError("Duplicate MUI AutoDoc symbol")
    return result

def write_mui_docs(source_dir, target_dir):
    """Generate per-class ReST pages and an index for MUI AutoDocs.

    Skip NAME, INTERNALS, and HISTORY sections in output, render SYNOPSIS
    as literal text, and write UTF-8 files. Return the entry and class counts.
    """
    docs = read_mui_docs(source_dir)
    target = Path(target_dir)
    target.mkdir(parents=True, exist_ok=True)
    classes = defaultdict(list)
    for class_name, symbol, sections in docs:
        classes[class_name].append((symbol, sections))
    index = ["MUI Class Reference", "===================", "",
             ".. Generated from AROS source. Do not edit.", ""]
    for class_name in sorted(classes):
        title = f"{class_name}.mui"
        lines = [title, "=" * len(title), "",
                 ".. Generated from AROS source. Do not edit.", ""]
        for symbol, sections in sorted(classes[class_name]):
            lines.extend([symbol, "-" * len(symbol), ""])
            for heading, body in sections.items():
                if heading in ("NAME", "INTERNALS", "HISTORY") or not body.strip():
                    continue
                lines.extend([heading.title(), "~" * len(heading), ""])
                if heading == "SYNOPSIS":
                    lines.extend(["::", ""] + ["   " + x for x in body.splitlines()])
                else:
                    lines.extend(["| " + x for x in body.splitlines()])
                lines.append("")
        filename = class_name.lower() + ".en.rst"
        (target / filename).write_text("\n".join(lines) + "\n", encoding="utf-8")
        index.append(f"* `{title} <{class_name.lower()}>`_ ({len(classes[class_name])} entries)")
    (target / "index.en.rst").write_text("\n".join(index) + "\n", encoding="utf-8")
    return len(docs), len(classes)
