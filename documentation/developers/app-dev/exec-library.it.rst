=====================================
Manuale di sviluppo applicazioni AROS
=====================================

:Authors:   Staf Verhaegen, Sebastian Rittau, Stefan Rieken, Matt Parsons,
            Adam Chodorowski, Fabio Alemagna, Matthias Rustler
:Copyright: Copyright © 1995-2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished; integration started (looong way left to go).
:ToDo:      Integrate the various parts. Update and revise. Complete...

`Index <index>`__

.. Warning::

   Questo documento non è completato! E' molto probabile che molte parti non
   siano aggiornate, contengano informazioni scorrette o semplicemente mancanti.
   Se vuoi aiutarci a migliorarlo, contattaci!

.. Contents::

------------
exec.library
------------

Tipi
----

In ``exec/types.h`` vengono definiti i seguenti typedef. Vengono usati spesso
in AROS, quindi dovreste includere quasi sempre ``exec/types.h``.


`APTR`
    Un puntatore generico per vari scopi.

`STRPTR`
    Un puntatore a una stringa che termina con null.

`UQUAD`
    Variabile intera a 64 bit senza segno.

`QUAD`
    Variabile intera a 64 bit con segno.

`DOUBLE`
    Variabile in virgola mobile IEEE a 64 bit.

`ULONG`
    Variabile intera a 32 bit senza segno (longword).

`LONG`
    Variabile intera a 32 bit con segno (longword).

`FLOAT`
    Variabile in virgola mobile IEEE a 32 bit.

`UWORD`
    Variabile intera a 16 bit senza segno (word).

`WORD`
    Variabile intera a 16 bit con segno (word).

`UBYTE`
    Variabile intera a 8 bit senza segno (byte).

`BYTE`
    Variabile intera a 8 bit con segno (byte).

`BOOL`
    Variabile booleana, `TRUE` e `FALSE` vengono definiti in `exec/types.h`.

`VOID`
    Void.


IPTR
^^^^

C'è anche un'altra importante definizione di tipo, `IPTR`. E' molto
importante in AROS, in quanto è l'unico modo di dichiarare un campo che può
contenere un intero o un puntatore.

.. Note:: AmigaOS non conosce questo tipo. Se state portanto un programma da
          AmigaOS ad AROS, cercate nel sorgente tutte le occorrente di `ULONG`
          che possono contenere anche dei puntatori e cambiatele in `IPTR`. Se
          non lo fate, il vostro programma non funzionerà su sistemi dotati di
          puntatori a più di 32 bit (per esempio i DEC Alpha che hanno
          puntatori a 64 bit).


BPTR
^^^^

I cosidetti `BPTR` sono sempre stati un problema in AmigaOS e questo problema
è stato ereditato da AROS. In versioni di AROS con compatibilità binaria, un
`BPTR` equivale a un quarto del puntatore reale. Se, per esempio, un puntatore
punta all'indirizzo ``$80000`` il puntatore `BPTR` che punta allo stesso
indirizzo conterrà ``$20000``. Sui sistemi senza compatibilità binaria, un
`BPTR` è uguale a un `APTR`.

Per la conversione tra un puntatore normale e un `BPTR` usate questa macro::

    #include <dos/bptr.h>

    APTR BADDR( BPTR bptr );
    BPTR MKBADDR( APTR ptr );

Esiste anche una cosa chiamata `BSTR` che è un tipo speciale di stringa. Non ne
parleremo qui perchè è una cosa usata molto raramente.


Storia
^^^^^^

Quando iniziò il suo sviluppo, Amiga fu progettato come una pura console da
gioco modulare. Come tale, non aveva alcun bisogno di gestione del filesystem.
Il sistema operativo fu creato senza questo in mente. Ma Commodore, che comprò
Amiga, volle un computer completo al posto di un'altra console da gioco. Così,
poco tempo dopo la presentazione iniziale di Amiga, c'era bisogno di un file
system. Invece di perdere tempo a svilupparne uno custom, fu portato su Amiga
il filesystem di un sistema operativo chiamato TRIPOS. Sfortunatamente, TRIPOS
era scritto in BCPL, un linguaggio di programmazione con una gestione dei
puntatori piuttosto bizzarra. Questa gestione dei puntatori fu ereditata da
AmigaDOS e successivamente da AROS (anche se le successive versioni di AmigaOS
e anche di AROS sono scritte in C).

