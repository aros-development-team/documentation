========
security
========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`secAccess_Control()`_                  `secAddMonitor()`_                      `secAllocGroupInfo()`_                  `secAllocUserInfo()`_                   
`secCheckPasswd()`_                     `secContextLocate()`_                   `secEnumChildren()`_                    `secFreeExtOwner()`_                    
`secFreeGroupInfo()`_                   `secFreeUserInfo()`_                    `secFreeze()`_                          `secFSRendezVous()`_                    
`secGetConfigDirLock()`_                `secGetDefProtection()`_                `secgetgid()`_                          `secGetGroupInfo()`_                    
`secGetPasswdDirLock()`_                `secgetpgid()`_                         `secGetPktDefProtection()`_             `secGetPktOwner()`_                     
`secGetRelationshipA()`_                `secGetTaskExtOwner()`_                 `secGetTaskOwner()`_                    `secgetuid()`_                          
`secGetUserInfo()`_                     `secKill()`_                            `secLimitDOSSetProtection()`_           `secLoadPlugin()`_                      
`secLocksecBase()`_                     `secLoginA()`_                          `secLogout()`_                          `secPasswd()`_                          
`secPluginOperationComplete()`_         `secRegisterHandler()`_                 `secRemMonitor()`_                      `secSetDefProtectionA()`_               
`secsetegid()`_                         `secseteuid()`_                         `secsetgid()`_                          `secSetProtection()`_                   
`secsetreuid()`_                        `secsetuid()`_                          `secUnfreeze()`_                        `secUnloadPlugin()`_                    
`secUnlocksecBase()`_                   `secUnRegisterHandler()`_               `secUserInfo2ExtOwner()`_               
======================================= ======================================= ======================================= ======================================= 

-----------

secAccess_Control()
===================

Synopsis
~~~~~~~~
::

 LONG secAccess_Control(
          ULONG contextflags,
          APTR context,
          struct secExtOwner * task,
          ULONG objectowner,
          LONG objectprot,
          LONG access_type );


----------

secAddMonitor()
===============

Synopsis
~~~~~~~~
::

 BOOL secAddMonitor(
          struct secMonitor * monitor );


----------

secAllocGroupInfo()
===================

Synopsis
~~~~~~~~
::

 struct secGroupInfo * secAllocGroupInfo();


----------

secAllocUserInfo()
==================

Synopsis
~~~~~~~~
::

 struct secUserInfo * secAllocUserInfo();


----------

secCheckPasswd()
================

Synopsis
~~~~~~~~
::

 BOOL secCheckPasswd(
          struct TagItem * taglist );
 
 BOOL secCheckPasswdTags(
          TAG tag, ... );


----------

secContextLocate()
==================

Synopsis
~~~~~~~~
::

 APTR secContextLocate(
          secPluginModule * module,
          ULONG id,
          struct Task * caller,
          ULONG size );


----------

secEnumChildren()
=================

Synopsis
~~~~~~~~
::

 LONG secEnumChildren(
          struct Task * parent,
          struct Task ** children,
          LONG size );

Function
~~~~~~~~
::

     Enumerate the children of a given task.


Inputs
~~~~~~
::

     parent - the Task we are interested in (and may be NULL -> calling task),
     children - an array we should populate
     size - the size of the supplied array (children)


Result
~~~~~~
::

     If the size is too small, we return -(num children) to indicate the size of
     the buffer needed for a successful call.
     This means that a program could call us with a size of -1 to ask us how big
     the buffer should be.


Notes
~~~~~
::

     This is designed to replace secGetChildren/secFreeTaskVec.



----------

secFreeExtOwner()
=================

Synopsis
~~~~~~~~
::

 void secFreeExtOwner(
          struct secExtOwner * owner );

Function
~~~~~~~~
::

     Free an Extended Owner structure



----------

secFreeGroupInfo()
==================

Synopsis
~~~~~~~~
::

 void secFreeGroupInfo(
          struct secGroupInfo * info );


----------

secFreeUserInfo()
=================

Synopsis
~~~~~~~~
::

 void secFreeUserInfo(
          struct secUserInfo * info );


----------

secFreeze()
===========

Synopsis
~~~~~~~~
::

 BOOL secFreeze(
          struct Task * task );

Function
~~~~~~~~
::

     Freeze a task or process


Notes
~~~~~
::

     This function may be called by root only!



----------

secFSRendezVous()
=================

Synopsis
~~~~~~~~
::

 BOOL secFSRendezVous();

Function
~~~~~~~~
::

     Freeze a task or process


Notes
~~~~~
::

     This function may be called by root only!



----------

secGetConfigDirLock()
=====================

Synopsis
~~~~~~~~
::

 BPTR secGetConfigDirLock();

Function
~~~~~~~~
::

           Get a Shared Lock on the Directory of the Configuration File



----------

secGetDefProtection()
=====================

Synopsis
~~~~~~~~
::

 ULONG secGetDefProtection(
          struct Task * task );


----------

secgetgid()
===========

Synopsis
~~~~~~~~
::

 UWORD secgetgid();


----------

secGetGroupInfo()
=================

