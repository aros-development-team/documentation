=================================
AROS järjestelmän kehitysmanuaali
=================================

:Authors:   Aaron Digulla, Bernardo Innocenti
:Copyright: Copyright © 2001, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

.. Warning::

   Tämä dokumentti ei ole valmis! On erittäin todennäköistä että monet osat
   ovat ajastaan jäljessä, sisältävät epäkuranttia tietoa tai puuttuvat
   kokonaan. Jos tahdot auttaa tilanteen korjaamisessa, ota meihin yhteyttä.

.. Contents::

--------------------
Lisensointimenettely
--------------------

Lähes kaikki AROS Development Team:in kirjoittama koodi on lisensoitu AROS
Public License:n (APL) alla, ja tämä on suositeltu vaihtoehto kaikelle uudelle
koodille joka projektille kirjoitetaan.

Ymmärrämme kyllä ettei tämä ole aina mahdollista; esimerkiksi usein me
tahdomme käyttää ulkopuolisten kirjoittamia kirjastoja ja ohjelmia ilman että
meidän tarvitsee keksiä pyörää uudelleen. Tästä syystä on sallittua tuoda
Subversion varastoon koodia jota ei ole lisensoitu APL:n alaisuudessa niin
kauan kuin koodin lisenssi täyttää alla mainitut ehdot.


"contrib"-polun lähdekoodin vaatimukset
=======================================

Sisällyttääksesi lähdekoodia "contrib"-polkuum täytyy seuraavien ehtojen
toteutua:

1. Lisenssin täytyy antaa meidän:

   a. Levittää lähdekoodia.
   b. Levittää binääriä.

   Jos muutokset lähdekoodiin ovat tarpeellisia jotta se saadaan kääntymään ja
   toimimaan AROS:issa, täytyy lisenssin sallia meidän muokata ja levittää
   muokattua koodia sekä lähdekoodina että binäärinä.

2. Lisenssin täytyy olla selvästi ilmaistu tiedostossa ``LEGAL`` jonka tulee
   sijaita kyseisen lähdekoodin juurihakemistossa.


AROS:in juuripolun lähdekoodin vaatimukset
==========================================

Jotta voit sisällyttää sellaista lähdekoodia jota ei ole lisensoitu APL:n
alaisuudessa AROS:in juuripolkuun, täytyy seuraavien ehtojen toteutua:

1. Lähdekoodin täytyy rakentaa jokin komponentti tai olla riippuvaisen jostain
   toisesta komponentista (joka voi olla tai olla olematta APL:ää) jonka
   tahdomme sisällyttää AROS:in binäärijakeluun.

2. Lisenssin täytyy olla Open Source:a kuten on määritetty Open Source
   Initiative:ssa (OSI), tarkoittaen sitä että meillä tulee olla oikeus:

   a. Tehdä muutoksia.
   b. Levittää lähdekoodia (muutoksineen).
   c. Levittää binääriä (mahdollisesti muutettuun lähdekoodiin pohjautuvaa).

3. Lisenssi ei saa olla ristiriidassa APL:n kanssa:

   a. Jos koodista valmistuu itsenäinen ohjelma, lähes mikä tahansa lisenssi
      joka täyttää kohdan 2. ehdot on sallittu.
   b. Jos koodista valmistuu kirjasto, lisenssin täytyy sallia sen
      linkittämisen ilman ongelmia ohjelmiin ja kirjastoihin jotka käyttävät
      eri lisenssiä. Tämä tarkoittaa sitä että GPL:n alaisuudessa julkaistut
      kirjastot eivät ole sallittuja (toisin kuin LGPL:n alaiset).

4. Lisenssi tulee ilmetä selvä sanaisesti tiedostossa ``LEGAL`` jonka tulee
   sijaita kyseessä olevan lähdekoodin juurihakemistossa.


---------------------
Sovitut koodaustyylit
---------------------

Yleinen tyyli
=============

Tätä koodia ylläpitävät monet ja siksi sinun tulee pitää mielessäsi muutamia
seikkoja kun lähetät lähdekoodia:

+ Pidä asiat yksinkertaisina
+ Pidä lähdekoodi siistinä
+ Tiedä mitä olet tekemässä
+ Kerro mitä olet tekemässä
+ Muista että kirjoitat koodin kerran mutta se luetaan usein useiden toimesta


