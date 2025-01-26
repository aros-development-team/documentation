===============================
Zune - podręcznik programowania
===============================

:Authors:   David Le Corfec, Camelek.AmigaRulez@wp.pl [ AROS Polska Team ]
:Copyright: Copyright Š 2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished;
:ToDo:      All


.. Contents::


------------
Wprowadzenie
------------

Czym jest Zune?
===============

Zune jest zorientowanym obiektowo zestawem narzędzi GUI ( Graficznego Interfejsu Użytkownika ).
Jest klonem ( w API, i wyglądzie ) MUI, bardzo dobrze znanym shereware'owym produktem Stenan'a Stuntz'a.
Więc programiści MUI będą się czuli jak w domu; pozostali odkryją koncepcję i cechy szczególne, które Zune
dzieli z MUI.

+ Programista ma łatwiejsze zadanie w projektowaniu swojego GUI:
  nie ma potrzeby dla stosowania stałych wartości, Zune automatycznie wybiera czcionkę,
  i dostosowuje ją do konkretnego rozmiaru okna, dzięki swojej budowie.
  Musi tylko podać schemat swojego GUI dla Zune, które
  dostosuje nisko-poziomowe szczegóły za niego automatycznie.

+ Efektem ubocznym jest to, że użytkownik musi kontrolować wygląd i zachowanie ( Look&Feel ) GUI:
  to on decyduje poszczególnymi ustawieniami, które Zune będzie używać,
  aby pokazać GUI, które zaprojektował programista.

Zune jest oparte o BOOPSI, budowa jest wzięta z AmigaOS,
dla zorientowanego-obiektowo programowania w C. Klasy Zune nie pochodzą od istniejących
gadżetów klas BOOPSI; zamiast tego, klasa notyfikacji ( główna klasa
hierarchi Zune ) pochodzi od głównej klasy BOOPSI.

Pomoce
======

Pewna wiedza o OO ( zorientowanym-obiektowo ) programowaniu, jest więcej, niż mile widziana.
Jeśli nie, to Google może pomóc Ci znaleźć informacje z tego zakresu.

Znajomość AROS'a ( lub AmigaOS ) API i koncepcji jak listy Tag oraz BOOPSI
jest niezbędna. Posiadanie Amiga Reference Manual ( RKM - podręcznik Amigi ) jest bardzo przydatna.

Jako, że Zune jest klonem MUI, cała dokumentacja dotycząca MUI, dotyczy
także Zune. W szczególności ostatni dostępny pakiet programistyczny, który
znajduje się tutaj__. W tym archiwum, 2 dokumenty są szczególnie zalecane:

+ 'MUIdev.guide', dokumentacja dla programistów dot. MUI.
+ `PSI.c`, źródła aplikacji demonstrującej wszystkie nowe 
  części MUI, jak zorientowaną-obiektowo budowę, i dynamiczne tworzenie obiektów.

__ http://main.aminet.net/dev/mui/mui38dev.lha

Dodatkowo, to archiwum zawiera opisy funkcji ( autodocs ) MUI, które nawiązują
do wszystkich klas Zune.


---------------
BOOPSI Podstawy
---------------

Koncepcja
=========

Klasa
-----

Klasa mówi sama za siebie, jest nadrzędną klasą i dyspozytorem ( dispatcher ).

+ nazwa: nazwa w postaci string dla klas publicznych, więc te mogą być użyte przez
  każdy program w systemie lub żadna ( nazwa ) jeśli jest to prywatna klasa użyta tylko
  w pojedyńczej aplikacji.

+ klasa nadrzędna: wszystkie klasy BOOPSI tworzą hierarchię połączoną z
  główną klasą, trafnie nazwaną rootclass ( klasa główna ). Pozwala to każdej podklasie na
  implementację swoich własnych wersji specyficznych operacji klas nadrzędnych lub cofnąć
  jedną implementowaną przez jej nadrzędną. Znaną jako klasę podstawową lub super klasę.

+ dyspozytor: daje dostęp do wszystkich operacji ( zwanych metodami ) dostarczanych
  przez tą klasę, upewniając się, że każda operacja jest obsługiwana przez odpowiedni
  kod lub przeszła do swojej super klasy.


Typ BOOPSI dla klasy to ``Class *`` znana jako ``IClass``.

Obiekt
------

Obiekt ma zawartość klasy: każdy obiekt ma własne specyficzne dane, ale wszystkie
obiekty tej samej klasy dzielą to samo zachowanie.
Obiekt ma kilka klas, jeśli policzymy nadrzędne jego prawdziwych klas,
( najbardziej pochodne ) aż do głównej klasy.

