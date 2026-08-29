====================
FAQ - Usein kysyttyä
====================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::


Yleiset kysymykset
==================

Voinko esittää kysymyksen?
--------------------------

Totta kai voit. On useita paikkoja, joissa voit esittää kysymyksiä, keskustella
AROS:ista ja saada apua. AROS:in kehittäjien postituslistat ja Slack-kanavat on
lueteltu `AROS:in Git-tietovaraston wikissä`__. Lisäksi on olemassa yhteisön
foorumeita ja keskusteluja erilaisilla Amigaan liittyvillä foorumeilla, joilta
voit löytää ihmisiä, joilla on kokemusta AROS:in ja muiden Amigan kaltaisten
järjestelmien käytöstä.

Verkossa on lisäksi saatavilla huomattava määrä dokumentaatiota ja kirjallisuutta
AROS:ista, AmigaOS:ista ja niihin liittyvistä Amigan kaltaisista järjestelmistä,
joista voi saada hyödyllistä tausta- ja käytännön tietoa.

Tätä FAQ:ta päivitetään sitä mukaa, kun hyödyllisiä kysymyksiä ja vastauksia
ilmenee, mutta yhteisön keskustelut ja kehityskanavat sisältävät todennäköisesti
tuoreempaa tietoa.

__ https://github.com/aros-development-team/AROS/wiki


Mistä AROS:issa on oikein kyse? 
-------------------------------

Lueha esittely_.

.. _esittely: ../../introduction/index


Mikä on AROS:in laillinen status?
---------------------------------

Eurooppalainen laki sanoo että on laillista soveltaa takaperoisia suunnittelu
tekniikoita yhteistoiminnan saavuttamiseen. Se sanoo myös että on laitonta
levittää näillä keinoilla saavutettua tietoa. Käytännössä tämä tarkoittaa sitä
että on sallittua purkaa ohjelmisto tai resurssi ja kirjoittaa jotain joka on
sen kanssa yhteensopiva (esim. olisi laillista purkaa Word osiin
kirjoittaakseen ohjelman joka muuntaa Word:in dokumentteja ASCII muotoiseksi
tekstiksi).

Rajoituksia tottakai on: ei ole sallittua purkaa ohjelmistoa jos siten saatava
tieto voidaan hankkia muilla keinoin. Etkä saa levittää muille prosessissa
oppimaasi tietoa. Kirja kuten "Windows sisältä" on täten laiton, tai ainakin
hyvin hämärällä rajamaalla laillisuuden suhteen.

Koska vältämme purkutekniikoita ja sen sijaan käytämme yleisesti saatavilla
olevaa tietoa (esim. ohjelmointioppaita), joka ei kuulu minkään
salassapitosopimuksen (NDA) piiriin, ei yllä mainittu suoraan koske AROS:ia. Mikä on merkityksellisintä
on lain sanoma: on laillista kirjoittaa sellaisia ohjelmia jotka ovat
yhteensopivia muiden ohjelmien kanssa. Tästä syystä uskomme että AROS on lain
suojaama.

Patentit ja otsikkotiedostot ovat eri asia. Voimme käyttää patentoituja
algoritmeja euroopassa koska eurooppalainen laki ei salli algoritmeja
patentoitavan. Mutta koodia joka käyttää USA:ssa patentoituja algoritmeja ei
voida maahantuoda USA:an. Esimerkkejä patentoiduista algoritmeista
AmigaOS:issa ovat näytön raahaus ja valikoiden täsmällinen toiminta. Tästä
syystä vältämme toteuttamasta näitä ominaisuuksia täsmälleen samalla tavoin.
Otsikkotiedostojen pitää toisaalta olla yhteensopivia mutta niin erilaisia
alkuperäisestä kuin vain on mahdollista.

Välttääksemme ongelmia haimme virallista hyväksyntää Amiga Inc.:iltä. He ovat
melko positiivisia yritystämme kohtaan mutta huolissaan laillisista
seuraamuksista. Suosittelemme että otat tosiasiana sen että Amiga Inc. ei
lähettänyt meille nk. "cease and desist" kirjeitä positiivisena merkkinä.
Molemminpuolista hyvää tahtoa lukuunottamatta ei ikävä kyllä vielä ole tehty
laillisesti sitovaa sopimusta.


