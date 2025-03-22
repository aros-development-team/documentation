==========================
Zune ohjelmistokehitysopas
==========================

:Authors:   David Le Corfec
:Copyright: Copyright © 2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished;
:ToDo:      All


.. Contents::


--------
Esittely
--------

Mikä Zune on?
=============

Zune on olio-orientoitu GUI ("GUI"; graafinen käyttöympäristö) työkalupakki.
Se on lähes klooni (API- ja "Look&Feel"-tasolla) MUI:sta, hyvin tunnetusta
Stefan Stuntz:in luomasta Amigan shareware tuotteesta. Täten MUI-kehittäjät
tuntevat olonsa kotoisaksi Zunen kanssa; muut tulevat löytämään konseptit ja
ominaisuudet jotka ovat yhteisiä Zunelle ja MUI:lle.

+ Ohjelmoijan on paljon helpompi suunnitella ohjelmalleen GUI: ei ole tarvetta
  käyttää vakioituja arvoja, Zune on kirjasinherkkä ja mukautuu mihin tahansa
  ikkunakokoon sommittelujärjestelmänsä vuoksi. Ohjelmoijan tarvitsee antaa
  Zunelle vain hänen GUI:nsa peruspiirteet ja Zune huolehtii automaattisesti
  matalan tason yksityiskohdista.

+ Sivupiirteenä on käyttäjällä enemmän vaikutusvaltaa GUI:n ulkonäköön ja
  tuntumaan: käyttäjä itse määrää asetukset joita Zune käyttää esittämään
  ohjelmoijan suunnitteleman GUI:n.

Zune perustuu BOOPSI-järjestelmään, AmigaOS:ista perittyihin C-kielen
olio-orientoituneisiin puitteisiin. Zune luokat eivät periydy olemassa
olevista BOOPSI laiteluokista vaan Notify -luokasta (Zune hierarkian
perusluokka) joka polveutuu BOOPSI perusluokasta.


Perusedellytykset
=================

Jonkinlainen tietous OO (olio-orientoidusta) ohjelmoinnista on enemmän kuin
tervetullutta. Jos se ei ole tuttua, voi Google auttaa löytämään hyviä
esittelysivuja liittyen tähän klassiseen aiheeseen.

AROS:in (tai AmigaOS:in) API:en ja käsitteiden kuten tag-listojen ja BOOPSI:n
tunteminen on oleellista. Amiga Reference Manual:eihin (lyhyesti "RKM")
käsiksi pääsy on avuksi.

Koska Zune on MUI-klooni, kaikki MUI:ta koskeva dokumentaatio sopii Zuneen.
Viimeisin MUI kehityssarja on saatavana täältä__. Tästä LHA-paketista näitä
kahta dokumenttia suositellaan erityisesti:

+ `MUIdev.guide`, MUI ohjelmoijan dokumentaatio.
+ `PSI.c`, moderneja MUI tapoja kuten OO suunnittelua ja dynaamista objektien
  luomista esittelevän ohjelman lähdekoodi.

__ http://aminet.net/dev/mui/mui38dev.lha

Lisäksi tämä paketti sisältää MUI autodoc:it jotka ovat lähdemateriaalia
kaikille Zune luokille.


--------------
BOOPSI-aapinen
--------------

Käsitteitä
==========

Luokka (Class)
--------------

Luokka määritetään sen nimen, perusluokan ja dispatcher:in mukaan.

+ nimi: joko merkkijono julkiselle luokalle siten että sitä voi mikä tahansa
  järjestelmän ohjelma käyttää tai ei mitään jos luokka on tarkoitettu
  yksityiseksi, elikä käytettäväksi vain yhdessä ohjelmassa.

+ perusluokka: kaikki BOOPSI luokat muodostavat hierarkian jonka kaikki osat
  lopulta perustuvat "rootclass":iksi nimettyyn luokkaan. Se antaa jokaisen
  alaluokan toteuttaa oman versionsa jostain määrätystä perusluokan
  toiminnosta, tai sitten käyttää perusluokan määrittämää toimintaa.

+ dispatcher: antaa kaikki luokan toiminnot (metodit) käyttöön siten että
  jokainen toiminto tulee asiaankuuluvan koodin tai perusluokan
  käsittelemäksi.

BOOPSI tyyppi luokalle on ``Class *`` joka tunnetaan myös ``IClass``:ina.

Objekti
-------

Objekti on luokan instanssi: jokaisella objektilla on omat tietonsa, mutta
jokainen saman luokan objekti käyttäytyy samalla tavoin. Objektilla on monta
luokkaa jos laskemme mukaan sen perusluokat rootclass:iin saakka.

