====================================================
Manual de Correcção de Erros (Debugging) AROS Manual
====================================================

:Authors:   David Le Corfec
:Copyright: Copyright © 2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Work in progress.

Este Manual explica as várias opções para corrigir o AROS.


.. Contents::


----------
Introdução
----------

Para a maioria dos desenvolvidores, a maneira mais fácil de desenvolver e corrigir
é usar o porto AROS hospedado sob Linux (o que é a definição mais popular) ou BSD.
Deste modo poderá usar GDB sob Linux para corrigir o AROS. Ir+a necessitar de passar
``--enable-debug`` para o guião de configuração antes de compilar o AROS.
Atente, corrigindo informação poderá decuplar o tamanho ocupado do disco pela árvore
AROS.

Desenvolvidores de equipamento de baixo nível irão em vez usar a saída de correcção
em série no porto nativo.

Desenvolvidores de aplicações necessitam de assegurar que os seus programas libertam
todos os recursos que ocupam. AROS providencia algumas ferramentas para isso.

---------------------------------
Imprimindo declarações do 'Debug'
---------------------------------

::

    #define DEBUG 1
    #include <aros/debug.h>
    ...
    D(bug("value1=%ld, path=%s", value, path));

``D()`` irá expandir para nada se ``DEBUG`` é 0 ou indefinido.
Use ``bug()`` só para forçar a saída do Debug qualquer que seja o valor do ``DEBUG``.
O uso é o mesmo que ``printf()``.
Hospedado, a saída irá ser mostrada na consola onde o AROS foi iniciado.

--------------------------------
Com o AROS hospedado: Usando GDB
--------------------------------

Poderá quer correr o AROS sob GDB, ou usar GDB depois de o AROS ter terminado
e deixado uma descarga do núcleo. Não esqueça de compilar AROS a correcção de erros
habilitada (``./configure --enable-debug``).


Corrigindo em directo
=====================

Inicie GDB como em baixo::

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

então corra o AROS com::

    (gdb) r
    Starting program: /AROS/bin/linux-i386/AROS/aros 
    (... muitas saídas do Debug saíram...)

Poderá passar argumentos para o AROS colocando-os depois do comando ``r``.
Use Ctrl-C na 'shell' para interromper AROS e voltar para o 'prompt' GDB.
Use ``help`` para ajuda, ou ``q`` para sair:)


Corrigindo em Post-mortem
=========================

Primeiro, terá de habilitar a geração de lixeira do núcleo, usando ex. ulimit para o 'Bash shell'.
Então corra o AROS e gere uma lixeira de núcleo::

    > cd /AROS/bin/linux-i386/AROS/
    > ulimit -c unlimited # veja o manual da sua shell para habilitar lixeira de núcleos
    > ./aros
    Quit (core dumped)

Agora poderá começar o GDB, especificando o nome do executável AROS e o ficheiro núcleo::

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


GDB (Comandos Básicos)
======================

O comando ``help`` dá ajuda em todos os comandos do GDB. Quer invocados
directamente ou obtendo uma lista de assuntos de ajuda, ou seguido pelo
tópico ou o nome (ou até abreviatura) do comando.
É encorajado a ler a ajuda 'online' para todos os comando que irão ser
brevemente apresentados aqui.

O comando ``bt`` (backtrace) imprime um traçado de todas as páginas da pilha.
Aqui está um traçado depois de interromper AROS com Ctrl-C na consola do GDB::

    Program received signal SIGINT, Interrupt.
    0x40125607 in sigsuspend () from /lib/libc.so.6
    (gdb) bt
    #0  0x40125607 in sigsuspend () from /lib/libc.so.6
    #1  0x080531d5 in idleTask (sysBase=0x40231290) at idletask.c:23
    #2  0x08052ba7 in Exec_NewAddTask (task=Cannot access memory at address 0x8
    ) at newaddtask.c:280
    Previous frame inner to this frame (corrupt stack?)
    (gdb) 

Innermost frame is #0.

Para imprimir o valor de uma expressão acessivel da corrente página, use ``p`` (print)::

    (gdb) p SysBase
    $1 = (struct ExecBase *) 0x40231290

O comando 'print' GDB's é muito poderoso.
Compreende a sintaxe de C, para que possa qualquer expressão válida::

    (gdb) p SysBase->IntVects[2]
    $2 = {iv_Data = 0x0, iv_Code = 0x8052f30 <SoftIntDispatch>, iv_Node = 0x4023c528}

Poderá também usar ``print`` como uma calculadora hexadécimal, como::

    (gdb) p 0x42 + 0xc0de
    $1 = 49440

Para mostrar o resultado em Hexadécimal, use ``p/x`` (note como consegue voltal a chamar
a expressão prévia)::

    (gdb) p/x $1
    $2 = 0xc120

