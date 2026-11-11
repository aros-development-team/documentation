# Copyright (C) 2026, The AROS Development Team. All rights reserved.
"""Generate the MUI class reference independently of library function AutoDocs."""
import re
from collections import defaultdict
from pathlib import Path

SOURCE_FILES = ("list.c", "listview.c", "panelgroup.c", "string.c", "window.c")
SECTIONS = {"NAME", "SUPERCLASS", "DESCRIPTION", "SYNOPSIS", "FUNCTION",
            "INPUTS", "TAGS", "RESULT", "NOTES", "EXAMPLE", "BUGS",
            "SEE ALSO", "INTERNALS", "HISTORY", "METHODS", "ATTRIBUTES"}
HEADER = re.compile(r"^/\*{6}\s*(?P<class_name>[A-Za-z][A-Za-z0-9_]*)\.(?P<family>mui|mcc)/"
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

def _mcc_source_files(source_root):
    """Discover inline MCC AutoDocs in AROS C files, never in .doc mirrors.

    This scan is confined to AROS' Zune class subtree. The selected source
    files and symbols are validated by read_mui_docs before output is written.
    """
    root = Path(source_root)
    if not root.is_dir():
        raise FileNotFoundError(root)
    aros_root = root.parents[2].resolve()
    resolved = root.resolve()
    if not resolved.is_relative_to(aros_root):
        raise ValueError(f"MCC root escapes AROS: {root}")
    selected = []
    for path in sorted(root.rglob("*.c")):
        if not path.resolve().is_relative_to(aros_root):
            raise ValueError(f"MCC source escapes AROS: {path}")
        source = path.read_text(encoding="latin-1")
        if ".mcc/" not in source:
            continue
        if any(match["family"] == "mcc" for match in HEADER.finditer(source)):
            selected.append(path)
    return tuple(selected)


def read_mui_docs(source_dir, mcc_root=None):
    """Extract source-inline MUI and MCC class contracts.

    Preserve the five required muimaster sources. If mcc_root is provided,
    additionally read inline MCC AutoDocs from Zune C sources, never from
    parallel .doc documents. Return ``(class, symbol, sections)`` tuples.
    Reject missing files, malformed sections and duplicate symbols.
    """
    result = []
    mui_sources = tuple(Path(source_dir) / name for name in _candidate_source_files(source_dir))
    mcc_sources = _mcc_source_files(mcc_root) if mcc_root is not None else ()
    for path in mui_sources + mcc_sources:
        if not path.is_file():
            raise FileNotFoundError(path)
        source = path.read_text(encoding="latin-1")
        for match in HEADER.finditer(source):
            if match["family"] != ("mcc" if path in mcc_sources else "mui"):
                continue
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
            class_name = match["class_name"]
            if match["family"] == "mcc":
                class_name += ".mcc"
            result.append((class_name, match["symbol"], sections))
    # PR284_MUI_CLASS_SCOPED_UNIQUENESS_V1
    seen_class_symbols = set()
    for class_name, symbol, _ in result:
        key = (class_name.casefold(), symbol.casefold())
        if key in seen_class_symbols:
            raise ValueError(
                f"Duplicate MUI AutoDoc symbol in {class_name}: {symbol}")
        seen_class_symbols.add(key)
    return result

def write_mui_docs(source_dir, target_dir, mcc_root=None):
    """Generate source-bound MUI/MCC class ReST pages and their index.

    Preserve existing .mui page paths and render MCC classes to distinct
    -mcc pages. Skip NAME, INTERNALS, and HISTORY and render SYNOPSIS
    literally. Return the generated entry and class counts.
    """
    docs = read_mui_docs(source_dir, mcc_root)
    target = Path(target_dir)
    target.mkdir(parents=True, exist_ok=True)
    classes = defaultdict(list)
    for class_name, symbol, sections in docs:
        classes[class_name].append((symbol, sections))
    index = ["MUI Class Reference", "===================", "",
             ".. Generated from AROS source. Do not edit.", ""]
    for class_name in sorted(classes):
        title = class_name if class_name.endswith(".mcc") else f"{class_name}.mui"
        slug = class_name.lower().replace(".mcc", "-mcc")
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
        filename = slug + ".en.rst"
        (target / filename).write_text("\n".join(lines) + "\n", encoding="utf-8")
        index.append(f"* `{title} <{slug}>`_ ({len(classes[class_name])} entries)")
    (target / "index.en.rst").write_text("\n".join(index) + "\n", encoding="utf-8")
    return len(docs), len(classes)