Typ BOOPSI dla obiektu to ``Object *``. Nie ma pola, do którego miałbyś
bezpośredni dostęp.

Atrybut
-------

Atrybut jest powiązany z danymi każdego obiektu: nie możesz
mieć dostępu do tych danych bezpośrednio, możesz tylko ustawić, bądź pobrać atrybuty
dostarczane poprzez obiekt do zmodyfikowania jego wewnętrznego stanu. Atrybut jest
załączony jako Tag (wartość ``ULONG`` lub edytuj z ``TAG_USER``).

``GetAttr()`` i ``SetAttrs()`` są używane do modyfikowania atrybutów obiektu.

Atrybuty mogą mieć jedną lub więcej flag:

+ Rozpoczynający-ustawialny (``I``) :
  ten atrybut może być podany jak parameter, podczas tworzenia obiektu.
+ Ustawialny (``S``) :
  Możesz ustawić ten atrybut kiedy tylko chcesz ( albo ostatecznie, nie tylko tworzenia).
+ Pobieralny (``G``) :
  Możesz pobrać wartość tego atrybutu.

Metoda
------

Metoda BOOPSI jest funkcją, która odbiera obiekt, klasę i wiadomość ( message ) jako parametery:

+ obiekt: obiekt, którego potrzebujesz
+ klasa: rozważana klasa dla tego obiektu
+ wiadomość: zawiera ID metody, które określa funkcję do wywołania
  w obrębie dyspozytora, i jest poprzedzona jego parametrami.

Aby wysłać wiadomość do obiektu, używaj ``DoMethod()``. Użyje najpierw prawdziwej
klasy. Jeśli klasa zawiera tą metodę, wtedy jej użyje.
W przeciwnym razie będzie próbować jej nadrzędnej klasy, dopóki wiadomość jest obsługiwana lub
główna klasa została osiągnięta ( w tym przypadku, nieznana wiadomość jest niewidocznie
odrzucana ).

Przykłady
=========

Zobaczmy proste przykłady tej budowy OOP:

Pobieranie atrybutu
-------------------

Będziemy pobierać zawartość String MUI::

    void f(Object *string)
    {
        IPTR result;
        
        GetAttr(string, MUIA_String_Contents, &result);
        printf("Zawartość String to: %s\n", (STRPTR)result);
    }

+ ``Object *`` jest obiektem BOOPSI.
+ ``IPTR`` musi być używany dla wyniku, który może być liczbą całkowitą ( int )
  lub wskaźnikiem. `IPTR` jest zawsze zapisywany w pamięci, więc używanie mniejszego
  typu może prowadzić do uszkodzenia pamięci ( programowej )!
+ Tutaj pytamy o obiekt MUI String dla jego zawartości: ``MUIA_String_Contents``,
  jak każdy inny atrybut, jest to ``ULONG`` (to jest Tag)

Aplikacje Zune częściej używają makr ``get()`` i ``XGET()`` zamiast::

    get(string, MUIA_String_Contents, &result);
    
    result = XGET(string, MUIA_String_Contents);


Ustawianie atrybutu
-------------------

Zmieńmy zawartość naszego String::

    SetAttrs(string, MUIA_String_Contents, (IPTR)"witaj", TAG_DONE);

+ Parametry wskaźników muszą być przypisane do `IPTR`, tak aby uniknąć ostrzerzeń.
+ Po parametrze obiektu, lista Tag jest przekierowana do `SetAttrs` i
  musi się kończyć `TAG_DONE`.

Odkryjesz użyteczność makra ``set()``::

    set(string, MUIA_String_Contents, (IPTR)"hello");

Lecz tylko z ``SetAttrs()`` możesz ustawić kilka atrybutów naraz::

    SetAttrs(string,
             MUIA_Disabled, TRUE,
             MUIA_String_Contents, (IPTR)"hmmm...",
             TAG_DONE);


Wywoływanie metody
------------------

Zobaczmy najczęściej wywoływaną metodę w Zune, metodę procesu zdarzeń
wywoływaną w Twojej pętli głównej::

    result = DoMethod(obj, MUIM_Application_NewInput, (IPTR)&sigs);

+ Parametry nie są listą Tag, i nie kończą się ``TAG_DONE``.
+ Musisz przypisać wskaźniki do ``IPTR``, aby uniknąć ostrzerzeń.

-------------
Witaj Świecie
-------------

.. Figure:: /documentation/developers/zune-dev/images/hello.png

    Proste rzeczy najpierw! Wiem, że to się Wam spodoba.


Źródło
======