Liste Exec e gestione della memoria
-----------------------------------

Liste Exec
^^^^^^^^^^

AROS implementa un sistema di liste linkate, le cosiddette liste exec. Una
lista linkata è costituita da una serie di nodi, ognuno di essi punta all'altro.
Sono definiti due tipi di nodi in `exec/nodes.h`:

`struct MinNode`
    è il modo base. Non avete bisogno di conoscerne la struttura, in quanto
    ogni possibile azione di su essi è gestita da qualche funzione di libreria.

`struct Node`
    estende la struttura semplice `MinNode`. Fornisce alcuni campi aggiuntivi:
   
    `ln_Name`
        Ogni `Node` contiene un puntatore a una stringa, che descrive quel nodo.        

    `ln_Type`
        E' definita una lista di tipi in `exec/nodes.h`.        

    `ln_Pri`
        Una priorità, usata per ordinare la lista.

Entrambe le strutture possono essere integrate in altre strutture. Per esempio
`struct Library` (definita in `exec/libraries.h`) contiene una struct `Node`
all'inizio. In questo modo tutte le librerie possono essere contenute in una
lista. Il campo `ln_Name` punta al nome della libreria, `ln_Type` è settato a
`NT_LIBRARY` per fare vedere che questo nodo è una librerie e `ln_Pri`
riflette l' *importanza* di una libreria.

Ovviamente, abbiamo bisogno di contenitori di liste. Questi sono definiti in
``exec/lists.h``. Come per i nodi, per le liste abbiamo due tipi diversi:

`struct MinList`
    è la lista minimale. Non avete bisogno di conoscerne i membri; guardatela
    come una scatola nera.

`struct List`
    contiene un campo aggiuntivo `lh_Type`, che corrisponde al `ln_Type` di
    `struct Node`.

Le `MinList` hanno dei `MinNode` come membri, mentre le `List` usano i `Node`.
Non sono intercambiabili. Mentre è tecnicamente possibile usare i `Node` nelle
`MinList`, perdereste tutti i vantaggi.

FIXME: Macros


Funzioni di manipolazione delle liste
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

La exec.library e la link-library amiga.lib contengono alcune funzioni per
manipolare le liste di exec. Prima che una lista possa essere usata, *deve*
essere inizializzata, usando la seguente funzione di amiga.lib::

    #include <proto/alib.h>

    void NewList( struct List *list );

E' possibile aggiungere nodi alle liste le seguenti funzioni di exec.library::

    #include <proto/exec.h>

    void AddHead( struct List *list, struct Node *node );
    void AddTail( struct List *list, struct Node *node );
    void Enqueue( struct List *list, struct Node *node );
    void Insert( struct List *list, struct Node *node, struct Node *pred );

Con `AddHead()` e `AddTail()` un ``node`` viene inserito rispettivamente
all'inizio o alla fine di una ``list``. `Enqueue` inserisce un ``node`` a
seconda del suo campo ``ln_Pri``. Un nodo può essere inserito dopo un altro
usanto `Insert()`. In questo caso, bisogna fornire ``pred``, il puntatore al
nodo che precede ``node``.

I nodi possono essere rimossi usando le funzioni di exec.library::

    #include <proto/exec.h>

    void Remove( struct Node *node );
    struct Node *RemHead( sruct List *list );
    struct Node *RemTail( struct List *list );

Mentre `RemHead()` e `RemTail()` rimuovono rispettivamente il primo e l'ultimo
nodo di una ``list`` e ritornano un puntatore ad esso, `Remove()` rimuove il
``node`` da qualunque lista esso si trovi.

