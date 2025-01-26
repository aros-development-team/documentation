.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <rename>`_ `Next <requestfile>`_ 

---------------


=============
RequestChoice
=============

Składnia
~~~~~~~~
::


	TITLE/A,BODY/A,GADGETS/A/M,PUBSCREEN/K


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::

	Pozwala na użycie EasyRequest() w skryptach AmigaDOS.


Parametry
~~~~~~~~~
::


	TITLE		- Tytuł okna zapytania.

	BODY		- Tekst wyświetlany w oknie zapytania.

	GADGETS		- Tekst dla przycisków.

	PUBSCREEN	- Nazwa ekranu publicznego na którym się uruchomi.


Wynik
~~~~~
::


	Standardowe kody błędu.


Przykład
~~~~~~~~
::

	RequestChoice "To jest tytuł" "To jest*Nopis" Dobra|Poniechaj
	
	Tutaj wszystko mówi za siebie, oprócz "*N". To jest odpowiednik
	'\n' w języku C, żeby wstawić nową linię. Okno zapytania zostanie
	otworzone w Workbench Screen.


	RequestChoice Title="Kolejny tytuł" Body="A to jest*Nkolejny opis"
	Gadgets=Dobra|Poniechaj PubScreen=DOPUS.1

	To robi dokładnie to samo, ale na ekranie publicznym Directory Opus.


Opis
~~~~
::

	Aby umieścić nową linię należy w opisie wstawić *n lub *N .
	
	Aby umieścic cudzysłów należy użyć *" .
	
	Szablon CLI daje GADGETS opcje jako ALWAYS; jest to odmienne od 
	orginalnego programu. Dzięki temu nie musimy sprawdzać, czy gadżet 
	został podany.


Zobacz także
~~~~~~~~~~~~
::


	intuition.library/EasyRequest(), intuition.library/EasyRequestArgs()


