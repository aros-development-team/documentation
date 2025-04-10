=======================
Working with Git
=======================

:Authors:   The AROS Development Team
:Copyright: Copyright (C) 1995-2019, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.
:Abstract:
    Git, is a version control tool which maintains a database of the files in a
    project. With Git, it is possible to inspect and control the changes applied
    to any specific file: what changes were made and when, who did those changes,
    what the purpose of some change was (as long as there is a log entry), possibly reverting bad changes
    made, merging changes from several different people and much more.

    In essence, it makes it *much* easier for a group of people to
    collaborate on a common project, by allowing everyone to know what is
    happening to the files, making sure that people do not trash each other's
    changes by mistake, and providing the means to do this over the Internet.
    For this reason, we use it to collaborate on AROS.


.. Contents::



Introduction
============

GitHub__ hosts the AROS central "repository", which is the main
database containing the published common codebase of the project.

__ https://github.com/

Individual developers are encouraged to create forks of the project and
issue pull requests to have changes merged back into the project. This allows
them to have their own "working copies", which are local
copies of the database from a specific time, together with local changes
that haven't yet been pushed to the central repository.

When a developer wants to share his changes with the rest of the team, he simply
"commits" his changes to the fork using the client program, and issues a pull
request to the main repository.


The software
============

Unix
----

If you are running Linux, FreeBSD or any other modern Unix clone, you
simply need to install the official Git software, for your OS.
All common Linux distributions come with Git packaged.

AmigaOS
-------

If you are running AmigaOS, you will need a TCP/IP stack and some Git port
installed.

Windows
-------

If you run Microsoft Windows, you can use the TortoiseGit__ Git client,
especially if you like using Windows Explorer. This program is Open
Source and free, feature-rich and well-supported. Please do make sure
to set the eol style to "check out as is - commit as is" when installing,
otherwise you can *break* code generation.

__ https://tortoisegit.org/


MacOS X
-------


Logging into the server
=======================

Unlike CVS, you don't have to log into the server. Instead, when Git needs to
know your login and password, it will ask them.

.. Note::

    The AROS repository is running GitHub hosted Git server, which
    means that you need to `apply for access to it`__ to be able to
    collaborate in the development.

__ contribute#joining-the-team



Getting the AROS sources
========================

To get a copy of the AROS sources you use the "clone" command, like this::

    > git clone https://github.com/aros-development-team/AROS.git

This will create a directory called AROS and populate it with all the
sources, which might take quite some time if you have a slow network
connection.

In addition to the main repository, there are also the "contrib" and "ports"
repositories, containing third-party programs that have been ported to AROS.
They can be checked out to include in the AROS build as follows::

    > cd AROS
    > mkdir contrib
    > mkdir ports
    > git clone https://github.com/aros-development-team/contrib.git
    > git clone https://github.com/aros-development-team/ports.git

.. Tip::

    After the clone, Git will remember where the source came from.

Preparing the sources to build
==============================

After cloning the repository(s), git must be told to initialize the
submodules that are included in the cloned repository. To do this
run the following command in the cloned tree

    > git submodule update --init --recursive


Getting the extra sources
=========================

Apart from the AROS main sources which we checked out in the previous
section, there are also other things on the Git server not directly related
to the core of the operating system. For example, the "binaries" module which
contains images like screenshots, backdrops and similar, and the
"documentation" module which contains the sources to the website.



Updating the sources
====================

After having checked out the sources, you will probably want to periodically
update them to get the latest changes the other developers have committed.
For this you use the "pull" command::

    > cd AROS
    > git pull

This will merge any changes that other developers have made into your
sources and also check out new directories and files that have been added.
If someone committed changes to a file that you also have changed locally,
Git will try  to merge the changes automatically. If both of you changed the
same lines Git might fail in merging the sources. When this happens, Git
will complain and put **both** versions in the file separated by ``<<<<``.
You need to edit the file and resolve the conflict manually. Once this is
done, you also need to use the "git add" and "git commit" command to tell
Git that all is well.

.. Warning::

    Just because Git successfully merged the other developers changes with
    yours doesn't mean everything is fine. Git only cares about the
    *textual* content; there could still be *logical* conflicts after the
    merge (e.g. the other developer might have changed the semantics of some
    function that you use in your changes). You should always inspect files
    that were merged and see if they still makes sense.



Committing changes
==================

If you have made some changes and feel that you want to share your work with
the other developers, you should commit your changes::

    > git add <file>
    > git commit -m "import changes"
    > git push

If you have forked you have to create pull requests as explained in the Introduction_.


Further reading
===============

+ `Pro Git book`__
+ `Github help`__
+ `Git documentation`__

__ https://git-scm.com/book/en/v2
__ https://support.github.com/
__ https://git-scm.com/doc


Sources
=======

Those interested in the sources only, should also be able to download them
from the Sources section of the `Nightly builds`__ page.

__ ../../nightly1