BOOPSI tyyppi objektille on ``Object *``. Sillä ei ole kenttiä joita voit
suoraan käsitellä.

Ominaisuus (Attribute)
----------------------

Ominaisuudet liittyvät objektien instanssien tietoon: et voi käsitellä tätä
dataa suoraan vaan sinun täytyy käyttää objektin käyttöön antamia metodeja
ominaisuuksien hakuun ja muuttamiseen. Ominaisuus toteutetaan nk. Tag:ina
(``ULONG`` arvo OR'attuna ``TAG_USER``:in kanssa).

``GetAttr()`` ja ``SetAttrs()`` metodeja käytetään hakemaan ja muokkaamaan
objektin ominaisuuksia.

Ominaisuudet voivat olla jonkin tai usean tyyppisiä seuraavista:

+ Alustusvaiheessa asetettava (``I``) :
  ominaisuus annetaan parametrina objektia luotaessa.
+ Asetettava (``S``) :
  voit asettaa ominaisuuden arvon milloin tahansa (tai ainakin muulloin kuin
  vain luomisvaiheessa).
+ Haettavissa (``G``) :
  voit hakea ominaisuuden arvon.

Methodi
-------

BOOPSI metodi on funktio joka saa parametreina objektin, luokan ja viestin:

+ objekti: objekti jonka parissa työskennellään.
+ luokka: objektin luokka (tai perusluokka).
+ viesti: tämä sisältää metodin ID:n joka määritää funktion jota
  kutsutaan dispatcher:issa ja jota seuraa kyseisen funktion parametrit.

Lähettääksesi viestin objektille, käytä ``DoMethod()`` funktiota. Se käyttää
ensisijaisesti annettua luokkaa. Jos luokka määrittelee annetun metodin,
käsittelee dispatcher sen. Muussa tapauksessa tarkistetaan seuraavan
perusluokan määrittelyt kunnes metodi löytyy taikka saavutamme rootclass:in
(missä tapauksessa tuntematon viesti heitetään kaikessa hiljaisuudessa
roskiin).

Esimerkkejä
===========

Vilkaistaanpa perusesimerkkiä tästä OOP kehyksestä:

Ominaisuuden haku
-----------------

Kysymme MUI String objektilta sen sisältöä::

    void f(Object *string)
    {
        IPTR result;
        
        GetAttr(string, MUIA_String_Contents, &result);
        printf("String content is: %s\n", (STRPTR)result);
    }

+ ``Object *`` on BOOPSI objektien tyyppi.
+ ``IPTR`` tyyppiä on käytettävä haetun vastauksen tyyppinä koska se voi olla
  joko kokonaisluku tai osoitin. IPTR kirjoitetaan aina muistiin joten
  pienemmän tyypin käyttö johtaisi muistivirheisiin!
+ Sitten kysymme MUI String objektilta sen sisältöä: ``MUIA_String_Contents``
  ominaisuutta, joka on ``ULONG`` (Tag:i).

Zune ohjelmat käyttävät useimmiten mieluummin ``get()`` ja ``XGET()`` makroja::

    get(string, MUIA_String_Contents, &result);
    
    result = XGET(string, MUIA_String_Contents);


Ominaisuuden asetus
-------------------

Vaihdetaanpa merkkijonomme sisältöä::

    SetAttrs(string, MUIA_String_Contents, (IPTR)"hello", TAG_DONE);

+ Osoitinparametrit pitää määrätä näyttämään `IPTR` tyypiltä välttyäksemme
  varoituksilta.
+ Objektiparametrin jälkeen seuraa vaihteleva määrä Tag:eja taglist:inä, jonka
  viimeinen arvo täytyy olla `TAG_DONE`.

Huomaat että ``set()`` makro on hyödyllinen::

    set(string, MUIA_String_Contents, (IPTR)"hello");

Mutta ainoastaan SetAttrs():illa voit asettaa useita ominaisuuksia yhtäaikaa::

    SetAttrs(string,
             MUIA_Disabled, TRUE,
             MUIA_String_Contents, (IPTR)"hmmm...",
             TAG_DONE);


Metodin kutsuminen
------------------

Katsotaanpa miten eniten käytettyä Zune ohjelmien metodia,
tapahtumakäsittelijää, kutsutaan pääohjelmasta::

    result = DoMethod(obj, MUIM_Application_NewInput, (IPTR)&sigs);

+ Parametreina ei anneta taglist:ia, ja siten ne eivät lopu ``TAG_DONE``:en.
+ Osoittimet täytyy määrätä ``IPTR`` tyypiksi välttyäksemme varoituksilta.

---------------
Terve, maailma!
---------------

.. Figure:: /documentation/developers/zune-dev/images/hello.png

    Ensimmäiset asiat ensimmäisinä! Tiesinhän että innostuisit.


Lähdekoodi
==========

Tutkitaanpa ensimmäistä toimivaa esimerkkiämme::

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
    
        // GUI:n luonti
    	app = ApplicationObject,
    	    SubWindow, wnd = WindowObject,
    		MUIA_Window_Title, "Terve, maailma!",
    		WindowContents, VGroup,
    		    Child, TextObject,
    			MUIA_Text_Contents, "\33cTerve, maailma!\nKuinka voit?",
    			End,
    		    Child, but = SimpleButton("_Ok"),
    		    End,
    		End,
    	    End;
    
    	if (app != NULL)
    	{
    	    ULONG sigs = 0;
    
            // napauta "Close" nappia tai paina Esc poistuaksesi
    	    DoMethod(wnd, MUIM_Notify, MUIA_Window_CloseRequest, TRUE,
                     (IPTR)app, 2,
                     MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);
    
            // klikkaa nappia poistuaksesi
    	    DoMethod(but, MUIM_Notify, MUIA_Pressed, FALSE,
                     (IPTR)app, 2,
                     MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);
    
            // avaa ikkuna
    	    set(wnd, MUIA_Window_Open, TRUE);

            // tarkistetaan että ikkuna on auki
    	    if (XGET(wnd, MUIA_Window_Open))
    	    {
                // pääsilmukka
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
	    // tuhotaan ohjelma ja sen objektit
    	    MUI_DisposeObject(app);
    	}
    	
    	return 0;
    }


Huomioitavaa
============

Yleistä
-------

Emme avaa kirjastoja käsin vaan annamme niiden avautua automaattisesti.

GUI:n luonti
------------

Käytämme makroihin perustuvaa kieltä rakentaaksemme GUI:n mahdollisimman
helposti. Zune ohjelmassa on aina yksi ja vain yksi Application objekti::

    :	app = ApplicationObject,

Application voi omistaa 0, 1 tai useampia Window objekteja. Useimmiten yhden::

    :	    SubWindow, wnd = WindowObject,

Annetaan ikkunalle otsikko::

    :		MUIA_Window_Title, "Terve, maailma!",

Window:illa täytyy olla yksi ja vain yksi nk. lapsi (Child), useimmiten ryhmä
(Group). Tämä on pystysuora (VGroup; vertical group), joka tarkoittaa että sen
lapsoset asemoidaan ylhäältä alas::

    :		WindowContents, VGroup,

Ryhmällä täytyy olla ainakin yksi lapsi, tässä tapauksessa pelkkää tekstiä::

    :		    Child, TextObject,

Zune hyväksyy erinäisen määrän nk. escape koodeja (tässä tapauksessa
keskittämään tekstin; \33c) ja rivinvaihdot::

    :			MUIA_Text_Contents, "\33cTerve, maailma!\nKuinka voit?",

Jokaista ``xxxObject``:ia täytyy seurata ``End``-makro (tässä TextObject:ille)::

    :			End,

Lisätään toinen lapsi ryhmään, nappi! Ja varustetaan se näppäinlyhenteellä
``o``, joka merkitään alaviivalla::

    :		    Child, but = SimpleButton("_Ok"),

Päätetään ryhmä::

    :		    End,

Ensimmäinen ikkuna::

    :		End,

Ohjelma::

    :	    End;

Eli, kuka vielä tarvitsee GUI:n rakennukseen työkaluja?! :-)


