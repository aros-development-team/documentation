====
Copy
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <changetaskpri>`_ `Next <date>`_ 

---------------

::

 Copy 

Шаблон
~~~~~~
::


     FROM/M, TO, ALL/S, QUIET/S, BUF=BUFFER/K/N, CLONE/S, DATES/S, NOPRO/S,
     COM=COMMENT/S, NOREQ/S,

     PAT=PATTERN/K, DIRECT/S,SILENT/S, ERRWARN/S, MAKEDIR/S, MOVE/S,
     DELETE/S, HARD=HARDLINK/S, SOFT=SOFTLINK/S, FOLNK=FORCELINK/S,
     FODEL=FORCEDELETE/S, FOOVR=FORCEOVERWRITE/S, DONTOVR=DONTOVERWRITE/S,
     FORCE/S


Расположение
~~~~~~~~~~~~
::


     Workbench:C


Функции
~~~~~~~
::


     Создаёт одинаковые копии одного или нескольких файлов


Ввод
~~~~
::


     FROM      --  несколько входных файлов
     TO        --  конечные файлы или директория
     ALL       --  просматриваь поддиректории
     QUIET     --  не выводить никаких сообщеий или запросов
     BUFFER    --  размер буфера для копирования в блоках по 512 Байт
                   (по умолчанию 1024 (= 512K))
     CLONE     --  также копировать комментарии, атрибуты защиты и дату
     DATES     --  копировать дату файлов
     NOPRO     --  не копировать атрибуты защиты файлов
     COMMENT   --  копировать комментарии файлов
     NOREQ     --  не выводить запросы

     PATTERN   --  маска (pattern), которой должны соответствовать имена файлов
     DIRECT    --  только копирование, никаких тестов и проверок
     VERBOSE   --  выводить больше информации
     ERRWARN   --  при ошибке копирования одного фала прекращать копирования
     MAKEDIR   --  обрабатывать директории
     MOVE      --  после успешного копирования удалить исходные файлы
     DELETE    --  не копировать, а удалить исходные файлы
     HARDLINK  --  создаёт hardlink на исходный файл вместо копирования
     SOFTLINK  --  создаёт softlink на исходный файл вместо копирования
     FOLNK     --  создавать ссылки также на директории
     FODEL     --  также удалять и защищенные файлы
     FOOVR     --  также перезаписать и защищенные файлы
     DONTOVR   --  не перезаписывать файлы назначения
     FORCE     --  НЕ ИСПОЛЬЗОВАТЬ. Оставлено для совместимости.


 Более подробное описание:

 FROM:
 Исходные файл(ы). При обработке директорий все файлы в них считаются исходными.
 Могут иметь стандартные маски (patterns).

 TO:
 Файл назначения, или, при нескольких исходных файлах, директория назначения.
 Директории назначения создаются вклюая все поддиректории.
 
 ALL:
 Рекурсивная(циклическая) обработка директорий

 QUIET:
 Убирает вообще все сообщения, включая и запросы для отсутствующих дисков,  
 и все прочие сообщения о проблемах!

 BUF=BUFFER:
 Задаёт размер буферов по 512 Байт для копирования. По умолчанию их 200
 [100КБ памяти]. Минимальный размер - один буфер, но использовать такое значение
 нельзя.

 PAT=PATTERN:
 PATTERN позволяет задать маску (pattern) dos, которой все файлы должны 
 соответствовать. Полезна вместе с опцией ALL.

 Пример:
 Если надо удалить все файлы .info files во всех каталогах, можно задать опции:
 Copy DELETE #? ALL PAT #?.info

 CLONE:
 Комментарии, информация о дате и атрибуты защиты будут скопированы вместе с 
 файлами или директориями.
 
 DATES:
 Временная информация исходных файлов будет задана для конечных.

 NOPRO:
 Атрибуты защиты исходных файлов НЕ копируются, и будут заданы атрибуты по 
 умолчанию [rwed]. 
 
 COM=COMMENT:
 Комментарий исходного файла копируется в конечный.

 NOREQ:
 При появлении ошибок, никакие стандартные запросы DOS не показываются.


 DIRECT:
 Определенные устройства не позволяют использовать некоторые используемые виды 
 запросов пакетов DOS. Эта опция включает самое простое копирование, открывая 
 исходные файлы и файлы назначения напрямую безо всяких проверок.
 Опции ALL, PAT, CLONE, DATES, NOPRO, COM, MAKEDIR, MOVE, DELETE, HARD,
 SOFT, FOLNK, FODEL, FOOVR, DONTOVR и множественные входные файлы не могут 
 использоваться вместе с этой опцией. При этом допускается только один исходный 
 (и конечный) файл.
 Также эта опция полезна в случае, если требуется удалить символьную (softlink) 
 ссылку, более не указывающую на действительный файл.
 Пример использования: 'Copy DIRECT text PRT:' печатает файл под названием text.
 Большинство таких случаев обрабатываются Copy автоматически, но всё же опция 
 иногда может быть полезна.
 
 VERBOSE:
 Выдаёт дополнительные сообщения.

 ERRWARN:
 Copy выдаёт 3 типа ошибок dos.library:
 5   WARN    Ошибка копирования единичного файла, Copy пропускает его и 
             приступает к следующему.
 10  ERROR   Не удалось создать директорию, или прочая нефатальная ошибка.
             Copy завершает выполнение.
 20  FAIL    По-настоящему фатальная ошибка (Мало памяти, Examine failed, ...)
             Copy завершает выполнение.
 При задании опции  ERRWARN, ошибка с кодом 5 (WARN) меняет значение на 10 
 (ERROR). При этом Copy завершается при любой ошибке.

 MAKEDIR:
 Все имена в поле FROM считаются директориями, икоторые необходимо создать.

 MOVE:
 Файлы не копируются, а перемещаются (или переименовываются). Это означает, что
 после перемещения, исходный файл прекратит существование.
 
 DELETE:
 Ничего не копируется, но исходные файлы будут удалены!

 HARD=HARDLINK:
 Вместо копирования файлов, создаётся hard link. Это возможно, только если 
 директория назначения находится на одном устройстве с исходной.
 При задании опции ALL, рекурсивно сканируются поддиректории, иначе Copy создаёт
 ссылки на директории.
 
 SOFT=SOFTLINK:
 Вместо копирования директорий, создаётся soft link. Такие ссылки можно 
 использовать и между различными устройствами. Они создаются только для 
 директорий, при этом файлы пропускаются. Таким образом, опция FORCELINK в этом 
 случае установлена в true.
 ЗАМЕЧАНИЕ: Softlinkи официально не поддерживаются ОС, и могут быть опасны в 
 использовании. Рекомендуется не использовать эту опцию! См. описание ниже.
 
 FOLNK=FORCELINK:
 Когда требуется создание ссылок на директории, необходима эта опция. См. 
 раздел "О ссылках" с описаниями возможных проблем.
 
 FODEL=FORCEDELETE:
 Если эта опция включена, файлы удаляются и тогда, когда они защищены.
 
 FOOVR=FORCEOVERWRITE:
 Если эта опция включена, файлы перезаписываются и тогда, когда они защищены.
 
 DONTOVR=DONTOVERWRITE:
 Эта опция позволяет избежать перезаписи конечных файлов.
 


См. также
~~~~~~~~~
::


     Delete, Rename, MakeDir, MakeLink


