====
camd
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddMidiLinkA()`_                       `CloseMidiDevice()`_                    `CreateMidiA()`_                        `DeleteMidi()`_                         
`EndClusterNotify()`_                   `FindCluster()`_                        `FindMidi()`_                           `FlushMidi()`_                          
`GetMidi()`_                            `GetMidiAttrsA()`_                      `GetMidiErr()`_                         `GetMidiLinkAttrsA()`_                  
`GetSysEx()`_                           `GoodPutMidi()`_                        `LockCAMD()`_                           `Midi2Driver()`_                        
`MidiLinkConnected()`_                  `MidiMsgLen()`_                         `MidiMsgType()`_                        `NextCluster()`_                        
`NextClusterLink()`_                    `NextMidi()`_                           `NextMidiLink()`_                       `OpenMidiDevice()`_                     
`ParseMidi()`_                          `PutMidi()`_                            `PutMidiMsg()`_                         `PutSysEx()`_                           
`QuerySysEx()`_                         `RemoveMidiLink()`_                     `RethinkCAMD()`_                        `SetMidiAttrsA()`_                      
`SetMidiLinkAttrsA()`_                  `SkipSysEx()`_                          `StartClusterNotify()`_                 `UnlockCAMD()`_                         
`WaitMidi()`_                           
======================================= ======================================= ======================================= ======================================= 

-----------

AddMidiLinkA()
==============

Synopsis
~~~~~~~~
::

 struct MidiLink * AddMidiLinkA(
          struct MidiNode * midinode,
          LONG type,
          struct TagItem * tags );
 
 struct MidiLink * AddMidiLink(
          struct MidiNode * midinode,
          LONG type,
          TAG tag, ... );

Function
~~~~~~~~
::

             Adds a midilink to a midinode.


Inputs
~~~~~~
::

             midinode - Owner.
             type - MLTYPE_Receiver or MLTYPE_Sender
             tags - Tag-values supplied to SetMidiLinkAttrs.



See also
~~~~~~~~

`CreateMidiA()`_ `SetMidiLinkAttrsA()`_ 

----------

CloseMidiDevice()
=================

Synopsis
~~~~~~~~
::

 void CloseMidiDevice(
          struct MidiDeviceData * mididevicedata );

Function
~~~~~~~~
::

             Remind me to fill in things here later.



See also
~~~~~~~~

`OpenMidiDevice()`_ 

----------

CreateMidiA()
=============

Synopsis
~~~~~~~~
::

 struct MidiNode * CreateMidiA(
          struct TagItem * tags );
 
 struct MidiNode * CreateMidi(
          TAG tag, ... );

Inputs
~~~~~~
::

             tags - Tag-values supplied to SetMidiAttrs.


Result
~~~~~~
::

             NULL if failed.



----------

DeleteMidi()
============

Synopsis
~~~~~~~~
::

 void DeleteMidi(
          struct MidiNode * midinode );

Function
~~~~~~~~
::

             First deletes all midilinks attached to the midinode, then
             frees all buffers, before it frees itself.



----------

EndClusterNotify()
==================

Synopsis
~~~~~~~~
::

 void EndClusterNotify(
          struct ClusterNotifyNode * cn );

Function
~~~~~~~~
::

     void EndClusterNotify(struct ClusterNotifyNode *)


Inputs
~~~~~~
::

     pointer to previously added ClusterNotifyNode.


Result
~~~~~~
::

     void


Notes
~~~~~
::

     DO NOT call with a ClusterNotifyNode that has not been added.


Bugs
~~~~
::

             None known



See also
~~~~~~~~

`StartClusterNotify()`_ 

----------

FindCluster()
=============

Synopsis
~~~~~~~~
::

 struct MidiCluster * FindCluster(
          STRPTR name );

Function
~~~~~~~~
::

             Finds a midicluster from camd's internal list of midiclusters.


Inputs
~~~~~~
::

             name - Name of cluster to find.


Result
~~~~~~
::

             NULL if cluster could not be found.


Notes
~~~~~
::

             - CL_Linkages must be locked before calling.



See also
~~~~~~~~

`FindMidi()`_ 

----------

FindMidi()
==========

Synopsis
~~~~~~~~
::

 struct MidiNode * FindMidi(
          STRPTR name );

Function
~~~~~~~~
::

             Finds the midinode with name 'name'.


Inputs
~~~~~~
::

             name - Name of midinode to find.


Result
~~~~~~
::

             NULL if no midinode with that name or a pointer to the midinode if success.


Notes
~~~~~
::

             CL_Linkages must be locked.



----------

FlushMidi()
===========

Synopsis
~~~~~~~~
::

 void FlushMidi(
          struct MidiNode * midinode );

Function
~~~~~~~~
::

             Remind me to fill in things here later.


Bugs
~~~~
::

             Not tested.



See also
~~~~~~~~

`GetMidi()`_ `GetSysEx()`_ 

----------

GetMidi()
=========

Synopsis
~~~~~~~~
::

 BOOL GetMidi(
          struct MidiNode * midinode,
          MidiMsg * msg );

Function
~~~~~~~~
::

             Gets a message from a midinodes buffer.


Inputs
~~~~~~
::

             midinode - pointer to midinode
             msg - The message is removed from the internal buffer and copied into msg.


Result
~~~~~~
::

             TRUE if message was copied, FALSE if buffer was empty.



See also
~~~~~~~~

`WaitMidi()`_ 

----------

GetMidiAttrsA()
===============

Synopsis
~~~~~~~~
::

 ULONG GetMidiAttrsA(
          struct MidiNode * midinode,
          struct TagItem * tags );
 
 ULONG GetMidiAttrs(
          struct MidiNode * midinode,
          TAG tag, ... );

Notes
~~~~~
::

             If you are not the owner of the midinode, you should lock
             Camd before calling to ensure that it wont go away.



See also
~~~~~~~~

`SetMidiAttrsA()`_ 

----------

GetMidiErr()
============

Synopsis
~~~~~~~~
::

 UBYTE GetMidiErr(
          struct MidiNode * midinode );

Function
~~~~~~~~
::

             Gets the current error-state of a midinode.


Inputs
~~~~~~
::

             midinode - pointer to midinode


Result
~~~~~~
::

             0 if everything was okey, not 0 else.



See also
~~~~~~~~

`GetMidi()`_ `WaitMidi()`_ 

----------

GetMidiLinkAttrsA()
===================

Synopsis
~~~~~~~~
::

 ULONG GetMidiLinkAttrsA(
          struct MidiLink * midilink,
          struct TagItem * tags );
 
 ULONG GetMidiLinkAttrs(
          struct MidiLink * midilink,
          TAG tag, ... );

Function
~~~~~~~~
::

             Remind me to fill in things here later.


Notes
~~~~~
::

             If you are not the owner of the midilink, you should lock
             Camd before calling to ensure that it wont go away.
             Theres no point in locking if you know it wont go away.



See also
~~~~~~~~

`SetMidiLinkAttrsA()`_ 

----------

GetSysEx()
==========

Synopsis
~~~~~~~~
::

 ULONG GetSysEx(
          struct MidiNode * midinode,
          UBYTE * Buf,
          ULONG len );

Function
~~~~~~~~
::

             Remind me to fill in things here later.



See also
~~~~~~~~

`SkipSysEx()`_ `QuerySysEx()`_ 

----------

GoodPutMidi()
=============

Synopsis
~~~~~~~~
::

 APTR GoodPutMidi(
          struct MidiLink * midilink,
          ULONG msg,
          ULONG maxbuff );

Function
~~~~~~~~
::

             This is a private function, and will probably be obsolete. Please don`t use.


