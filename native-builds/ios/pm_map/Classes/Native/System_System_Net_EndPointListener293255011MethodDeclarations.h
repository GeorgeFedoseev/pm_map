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

// System.Net.EndPointListener
struct EndPointListener_t293255011;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.Net.HttpListener
struct HttpListener_t1617405814;
// System.String
struct String_t;
// System.Uri
struct Uri_t1116831938;
// System.Net.ListenerPrefix
struct ListenerPrefix_t3256917632;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "System_System_Net_HttpListenerContext1119969133.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Uri1116831938.h"
#include "System_System_Net_ListenerPrefix3256917632.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "System_System_Net_HttpListener1617405814.h"

// System.Void System.Net.EndPointListener::.ctor(System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void EndPointListener__ctor_m2746959386 (EndPointListener_t293255011 * __this, IPAddress_t3525271463 * ___addr0, int32_t ___port1, bool ___secure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::LoadCertificateAndKey(System.Net.IPAddress,System.Int32)
extern "C"  void EndPointListener_LoadCertificateAndKey_m1954576844 (EndPointListener_t293255011 * __this, IPAddress_t3525271463 * ___addr0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::OnAccept(System.IAsyncResult)
extern "C"  void EndPointListener_OnAccept_m2147704425 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.EndPointListener::BindContext(System.Net.HttpListenerContext)
extern "C"  bool EndPointListener_BindContext_m2300095668 (EndPointListener_t293255011 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::UnbindContext(System.Net.HttpListenerContext)
extern "C"  void EndPointListener_UnbindContext_m289917541 (EndPointListener_t293255011 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListener System.Net.EndPointListener::SearchListener(System.String,System.Uri,System.Net.ListenerPrefix&)
extern "C"  HttpListener_t1617405814 * EndPointListener_SearchListener_m1698328087 (EndPointListener_t293255011 * __this, String_t* ___host0, Uri_t1116831938 * ___uri1, ListenerPrefix_t3256917632 ** ___prefix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListener System.Net.EndPointListener::MatchFromList(System.String,System.String,System.Collections.ArrayList,System.Net.ListenerPrefix&)
extern "C"  HttpListener_t1617405814 * EndPointListener_MatchFromList_m1951438410 (EndPointListener_t293255011 * __this, String_t* ___host0, String_t* ___path1, ArrayList_t3948406897 * ___list2, ListenerPrefix_t3256917632 ** ___prefix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::AddSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern "C"  void EndPointListener_AddSpecial_m237568674 (EndPointListener_t293255011 * __this, ArrayList_t3948406897 * ___coll0, ListenerPrefix_t3256917632 * ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::RemoveSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern "C"  void EndPointListener_RemoveSpecial_m2123891899 (EndPointListener_t293255011 * __this, ArrayList_t3948406897 * ___coll0, ListenerPrefix_t3256917632 * ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::CheckIfRemove()
extern "C"  void EndPointListener_CheckIfRemove_m147993848 (EndPointListener_t293255011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::Close()
extern "C"  void EndPointListener_Close_m4153892871 (EndPointListener_t293255011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::AddPrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern "C"  void EndPointListener_AddPrefix_m2268823002 (EndPointListener_t293255011 * __this, ListenerPrefix_t3256917632 * ___prefix0, HttpListener_t1617405814 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::RemovePrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern "C"  void EndPointListener_RemovePrefix_m792217267 (EndPointListener_t293255011 * __this, ListenerPrefix_t3256917632 * ___prefix0, HttpListener_t1617405814 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