Para se mover por entre páginas, use o comando ``f`` (frame)::

    (gdb) f 1
    #1  0x080531d5 in idleTask (sysBase=0x40231290) at idletask.c:23
    23              sigsuspend(&sigs);

Para mostrar 10 linhas de código à volta da localização actual, use ``l`` (list), que
poderá também ser usado para mostrar uma linha especifica.

Se estiver a efectuar correcções em directo:

+ Para correr um programa (ou recorrer a partir do inicio) até que o interrompa,
  ou um ponto de quebra tenha sido atingido, ou arrebente, use o comando ``r`` (run)
  (com parametros opcionais que irão ser passados para o programa);

+ Para dar um único passo nas instruções (single-step), use ``s`` ou ``n`` (o último irá
  processar chamadas a subrotinas num passo);

+ Para colocar um ponto de quebra, use ``b`` seguido pelo número de linha ou função;

+ Para continuar a execução do programa enquanto em correcção, use ``c``.

Use ``q`` para sair::

    (gdb) q
    The program is running.  Exit anyway? (y or n) y
    >


GDB (especifico- AROS)
======================

Comandos GDB especificos do AROS são fornecidos em ``/AROS/_gdbinit``, na qual irá
ser instalado para ``/AROS/bin/linux-i386/AROS/.gdbinit``.
Este ficheiro é só de leitura por GDB no arranque, e contém os seguintes comando::

    findaddr - Mostra o módulo que contém o endereço dado.
    thistask - Imprime informações de saida sobre a tarefa em curso.
    liblist - Lista as bibliotecas correntes no Sistema.
    devlist - Lista os dispositivos correntes no Sistema.
    resourcelist - Lista os recursos correntes no Sistema.
    residentlist - Lista a lista residente no Sistema.
    taskready - Lista de tarefas correntemente preparadas para correr.
    taskwait - Lista de tarefas correntemente à espera de um evento.
    modlist - Lista de todos os módulos correntemente carregados na memória.
    printtaglist - Mostra as listas marcadas dadas.

Desta lista, ``findaddr`` é essencial para correcção correcta de código que não esteja na ROM
(bibliotecas partilhadas, aplicações...)

Usando o findaddr
-----------------

Muito frequentemente irá corrigir bibliotecas e aplicações, mas um histórico
do traçado dado dar-lhe-á um ou mais endereços por resolver::

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

Use ``findaddr`` em qualquer endereço que queira para resolver (provavelmente o 'innermost')::

    (gdb) findaddr 0x402bd919
    Searching in the loaded modules...
    Address found in System:Tests/Zune/list1, which is loaded at 0x402bd454.
    If this is an executable, its .text section starts at 0x402bd460

Em seguida irá usar o comando ``add-symbol-file`` para carregar o ficheiro dado no endereço de texto
dado::

    (gdb) add-symbol-file Tests/Zune/list1 0x402bd460
    add symbol table from file "Tests/Zune/list1" at
    	    .text_addr = 0x402bd460
    (y or n) y
    Reading symbols from Tests/Zune/list1...done.
    
Esperamos que tenha endereços resolvidos::

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

Então esperamos que consiga encontrar os erros::

    (gdb) f 1
    #1  0x402bd919 in main () at list1.c:107
    107             set(3243243, MUIA_Window_Open, TRUE);

Repita para os endereços em falta que queira resolver.

Usando thistask
---------------

Mostra imensa informação sobre a tarefa a decorrer. Sem surpresa,
são dados que consegue encontrar em ``SysBase->ThisTask``::

    (gdb) thistask 
    Task     SigWait  SigRecvd StkSize   StkUsed Pri Type Name
    -----------------------------------------------------------------------------
    40231fb8 00000000 00000000    40960      872 -128    1 Idle Task


Conselhos e truques
===================

Ponto de quebra induzido no i386
--------------------------------

Se inserir::

    asm("int $3");

Em código C, uma excepção de traçado será gerada na execução.
Poderá ser muito util enquanto correndo com o GDB, para entrar na
correcção interactiva quando uma condição especifica ocorre::

    if (byteSize == 112)
        asm("int $3");

-------------------
Procurando recursos
-------------------

Procurar recursos também conhecido de outros Sistemas Operativos não está prontamente
disponivel para o AROS neste momento, pelo que terá que dos recursos que vão saindo por si.
Irá encontrar aqui algumas ferrramentas para o ajudar a verificar se o seu programa está limpo.

Procurando memória com o Mungwall
=================================