Result
~~~~~~
::

     NULL if success, driverdata if not.



See also
~~~~~~~~

`PutMidi()`_ `PutMidiMsg()`_ `Midi2Driver()`_ 

----------

LockCAMD()
==========

Synopsis
~~~~~~~~
::

 APTR LockCAMD(
          ULONG locktype );

Function
~~~~~~~~
::

             Locks the internal lists in camd.
             You must call UnlockCAMD later.


Inputs
~~~~~~
::

             locktype - Only CD_Linkages is legal.


Result
~~~~~~
::

             APTR to send to UnlockCAMD



----------

Midi2Driver()
=============

Synopsis
~~~~~~~~
::

 BOOL Midi2Driver(
          APTR driverdata,
          ULONG msg,
          ULONG maxbuff );

Function
~~~~~~~~
::

             This is a private function, and will probably be obsolete. Please don`t use.


Result
~~~~~~
::

     TRUE if max(buffer,maxbuffer) was big enough to hold the message, FALSE if not.



See also
~~~~~~~~

`PutMidi()`_ `GoodPutMidi()`_ `PutMidiMsg()`_ 

----------

MidiLinkConnected()
===================

Synopsis
~~~~~~~~
::

 BOOL MidiLinkConnected(
          struct MidiLink * midilink );

Function
~~~~~~~~
::

             If midilink is a sender, returns FALSE if the cluster has no
             receivers. If midilink is a receiver, returns FALSE if the
             cluster has no senders. Else TRUE.


Inputs
~~~~~~
::

             midilink - pointer to midilink we want to check.



----------

MidiMsgLen()
============

Synopsis
~~~~~~~~
::

 WORD MidiMsgLen(
          ULONG msg );

Function
~~~~~~~~
::

             Returns the length of a midimessage. sysex message leads to a
             length of zero.


Inputs
~~~~~~
::

             msg - Message.



----------

MidiMsgType()
=============

Synopsis
~~~~~~~~
::

 WORD MidiMsgType(
          MidiMsg * msg );

Function
~~~~~~~~
::

             Return the type of a message (see <midi/camd.h>). sysex messages
             returns -1.


Inputs
~~~~~~
::

             msg - midimessage.



----------

NextCluster()
=============

Synopsis
~~~~~~~~
::

 struct MidiCluster * NextCluster(
          struct MidiCluster * last );

Function
~~~~~~~~
::

             Finds the next cluster in camds list of clusters.


Inputs
~~~~~~
::

             last - cluster to start searching for.


Result
~~~~~~
::

             Next cluster in list, or first if 'last' is NULL.


Example
~~~~~~~
::


             #include <stdio.h>
             #include <proto/exec.h>
             #include <proto/camd.h>
             #include <midi/camd.h>

             int main(){

                     APTR lock;
                     struct MidiCluster *cluster;

                     struct Library *CamdBase=OpenLibrary("camd.library",0L);
                     if(CamdBase!=NULL){

                             lock=LockCAMD(CD_Linkages);

                             cluster=NextCluster(NULL);
                             if(cluster==NULL){

                                     printf("No clusters available.\n");

                             }else{

                                     do{
                                             printf("clustername: -%s-\n",cluster->mcl_Node.ln_Name);
                                             cluster=NextCluster(cluster);
                                     }while(cluster!=NULL);

                             }

                             UnlockCAMD(lock);
                             CloseLibrary(CamdBase);

                     }else{
                             printf("Could not open camd.library.\n");
                             return 1;
                     }

                     return 0;
             }



Notes
~~~~~
::

             - CL_Linkages must be locked.

             - Often, a program wants to use this function for finding available
               clusters a user can choose from. It is then recommended to also
               let the user have the possibility to write in the name of a new cluster,
               so that camd can make new clusters automatically to be used for
               communication between various applications without having hardware-drivers
               etc. interfere with the datastreams. Applications do
               not need to make special concerns about how cluster works or
               what they contain; that is all managed by camd.



See also
~~~~~~~~

`NextMidiLink()`_ `NextMidi()`_ `FindCluster()`_ 

----------

NextClusterLink()
=================

Synopsis
~~~~~~~~
::

 struct MidiLink * NextClusterLink(
          struct MidiCluster * cluster,
          struct MidiLink * midilink,
          LONG type );

Function
~~~~~~~~
::

             Finds the next midilink of a specified type in a midicluster.


Inputs
~~~~~~
::

             cluster - Pointer to the midicluster that the midilink belongs to.
             midilink - Pointer to the midilink to begin searching from.
             type - Either MLTYPE_Receiver or MLTYPE_Sender


Result
~~~~~~
::

             Returns the next MidiLink of a spevified type, or NULL if the last
             in the list. If midilink is NULL, returns the first.


Notes
~~~~~
::

             CL_Linkages must be locked.



----------

NextMidi()
==========

Synopsis
~~~~~~~~
::

 struct MidiNode * NextMidi(
          struct MidiNode * midinode );

Function
~~~~~~~~
::

             Returns the next midinode in the list of midinodes, or NULL
             if midinode was the last one.


Inputs
~~~~~~
::

             midinode - The midinode to begin searching from. If NULL,
                        returns the first midinode in the list.


Notes
~~~~~
::

             CL_Linkages must be locked.



----------

NextMidiLink()
==============

Synopsis
~~~~~~~~
::

 struct MidiLink * NextMidiLink(
          struct MidiNode * midinode,
          struct MidiLink * midilink,
          LONG type );

Function
~~~~~~~~
::

             Returns the next MidiLink of a specified type that belongs
             to a midinode. Or NULL if midilink was the last. If midilink
             is NULL, returns the first one.


Inputs
~~~~~~
::

             type - MLTYPE_Sender or MLTYPE_Receiver.


Notes
~~~~~
::

             CL_Linkages must be locked.



----------

OpenMidiDevice()
================

Synopsis
~~~~~~~~
::

 struct MidiDeviceData * OpenMidiDevice(
          UBYTE * name );

Function
~~~~~~~~
::

             Remind me to fill in things here later.



See also
~~~~~~~~

`CloseMidiDevice()`_ 

----------

ParseMidi()
===========

Synopsis
~~~~~~~~
::

 void ParseMidi(
          struct MidiLink * midilink,
          UBYTE * buffer,
          ULONG length );

Function
~~~~~~~~
::

             Puts a midibuffer to a midilinks clusters midilinks midinodes and hardware.
             To help understand what it does, the following macro makes PutMidi
             use ParseMidi instead of calling camd.library's PutMidi function for
             small-endian cpus:

             #define PutMidi(midilink,message) ParseMidi((midilink),&(message),MidiMsgLen(message))

             (But please don't use this macro, since its not big-endian compatible,
         and that PutMidi is faster than ParseMidi)


Notes
~~~~~
::

             If its more convenient to use PutMidi and PutSysEx instead of ParseMidi,
             do that. ParseMidi is a bit heavier function to use than PutMidi and
             PutSysEx.

             MLINK_Parse must have be set when calling either AddMidiLinkA or
             SetMidiLinkAttrsA.



See also
~~~~~~~~

`PutMidi()`_ `PutSysEx()`_ 

----------

PutMidi()
=========

Synopsis
~~~~~~~~
::

 void PutMidi(
          struct MidiLink * link,
          ULONG msg );

Function
~~~~~~~~
::

             Puts a midimessage to hardware and all sender-links that belongs
             to the midilink's cluster. Does only wait if a hardware send-
             buffer is full, and then tries again and again until the message
             is sent. Else, the function should return immediately.


Inputs
~~~~~~
::

             link - pointer to the midilink to send to.
             msg  - The complete message to send. A message can not hold more
                    than 3 bytes, so it fits fine in a ULONG integer. See NOTES
                    to see how a message is built up.


Notes
~~~~~
::

             Sending an illegal message may have serious consequences. If you for
             some reason are not completely sure whether your message is legal,
             you could do the following test:

             if((msg>>24)<0x80 || (msg>>24)==0xf0 || (msg>>24)==0xf7 || (msg>>16&0xff)>0x7f || (msg>>8&0xff)>0x7f){
                     debug("Warning, illegal midimessage: %x\n",msg);
             }else{
                     PutMidi(midilink,msg);
             }



See also
~~~~~~~~

`PutMidiMsg()`_ 

----------

PutMidiMsg()
============

Synopsis
~~~~~~~~
::

  PutMidiMsg(
     link,
     msg);


Function
~~~~~~~~
::

     Calls PutMidi((midilink),(msg)->mm_Msg)


Notes
~~~~~
::

     Implemented as macro.



----------

PutSysEx()
==========

Synopsis
~~~~~~~~
::

 void PutSysEx(
          struct MidiLink * midilink,
          UBYTE * buffer );

Function
~~~~~~~~
::

             Distributes a SysEx message. First sends the message to the hardware
             and all midinodes connected to the midilinks cluster, then waits
             for the complete message to be sent to the hardware, if any. If
             a midinodes sysex-buffer is to small to carry the message, it will
             not be sent. If the buffer is big enough, but there is not enough
             room, a sysex-full-error will be set to the node. The message is
             sent to hardware regardless of transmit buffer size.


Inputs
~~~~~~
::

             midilink - pointer to link.
             buffer - message to send, must start with 0xf0 and end with 0xf7.
                      No bytes higher than 0x7f are allowed in the message.


See also
~~~~~~~~

`GetSysEx()`_ 

----------

QuerySysEx()
============

Synopsis
~~~~~~~~
::

 ULONG QuerySysEx(
          struct MidiNode * midinode );

Function
~~~~~~~~
::

    Returns the number of bytes remaining in the current sys/ex message.


Inputs
~~~~~~
::

    midinode - pointer to MidiNode


Result
~~~~~~
::

    Remaining bytes in sys/ex message.      0 is returned if the last
    message read from GetMidi() wasn't a sys/ex message.


Bugs
~~~~
::

             Tested.



See also
~~~~~~~~

`SkipSysEx()`_ `GetSysEx()`_ 

----------

RemoveMidiLink()
================

Synopsis
~~~~~~~~
::

 void RemoveMidiLink(
          struct MidiLink * midilink );

Function
~~~~~~~~
::

             Removes and frees a midilink from the system.


Inputs
~~~~~~
::

             midilink - pointer to midilink to remove.



----------

RethinkCAMD()
=============

Synopsis
~~~~~~~~
::

 LONG RethinkCAMD();

Function
~~~~~~~~
::

             Make camd reload midi preferences.


Result
~~~~~~
::

             0 on success.


Bugs
~~~~
::

             Not implemented.



----------

SetMidiAttrsA()
===============

Synopsis
~~~~~~~~
::

 BOOL SetMidiAttrsA(
          struct MidiNode * midinode,
          struct TagItem * tags );
 
 BOOL SetMidiAttrs(
          struct MidiNode * midinode,
          TAG tag, ... );

Inputs
~~~~~~
::

 tagList  --  pointer to an array of tags describing the player's
              attributes or NULL.


Tags
~~~~
::

 MIDI_Name (STRPTR) -- The name of the midinode; default is NULL or a pointer to a string.

 MIDI_SignalTask (struct Task *) -- Task to signal whenever a midimessage is arriving to the node;
                                    default is the task of the caller of this function. (FindTask(NULL))
    
 MIDI_RecvHook (struct Hook *)   -- Function to call whenever a midimessage is arriving to the node.
                                    You should get the midimessage as the first argument in the function,
                                    however, that has not yet been implemented. Default is NULL.

 MIDI_PartHook (struct Hook *)   -- Don't really know what this one is for. Have to check amigos-autodocs.
                                    It does not currently do anything.

 MIDI_RecvSignal (BYTE)          -- Signal bit to use when signalling a task whenever a midimessage is
                                    arriving at the node, or -1 to disable signalling. Default is -1.

 MIDI_PartSignal (BYTE)          -- Signal bit to use when signalling a task when..... Default is -1.

 MIDI_MsgQueue (ULONG)           -- Number of messages the messagequeue is able to hold.

 MIDI_TimeStamp (ULONG *)        -- Pointer to an ULONG value which value is copied directly into the timestamp
                                    attribute in midimessages whenever a new message is received at the node.


  MIDI_ErrFilter (UBYTE)         -- Filters out the errors you don't want to see.


  MIDI_ClientType (UWORD)        -- What sort of application you that owns this node.

  MIDI_Image (struct Image *)    -- Pointer to an image representing this node.

  MIDI_ErrorCode (ULONG *)       -- Pointer to an ULONG which will be set if something went wrong.



Result
~~~~~~
::

             TRUE if everything went okey, FALSE if not. Errorcode
             is put in an ULONG pointed to by the MIDI_ErrorCode tag,
             if supplied.


Notes
~~~~~
::

             - If the midinode is not owned by yourself, please lock
               camd to ensure it wont go away.

             - Allthough you are able to modify midinodes owned by
               others, please avoid it, its normally "non of your buziness",
               and may lead to crashes and other "unexpected" behaviors.
               However, if you have full control of the owner of the
               midinode (f.ex when both you and the owner belongs to the
               same probram and you are absolutely shure you know what
               you are doing), there is no problem.




See also
~~~~~~~~

`GetMidiAttrsA()`_ 

----------

SetMidiLinkAttrsA()
===================

Synopsis
~~~~~~~~
::

 BOOL SetMidiLinkAttrsA(
          struct MidiLink * midilink,
          struct TagItem * tags );
 
 BOOL SetMidiLinkAttrs(
          struct MidiLink * midilink,
          TAG tag, ... );

Function
~~~~~~~~
::

             Remind me to fill in things here later.


Notes
~~~~~
::

             - If the midilink is not owned by yourself, please lock
               camd to ensure it wont go away.

             - Allthough you are able to modify midilinks owned by
               others, please avoid it, its normally "non of your buziness",
               and may lead to crashes and other "unexpected" behaviours.
               However, if you have full control of the owner of the
               midilink (f.ex when both you and the owner belongs to the
               same probram and you are absolutely shure you know what
               you are doing), there is no problem.

             - Warning! If another task have locked Camd and is waiting
               for you to finish, there will be a deadlock if you try
               to change priority or change/set cluster.



See also
~~~~~~~~

`GetMidiLinkAttrsA()`_ 

----------

SkipSysEx()
===========

Synopsis
~~~~~~~~
::

 void SkipSysEx(
          struct MidiNode * midinode );

Function
~~~~~~~~
::

             Remind me to fill in things here later.



See also
~~~~~~~~

`QuerySysEx()`_ `GetSysEx()`_ 

----------

StartClusterNotify()
====================

Synopsis
~~~~~~~~
::

 void StartClusterNotify(
          struct ClusterNotifyNode * cn );

Function
~~~~~~~~
::

     void StartClusterNotify(struct ClusterNotifyNode *cn)


Inputs
~~~~~~
::

     pointer to initialized ClusterNotifyNode structure


Result
~~~~~~
::

     void


Example
~~~~~~~
::

     struct ClusterNotifyNode cnn;
     
     cnn.cnn_Task=IExec->FindTask(NULL);
     cnn.cnn_SigBit=IExec->AllocSignal(-1);
     StartClusterNotify(&cnn);
     
                 somewhere down the line...
     
     Wait(1L<<cnn.cnn_SigBit)
         printf("Cluster Changes have happened\n");


Notes
~~~~~
::

     ClusterNotifyNode structure must remain valid until EndClusterNotify();
     Will only signal added and removed clusters, not internal state changes.



See also
~~~~~~~~

`EndClusterNotify()`_ 

----------

UnlockCAMD()
============

Synopsis
~~~~~~~~
::

 void UnlockCAMD(
          APTR lock );

Function
~~~~~~~~
::

             UnLocks the internal lists in camd.


Inputs
~~~~~~
::

             Pointer received from LockCAMD.


Result
~~~~~~
::

             APTR to send to UnlockCAMD



See also
~~~~~~~~

`LockCAMD()`_ 

----------

WaitMidi()
==========

Synopsis
~~~~~~~~
::

 BOOL WaitMidi(
          struct MidiNode * midinode,
          MidiMsg * msg );

Function
~~~~~~~~
::

             Waits until a new message is received at the node, and
             copy the message to msg.


Inputs
~~~~~~
::

             msg - Pointer to a midimessage where the message will be copied.


Result
~~~~~~
::

             Returns TRUE if a new message arrived or had arrived, FALSE, if there
             was en error on the midinode.



See also
~~~~~~~~

`GetMidi()`_ 