Kommentit
=========

AROS käyttää osaa lähdekoodin kommenteista luomaan sille dokumentaation. Tästä
syystä täytyy pitäytyä tietyssä formaatissa jotta työkalut löytävät hakemansa
tiedon. Kaikki muut kommentit ohitetaan, mutta niiden tulisi selvittää mitä
ajattelit koodia kirjoittaessasi. Jos et saa selvitystä mieleesi, älä kirjoita
koodia kahdesti tällä tavoin::

    /* Tämä lisää 1 t:hen */
    t++;
    
Mitä tulisi kirjoittaa on::

    /* Jatka seuraavalla elementillä */
    t++;


Funktioiden prototyypit ja otsikot
==================================

Jokaisella AROS:in funktiolla täytyy olla täydellinen ANSI C prototyyppi.
Prototyypit tulisi koota yhteen otsikkotiedostoon per lähdetiedosto jos niitä
tarvitaan vain muutamissa tiedostoissa (ei tarvetta kääntää koko projektia
uudelleen jos muutat funktiota jota käytetään vain yhdessä paikassa), tai
yhteen otsikkotiedostoon per hakemisto jos funktiota käytetään yleisesti
kyseisessä hakemistossa, taikka yhteen otsikkotiedostoon per looginen ryhmä
(esim. yksi yhteinen otsikkotiedosto kaikille kirjaston funktioille).