Se configurado com ``--enable-debug``, AROS habilita ``Mungwall``. Ele mantem o registo
de uma zona pequena antes e depois das suas alocações para verificar que voçê não escreve
fora dos seus limites. Ista verificação é feita nas rotinas de alocação de memória, ou
a qualquer altura sempre que chamando ``AvailMem(MEMF_CLEAR)``.

a ferramenta de comando de linha ``CheckMem`` somente chama esta função, e reporta para a saida
do Debug (serie para o nativo ou terminal para o hospedado). Se nenhuma violação de limite for
detectada, irá reportar o número corrente de alocações e os seus tamanhos totais::

    === MUNGWALL MEMORY CHECK ============
    
    Num allocations: 1579   Memory allocated 3333326

LeakWatch
=========

É uam parvoice mas uma ferramenta util. Ela inspecciona a memoria total e objectos Exec:
bibliotecas, dispositivos, fontes, recursos, portos e semáforos.
Dispara uma descarga dos objectos não utilizados ainda na memória para reportar a quantidade
de memória depois de alguns recursos serem fechados.

Lance ``LeakWatch`` na sua própria 'shell', então utilize as seguintes teclas:

+ ``Ctrl-C`` para sair :)
+ ``Ctrl-D`` para mostrar o estado corrente de recursos
+ ``Ctrl-E`` para mostrar as diferenças dos recursos desde que o lançou
+ ``Ctrl-F`` para mostrar a diferença de recursos desde a ultima vez que premiu ``Ctrl-F``.

``Ctrl-F`` é a combinação mais util: pressione-os antes de correr o seu programa, e então depois.
Deverá reportar nenhum recurso. No caso oposto:

+ Verifica que nenhum outro programa está a alocar recursos durante esse tempo
+ Repete as leituras. Vê se as fugas são consistentes.
+ Escurece o local onde a fuga ocorre, reduzindo as caracteristicas que você usa,
  então comentando fora do código.

Se pensa que o seu programa despoletou uma fuga numa biblioteca AROS,
encontre um programa de teste existente ou escreva um pequeno usando
as chamadas em fuga para se assegurar que a fuga realmente vem daí.

Várias ferramentas CLI
======================

Existe também ferramentas de correcção mais simples disponíveis em ``C:``.


A 'Shell' AROS
--------------

escreva ``set __debug_mem`` na 'Shell' para habilitar a reportagem da memória disponivel
antes e depois de cada comando, bem como as diferenças de memória. Maioritáriamente o
mesmo que ``LeakWatch`` só para a memória.

Avail
-----

Use ``Avail`` para mnostrar a informação na memória. O parametro FLUSH irá forçar objectos
não usados a ser expulsos.

Liblist
-------

Irá mostrar uma lista das bibliotecas correntemente abertas bem como alguma informação
como versão e contador de abertura.

Devlist
-------

O mesmo que ``Liblist``, mas para dispositivos Exec.

Conselhos e truques
===================

Mungwall verifica na agenda
---------------------------

Um truque limpo ``Mungwall`` é modificar a chamada da agenda ``AvailMem(MEMF_CLEAR)``
em cada troca de tarefa, quando tem uma estranha currupção na memória que não consegue
investigar por outros meios. Deste modo irá forçar uma verificação de memória depois
de cada tarefa ter tido o seu tempo total É lento, mas não exite nenhum modo do culpado escapar.


Fugas de memória
----------------

+ Identifica o quanto está derramado, e em quantas alocações:
  para obter o tamanho da fuga bem como o número de alocações,
  corra ``checkmem`` antes e depois do programa suspeito, então
  retira a informação dada (não se esqueça de esvaziar antes de
  cada ``checkmem``, é feito automáticamente se ``__debug_mem`` está marcado).

+ Cuidado com os efeitos secundários de ``Mungwall``:
  96 bytes são adicionados a cada alocação. Sómente ``checkmem`` irá
  dar o verdadeiro tamanho das alocações.

+ É alocado por ``AllocVec()`` ou ``AllocMem()``? Adiciona alguns
  bytes ao tamanho de ``AllocVec`` tem alocado no principio de
  ``rom/exec/allocvec.c``, e verifica se o tamanho da fuga varia
  de acordo.

+ Tenta identificar a alocação em fuga enviando uma excepção de traçado
  (``asm("int $3")`` no i386) num tamanho de alocação especifica no
  ``rom/exec/allocvec.c`` ou em ``rom/exec/allocmem.c``.
  Claro que irá necessitar de correr o seu programa com o GDB para isto
  ser util. Use ``bt`` e outros comandos GDB para identifacar a causa
  de cada alocação suspeita.

+ Quando verificar a localização possível de fuga, modifique o seu tamanho de
  alocação (ex. adicionando uma cadeia caracteres no final de cada estrutura alocada)
  e verifique se o tamanho da fuga cresce em consunancia.