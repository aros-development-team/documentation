=================
Compilando o AROS
=================

:Autores:   		+ Flavio Stanchina
            		+ Henning Kiel
            		+ Bernardo Innocenti
            		+ Lennard voor den Dag
            		+ Aaron Digulla
            		+ Adam Chodorowski
:Direitos de Cópia:	Copyright (C) 2001-2008, A equipa de desenvolvimento AROS
:Versão:		$Revision$
:Data:			$Date$
:Estado:		Feito.
:Abstracto:  
    Este documento irá explicar como compilar o AROS. Desenvolvimento do AROS é
    Actualmente externo, o que significa que não pode compilar o AROS de
    dentro do AROS. Para compilar e desenvolver para o AROS, irá precisar de um sistema Linux ou 
    FreeBSD.


.. Contents::


Requirementos
=============

Os seguintes programas são requeridos para compilar AROS:

+ GCC 3.2.2+
+ GNU Binutils
+ GNU Make
+ GNU AWK (GAWK) - outro awks pode também ser apropriado
+ Python 2.2.1+
+ Bison
+ Flex
+ pngtopnm and ppmtoilbm (parte do pacote netpbm)
+ Autoconf
+ Automake
+ Utilitários comuns como cp, mv, sort, uniq, head, ...

Se quiser compilar o portos hospedados de i386-linux ou i386-freebsd, o
que se segue é também requerido:

+ Cabeçalhos e livrarias de desenvolvimentos X11


Fontes
======

Pode descarregar as fontes AROS quer pelo `portal de descarga`__ ou pelo
uso do serviço de Subversão (SVN) (Que requer que `aplique para aceder`__ ). No caso
formado, obter o pacote  ``fonte`` é suficiente (a não ser que queria
compilar os programas comtribuídos). Em último caso, veja a `documentação Subversão`__.

__ ../../download
__ ../../documentation/developers/contribute#the-subversion-repository
__ ../../documentation/developers/svn


Construíndo
===========

Configurando
------------

Primeiro que tudo, terá que correr configure na raiz das fontes AROS::

    > cd AROS
    > ./configure

Poderá especificar várias opções para configurar. As opções seguintes são
disponíveis para todos os alvos:

``--enable-debug=LIST [default: none]`` 
    Habilita diferentes tipos de correcção de erros (debug). plicas ou espaços em branco
    podem ser usados para separar os itens na lista. Se não for fornecida uma lista então ``all`` é 
    assumido. Se ``--enable-debug`` não está especificado de todo, ``none`` é o pré definido.
    Tipos disponíveis:
    
    ``none``
        Desabilita todos os tipos de correcção de erros, e correcções em geral.
    
    ``all``
        Habilita todos os tipos em baixo.
        
    ``stack``
        Habilita a correcção de erros na pilha (stack).
        
    ``mungwall``
        Habilita a correcção de erros mungwall.
        
    ``modules``
        Habilita a correcção de erros nos módulos.
    

AROS/i386-linux ou AROS/i386-freebsd hospedados
"""""""""""""""""""""""""""""""""""""""""""""""

Não tem que especificar a opção ``--target`` para contruir esses alvos. 
As opções seguintes estão disponíveis para construções hospedadas:

``--with-resolution=WIDTHxHEIGHTxDEPTH [default: 800x600x8]``
    Arma a resolução e profundidade predefinida que o AROS irá usar. 
    
``--enable-xshm-extension [default: enabled]``
    Habilita o uso da extensão MIT-SHM do X11. Habilitando-a dará um ganho significante
    de performance, mas poderá não funcionar muito bem se estiver a usar
    ecrã remoto.
    
Não poderá compilar cruzamentos destes portos.


Nativo AROS/i386-pc
"""""""""""""""""""

Para construir o porto i386-pc, irá necessitar de passar ``--target=pc-i386`` para configure.
Adicionalmente, as opções especificas seguintes para  i386-pc estão disponíveis:

``--with-serial-debug=N [default: disabled]``
    Habilita a correcção de erros da porta série, enviando a saida para a porta ``N``. 
    
Não poderá compilar cruzamentos destes portos.


Compilando
----------

Para começar a compilação, simplesmente corra::

    > make

Se isto não trabalhar depois de uma actualização de Subversão, poderá tentar::

    > make clean
    > rm -rf bin/
    > ./configure {options}
    > make

Se usa FreeBSD ou algum outro sistema que não usa GNU Make como o
compilador do sistema, então deverá substituir o comando GNU Make para o em baixo.
Por exemplo, sobe FreeBSD terá que instalar o porto GNU Make, então correr::

    > gmake


AROS/i386-linux ou AROS/i386-freebsd hospedado
"""""""""""""""""""""""""""""""""""""""""""""""

