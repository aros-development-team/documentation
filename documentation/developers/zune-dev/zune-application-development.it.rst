=====================================
Manuale di Sviluppo Applicazioni Zune
=====================================

:Authors:   David Le Corfec
:Copyright: Copyright © 2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished;
:ToDo:      All


.. Contents::


------------
Introduzione
------------

Cos'è Zune?
===========

Zune è toolkit GUI object oriented. E' pressocchè un clone (sia a livello di API
che di aspetto) di MUI, un prodotto shareware molto noto per Amiga. Cosicchè gli
sviluppatori MUI si sentiranno a casa; altri scopriranno i concetti e le
qualità che Zune condivide con MUI.

+ E' molto più facile per il programmatore progettare la sua GUI:
  nessun bisogno di valori cablati, Zune è sensibile ai font e si adatta a ogni
  dimensione di finestra grazie al suo sistema di layout.
  Bisogna dare a Zune principalmente la semantica della GUI, Zune gestirà i
  dettagli a basso livello automaticamente.

+ Come effetto collaterale, l'utente ha più controllo sull'aspetto della GUI:
  è lui a decidere le impostazioni che Zune userà per presentare la GUI che il
  programmatore ha progettato.

Zune è basato sul sistema BOOPSI, il framework ereditato da AmigaOS per la
programmazione object-oriented in C. Le classi Zune non derivano da classi
gadget BOOPSI; invece, la classe Notify (la classe base della gerarchia Zune)
deriva dalla classe base BOOPSI.


Prerequisiti
============

E' più che benvenuta qualche conoscenza della programmazione OO (object
oriented). In caso contrario, Google può essere di aiuto a trovare documenti
introduttivi su questo argomento classico.

Conoscere le api e i concetti di AROS (o AmigaOS) come le taglist e BOOPSI è
essenziale. Avere i manuali di riferimento Amiga (RKM) è molto utile.

Siccome Zune è un clone di MUI, tutta la documentazione che riguarda MUI è 
applicabile a Zune. In particolare, potete trovare qui__ il kit di sviluppo MUI
più recente disponibile. Di questo archivio LHA sono caldamente raccomandati
due documenti:

+ `MUIdev.guide`, la documentazione sulla programmazione MUI.
+ `PSI.c`, il codice sorgente di un'applicazione che dimostra tutte le moderne
   pratiche MUI come la progettazione object-oriented e la creazione dinamica
   degli oggetti.

__ http://main.aminet.net/dev/mui/mui38dev.lha

In più, questo archivio contiene gli autodoc MUI, che sono la documentazione di
riferimento per tutte le classi Zune.


-------------
ABC di BOOPSI
-------------

Concetti
========

Classi
------

Una classe è definita dal suo nome, dalla sua classe genitore e da un dispatcher.

+ name: può essere sia una stringa per l'accesso pubblico, in modo tale che
  possa essere usata in ogni programma nel sistema, o nulla se è una classe
  privata usata solo da una singola applicazione.

+ parent class: tutte le classi BOOPSI formano una gerarchia la cui radice è
  costituita da una classe chiamata rootclass. Essa permette a tutte le
  sottoclassi di implementare la propria versione di una specifica operazione
  della classe genitore, o di risalire a una di quelle fornite dal genitore.
  Nota anche come classe base o super classe.

+ dispatcher: da accesso a tutte le operazioni (chiamate metodi) fornite dalla
  classe, assicurando che ogni operazione sia gestita dal codice giusto o
  passata alla sua superclasse.

Il tipo BOOPSI per una classe è ``Class *``, noto anche come ``IClass``.

Oggetti
-------

Un oggetto è un'istanza di una classe: ogni oggetto ha i suoi dati, ma tutti
gli oggetti della stessa classe condividono lo stesso comportamento.
Un oggetto ha diverse classe, se contiamo i genitori della sua classe vera
(quella più derivata) fino alla classe base.

Il tipo BOOPSI per un oggetto è ``Object *``. Non ha campi direttamente
accessibili.

Attributi
---------

