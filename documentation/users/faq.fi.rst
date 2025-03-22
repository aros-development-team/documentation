====================
FAQ - Usein kysyttyä
====================

:Authors:   Aaron Digulla, Adam Chodorowski
:Copyright: Copyright © 1995-2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::


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
olevaa tietoa (esim. ohjelmointi oppaita) joka ei putoa lain hämärälle
puolelle, ei yllä mainittu suoraan koske AROS:ia. Mikä on merkityksellisintä
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

On ollut keskusteluja edistyneen käyttöjärjestelmän kirjoittamisesta jolla
olisi AmigaOS:in ominaisuudet. Tämä idea pudotettiin pelistä hyvällä syyllä.
Ensinnäkin kaikki ovat sitä mieltä että nykyistä AmigaOS:ia pitäisi parantaa,
mutta kukaan ei tiedä miten se tehdään tai edes olisi samaa mieltä siitä että
mitä pitäisi parannella ja mikä on tärkeää. Jotkut esimerkiksi tahtovat
muistin suojausta mutta eivät ole valmiita maksamaan hintaa siitä (eli
saatavilla olevan ohjelmiston uudelleen kirjoittamista ja nopeuden
vähenemistä).

Lopulta keskustelut päättyivät lähes sotatilaan tai vanhojen argumenttien
kierrätykseen. Joten päätimme aloittaa jostain jonka tiedämme miten hallita.
Sitten kun olemme saaneet tarpeeksi kokemusta nähdäksemme mikä on mahdollista
taikka mahdotonta voimme päättää parannuksista.

Tahdomme olla myös binääri-yhteensopivia alkuperäisen AmigaOS:in kanssa
Amigassa. Syy tälle on se että uudella käyttöjärjestelmä ilman ohjelmia ei ole
mahdollisuuksia selviytyä. Siitä syystä yritämme tehdä siirtymisen
alkuperäisestä käyttöjärjestelmästä uuteen niin kivuttomaksi kuin vain
mahdollista (mutta emme siinä määrin että AROS:in parantelu muuttuisi
mahdottomaksi). Kuten tavallista, kaikella on hintansa ja koetamme varoen
päättää mikä se hinta on ja että kaikki ovat valmiita sen maksamaan.


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

Tällä hetkellä AROS on saatavilla melko käyttökelpoisessa muodossa sekä
natiivina että isännöitynä (ajettuna Linux:issa, FreeBSD:ssä taikka NetBSD:ssä)
i386-arkkitehtuurissa (esim. IBM PC AT yhteensopivat kloonit) ja isännöitynä
(Linux:illa ja NetBSD:llä) m68k arkkitehtuurissa (esim. Amiga, Atari ja
Macintosh). SUN SPARC:ille (isännöity Solaris:illa) ja Palm-yhteensopiville
(natiivina) on järjestelmä siirretty vaihtelevalla menestyksellä.


Tuleeko AROS PPC:lle?
---------------------

Meiltä kysytään säännöllisesti tuleeko AROS PPC:lle. Vastaus on aina ollut
sama: monet kysyvät sitä, mutta kukaan ei ole vielä tarjoutunut tekemään sitä.


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


Miksi X11:ta "autorepeat" lopettaa toiminnan AROS:in ajon jälkeen?
------------------------------------------------------------------

Tämä on pitkään säilynyt vika AROS:issa. Aja seuraava komento poistuttuasi
AROS:ista saadaksesi "autorepeat":in takaisin päälle::

    > xset r on


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

Lähetä virheilmoitus yksityiskohtineen "Help"-ryhmään `AROS-Exec`__:in
keskusteluryhmässä tai liity kehittäjiin ja tilaa AROS Developer postituslista
ja lähetä se sinne, niin joku koettaa auttaa sinua.

__ https://www.arosworld.org/


Tuleeko AROS:ille muistin suojausta, SVM, RT, ...?
--------------------------------------------------

Useat sadat Amiga expertit (ainakin he kuvittelivat itsestään sellaisia) ovat
yrittäneet vähintään kolme vuotta löytää keinoa toteuttaa muisin suojausta
(MP) AmigaOS:ille. He epäonnistuivat. Sinun tulisi hyväksyä se tosiasia että
normaalissa AmigaOS:issa ei tule koskaan olemaan sellaista MP:tä kuin
UNIX:eissa tai Windows NT:ssä.