Ovviamente, tutte le funzioni di lista (eccetto `Enqueue()`) possono anche
lavorare su una ``struct MinList`` e una ``struct MinNode``.

E' possibile cercare un nodo in un lista usando::

    #include <proto/exec.h>

    struct Node *FindName( struct List *list, STRPTR name );

``name`` è il puntatore a una stringa che deve essere confrontata con il campo
``ln_Name`` dei nodi in ``list``. Il confronto è case-sensitive! Se ``name``
corrisponde a un qualunque campo ``ln_Name``, verrà ritornato un puntatore al
nodo corrispondente. Se non viene trovato alcun nodo verrà restituito ``NULL``.

.. Note::

    Se usate `FindName()` su una lista, questa non deve contenere alcuna
    ``struct MinList``. Altrimenti la memoria verrà corrotta!

Nell'esempio seguente, creiamo una lista, ci aggiungiamo tre nodi, ne cerchiamo
uno per nome e quindi lo rimuoviamo::

    #include <proto/alib.h>
    #include <proto/exec.h>
    #include <exec/types.h>
    #include <exec/lists.h>
    #include <exec/nodes.h>
    #include <dos/dos.h>    /* Per RETURN_OK */

    struct List list;

    /* I nostri nodi */
    struct Node node1 =
    {
        NULL, NULL,    /* Ancora nessun precedecessore e successore */
        NT_UNKNOWN, 0, /* Tipo sconosciuto, priorità ignorata */
        "Primo nodo"   /* Il nome del nodo */
    };

    struct Node node2 =
    {
        NULL, NULL,
        NT_UNKNOWN, 0,
        "Secondo nodo"
    };

    struct Node node3 =
    {
        NULL, NULL,
        NT_UNKNOWN, 0,
        "Terzo nodo"
    };


    int main(int argc, char *argv[])
    {
        struct Node *node;

        /* Prepariamo la lista per l'uso */
        NewList(&list);

        /* Aggiungiamo i primi due nodi alla fine della lista. */        
        AddTail(&list, &node1);
        AddTail(&list, &node2);

        /* Inseriamo il terzo nodo dopo il primo nodo. */        
        Insert(&list, &node3, &node1);

        /* Troviamo il secondo nodo */
        node = FindName(&list, "Secondo nodo");

        /*
            Se il nodo viene trovato (e succede sempre in questo esempio),
            lo rimuoviamo.
        */

        if (node)
            Remove(&node);

        return RETURN_OK;
    }

Macro
^^^^^

AROS definisce alcune macro in vari file header. Tutte le macro fanno il
casting dei loro parametri al tipo corretto, quindi dovete fornire un input
valido ma potete stare sicuri del cast (le macro sono concepite per rendere la
vita più semplice).

``NEWLIST(list)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Inizializza una lista. Non dovete mai usare una lista prima di averla
    inizializzata.

``GetHead(list)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Restituisce un puntatore al primo nodo della lista o ``NULL`` se la lista
    è vuota.

``GetTail(list)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Restituisce un puntatore all'ultimo nodo della lista o ``NULL`` se la lista
    è vuota.

``GetSucc(node)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Restituisce un puntatore al prossimo nodo della lista o ``NULL`` se non ce
    ne sono.

``GetPred(list)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Restituisce un puntatore al precedente nodo della lista o ``NULL`` se non ce
    ne sono più.

``ForeachNode(list,node)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Itera attraverso una lista. Un blocco di codice deve seguire questa macro.
    Il blocco non verrà eseguito se la lista è vuota. Quando la lista termina
    `node` non contiene ``NULL`` ma ``node->ln_Succ`` sarà ``NULL``. Non potete
    usare questa macro se volete cancellare i nodi di una lista (es. non potete
    chiamare `Remove()` dentro il blocco di codice che segue questa macro).
    Usate `ForeachNodeSafe()` se volete cancellare dei nodi.

    Esempio::

        /* Itera attraverso una lista completa di nodi e stampa i loro nomi */        
        t = 1;
        ForeachNode(list,node)
        {
            if (node->ln_Name)
            {
                printf ("Nodo %d: %s\n", t++, node->ln_Name);

                if (!strcmp (node->ln_Name, "end"))
                    break;
            }
        }

        if (node->ln_Succ)
            printf ("Non tutti i nodi sono stati processati\n");
        else
            printf ("La lista non contiene un nodo con nome \"end\"\n");