Un attributo è relativo ai dati di istanza di ogni oggetto: non puoi accedere
direttamente a questi dati, puoi solo settare o recuperare gli attributi
forniti da un oggetto per modificare il suo stato interno. Un attributo è
implementato come un Tag (un valore ``ULONG`` in or con ``TAG_USER``).

``GetAttr()`` e ``SetAttrs()`` vengono usati per modificare gli attributi di
un oggetto.

Gli attributi possono essere uno o più tra i seguenti:

+ Settabile in inizializzazione (``I``) :
  l'attributo può essere specificato come parametro alla creazione dell'oggetto.
+ Settabile (``S``) :
  Potete settare questo attributo in ogni momento (o comunque non solo al
  momento della creazione).
+ Recuperabile (Gettable) (``G``) :
  Potete ottenere il valore di questo attributo.

Metodi
------

Un metodo BOOPSI è una funzione che riceve come parametri un oggetto, una
classe e un messaggio:

+ oggetto (object): l'oggetto su cui operare
+ classe (class): la classe di quell'oggetto.
+ messaggio (message): contiene un ID di metodo che determina la funzione da
  chiamare nel dispatcher, è seguito dai suoi parametri.

Per inviare un messaggio a un oggetto, usate ``DoMethod()``. Per prima cosa il
metodo utilizzerà la classe concreta. Se quella classe implementa questo metodo,
allora lo gestirà. Altrimenti proverà nella sua classe padre, fino a quando il
messaggio non verrà gestito o non verrà raggiunta la classe base (in questo
caso, il messaggio sconosciuto viene silenziosamente cestinato).

Esempi
======

Vediamo dei semplici esempi di questo frameword OOP:

Recuperare gli attributi
------------------------

Interroghiamo un oggetto stringa MUI per recuperare il suo contenuto::

    void f(Object *string)
    {
        IPTR risultato;
        
        GetAttr(string, MUIA_String_Contents, &risultato);
        printf("Il contenuto della stringa è: %s\n", (STRPTR)risultato);
    }

+ ``Object *`` è il tipo degli oggetti BOOPSI.
+ ``IPTR`` deve essere usato come tipo per il risultato, che può essere sia un
  intero che un puntatore. Un IPTS è sempre scritto in memoria, quindi usare
  un tipo più piccolo porterebbe a corruzione della memoria.
+ Qui interroghiamo un oggetto MUI string per recuperarne il contenuto:
  ``MUIA_String_Contents``, come tutti gli altri attributi, è un ``ULONG``
  (è un Tag).

Le applicazioni Zune usano, al posto di questo codice, le macro ``get()`` e
``XGET()``::

    get(string, MUIA_String_Contents, &risultato);
    
    risultato = XGET(string, MUIA_String_Contents);


Settare un attributo
--------------------

Cambiamo il contenuto della nostra stringa::

    SetAttrs(string, MUIA_String_Contents, (IPTR)"ciao!", TAG_DONE);

+ I parametri puntatore devono essere castati a `IPTR` per evitare warning.
+ Dopo il parametro oggetto, viene passata una taglist a `SetAttrs` e di
  conseguenza questa deve finire con `TAG_DONE`.

Troverete utile la macro ``set()``::

    set(string, MUIA_String_Contents, (IPTR)"ciao!");

Ma è solo con SetAttrs() che potete settare diversi attributi in un volta sola::

    SetAttrs(string,
             MUIA_Disabled, TRUE,
             MUIA_String_Contents, (IPTR)"hmmm...",
             TAG_DONE);


Chiamare un metodo
------------------

Vediamo il metodo più chiamato in un programma Zune, il metodo di elaborazione
degli eventi chiamato nel vostro loop principale::

    result = DoMethod(obj, MUIM_Application_NewInput, (IPTR)&sigs);

+ I parametri non sono taglist, quindi non finiscono con ``TAG_DONE``.
+ Dovete fare il casting dei puntatori a ``IPTR`` per evitare warning.

-----------
Hello world
-----------

.. Figure:: /documentation/developers/zune-dev/images/hello.png

    Le prime cose per prime! Sapevo che sareste stati entusiasti!


