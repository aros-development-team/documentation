# AutoDoc source declarations

The generator loads every `*.ini` file in this directory, in filename order.
Each file declares one independent source group; no central list is edited.

```ini
[source]
kind = library
path = arch/arm-native/soc/broadcom/2708/sdio
files = sdio_init.c
output = sdio
```

`kind` is `library` or `hidd`. `path` is relative to the AROS source root.
`files` is an optional comma-separated list of exact `.c` basenames;
omitting it scans the directory's immediate `.c` files, not subdirectories.
`output` selects the page name. Library entries enter the function index;
HIDD entries retain their separate HIDD output format.

Missing sources, unknown options, duplicate selections, output collisions
and unsupported kinds fail the build. New independent source groups add a
new `.ini` file; changes to parser semantics belong in separate patches.
`expected_symbols` is an optional comma-separated *exact* AutoDoc entry
inventory. When present, generation fails on missing, renamed, duplicated or
unexpected parsed entries. It is checked before any output for that declaration
is written; it is not a complete inventory of unselected AROS source files.