``ForeachNodeSafe(list,node,tmpNode)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Itera attraverso una lista. Un blocco di codice deve seguire questa macro.
    Il blocco non verrà eseguito se la lista è vuota. Quando la lista termina
    `node` non contiene ``NULL`` ma ``node->ln_Succ`` sarà ``NULL``. Potete
    usare questa macro con codice che cancella i nodi della lista.

``SetNodeName(node,name)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Assegna un nome nuovo a un nodo. Il nome non viene copiato, la macro farà
    semplicemente puntatore `ln_Name` a ``name``.
    La macro farà il casting di `node` a ``struct Node *``
    quindi accertatevi che `node` sia un nodo completo.

``GetNodeName(node)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Ritorna il nome del nodoo. 
    La macro farà il casting di `node` a ``struct Node *``
    quindi accertatevi che `node` sia un nodo completo.
    
``ListLength(list,count)``
    :Compatibile: Sì
    :Posizione:   exec/lists.h

    Questo memorizza in `count` il numero di nodi nella `list`.



Gestione della memoria
^^^^^^^^^^^^^^^^^^^^^^

In un programma avete bisogno di memoria pressocchè per ogni cosa. Si possono
fare molte cose usando lo stack. Ma spesso avete bisogno di blocchi di memoria
più grandi o non volete usare lo stack per qualche motivo. In questi casi
dovete allocare la memoria voi stessi. exec.library fornisce diversi modi per
allocare la memoria. Le due funzioni più importanti sono::

    #include <proto/exec.h>

    APTR AllocMem( ULONG size, ULONG flags );
    APTR AllocVec( ULONG size, ULONG flags );

Entrambe le funzioni restituiscono un puntatore a un'area di memoria della
grandezza specificata in ``size``. Se non c'è sufficiente memoria disponibile,
verrà restituito ``NULL`` al posto del puntatore. Dovete controllare questa
eventualità prima di usare la memoria. Se la memoria è stata allocata con
successo, potete farne quello che volete.

Potete specificare dei ``flags`` aggiuntivi per ottenere tipi speciali di
memoria. I seguenti flags sono definiti in ``exec/memory.h``:

MEMF_CLEAR
    La memoria allocata viene inizializzata con zeri.

MEMF_LOCAL
    Restituisce memoria che non viene ripulita se il computer viene resettato.

MEMF_CHIP
    Restituisce memoria accessibile dai chip grafici e sonori. Questo tipo di
    memoria è necessario per alcune funzioni.

MEMF_FAST
    Restituisce memoria non accessibile dai chip grafici e sonori. *Normalmente
    non dovreste mai settare questo flag! E' necessario solo per alcune
    funzioni molto esoteriche. La maggioranza dei sistemi non ha questo tipo di
    memoria.*

MEMF_PUBLIC
    Questo flag deve essere settato se la memoria che state allocando deve
    essere accessibile ad altri task. Se non lo settate, la memoria allocata
    è *privata* per il vostro task. Questo problema verrà discusso in dettaglio
    nel capitolo su
    .. FIXME:: *inter-task communication*.

MEMF_REVERSE
    Se questo flag è settato, verrà invertito l'ordine di ricerca di blocchi di
    memoria liberi. I blocchi che si trovano alla fine della memoria libera
    verranno trovati per primi.

MEMF_NO_EXPUNGE
    Normalmente, se non viene trovata libera la quantità di memoria richista,
    AROS tenta di liberare la memoria non utilizzata, per esempio liberando la
    memoria da librerie non utilizzate. Se questo flag è settato, questo
    comportamento viene disabilitato.