Sorgente
========

Studiamo il nostro primo esempio reale::

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
    
        // Creazione della GUI
    	app = ApplicationObject,
    	    SubWindow, wnd = WindowObject,
    		MUIA_Window_Title, "Ciao Mondo!",
    		WindowContents, VGroup,
    		    Child, TextObject,
    			MUIA_Text_Contents, "\33cCiao Mondo!\nCome stai?",
    			End,
    		    Child, but = SimpleButton("_Ok"),
    		    End,
    		End,
    	    End;
    
    	if (app != NULL)
    	{
    	    ULONG sigs = 0;
    
            // Clicca il pulsante di chiusura o premi escape per uscire
    	    DoMethod(wnd, MUIM_Notify, MUIA_Window_CloseRequest, TRUE,
                     (IPTR)app, 2,
                     MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);
    
            // Clicca il bottone per uscire
    	    DoMethod(but, MUIM_Notify, MUIA_Pressed, FALSE,
                     (IPTR)app, 2,
                     MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);
    
            // Apri la finestra
    	    set(wnd, MUIA_Window_Open, TRUE);

            // Controlla che la finestra si sia aperta
    	    if (XGET(wnd, MUIA_Window_Open))
    	    {
                // Loop principale
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
	    // Distruggi la nostra applicazione e tutti i suoi oggetti
    	    MUI_DisposeObject(app);
    	}
    	
    	return 0;
    }


Osservazioni
============

Generali
--------

Non apriamo manualmente le librerie, viene fatto automaticamente per noi.

Creazione GUI
-------------

Utilizziamo un linguaggio basato su macro per creare facilmente la nostra GUI.
Un'applicazione Zune ha sempre 1 e un solo oggetto Application::

    :	app = ApplicationObject,

Un'applicazione può avere 0, 1 o più oggetti Window. Molto spesso uno solo::

    :	    SubWindow, wnd = WindowObject,

Siate simpatici, date un titolo alla finestra::

    :		MUIA_Window_Title, "Hello world!",

Una finestra deve avere 1 e un solo figlio, generalmente un gruppo. Quella che
segue è verticale, questo significa che i suoi figli verranno disposti
verticalmente::

    :		WindowContents, VGroup,

Un gruppo deve avere almeno 1 figlio, ecco il caso di un semplice testo::

    :		    Child, TextObject,

Zune accetta vari codici di escape (qui, per esempio, centriamo il testo) e per
inserire nuove righe::

    :			MUIA_Text_Contents, "\33cCiao Mondo!\nCome stai?",

Una macro ``End`` deve corrispondere a ogni macro ``xxxObject`` (qui,
TextObject)::

    :			End,

Aggiungiamo un secondo figlio al nostro gruppo, un bottone! Con una scorciatoia
da tastiera ``o`` indicata con un underscore::

    :		    Child, but = SimpleButton("_Ok"),

Chiudiamo il gruppo::

    :		    End,

Chiudiamo la finestra::

    :		End,

Chiudiamo l'applicazione::

    :	    End;

Quindi, chi ha ancora bisogno di un GUI builder? :-)


Gestione degli errori
---------------------

Se uno degli oggetti nell'albero dell'applicazione non può essere creato, Zune
distrugge tutti gli oggetti precedentemente creati e la creazione
dell'applicazione fallisce. Altrimenti, otterrette un'applicazione pienamente
funzionante::

    :	if (app != NULL)
    :	{
    :	    ...

Quando avete finito, basta chiamare ``MUI_DisposeObject()`` sul vostro oggetto
application per distruggere tutti gli oggetti attualmente nell'applicazione e
liberare le risorse::

    :       ...
    :	    MUI_DisposeObject(app);
    :	}


Notifiche
---------