Mutta kaikkea ei ole menetetty. Suunnitelmissa on integroida AROS:iin
MP-variantti joka sallii suojata ainakin sellaiset ohjelmat jotka ovat
suojauksesta tietoisia. Muutamat ponnistelut tällä alueella näyttävät erittäin
lupaavilta. Ja onko se todella ongelma jos koneesi kaatuu? Anna kun selitän,
ennen kuin naulaat minut puuhun. :-) Ongelma ei ole siinä että kone kaatuu,
vaan:

1. Sinulla ei ole mitään ideaa siitä että miksi se kaatui. Periaatteessa
   lopulta päädyt tökkimään sumun peittämää suota sadan jalan kepillä.
2. Menetät työsi. Koneen uudellen käynnistys ei ole isokaan juttu.

Järjestelmä jonka koetamme rakentaa tulee vähintäänkin varoittamaan jos jotain
epäilyttävää on tapahtumassa ja kertoo yksityiskohtaisesti mitä tapahtui siinä
tapauksessa kun kone on kaatumassa ja antaa sinun tallentaa työsi *ennen*
kaatumista. Rakenteilla on myös tapa tarkistaa mitä tallennetaa jotta voit
olla varma ettet jatka viallisella tiedolla.

Sama koskee SVM:ää ("swappable virtual memory"), RT:tä ("resource tracking")
ja SMP:tä ("symmetric multiprocessing"). Olemme tällä hetkellä
suunnittelemassa kuinka ne toteutetaan ja varmistamassa että kyseisten
ominaisuuksien lisääminen on kivutonta. Nämä kuitenkaan eivät ole etusijalla
juuri nyt. Erittäin perustavaa laatua oleva RT on tosin jo lisätty.


Voinko tulla beta-testaajaksi?
------------------------------

Tottakai, ei mitään ongelmaa siinä. Tosiasiassa tahdomme niin useita
beta-testaajia kuin vain mahdollista, joten kaikki ovat tervetulleita! Emme
tosin pidä listaa beta-testaajista, joten kaikki mitä sinun tulee tehdä on
ladata AROS, testata mitä vain tahdot ja lähettää meille siitä raportti.


Mikä on AROS:in ja UAE:n suhde?
-------------------------------

UAE on Amiga emulaattori ja siten sillä on jonkin verran erilaiset päämäärät
kuin AROS:illa. UAE:n on tarkoitus olla yhteensopiva jopa pelien ja rautaa
suoraan käsittelevän koodin kanssa, kun taas AROS tahtoo natiiveja ohjelmia.
Tästä syystä AROS on paljon nopeampi kuin UAE, mutta voit ajaa useampia
ohjelmia UAE:lla.

Olemme löyhässä yhteydessä UAE:n kirjoittajan kanssa ja on hyvät
mahdollisuudet sille että UAE:n koodi ilmaantuu AROS:iin ja toisin päin.
Esimerkiksi UAE:n kehittäjät ovat kiinnostuneita käyttöjärjestelmästä koska
UAE voisi ajaa joitain ohjelmia paljon nopeammin jos osa tai kaikki
käyttöjärjestelmän funktiot voitaisiin korvata natiivilla koodilla. Ja
toisaalta taas AROS hyötyisi integroidusta Amiga emulaatiosta.

Koska suurinta osaa ohjelmista ei ole saatavilla AROS:iin alusta lähtien, on
Fabio Alemagna portannut UAE:n AROS:ille jotta voit ajaa vanhoja ohjelmia
ainakin emulaatiossa.


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

Suurin osa AROS:ille tehtävästä kehityksestä on tehty ANSI C:tä käyttäen ja
lähdekoodin ristiin kääntäen eri käyttöjärjestelmässä, esim. Linux, FreeBSD
tai NetBSD. Fabio Alemagna on saanut valmiiksi esiporttauksen GCC:stä i386
natiiviin, mutta sitä ei ole vielä ISO:ssa tai integroituna
käännösjärjestelmään.

Kielet jotka ovat natiivina saatavana ovat Python_, Regina_ ja False_:

+ Python on hyvän suunnittelun ja ominaisuuksiensa vuoksi melkoisen suosituksi
  kohonnut skriptauskieli (olio-orientoitunut, modulaarinen, useita
  käyttökelpoisia moduuleja mukana, selvä syntaksi, ...). Erillinen projekti
  aloitettiin AROS portille joka löytyy osoitteesta
  http://pyaros.sourceforge.net/.

+ Regina on siirrettävä ANSI:a mukaileva REXX tulkki. AROS portin tavoitteena
  on olla yhteensopiva klassisen AmigaOS:in ARexx tulkin kanssa.

+ False voidaan lukea eksoottiseksi kieleksi, joten sitä tuskin käytetään
  vakavaan kehitystyöhön, vaikkakin todella hauska se voi olla. :-)

.. _Python: http://www.python.org/
.. _Regina: http://regina-rexx.sourceforge.net/
.. _False:  http://strlen.com/false-language


Miksei AROS:issa ole m68k emulaattoria?
---------------------------------------

Ajaaksemme vanhoja Amiga ohjelmia AROS:issa, olemme portanneet UAE_:n
AROS:ille. AROS:in versio UAE:sta on luultavasti hieman muita UAE:n versioita
nopeampi koska AROS vaatii vähemmän resursseja koneelta kuin muut
käyttöjärjestelmät (mikä tarkoittaa että UAE:lla on käytössään enemmän
konetehoa), ja koetamme saada UAE:n Kickstart ROM:in kutsumaan AROS:in
funktioita joka antaa sille hieman lisää parannusta. Tämä tosin pitää
paikkansa vain natiivissa AROS:issa.

Miksemme yksinkertaisesti toetuta virtuaalista m68k CPU:ta ajamaan ohjelmia
AROS:issa? No, ongelma tässä on että m68k ohjelmisto odottaa tiedon olevan nk.
"big endian" muodossa kun taas AROS toimii myös "little endian"
prosessoreilla. Ongelma tässä on taas sitten se, että "little endian"-rutiinit
AROS:in ytimessä joutuisivat työskentelemään emulaatiossa "big endian"
tiedolla. Automaattinen muunnos näyttää mahdottomalta (esim.: AmigaOS:issa on
rakenteessa kenttä joka joskus sisältää ULONG:in ja joskus kaksi WORD:iä)
koska emme voi tietää miten pari tavua muistia on enkoodattu.

.. _UAE: http://www.amigaemulator.org/


Tuleeko AROS:ista Kickstart ROM:ia?
-----------------------------------

Ehkä, jos joku tekee natiivin Amiga porttauksen AROS:ista ja tekee kaiken
tarvittavan työn luodakseen Kickstart ROM:in. Tällä hetkellä ei vielä kukaan
ole tuohon työhön ilmoittautunut.


Kuinka käytän AROS:in levykuvia UAE:ssa?
----------------------------------------

Levykuva voidaan liittää nk. hardfile:nä ja sen jälkeen käyttää 1.4 MB
kovalevynä UAE:sssa. Kun olet tallentanut haluamasi tiedostot hardfile
levykuvalle (tai mitä sitten sille olitkaan tekemässä), voit kirjoittaa sen
disketille.

Hardfile:n geometria on seuraavanlainen::

    Sectors    = 32
    Surfaces   = 1
    Reserved   = 2
    Block Size = 90


Kuinka käytän AROS:in levykuvia isännöidyissä AROS:eissa?
---------------------------------------------------------

Kopioi levykuva AROS:in DiskImages hakemistoon (SYS:DiskImages, esim.
bin/linux-i386/AROS/DiskImages) ja nimeä se uudelleen "Unit0":ksi. AROS:in
käynnistyksen jälkeen voit liittää levykuvan komennolla::

    > mount AFD0: 


Mikä on Zune?
-------------

Siinä tapauksessa että luit tältä saitilta Zunesta, on se uudelleen
kirjoitettu Open Source versio MUI:sta, joka on vahva (käyttäjä- ja
kehittäjäystävällisyydessä) olio-orientoitunut shareware GUI työkalupaketti ja
de-facto standardi AmigaOS:issa. Zune on AROS kehityksessä suosittava GUI
työkalupaketti. Nimi itsessään ei tarkoita mitään - se vain kuulostaa hyvältä.