Miksi tähtäätte vain 3.1 yhteensopivuuteen?
-------------------------------------------

On käyty keskusteluja edistyneen, AmigaOS:in ominaisuudet sisältävän
käyttöjärjestelmän kirjoittamisesta. Tästä on luovuttu hyvästä syystä.
Ensinnäkin kaikki olivat yhtä mieltä siitä, että nykyistä AmigaOS:ia pitäisi
parantaa, mutta kukaan ei tiennyt, miten se tehdään, eikä edes siitä oltu
yhtä mieltä, mitä pitäisi parantaa tai mikä on tärkeää. Jotkut halusivat
esimerkiksi muistinsuojausta, mutta eivät pitäneet sen hinnasta (saatavilla
olevan ohjelmiston laajamittainen uudelleenkirjoitus ja nopeuden lasku).

Lopulta keskustelut päättyivät joko riitelyyn tai samojen argumenttien
toisteluun. Niinpä päätimme aloittaa jostakin, minkä osaamme hoitaa. Kun
meillä sitten on kokemusta nähdä, mikä on mahdollista ja mikä ei, voimme
päättää parannuksista.

Haluamme myös olla binääriyhteensopivia alkuperäisen AmigaOS:in kanssa
Amiga-tietokoneilla. Syy tähän on yksinkertaisesti se, että uudella
käyttöjärjestelmällä, jolle ei ole ohjelmia, on vain vähän mahdollisuuksia
selviytyä. Siksi yritämme tehdä siirtymän alkuperäisestä käyttöjärjestelmästä
uuteen mahdollisimman kivuttomaksi (mutta ei siinä määrin, ettemme voisi
parantaa AROS:ia jälkeenpäin). Kuten tavallista, kaikella on hintansa, ja
yritämme huolellisesti päättää, mikä tuo hinta voisi olla ja olisimmeko me ja
kaikki muut valmiita maksamaan sen.


Ettekö voi tehdä ominaisuutta XYZ?
----------------------------------

Emme, koska:

a) Jos se olisi todella tärkeä, se löytyisi jo alkuperäisestä
   käyttöjärjestelmästä. :-)
b) Mikset tee sitä itse ja lähetä meille?

Syy tähän asenteeseen on se että on paljon niitä jotka ajattelevat heidän
esittämänsä ominaisuuden olevan sen kaikkein tärkeimmän ja ettei AROS:illa ole
tulevaisuutta jos kyseistä ominaisuutta ei toteuteta heti paikalla. Meidän
kantamme on se että AmigaOS, jonka AROS tähtää toteuttamaan, voi tehdä kaiken
sen mitä modernilta käyttöjärjestelmältä odotetaan. Näemme kyllä että on
alueita joilla AmigaOS:ia voisi parantaa, mutta jos me teemme sen, kuka
kirjoittaa loput käyttöjärjestelmästä? Loppujen lopuksi meillä olisi paljon
mukavia parannuksia alkuperäiseen AmigaOS:iin, jotka rikkoisivat suurimman
osan saatavilla olevista ohjelmistoista, eivätkä olisi minkään arvoisia koska
loput käyttöjärjestelmästä puuttuisi.

Täten olemme päättäneet torjua kaikki yritykset toteuttaa uusia ominaisuuksia
käyttöjärjestelmään ennen kuin se on enemmän taikka vähemmän valmistunut.
Olemme melko lähellä mainittua tilaa ja AROS:iin on toteutettu muutamia
innovaatioita joita ei ole AmigaOS:issa.


Kuinka yhteensopiva AROS on AmigaOS:in kanssa?
----------------------------------------------

Erittäin yhteensopiva. Odotamme että AROS ajaa Amigalla olemassa olevia
ohjelmia ongelmitta. Muulle raudalle olemassa olevat ohjelmat täytyy kääntää
uudelleen. Tarjoamme esiprosessoijan jota voit käyttää koodillesi muuttamaan
ja/tai varoittamaan sellaisesta koodista joka ei toimi AROS:issa.