Synopsis
~~~~~~~~
::

 struct secGroupInfo * secGetGroupInfo(
          struct secGroupInfo * info,
          ULONG keytype );


----------

secGetPasswdDirLock()
=====================

Synopsis
~~~~~~~~
::

 BPTR secGetPasswdDirLock();

Function
~~~~~~~~
::

         Get a Shared Lock on the Directory of the Password File



----------

secgetpgid()
============

Synopsis
~~~~~~~~
::

 int secgetpgid(
          int pid );


----------

secGetPktDefProtection()
========================

Synopsis
~~~~~~~~
::

 LONG secGetPktDefProtection(
          struct DosPacket * pkt );


----------

secGetPktOwner()
================

Synopsis
~~~~~~~~
::

 struct secExtOwner * secGetPktOwner(
          struct DosPacket * pkt );


----------

secGetRelationshipA()
=====================

Synopsis
~~~~~~~~
::

 ULONG secGetRelationshipA(
          struct secExtOwner * user,
          ULONG owner,
          struct TagItem * taglist );
 
 ULONG secGetRelationship(
          struct secExtOwner * user,
          ULONG owner,
          TAG tag, ... );


----------

secGetTaskExtOwner()
====================

Synopsis
~~~~~~~~
::

 struct secExtOwner * secGetTaskExtOwner(
          struct Task * task );


----------

secGetTaskOwner()
=================

Synopsis
~~~~~~~~
::

 ULONG secGetTaskOwner(
          struct Task * task );


----------

secgetuid()
===========

Synopsis
~~~~~~~~
::

 UWORD secgetuid();


----------

secGetUserInfo()
================

Synopsis
~~~~~~~~
::

 struct secUserInfo * secGetUserInfo(
          struct secUserInfo * info,
          ULONG keytype );


----------

secKill()
=========

Synopsis
~~~~~~~~
::

 BOOL secKill(
          struct Task * task );


----------

secLimitDOSSetProtection()
==========================

Synopsis
~~~~~~~~
::

 BOOL secLimitDOSSetProtection(
          BOOL flag );


----------

secLoadPlugin()
===============

Synopsis
~~~~~~~~
::

 BOOL secLoadPlugin(
          STRPTR name );


----------

secLocksecBase()
================

Synopsis
~~~~~~~~
::

 struct secPointers * secLocksecBase();


----------

secLoginA()
===========

Synopsis
~~~~~~~~
::

 ULONG secLoginA(
          struct TagItem * taglist );
 
 ULONG secLogin(
          TAG tag, ... );


----------

secLogout()
===========

Synopsis
~~~~~~~~
::

 ULONG secLogout();


----------

secPasswd()
===========

Synopsis
~~~~~~~~
::

 struct secPrivGroupInfo * secPasswd(
          STRPTR oldpwd,
          STRPTR newpwd );


----------

secPluginOperationComplete()
============================

Synopsis
~~~~~~~~
::

 void secPluginOperationComplete(
          APTR context,
          ULONG result );


----------

secRegisterHandler()
====================

Synopsis
~~~~~~~~
::

 ULONG secRegisterHandler(
          struct plugin_ops * ops );


----------

secRemMonitor()
===============

Synopsis
~~~~~~~~
::

 void secRemMonitor(
          struct secMonitor * monitor );


----------

secSetDefProtectionA()
======================

Synopsis
~~~~~~~~
::

 BOOL secSetDefProtectionA(
          struct TagItem * taglist );
 
 BOOL secSetDefProtection(
          TAG tag, ... );


----------

secsetegid()
============

Synopsis
~~~~~~~~
::

 int secsetegid(
          UWORD gid );


----------

secseteuid()
============

Synopsis
~~~~~~~~
::

 int secseteuid(
          UWORD uid );


----------

secsetgid()
===========

Synopsis
~~~~~~~~
::

 int secsetgid(
          UWORD gid );


----------

secSetProtection()
==================

Synopsis
~~~~~~~~
::

 BOOL secSetProtection(
          STRPTR name,
          LONG mask );


----------

secsetreuid()
=============

Synopsis
~~~~~~~~
::

 int secsetreuid(
          int ruid,
          int euid );


----------

secsetuid()
===========

Synopsis
~~~~~~~~
::

 int secsetuid(
          UWORD uid );


----------

secUnfreeze()
=============

Synopsis
~~~~~~~~
::

 BOOL secUnfreeze(
          struct Task * task );

Function
~~~~~~~~
::

        Unfreeze a task or process


Notes
~~~~~
::

         This function may be called by root only!



----------

secUnloadPlugin()
=================

Synopsis
~~~~~~~~
::

 BOOL secUnloadPlugin(
          STRPTR name );


----------

secUnlocksecBase()
==================

Synopsis
~~~~~~~~
::

 void secUnlocksecBase(
          struct secPointers * secP );


----------

secUnRegisterHandler()
======================

Synopsis
~~~~~~~~
::

 void secUnRegisterHandler(
          struct plugin_ops * ops );


----------

secUserInfo2ExtOwner()
======================

Synopsis
~~~~~~~~
::

 struct secExtOwner * secUserInfo2ExtOwner(
          struct secUserInfo * info );


