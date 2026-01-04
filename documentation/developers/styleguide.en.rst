AROS C/C Style Guide (KR-4)
===========================

Scope
-----

This guide applies to all ``.c`` and ``.h`` files. If there is a conflict
between local style and this guide, this guide wins.

1) Indentation and whitespace
-----------------------------

Indentation
~~~~~~~~~~~

* Indent with **4 spaces** per level.
* Do **not** use tabs for indentation.

Example::

    if (cond) {
        do_work();
    }

Operator spacing
~~~~~~~~~~~~~~~~

* Put spaces around binary operators.

Examples::

    a = b + c;
    mask = (x << 2) | y;
    ptr = base + offset;

* Unary operators remain tight where idiomatic.

Examples::

    i++;
    --j;
    p = &obj;
    q = *p;

Parentheses spacing
~~~~~~~~~~~~~~~~~~~

* Do not add spaces immediately inside parentheses.

Examples::

    if (a == b)             /* not: if ( a == b ) */
    func(x, y);             /* not: func( x, y ) */

2) Braces and block layout
--------------------------

K&R brace style
~~~~~~~~~~~~~~~

* Opening brace on the **same line** as the control statement or signature.
* Closing brace on its own line.

Example::

    static int foo(int x)
    {
        if (x > 0) {
            return x;
        }

        return 0;
    }

``else`` placement
~~~~~~~~~~~~~~~~~~

* ``else`` follows the closing brace on the same line.

Example::

    if (ok) {
        do_a();
    } else {
        do_b();
    }

3) ``do { } while ();`` formatting
----------------------------------

* Attach the ``while (...)`` to the closing brace line.

Example::

    do {
        work();
    } while (cond);

4) Pointer alignment
--------------------

* The ``*`` binds to the **name**, not the type.

Examples::

    char *p;
    const struct Foo *foo;
    struct Node *node;
    void (*fn)(int x);

* For multiple declarators, keep the ``*`` with each name.

Example::

    char *a, *b;

5) Line length
--------------

* Maximum line length is **120 columns**.
* Wrap long expressions, conditions, and function calls.

Recommended wrapping patterns
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Conditions::

    if (really_long_condition &&
        another_condition &&
        final_condition) {
        ...
    }

Function calls::

    rc = some_function(arg1, arg2, arg3,
                       arg4, arg5);

Logging and long format strings::

    bug("%s: dev=%u ep=%u state=%lu\n",
                __func__, dev, ep, state);

Guidance:

* Break after logical operators (``&&``, ``||``) when wrapping conditions.
* For function calls, align continued arguments under the first argument or use
  a consistent continuation indent.

6) Line endings
---------------

* Files must use Unix **LF** line endings.
* Avoid committing CRLF.

7) Statements and blank lines
-----------------------------

* One statement per line.
* Use blank lines to separate logical sections within a function.
* Avoid trailing whitespace.
* Prefer braces for control blocks to reduce diff-risk.

Preferred::

    if (error) {
        return FAIL;
    }

8) Headers and includes
-----------------------

* Group includes:

  1. Local header for the ``.c`` file (if applicable)
  2. System/SDK headers
  3. Project headers

* Separate include groups with a blank line.
* Prefer forward declarations in headers where possible to reduce include
  coupling.

9) Formatting workflow
----------------------

* Format files consistently before submitting changes.
* Avoid mixing large reformat-only diffs with functional changes unless
  necessary.