Tätä nykyä ohjelmien porttaus AmigaOS:ista AROS:iin on suurimmalta osalta
pelkkää uudelleen kääntämistä, muutaman harvan viilauksen kera. On toki
ohjelmia joihin tämä ei päde, mutta suurin osa uusista ohjelmista kääntyy
kakistelematta.


Mille raudalle AROS on saatavilla?
----------------------------------

Tällä hetkellä AROS on saatavilla varsin käyttökelpoisessa tilassa natiivina ja
isännöitynä (Linuxin alla) i386-arkkitehtuurille (eli IBM PC AT
-yhteensopiville klooneille) sekä X86_64:lle. Työn alla on eri valmiusasteilla
olevia porttauksia 68k-Amigoille ja Raspberry Pi:lle.


Tuleeko AROS PowerPC:lle?
-------------------------

Se on jo saatavilla. AROS:in ylläpidetyt PowerPC-porttaukset ovat sam440-ppc
ja darwin-ppc.


Miksi käytätte Linux:ia ja X11:ta?
----------------------------------

Käytämme Linux:ia ja X11:ta nopeuttaaksemme kehitystyötä. Esimerkiksi, jos
toteutat uuden funktion ikkunan avaamiseksi, voit yksinkertaisesti kirjoittaa
kyseisen funktion eikä sinun tarvitse kirjoittaa satoja muita funktioita
layers.library:yn, graphics.library:yn, läjään laiteajureita ja sen semmoisiin
joita funktiosi saattaa tarvita.

Päämäärähän AROS:illa on olla itsenäinen Linux:ista ja X11:sta (mutta silti
ajettavissa niillä tahdottaessa), mikä on hitaasti muuttumassa todellisuudeksi
natiivien AROS versioiden muodossa. Tarvitsemme yhä Linux:ia kehitystyöhön,
koska hyviä kehitys työkaluja ei ole vielä AROS:ille portattu GCC:tä
lukuunottamatta.


Kuinka aiotte tehdä AROS:ista siirrettävän?
-------------------------------------------

Yksi suurimmista uusista ominaisuuksista AROS:issa AmigaOS:iin verraten on
HIDD (Hardware Independed Device Drivers) järjestelmä, joka sallii meidän
porttaavan AROS:in eri raudalle melkoisen helposti. Käyttöjärjestelmän
ydinkirjastot eivät keskustele suoraan raudan kanssa, vaan toimivat HIDD:ien
välityksellä, jotka ovat koodattu olio-orientoituvaa järjestelmää käyttäen
joka tekee HIDD:ien vaihtamisen ja koodin uudelleen käytön helpoksi.


Miksi ajattelette että AROS tulee menestymään?
----------------------------------------------

Kuulemme päivät pitkät monilta ettei AROS tule menestymään. Useimmat heistä
eivät joko tiedä mitä me olemme tekemässä tai ajattelevat että Amiga on jo
kuollut. Kun olemme selvittäneet ensin mainituille mitä teemme, useimmat
heistä toteavat että se on sittenkin mahdollista. Viimeksi mainitut ovatkin
vaikeampi pala. No, onko Amiga kuollut? Ne jotka vielä käyttävät Amigoitaan
todennäköisesti kertovat ettei se kuollut ole. Räjähtikö A500:si tai A4000:si
kun Commodore meni konkurssiin? Hajosiko se samalla kuin Amiga Technologies?

Tosiasia on että Amigalle ei tehdä paljoa ohjelmia (vaikkakin Aminet näyttää
puksuttavan varsin hyvin eteenpäin) ja rautaa kehitetään hitaasi (mutta
näyttää siltä että hämmästyttävimmät laitteet ilmestyvät juuri nyt).
Amiga-yhteisö (joka on yhä hengissä) näyttää istuvan aloillaan ja odottavan.
Ja jos joku julkaisee tuotteen joka on hiukan kuin Amiga vuonna 1984, laite
lähtee nousuun. Kukapa tietää, ehkä sen mukana tulee CD jossa lukee "AROS".
:-)


Mitä teen jos AROS ei käänny?
-----------------------------

