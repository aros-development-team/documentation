# Copyright (C) 2026, The AROS Development Team. All rights reserved.
"""Load independent AutoDoc source declarations for the existing generator."""

import configparser
import re
from dataclasses import dataclass
from pathlib import Path, PurePosixPath
from typing import Optional, Tuple


_OUTPUT = re.compile(r"[a-z][a-z0-9_.-]*\Z")
_ALLOWED_KEYS = frozenset(("kind", "path", "files", "output", "expected_symbols"))
_KINDS = frozenset(("library", "hidd"))


@dataclass(frozen=True)
class SourceDeclaration:
    """Describe one validated C source selection and its output name.

    Origin is the INI declaration; directory and filenames select
    the source files; kind selects the parser and output names
    the generated page.
    """
    origin: Path
    kind: str
    directory: Path
    filenames: Optional[Tuple[str, ...]]
    output: str
    expected_symbols: Optional[Tuple[str, ...]] = None


def _relative_path(value, origin, field, allow_separator=True):
    """Reject traversal, absolute paths and file-list directory components."""
    if not value or "\\" in value or "\x00" in value:
        raise ValueError(f"{origin}: invalid {field}: {value!r}")
    p = PurePosixPath(value)
    if p.is_absolute() or any(part in (".", "..") for part in value.split("/")):
        raise ValueError(f"{origin}: invalid {field}: {value!r}")
    if not allow_separator and "/" in value:
        raise ValueError(f"{origin}: {field} must be a filename: {value!r}")
    return p


def _within_source(root, relative, origin):
    """Resolve a declared path without permitting source-tree escape."""
    path = root.joinpath(*relative.parts)
    if not path.resolve().is_relative_to(root.resolve()):
        raise ValueError(f"{origin}: source escapes AROS root: {relative}")
    return path


def load_source_registry(registry_dir: Path, source_root: Path) -> Tuple[SourceDeclaration, ...]:
    """Validate declarations before reading any API source or writing output.

    Each .ini is an independent single-source declaration. Directory scans are
    deliberately non-recursive; file subsets use exact names, never globs.
    """
    registry_dir = Path(registry_dir)
    source_root = Path(source_root)
    if not source_root.is_dir():
        raise FileNotFoundError(f"AROS source root unavailable: {source_root}")
    if not registry_dir.is_dir():
        raise FileNotFoundError(f"AutoDoc registry directory unavailable: {registry_dir}")
    if registry_dir.is_symlink():
        raise ValueError(f"AutoDoc registry directory is a symlink: {registry_dir}")

    sources = []
    outputs = {}
    source_files = {}
    for config_file in sorted(registry_dir.glob("*.ini")):
        if config_file.is_symlink() or not config_file.is_file():
            raise ValueError(f"Invalid source registry entry: {config_file}")
        parser = configparser.ConfigParser(interpolation=None, strict=True)
        parser.optionxform = str
        with config_file.open("r", encoding="utf-8") as inp:
            parser.read_file(inp)
        if parser.sections() != ["source"] or parser.defaults():
            raise ValueError(f"{config_file}: expected exactly one [source] section")
        values = dict(parser.items("source", raw=True))
        if set(values) - _ALLOWED_KEYS or not {"kind", "path", "output"}.issubset(values):
            raise ValueError(f"{config_file}: invalid or missing source keys")
        kind = values["kind"].strip()
        if kind not in _KINDS:
            raise ValueError(f"{config_file}: unsupported AutoDoc kind {kind!r}")
        rel = _relative_path(values["path"].strip(), config_file, "path")
        directory = _within_source(source_root, rel, config_file)
        if not directory.is_dir():
            raise ValueError(f"{config_file}: missing source directory: {directory}")
        output = values["output"].strip()
        if not _OUTPUT.fullmatch(output):
            raise ValueError(f"{config_file}: invalid output name {output!r}")
        if output in outputs:
            raise ValueError(f"{config_file}: duplicate output {output!r} in {outputs[output]}")
        outputs[output] = config_file

        if "files" in values:
            raw_names = values["files"].strip()
            if not raw_names:
                raise ValueError(f"{config_file}: empty files list")
            names = tuple(name.strip() for name in raw_names.split(","))
            if len(set(names)) != len(names):
                raise ValueError(f"{config_file}: duplicate source filename")
            for name in names:
                _relative_path(name, config_file, "files", allow_separator=False)
                if not name.endswith(".c"):
                    raise ValueError(f"{config_file}: expected .c filename: {name!r}")
            filenames = names
        else:
            filenames = None
            names = tuple(p.name for p in sorted(directory.glob("*.c")))

        if not names:
            raise ValueError(f"{config_file}: no source .c files selected")
        for name in names:
            path = directory / name
            if not path.is_file():
                raise ValueError(f"{config_file}: missing source: {path}")
            normalized = path.resolve()
            if not normalized.is_relative_to(source_root.resolve()):
                raise ValueError(f"{config_file}: source file escapes AROS root: {path}")
            if normalized in source_files:
                raise ValueError(f"{config_file}: duplicate source {path}, registered by {source_files[normalized]}")
            source_files[normalized] = config_file

        expected_symbols = None
        if "expected_symbols" in values:
            expected_symbols = tuple(value.strip() for value in
                                     values["expected_symbols"].split(","))
            if (not expected_symbols or
                    any(not symbol or "\n" in symbol or "\r" in symbol
                        for symbol in expected_symbols) or
                    len(set(expected_symbols)) != len(expected_symbols)):
                raise ValueError(f"{config_file}: invalid expected_symbols")
        sources.append(SourceDeclaration(config_file, kind, directory, filenames,
                                         output, expected_symbols))
    return tuple(sources)