Funktion otsikon (eli kommentin ennen funktiota) tulee olla erityisessä
muodossa koska AutoDoc:it muodostetaan siitä. Tässä siitä esimerkki
(tiedostosta ``AROS/exec/addhead.c``)::

    /*****************************************************************************

        NAME */
    #include <exec/lists.h>
    #include <clib/exec_protos.h>

	    AROS_LH2I(void, AddHead,

    /*  SYNOPSIS */
            AROS_LHA(struct List *, list, A0),
            AROS_LHA(struct Node *, node, A1),

    /*  LOCATION */
            struct ExecBase *, SysBase, 40, Exec)

    /*  FUNCTION
            Insert Node node as the first node of the list.

        INPUTS
            list - The list to insert the node into
            node - This node is to be inserted

        RESULT
            None.

        NOTES

        EXAMPLE
            struct List * list;
            struct Node * pred;

            // Insert Node at top
            AddHead (list, node);

        BUGS

        SEE ALSO
            NewList(), AddTail(), Insert(), Remove(), RemHead(), RemTail(),
            Enqueue()

        INTERNALS

    ******************************************************************************/
    {

As you can see, comments are used to merge the function prototype and the
header into one.

NAME 
    This field contains all necessary prototypes to use the function
    from the user point of view and the name of the function in a `AROS_LH#?()`
    macro (Library Header). These macros are used to make the same code work on
    different kind of hardware. The name of the macro depends on the amount of
    parameters and whether the function needs the library base. `AddHead()`
    does not and therefore an "I" is appended to the macros name. If it need
    the library base (like `AddTask()`), then the "I" is omitted.

    If the function is not part of a shared library and it's arguments must be
    passed in certain registers (eg. callback hooks), you must use
    `AROS_UFH#?()` macros (User Function Header) instead of `AROS_LH#?()`. Append
    the number of arguments to this macro. Since it has never a base, the field
    LOCATION must be omitted and it's not necessary to append the "I" to the
    macros name. An example for a callback hook `foo()` would be::

        AROS_UFH3(ULONG, foo,
            AROS_UFHA(struct Hook, hook,  A0),
            AROS_UFHA(APTR,        obj,   A2),
            AROS_UFHA(APTR,        param, A1)
        )

    (Note that the registers need not have a particular order).

    If the function is not part of a shared library and it's arguments need not
    be in specific registers, you need no `AROS_#?H#?()` macros::

        /*****************************************************************************

            NAME */
        #include <header.h>

	        int foo (

        /*  SYNOPSIS */
	        int a,
	        int b)

        /*  FUNCTION
	        blahblahblah.
	        ...

        *****************************************************************************/
        
SYNOPSIS 
    This field contains all arguments of the function one by
    one in `AROS_LHA()` macros (Library Header Argument). This macro makes sure
    the respective argument is put in the right CPU register when the function
    is called (if possible and necessary). The first argument for the macro is
    the type of the parameter followed by the name of the parameter and the
    register the parameter is expected in. Valid names for registers are D0,
    D1, D2 up to D7 and A0 up to A6.

    If the function is not part of a library but the arguments must be passed
    to it in registers, then use `AROS_UFHA()` macros (User Function Header
    Argument) which take the same parameters as the `AROS_LHA()` macros. Don't
    forget the closing parenthesis for the `AROS_UFC`.

    If the function is not part of a library and the arguments need not be
    passed in registers, no macros are necessary.

LOCATION
    This field is necessary for shared libraries only. It
    contains the last four parameters for the `AROS_LH#?()` macro which are the
    type of the library, the name of the variable, in which the function
    expects the library base, the offset of the function in the jumptable (the
    first vector has 1 and the first vector which may be used by a function is
    5) and the name of the library.

FUNCTION
    This field contains a description of the function.

INPUTS
    This field contains a list of all parameters of the form
    "name - description" or "name, name, name - description". The description
    should tell what the parameter is and what values can be passed to it.
    There is no point in explaining the parameter twice in FUNCTION and here.
    If the function has no parameters, say "None." here.

RESULT
    What the function passes back. This includes return values
    and values passed in arguments of the function. If the function may fail,
    you should explain what it returns on failure and why it might fail.

NOTES
    Important things the user must know or take into account.

EXAMPLE
    This field should contain a small or fully featured
    example.  A good way to present an example is to write some code which tests
    the function, put it into `#ifdef TEST` somewhere in the file and
    put a "See below." here. If you need comments in the code, you have two ways
    for this. If you need only short one-line comments, use C++ style (``//``) 
    comments. Everything from the ``//`` to the end of the line is
    the comment.  If you need more comment, then you can end the comment after the
    `EXAMPLE` and use `#ifdef EXAMPLE` to mask the example out::

            EXAMPLE */
        #ifdef EXAMPLE
	        struct List * list;
	        struct Node * pred;

	        /* Insert Node at top of the list */
	        AddHead (list, node);
        #endif

    Don't use `#ifdef EXAMPLE` if you have a fully featured example (ie. one
    which can be compiled without errors).


BUGS
    This field contains a list of known bugs.

SEE ALSO
    This field contains a list of other functions and documents
    which might be of interest. This includes function which you need to
    initialize, create or destroy an object necessary for this function,
    functions which do similar and opposite things on the main object.

    For example, `SetAttrs()` should contain functions here which can create,
    destroy and manipulate BOOPSI objects but not taglists.

INTERNALS
    This field should contain information for other developers
    which are irrelevant to the user, for example an explanation of the
    algorithm of the function or dependencies.


Muotoilu
========

Tässä esimerkki kuinka muotoilla AROS koodia::

    {
        /* a */
        struct RastPort * rp;
        int               a;

        /* b */
        rp = NULL;
        a  = 1;

        /* c */
        if (a == 1)
            printf ("Init worked\n");

        /* d */
        if
        (
            !(rp = Get_a_pointer_to_the_RastPort
                (
                    some
                    , long
                    , arguments
                )
            )
        ||
            a <= 0
        )
        {
            printf ("Something failed\n");
            return FAIL;
        }

        /* e */
        a = printf ("My RastPort is %p, a=%d\n"
            , rp
            , a
        );

        return OK;
    }


Näyttää rumalta, vai kuinka? :-) Ok, tässä säännöt:

+ Jos useilla riveillä on samankaltaista koodia, asemoi ne toistensa alle (ks.
  a ja b);

+ Sijoita väli operandien ja operaattoreiden väliin

+ Sijoita aaltosulut ``{}``, hakasulut ``[]`` ja sulut ``()`` toistensa alle
  (d) jos niiden välillä on paljon koodia. Hakasulut ja sulut voivat olla
  yhdellä rivillä jos koodia ei ole paljon (c)