Anna ongelmasta yksityiskohtaiset tiedot, mukaan lukien komento, jolla käänsit
AROS:in, sekä kaikki saamasi virheilmoitukset, ja pyydä apua `AROS:in
kehittäjien postituslistalla`__ tai AROS:in Slack-kanavalla. Nämä ovat oikeat
paikat keskustella käännösongelmista ja muista AROS:in kehitykseen liittyvistä
asioista, ja siellä kehittäjät ja muut käännösjärjestelmän tuntevat henkilöt
voivat auttaa ongelman selvittämisessä.

Sinun ei tarvitse olla vakiintunut AROS-kehittäjä pyytääksesi apua
käännösongelmaan. Jos käännät AROS:ia lähdekoodista, työskentelet jo
kehitysympäristön kanssa.

__ https://www.aros.org/


Tuleeko AROS:ille muistin suojausta, SVM, RT, ...?
--------------------------------------------------

Useat sadat Amiga-asiantuntijat (ja sellaisina itseään pitäneet) yrittivät
kolmen vuoden ajan löytää tavan toteuttaa muistinsuojaus (MP) AmigaOS:iin. He
eivät onnistuneet. Tämä viittaa siihen, että on varsin epätodennäköistä, että
tavallisessa AmigaOS:issa olisi koskaan Unixin tai Windows NT:n kaltaista
muistinsuojausta.

Kaikki ei kuitenkaan ole menetetty. Suunnitelmissa on integroida AROS:iin
MP:n muunnelma, joka mahdollistaa ainakin sellaisten uusien ohjelmien
suojaamisen, jotka tietävät siitä. Jotkin ponnistelut tällä alueella
näyttävät todella lupaavilta. Sitä paitsi koneen kaatuminen ei oikeastaan ole
ongelma. Ongelma on pikemminkin se, että:

1. Sinulla ei ole hyvää käsitystä siitä, miksi se kaatui. Käytännössä joudut
   tökkimään kolmenkymmenen metrin kepillä sankan sumun peittämää suota.
2. Menetät työsi.

Koneen uudelleenkäynnistys ei todellakaan ole ongelma.

Voisimme yrittää rakentaa järjestelmän, joka ainakin varoittaa, jos jotain
epäilyttävää tapahtuu, joka osaa kertoa hyvin yksityiskohtaisesti, mitä
tapahtui koneen kaatuessa, ja joka antaa sinun tallentaa työsi ja *vasta
sitten* kaatuu. Se tarvitsisi myös keinon tarkistaa, mitä on tallennettu,
jotta voit olla varma, ettet jatka vioittuneilla tiedoilla.

Sama koskee SVM:ää (sivutettava virtuaalimuisti), RT:tä (resurssien seuranta)
ja SMP:tä (symmetrinen moniprosessointi). Suunnittelemme parhaillaan, miten
ne toteutetaan, ja varmistamme, että näiden ominaisuuksien lisääminen on
kivutonta. Ne eivät kuitenkaan ole juuri nyt korkeimmalla prioriteetilla.
Hyvin alkeellinen RT on kuitenkin jo lisätty.


Voinko tulla beta-testaajaksi?
------------------------------

Tottakai, ei mitään ongelmaa siinä. Tosiasiassa tahdomme niin useita
beta-testaajia kuin vain mahdollista, joten kaikki ovat tervetulleita! Emme
tosin pidä listaa beta-testaajista, joten kaikki mitä sinun tulee tehdä on
ladata AROS, testata mitä vain tahdot ja lähettää meille siitä raportti.


Mikä on AROS:in ja UAE:n suhde?
-------------------------------

UAE on Amiga-emulaattori, ja sellaisena sen tavoite on hieman erilainen kuin
AROS:in. UAE haluaa olla binääriyhteensopiva jopa pelien ja suoraan rautaa
käyttävän koodin kanssa, kun taas AROS haluaa natiiveja sovelluksia. Siksi
AROS on paljon nopeampi kuin UAE, mutta UAE:n alla voit ajaa enemmän
ohjelmia.