Le notifiche sono il modo più semplice di reagire agli eventi. Il principio?
Vogliamo ricevere una notifica quando un certo attributo di un certo oggetto
viene settato a un certo valore::

    :        DoMethod(wnd, MUIM_Notify, MUIA_Window_CloseRequest, TRUE,

Qui ascoltiamo il ``MUIA_Window_CloseRequest`` del nostro oggetto Window e
riceveremo una notifica quando questo attributo viene settato a ``TRUE``.
Quindi cosa succede quando viene lanciata una notifica? Viene inviato un
messaggio a un oggetto, in questo esempio diciamo alla nostra Application di
restituire ``MUIV_Application_ReturnID_Quit`` alla prossima iterazione nel
loop degli eventi::

    :                 (IPTR)app, 2,
    :                 MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);

Così come possiamo specificare quello che vogliamo qui, dobbiamo specificare il
numero di argomenti extra che stiamo fornendo a MUIM_Notify: qui, 2 parametri.

Per il bottone, ascoltiamo il suo attributo ``MUIA_Pressed``: viene settato a
``FALSE`` quando il bottone viene *rilasciato* (reagire quando viene pressato
sarebbe una pratica sbagliata, potresti voler annullare l'azione rilasciando il
mouse fuori dall'area del bottone - inoltre, vogliamo vedere che aspetto ha
quando viene pressato). L'azione è la stessa di prima, inviare un messaggio
all'applicazione::

    :        DoMethod(but, MUIM_Notify, MUIA_Pressed, FALSE,
    :                 (IPTR)app, 2,
    :                 MUIM_Application_ReturnID, MUIV_Application_ReturnID_Quit);


Aprire la finestra
------------------

Le finestre non si aprono fino a quando non glielo chiedete::

    :        set(wnd, MUIA_Window_Open, TRUE);

Se tutto va bene, la vostra finestre dovrebbe apparire in questo punto. Ma
l'operazione potrebbe fallire! Quindi, non dimenticate di controllare
interrogando l'attributo, che dovrebbe essere TRUE::

    :        if (XGET(wnd, MUIA_Window_Open))


Loop principale
---------------

Lasciatemi introdurre il loop eventi ideale di Zune::

    :        ULONG sigs = 0;

Non dimenticate di inizializzare i segnali a 0 ... Il test del loop è il metodo
MUIM_Application_NewInput::

    :        ...
    :        while((LONG) DoMethod(app, MUIM_Application_NewInput, (IPTR)&sigs)
    :              != MUIV_Application_ReturnID_Quit)

Prende come input i segnali degli eventi che deve processare (risultati da
``Wait``, o 0), modificherà questo valore per adattarlo ai segnali che Zune
sta aspettando (per il prossimo ``Wait()``) e restituirà un valore. Questo
meccanismo del valore di ritorno era storicamente l'unico modo di reagire agli
eventi, ma era brutto ed è stato deprecato a favore di classi custom o design
object-oriented.

Il corpo del loop è abbastanza vuoto, semplicemente attendiamo dei segnali e
gestiamo il Ctrl-C per uscire fuori dal loop::

    :        {
    :            if (sigs)
    :            {
    :                sigs = Wait(sigs | SIGBREAKF_CTRL_C);
    :                if (sigs & SIGBREAKF_CTRL_C)
    :                    break;
    :            }
    :        }


Conclusioni
-----------

Questo programma vi introduce a Zune, e vi permette di giocare con il disegno
delle GUI, ma nient'altro.


------------------
Azioni di notifica
------------------

Come visto in hello.c, usate MUIM_Notify per chiamare un metodo, se si verifica
una certa condizione.
Se volete che l'applicazione reagisca in modo specifico agli eventi, potete
usare uno di questo schemi:

+ MUIM_Application_ReturnID: potete chiedere all'applicazione di restituire un
  ID arbitrario alla prossima iterazione del loop, e controllare il valore nel
  loop. Questo è un modo vecchio e sporco per fare le cose.
+ MUIM_CallHook, per chiamare un callback di aggancio (hook) Amiga standard:
  questa è una scelta di media qualità, non object-oriented ma neanche tanto
  brutta.
+ metodo custom: il metodo appartiene a una delle vostre classi custom. E' la
  migliore soluzione e supporta il design object-oriented nelle applicazioni.
  Necessita che voi creiate delle classi custom, quindi potrebbe non essere il
  modo più semplice per i principianti o per chi ha fretta.