Przestudiujmy nasz pierwszy prawdziwy przykład::

    // gcc hello.c -lmui
    #include <exec/types.h>
    #include <libraries/mui.h>
    
    #include <proto/exec.h>
    #include <proto/intuition.h>
    #include <proto/muimaster.h>
    #include <clib/alib_protos.h>
    
    int main(void)
    {
        Object *wnd, *app, *but;
    
        // Tworzenie GUI
    	app = ApplicationObject,
    	    SubWindow, wnd = WindowObject,
    		MUIA_Window_Title, "Witaj Świecie!",
    		WindowContents, VGroup,
    		    Child, TextObject,
    			MUIA_Text_Contents, "\33cWitaj Świecie!\nJak się masz?",
    			End,
    		    Child, but = SimpleButton("_W porządku"),
    		    End,
    		End,
    	    End;
    
    	if (app != NULL)
    	{
    	    ULONG sigs = 0;
    
            // Wciśnij gadżet zamykania, bądź ESC, aby wyjść
    	    DoMethod(wnd, MUIM_Notify, MUIA_Window_CloseRequest, TRUE,
                     (IPTR)app, 2,
                     MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);
    
            // Wciśnij przycisk, aby wyjść
    	    DoMethod(but, MUIM_Notify, MUIA_Pressed, FALSE,
                     (IPTR)app, 2,
                     MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);
    
            // Otwórz okno
    	    set(wnd, MUIA_Window_Open, TRUE);

            // Sprawdź, czy okno zostało otwarte
    	    if (XGET(wnd, MUIA_Window_Open))
    	    {
                // Pętla główna
    		while((LONG)DoMethod(app, MUIM_Application_NewInput, (IPTR)&sigs)
    		      != MUIV_Application_ReturnID_Quit)
    		{
    		    if (sigs)
    		    {
    			sigs = Wait(sigs | SIGBREAKF_CTRL_C);
    			if (sigs & SIGBREAKF_CTRL_C)
    			    break;
    		    }
    		}
    	    }
	    // Zamknij aplikację i wszystkie jej obiekty
    	    MUI_DisposeObject(app);
    	}
    	
    	return(0);
    }


Uwagi
=====

Ogólne
------

Nie będziemy ręcznie otwierać bibliotek, to jest automatycznie robione za nas.

Tworzenie GUI
-------------

Używamy języka opartego o makra, aby w prosty sposób zbudować nasze GUI.
Aplikacje Zune posiadają jeden, i tylko jeden obiekt Application::

    :	app = ApplicationObject,

Aplikacja może mieć 0, 1 lub więcej obiektów Window ( czyli okien ). Najczęściej pojedyńcze::

    :	    SubWindow, wnd = WindowObject,

Bądź miły, podaj tytuł okna::

    :		MUIA_Window_Title, "Witaj Świecie!",

Okno musi mieć jedno, i tylko jedno dziecko ( child ), zwykle grupę. Ta jest pionowa,
a to oznacza, że jej dzieci będą ustawione pionowo::

    :		WindowContents, VGroup,

Grupa musi mieć conajmniej 1 dziecko, a tutaj jest po prostu text::

    :		    Child, TextObject,

Zune akceptuje różne rodzaje kodów ESC ( tutaj, aby wyrównać tekst ) i nowe linie::

    :			MUIA_Text_Contents, "\33cWitaj Świecie!\nJak się masz?",

Makro ``End`` kończy każde rozpoczęte makro ``xxxObject`` ( tutaj, TextObject)::

    :			End,

Dodajmy drugie dziecko do naszej grupy, przycisk! Wraz ze skrótem klawiaturowym ``w``
rozpoczęte poprzez podkreślnik::

    :		    Child, but = SimpleButton("_Ok"),

Zakończ grupę::

    :		    End,

Zakończ okno::

    :		End,

Zakończ aplikację::

    :	    End;

Kto więc jeszcze potrzebuje programu do tworzenia GUI? :]


Kontrola błędów
---------------

Jeśli któryś z obiektów w drzewie aplikacji nie może zostać utworzony, wtedy Zune zamyka
wszystkie obiekty dotychczas stworzone, i tworzenie aplikacji zostaje przerwane. Jeśli nie,
to masz w pełni działającą aplikację::

    :	if (app != NULL)
    :	{
    :	    ...

Gdy już skończyłeś, po prostu wywołaj ``MUI_DisposeObject()`` na swoim
obiekcie aplikacji, aby zamknąć wszystkie obiekty z Twojej aplikacji,
i uwolnij wszystkie zasoby::

    :       ...
    :	    MUI_DisposeObject(app);
    :	}


Powiadomienia
-------------

