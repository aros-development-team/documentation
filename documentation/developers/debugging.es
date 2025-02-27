=================================
Manual para la Depuración de AROS
=================================

:Authors:   David Le Corfec
:Copyright: Copyright © 2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Work in progress.

Este manual explica las varias opciones para la depuración de AROS.

.. Contents::


------------
Introducción
------------

Para la mayoría de los desarrolladores, la manera más fácil para desarrollar
y depurar es usar el puerto de AROS hosted en Linux (que es la 
configuración más popular) o en BSD. De esta manera puedes usar GDB en Linux
para depurar AROS. Necesitarás pasar ``--enable-debug`` al guión de
configure antes de compilar AROS. Ten cuidado, las informaciones de 
depuración pueden decuplicar el tamaño de disco ocupado por el árbol de AROS.

Los desarrolladores de hardware de bajo nivel usarán de preferencia la
salida de depuración en serie/serial en el puerto nativo.

Los desarrolladores de aplicación necesitarán asegurarse que sus programas
liberan todos los recursos que tomen. AROS proporciona algunas herramientas
para hacer esto.

-------------------------------------
Imprimir las sentencias de depuración
-------------------------------------

::

    #define DEBUG 1
    #include <aros/debug.h>
    ...
    D(bug("value1=%ld, path=%s", value, path));

``D()`` se expandirá a nada si ``DEBUG`` es 0 o indefinido.
El uso es el mismo que de ``printf()``.
En el AROS hosted, la salida será mostrada en la consola donde AROS
fue iniciado.

------------------------------
Con AROS alojado: Usando GDB
------------------------------

Puedes ejecutar AROS en GDB, o usar GDB después de que AROS ha terminado 
y deja un vaciado de la memoria. No olvides compilar AROS con la 
depuración habilitada (``./configure --enable-debug``).


La depuración en vivo
=====================

Inicia GDB igual que abajo::

    > cd /AROS/bin/linux-i386/AROS/
    > gdb aros
    GNU gdb 6.0-debian
    Copyright 2003 Free Software Foundation, Inc.
    GDB is free software, covered by the GNU General Public License, and you are
    welcome to change it and/or distribute copies of it under certain conditions.
    Type "show copying" to see the conditions.
    There is absolutely no warranty for GDB.  Type "show warranty" for details.
    This GDB was configured as "i386-linux"...
    (gdb) 

Luego ejecuta AROS con::

    (gdb) r
    Starting program: /AROS/bin/linux-i386/AROS/aros 
    (... lots of debug output follow ...)
    (... sigue mucha salida de depuración ...)

Puedes pasarle argumentos a AROS ubicándolos después del comando ``r``.
Usa Ctrl-C en el shell para interrumpir AROS y volver al prompt de GDB.
Usa ``help`` para tener ayuda, o ``q`` para salir :)


La depuración post-mortem
=========================

Primero, tienes que habilitar la generación del vaciado de la memoria,
usando, por ej. ulimit si el shell es Bash. Después ejecuta AROS y
genera el vaciado de la memoria::

    > cd /AROS/bin/linux-i386/AROS/
    > ulimit -c unlimited # see your shell manual to enable core dumps
    > ./aros
    Quit (core dumped)

