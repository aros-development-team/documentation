========================
Curta introdução ao AROS
========================

:Authors:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski 
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Almost finished, I think...


.. Include:: index-abstract.pt.rst


Objectivos
==========

Os objectivos do projecto AROS é criar um Sistema Operativo que:

1. é o mais possível compativel com AmigaOS 3.1.

2. possa ser aportado para diferentes tipos de arquitecturas de equipamento e
   processadores, com x86, PowerPC, Alpha, Sparc, HPPA e outros.

3. deverá ter binário compativel no Amiga e fontes compativeis em qualquer
   outro equipamento.
  
4. possa correr como uma versão que permaneça só (standalone) que arranque
   directamente do disco rigido como um emulador que abra uma janela no sistema
   operativo existente para desenvolver programas e corra Amiga e aplicações nativos
   ao mesmo tempo.

5. melhore sobre as funcionalidades do AmigaOS.

Para atingir este objectivo, usamos um certo número de técnicas. Primerio que tudo,
fazemos um uso intensivo da Internet. Poderá participar no nosso projecto mesmo que
só consiga escrever uma única função do Sistema Operativo. A versão mais actual da
fonte é acessivel 24 horas por dia e remendos (patches) podem ser fundidos nas fontes
a qualquer altura. Uma pequena base de dados com tarefas abertas certifica-se de
que o trabalho não é duplicado.


História
========

A algum tempo a trás no ano de 1993, a situação para o Amiga parecia de algum mode
pior do que o normal e alguns fans do Amiga juntaram-se e discutiram o que deveria
ser feito para aumentar a aceitação da nossa amada máquina. Imediatamente a razão
principal para o sucesso em falta do Amiga tornou-se claro: foi a propagação, ou
melhor a falta disso. O Amiga deveria obter um principio de propagação mais vasto
para torna-lo mais atractivo para todos usarem e desenvolverem para ele. Então planos
foram feitos para atingir esse objectivo. Um dos planos foi arranjar os erros do AmigaOS,
outro foi torna-lo num Sistema Operativo moderno. O projecto AOS nasceu.

Mas exactamente o que era um erro? E como deveriam os erros ser arranjados? Quais eram
as caracteristicas que um Sistema Operativo deveria ter então chamadas de *modernas*?
E como deveriam elas ser implementadas no AmigaOS?

Dois anos mais tarde, pessoas ainda estavam a discutir sobre isto e nem uma linha de código
tinha sido escrita (ou pelo menos ninguem tinha visto esse código). Discussões caontinuaram
a ser o padrão onde alguém definiu que "Nós temos de ter ..." e alguém respondeu "leiam a
velha correspondência" ou "isto é impossível de fazer, porque ...", que foi brevemente
seguido por "Vocês estão errados porque ..." e asim sucessivamente.

No inverno de 1995, Aaron Digulla fartou-se desta situação e publicou um RFC (requerido para comentários) para a lista de correio AOS na qual ele perguntava o que a minima base comum
poderia ser. Várias opiniões foram dadas e a conclusão foi que quase todos gostariam
de ver um Sistema Operativo aberto que fosse compativel com AmigaOS 3.1 (Kickstart 40.68)
na qual discussões profundas poderiam ser fundadas, para ver o que seria possivel e o que não.

Então o trabalho começou e o AROS nasceu.