Virheiden käsittely
-------------------

Jos jotain objektia ohjelmapuussa ei saada luotua, Zune tuhoaa tähän mennessä
luodut objektit ja ohjelman luonti epäonnistuu. Jos näin ei käy, on sinulla
täysin toimiva ohjelma::

    :	if (app != NULL)
    :	{
    :	    ...

Kun ohjelman käyttö loppuu, kutsutaan ``MUI_DisposeObject()`` joka huolehtii kaikkien luotujen objektien ja ohjelman sekä niiden resurssien vapauttamisesta::

    :       ...
    :	    MUI_DisposeObject(app);
    :	}


Tiedotukset
-----------

Tiedotukset ovat yksinkertaisin tapa reagoida tapahtumiin. Periaate? Tahdomme
saada ilmoitukset kun määrätyn objektin määrätty ominaisuus asetetaan johonkin
määrättyyn arvoon::

    :        DoMethod(wnd, MUIM_Notify, MUIA_Window_CloseRequest, TRUE,

Tässä kuuntelemme Window objektimme ``MUIA_Window_CloseRequest``:ia varten ja
meille ilmoitetaan kun ominaisuus asetetaan ``TRUE``:ksi. Mitä tapahtuu kun
tiedotus tulee? Viesti lähetetään objektille; tässä kerromme
Application:illemme palauttaa ``MUIV_Application_ReturnID_Quit`` seuraavalla tapahtumakierroksella::

    :                 (IPTR)app, 2,
    :                 MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);