Olemme löyhästi yhteydessä UAE:n tekijään, ja on hyvät mahdollisuudet, että
UAE:n koodia ilmestyy AROS:iin ja päinvastoin. UAE:n kehittäjät ovat
esimerkiksi kiinnostuneita käyttöjärjestelmän lähdekoodista, koska UAE voisi
ajaa joitakin sovelluksia paljon nopeammin, jos jotkin tai kaikki
käyttöjärjestelmän funktiot voitaisiin korvata natiivilla koodilla. Toisaalta
AROS voisi hyötyä sisäänrakennetusta Amiga-emulaatiosta.

Koska useimmat ohjelmat eivät ole AROS:issa saatavilla heti alusta alkaen,
Fabio Alemagna on portannut UAE:n AROS:iin, joten voit ajaa vanhoja ohjelmia
ainakin emulaattorissa.

Contribissa on saatavilla myös `E-UAE`__, joka on UAE parannettuna joillakin
`WinUAE`__:n ominaisuuksilla.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


Mikä on AROS:in suhde Haage & Partner:iin?
------------------------------------------

Haage & Partner käytti osia AROS:ista AmigaOS 3.5:ssä ja 3.9:ssä, esimerkiksi
colorwheel ja gradientslider objekteja ja SetENV komentoa. Tämä tarkoittaa
sitä että tavallaa AROS:ista on tullut osa virallista AmigaOS:ia. Tämä tosin
ei tarkoita sitä että AROS:in ja Haage & Partner:in välillä olisi virallista
suhdetta. AROS on Open Source projekti ja kuka tahansa voi käyttää koodiamme
omissa projekteissaan niin kauan kuin he noudattavat lisenssiämme.


Mikä on AROS:in suhde MorphOS:iin?
----------------------------------

AROS:in ja MorphOS:in suhde on samankaltainen kuin AROS:in ja Haage &
Partner:in suhde. MorphOS käyttää osia AROS:ista nopeuttaakseen
kehitystyötään; lisenssiämme noudattaen. Ja kuten Haage & Partner:in kanssa,
tämä hyödyttää molempia sillä MorphOS tiimi saa vauhtia kehitykseen AROS:ilta
ja AROS saa hyviä parannuksia lähdekoodiin MorphOS tiimiltä. AROS:illa ja
MorphOS:illa ei ole virallista suhdetta; tämä on yksinkertaisesti vain kuinka
Open Source kehitys toimii.


Mitä ohjelmointikieliä on saatavilla?
-------------------------------------

GCC (C, C++) on saatavilla sekä natiivina että ristikääntäjänä.

Natiivisti saatavilla olevat kielet ovat Python_, Regina_, Lua_ ja
Hollywood_:

+ Python on skriptikieli, josta on tullut varsin suosittu sen miellyttävän
  suunnittelun ja ominaisuuksien ansiosta (olio-ohjelmointi,
  moduulijärjestelmä, paljon hyödyllisiä moduuleja mukana, selkeä syntaksi,
  ...). AROS-porttausta varten on perustettu erillinen projekti, joka löytyy
  osoitteesta https://pyaros.sourceforge.net/.

+ Regina on siirrettävä, ANSI-yhteensopiva REXX-tulkki. AROS-porttauksen
  tavoitteena on yhteensopivuus klassisen AmigaOS:in ARexx-tulkin kanssa.

+ Lua on tehokas, nopea, kevyt ja upotettava skriptikieli. AROS-porttausta on
  laajennettu kahdella moduulilla: siamiga ja zulu. Ensimmäisessä on
  muutamia yksinkertaisia grafiikkakomentoja, jälkimmäinen on rajapinta
  Zuneen.

+ Hollywood on kaupallinen ohjelmointikieli multimediasovelluksiin, pelit
  mukaan lukien. Voit ostaa version i386-aros:ille (ABI v0).

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


Miksei AROS:issa ole m68k emulaattoria?
---------------------------------------

Emulaattori janus-uae:ta yritetään jo integroida.

Mutta miksi emme yksinkertaisesti toteuta virtuaalista m68k-prosessoria, jotta
ohjelmat voisi ajaa suoraan AROS:issa? Ongelma on siinä, että m68k-ohjelmat
odottavat datan olevan big-endian-muodossa, kun taas AROS toimii myös
little-endian-prosessoreilla. AROS:in ytimen little-endian-rutiinien pitäisi
työskennellä emulaation big-endian-datan kanssa. Automaattinen muunnos
vaikuttaa mahdottomalta (vain yksi esimerkki: AmigaOS:in eräässä
tietorakenteessa on kenttä, joka sisältää joskus yhden ULONGin ja joskus kaksi
WORDia), koska emme voi tietää, miten muutama tavu RAM-muistissa on koodattu.

