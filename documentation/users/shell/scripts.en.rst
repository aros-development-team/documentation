=======
Scripts
=======

:Authors:   Matthias Rustler
:Copyright: Copyright (C) 2009, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Draft


.. Contents::


Introduction
------------
Scripts are programs which are built of commands. Those commands can
be Shell commands which you can find in the ``C:`` directory or any
other AROS application which can be started from Shell. Example::

    CD ram:
    DIR
    sys:tools/editor

You can create the scripts with any text editor,
e.g. ``sys:tools/Editor``.

The default storage location for scripts is ``S:``, but you can use any
directory. The search path of the Shell is used to find the script.


Execution
---------
Scripts can be executed from Shell with the Execute_ command, e.g.::

    execute myscript

Alternatively, you can set the ``s`` bit. This allows to execute
the script by just entering the name, e.g.::

    protect myscript s add
    myscript

You can start scripts from Wanderer if you add an icon to it and
set the default tool to ``c:iconx``.


Special script characters
-------------------------
``;``
    Comments; anything following the ``;`` is ignored, e.g.::

        ASSIGN foo: sys:c ; Create an assign

``$``
    a) Expand environment variables, e.g.::

        ECHO "Current language is $LANGUAGE"

    b) Within brackets: set default value for parameters. The
       brackets can be changed with the dot commands
       .BRA and .KET::

        <param$default>

    The ``$`` can be changed with the .DOLLAR command.
    To specify parameters, there must be a .KEY command in the script.


``$$``
    ``<$$>`` is replaced by the current process number.


Dot commands
------------
Dot commands are keywords which start with a dot. Their usage
will be explained in the chapter about `parameter substitution`_.
Dot commands are case insensitive.

``.KEY <template>``
    Argument template. The arguments must be separated by comma,
    no space is allowed. You can add ``/A`` and ``/K`` to
    the arguments.

    ``/A``
        required argument.
    ``/K``
        argument name must be written.

    Example::

        .KEY FILENAME/A,TO/K

``.DOT <char>``
    Changes the dot character to the given argument.

``.BRA <char>``
    Changes the character for the opening bracket.
    Default is ``<``.

``.KET <char>``
    Changes the character for the closing bracket.
    Default is ``>``.

``.DOLLAR <char>``
    Changes the character for the dollar sign.

``.DEF <parameter> <default value>``
    Sets default value for a parameter.

``.<space><comment>``
    Comment line, better use ``;``.

``.``
    Empty comment line.


Parameter substitution
----------------------
Scripts can be called with parameters. To be able to handle the
parameters the script must start with a dot command (preferable .KEY)::

    .KEY text/A
    .BRA {
    .KET }
    ECHO "{text}"

.. Note::
    Because of a bug in the Shell you always have to
    overwrite the angle brackets ``<``, ``>`` with .BRA and .KEY
    (a good choice would be curly brackets ``{``, ``}``).

Another reason for always overwriting the angle brackets is to
avoid confusion with input/output redirection.

.. Hint::
    Enclose parameters in double quotes to avoid troubles
    when the parameter contains white-space, as white-space is used
    for parameter separation, e.g.: use ``TYPE "{FILE}"`` rather
    than ``TYPE {FILE}``.


Condition flags
---------------
Commands are returning a number which indicates condition of
execution.

``0...4``
    Success.

``5...9``
    Warn.

``10...19``
    Error.

``20...``
    Failure.

Shell commands return only the values 0, 5, 10 and 20. In the Shell
a limit indicates for what returned value a script should stop
executing. By default this limit is 10, but it can be changed with
the FailAt_ command.

Some query commands use the flag to tell about the result, e.g.::

    ASK "Continue?"
    IF WARN              ; A WARN means a Yes.
        COPY a.dat b.dat
    ENDIF


Conditional blocks
------------------
The If_ command allows to define blocks which are only executed
if the given conditions are met. Some examples::

    IF WARN
    IF ERROR
    IF FAILURE
    IF NOT EXISTS "ram:abc"
    IF $var EG "FOOBAR"
        ...
    ENDIF

Example with Else_ specifying an alternative block::

    IF EXISTS "ram:file.txt"
        TYPE "ram:file.txt"
    ELSE
        ECHO "File doesn't exist"
    ENDIF


Skipping
--------
With the Skip_ command, you can jump to labels which you have defined
with Lab_::

    IF EXISTS "ram:file.txt"
        SKIP message
    ELSE
        ECHO "File doesn't exist."
        QUIT
    ENDIF
    LAB message
    ECHO "File exists."


