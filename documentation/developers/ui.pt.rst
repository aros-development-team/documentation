==========================================
Guia de Estilos do Interface do Utilizador
==========================================

:Autor:			Adam Chodorowski
:Direitos de Cópia:	Copyright © 2003, The AROS Development Team
:Versão:		$Revision$
:Data:			$Date$

.. ARRANJE-ME: Introdução aqui...

.. Warning::

   Este documento não está terminado! Se quiser ajudar a rectificar isto, por favor
   Contacte-nos.

.. Contents::


-------
Janelas
-------

Preferencias
============

Janelas de preferencias são similares a janelas de dialogo, nelas existe
uma linha de botões e não existe ferramenta de fecho na barra de titulo. 

.. Figure:: /documentation/developers/ui/images/windows-prefs-titlebar.png

   Exemplo de uma barra de titulo de uma janela de preferencias. Note a ausencia da
   ferramenta de fecho.

.. Topic:: Racional

   Não existe ferramenta de fecho porque a sua semantica poderia ser ambigua.
   Por outras palavras, poderia não ser claro ao utilizador exactamente qual o
   efeito secundário seria se fecha-se a janela. Isso irá guardar as preferencias
   ou abandonar todas as alterações?
 
O proximo conjunto de botões são senpre apresentados, posicionados horizontalmente
ao longo do fundo da janela (na seguinte ordem, da esquerda para a direita):

    Testar (Test)
        Aplica as definições na janela para que possa ter efeito imediatamente.
        Não fecha a janela.
        
    Reverter (Revert)
        Restaura as definições na janela para o estado em que estavam quando a janela
        foi aberta e aplica-as imediatamente. Não fecha a janela.
        
    Salvar (Save)
        Aplica as definições na janela imediatamente e salva-as permanentemente
        [#]_. Fecha a janela. Se não for possivel salvar as definições permanentemente
        (ex. se o disco onde seriam salvas for só de escrita) este botão é desvanecido.
        
    Usar (Use)
        Aplica os definições na janela imediatamente e salva-as temporáriamente
        (sómente para esta sessão) [#]_. Fecha a janela.
        
    Cancelar (Cancel)
        Restaura as definições na janela para o estado aquando da sua abertura
        e aplica-as imediatamente. Fecha a janela.

.. Topic:: Disposição

   Os botões estão divididos em dois grupos, Com o Teste (Test) e Reverter (Revert) num
   Salvar (Save), Usar (Use) e Cancelar (Cancel) noutro onde o grupo formado está alinhado
   à esquerda, e o último está alinhado à direita. Existe um espaço entre os dois para
   separar-los visualmente[#]_. Todos os botões tem a mesma dimensão, Que deverá ser o mais
   pequena possivel (quando redimensinando, só o espaço entre os grupos deverá crescer
   e não os botões).
        
.. Figure:: /documentation/developers/ui/images/windows-prefs-buttons.png

   Exemplos da linha de botões numa janela de preferencias.

.. [#] Sslva ambos para ``ENVARC:`` e ``ENV:``.
.. [#] Salva somente para ``ENV:``.
.. [#] Nota que todos os botões no grupo esquerdo não fecha a janela,
       enquanto todos os botões no grupo direito para fechar a janela.
