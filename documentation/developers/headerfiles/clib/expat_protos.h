#ifndef CLIB_EXPAT_PROTOS_H
#define CLIB_EXPAT_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/expat/expat.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <expat.h>

__BEGIN_DECLS


#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(XML_Parser, XML_ParserCreate,
         AROS_LPA(const XML_Char *, encodingName, A0),
         LIBBASETYPEPTR, ExpatBase, 5, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(XML_Parser, XML_ParserCreateNS,
         AROS_LPA(const XML_Char *, encodingName, A0),
         AROS_LPA(XML_Char, nsSep, D0),
         LIBBASETYPEPTR, ExpatBase, 6, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(XML_Parser, XML_ParserCreate_MM,
         AROS_LPA(const XML_Char *, encodingName, A0),
         AROS_LPA(const XML_Memory_Handling_Suite *, memsuite, A1),
         AROS_LPA(const XML_Char *, nameSep, A2),
         LIBBASETYPEPTR, ExpatBase, 7, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(XML_Parser, XML_ExternalEntityParserCreate,
         AROS_LPA(XML_Parser, oldParser, A0),
         AROS_LPA(const XML_Char *, context, A1),
         AROS_LPA(const XML_Char *, encodingName, A2),
         LIBBASETYPEPTR, ExpatBase, 8, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(void, XML_ParserFree,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 9, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP4(enum XML_Status, XML_Parse,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(const char *, s, A1),
         AROS_LPA(int, len, D0),
         AROS_LPA(int, isFinal, D1),
         LIBBASETYPEPTR, ExpatBase, 10, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(enum XML_Status, XML_ParseBuffer,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(int, len, D0),
         AROS_LPA(int, isFinal, D1),
         LIBBASETYPEPTR, ExpatBase, 11, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void *, XML_GetBuffer,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(int, len, D0),
         LIBBASETYPEPTR, ExpatBase, 12, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetStartElementHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartElementHandler, start, A1),
         LIBBASETYPEPTR, ExpatBase, 13, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetEndElementHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_EndElementHandler, end, A1),
         LIBBASETYPEPTR, ExpatBase, 14, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(void, XML_SetElementHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartElementHandler, start, A1),
         AROS_LPA(XML_EndElementHandler, end, A2),
         LIBBASETYPEPTR, ExpatBase, 15, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetCharacterDataHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_CharacterDataHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 16, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetProcessingInstructionHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_ProcessingInstructionHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 17, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetCommentHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_CommentHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 18, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetStartCdataSectionHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartCdataSectionHandler, start, A1),
         LIBBASETYPEPTR, ExpatBase, 19, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetEndCdataSectionHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_EndCdataSectionHandler, end, A1),
         LIBBASETYPEPTR, ExpatBase, 20, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(void, XML_SetCdataSectionHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartCdataSectionHandler, start, A1),
         AROS_LPA(XML_EndCdataSectionHandler, end, A2),
         LIBBASETYPEPTR, ExpatBase, 21, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetDefaultHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_DefaultHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 22, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetDefaultHandlerExpand,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_DefaultHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 23, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetExternalEntityRefHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_ExternalEntityRefHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 24, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetExternalEntityRefHandlerArg,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(void *, arg, A1),
         LIBBASETYPEPTR, ExpatBase, 25, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(void, XML_SetUnknownEncodingHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_UnknownEncodingHandler, handler, A1),
         AROS_LPA(void *, data, A2),
         LIBBASETYPEPTR, ExpatBase, 26, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetStartNamespaceDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartNamespaceDeclHandler, start, A1),
         LIBBASETYPEPTR, ExpatBase, 27, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetEndNamespaceDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_EndNamespaceDeclHandler, end, A1),
         LIBBASETYPEPTR, ExpatBase, 28, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(void, XML_SetNamespaceDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartNamespaceDeclHandler, start, A1),
         AROS_LPA(XML_EndNamespaceDeclHandler, end, A2),
         LIBBASETYPEPTR, ExpatBase, 29, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetXmlDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_XmlDeclHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 30, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetStartDoctypeDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartDoctypeDeclHandler, start, A1),
         LIBBASETYPEPTR, ExpatBase, 31, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetEndDoctypeDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_EndDoctypeDeclHandler, end, A1),
         LIBBASETYPEPTR, ExpatBase, 32, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(void, XML_SetDoctypeDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_StartDoctypeDeclHandler, start, A1),
         AROS_LPA(XML_EndDoctypeDeclHandler, end, A2),
         LIBBASETYPEPTR, ExpatBase, 33, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetElementDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_ElementDeclHandler, eldecl, A1),
         LIBBASETYPEPTR, ExpatBase, 34, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetAttlistDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_AttlistDeclHandler, attdecl, A1),
         LIBBASETYPEPTR, ExpatBase, 35, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetEntityDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_EntityDeclHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 36, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetUnparsedEntityDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_UnparsedEntityDeclHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 37, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetNotationDeclHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_NotationDeclHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 38, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetNotStandaloneHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_NotStandaloneHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 39, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(enum XML_Error, XML_GetErrorCode,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 40, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(const XML_LChar *, XML_ErrorString,
         AROS_LPA(enum XML_Error, code, D0),
         LIBBASETYPEPTR, ExpatBase, 41, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(long, XML_GetCurrentByteIndex,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 42, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(XML_Size, XML_GetCurrentLineNumber,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 43, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(XML_Size, XML_GetCurrentColumnNumber,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 44, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(int, XML_GetCurrentByteCount,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 45, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP3(const char *, XML_GetInputContext,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(int *, offset, A1),
         AROS_LPA(int *, size, A2),
         LIBBASETYPEPTR, ExpatBase, 46, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetUserData,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(void *, p, A1),
         LIBBASETYPEPTR, ExpatBase, 47, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(void, XML_DefaultCurrent,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 48, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(void, XML_UseParserAsHandlerArg,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 49, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(enum XML_Status, XML_SetBase,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(const XML_Char *, p, A1),
         LIBBASETYPEPTR, ExpatBase, 50, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(const XML_Char *, XML_GetBase,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 51, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(int, XML_GetSpecifiedAttributeCount,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 52, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP1(int, XML_GetIdAttributeIndex,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 53, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(enum XML_Status, XML_SetEncoding,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(const XML_Char *, encodingName, A1),
         LIBBASETYPEPTR, ExpatBase, 54, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(int, XML_SetParamEntityParsing,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(enum XML_ParamEntityParsing, parsing, D0),
         LIBBASETYPEPTR, ExpatBase, 55, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetReturnNSTriplet,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(int, do_nst, D0),
         LIBBASETYPEPTR, ExpatBase, 56, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP0(const XML_LChar *, XML_ExpatVersion,
         LIBBASETYPEPTR, ExpatBase, 57, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
#ifndef XML_ExpatVersionInfo
XML_Expat_Version XML_ExpatVersionInfo();
#endif

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(XML_Bool, XML_ParserReset,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(const XML_Char *, encodingName, A1),
         LIBBASETYPEPTR, ExpatBase, 59, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_SetSkippedEntityHandler,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_SkippedEntityHandler, handler, A1),
         LIBBASETYPEPTR, ExpatBase, 60, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP2(enum XML_Error, XML_UseForeignDTD,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_Bool, useDTD, D0),
         LIBBASETYPEPTR, ExpatBase, 61, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__)
AROS_LP0(const XML_Feature *, XML_GetFeatureList,
         LIBBASETYPEPTR, ExpatBase, 62, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (0 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
AROS_LP2(enum XML_Status, XML_StopParser,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_Bool, resumable, D0),
         LIBBASETYPEPTR, ExpatBase, 63, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
AROS_LP1(enum XML_Status, XML_ResumeParser,
         AROS_LPA(XML_Parser, parser, A0),
         LIBBASETYPEPTR, ExpatBase, 64, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_GetParsingStatus,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_ParsingStatus *, status, A1),
         LIBBASETYPEPTR, ExpatBase, 65, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_FreeContentModel,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(XML_Content *, model, A1),
         LIBBASETYPEPTR, ExpatBase, 66, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
AROS_LP2(void *, XML_MemMalloc,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(size_t, size, D0),
         LIBBASETYPEPTR, ExpatBase, 67, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
AROS_LP3(void *, XML_MemRealloc,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(void *, ptr, A1),
         AROS_LPA(size_t, size, D0),
         LIBBASETYPEPTR, ExpatBase, 68, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
AROS_LP2(void, XML_MemFree,
         AROS_LPA(XML_Parser, parser, A0),
         AROS_LPA(void *, ptr, A1),
         LIBBASETYPEPTR, ExpatBase, 69, Expat
);

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
#ifndef XML_ParserCreate_SYSV
XML_Parser XML_ParserCreate_SYSV(const XML_Char * encodingName);
#endif

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
#ifndef XML_ParserCreateNS_SYSV
XML_Parser XML_ParserCreateNS_SYSV(const XML_Char * encodingName, XML_Char nsSep);
#endif

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

#if !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__)
#ifndef XML_ParserCreate_MM_SYSV
XML_Parser XML_ParserCreate_MM_SYSV(const XML_Char * encodingName, const XML_Memory_Handling_Suite * memsuite, const XML_Char * nameSep);
#endif

#endif /* !defined(__EXPAT_LIBAPI__) || (2 <= __EXPAT_LIBAPI__) */

__END_DECLS

#endif /* CLIB_EXPAT_PROTOS_H */