Powiadomienia są najprostszą drogą do odpowiedzi na zdarzenia. Zasada?
Chcemy być powiadamiani, gdy pewne atrybuty określonego obiektu
są ustawione do wybranej wartości::

    :        DoMethod(wnd, MUIM_Notify, MUIA_Window_CloseRequest, TRUE,

Tutaj nasłuchujemy ``MUIA_Window_CloseRequest`` naszego obiektu Window
i będziemy powiadamiani, gdy tylko atrybut będzie miał wartość ``TRUE``.
Więc co się dzieje, gdy powiadomienie wystąpi? Wtedy wiadomość jest wysyłana
do obiektu, i to tutaj mówimy naszej aplikacji o tym, aby zwróciła 
``MUIV_Application_ReturnID_Quit``, przy kolejnej iteracji pętli::

    :                 (IPTR)app, 2,
    :                 MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);

Jak już określimy wszystko, czego nam potrzeba, tak teraz musimy podać liczbę
dodatkowych parameterów, które dostarczamy do MUIM_Notify: tutaj, 2 parametery.

Dla przycisku, nasłuchujemy jego ``MUIA_Pressed`` atrybutu: jest ustawiony na ``FALSE``
gdy tylko przycisk zostaje *uwolniony* ( odpowiadanie gdy przycisk zostaje wciśnięty
jest złym nawykiem, bo przecież będziesz chciał anulować wybór, poprzez przesunięcie
kursora poza przycisk - i chcemy przecież zobaczyć jak wygąda, gdy jest wciśnięty ).
Zadanie jest to samo co poprzednio, wyślij wiadomość do aplikacji::

    :        DoMethod(but, MUIM_Notify, MUIA_Pressed, FALSE,
    :                 (IPTR)app, 2,
    :                 MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);


Otwieranie okna
---------------

Okna nie są otwarte, aż do momentu, w którym je o to nie poprosimy::

    :        set(wnd, MUIA_Window_Open, TRUE);

Jeśli wszystko idzie dobrze, Twoje okno powinno być wyświetlone w tym momencie. Ale może
coś pójść nie tak! Więc nie zapomnij sprawdzić, poprzez zapytanie atrybutu, czy zwraca `TRUE`::

    :        if (XGET(wnd, MUIA_Window_Open))


Pętla główna
------------

Pozwól, że zapoznam Cię - mój mały przyjacielu - z idealną pętlą zdarzeń::

    :        ULONG sigs = 0;

Nie zapomnij zinicjować `signals` do `0` ... test pętli jest metodą `MUIM_Application_NewInput`::

    :        ...
    :        while((LONG) DoMethod(app, MUIM_Application_NewInput, (IPTR)&sigs)
    :              != MUIV_Application_ReturnID_Quit)

Jako wejście pobiera `signals` ze zdarzeń, które musi przetworzyć ( wynik z ``Wait()`` lub `0` ),
zmodyfikuje tą wartość do miejsca, gdzie sygnały Zune czekają na ( do następnego ``Wait()``)
i zwrócą wartość. Ten mechanizm zwracania wartości, był historycznie jedną drogą do 
odpowiedzi na zdarzenia, ale był brzydki i został zarzucony w wizji wspaniałych 
zaawansowanych klasach i obiektowo-zorientowanej budowie.

Całość tej pętli jest całkiem pusta, my tylko czekamy na sygnały
Ctrl-C aby przerwać pętlę::

    :        {
    :            if (sigs)
    :            {
    :                sigs = Wait(sigs | SIGBREAKF_CTRL_C);
    :                if (sigs & SIGBREAKF_CTRL_C)
    :                    break;
    :            }
    :        }


Wniosek
-------

Ten program pozwala Ci na rozpoczęcie zabawy z GUI Zune, lecz na nic więcej.

-------------------
Zadania powiadomień
-------------------

Jak widzisz w `hello.c`, używasz `MUIM_Notify` do wywołania metody jeśli zostanie
spełniony określony warunek.
Jeśli chcesz aby Twoja aplikacja oddziaływała w określony sposób na zdarzenia, to
możesz użyć jednego z poniższych schematów:

+ `MUIM_Application_ReturnID`: możesz zapytać swoją aplikację, aby zwróciła ID
  przy następnej iteracji, i sprawdziła wartość w pętli. To jest paskudna stara
  metoda robienia takich rzeczy.
+ `MUIM_CallHook`, do wywołania standardowych Hook AmigaOS: to jest średnie rozwiązanie,
  nie jest zorientowane-obiektowo, ale nie tak paskudne.
+ klasy zaawansowane: ta metoda polega na jednej z Twoich klas. To jest najlepsze rozwiązanie
  jako, że obsługuje zorientowaną-obiektowo budowę w aplikacjach.
  Zmusza Cię do stworzenia własnej klasy, więc może nie być takie łatwe dla
  początkujących lub ludzi, którzy nie mają na to czasu.