.. _UAE: http://www.amigaemulator.org/


Tuleeko AROS:ista Kickstart ROM:ia?
-----------------------------------

Ne ovat jo saatavilla amiga-m68k-boot-iso-paketissa hakemistossa boot/amiga.


Yölliset koontiversiot (nightly builds)
=======================================

Mitä ovat yölliset koontiversiot (nightly builds)?
--------------------------------------------------

AROS:in yölliset koontiversiot ovat kehitysversioita, jotka tuotetaan AROS:in
lähdekoodipuun senhetkisestä tilasta. Ne on tarkoitettu ensisijaisesti
kehittäjille, testaajille ja niille, jotka haluavat seurata AROS:in uusinta
kehitystä ja kokeilla sitä. Niitä tulisi siksi pitää jatkuvasti muuttuvana
kehitystilannekuvana eikä viimeisteltynä, loppukäyttäjille suunnattuna
julkaisuna. Niiden kokoonpanon tarkoituksena on näin ollen tarjota
yhdenmukainen ympäristö AROS:in nykyisen kehityksen testaamiseen, ei edustaa
lopullista valintaa työpöydän ulkoasusta tai käyttökokemuksesta.

Miksi yölliset koontiversiot eivät käytä "kauniita" teemoja?
------------------------------------------------------------

Ongelma on siinä, että "kaunis" on subjektiivista. Ei ole olemassa
oletusteemaa, joka miellyttäisi kaikkia, ja projektin oletusarvon muuttaminen
aina, kun se ei jotakuta miellytä, tekee estetiikasta vain loputtoman
"vaihtakaa se takaisin" -kierteen.

Siksi ero AROS:in itsensä ja yksittäisten jakeluiden välillä on tärkeä.
Jakeluiden ylläpitäjät saavat vapaasti päättää, miltä heidän jakelunsa näyttää
ja millä oletusasetuksilla se toimitetaan.

Yöllisten koontiversioiden ei ole tarkoitus olla viimeistelty, tiettyä
näkemystä edustava työpöytätuote; ne ovat yhdenmukainen ympäristö kehitystä
ja testausta varten. Jos pidät enemmän erilaisesta ulkoasusta, muokkaa sitä
tai rakenna jakelu tuon mieltymyksen ympärille.

Henkilökohtainen mieltymys on täysin perusteltu syy muokata omaa
järjestelmäänsä, mutta se ei ole erityisen hyvä peruste muuttaa
pääprojektin oletusasetuksia.


Ohjelmistokysymykset
====================

Mikä on Zune?
-------------

Siinä tapauksessa että luit tältä saitilta Zunesta, on se uudelleen
kirjoitettu Open Source versio MUI:sta, joka on vahva (käyttäjä- ja
kehittäjäystävällisyydessä) olio-orientoitunut shareware GUI työkalupaketti ja
de-facto standardi AmigaOS:issa. Zune on AROS kehityksessä suosittava GUI
työkalupaketti. Nimi itsessään ei tarkoita mitään - se vain kuulostaa hyvältä.


Mitä ovat Wandererin näyttämät "Graphical"- ja "other"-muistit?
---------------------------------------------------------------

Tämä muistin jako on enimmäkseen jäänne Amigan menneisyydestä, jolloin
grafiikkamuisti oli sovellusmuistia, ennen kuin järjestelmään lisättiin
toista muistia, nk. FAST RAM:ia, jossa sovellukset sijaitsivat, kun taas
grafiikka, äänet ja jotkin järjestelmärakenteet olivat edelleen
grafiikkamuistissa.

Isännöidyssä AROS:issa ei ole lainkaan "Other" (FAST) -muistia, vaan
ainoastaan GFX-muistia. Natiivissa AROS:issa GFX-muistia voi olla enintään
16 Mt, vaikka se ei kuvasta näytönohjaimen muistin tilaa... Sillä ei ole
mitään tekemistä näytönohjaimesi muistin määrän kanssa.

