.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <wait>`_ `Next <why>`_ 

---------------


=====
Which
=====

Składnia
~~~~~~~~
::


	FILE/A, NORES/S, RES/S, ALL/S


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	Znajduje i wypisuje lokalizację do określonego programu lub katalogu.
	Programy rezydentne są oznaczone jako RESIDENT, jeśli nie to są 
	oznaczone jak wewnętrzne INTERNAL.
	
	Which przeszukuje rezydentną listę, aktualny katalog, ścieżki 
	wyszukiwania i przypis C:. Jeśli obiekt nie został znaleziony, wtedy
	zostanie wysłany kod błędu 5, lecz żaden błąd nie zostanie wyświetlony.


Parametry
~~~~~~~~~
::


	FILE	--	obiekt do wyszukania
	NORES	--	nie zawieraj pr. rezydentnych w wyniku
	RES	--	tylko rezydentne
	ALL	--	szukaj we wszystkich lokalizacjach dla FILE, to 
			spowoduje, że zostanie wyszukiwane we wszystkich 
			dostępnych lokalizacjach, może to spowodować, że po 
			kilka razy wyświetli położenie tego samego obiektu, np.
			obiekt występuje w aktualnym katalogu i przypisie C:
			