Ahora puedes iniciar GDB, especificando el nombre del ejecutable de AROS y 
el nombre del archivo con la memoria volcada::

    > gdb aros core
    GNU gdb 6.0-debian
    Copyright 2003 Free Software Foundation, Inc.
    GDB is free software, covered by the GNU General Public License, and you are
    welcome to change it and/or distribute copies of it under certain conditions.
    Type "show copying" to see the conditions.
    There is absolutely no warranty for GDB.  Type "show warranty" for details.
    This GDB was configured as "i386-linux"...
    Core was generated by `aros'.
    Program terminated with signal 3, Quit.
    Reading symbols from /usr/X11R6/lib/libX11.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libX11.so.6
    Reading symbols from /usr/X11R6/lib/libXext.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libXext.so.6
    Reading symbols from /lib/libc.so.6...done.
    Loaded symbols for /lib/libc.so.6
    Reading symbols from /lib/libdl.so.2...done.
    Loaded symbols for /lib/libdl.so.2
    Reading symbols from /lib/ld-linux.so.2...done.
    Loaded symbols for /lib/ld-linux.so.2
    #0  0x40125607 in sigsuspend () from /lib/libc.so.6
    (gdb)


GDG (los comandos básicos)
==========================

El comando ``help`` entrega la ayuda para todos los comandos de GDB. Invócalo
directamente para tener una lista del tema de ayuda conocido, o sigue un
tema o el nombre (o abreviación) de un comando.
Se te anima a leer la ayuda online de todos los comandos que
brevemente serán presentados aquí.

El comando ``bt`` (backtrace) imprime un backtrace de todos los marcos
de la pila. Aquí está un backtrace después de interrumpir AROS con
Ctrl-C en la consola GDB::

    Program received signal SIGINT, Interrupt.
    0x40125607 in sigsuspend () from /lib/libc.so.6
    (gdb) bt
    #0  0x40125607 in sigsuspend () from /lib/libc.so.6
    #1  0x080531d5 in idleTask (sysBase=0x40231290) at idletask.c:23
    #2  0x08052ba7 in Exec_NewAddTask (task=Cannot access memory at address 0x8
    ) at newaddtask.c:280
    Previous frame inner to this frame (corrupt stack?)
    (gdb) 

El marco más interno es el #0.

Para imprimir el valor de una expresión accesible del marco actual,
usa ``p`` (print, imprimir)::

    (gdb) p SysBase
    $1 = (struct ExecBase *) 0x40231290

El comando imprimir de GDB es muy poderoso.
Entiende la sintaxis de C, así que puedes imprimir cualquier expresión
válida::

    (gdb) p SysBase->IntVects[2]
    $2 = {iv_Data = 0x0, iv_Code = 0x8052f30 <SoftIntDispatch>, iv_Node = 0x4023c528}

También puedes usar ``print`` como una calculadora hexadecimal, como::

    (gdb) p 0x42 + 0xc0de
    $1 = 49440

Para mostrar el resultado en hexadecimal, usa ``p/x`` (fíjate cómo 
puedes llamar una expresión anterior)::

    (gdb) p/x $1
    $2 = 0xc120

Para moverte entre marcos, usa el comando ``f`` (frame, marco)::

    (gdb) f 1
    #1  0x080531d5 in idleTask (sysBase=0x40231290) at idletask.c:23
    23              sigsuspend(&sigs);

Para mostrar diez renglones del código fuente en torno a la posición
actual, usa ``l`` (list), que también se puede usar para mostrar un
renglón específico.

Si estás haciendo la depuración en vivo:

+ Para ejecutar un programa (o volver a ejecutarlo desde el principio)
  hasta que lo interrumpas, o se llegue a un punto de interrupción, o
  se cuelgue, usa el comando ``r`` (run) (con los parámetros opcionales
  que se pasarán al programa);

+ Para pasar las intrucciones de una por vez, usa ``s`` o ``n`` (el último
  procesará las llamadas a subrutinas en un paso);

+ Para situar un punto de interrupción, usa ``b`` seguido del número
  renglón o la función;

+ Para proseguir la ejecución del programa mientras está en el depurador
  usa ``c``.

Usa ``q`` para salir::

    (gdb) q
    The program is running.  Exit anyway? (y or n) y
    >


GDB (específico para AROS)
==========================

Los comandos de GDB específicos para AROS son suministrados en
``/AROS/_gdbinit``, que se instala en ``/AROS/bin/linux-i386/AROS/.gdbinit``.
GDB lee este archivo al iniciarse, y contiene los siguientes comandos::

    findaddr - Muestra el módulo que contiene la dirección dada.
    thistask - Imprime información sobre la tarea en ejecución.
    liblist - Lista las bibliotecas actuales del sistema.
    devlist - Lista los dispositivos actuales del sistema.
    resourcelist - Lista los recursos actuales del sistema.
    residentlist - Lista los residentes del sistema.
    taskready - Lista las tareas actuales listas para ejecutarse.
    taskwait - Lista las tareas que esperan un evento.
    modlist - Lista todos los módulos cargados en la memoria.
    printtaglist - Muestra la taglist dada.

De esta lista, ``findaddr`` es esencial para una apropiada depuración
del código no-ROM (bibliotecas compartidas, aplicaciones...)

Usar findaddr
-------------

Más a menudo querrás depurar bibliotecas o aplicaciones, pero un
backtrace te da una o más direcciones sin resolver::

    Core was generated by `aros'.
    Program terminated with signal 11, Segmentation fault.
    Reading symbols from /usr/X11R6/lib/libX11.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libX11.so.6
    Reading symbols from /usr/X11R6/lib/libXext.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libXext.so.6
    Reading symbols from /lib/libc.so.6...done.
    Loaded symbols for /lib/libc.so.6
    Reading symbols from /lib/libdl.so.2...done.
    Loaded symbols for /lib/libdl.so.2
    Reading symbols from /lib/ld-linux.so.2...done.
    Loaded symbols for /lib/ld-linux.so.2
    #0  0x080c8830 in Intuition_SetAttrsA (object=0x317ceb, tagList=0x402f7504, 
    	IntuitionBase=0x40289dfc) at setattrsa.c:84
    84          result = DoMethodA (object, (Msg)&ops);
    (gdb) bt
    #0  0x080c8830 in Intuition_SetAttrsA (object=0x317ceb, tagList=0x402f7504, 
    	IntuitionBase=0x40289dfc) at setattrsa.c:84
    #1  0x402bd919 in ?? ()
    #2  0x00317ceb in ?? ()
    #3  0x402f7504 in ?? ()
    #4  0x40289dfc in ?? ()
    #5  0x8042bfe0 in ?? ()
    #6  0x404ca36c in ?? ()