La memoria allocata con queste funzioni *deve essere liberata* dopo l'uso con
una delle seguenti funzioni. *Ricordatevi che non dovete usare memoria che è
già stata liberata.*::

    #include <proto/exec.h>

    void FreeMem( APTR memory, ULONG size );
    void FreeVec( APTR memory );

Ovviamente, `FreeMem()` deve essere usata per memoria allocata con `AllocMem()`
e `FreeVec()` per memoria allocata con `AllocVed()`. La sintassi di queste
due funzioni mostra la differenza tra `AllocMem()` e `AllocVec()`: `AllocVed()`
tiene traccia della dimensione del blocco di memoria che ha allocato. Quindi,
se usate `AllocVed()`, non avete bisogno di memorizzare la grandezza richiesta,
mentre dovete farlo se usate `AllocMem()`.


Allocare Regioni Multiple di Memoria in una volta sola
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

A volte c'è bisogno di effettuare allocazioni multiple di memoria in una volta
sola. Il metodo usuale è chiamare `AllocVed()` con la grandezza complessiva di
tutti i blocchi di memoria e quindi tenere dei puntatori relativi al puntatore
restituito dall'allocazione. Ma cosa fareste se avete bisogno di diversi tipi
di memoria, con diversi ``MEMF_`` settati? Potete fare allocazioni multiple o
usare la funzione::

    #include <proto/exec.h>

    struct MemList *AllocEntry( struct MemList *oldlist );

Come avrete notato, `AllocEntry()` utilizza un puntatore a una 
``struct MemList`` come unico parametro e come valore di ritorno. Troviamo la
definizione di questa struttura in ``exec/memory.h``::

    struct MemEntry
    {
        union
        {
            ULONG meu_Reqs;
            APTR  meu_Addr;
        } me_Un;
        ULONG me_Length;
    };


    struct MemList
    {
        struct Node     ml_Node;
        UWORD           ml_NumEntries;
        struct MemEntry ml_ME[1];
    };

L'array ``ml_ME`` di ``struct MemList`` ha un numero variabile di elementi. Il
numero dei suoi elementi è settato in ``ml_NumEntries``. La struct ``MemEntry``
descrive una singola unità di memoria. Vengono memorizzate la sua grandezza
(``me_Length``), le sue richieste (es. ``MEMF_``, in ``me_Un.meu_Reqs``) e
possibilmente un puntatore a un blocco di memoria (``me_Un.meu_Addr``). La
struct ``MemList`` che passiamo a ``oldlist``, deve avere settato il campo
``ml_NumEntries`` al numero di struct ``MemEntry`` contenute in ``ml_ME``. La
struct ``MemEntry`` deve avere settati i campi ``me_Length`` e ``me_Un.meu_Reqs``.
Gli altri campi vengono ignorati. La funzione restituisce un puntatore a una
copia della struct ``MemEntry``, passata in ``oldlist``, con tutti i campi
rilevanti settati (specialmente ``me_Un.meu_Addr``). Viene segnalato un errore
settando il bit più significativo del puntatore che viene restituito. Quindi
dovete sempre controllarlo, prima di utilizzare il puntatore ritornato. La
memoria allocata con `AllocEntry()` deve essere liberata usando `FreeMem()`.


Memory Pools
^^^^^^^^^^^^

AROS gestisce diversi cosiddetti memory-pools. Ogni memory-pool contiene una
lista di aree di memoria. Il memory-pool più importante è quello che contiene
tutta la memoria libera del sistema. Ma potete anche creare dei memory-pool voi
stessi. Questo ha alcuni vantaggi:

+ Ogni volta che allocate della memoria, la memoria nel sistema diventa sempre
  più frammentata. Questa frammentazione fa sì che i blocchi di memoria
  disponibili diventino sempre più piccoli. In questo modo le allocazioni più
  grandi falliranno. Per prevenire questo problema vengono introdotti i
  memory-pool. Invece di allocare molti piccoli blocchi di memoria, le routine
  di gestione dei pool allocano grossi blocchi e quindi restituiscono piccoli
  blocchi di essi, quando vengono fatte le richieste di memoria.

