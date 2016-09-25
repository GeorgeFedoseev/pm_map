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

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t1317916382;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t1716455733;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3012627841;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "System_System_Diagnostics_TraceListenerCollection1716455733.h"
#include "System_Xml_System_Xml_XmlAttributeCollection3012627841.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern "C"  void DiagnosticsConfigurationHandler__ctor_m1711073693 (DiagnosticsConfigurationHandler_t1317916382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Il2CppObject * DiagnosticsConfigurationHandler_Create_m2222398073 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___parent0, Il2CppObject * ___configContext1, XmlNode_t856910923 * ___section2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddAssertNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddAssertNode_m1324010022 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSwitchesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSwitchesNode_m3673133514 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::GetSwitchValue(System.String,System.String)
extern "C"  Il2CppObject * DiagnosticsConfigurationHandler_GetSwitchValue_m1393522491 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceNode_m364428253 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceAttributes(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceAttributes_m2866631144 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.DiagnosticsConfigurationHandler::GetSharedListeners(System.Collections.IDictionary)
extern "C"  TraceListenerCollection_t1716455733 * DiagnosticsConfigurationHandler_GetSharedListeners_m4292923085 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSourcesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSourcesNode_m3465787722 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceSource(System.Collections.IDictionary,System.Collections.Hashtable,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceSource_m4273765700 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, Hashtable_t1407064410 * ___sources1, XmlNode_t856910923 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListeners(System.Collections.IDictionary,System.Xml.XmlNode,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListeners_m1161991740 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___listenersNode1, TraceListenerCollection_t1716455733 * ___listeners2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListener(System.Collections.IDictionary,System.Xml.XmlNode,System.Xml.XmlAttributeCollection,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListener_m2681893202 (DiagnosticsConfigurationHandler_t1317916382 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___child1, XmlAttributeCollection_t3012627841 * ___attributes2, TraceListenerCollection_t1716455733 * ___listeners3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::RemoveTraceListener(System.String)
extern "C"  void DiagnosticsConfigurationHandler_RemoveTraceListener_m1501878802 (DiagnosticsConfigurationHandler_t1317916382 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DiagnosticsConfigurationHandler::GetAttribute(System.Xml.XmlAttributeCollection,System.String,System.Boolean,System.Xml.XmlNode)
extern "C"  String_t* DiagnosticsConfigurationHandler_GetAttribute_m3634657355 (DiagnosticsConfigurationHandler_t1317916382 * __this, XmlAttributeCollection_t3012627841 * ___attrs0, String_t* ___attr1, bool ___required2, XmlNode_t856910923 * ___node3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateAttribute(System.String,System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateAttribute_m1258132294 (DiagnosticsConfigurationHandler_t1317916382 * __this, String_t* ___attribute0, String_t* ___value1, XmlNode_t856910923 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateInvalidAttributes(System.Xml.XmlAttributeCollection,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateInvalidAttributes_m1133717085 (DiagnosticsConfigurationHandler_t1317916382 * __this, XmlAttributeCollection_t3012627841 * ___c0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowMissingAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowMissingAttribute_m3927037304 (DiagnosticsConfigurationHandler_t1317916382 * __this, String_t* ___attribute0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedNode(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedNode_m3274381615 (DiagnosticsConfigurationHandler_t1317916382 * __this, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedElement(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedElement_m2533946411 (DiagnosticsConfigurationHandler_t1317916382 * __this, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedAttribute_m3096698831 (DiagnosticsConfigurationHandler_t1317916382 * __this, String_t* ___attribute0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
