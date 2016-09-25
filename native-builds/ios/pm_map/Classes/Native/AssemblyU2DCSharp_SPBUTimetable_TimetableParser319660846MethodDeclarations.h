#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SPBUTimetable.TimetableParser
struct TimetableParser_t319660846;
// System.String
struct String_t;
// SPBUTimetable.WeekTimetable
struct WeekTimetable_t3211448027;
// HtmlAgilityPack.HtmlDocument
struct HtmlDocument_t4272798594;
// HtmlAgilityPack.HtmlNodeCollection
struct HtmlNodeCollection_t1593744423;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<SPBUTimetable.Link>
struct List_1_t1018793522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DayOfWeek1779421117.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_SPBUTimetable_WeekType1706497590.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"

// System.Void SPBUTimetable.TimetableParser::.ctor()
extern "C"  void TimetableParser__ctor_m3232946344 (TimetableParser_t319660846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.TimetableParser::GetPairMD5(System.DayOfWeek,System.String,System.String,System.String,System.String,SPBUTimetable.WeekType)
extern "C"  String_t* TimetableParser_GetPairMD5_m1935292748 (Il2CppObject * __this /* static, unused */, int32_t ___day0, String_t* ___time1, String_t* ___name2, String_t* ___location3, String_t* ___lecturer4, int32_t ___week_type5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.TimetableParser::GetOLDPairMD5(System.String,System.String,System.String,System.String,SPBUTimetable.WeekType)
extern "C"  String_t* TimetableParser_GetOLDPairMD5_m1782210593 (Il2CppObject * __this /* static, unused */, String_t* ___time0, String_t* ___name1, String_t* ___location2, String_t* ___lecturer3, int32_t ___week_type4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPBUTimetable.WeekTimetable SPBUTimetable.TimetableParser::getTimetable(System.String,System.DateTime)
extern "C"  WeekTimetable_t3211448027 * TimetableParser_getTimetable_m2235302192 (Il2CppObject * __this /* static, unused */, String_t* ___timetable_url0, DateTime_t4283661327  ___week_start1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.TimetableParser::CalculateMD5Hash(System.String)
extern "C"  String_t* TimetableParser_CalculateMD5Hash_m2288968195 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek SPBUTimetable.TimetableParser::parseDayOfWeek(System.String)
extern "C"  int32_t TimetableParser_parseDayOfWeek_m3008395175 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlDocument SPBUTimetable.TimetableParser::getHtmlFromUrl(System.String)
extern "C"  HtmlDocument_t4272798594 * TimetableParser_getHtmlFromUrl_m1800967614 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNodeCollection SPBUTimetable.TimetableParser::findByClassContains(System.String,HtmlAgilityPack.HtmlNode)
extern "C"  HtmlNodeCollection_t1593744423 * TimetableParser_findByClassContains_m4241840448 (Il2CppObject * __this /* static, unused */, String_t* ___className0, HtmlNode_t916417385 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNodeCollection SPBUTimetable.TimetableParser::findByIdContains(System.String,HtmlAgilityPack.HtmlNode)
extern "C"  HtmlNodeCollection_t1593744423 * TimetableParser_findByIdContains_m1514379211 (Il2CppObject * __this /* static, unused */, String_t* ___id0, HtmlNode_t916417385 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.TimetableParser::getPlainText(HtmlAgilityPack.HtmlNode)
extern "C"  String_t* TimetableParser_getPlainText_m1152314258 (Il2CppObject * __this /* static, unused */, HtmlNode_t916417385 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.TimetableParser::getAllText(HtmlAgilityPack.HtmlNode)
extern "C"  String_t* TimetableParser_getAllText_m1782403497 (Il2CppObject * __this /* static, unused */, HtmlNode_t916417385 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> SPBUTimetable.TimetableParser::getStudyLevels()
extern "C"  List_1_t1375417109 * TimetableParser_getStudyLevels_m1141941901 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> SPBUTimetable.TimetableParser::getLevelPrograms(System.String)
extern "C"  List_1_t1375417109 * TimetableParser_getLevelPrograms_m690533306 (Il2CppObject * __this /* static, unused */, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SPBUTimetable.Link> SPBUTimetable.TimetableParser::getProgramYears(System.String,System.String)
extern "C"  List_1_t1018793522 * TimetableParser_getProgramYears_m4204756422 (Il2CppObject * __this /* static, unused */, String_t* ___level0, String_t* ___program1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SPBUTimetable.Link> SPBUTimetable.TimetableParser::getGroups(System.String)
extern "C"  List_1_t1018793522 * TimetableParser_getGroups_m1207374056 (Il2CppObject * __this /* static, unused */, String_t* ___relative_url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPBUTimetable.TimetableParser::getPrimaryTimetableLink(System.String)
extern "C"  String_t* TimetableParser_getPrimaryTimetableLink_m1103035306 (Il2CppObject * __this /* static, unused */, String_t* ___group_link0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
