=============================
Krótkie wprowadzenie do AROSa
=============================

:Autorzy:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski 
:Prawa autorskie: Copyright (C) 1995-2002, The AROS Development Team
:Wersja:   $Revision$
:Data:      $Date$
:Status:    Prawie skończony, jak sądzę...


.. Include:: index-abstract.pl.rst


Cele
====

Celem projektu AROS jest stworzenie systemu operacyjnego, który:

1. Jest najbardziej jak to możliwe kompatybilny z AmigaOS 3.1.

2. Może być portowany na różne architektury sprzętowe i procesory, 
   takie jak x86, PowerPC, Alpha, Sparc, HPPA i inne.

3. Powinien być kompatybilny na poziomie binariów z Amigą i na poziomie źródeł
   kompatybilny z każdym innym sprzętem.
  
4. Może działać jako samodzielny system, uruchamiający się bezpośrednio z dysku twardego
   i jako emulacja, otwierająca okno w systemie gospodarza by umożliwić programowanie i
   uruchamianie natywnych amigowych programów w tym samym czasie.

5. Ma funkcjonalność ulepszoną w stosunku do AmigaOS.

By osiągnąć te cele, zastosowaliśmy szereg technik. Przede wszystkim intensywnie wykorzystujemy 
Internet. Możesz wziąć udział w naszym projekcie nawet jeśli chcesz napisać jedną 
funkcję systemu operacyjnego. Najbardziej aktualna wersja źródeł jest dostępna 24 godziny na dobę
a zmiany w nich mogą być wprowadzane w dowolnym czasie.  Niewielka baza danych z otwartymi zadaniami 
pozwala uniknąć dublowania pracy.


Historia
========

Jakiś czas temu w roku 1993, sytuacja Amigi pogorszyła się i niektórzy z jej
fanów zaczęli się zastanawiać nad tym, co należałoby zrobić, by podnieść prestiż 
ich ukochanego komputera. Nagle główny powód braku sukcesu Amigi stał się jasny: 
to było rozpowszechnienie a właściwie jego brak. Amiga powinna być bardziej powszechna 
by stać się bardziej atrakcyjną dla użytkowników i developerów. Zaplanowano osiągnięcie 
tego celu. Jednym z planów było naprawienie bugów AmigaOS, innym stworzenie z niego 
nowoczesnego systemu operacyjnego. Narodził się projekt AOS.

Lecz właściwie co było bugiem? I jak należy te bugi naprawić? Jakie cechy powinien 
posiadać tak zwany *nowoczesny* system operacyjny? I jak powinny być one 
zaimplementowane do AmigaOS?

Dwa lata później, ludzie nadal spierali się w tym temacie i nie napisano ani  
jednej linii kodu (w każdym razie nikt nie zobaczył tego kodu). Dyskusje 
zaczynały się od "musimy mieć ..." następnie ktoś odpowiadał "przeczytaj stare maile" 
lub "to jest niemożliwe do zrobienia ponieważ ..." po czym następowało "mylisz się bo ..." 
itp. 

Zimą 1995 roku, Aaron Digulla miał już dość tej sytuacji i wysłał RFC (request for comments) 
na listę dyskusyjną AOS, w którym zapytał jakie powinny być wymagania minimalne. 
Zaproponowano szereg wariantów i w rezultacie okazało się, żę praktycznie wszyscy
chcieliby zobaczyć otwarty system operacyjny, kompatybilny z AmigaOS 3.1 (Kickstart 40.68). 
Na tej bazie miały się opierać wszystkie dalsze dyskusje by ustalić co jest możliwe a co nie.


Tak rozpoczęły się prace i narodził się AROS.

