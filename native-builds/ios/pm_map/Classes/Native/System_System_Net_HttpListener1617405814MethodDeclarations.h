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

// System.Net.HttpListener
struct HttpListener_t1617405814;
// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_t3299226454;
// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3829793382;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_AuthenticationSchemes4187235472.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_HttpListenerContext1119969133.h"

// System.Void System.Net.HttpListener::.ctor()
extern "C"  void HttpListener__ctor_m1872522174 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::System.IDisposable.Dispose()
extern "C"  void HttpListener_System_IDisposable_Dispose_m292472481 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.HttpListener::get_AuthenticationSchemes()
extern "C"  int32_t HttpListener_get_AuthenticationSchemes_m2525898306 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemeSelector System.Net.HttpListener::get_AuthenticationSchemeSelectorDelegate()
extern "C"  AuthenticationSchemeSelector_t3299226454 * HttpListener_get_AuthenticationSchemeSelectorDelegate_m1897504617 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListener::get_IgnoreWriteExceptions()
extern "C"  bool HttpListener_get_IgnoreWriteExceptions_m3205603290 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListener::get_IsListening()
extern "C"  bool HttpListener_get_IsListening_m2702165370 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::get_Prefixes()
extern "C"  HttpListenerPrefixCollection_t3829793382 * HttpListener_get_Prefixes_m852249368 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListener::get_Realm()
extern "C"  String_t* HttpListener_get_Realm_m2980353829 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Close(System.Boolean)
extern "C"  void HttpListener_Close_m2043986763 (HttpListener_t1617405814 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Cleanup(System.Boolean)
extern "C"  void HttpListener_Cleanup_m3960973623 (HttpListener_t1617405814 * __this, bool ___close_existing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpListener::BeginGetContext(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpListener_BeginGetContext_m2609932366 (HttpListener_t1617405814 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.HttpListener::EndGetContext(System.IAsyncResult)
extern "C"  HttpListenerContext_t1119969133 * HttpListener_EndGetContext_m2604305815 (HttpListener_t1617405814 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.HttpListener::SelectAuthenticationScheme(System.Net.HttpListenerContext)
extern "C"  int32_t HttpListener_SelectAuthenticationScheme_m1539550051 (HttpListener_t1617405814 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Start()
extern "C"  void HttpListener_Start_m819659966 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::CheckDisposed()
extern "C"  void HttpListener_CheckDisposed_m1959888361 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.HttpListener::GetContextFromQueue()
extern "C"  HttpListenerContext_t1119969133 * HttpListener_GetContextFromQueue_m2915796582 (HttpListener_t1617405814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::RegisterContext(System.Net.HttpListenerContext)
extern "C"  void HttpListener_RegisterContext_m1574797765 (HttpListener_t1617405814 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::UnregisterContext(System.Net.HttpListenerContext)
extern "C"  void HttpListener_UnregisterContext_m2948638540 (HttpListener_t1617405814 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