+ I memory-pool privati hanno l'abilità di tenere traccia di tutte le
  allocazioni che avete fatto, cosicchè tutta la memoria in un pool potrà essere
  liberata con una semplice chiamata di funzione (ma potete anche liberare la
  memoria individualmente).

Prima che un memory-pool possa essere usato, deve essere creato. Questa
operazione viene eseguita dalla funzione::

    #include <proto/exec.h>

    APTR CreatePool( ULONG flags, ULONG puddleSize, ULONG threshSize );

I `flags` specificano il tipo di memoria che volete ottenere dalla funzione
`AllocPooled()`. Tutte le definizioni ``MEMF_`` descritte sopra sono permesse
anche qui.

`puddleSize` è la grandezza dei blocchi di memoria allocati dalle funzioni di
pooling. Normalmente, una grandezza dieci volte superiore alla grandezza di
memoria media che avete bisogno di allocare, è una buona opzione. Ma non di
meno il `puddleSize` non dovrebbe essere troppo grande. Normalmente potreste
limitarlo a circa ``50kb``. Nota bene, questi sono solo suggerimenti, non reali
limitazioni.

Infine, `threshSize` specifica quanto può essere grande la memoria che si deve
allocare, cosìcchè nessun nuovo blocco viene allocato automaticamente. Se, per
esempio, il `threshSize` è settato a 25kb e volete allocare una porzione di
memoria grande 30kb, non viene cercata la lista interna di blocchi, ma invece
la memoria verrà allocata direttamente. Se la memoria da allocare fosse di soli
20kb, allora per prima cosa verrebbe fatta una ricerca nella lista dei blocchi
per trovare una porzione di memoria di quella grandezza. Ovviamente, `threshSize`
*non deve* essere più grande di `puddleSize` non dovrebbe essere neanche troppo
piccolo. La metà di `puddleSize` è un buon compromesso.

`CreatePool()` ritorna un puntatore privato a una struttura-pool che deve essere
salvato per usi futuri. Se non è disponibile memoria per la struttura-pool,
allora verrà restituito ``NULL``. Dovete controllare sempre il verificarsi di
questa condizione.

Dopo l'uso, tutti i memory-pool devono essere distrutti chiamando::

    #include <proto/exec.h>

    void DeletePool( APTR pool );

Questa funzione cancella il `pool` che le è stato passato. Inoltre, tutta la
memoria allocata in quel pool verrà liberata. In questo modo, non avete bisogno
di ricordare ogni singolo pezzo di memoria che avete allocato in quel pool.
Basterà chiamare `DeletePool()` alla fine. Ricordate di fare attenzione a non
utilizzare memoria dopo che il suo pool è stato cancellato.

Se volete allocare memoria da un pool, dovete chiamare::

    #include <proto/exec.h>

    void *AllocPooled( APTR pool, ULONG size );

A prescindere dal `pool` da cui allocare memoria, deve essere specificata la
grandezza (`size`) della memoria da allocare. Verrà restituito un puntatore a
un blocco di memoria della grandezza richista o ``NULL`` per indicare che non
c'è sufficiente memoria disponibile.

La memoria allocata con `AllocPooled()` può essere liberata sia distruggendo
l'intero pool con `DeletePool()` o individualmente chiamando::

    #include <proto/exec.h>

    void FreePooled( APTR pool, void *memory, ULONG size );

Questa funzione libera esattamente un pezzo di memoria che è stato
precedentemente allocato usando `AllocPooled()`. Devono essere specificato come
argomenti: il puntatore alla memoria `memory` resituito da `AllocPooled()`, la
sua grandezza `size` e il pool in cui si trova.

