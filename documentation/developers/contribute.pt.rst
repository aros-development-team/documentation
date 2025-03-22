==========
Contributo
==========

:Autor:			Adam Chodorowski
:Direitos de Cópia:	Copyright © 1995-2020, A equipa de Desenvolvimento AROS
:Estado:		Feito.

.. Contents::


Precisamos da sua ajuda!
========================

Temos muito poucos desenvolvidores activos, que infelizmente significa que o progresso
é bastante baixo. Simplesmente precisamos de mais pessoas para nos ajudar! Existe um
número enorme de tarefas que a necessitar de desenvolvidores dedicados. Dimensionam-se
de grandes projectos a pequenos, de 'explorar' equipamento, até sistemas de alto nível
a programação de aplicações. Existe basicamente algo para todos que deseje contribuir,
independentemente de o quão proeficiente é na codificação!

Para aqueles que não são programadores, existe ainda muitas tarefas onde poderá ajudar!
Isto incluí escrever documentos, traduzir programas e Documentação para outras línguas,
criar belos gráficos e procurar erros.
Estas são tão importantes como codificar!


Tarefas Disponíveis
===================

Esta é a lista de algumas tarefas em que nós precisamos de ajuda e onde ninguém
está actualmente a trablhar. Não é de nenhum modo uma lista completa, simplesmente
contém as tarefas mais proemintes onde precisamos de ajuda no AROS.


Programação
-----------

+ Implementar bibliotecas em falta, recursos, dispositivos ou partes destes. 
  Veja a reportagem de estado detalhada para saber que bits estão em falta.

+ Implementando ou melhorando condutores de dispositivos de equipamento:
  
  - AROS/m68k-pp:
    
    + Gráficos
    + Entradas (Ecrã táctil, butões)
    + Som
 
  - AROS/i386-pc:
    
    + Condutores de placas gráficas específicas (temos só gerais, não temos as muito bem
      acelaradas). Uma lista curta desejada:
      
      - nVidia TNT/TNT2/GeForce (começada, mas incompleta) 
      - S3 Virge
      - Matrox Millenium
    
    + USB
    + SCSI
    + IDE chipsets específicos
    + Som
    + ...qualquer outra coisa que possa pensar.

  - Suporte a impressoras genéricas.
 
  - Suporte a som genérico.

+ Aportar para outras arquitecturas. Alguns exemplos de equipamento para o qual 
  não existe manutenção ao existente porto AROS ou tenha sido começado:

  - Amiga, ambos m68k e PPC.
  - Atari.
  - HP 300 series.
  - SUN Sparc.
  - iPaq.
  - Macintosh, ambos m68k e PPC.

+ Implementando editores de preferencias em falta:

  - IControl
  - Overscan
  - Palette
  - Pointer
  - Printer
  - ScreenMode
  - Sound
  - WBPattern
  - Workbench 
 
+ Melhorar a ligação à biblioteca C

  Isto significa implementar funções ANSI em falta (e algum POSIX) na clib,
  para tornar facilitado aportar programas UNIX (ex. GCC, make e binutils). A
  maior falta é o suporte para o estilo de sinalização POSIX, mas existem algumas
  funções também.

+ Implemetar mais datatypes (tipos de dados) e melhorar os existentes

  O número de datatypes disponiveis no AROS é bastante pequeno. Alguns exemplos de
  datatypes que necessitam de melhoramento para se tornarem utilizaveis ou necessidade de
  implementação do nada:

  - amigaguide.datatype
  - sound.datatype
    
    + 8svx.datatype

  - animation.datatype
    
    + anim.datatype
    + cdxl.datatype
    
  
+ Aportar programas de grupos terceiros:

  - Editores de texto como o ViM e Emacs.
  - A cadeia de ferramentas de desenvolvimento, que inclui GCC, make, binutils e outras
    ferramentas de desenvolvimento GNU.
  

Documentação
------------

+ Escrever documentação do utilizador. Isto consiste em escrever um Guia de Utilizados geral
  para principiantes e avançados, e também documentação de referencia para todos os programas
  padrão AROS.

+ Escrever documentação do desenvolvidor. Contudo esta está um pouco em melhor estado
  do que a documentação do utilizador, existe ainda muito trabalho para fazer. Como Por exemplo,
  não existe um tutorial programadores principiantes ainda. O equivalente
  aos Manuais do Kernel ROM para o AROS seria realmente muito bom de ter.


Traduções
---------

+ Traduzir o AROS em si para mais línguas. Actualmente, só as seguintes
  línguas estáo mais ou menos completamente suportadas:

  - Inglês
  - Alemão
  - Svenska
  - Norsk
  - Italiano

+ Traduzir a documentação e o portal para mais línguas. Actualmente, está
  somente totalmente disponivel em Inglês. Partes têm sido traduzidas para
  Norsk, mas existe ainda muito a fazer.


Outros
------

+ Coordenar do desenho do Interface de Gráficos do Utilizador (GUI) para os programas AROS,
  como os programas preferidos,ferramentas e utilitarios.


Juntando-se à Equipa
====================

Que juntar-se ao esforço de desenvolvimentos? Óptimo! Então junte-se às `listas de eCorrespondência
de desenvolvimento`__ em que esteja interessado (pelo menos a subscrição à lista de desenvolvimento principal é altamente recomendável) e requira o accesso ao repositório de Subversão.
É tudo. :)

Escreva uma eCarta para a lista de desenvolvimento contendo uma breve introdução
sobre si e em que quer ajudar cam a sua determinação. Se tem qualquer problema,
não exite em nos corresponder para a lista ou pergunte pelo nos `canais de IRC`__.
Também, antes de começar a trabalhar em algo especifico, escreva uma eCarta para
a lista declarando o que estará para fazer ou actualize a tarefa de base de dados.
Assim nós poderemos ter a certeza de que duas pessoas não trabalharam na mesma
tarefa por engano...

__ ../../contact#mailing-lists
__ ../../contact#irc-channels


O repositório de Subversão
--------------------------

O repositório AROS está a correr com um servidor de subversão protegido por palavra-passe,
o que significa que tem de requerer acesso a isso para poder colaborar no desenvolvimento.
A palavra-passe está num formato encriptado, que poderá gerar, com a nossa
`ferramenta de encriptação de palavras-passe online`__.

Envie a palavra-passe encriptada juntamente com o seu nome de utilizador preferido e
o seu nome real para `Aaron Digulla`__ e espere por uma resposta. Para facilitar uma
resposta rápida, marque o assunto como "Access to the AROS SVN server" e o corpo
com "Please add <username> <password>", ex.::

    Please add digulla xx1LtbDbOY4/E

Poderá levar alguns de dias porque Aaron está muito ocupado. Seja paciente. 

Para informações sobre como usar o servidor SVN AROS, leia "`Trabalhando com o SVN`__".
Mesmo se já esteja habituado a usar a SVN é útli que dê uma olhadela,
porque contém informação e conselhos especificos para o repositório AROS
(exemplo: como se ligar a ele).

__ http://aros.sourceforge.net/tools/password.html 
__ mailto:digulla@aros.org?subject=[Access%20to%20the%20AROS%20SVN%20server]
__ svn