+ Sisennä 4:llä välilyönnillä. Kaksi sisennystasoa voidaan merkitä yhdellä
  tabulaattorilla.
  
  Syyt tähän ovat:
  
  1. Vaikka jotkut editorit voivat käyttää mielivaltaisia tabulaattorikokoja,
     on hieman vaikeaa kertoa toisenlaiselle editorille mitä kokoa on käytetty
     koodia kirjoitettaessa.
  2. Suurin osa AROS:in koodista on kirjoitettu näin ja omasi tulisi näyttää
     samalta kuin kaikki muukin.
  3. Voit tulostaa koodin millä tahansa printterillä ilman erikoisia työkaluja
     korjaamaan tabulaattorikokoja.
  4. Suurin osa editoreista omaa nk. "smart tab" ominaisuuden joka tekee juuri
     tämän. Jos omasi ei sitä tue, kirjoita vikaraportti...

+ Jos sinulla on funktio joka ottaa useita argumentteja (d, e) tulisi sinun
  sijoittaa sulut omille riveilleen ja jokainen argumentti omalleen (d) tai
  asemoida ensimmäinen argumentti avautuvan sulun perään (e) ja seuraavat
  argumentit omille riveilleen siten että pilkku on niiden edellä. Sulkeva
  sulku sijaitsee omalla rivillään, asemoituna samalle kohdalle kuin alkava
  lauseke (esim. a ilman avautuvia sulkuja tai `printf()`).

+ Käytä yhtä tyhjää riviä erottamaan loogisia lohkoja. Pitkien kommenttien
  edellä ja jälkeen tulisi olla tyhjä rivi. Lyhyiden kommenttien tulisi
  sijaita juuri ennen koodia jota ne kuvailevat ja ainoastaan yksi tyhjä rivi
  yläpuolellaan.


ROM:iin kirjoitettavissa olevan koodin kirjoittaminen
=====================================================

AROS moduuleissa oleva koodi tulisi kirjoitta sillä tavoin että se voidaan
valaa ROM:iin, FlashRAM:iin tai jonkin muun tyyppiseen vain lukua varten
olevaan muistiin. Seuraavana esitelty ohjelmointityyli on tarkoitettu tekemään
siitä mahdollista. Tottakai se pätee kaikkiin Kickstart moduuleihin ja
koodiin joka saatetaan sijoittaa RAM:iin, on jaettua ja/tai linkitetään
toisiin moduuleihin.

+ ROM moduuleilla ei tule olla .data tai .bss lohkoja. Käytännössä tämä
  tarkoittaa sitä että meidän tulee päästä eroon kaikesta ei-pysyvästä
  globaalista datasta. Amigan Kickstart todistaa että se on sekä mahdollista
  että myös helppoa.

  Jos törmäät ulkoiseen muuttujaan (staattinen taikka ei) jota koodi muokkaa,
  koeta päästä siitä eroon tai siirrä se kirjaston/laitteen ytimeen (tai
  laitekäsittelijäsi noodiin tai luokkasi nk. "userdata":an).

+ Yllä mainittu pätee myös kirjastoihin. Jos olet kirjoittamassa kirjastoa,
  järjestä kaikkien muiden kirjastojen perustukset oman kirjastosi ytimeen.
  BOOPSI luokat voivat varastoida kirjastojen perustat (osoittimia) luokkansa
  yksityisen datan alueella.

+ Koeta asettaa kaikki globaali data `static` ja `const` tyyppiseksi. Voit
  käyttää myös `CONST_STRPTR` ja `CONST_APTR` tyyppejä jotka on määritelty
  tiedostossa ``<exec/types.h>``. `static const`:in käyttäminen sallii
  kääntäjän siirtää tieto ".text" alueelle (elikä koodin sekaan). Jos sinun
  täytyy antaa jokin näistä globaaleista toiselle funktiolle, koeta määrittää
  sen prototyyppi käyttämään myöskin `const`:ia. Huomioi että OS 3.5:stä
  lähtien Olaf Barthel on vihdoin käyttämään `const`:ia <clib/#?_protos.h>
  otsikkotiedostoissa.

+ **ÄLÄ KOSKAAN** koeta muokata puskureita jotka käyttäjä lähettää syötteenä.
  Syöte parametrin konsepti sisältyy usein funktion kuvaukseen. Esimerkiksi
  tiedostonimi joka `Open()`:ille annetaan on selvästi syötemuuttuja eikä
  `Open()`:in tule sitä muokata vaikka se palauttaisikin syötteen ennalleen
  myöhemmin. Pidä mielessä se että puskuri voi sijaita vain luettavaksi
  tarkoitetussa muistissa tai olla jaettuna useiden monisäikeisen ohjelman
  instanssien välillä.