Koska voimme antaa MUIM_Notify:lle minkä tahansa määrän parametreja, täytyy
meidän kertoa sille montako parametria olemme antamassa; tässä tapauksessa 2.

Nappulaa varten tarkkailemme sen ``MUIA_Pressed`` ominaisuutta: se asetetaan ``FALSE``:ksi aina kun siitä *päästetään irti* (reagoiminen painettaessa on huono tapa, sillä saatat haluta vapauttaa hiiren napin ulkopuolella peruaksesi toiminnon - ja me tahdomme tottakai nähdä miltä nappi painettuna näyttää). Toiminta on tässä tapauksessa sama kuin yllä; Application:ille lähetetään viesti::

    :        DoMethod(but, MUIM_Notify, MUIA_Pressed, FALSE,
    :                 (IPTR)app, 2,
    :                 MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);


Ikkunan avaaminen
-----------------

Ikkunoita ei avata ennen kuin erikseen sitä pyydämme::

    :        set(wnd, MUIA_Window_Open, TRUE);

Jos mikään ei mene pielee, tulisi ikkunan näkyä tässä vaiheessa. Mutta ikkunan
avaaminen voi epäonnistua! Joten älä unohda tarkistaa tilannetta kysymällä
tilan ominaisuutta, jonka tulisi olla TRUE::

    :        if (XGET(wnd, MUIA_Window_Open))


Pääsilmukka
-----------

Annahan kun esittelen pienen ystäväni, ihanteellisen Zune tapahtumasilmukan::

    :        ULONG sigs = 0;

Muista alustaa signaalit nollaksi ... Testisilmukka on
MUIM_Application_NewInput metodi::

    :        ...
    :        while((LONG) DoMethod(app, MUIM_Application_NewInput, (IPTR)&sigs)
    :              != MUIV_Application_ReturnID_Quit)

Se ottaa syötteenä tutkittavien tapahtumien signaalit (``Wait()``:in tulos
taikka 0 (nolla)) ja muuntaa tämän arvon Zunen odottamien signaalien paikaksi
(seuraavalle ``Wait()`` kutsulle) ja palauttaa arvon. Tämä arvon palauttamis
mekanismi oli historiallisesti ainoa tapa reagoida tapahtumiin, mutta se oli
ruma ja sitä kehotetaan välttämään käytettäessä luokkia ja OO mallia.

Silmukan runko on melko tyhjä sillä me vain odotamme signaaleja ja
käsittelemme CTRL-C:n katkaisemaan silmukan::

    :        {
    :            if (sigs)
    :            {
    :                sigs = Wait(sigs | SIGBREAKF_CTRL_C);
    :                if (sigs & SIGBREAKF_CTRL_C)
    :                    break;
    :            }
    :        }


Johtopäätös
-----------

Tämä ohjelma auttaa sinut alkuun Zunen kanssas ja antaa pelailla GUI muotoilun
kanssa, muttei muuta.


-----------------
Tiedotustoiminnot
-----------------

Kuten näemme hello.c:stä, käytetään MUIM_Notify:ä kutsumaan jotain metodia jos
jokin ehto toteutuu. Jos tahdot ohjelman reagoivan jollain määrätyllä tavalla
tapahtumiin, voit käyttää jotain seuraavista kaavoista:

+ MUIM_Application_ReturnID: voit pyytää ohjelmaasi palauttamaan jonkin ID:n
  seuraavalla silmukan kierroksella ja tarkistaa arvon silmukassa. Tämä on
  vanhoollinen ja epäsiisti tapa asioiden hoitoon.
+ MUIM_CallHook, kutsuaksesi standardia Amiga callback "koukkua": tämä on
  keskiverto vaihtoehto, ei olio-orientoitunut muttei kovin kamalan
  näköinenkään.
+ custom method: metodi kuuluu luomallesi luokalle. Tämä on paras ratkaisu
  koska se tukee OO mallia ohjelmissa. Tämä kaava vaatii että luot tapahtuman
  käsittelyyn luokan, eikä siten ole helpoin aloittelijoille tai kiireisille.