Usa ``findaddr`` con cualquier dirección que quieras resolver (probablemente
la más interna)::

    (gdb) findaddr 0x402bd919
    Searching in the loaded modules...
    Address found in System:Tests/Zune/list1, which is loaded at 0x402bd454.
    If this is an executable, its .text section starts at 0x402bd460

Después usarás el comando ``add-symbol-file`` para cargar el archivo
encontrado en la dirección hallada del texto::

    (gdb) add-symbol-file Tests/Zune/list1 0x402bd460
    add symbol table from file "Tests/Zune/list1" at
    	    .text_addr = 0x402bd460
    (y or n) y
    Reading symbols from Tests/Zune/list1...done.
    
Con suerte ha resuelto las direcciones::

    (gdb) bt
    #0  0x080c8830 in Intuition_SetAttrsA (object=0x317ceb, tagList=0x402f7504, 
    	IntuitionBase=0x40289dfc) at setattrsa.c:84
    #1  0x402bd919 in main () at list1.c:107
    #2  0x402bd5d1 in __startup_entry (argstr=0x402bcd24 "\n", argsize=1, 
    	sysbase=0x40232290) at startup.c:102
    #3  0x080580a7 in Dos_RunProcess (proc=0x403f76f0, sss=0x403daac4, 
    	argptr=0x402bcd24 "\n", argsize=1, entry=0x402bd458, DOSBase=0x402a6888)
    	at runprocess.c:123
    #4  0x0806a1c7 in Dos_RunCommand (segList=0x402bd454, stacksize=40960, 
    	argptr=0x402bcd24 "\n", argsize=1, DOSBase=0x402a6888) at runcommand.c:107
    #5  0x40400461 in ?? ()
    #6  0x402bd454 in ?? ()
    #7  0x0000a000 in ?? ()
    #8  0x402bcd24 in ?? ()
    #9  0x00000001 in ?? ()
    #10 0x402a6888 in ?? ()

Así que con suerte puedes encontrar el error::

    (gdb) f 1
    #1  0x402bd919 in main () at list1.c:107
    107             set(3243243, MUIA_Window_Open, TRUE);

Repite para las direcciones restantes que deseas resolver.

Usando thistask
---------------

Muestra información variada de la tarea que se está ejecutando. No sorprende,
son los datos que puedes hallar en ``SysBase->ThisTask``::

    (gdb) thistask 
    Task     SigWait  SigRecvd StkSize   StkUsed Pri Type Name
    -----------------------------------------------------------------------------
    40231fb8 00000000 00000000    40960      872 -128    1 Idle Task


Consejos y trucos
=================


Un punto de interrupción inducido por el programa en i386
---------------------------------------------------------

Si insertas::

    asm("int $3");

en el código C, se generará una trace excepction durante la ejecución.
Puede ser muy útil mientras ejecutas con GDB, para ingresar a la
depuración interactiva cuando una condición específica ocurre::

    if (byteSize == 112)
        asm("int $3");

-----------------
Resource tracking
-----------------

El Resource Tracking igual al de los otros OS no está disponible
en AROS en este momento, así que tendrás que encargarte de liberar
los recursos por tí mismo. Aquí encontrarás algunas herramientas que te
ayudarán a comprobar que tu programa esté limpio.

Siguiendo a la memoria con Mungwall
===================================

Si está configurado con ``--enable-debug``, AROS habilita ``Mungwall``.
que vigila una pequeña zona antes y después de tus asignaciones para verificar
que no escribas fuera de los límites. Esta comprobación se hace en las
rutinas de asignación de memoria, o en cualquier momento si se invoca
``AvailMem(MEMF_CLEAR)``.