+ Koeta välttää sellaisia isäntäjärjestelmän kutsuja kuten `malloc()` ja
  `free()` jos voit niiden sijaan käyttää `AllocMem()` ja `FreeMem()` kutsuja.
  Tämä siksi koska osoittimet tarkastavat makrot olettavat löytävänsä
  osoittimen Exec:in muistilokeroista `TypeOfMem()` funktion avulla.

  
--------
Porttaus
--------

Tämä osa kuvaa kuinka portata AROS uudenlaiselle raudalle.

1. Valitse kuvaava nimi CPU:lle (kuten i386, m68k, hppa, sparc) ja lisää
   "-emul" (kuten i386-emul) jos porttauksesti tulee ajettavaksi toisen
   järjestelmän alaisuudessa tai "-native" (kuten m68k-native) jos porttaus
   tulee toimimaan itsenäisenä käyttöjärjestelmänä.

2. Valitse tunnistenimi järjestelmällesi (kuten sgi, linux, amiga, jne.).

3. Muokkaa "configure" skriptiä tunnistamaan rautasi tyyppi ja säädä muuttujat
   siten miten järjestelmäsi vaatii.

   KERNEL
    Käyttämäsi CPU:n tyyppi (ks. 1.)

   ARCH
    Järjestelmäsi tunnistenimi (ks. 2.)

   SYS_CC
    C-kääntäjäsi nimi

   COMMON_CFLAGS
    valinnat jotka annetaan jokaiselle C-kääntäjän kutsulle (kuten -g -Wall
	-O0 jne.)

   ILDFLAGS
    Liput ja valinnat jotka annetaan kääntäjälle linkitys vaiheessa jottei se
	käytä standardi kirjastoja tai startup moduuleja (GCC:lle valinnat ovat
	-nostartfiles -nostdlib -Xlinker -i). Tätä käytetään luomaan ajettavia AROS
	ohjelmia. Näissä ei tule olla yhtään selvittämätöntä symbolia ja kaikkien
	viittausten tulee olla täytetty.

   RANLIB
    Sisältää ranlib -ohjelmasi nimen. Jos sellaista ei ole, käytä siinä
	tapauksessa "true":a (tai jonkin muun komennon nimeä joka ei välitä
	annetuista parametreista eikä palauta virhekoodia).

4. Aja "make". Sen ajo keskeytyy koska $(KERNEL):iä ei vielä ole, mutta
   sitä ennen asettaa muutamia tärkeitä tiedostoja ja hakemistopuita.

5. Tee kopio i386-emul:ista $(KERNEL):ksi ja muunna kaikki assembler
   lähdekoodit x86:sta CPU:llesi.

6. Asuta $(KERNEL)/. On suositeltavaa että teet kopion i386-emul:ista koska se
   on ajanmukaisin versio kernelistä.

7. Aja "make machine". Tämä kääntää ohjelman ja ajaa sen. Tulosta voidaan
   käyttää $(KERNEL)/machine.h -tiedoston muokkaamiseen.

8. Aja "make machine.i" $(KERNEL):in alla. Se luo "machine.i" tiedoston jota
   tarvitaan kääntämään assembler tiedostot. "machine.i" sisältää suuren
   määrän järjestelmävakioiden arvoja (funktioiden vektoreiden offsetteja,
   rakenteiden kenttien offsettejä ja järjestelmälippuja).

9. Muokkaa kaikkia #?.s tiedostoja $(KERNEL):issä ja kehitä CPU:llesi sopivat
   konekielikoodit. Kääntääksesi tiedostot, aja "make".

10. Siirry päähakemistoon ja aja "make". Jos virheitä esiintyy, korjaa ne ja
    ja toista kunnes virheitä ei enää esiinny.

11. Siirry bin/$(ARCH)/AROS hakemistoon ja käynnistä "aros". Jos kaikki toimii
    niin kuin pitää, tulisi eteesi avautua AROS:in näyttö. Koska ei ole tapaa
    jolla käyttöjärjestelmä voidaan sammuttaa "siististi", täytyy sinun
    käyttää CTRL-C:tä terminaalissa josta AROS:in käynnistit sen toiminnan
    keskeyttääksesi (tai klikata päänäytön sulkumerkkiä jos sillä sellainen
    on).