.. Note::

    Potreste chiedervi: "Se `DeletePool()` cancella tutta la memoria di un pool,
    perchè mai dovrei usare `FreePooled()`?" La risposta è semplice: per
    risparmiare memoria. Normalmente è un buono stile quello di liberare memoria
    immediatamente quando non ne avete più bisogno. Ma a volta è più semplice
    liberare un memory-pool dopo un mucchio di allocazioni. Ciò nonostante,
    non dovreste usare questa caratteristica, se non ne siete sicuri, quando
    il memory-pool viene cancellato. Immaginate un programma come questi (non
    provate a compilarlo, non compilerebbe)::

        #define <exec/types.h>
        #define <exec/memory.h>
        #define <dos/dos.h>

        int main(int argc, char *argv[])
        {
            APTR pool;
            APTR mem;

            /* Creiamo il nostro memory pool e testiamo se è stato creato con
               successo. */
            pool = CreatePool(MEMF_ANY, 50*1024, 25*1024);
            if (pool)
            {               

                /* Una semplice funzione fittizia. Immaginate che questa
                   funzione apra una finestra con due bottoni "Fai azione" e
                   "Quit". */
                open_our_window();

                for(;;)
                {
                    /* Un'altra funzione fittizia che restituisce una delle
                       definizioni qui sotto */
                    switch(get_action())
                    {
                    /* Viene restituita questa se viene rilasciato il bottone
                       "Fai azione" */
                    case DOACTION:
                        mem = AllocPooled(pool, 10*1024);
                        if (mem)
                        {
                            /* Un'altra funzione che usa la nostra memoria. */
                            silly_function(mem);
                        }
                        break;
                    /* Viene restituita questa se viene rilasciato il bottone
                       "Quit" */
                    case QUIT:
                        return RETURN_OK;
                    }
                }

                /* Chiude la finestra che abbiamo aperto prima */
                close_our_window();

                /* Cancella il nostro pool. */
                DeletePool(pool);
            }
        }

    Ogni volta che il bottone ``Fai azione`` è rilasciato, viene allocata un
    po' di memoria. Questa memoria viene liberata alla fine del programma,
    quando viene chiamata `DeletePool()`. Ovviamente, più a lungo il programma
    viene utilizzato, più memoria verrà impegnata. E' questo il motivo per cui
    è molto meglio liberare la memoria dopo l'uso. Questo viene implementato
    sostituendo la parte tra ``case DOACTION:`` e ``case QUIT:`` con::

        mem = AllocPooled(pool, 10*1024);
        if (mem)
        {
            silly_function(mem);
            FreePooled(pool, mem, 10*1024);
        }
        break;


Funzioni di Memory Pool Obsolete
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

I pool di memoria vengono gestiti con le ``struct MemHeader``. Se avete un
puntatore a una struttura come questa, potete provare ad allocare della memoria
dal suo pool::

    #include <proto/exec.h>

    void *Allocate( struct MemHeader *mh, ULONG size );

Oltre al puntatore a una struct ``MemHeader`` passato in ``mh``, dovete fornire
la grandezza ``size`` del blocco di memoria che volete allocare. Questa funzione
restituisce un puntatore al primo blocco di memoria trovato o ``NULL`` se non
viene trovato alcun blocco.

Dovete liberare ogni blocco di memoria allocato con `Allocate()` con::

    #include <proto/exec.h>

    void Deallocate( struct MemHeader *mh, APTR mem, ULONG size );

Dovete passare a `Deallocate()` gli stessi ``mh`` e ``size`` passati ad
`Allocate()` e, in aggiunta, il puntatore che vi è stato restituito da essa.

intuition.library fornisce un altro modo per gestire memory pool con le funzioni
`AllocRemember()` e `FreeRemember()`. Notate, tuttavia, che queste sono
obsolete. Usate le normali funzioni di pooling di exec.library.


Allocare un indirizzo di memoria specifico
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In certe circostanze molto rare, potreste avere bisogno di allocare memoria a
un indirizzo specifico. Per farlo usate::

    #include <proto/exec.h>

    void *AllocAbs( ULONG size, APTR address );

Questa funzione prova ad allocare `size` bytes all'indirizzo `address`. Se ci
riesce, verrà restituito un puntatore all'indirizzo richiesto. Se nel blocco
richiesto c'è della memoria già allocata o non è disponibile nel sistema,
allora verrà restituito ``NULL``.

