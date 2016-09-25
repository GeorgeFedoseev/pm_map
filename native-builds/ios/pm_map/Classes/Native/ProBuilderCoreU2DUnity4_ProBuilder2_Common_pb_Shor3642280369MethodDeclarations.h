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

// ProBuilder2.Common.pb_Shortcut
struct pb_Shortcut_t3642280369;
// System.String
struct String_t;
// ProBuilder2.Common.pb_Shortcut[]
struct pb_ShortcutU5BU5D_t3132132460;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_EventModifiers4195406918.h"

// System.Void ProBuilder2.Common.pb_Shortcut::.ctor(System.String,System.String,UnityEngine.KeyCode,UnityEngine.EventModifiers)
extern "C"  void pb_Shortcut__ctor_m4060262506 (pb_Shortcut_t3642280369 * __this, String_t* ___a0, String_t* ___d1, int32_t ___k2, int32_t ___e3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Shortcut::ToString()
extern "C"  String_t* pb_Shortcut_ToString_m325785025 (pb_Shortcut_t3642280369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Shortcut::.ctor(System.String)
extern "C"  void pb_Shortcut__ctor_m125557104 (pb_Shortcut_t3642280369 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_Shortcut::IndexOf(ProBuilder2.Common.pb_Shortcut[],UnityEngine.KeyCode,UnityEngine.EventModifiers)
extern "C"  int32_t pb_Shortcut_IndexOf_m171634281 (Il2CppObject * __this /* static, unused */, pb_ShortcutU5BU5D_t3132132460* ___shortcuts0, int32_t ___k1, int32_t ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Shortcut[] ProBuilder2.Common.pb_Shortcut::DefaultShortcuts()
extern "C"  pb_ShortcutU5BU5D_t3132132460* pb_Shortcut_DefaultShortcuts_m877636929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Shortcut[] ProBuilder2.Common.pb_Shortcut::ParseShortcuts(System.String)
extern "C"  pb_ShortcutU5BU5D_t3132132460* pb_Shortcut_ParseShortcuts_m1659903187 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Shortcut::ShortcutsToString(ProBuilder2.Common.pb_Shortcut[])
extern "C"  String_t* pb_Shortcut_ShortcutsToString_m1005119434 (Il2CppObject * __this /* static, unused */, pb_ShortcutU5BU5D_t3132132460* ___shortcuts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
