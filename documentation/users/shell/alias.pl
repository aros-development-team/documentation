.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <addbuffers>`_ `Next <ask>`_ 

---------------


=====
Alias
=====

Składnia
~~~~~~~~
::


	NAME,STRING/F


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::


     Alias umożliwia Ci stworzenie alternatywnej nazwy dla innych komend DOSa.
     Jeśli Alias zostanie użyty bez parametrów, wyświetla aktualną listę
     aliasów zdefiniowanych w aktywnym oknie shella.

     Użycie pary kwadratowych nawiasów wewnštrz aliasu umożliwia Ci
     dodać 'nową' komendę dosa z parametrami.

     Jeśli nie zostanš wyspecyfikowane parametry, zostanie wyświetlona aktualna lista aliasów.
     


Parametry
~~~~~~~~~
::


	NAME    - Nazwa do przypisania.

	STRING  - Wartość dla NAME.


Rezultat
~~~~~~~~
::


	Standardowe kody błędów DOS.


Przykład
~~~~~~~~
::


	Alias DF "Type [] numer"

	Wpisując "DF S:Shell-Startup" w konsoli, wykonujesz komende
	"Type S:Shell-Startup numer". To działanie wyświetli zawartość
	pliku S:Shell-Startup w konsoli z liczbą linii po lewej stronie.

     
Zobacz także
~~~~~~~~~~~~
::


     Unalias