.. Warning::

    L'inizio del blocco di memoria richiesto verrà usato da exec per
    memorizzare i dati del nodo (la grandezza esatta si calcola con 
    ``(2*sizeof (void *)) )``. Per questo, *non dovete scrivere* all'inizio
    del blocco di memoria! A causa di questi ostacoli non dovreste usare
    `AllocAbs()`, tranne che non ne abbiate veramente bisogno.

La memoria allocata con ``AllocAbs()`` deve essere liberata usando ``FreeMem()``.


Interrogare la grandezza di memoria e la memoria disponibile
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Per ottenere la grandezza della memoria disponibile, usate la funzione::

    #include <proto/exec.h>

    ULONG AvailMem( ULONG type );

Il parametri `type` è rappresentato da alcuni dei seguenti flag, definiti in
`exec/memory.h`:

``MEMF_ANY``
    Restituisci la grandezza di tutta la memoria libera nel sistema.

``MEMF_CHIP``
    Restituisci la grandezza della memoria, quella accessibile ai chip grafici
    e sonori.

``MEMF_FAST``
    Restituisci la grandezza della memoria che non è accessibile ai chip
    grafici e sonori.

``MEMF_LARGEST``
    Ritorna solo il blocco più grande, al posto di tutta la memoria del tipo
    specificato.

Potreste specificato anche altri flag ``MEMF_``, ma verrebbero ignorati.

.. Note::

    Notate bene che la grandezza di memoria interrogata non deve riflettere
    necessariamente la grandezza reale della memoria disponibile, in quanto
    questa cambia sempre in un sistema multitasking, anche mentre viene
    eseguita `AvailMem()`.

Ecco un programma per elencare la memoria disponibile nel sistema::

    #include <stdio.h>
    #include <exec/memory.h>

    int main(int argc, char *argv[])
    {
        printf("Memoria totale libera: %h, blocco più grande: %h\n",
        AvailMem(MEMF_ANY), AvailMem(MEMF_ANY|MEMF_LARGEST));

        printf("Memoria chip libera:  %h, blocco più grande: %h\n",
        AvailMem(MEMF_CHIP), AvailMem(MEMF_CHIP|MEMF_LARGEST));

        printf("Memoria fast libera:  %h, blocco più grande: %h\n",
        AvailMem(MEMF_FAST), AvailMem(MEMF_FAST|MEMF_LARGEST));
    }


Aggiungere memoria al sistema
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Questo capitolo è solo per interessarvi, se volete scrivere un driver per un
componente hardware che aggiunge memoria al sistema::

    #include <proto/exec.h>

    void AddMemList
    (
        ULONG size, ULONG type, LONG priority,
        APTR address, STRPTR name
    );

aggiunge memoria alla lista della memoria libera nel sistema. Dovete fornire
l'indirizzo `address` e la grandezza `size` della memoria da aggiungere. In
`type` dovete settare almeno uno dei flag ``MEMF_`` definiti in `exec/memory.h`:

``MEMF_FAST``
    La vostra memoria non deve essere accessibile ai chip grafici e sonori.

``MEMF_CHIP``
    La vostra memoria sarà accessibile ai chip grafici e sonori.

Potete fornire una priorità `priority`, con la quale la vostra memoria sarà
aggiunta alla lista di memoria. La regola gerale è: Più veloce è la vostra
memoria, più alta dovrebbe essere la sua priorità. Se non sapete cosa
specificare qui, fornite ``0``. Infine, potete specificare un nome `name`, con
il quale la vostra memoria può essere identificata dal sistema e dagli utenti.
Potete specificate ``NULL`` al posto di un nome, ma dare un nome alla vostra
memoria è raccomandato.

Una volta che la vostra memoria è stata aggiunta alla lista della memoria
libera, non può essere più rimossa.


Situazioni di scarsa memoria
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

FIXME: AddMemHandler()/RemMemHandler()`exec/types.h`.
