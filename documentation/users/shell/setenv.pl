.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <setdefaultfont>`_ `Next <setkeyboard>`_ 

---------------


======
Setenv
======

Składnia
~~~~~~~~
::


	NAME,SAVE/S,STRING/F


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::


	Ustawia globalną wartość z aktualnego Shell. Te wartości mogą być 
	osiągalne z każdego programu.
	
	Te wartości nie są zapisywane w ENVARC:, w związku z tym zostają one
	zachowywane na konkretną sesję systemu operacyjnego, po ponownym 
	uruchomieniu są wymazywane. Gdy użyta zostaje opcja SAVE, wtedy wartość
	zostaje zapisywana także w ENVARC:
	
	Jeśli brak parametrów, aktualna lista parametrów globalnych zostaje 
	wyświetlona.


Parametry
~~~~~~~~~
::


	NAME	-	Nazwa globalnej zmiennej.

	SAVE	-	Zapisz wartość w ENVARC:

	STRING	-	Wartość dla globalnej zmiennej NAME.


Wynik
~~~~~
::

	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	Setenv EDITOR Ed
	
	Każdy program korzystający z wartości EDITOR, będzie mógł pobrać nazwę
	edytora tekstowego, którego użytkownik będzie chciał używać.


Zobacz także
~~~~~~~~~~~~
::


	Getenv, Unsetenv