Se está a construir uma construção i386-linux ou i386-freebsd hospedados, deverá
adicionalmente também correr o seguinte para correctamente configurar o apoio ao teclado::

    > make default-x11keymaptable


Nativo AROS/i386-pc
"""""""""""""""""""

Se está a construir o porto nativo i386-pc, irá encontrar uma imagem de arranque
para disquete em ``bin/pc-i386/gen/rom/boot/aros.bin`` depois da compilação ter
terminado. Adicionalmente, poderá criar uma imagem ISO de arranque correndo::

    > make bootiso-pc-i386

A imagem ISO pode ser encontrada em ``distfiles/aros-pc-i386.iso``.

Apendice
========

Construindo vários alvos a partir da mesma fonte
------------------------------------------------
   
Se pretende compilar vários alvos diferentes de uma árvore de fontes, então
primeiro tem de ir pelos passos de configuração de cada alvo. 
Poderá adicionar alvos a qualquer hora que queira. O último alvo especificado para
configurar é o alvo predefinido.

Para seleccionar um alvo especifico quando construíndo, simplesmente corra make assim::

    > AROS_TARGET_ARCH=$ARCH AROS_TARGET_CPU=$CPU make
    
Onde ``$ARCH`` é a arquitectura da construção pretendida, e ``$CPU`` é o processado.
Ex., para construir AROS/i386-pc correria::

    > AROS_TARGET_ARCH=pc AROS_TARGET_CPU=i386 make

Se está a construir vários portos que usem o mesmo processador, só terá que especificar
``AROS_TARGET_ARCH`` que o processadoras permanecerá o mesmo. 

Compilando 'Como fazer...' (HowTo`s)
------------------------------------

Este guia passo a passo irá descrever como preparar o ambiente de desenvolvimento
e compilar AROS em Ubuntu Linux 6.10 "Edgy Eft". Vamos assumir que tem uma imagem (ISO)
para cd de portais Ubuntu e tem o sistema instalado daí. 
Também deverá afina-lo para torna-lo capaz de aceder à Internet. 
      
Obtendo os pacotes necessários
""""""""""""""""""""""""""""""

Porque o Live CD falha pacotes precisos teremos que obte-los a partir da internet::

    > sudo apt-get install subversion gcc-3.4 gawk bison flex netpbm autoconf automake1.4 libx11-dev

Terá que introduzir a sua palavra passe na prompt.

Marcando a localidade para ISO8859 
""""""""""""""""""""""""""""""""""

Iremos necessitar de marcar a localidade para usar as fontes AROS e compila-las.
Encontre a cadeia de caracteres en_US iso 8859-1 na lista fornecida pela seguinte
aplicação e escolha-a)::

     > sudo apt-get install localeconf
     > sudo dpkg-reconfigure localeconf

Então nós iremos marcar a localidade da consola::

     > sudo locale-gen "en_US"
     > sudo dpkg-reconfigure locales
     > export LANG="en_US.ISO-8859-1"

Instalando make v. 3.80
"""""""""""""""""""""""

Para instalar a versão do make iremos necessitar, do repositório adicional
Ubuntu que terá que ser adicionada. Lance a consola e corra::

     > sudo nano /etc/apt/sources.list

Adicione essas duas linhas também::

    deb http://us.archive.ubuntu.com/ubuntu breezy main restricted
    deb http://us.archive.ubuntu.com/ubuntu dapper main restricted
    (Guardar e sair nano via "ctrl-x")

Agora obtenha a lista dos programas actualizados disponiveis::

     > sudo apt-get update

Agora iremos usar o gestor de pacotes Synaptic. Lance-o no menu::

    System > Administration > Synaptic package manager

Depois disso procure pelo pacote "make", escolha "make" na janela do lado
direito e marque a versão por ''package>force version..'' "3.80 (breezy)".



Obtenha as fontes
"""""""""""""""""

Para descobrir mais instruções sobre como usar o nosso Repositório de Subversão
Por favor refirasse a `Working with Subversion <svn.php>`__

Em relato, o comando que terá que usar é como o seguinte::

   > svn checkout https://svn.aros.org/svn/aros/trunk/AROS
   > cd AROS
   > svn checkout https://svn.aros.org/svn/aros/trunk/contrib


Configurar e compilar as fontes AROS
""""""""""""""""""""""""""""""""""""

Primeiro iremos marcar parametros e configure::

      > export CC="gcc-3.4"
      > ./configure

Poderá necessitar de reabrir a consola quando ./configure encontra problemas com o compilador
C.

Finalmente, tipos::

      > make

Isto deverá demorar um bocado (algumas horas) :) 
Depois disso irá obter AROS-hosted compilado.