La herramienta de línea de comando ``CheckMem`` llama a esta función, e
informa a la salida de depuración (serial para el nativo, o la terminal
para el hospedado). Si no se detecta ninguna violación de límite, informará
la cantidad actual de asignaciones y su tamaño total::

    === MUNGWALL MEMORY CHECK ============
    
    Num allocations: 1579   Memory allocated 3333326

LeakWatch
=========

Ésta es una herramienta tonta pero útil. Caza la memoria
total y los objetos de Exec: las bibliotecas, los dispositivos, las
fuentes, los recursos, los puertos y los semáforos.
Dispara un flush de objetos sin uso que están aún en la memoria para
informar el monto real de memoria después de que algunos recursos son
cerrados.

Lanza ``LeakWatch`` en su propio shell, después usa las siguientes
teclas:

+ ``Ctrl-C`` para salir :)
+ ``Ctrl-D`` para mostrar el estado actual de los recursos
+ ``Ctrl-E`` para mostrar las diferencias de recursos desde que lo lanzaste
+ ``Ctrl-F`` para mostrar las diferencias de recursos desde el último
  momento en que tú apretaste ``Ctrl-F``.

``Ctrl-F`` es la tecla más útil: apriétala antes de ejecutar tu programa,
y después de salir de él. No debería informar ningún recurso. En el caso
opuesto:

+ Verifica que ningún otro programa esté asignando recursos en ese momento.
+ Repite la ejecución para ver si los leaks son consistentes.
+ Estrecha el lugar donde el leak ocurre reduciendo las características
  que usas, después comenta el código.

Si piensas que tu programa disparó un leak en una biblioteca de AROS,
busca un programa de prueba existente o escribe uno pequeño que use
las llamadas que hacen leak, para asegurarte que el leak realmente
viene de allí.

Herramientas misceláneas del CLI
================================

También hay herramientas de depuración más simples que están en ``C:``.


El Shell de AROS
----------------

Tipea en el Shell ``set __debug_mem`` para habilitar los informes de la 
memoria disponible antes y después de cada comando, así como la
diferencia de memoria. En esencia lo mismo que ``LeakWatch`` sólo que 
para la memoria.

Avail
-----

Usa ``Avail`` para mostrar informaciones sobre la memoria. El parámetro
FLUSH forzará que sean expurgados los objetos no usados.

Liblist
-------

Muestra una lista de las bibliotecas que estén abiertas en ese momento como también
alguna información sobre la versión y la cantidad abierta.

Devlist
-------

Lo mismo que ``Liblist``, pero para los Dispositivos de Exec.

Consejos y trucos
=================

La revisión de Mungwall en el planificador
------------------------------------------

Un ingenioso truco de ``Mungwall`` es modificar el planificador
para que llame a ``AvailMem(MEMF_CLEAR)`` en cada conmutación de tarea,
cuando tengas una extraña corrupción de memoria que no puedas 
rastrear por otros medios. De esta manera forzarás un revisión de la
memoria después de que cada tarea tenga su quantum de tiempo.
Es lento, pero no hay modo en que el culpable pueda escapar.


Memory leaks
------------

+ Identifica cuánto está leaked, y en cuántas asignaciones:
  para conseguir el tamaño del leak como también la cantidad
  de asignaciones, ejecuta ``checkmem`` antes y después del
  programa sospechoso, luego resta las cifras dadas (no te olvides
  de flush antes de cada ``checkmem``, se hace automáticamente
  si ``__debug_mem`` está establecido).

+ Ten cuidado con los efectos laterales de ``Mungwall``:
  96 bytes son agregados a cada asignación. Solamente ``checkmem`` te
  dará los tamaños correctos asignados.

+ ¿Fue asignado por ``AllocVec()`` o por ``AllocMem()``? Agrega algunos
  bytes al tamaño que ``AllocVec`` tiene para asignar al principio
  de ``rom/exec/allocvec.c`` y revisa si el tamaño del leak varía
  de acuerdo.

+ Intenta identificar la asignación de leaking enviando una excepción
  de trace (``asm("int $3")`` en i386) para un tamaño específico de
  asignación en ``rom/exec/allocvec.c`` o en ``rom/exec/allocmem.c``.
  Por supuesto necesitarás ejecutar tu programa con GDB para que esto
  sea útil. Usa ``bt`` y otros comandos de GDB para identificar la 
  causa de cada asignación sospechosa.

+ Cuando apuntes a la ubicación posible del leak, modifica su tamaño
  de asignación (por ej. sumando un arreglo de caracteres al final de
  la struct asignada) y revisa si el tamaño del leak crece de acuerdo.

