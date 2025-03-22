.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <path>`_ `Next <protect>`_ 

---------------


======
Prompt
======

Składnia
~~~~~~~~
::


	PROMPT


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::


	Określa linię komend dla konkretnego CLI.


Parametry
~~~~~~~~~
::


		PROMPT	--	Ciąg którym określa się wygląd CLI, oto
				przyładowe argumenty:

		N	--	numer cli
		S	--	nazwa aktualnego katalogu
		R	--	kod błędu

	Jeśli PROMPT nie jest określone to "%N.%S> " jest używane za domyślne.


Wynik
~~~~~
::


	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	Prompt "Tu Camelek!.%N> "	daje:

	Tu Camelek!.10>			(jeśli numer CLI był 10)


Zobacz także
~~~~~~~~~~~~
::


	SetPrompt()