Interactivity
-------------
Some commands interrupt the script execution until the user has
given some input.

The Ask_ commands prints a message and sets the condition flag to
WARN if the input was "y(es)".

RequestChoice_, RequestFile_ and RequestString_ print their
results to the standard output. To be able to process it you have
to redirect their output to a file, e.g.::

    REQUESTSTRING >ENV:reqstrres "Enter a string"

Storing in ENV: has the advantage that the file can be handled as
an environment variable, as explained below.


Environment variables
---------------------
Variables can be set with Set_ and SetEnv_.

Set_ creates local variables which exist only in the current Shell
and all Shells created from the current Shell.

SetEnv_ creates global variables that are available in all Shells.
The content is stored in files in the ENV: directory with the
variable name as filename.

To use the variable's contend you have to prefix it with a
``$`` sign, e.g.::

    ECHO "Contend $reqstrres"

This isn't limited to scripts. You can use environment variables
directly in the Shell.

.. Hint::
    Enclose expanded variables in double quotes to avoid troubles
    when the variable may contain white-space, as white-space is
    used for parameter separation, e.g.: better use ``TYPE "$FILE"``
    than ``TYPE $FILE``.

Some variables are handled by the Shell:

``ECHO``
    Setting it to ``ON`` (``SET ECHO ON``) enables command echoing,
    i.e. all commands are printed before they are executed. This
    can be used for debugging.


Quitting
--------
You can use the Quit_ command if you want to exit the script before
it has reached the last line.


Automatic script creation
-------------------------

The LFORMAT option of the List_ command makes it possible to format
the output in such a way that it can be executed as a script::

    LIST #? TO T:typeall LFORMAT="TYPE *"%P%N*""
    EXECUTE T:typeall

The reason for \*" is to ensure that the paths in the generated file
are enclosed in double quotes.


Special scripts
---------------
During booting, AROS executes the script ``s:startup-sequence``.
That file is supposed to be read-only. If you have your own commands
that you want to be called during start-up, add them to the file
``s:user-startup``. The script ``s:shell-startup`` is executed
every time you open a new Shell.


.. _addbuffers: addbuffers
.. _adddatatypes: adddatatypes
.. _alias: alias
.. _ask: ask
.. _assign: assign
.. _avail: avail
.. _beep: beep
.. _break: break
.. _cd: cd
.. _changetaskpri: changetaskpri
.. _conclip: conclip
.. _copy: copy
.. _copytopar: copytopar
.. _date: date
.. _decoration: decoration
.. _delay: delay
.. _delete: delete
.. _dir: dir
.. _diskchange: diskchange
.. _echo: echo
.. _else: else
.. _endcli: endcli
.. _endif: endif
.. _endshell: endshell
.. _endskip: endskip
.. _eval: eval
.. _execute: execute
.. _failat: failat
.. _fault: fault
.. _filenote: filenote
.. _get: get
.. _getenv: getenv
.. _iconx: iconx
.. _identify: identify
.. _if: if
.. _info: info
.. _install-grub2-i386-pc: install-grub2-i386-pc
.. _install-i386-pc: install-i386-pc
.. _install: install
.. _introduction: introduction
.. _iprefs: iprefs
.. _join: join
.. _lab: lab
.. _list: list
.. _lock: lock
.. _makedir: makedir
.. _makelink: makelink
.. _mount: mount
.. _newshell: newshell
.. _partition: partition
.. _path: path
.. _prompt: prompt
.. _protect: protect
.. _quit: quit
.. _quitaros: quitaros
.. _reboot: reboot
.. _relabel: relabel
.. _rename: rename
.. _requestchoice: requestchoice
.. _requestfile: requestfile
.. _requeststring: requeststring
.. _run: run
.. _search: search
.. _set: set
.. _setclock: setclock
.. _setdate: setdate
.. _setdefaultfont: setdefaultfont
.. _setenv: setenv
.. _setkeyboard: setkeyboard
.. _shell: shell
.. _shutdown: shutdown
.. _skip: skip
.. _sort: sort
.. _stack: stack
.. _status: status
.. _type: type
.. _unalias: unalias
.. _unset: unset
.. _unsetenv: unsetenv
.. _uuidgen: uuidgen
.. _version: version
.. _wait: wait
.. _which: which
.. _why: why