*Pitkä vastaus*
Grafiikkamuisti tarkoittaa i386-natiivissa järjestelmän alinta 16 Mt:a
muistia. Tuo alin 16 Mt on alue, jolla ISA-kortit voivat tehdä DMA-siirtoja.
Muisti, joka varataan MEMF_DMA- tai MEMF_CHIP-lipuilla, päätyy sinne, ja
kaikki muu toiseen (fast) muistiin.

Käytä komentoa C:Avail HUMAN saadaksesi tietoa muistista.


Mitä Wandererin Snapshot <all/window> -toiminto oikeastaan tekee?
-----------------------------------------------------------------

Tämä komento tallentaa kaikkien ikkunoiden (tai yhden ikkunan) kuvakkeiden
sijainnit.


Mitkä ovat isännöidyn AROS:in suoritettavan tiedoston komentorivivalitsimet?
----------------------------------------------------------------------------

Saat niistä luettelon suorittamalla komennon ./aros -h.


Mitä AROS-natiivin ytimen valitsimia GRUB-rivillä käytetään?
------------------------------------------------------------

Tässä muutamia::

    floppy=<disabled/nomount>   Asettaa trackdisk-laitteen valinnat
        disabled                - estää trackdisk.device:n alustuksen
                                  kokonaan
        nomount                 - alustaa trackdisk.device:n, mutta ei
                                  luo DOS-laitteita

    ATA=32bit           - Ottaa käyttöön 32-bittisen I/O:n kiintolevyajurissa
                          (turvallinen)
    forcedma            - Pakottaa DMA:n käyttöön kiintolevyajurissa
                          (pitäisi olla turvallinen, mutta ei välttämättä ole)
    gfx=<hidd name>     - Käyttää nimettyä HIDD:tä grafiikka-ajurina
    lib=<name>          - Lataa ja alustaa nimetyn kirjaston/HIDD:n

Huomaa, että valitsimissa isot ja pienet kirjaimet ovat merkitseviä.


Kuinka teen DOS-skriptin, joka suoritetaan automaattisesti asennetulle paketille?
---------------------------------------------------------------------------------

1) Luo alihakemisto S ja lisää sinne tiedosto nimeltä 'Package-Startup', joka
   sisältää sen paketin DOS-skriptin, jonka haluat suorittaa jokaisella
   käynnistyksellä.

2) Luo tiedostoon envarc:sys/packages muuttuja, joka sisältää polun pakettisi
   S-alihakemistoon.

Esimerkki hakemistorakenteesta::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

Muuttujan nimi tiedostossa envarc:sys/packages voisi olla 'myapp' (nimi on
vain esimerkki); sen sisältö olisi tällöin 'sys:extras/myappdir'.

Startup-sequence kutsuisi tällöin Package-Startup-skriptiä.


Laitteistokysymykset
====================

Mistä löydän AROS:in laitteistoyhteensopivuuslistan?
----------------------------------------------------

Löydät sellaisen `AROS-wikin <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__
sivulta. AROS:in käyttäjät ovat saattaneet tehdä myös muita listoja.


Miksi AROS ei käynnisty levyltä, joka on asetettu IDE-kanavan SLAVE-laitteeksi?
-------------------------------------------------------------------------------

AROS:in pitäisi kyllä käynnistyä, vaikka levy on SLAVE, mutta VAIN jos
MASTER-paikassa on myös levy. Tämä vaikuttaa IDE-määrittelyn mukaiselta
oikealta kytkennältä, ja AROS noudattaa sitä.


Järjestelmäni jumittuu punaiseen osoittimeen tai tyhjään ruutuun
----------------------------------------------------------------

Yksi syy tähän voi olla sarjaporttihiiren käyttö (sitä ei vielä tueta). Sinun
täytyy toistaiseksi käyttää AROS:in kanssa PS/2-hiirtä. Toinen syy voi olla,
että olet valinnut käynnistysvalikosta näyttötilan, jota laitteistosi ei tue.
Käynnistä uudelleen ja kokeile toista.
