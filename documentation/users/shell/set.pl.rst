.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <search>`_ `Next <setclock>`_ 

---------------


===
Set
===

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

	Ustawia wartości lokalne, dla aktualnego procesu CLI. Jeśli jakieś
	globalne wartości mają tą samą nazwę to lokalne zostaną użyte zamiast
	globalnych.

	Ten przykład działa tylko dla określonego Shell.
	
	Jeśli, żaden argument nie został podany to wyświetlona zostanie lista
	lokalnych wartości. 


Parametry
~~~~~~~~~
::


	NAME	-	Nazwa lokalnej wartości.

	STRING	-	Wartość lokalnej wartości NAME.


Wynik
~~~~~
::


	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	Set Skok 5
	
	Ustawia lokalną wartość nazwaną "Skok" do wartości '5'.


Zobacz także
~~~~~~~~~~~~
::


	Get, Unset


