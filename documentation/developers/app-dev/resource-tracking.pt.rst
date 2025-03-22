============================================
Manual de Desenvolvimento de Aplicações AROS
============================================

:Autores:		Staf Verhaegen, Sebastian Rittau, Stefan Rieken, Matt Parsons,
			Adam Chodorowski, Fabio Alemagna, Matthias Rustler
:Direitos de Cópia:	Copyright © 1995-2006, A equipa de desenvolvimento AROS
:Versão:		$Revision$
:Data:			$Date$
:Estado:		Por acabar; integração começada (Um caminho looongo por caminhar).
:A fazer:		Integrado as várias partes. Actualizado e revisto. completo...

`Index <index>`__

.. Warning::

   Este documento não está terminado! É altamente provavel que muitas partes
   estejam desactualizadas, contenham informação incorrecta ou estejam em falta.
   Se quiser ajudar a rectificar isto, por favor contacte-nos.

.. Contents::


-----------------------------------------------
Em busca de recursos (Resources tracking - RT)
-----------------------------------------------

Toda a gente fala de RT mas o que é? RT significa três coisas:

1. O Sistema Operativo toma nota de recursos alocados (ex. memória, janelas,
   bibliotecas, dispositivos, ecrãs, etc).

2. O Sistema Operativo investiga a utilização desses recursos (ex. abriu
   aquela janela que queria "to render" into? Está ainda aberta? é uma janela?)

3. O Sistema Operativo fecha recursos se eles não forem mais utilizados (quer
   porque o programa arrebenta ou porque saiu sem os libertar).

A implementação actual pode fazer todas as três situações mas para as
habilitar, tem que efectuar algumas modificações ao seu código. a unica
desvantagem da implementação actual é que os recursos não irão ser
libertados se o programa arrebenta.

1. Adiccione as seguintes linhas no seu código. Deverá ser a primeira coisa
   a ser vista pelo compilador:

       #define ENABLE_RT  1

   se substituir o 1 por 0, então RT irá ser silenciosamente desabilitado.

2. Adiccione ``#include <aros/rt.h>`` depois do último #include de ``proto/``

3. Adiccione ``RT_Init();`` como o primeiro comando em ``main()``.

4. Chame ``RT_Exit()`` antes de terminar o programa.

5. Recompile.

As vantagens são que irá obter erros se tentar aceder recursos que não alocou
e que irá obter uma lista de recursos que não havera libertado no fim do programa.
Todas as mensagens irão conter a posição no código onde o erro ocurreu
(se disponível) e a posição no código onde o recurso foi alocado (esta é a razão
porque RT tem de ser compilado dentro. Poderá ser construido dentro do
Sistema Operativo também, mas seria dificil de recolher informações de onde
o erro havera ocorrido).

Um bom exemplo sobre como usar RT e o que é capaz de fazer pode ser encontrado em
``AROS/workbench/demos/rtdemo.c``.

Os recursos seguintes estão marcados:

+ Memória em``AllocMem()``, ``FreeMem()``,``AllocVec()`` e ``FreeVec()``

+ MsgPorts em ``CreateMsgPort()``, ``DeleteMsgPort()``, ``CreatePort()``,
  ``DeletePort()`` e ``PutMsg()``

+ Ficheiros em ``Open()``, ``Close()``, ``Read()`` e ``Write()``. ``Read()`` e
  ``Write()`` investigue também as suas memórias intermédias (buffers).

+ Janelas em ``OpenWindow()``, ``OpenWindowTags()``, ``OpenWindowTagList()``,
  ``CloseWindow()``, ``WindowToFront()``, ``WindowToBack()``

+ Ecrãs em ``OpenScreen()``, ``OpenScreenTags()``, ``OpenScreenTagList()``,
  ``CloseScreen()``, ``ScreenToFront()``, ``ScreenToBack()``. ``CloseScreen()``
  Investigue também por janelas abertas no ecrã antes de fechar.
