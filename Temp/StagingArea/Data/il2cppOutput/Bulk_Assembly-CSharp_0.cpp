#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// EventManager
struct EventManager_t1594656820;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UIManager
struct UIManager_t1042050227;
// GameNumbers
struct GameNumbers_t3947555191;
// GameData
struct GameData_t415813024;
// MilestoneUnlocks
struct MilestoneUnlocks_t2290314618;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// SaveHandler
struct SaveHandler_t383514785;
// System.String
struct String_t;
// EventManager/<AutoClickerCycle>c__Iterator0
struct U3CAutoClickerCycleU3Ec__Iterator0_t1114662071;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Collections.Generic.List`1<GameNumbers/BigNumber>
struct List_1_t2225540709;
// System.ValueType
struct ValueType_t3640485471;
// InstructionText
struct InstructionText_t218659526;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Object
struct Object_t631007953;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// GameNumbers/BigNumber[]
struct BigNumberU5BU5D_t2385410806;
// System.Void
struct Void_t1185182177;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern const RuntimeMethod* GameObject_GetComponent_TisUIManager_t1042050227_m1645234603_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisGameData_t415813024_m3595909835_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMilestoneUnlocks_t2290314618_m77098687_RuntimeMethod_var;
extern const uint32_t EventManager_Start_m4280038895_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisSaveHandler_t383514785_m2914446903_RuntimeMethod_var;
extern const uint32_t EventManager_Save_m3943420652_MetadataUsageId;
extern RuntimeClass* BigNumber_t753465967_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614533;
extern const uint32_t EventManager_CoinClick_m2057454674_MetadataUsageId;
extern String_t* _stringLiteral3057358206;
extern const uint32_t EventManager_AttemptInvestmentPurchase_m869314865_MetadataUsageId;
extern String_t* _stringLiteral4182693947;
extern const uint32_t EventManager_AttemptInvestmentUpgrade_m2600796009_MetadataUsageId;
extern String_t* _stringLiteral980261671;
extern const uint32_t EventManager_AttemptClickUpgrade_m1393089994_MetadataUsageId;
extern RuntimeClass* U3CAutoClickerCycleU3Ec__Iterator0_t1114662071_il2cpp_TypeInfo_var;
extern const uint32_t EventManager_AutoClickerCycle_m3870092009_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3540340899;
extern String_t* _stringLiteral3452614607;
extern String_t* _stringLiteral3452614601;
extern String_t* _stringLiteral3452614587;
extern String_t* _stringLiteral3452614608;
extern String_t* _stringLiteral3452614593;
extern String_t* _stringLiteral3452614599;
extern String_t* _stringLiteral1613539661;
extern String_t* _stringLiteral3452614598;
extern String_t* _stringLiteral3452614597;
extern String_t* _stringLiteral3452614596;
extern const uint32_t EventManager_Update_m4111839_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1980011667;
extern const uint32_t U3CAutoClickerCycleU3Ec__Iterator0_MoveNext_m633355799_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CAutoClickerCycleU3Ec__Iterator0_Reset_m3200201227_MetadataUsageId;
extern RuntimeClass* List_1_t2225540709_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2939194936_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3743742916_RuntimeMethod_var;
extern const uint32_t GameNumbers_Awake_m4275938482_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m4077889869_RuntimeMethod_var;
extern const uint32_t GameNumbers_UpdateLists_m2156975283_MetadataUsageId;
extern const uint32_t GameNumbers_CoinClickValue_m3164705727_MetadataUsageId;
extern const uint32_t GameNumbers_PrinterUpgradeCost_m2950495310_MetadataUsageId;
extern const uint32_t GameNumbers_AutoClickerUpgradeCost_m1121366818_MetadataUsageId;
extern const uint32_t GameNumbers_AutoClickerCost_m300389370_MetadataUsageId;
extern const uint32_t GameNumbers_PassiveIncomePerTick_m3369419454_MetadataUsageId;
extern const uint32_t BigNumber_Equals_m101231124_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3920749200;
extern String_t* _stringLiteral1570259572;
extern String_t* _stringLiteral1570259261;
extern String_t* _stringLiteral1174025436;
extern String_t* _stringLiteral406691620;
extern String_t* _stringLiteral3291287990;
extern String_t* _stringLiteral2981278140;
extern String_t* _stringLiteral2564438852;
extern String_t* _stringLiteral284611025;
extern String_t* _stringLiteral1991001404;
extern String_t* _stringLiteral1433425195;
extern String_t* _stringLiteral1279815885;
extern String_t* _stringLiteral3691554557;
extern String_t* _stringLiteral1158808139;
extern String_t* _stringLiteral2584643162;
extern String_t* _stringLiteral1268665080;
extern String_t* _stringLiteral1983763;
extern String_t* _stringLiteral3452614621;
extern String_t* _stringLiteral3452614528;
extern const uint32_t BigNumber_WordFormat_m1372495670_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern String_t* _stringLiteral3070008118;
extern String_t* _stringLiteral1790042321;
extern String_t* _stringLiteral849678737;
extern String_t* _stringLiteral2070493238;
extern String_t* _stringLiteral643756830;
extern String_t* _stringLiteral2823849160;
extern const uint32_t InstructionText_Start_m3606700621_MetadataUsageId;
extern String_t* _stringLiteral1399860967;
extern String_t* _stringLiteral3264387483;
extern String_t* _stringLiteral408326418;
extern String_t* _stringLiteral4287520252;
extern String_t* _stringLiteral704634842;
extern String_t* _stringLiteral395945806;
extern String_t* _stringLiteral3306935105;
extern const uint32_t InstructionText_UpdateText_m1067065194_MetadataUsageId;
extern const uint32_t InstructionText_HideText_m1019752139_MetadataUsageId;
extern const uint32_t MilestoneUnlocks_Start_m4126344017_MetadataUsageId;
extern String_t* _stringLiteral2936560303;
extern const uint32_t MilestoneUnlocks_UnlockOne_m969447492_MetadataUsageId;
extern String_t* _stringLiteral3085420508;
extern const uint32_t MilestoneUnlocks_UnlockTwo_m182342349_MetadataUsageId;
extern String_t* _stringLiteral4223359838;
extern const uint32_t MilestoneUnlocks_UnlockThree_m1368648665_MetadataUsageId;
extern String_t* _stringLiteral200762396;
extern const uint32_t MilestoneUnlocks_UnlockFour_m2053590922_MetadataUsageId;
extern String_t* _stringLiteral1224767194;
extern const uint32_t MilestoneUnlocks_MileStoneReward_m713621352_MetadataUsageId;
extern const uint32_t SaveHandler_Start_m434300285_MetadataUsageId;
extern String_t* _stringLiteral22570291;
extern String_t* _stringLiteral1534485882;
extern String_t* _stringLiteral1198005086;
extern String_t* _stringLiteral663609338;
extern String_t* _stringLiteral100899863;
extern const uint32_t SaveHandler_TransferData_m1168138986_MetadataUsageId;
extern const uint32_t SaveHandler_Save_m1313853312_MetadataUsageId;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral2435378281;
extern String_t* _stringLiteral35129010;
extern const uint32_t SaveHandler_CreateBaseSave_m3996903509_MetadataUsageId;
extern const uint32_t SaveHandler_SaveExists_m4032529009_MetadataUsageId;
extern const uint32_t UIManager_Start_m1211894305_MetadataUsageId;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2753579780;
extern String_t* _stringLiteral3343118473;
extern String_t* _stringLiteral3671085840;
extern String_t* _stringLiteral2271672206;
extern String_t* _stringLiteral3135625673;
extern const uint32_t UIManager_UpdateUI_m743122523_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var;
extern String_t* _stringLiteral1873866614;
extern const uint32_t UIManager_PopUpNumbers_m1948423234_MetadataUsageId;
extern const uint32_t UIManager_PopUpNumbers_m468699646_MetadataUsageId;
extern String_t* _stringLiteral3323344660;
extern const uint32_t UIManager_UIDisplayMessage_m4231901600_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t UIManager_ClearChildren_m4240919983_MetadataUsageId;
extern String_t* _stringLiteral709967533;
extern const uint32_t UIManager_UISwitch_m2642155203_MetadataUsageId;
extern const uint32_t UIManager_PrinterEnlarge_m1168807615_MetadataUsageId;
extern const uint32_t UIManager_PrinterShrink_m2802037823_MetadataUsageId;
extern const uint32_t UIManager_BankEnlarge_m1627368452_MetadataUsageId;
extern const uint32_t UIManager_BankShrink_m888614235_MetadataUsageId;

struct BooleanU5BU5D_t2897418192;
struct DoubleU5BU5D_t3413330114;
struct Int32U5BU5D_t385246372;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef LIST_1_T2225540709_H
#define LIST_1_T2225540709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GameNumbers/BigNumber>
struct  List_1_t2225540709  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BigNumberU5BU5D_t2385410806* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2225540709, ____items_1)); }
	inline BigNumberU5BU5D_t2385410806* get__items_1() const { return ____items_1; }
	inline BigNumberU5BU5D_t2385410806** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BigNumberU5BU5D_t2385410806* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2225540709, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2225540709, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2225540709_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BigNumberU5BU5D_t2385410806* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2225540709_StaticFields, ___EmptyArray_4)); }
	inline BigNumberU5BU5D_t2385410806* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BigNumberU5BU5D_t2385410806** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BigNumberU5BU5D_t2385410806* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2225540709_H
#ifndef U3CAUTOCLICKERCYCLEU3EC__ITERATOR0_T1114662071_H
#define U3CAUTOCLICKERCYCLEU3EC__ITERATOR0_T1114662071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager/<AutoClickerCycle>c__Iterator0
struct  U3CAutoClickerCycleU3Ec__Iterator0_t1114662071  : public RuntimeObject
{
public:
	// EventManager EventManager/<AutoClickerCycle>c__Iterator0::$this
	EventManager_t1594656820 * ___U24this_0;
	// System.Object EventManager/<AutoClickerCycle>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean EventManager/<AutoClickerCycle>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 EventManager/<AutoClickerCycle>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CAutoClickerCycleU3Ec__Iterator0_t1114662071, ___U24this_0)); }
	inline EventManager_t1594656820 * get_U24this_0() const { return ___U24this_0; }
	inline EventManager_t1594656820 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(EventManager_t1594656820 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CAutoClickerCycleU3Ec__Iterator0_t1114662071, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CAutoClickerCycleU3Ec__Iterator0_t1114662071, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CAutoClickerCycleU3Ec__Iterator0_t1114662071, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CAUTOCLICKERCYCLEU3EC__ITERATOR0_T1114662071_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef BIGNUMBER_T753465967_H
#define BIGNUMBER_T753465967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameNumbers/BigNumber
struct  BigNumber_t753465967 
{
public:
	// System.Double GameNumbers/BigNumber::Mantissa
	double ___Mantissa_0;
	// System.Int32 GameNumbers/BigNumber::Exponent
	int32_t ___Exponent_1;

public:
	inline static int32_t get_offset_of_Mantissa_0() { return static_cast<int32_t>(offsetof(BigNumber_t753465967, ___Mantissa_0)); }
	inline double get_Mantissa_0() const { return ___Mantissa_0; }
	inline double* get_address_of_Mantissa_0() { return &___Mantissa_0; }
	inline void set_Mantissa_0(double value)
	{
		___Mantissa_0 = value;
	}

	inline static int32_t get_offset_of_Exponent_1() { return static_cast<int32_t>(offsetof(BigNumber_t753465967, ___Exponent_1)); }
	inline int32_t get_Exponent_1() const { return ___Exponent_1; }
	inline int32_t* get_address_of_Exponent_1() { return &___Exponent_1; }
	inline void set_Exponent_1(int32_t value)
	{
		___Exponent_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGNUMBER_T753465967_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SAVEHANDLER_T383514785_H
#define SAVEHANDLER_T383514785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveHandler
struct  SaveHandler_t383514785  : public MonoBehaviour_t3962482529
{
public:
	// GameNumbers SaveHandler::numbers
	GameNumbers_t3947555191 * ___numbers_2;

public:
	inline static int32_t get_offset_of_numbers_2() { return static_cast<int32_t>(offsetof(SaveHandler_t383514785, ___numbers_2)); }
	inline GameNumbers_t3947555191 * get_numbers_2() const { return ___numbers_2; }
	inline GameNumbers_t3947555191 ** get_address_of_numbers_2() { return &___numbers_2; }
	inline void set_numbers_2(GameNumbers_t3947555191 * value)
	{
		___numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___numbers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVEHANDLER_T383514785_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef UIMANAGER_T1042050227_H
#define UIMANAGER_T1042050227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1042050227  : public MonoBehaviour_t3962482529
{
public:
	// GameData UIManager::data
	GameData_t415813024 * ___data_2;
	// GameNumbers UIManager::numbers
	GameNumbers_t3947555191 * ___numbers_3;
	// UnityEngine.GameObject UIManager::FadeText
	GameObject_t1113636619 * ___FadeText_4;
	// UnityEngine.UI.Text UIManager::CounterText
	Text_t1901882714 * ___CounterText_5;
	// UnityEngine.UI.Text UIManager::AutoPurchaseText
	Text_t1901882714 * ___AutoPurchaseText_6;
	// UnityEngine.UI.Text UIManager::AutoClickQuantityText
	Text_t1901882714 * ___AutoClickQuantityText_7;
	// UnityEngine.UI.Text UIManager::AutoClickUpgradeText
	Text_t1901882714 * ___AutoClickUpgradeText_8;
	// UnityEngine.UI.Text UIManager::AutoClickUpgradeQuantityText
	Text_t1901882714 * ___AutoClickUpgradeQuantityText_9;
	// UnityEngine.UI.Text UIManager::PrinterUpgradeCostText
	Text_t1901882714 * ___PrinterUpgradeCostText_10;
	// UnityEngine.UI.Text UIManager::PrinterUpgradeQuantityText
	Text_t1901882714 * ___PrinterUpgradeQuantityText_11;
	// UnityEngine.UI.Text UIManager::IncomeSecondText
	Text_t1901882714 * ___IncomeSecondText_12;
	// UnityEngine.GameObject UIManager::printer
	GameObject_t1113636619 * ___printer_13;
	// UnityEngine.GameObject UIManager::bank
	GameObject_t1113636619 * ___bank_14;
	// UnityEngine.GameObject UIManager::MenuA
	GameObject_t1113636619 * ___MenuA_15;
	// UnityEngine.GameObject UIManager::MenuB
	GameObject_t1113636619 * ___MenuB_16;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___data_2)); }
	inline GameData_t415813024 * get_data_2() const { return ___data_2; }
	inline GameData_t415813024 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(GameData_t415813024 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}

	inline static int32_t get_offset_of_numbers_3() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___numbers_3)); }
	inline GameNumbers_t3947555191 * get_numbers_3() const { return ___numbers_3; }
	inline GameNumbers_t3947555191 ** get_address_of_numbers_3() { return &___numbers_3; }
	inline void set_numbers_3(GameNumbers_t3947555191 * value)
	{
		___numbers_3 = value;
		Il2CppCodeGenWriteBarrier((&___numbers_3), value);
	}

	inline static int32_t get_offset_of_FadeText_4() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___FadeText_4)); }
	inline GameObject_t1113636619 * get_FadeText_4() const { return ___FadeText_4; }
	inline GameObject_t1113636619 ** get_address_of_FadeText_4() { return &___FadeText_4; }
	inline void set_FadeText_4(GameObject_t1113636619 * value)
	{
		___FadeText_4 = value;
		Il2CppCodeGenWriteBarrier((&___FadeText_4), value);
	}

	inline static int32_t get_offset_of_CounterText_5() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___CounterText_5)); }
	inline Text_t1901882714 * get_CounterText_5() const { return ___CounterText_5; }
	inline Text_t1901882714 ** get_address_of_CounterText_5() { return &___CounterText_5; }
	inline void set_CounterText_5(Text_t1901882714 * value)
	{
		___CounterText_5 = value;
		Il2CppCodeGenWriteBarrier((&___CounterText_5), value);
	}

	inline static int32_t get_offset_of_AutoPurchaseText_6() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___AutoPurchaseText_6)); }
	inline Text_t1901882714 * get_AutoPurchaseText_6() const { return ___AutoPurchaseText_6; }
	inline Text_t1901882714 ** get_address_of_AutoPurchaseText_6() { return &___AutoPurchaseText_6; }
	inline void set_AutoPurchaseText_6(Text_t1901882714 * value)
	{
		___AutoPurchaseText_6 = value;
		Il2CppCodeGenWriteBarrier((&___AutoPurchaseText_6), value);
	}

	inline static int32_t get_offset_of_AutoClickQuantityText_7() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___AutoClickQuantityText_7)); }
	inline Text_t1901882714 * get_AutoClickQuantityText_7() const { return ___AutoClickQuantityText_7; }
	inline Text_t1901882714 ** get_address_of_AutoClickQuantityText_7() { return &___AutoClickQuantityText_7; }
	inline void set_AutoClickQuantityText_7(Text_t1901882714 * value)
	{
		___AutoClickQuantityText_7 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickQuantityText_7), value);
	}

	inline static int32_t get_offset_of_AutoClickUpgradeText_8() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___AutoClickUpgradeText_8)); }
	inline Text_t1901882714 * get_AutoClickUpgradeText_8() const { return ___AutoClickUpgradeText_8; }
	inline Text_t1901882714 ** get_address_of_AutoClickUpgradeText_8() { return &___AutoClickUpgradeText_8; }
	inline void set_AutoClickUpgradeText_8(Text_t1901882714 * value)
	{
		___AutoClickUpgradeText_8 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickUpgradeText_8), value);
	}

	inline static int32_t get_offset_of_AutoClickUpgradeQuantityText_9() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___AutoClickUpgradeQuantityText_9)); }
	inline Text_t1901882714 * get_AutoClickUpgradeQuantityText_9() const { return ___AutoClickUpgradeQuantityText_9; }
	inline Text_t1901882714 ** get_address_of_AutoClickUpgradeQuantityText_9() { return &___AutoClickUpgradeQuantityText_9; }
	inline void set_AutoClickUpgradeQuantityText_9(Text_t1901882714 * value)
	{
		___AutoClickUpgradeQuantityText_9 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickUpgradeQuantityText_9), value);
	}

	inline static int32_t get_offset_of_PrinterUpgradeCostText_10() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___PrinterUpgradeCostText_10)); }
	inline Text_t1901882714 * get_PrinterUpgradeCostText_10() const { return ___PrinterUpgradeCostText_10; }
	inline Text_t1901882714 ** get_address_of_PrinterUpgradeCostText_10() { return &___PrinterUpgradeCostText_10; }
	inline void set_PrinterUpgradeCostText_10(Text_t1901882714 * value)
	{
		___PrinterUpgradeCostText_10 = value;
		Il2CppCodeGenWriteBarrier((&___PrinterUpgradeCostText_10), value);
	}

	inline static int32_t get_offset_of_PrinterUpgradeQuantityText_11() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___PrinterUpgradeQuantityText_11)); }
	inline Text_t1901882714 * get_PrinterUpgradeQuantityText_11() const { return ___PrinterUpgradeQuantityText_11; }
	inline Text_t1901882714 ** get_address_of_PrinterUpgradeQuantityText_11() { return &___PrinterUpgradeQuantityText_11; }
	inline void set_PrinterUpgradeQuantityText_11(Text_t1901882714 * value)
	{
		___PrinterUpgradeQuantityText_11 = value;
		Il2CppCodeGenWriteBarrier((&___PrinterUpgradeQuantityText_11), value);
	}

	inline static int32_t get_offset_of_IncomeSecondText_12() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___IncomeSecondText_12)); }
	inline Text_t1901882714 * get_IncomeSecondText_12() const { return ___IncomeSecondText_12; }
	inline Text_t1901882714 ** get_address_of_IncomeSecondText_12() { return &___IncomeSecondText_12; }
	inline void set_IncomeSecondText_12(Text_t1901882714 * value)
	{
		___IncomeSecondText_12 = value;
		Il2CppCodeGenWriteBarrier((&___IncomeSecondText_12), value);
	}

	inline static int32_t get_offset_of_printer_13() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___printer_13)); }
	inline GameObject_t1113636619 * get_printer_13() const { return ___printer_13; }
	inline GameObject_t1113636619 ** get_address_of_printer_13() { return &___printer_13; }
	inline void set_printer_13(GameObject_t1113636619 * value)
	{
		___printer_13 = value;
		Il2CppCodeGenWriteBarrier((&___printer_13), value);
	}

	inline static int32_t get_offset_of_bank_14() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___bank_14)); }
	inline GameObject_t1113636619 * get_bank_14() const { return ___bank_14; }
	inline GameObject_t1113636619 ** get_address_of_bank_14() { return &___bank_14; }
	inline void set_bank_14(GameObject_t1113636619 * value)
	{
		___bank_14 = value;
		Il2CppCodeGenWriteBarrier((&___bank_14), value);
	}

	inline static int32_t get_offset_of_MenuA_15() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___MenuA_15)); }
	inline GameObject_t1113636619 * get_MenuA_15() const { return ___MenuA_15; }
	inline GameObject_t1113636619 ** get_address_of_MenuA_15() { return &___MenuA_15; }
	inline void set_MenuA_15(GameObject_t1113636619 * value)
	{
		___MenuA_15 = value;
		Il2CppCodeGenWriteBarrier((&___MenuA_15), value);
	}

	inline static int32_t get_offset_of_MenuB_16() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___MenuB_16)); }
	inline GameObject_t1113636619 * get_MenuB_16() const { return ___MenuB_16; }
	inline GameObject_t1113636619 ** get_address_of_MenuB_16() { return &___MenuB_16; }
	inline void set_MenuB_16(GameObject_t1113636619 * value)
	{
		___MenuB_16 = value;
		Il2CppCodeGenWriteBarrier((&___MenuB_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIMANAGER_T1042050227_H
#ifndef GAMEDATA_T415813024_H
#define GAMEDATA_T415813024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameData
struct  GameData_t415813024  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameData::Title
	GameObject_t1113636619 * ___Title_2;
	// UnityEngine.GameObject GameData::printerParent
	GameObject_t1113636619 * ___printerParent_3;
	// UnityEngine.GameObject GameData::printerChild
	GameObject_t1113636619 * ___printerChild_4;
	// UnityEngine.GameObject GameData::printerPopUpLocation
	GameObject_t1113636619 * ___printerPopUpLocation_5;
	// UnityEngine.GameObject GameData::bank
	GameObject_t1113636619 * ___bank_6;
	// UnityEngine.GameObject GameData::bankPopUpLocation
	GameObject_t1113636619 * ___bankPopUpLocation_7;
	// UnityEngine.GameObject GameData::FadeText
	GameObject_t1113636619 * ___FadeText_8;
	// UnityEngine.GameObject GameData::ClickButton
	GameObject_t1113636619 * ___ClickButton_9;
	// UnityEngine.GameObject GameData::CounterObject
	GameObject_t1113636619 * ___CounterObject_10;
	// System.Single GameData::tickSpeed
	float ___tickSpeed_11;
	// System.Single GameData::tickFactor
	float ___tickFactor_12;
	// System.Double[] GameData::mileStones
	DoubleU5BU5D_t3413330114* ___mileStones_13;
	// System.Int32[] GameData::mileStoneExponents
	Int32U5BU5D_t385246372* ___mileStoneExponents_14;
	// System.Boolean[] GameData::mileStonesAchieved
	BooleanU5BU5D_t2897418192* ___mileStonesAchieved_15;
	// UnityEngine.GameObject GameData::AutoClickPurchaseButton
	GameObject_t1113636619 * ___AutoClickPurchaseButton_16;
	// UnityEngine.GameObject GameData::AutoClickUpgradeButton
	GameObject_t1113636619 * ___AutoClickUpgradeButton_17;
	// UnityEngine.GameObject GameData::PrinterUpgradeButton
	GameObject_t1113636619 * ___PrinterUpgradeButton_18;
	// UnityEngine.GameObject GameData::AutoClickPurchaseText
	GameObject_t1113636619 * ___AutoClickPurchaseText_19;
	// UnityEngine.GameObject GameData::AutoClickQuantity
	GameObject_t1113636619 * ___AutoClickQuantity_20;
	// UnityEngine.GameObject GameData::AutoClickUpgradeTextObject
	GameObject_t1113636619 * ___AutoClickUpgradeTextObject_21;
	// UnityEngine.GameObject GameData::AutoClickUpgradeQuantityTextObject
	GameObject_t1113636619 * ___AutoClickUpgradeQuantityTextObject_22;
	// UnityEngine.GameObject GameData::PrinterUpgradeCostObject
	GameObject_t1113636619 * ___PrinterUpgradeCostObject_23;
	// UnityEngine.GameObject GameData::PrinterUpgradeQuantityTextObject
	GameObject_t1113636619 * ___PrinterUpgradeQuantityTextObject_24;
	// UnityEngine.GameObject GameData::IncomeSecondObject
	GameObject_t1113636619 * ___IncomeSecondObject_25;
	// UnityEngine.GameObject GameData::MenuButton1
	GameObject_t1113636619 * ___MenuButton1_26;
	// UnityEngine.GameObject GameData::MenuButton2
	GameObject_t1113636619 * ___MenuButton2_27;
	// UnityEngine.GameObject GameData::Menu1
	GameObject_t1113636619 * ___Menu1_28;
	// UnityEngine.GameObject GameData::Menu2
	GameObject_t1113636619 * ___Menu2_29;
	// UnityEngine.GameObject GameData::Menu3
	GameObject_t1113636619 * ___Menu3_30;

public:
	inline static int32_t get_offset_of_Title_2() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___Title_2)); }
	inline GameObject_t1113636619 * get_Title_2() const { return ___Title_2; }
	inline GameObject_t1113636619 ** get_address_of_Title_2() { return &___Title_2; }
	inline void set_Title_2(GameObject_t1113636619 * value)
	{
		___Title_2 = value;
		Il2CppCodeGenWriteBarrier((&___Title_2), value);
	}

	inline static int32_t get_offset_of_printerParent_3() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___printerParent_3)); }
	inline GameObject_t1113636619 * get_printerParent_3() const { return ___printerParent_3; }
	inline GameObject_t1113636619 ** get_address_of_printerParent_3() { return &___printerParent_3; }
	inline void set_printerParent_3(GameObject_t1113636619 * value)
	{
		___printerParent_3 = value;
		Il2CppCodeGenWriteBarrier((&___printerParent_3), value);
	}

	inline static int32_t get_offset_of_printerChild_4() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___printerChild_4)); }
	inline GameObject_t1113636619 * get_printerChild_4() const { return ___printerChild_4; }
	inline GameObject_t1113636619 ** get_address_of_printerChild_4() { return &___printerChild_4; }
	inline void set_printerChild_4(GameObject_t1113636619 * value)
	{
		___printerChild_4 = value;
		Il2CppCodeGenWriteBarrier((&___printerChild_4), value);
	}

	inline static int32_t get_offset_of_printerPopUpLocation_5() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___printerPopUpLocation_5)); }
	inline GameObject_t1113636619 * get_printerPopUpLocation_5() const { return ___printerPopUpLocation_5; }
	inline GameObject_t1113636619 ** get_address_of_printerPopUpLocation_5() { return &___printerPopUpLocation_5; }
	inline void set_printerPopUpLocation_5(GameObject_t1113636619 * value)
	{
		___printerPopUpLocation_5 = value;
		Il2CppCodeGenWriteBarrier((&___printerPopUpLocation_5), value);
	}

	inline static int32_t get_offset_of_bank_6() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___bank_6)); }
	inline GameObject_t1113636619 * get_bank_6() const { return ___bank_6; }
	inline GameObject_t1113636619 ** get_address_of_bank_6() { return &___bank_6; }
	inline void set_bank_6(GameObject_t1113636619 * value)
	{
		___bank_6 = value;
		Il2CppCodeGenWriteBarrier((&___bank_6), value);
	}

	inline static int32_t get_offset_of_bankPopUpLocation_7() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___bankPopUpLocation_7)); }
	inline GameObject_t1113636619 * get_bankPopUpLocation_7() const { return ___bankPopUpLocation_7; }
	inline GameObject_t1113636619 ** get_address_of_bankPopUpLocation_7() { return &___bankPopUpLocation_7; }
	inline void set_bankPopUpLocation_7(GameObject_t1113636619 * value)
	{
		___bankPopUpLocation_7 = value;
		Il2CppCodeGenWriteBarrier((&___bankPopUpLocation_7), value);
	}

	inline static int32_t get_offset_of_FadeText_8() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___FadeText_8)); }
	inline GameObject_t1113636619 * get_FadeText_8() const { return ___FadeText_8; }
	inline GameObject_t1113636619 ** get_address_of_FadeText_8() { return &___FadeText_8; }
	inline void set_FadeText_8(GameObject_t1113636619 * value)
	{
		___FadeText_8 = value;
		Il2CppCodeGenWriteBarrier((&___FadeText_8), value);
	}

	inline static int32_t get_offset_of_ClickButton_9() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___ClickButton_9)); }
	inline GameObject_t1113636619 * get_ClickButton_9() const { return ___ClickButton_9; }
	inline GameObject_t1113636619 ** get_address_of_ClickButton_9() { return &___ClickButton_9; }
	inline void set_ClickButton_9(GameObject_t1113636619 * value)
	{
		___ClickButton_9 = value;
		Il2CppCodeGenWriteBarrier((&___ClickButton_9), value);
	}

	inline static int32_t get_offset_of_CounterObject_10() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___CounterObject_10)); }
	inline GameObject_t1113636619 * get_CounterObject_10() const { return ___CounterObject_10; }
	inline GameObject_t1113636619 ** get_address_of_CounterObject_10() { return &___CounterObject_10; }
	inline void set_CounterObject_10(GameObject_t1113636619 * value)
	{
		___CounterObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___CounterObject_10), value);
	}

	inline static int32_t get_offset_of_tickSpeed_11() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___tickSpeed_11)); }
	inline float get_tickSpeed_11() const { return ___tickSpeed_11; }
	inline float* get_address_of_tickSpeed_11() { return &___tickSpeed_11; }
	inline void set_tickSpeed_11(float value)
	{
		___tickSpeed_11 = value;
	}

	inline static int32_t get_offset_of_tickFactor_12() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___tickFactor_12)); }
	inline float get_tickFactor_12() const { return ___tickFactor_12; }
	inline float* get_address_of_tickFactor_12() { return &___tickFactor_12; }
	inline void set_tickFactor_12(float value)
	{
		___tickFactor_12 = value;
	}

	inline static int32_t get_offset_of_mileStones_13() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___mileStones_13)); }
	inline DoubleU5BU5D_t3413330114* get_mileStones_13() const { return ___mileStones_13; }
	inline DoubleU5BU5D_t3413330114** get_address_of_mileStones_13() { return &___mileStones_13; }
	inline void set_mileStones_13(DoubleU5BU5D_t3413330114* value)
	{
		___mileStones_13 = value;
		Il2CppCodeGenWriteBarrier((&___mileStones_13), value);
	}

	inline static int32_t get_offset_of_mileStoneExponents_14() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___mileStoneExponents_14)); }
	inline Int32U5BU5D_t385246372* get_mileStoneExponents_14() const { return ___mileStoneExponents_14; }
	inline Int32U5BU5D_t385246372** get_address_of_mileStoneExponents_14() { return &___mileStoneExponents_14; }
	inline void set_mileStoneExponents_14(Int32U5BU5D_t385246372* value)
	{
		___mileStoneExponents_14 = value;
		Il2CppCodeGenWriteBarrier((&___mileStoneExponents_14), value);
	}

	inline static int32_t get_offset_of_mileStonesAchieved_15() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___mileStonesAchieved_15)); }
	inline BooleanU5BU5D_t2897418192* get_mileStonesAchieved_15() const { return ___mileStonesAchieved_15; }
	inline BooleanU5BU5D_t2897418192** get_address_of_mileStonesAchieved_15() { return &___mileStonesAchieved_15; }
	inline void set_mileStonesAchieved_15(BooleanU5BU5D_t2897418192* value)
	{
		___mileStonesAchieved_15 = value;
		Il2CppCodeGenWriteBarrier((&___mileStonesAchieved_15), value);
	}

	inline static int32_t get_offset_of_AutoClickPurchaseButton_16() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___AutoClickPurchaseButton_16)); }
	inline GameObject_t1113636619 * get_AutoClickPurchaseButton_16() const { return ___AutoClickPurchaseButton_16; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickPurchaseButton_16() { return &___AutoClickPurchaseButton_16; }
	inline void set_AutoClickPurchaseButton_16(GameObject_t1113636619 * value)
	{
		___AutoClickPurchaseButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickPurchaseButton_16), value);
	}

	inline static int32_t get_offset_of_AutoClickUpgradeButton_17() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___AutoClickUpgradeButton_17)); }
	inline GameObject_t1113636619 * get_AutoClickUpgradeButton_17() const { return ___AutoClickUpgradeButton_17; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickUpgradeButton_17() { return &___AutoClickUpgradeButton_17; }
	inline void set_AutoClickUpgradeButton_17(GameObject_t1113636619 * value)
	{
		___AutoClickUpgradeButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickUpgradeButton_17), value);
	}

	inline static int32_t get_offset_of_PrinterUpgradeButton_18() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___PrinterUpgradeButton_18)); }
	inline GameObject_t1113636619 * get_PrinterUpgradeButton_18() const { return ___PrinterUpgradeButton_18; }
	inline GameObject_t1113636619 ** get_address_of_PrinterUpgradeButton_18() { return &___PrinterUpgradeButton_18; }
	inline void set_PrinterUpgradeButton_18(GameObject_t1113636619 * value)
	{
		___PrinterUpgradeButton_18 = value;
		Il2CppCodeGenWriteBarrier((&___PrinterUpgradeButton_18), value);
	}

	inline static int32_t get_offset_of_AutoClickPurchaseText_19() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___AutoClickPurchaseText_19)); }
	inline GameObject_t1113636619 * get_AutoClickPurchaseText_19() const { return ___AutoClickPurchaseText_19; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickPurchaseText_19() { return &___AutoClickPurchaseText_19; }
	inline void set_AutoClickPurchaseText_19(GameObject_t1113636619 * value)
	{
		___AutoClickPurchaseText_19 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickPurchaseText_19), value);
	}

	inline static int32_t get_offset_of_AutoClickQuantity_20() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___AutoClickQuantity_20)); }
	inline GameObject_t1113636619 * get_AutoClickQuantity_20() const { return ___AutoClickQuantity_20; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickQuantity_20() { return &___AutoClickQuantity_20; }
	inline void set_AutoClickQuantity_20(GameObject_t1113636619 * value)
	{
		___AutoClickQuantity_20 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickQuantity_20), value);
	}

	inline static int32_t get_offset_of_AutoClickUpgradeTextObject_21() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___AutoClickUpgradeTextObject_21)); }
	inline GameObject_t1113636619 * get_AutoClickUpgradeTextObject_21() const { return ___AutoClickUpgradeTextObject_21; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickUpgradeTextObject_21() { return &___AutoClickUpgradeTextObject_21; }
	inline void set_AutoClickUpgradeTextObject_21(GameObject_t1113636619 * value)
	{
		___AutoClickUpgradeTextObject_21 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickUpgradeTextObject_21), value);
	}

	inline static int32_t get_offset_of_AutoClickUpgradeQuantityTextObject_22() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___AutoClickUpgradeQuantityTextObject_22)); }
	inline GameObject_t1113636619 * get_AutoClickUpgradeQuantityTextObject_22() const { return ___AutoClickUpgradeQuantityTextObject_22; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickUpgradeQuantityTextObject_22() { return &___AutoClickUpgradeQuantityTextObject_22; }
	inline void set_AutoClickUpgradeQuantityTextObject_22(GameObject_t1113636619 * value)
	{
		___AutoClickUpgradeQuantityTextObject_22 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickUpgradeQuantityTextObject_22), value);
	}

	inline static int32_t get_offset_of_PrinterUpgradeCostObject_23() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___PrinterUpgradeCostObject_23)); }
	inline GameObject_t1113636619 * get_PrinterUpgradeCostObject_23() const { return ___PrinterUpgradeCostObject_23; }
	inline GameObject_t1113636619 ** get_address_of_PrinterUpgradeCostObject_23() { return &___PrinterUpgradeCostObject_23; }
	inline void set_PrinterUpgradeCostObject_23(GameObject_t1113636619 * value)
	{
		___PrinterUpgradeCostObject_23 = value;
		Il2CppCodeGenWriteBarrier((&___PrinterUpgradeCostObject_23), value);
	}

	inline static int32_t get_offset_of_PrinterUpgradeQuantityTextObject_24() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___PrinterUpgradeQuantityTextObject_24)); }
	inline GameObject_t1113636619 * get_PrinterUpgradeQuantityTextObject_24() const { return ___PrinterUpgradeQuantityTextObject_24; }
	inline GameObject_t1113636619 ** get_address_of_PrinterUpgradeQuantityTextObject_24() { return &___PrinterUpgradeQuantityTextObject_24; }
	inline void set_PrinterUpgradeQuantityTextObject_24(GameObject_t1113636619 * value)
	{
		___PrinterUpgradeQuantityTextObject_24 = value;
		Il2CppCodeGenWriteBarrier((&___PrinterUpgradeQuantityTextObject_24), value);
	}

	inline static int32_t get_offset_of_IncomeSecondObject_25() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___IncomeSecondObject_25)); }
	inline GameObject_t1113636619 * get_IncomeSecondObject_25() const { return ___IncomeSecondObject_25; }
	inline GameObject_t1113636619 ** get_address_of_IncomeSecondObject_25() { return &___IncomeSecondObject_25; }
	inline void set_IncomeSecondObject_25(GameObject_t1113636619 * value)
	{
		___IncomeSecondObject_25 = value;
		Il2CppCodeGenWriteBarrier((&___IncomeSecondObject_25), value);
	}

	inline static int32_t get_offset_of_MenuButton1_26() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___MenuButton1_26)); }
	inline GameObject_t1113636619 * get_MenuButton1_26() const { return ___MenuButton1_26; }
	inline GameObject_t1113636619 ** get_address_of_MenuButton1_26() { return &___MenuButton1_26; }
	inline void set_MenuButton1_26(GameObject_t1113636619 * value)
	{
		___MenuButton1_26 = value;
		Il2CppCodeGenWriteBarrier((&___MenuButton1_26), value);
	}

	inline static int32_t get_offset_of_MenuButton2_27() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___MenuButton2_27)); }
	inline GameObject_t1113636619 * get_MenuButton2_27() const { return ___MenuButton2_27; }
	inline GameObject_t1113636619 ** get_address_of_MenuButton2_27() { return &___MenuButton2_27; }
	inline void set_MenuButton2_27(GameObject_t1113636619 * value)
	{
		___MenuButton2_27 = value;
		Il2CppCodeGenWriteBarrier((&___MenuButton2_27), value);
	}

	inline static int32_t get_offset_of_Menu1_28() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___Menu1_28)); }
	inline GameObject_t1113636619 * get_Menu1_28() const { return ___Menu1_28; }
	inline GameObject_t1113636619 ** get_address_of_Menu1_28() { return &___Menu1_28; }
	inline void set_Menu1_28(GameObject_t1113636619 * value)
	{
		___Menu1_28 = value;
		Il2CppCodeGenWriteBarrier((&___Menu1_28), value);
	}

	inline static int32_t get_offset_of_Menu2_29() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___Menu2_29)); }
	inline GameObject_t1113636619 * get_Menu2_29() const { return ___Menu2_29; }
	inline GameObject_t1113636619 ** get_address_of_Menu2_29() { return &___Menu2_29; }
	inline void set_Menu2_29(GameObject_t1113636619 * value)
	{
		___Menu2_29 = value;
		Il2CppCodeGenWriteBarrier((&___Menu2_29), value);
	}

	inline static int32_t get_offset_of_Menu3_30() { return static_cast<int32_t>(offsetof(GameData_t415813024, ___Menu3_30)); }
	inline GameObject_t1113636619 * get_Menu3_30() const { return ___Menu3_30; }
	inline GameObject_t1113636619 ** get_address_of_Menu3_30() { return &___Menu3_30; }
	inline void set_Menu3_30(GameObject_t1113636619 * value)
	{
		___Menu3_30 = value;
		Il2CppCodeGenWriteBarrier((&___Menu3_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEDATA_T415813024_H
#ifndef INSTRUCTIONTEXT_T218659526_H
#define INSTRUCTIONTEXT_T218659526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstructionText
struct  InstructionText_t218659526  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject InstructionText::ToolTip
	GameObject_t1113636619 * ___ToolTip_2;
	// UnityEngine.UI.Text InstructionText::ToolTipText
	Text_t1901882714 * ___ToolTipText_3;
	// System.String InstructionText::printer
	String_t* ___printer_4;
	// System.String InstructionText::upgradePrinter
	String_t* ___upgradePrinter_5;
	// System.String InstructionText::bank
	String_t* ___bank_6;
	// System.String InstructionText::investment
	String_t* ___investment_7;
	// System.String InstructionText::investmentUpgrade
	String_t* ___investmentUpgrade_8;
	// System.String InstructionText::blank
	String_t* ___blank_9;

public:
	inline static int32_t get_offset_of_ToolTip_2() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___ToolTip_2)); }
	inline GameObject_t1113636619 * get_ToolTip_2() const { return ___ToolTip_2; }
	inline GameObject_t1113636619 ** get_address_of_ToolTip_2() { return &___ToolTip_2; }
	inline void set_ToolTip_2(GameObject_t1113636619 * value)
	{
		___ToolTip_2 = value;
		Il2CppCodeGenWriteBarrier((&___ToolTip_2), value);
	}

	inline static int32_t get_offset_of_ToolTipText_3() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___ToolTipText_3)); }
	inline Text_t1901882714 * get_ToolTipText_3() const { return ___ToolTipText_3; }
	inline Text_t1901882714 ** get_address_of_ToolTipText_3() { return &___ToolTipText_3; }
	inline void set_ToolTipText_3(Text_t1901882714 * value)
	{
		___ToolTipText_3 = value;
		Il2CppCodeGenWriteBarrier((&___ToolTipText_3), value);
	}

	inline static int32_t get_offset_of_printer_4() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___printer_4)); }
	inline String_t* get_printer_4() const { return ___printer_4; }
	inline String_t** get_address_of_printer_4() { return &___printer_4; }
	inline void set_printer_4(String_t* value)
	{
		___printer_4 = value;
		Il2CppCodeGenWriteBarrier((&___printer_4), value);
	}

	inline static int32_t get_offset_of_upgradePrinter_5() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___upgradePrinter_5)); }
	inline String_t* get_upgradePrinter_5() const { return ___upgradePrinter_5; }
	inline String_t** get_address_of_upgradePrinter_5() { return &___upgradePrinter_5; }
	inline void set_upgradePrinter_5(String_t* value)
	{
		___upgradePrinter_5 = value;
		Il2CppCodeGenWriteBarrier((&___upgradePrinter_5), value);
	}

	inline static int32_t get_offset_of_bank_6() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___bank_6)); }
	inline String_t* get_bank_6() const { return ___bank_6; }
	inline String_t** get_address_of_bank_6() { return &___bank_6; }
	inline void set_bank_6(String_t* value)
	{
		___bank_6 = value;
		Il2CppCodeGenWriteBarrier((&___bank_6), value);
	}

	inline static int32_t get_offset_of_investment_7() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___investment_7)); }
	inline String_t* get_investment_7() const { return ___investment_7; }
	inline String_t** get_address_of_investment_7() { return &___investment_7; }
	inline void set_investment_7(String_t* value)
	{
		___investment_7 = value;
		Il2CppCodeGenWriteBarrier((&___investment_7), value);
	}

	inline static int32_t get_offset_of_investmentUpgrade_8() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___investmentUpgrade_8)); }
	inline String_t* get_investmentUpgrade_8() const { return ___investmentUpgrade_8; }
	inline String_t** get_address_of_investmentUpgrade_8() { return &___investmentUpgrade_8; }
	inline void set_investmentUpgrade_8(String_t* value)
	{
		___investmentUpgrade_8 = value;
		Il2CppCodeGenWriteBarrier((&___investmentUpgrade_8), value);
	}

	inline static int32_t get_offset_of_blank_9() { return static_cast<int32_t>(offsetof(InstructionText_t218659526, ___blank_9)); }
	inline String_t* get_blank_9() const { return ___blank_9; }
	inline String_t** get_address_of_blank_9() { return &___blank_9; }
	inline void set_blank_9(String_t* value)
	{
		___blank_9 = value;
		Il2CppCodeGenWriteBarrier((&___blank_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONTEXT_T218659526_H
#ifndef GAMENUMBERS_T3947555191_H
#define GAMENUMBERS_T3947555191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameNumbers
struct  GameNumbers_t3947555191  : public MonoBehaviour_t3962482529
{
public:
	// GameNumbers/BigNumber GameNumbers::coins
	BigNumber_t753465967  ___coins_2;
	// System.Int64 GameNumbers::printerUpgradeLevel
	int64_t ___printerUpgradeLevel_3;
	// System.Int64 GameNumbers::autoClickerUpgradeLevel
	int64_t ___autoClickerUpgradeLevel_4;
	// System.Int64 GameNumbers::autoClickers
	int64_t ___autoClickers_5;
	// System.Collections.Generic.List`1<GameNumbers/BigNumber> GameNumbers::printerUpgradeCosts
	List_1_t2225540709 * ___printerUpgradeCosts_6;
	// System.Collections.Generic.List`1<GameNumbers/BigNumber> GameNumbers::autoClickerUpgradeCosts
	List_1_t2225540709 * ___autoClickerUpgradeCosts_7;
	// System.Collections.Generic.List`1<GameNumbers/BigNumber> GameNumbers::autoClickerCosts
	List_1_t2225540709 * ___autoClickerCosts_8;
	// System.Collections.Generic.List`1<GameNumbers/BigNumber> GameNumbers::printerUpgradeModifiers
	List_1_t2225540709 * ___printerUpgradeModifiers_9;
	// System.Collections.Generic.List`1<GameNumbers/BigNumber> GameNumbers::autoClickerUpgradeModifiers
	List_1_t2225540709 * ___autoClickerUpgradeModifiers_10;

public:
	inline static int32_t get_offset_of_coins_2() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___coins_2)); }
	inline BigNumber_t753465967  get_coins_2() const { return ___coins_2; }
	inline BigNumber_t753465967 * get_address_of_coins_2() { return &___coins_2; }
	inline void set_coins_2(BigNumber_t753465967  value)
	{
		___coins_2 = value;
	}

	inline static int32_t get_offset_of_printerUpgradeLevel_3() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___printerUpgradeLevel_3)); }
	inline int64_t get_printerUpgradeLevel_3() const { return ___printerUpgradeLevel_3; }
	inline int64_t* get_address_of_printerUpgradeLevel_3() { return &___printerUpgradeLevel_3; }
	inline void set_printerUpgradeLevel_3(int64_t value)
	{
		___printerUpgradeLevel_3 = value;
	}

	inline static int32_t get_offset_of_autoClickerUpgradeLevel_4() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___autoClickerUpgradeLevel_4)); }
	inline int64_t get_autoClickerUpgradeLevel_4() const { return ___autoClickerUpgradeLevel_4; }
	inline int64_t* get_address_of_autoClickerUpgradeLevel_4() { return &___autoClickerUpgradeLevel_4; }
	inline void set_autoClickerUpgradeLevel_4(int64_t value)
	{
		___autoClickerUpgradeLevel_4 = value;
	}

	inline static int32_t get_offset_of_autoClickers_5() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___autoClickers_5)); }
	inline int64_t get_autoClickers_5() const { return ___autoClickers_5; }
	inline int64_t* get_address_of_autoClickers_5() { return &___autoClickers_5; }
	inline void set_autoClickers_5(int64_t value)
	{
		___autoClickers_5 = value;
	}

	inline static int32_t get_offset_of_printerUpgradeCosts_6() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___printerUpgradeCosts_6)); }
	inline List_1_t2225540709 * get_printerUpgradeCosts_6() const { return ___printerUpgradeCosts_6; }
	inline List_1_t2225540709 ** get_address_of_printerUpgradeCosts_6() { return &___printerUpgradeCosts_6; }
	inline void set_printerUpgradeCosts_6(List_1_t2225540709 * value)
	{
		___printerUpgradeCosts_6 = value;
		Il2CppCodeGenWriteBarrier((&___printerUpgradeCosts_6), value);
	}

	inline static int32_t get_offset_of_autoClickerUpgradeCosts_7() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___autoClickerUpgradeCosts_7)); }
	inline List_1_t2225540709 * get_autoClickerUpgradeCosts_7() const { return ___autoClickerUpgradeCosts_7; }
	inline List_1_t2225540709 ** get_address_of_autoClickerUpgradeCosts_7() { return &___autoClickerUpgradeCosts_7; }
	inline void set_autoClickerUpgradeCosts_7(List_1_t2225540709 * value)
	{
		___autoClickerUpgradeCosts_7 = value;
		Il2CppCodeGenWriteBarrier((&___autoClickerUpgradeCosts_7), value);
	}

	inline static int32_t get_offset_of_autoClickerCosts_8() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___autoClickerCosts_8)); }
	inline List_1_t2225540709 * get_autoClickerCosts_8() const { return ___autoClickerCosts_8; }
	inline List_1_t2225540709 ** get_address_of_autoClickerCosts_8() { return &___autoClickerCosts_8; }
	inline void set_autoClickerCosts_8(List_1_t2225540709 * value)
	{
		___autoClickerCosts_8 = value;
		Il2CppCodeGenWriteBarrier((&___autoClickerCosts_8), value);
	}

	inline static int32_t get_offset_of_printerUpgradeModifiers_9() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___printerUpgradeModifiers_9)); }
	inline List_1_t2225540709 * get_printerUpgradeModifiers_9() const { return ___printerUpgradeModifiers_9; }
	inline List_1_t2225540709 ** get_address_of_printerUpgradeModifiers_9() { return &___printerUpgradeModifiers_9; }
	inline void set_printerUpgradeModifiers_9(List_1_t2225540709 * value)
	{
		___printerUpgradeModifiers_9 = value;
		Il2CppCodeGenWriteBarrier((&___printerUpgradeModifiers_9), value);
	}

	inline static int32_t get_offset_of_autoClickerUpgradeModifiers_10() { return static_cast<int32_t>(offsetof(GameNumbers_t3947555191, ___autoClickerUpgradeModifiers_10)); }
	inline List_1_t2225540709 * get_autoClickerUpgradeModifiers_10() const { return ___autoClickerUpgradeModifiers_10; }
	inline List_1_t2225540709 ** get_address_of_autoClickerUpgradeModifiers_10() { return &___autoClickerUpgradeModifiers_10; }
	inline void set_autoClickerUpgradeModifiers_10(List_1_t2225540709 * value)
	{
		___autoClickerUpgradeModifiers_10 = value;
		Il2CppCodeGenWriteBarrier((&___autoClickerUpgradeModifiers_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMENUMBERS_T3947555191_H
#ifndef EVENTMANAGER_T1594656820_H
#define EVENTMANAGER_T1594656820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t1594656820  : public MonoBehaviour_t3962482529
{
public:
	// UIManager EventManager::ui
	UIManager_t1042050227 * ___ui_2;
	// GameNumbers EventManager::numbers
	GameNumbers_t3947555191 * ___numbers_3;
	// GameData EventManager::data
	GameData_t415813024 * ___data_4;
	// MilestoneUnlocks EventManager::unlocks
	MilestoneUnlocks_t2290314618 * ___unlocks_5;
	// GameNumbers/BigNumber EventManager::negative
	BigNumber_t753465967  ___negative_6;

public:
	inline static int32_t get_offset_of_ui_2() { return static_cast<int32_t>(offsetof(EventManager_t1594656820, ___ui_2)); }
	inline UIManager_t1042050227 * get_ui_2() const { return ___ui_2; }
	inline UIManager_t1042050227 ** get_address_of_ui_2() { return &___ui_2; }
	inline void set_ui_2(UIManager_t1042050227 * value)
	{
		___ui_2 = value;
		Il2CppCodeGenWriteBarrier((&___ui_2), value);
	}

	inline static int32_t get_offset_of_numbers_3() { return static_cast<int32_t>(offsetof(EventManager_t1594656820, ___numbers_3)); }
	inline GameNumbers_t3947555191 * get_numbers_3() const { return ___numbers_3; }
	inline GameNumbers_t3947555191 ** get_address_of_numbers_3() { return &___numbers_3; }
	inline void set_numbers_3(GameNumbers_t3947555191 * value)
	{
		___numbers_3 = value;
		Il2CppCodeGenWriteBarrier((&___numbers_3), value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(EventManager_t1594656820, ___data_4)); }
	inline GameData_t415813024 * get_data_4() const { return ___data_4; }
	inline GameData_t415813024 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(GameData_t415813024 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((&___data_4), value);
	}

	inline static int32_t get_offset_of_unlocks_5() { return static_cast<int32_t>(offsetof(EventManager_t1594656820, ___unlocks_5)); }
	inline MilestoneUnlocks_t2290314618 * get_unlocks_5() const { return ___unlocks_5; }
	inline MilestoneUnlocks_t2290314618 ** get_address_of_unlocks_5() { return &___unlocks_5; }
	inline void set_unlocks_5(MilestoneUnlocks_t2290314618 * value)
	{
		___unlocks_5 = value;
		Il2CppCodeGenWriteBarrier((&___unlocks_5), value);
	}

	inline static int32_t get_offset_of_negative_6() { return static_cast<int32_t>(offsetof(EventManager_t1594656820, ___negative_6)); }
	inline BigNumber_t753465967  get_negative_6() const { return ___negative_6; }
	inline BigNumber_t753465967 * get_address_of_negative_6() { return &___negative_6; }
	inline void set_negative_6(BigNumber_t753465967  value)
	{
		___negative_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTMANAGER_T1594656820_H
#ifndef MILESTONEUNLOCKS_T2290314618_H
#define MILESTONEUNLOCKS_T2290314618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MilestoneUnlocks
struct  MilestoneUnlocks_t2290314618  : public MonoBehaviour_t3962482529
{
public:
	// GameData MilestoneUnlocks::data
	GameData_t415813024 * ___data_2;
	// GameNumbers MilestoneUnlocks::numbers
	GameNumbers_t3947555191 * ___numbers_3;
	// System.Int32[] MilestoneUnlocks::mileStoneExponents
	Int32U5BU5D_t385246372* ___mileStoneExponents_4;
	// System.Double[] MilestoneUnlocks::mileStonesNumbers
	DoubleU5BU5D_t3413330114* ___mileStonesNumbers_5;
	// System.Boolean[] MilestoneUnlocks::mileStonesAchieved
	BooleanU5BU5D_t2897418192* ___mileStonesAchieved_6;
	// UnityEngine.UI.Text MilestoneUnlocks::TitleText
	Text_t1901882714 * ___TitleText_7;
	// UnityEngine.GameObject MilestoneUnlocks::AutoClickPurchaseButton
	GameObject_t1113636619 * ___AutoClickPurchaseButton_8;
	// UnityEngine.GameObject MilestoneUnlocks::Bank
	GameObject_t1113636619 * ___Bank_9;
	// UnityEngine.GameObject MilestoneUnlocks::IncomeSecondObject
	GameObject_t1113636619 * ___IncomeSecondObject_10;
	// UnityEngine.GameObject MilestoneUnlocks::AutoClickUpgradeButton
	GameObject_t1113636619 * ___AutoClickUpgradeButton_11;
	// UnityEngine.GameObject MilestoneUnlocks::PrinterUpgradeButton
	GameObject_t1113636619 * ___PrinterUpgradeButton_12;
	// UnityEngine.GameObject MilestoneUnlocks::PrestigeMenu
	GameObject_t1113636619 * ___PrestigeMenu_13;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___data_2)); }
	inline GameData_t415813024 * get_data_2() const { return ___data_2; }
	inline GameData_t415813024 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(GameData_t415813024 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}

	inline static int32_t get_offset_of_numbers_3() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___numbers_3)); }
	inline GameNumbers_t3947555191 * get_numbers_3() const { return ___numbers_3; }
	inline GameNumbers_t3947555191 ** get_address_of_numbers_3() { return &___numbers_3; }
	inline void set_numbers_3(GameNumbers_t3947555191 * value)
	{
		___numbers_3 = value;
		Il2CppCodeGenWriteBarrier((&___numbers_3), value);
	}

	inline static int32_t get_offset_of_mileStoneExponents_4() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___mileStoneExponents_4)); }
	inline Int32U5BU5D_t385246372* get_mileStoneExponents_4() const { return ___mileStoneExponents_4; }
	inline Int32U5BU5D_t385246372** get_address_of_mileStoneExponents_4() { return &___mileStoneExponents_4; }
	inline void set_mileStoneExponents_4(Int32U5BU5D_t385246372* value)
	{
		___mileStoneExponents_4 = value;
		Il2CppCodeGenWriteBarrier((&___mileStoneExponents_4), value);
	}

	inline static int32_t get_offset_of_mileStonesNumbers_5() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___mileStonesNumbers_5)); }
	inline DoubleU5BU5D_t3413330114* get_mileStonesNumbers_5() const { return ___mileStonesNumbers_5; }
	inline DoubleU5BU5D_t3413330114** get_address_of_mileStonesNumbers_5() { return &___mileStonesNumbers_5; }
	inline void set_mileStonesNumbers_5(DoubleU5BU5D_t3413330114* value)
	{
		___mileStonesNumbers_5 = value;
		Il2CppCodeGenWriteBarrier((&___mileStonesNumbers_5), value);
	}

	inline static int32_t get_offset_of_mileStonesAchieved_6() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___mileStonesAchieved_6)); }
	inline BooleanU5BU5D_t2897418192* get_mileStonesAchieved_6() const { return ___mileStonesAchieved_6; }
	inline BooleanU5BU5D_t2897418192** get_address_of_mileStonesAchieved_6() { return &___mileStonesAchieved_6; }
	inline void set_mileStonesAchieved_6(BooleanU5BU5D_t2897418192* value)
	{
		___mileStonesAchieved_6 = value;
		Il2CppCodeGenWriteBarrier((&___mileStonesAchieved_6), value);
	}

	inline static int32_t get_offset_of_TitleText_7() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___TitleText_7)); }
	inline Text_t1901882714 * get_TitleText_7() const { return ___TitleText_7; }
	inline Text_t1901882714 ** get_address_of_TitleText_7() { return &___TitleText_7; }
	inline void set_TitleText_7(Text_t1901882714 * value)
	{
		___TitleText_7 = value;
		Il2CppCodeGenWriteBarrier((&___TitleText_7), value);
	}

	inline static int32_t get_offset_of_AutoClickPurchaseButton_8() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___AutoClickPurchaseButton_8)); }
	inline GameObject_t1113636619 * get_AutoClickPurchaseButton_8() const { return ___AutoClickPurchaseButton_8; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickPurchaseButton_8() { return &___AutoClickPurchaseButton_8; }
	inline void set_AutoClickPurchaseButton_8(GameObject_t1113636619 * value)
	{
		___AutoClickPurchaseButton_8 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickPurchaseButton_8), value);
	}

	inline static int32_t get_offset_of_Bank_9() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___Bank_9)); }
	inline GameObject_t1113636619 * get_Bank_9() const { return ___Bank_9; }
	inline GameObject_t1113636619 ** get_address_of_Bank_9() { return &___Bank_9; }
	inline void set_Bank_9(GameObject_t1113636619 * value)
	{
		___Bank_9 = value;
		Il2CppCodeGenWriteBarrier((&___Bank_9), value);
	}

	inline static int32_t get_offset_of_IncomeSecondObject_10() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___IncomeSecondObject_10)); }
	inline GameObject_t1113636619 * get_IncomeSecondObject_10() const { return ___IncomeSecondObject_10; }
	inline GameObject_t1113636619 ** get_address_of_IncomeSecondObject_10() { return &___IncomeSecondObject_10; }
	inline void set_IncomeSecondObject_10(GameObject_t1113636619 * value)
	{
		___IncomeSecondObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___IncomeSecondObject_10), value);
	}

	inline static int32_t get_offset_of_AutoClickUpgradeButton_11() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___AutoClickUpgradeButton_11)); }
	inline GameObject_t1113636619 * get_AutoClickUpgradeButton_11() const { return ___AutoClickUpgradeButton_11; }
	inline GameObject_t1113636619 ** get_address_of_AutoClickUpgradeButton_11() { return &___AutoClickUpgradeButton_11; }
	inline void set_AutoClickUpgradeButton_11(GameObject_t1113636619 * value)
	{
		___AutoClickUpgradeButton_11 = value;
		Il2CppCodeGenWriteBarrier((&___AutoClickUpgradeButton_11), value);
	}

	inline static int32_t get_offset_of_PrinterUpgradeButton_12() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___PrinterUpgradeButton_12)); }
	inline GameObject_t1113636619 * get_PrinterUpgradeButton_12() const { return ___PrinterUpgradeButton_12; }
	inline GameObject_t1113636619 ** get_address_of_PrinterUpgradeButton_12() { return &___PrinterUpgradeButton_12; }
	inline void set_PrinterUpgradeButton_12(GameObject_t1113636619 * value)
	{
		___PrinterUpgradeButton_12 = value;
		Il2CppCodeGenWriteBarrier((&___PrinterUpgradeButton_12), value);
	}

	inline static int32_t get_offset_of_PrestigeMenu_13() { return static_cast<int32_t>(offsetof(MilestoneUnlocks_t2290314618, ___PrestigeMenu_13)); }
	inline GameObject_t1113636619 * get_PrestigeMenu_13() const { return ___PrestigeMenu_13; }
	inline GameObject_t1113636619 ** get_address_of_PrestigeMenu_13() { return &___PrestigeMenu_13; }
	inline void set_PrestigeMenu_13(GameObject_t1113636619 * value)
	{
		___PrestigeMenu_13 = value;
		Il2CppCodeGenWriteBarrier((&___PrestigeMenu_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MILESTONEUNLOCKS_T2290314618_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<GameNumbers/BigNumber>::.ctor()
extern "C"  void List_1__ctor_m2939194936_gshared (List_1_t2225540709 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<GameNumbers/BigNumber>::Add(!0)
extern "C"  void List_1_Add_m3743742916_gshared (List_1_t2225540709 * __this, BigNumber_t753465967  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GameNumbers/BigNumber>::get_Item(System.Int32)
extern "C"  BigNumber_t753465967  List_1_get_Item_m4077889869_gshared (List_1_t2225540709 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void GameNumbers/BigNumber::.ctor(System.Double,System.Int32)
extern "C"  void BigNumber__ctor_m229586297 (BigNumber_t753465967 * __this, double ___m0, int32_t ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UIManager>()
#define GameObject_GetComponent_TisUIManager_t1042050227_m1645234603(__this, method) ((  UIManager_t1042050227 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<GameNumbers>()
#define GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245(__this, method) ((  GameNumbers_t3947555191 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<GameData>()
#define GameObject_GetComponent_TisGameData_t415813024_m3595909835(__this, method) ((  GameData_t415813024 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<MilestoneUnlocks>()
#define GameObject_GetComponent_TisMilestoneUnlocks_t2290314618_m77098687(__this, method) ((  MilestoneUnlocks_t2290314618 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Collections.IEnumerator EventManager::AutoClickerCycle()
extern "C"  RuntimeObject* EventManager_AutoClickerCycle_m3870092009 (EventManager_t1594656820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<SaveHandler>()
#define GameObject_GetComponent_TisSaveHandler_t383514785_m2914446903(__this, method) ((  SaveHandler_t383514785 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void SaveHandler::Save()
extern "C"  void SaveHandler_Save_m1313853312 (SaveHandler_t383514785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GameNumbers/BigNumber GameNumbers::CoinClickValue()
extern "C"  BigNumber_t753465967  GameNumbers_CoinClickValue_m3164705727 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameNumbers::IncreaseCoins(GameNumbers/BigNumber)
extern "C"  void GameNumbers_IncreaseCoins_m1673667195 (GameNumbers_t3947555191 * __this, BigNumber_t753465967  ___coinIncrease0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
extern "C"  String_t* Convert_ToString_m2219349533 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::PopUpNumbers(UnityEngine.Color,System.String,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  void UIManager_PopUpNumbers_m468699646 (UIManager_t1042050227 * __this, Color_t2555686324  ___popUpColor0, String_t* ___popUpText1, GameObject_t1113636619 * ___popUpLocation2, Vector3_t3722313464  ___scale3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UpdateUI()
extern "C"  void UIManager_UpdateUI_m743122523 (UIManager_t1042050227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MilestoneUnlocks::MileStoneCheck()
extern "C"  void MilestoneUnlocks_MileStoneCheck_m470977986 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GameNumbers/BigNumber GameNumbers::get_Coins()
extern "C"  BigNumber_t753465967  GameNumbers_get_Coins_m4122686468 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GameNumbers/BigNumber GameNumbers::AutoClickerCost()
extern "C"  BigNumber_t753465967  GameNumbers_AutoClickerCost_m300389370 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameNumbers/BigNumber::op_GreaterThanOrEqual(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_GreaterThanOrEqual_m680034210 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GameNumbers/BigNumber GameNumbers/BigNumber::op_Multiply(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  BigNumber_t753465967  BigNumber_op_Multiply_m1218073065 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 GameNumbers::get_AutoClickers()
extern "C"  int64_t GameNumbers_get_AutoClickers_m3155944230 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameNumbers::set_AutoClickers(System.Int64)
extern "C"  void GameNumbers_set_AutoClickers_m2830439004 (GameNumbers_t3947555191 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Save()
extern "C"  void EventManager_Save_m3943420652 (EventManager_t1594656820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UIDisplayMessage(System.String)
extern "C"  void UIManager_UIDisplayMessage_m4231901600 (UIManager_t1042050227 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GameNumbers/BigNumber GameNumbers::AutoClickerUpgradeCost()
extern "C"  BigNumber_t753465967  GameNumbers_AutoClickerUpgradeCost_m1121366818 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 GameNumbers::get_AutoClickerUpgradeLevel()
extern "C"  int64_t GameNumbers_get_AutoClickerUpgradeLevel_m3955757932 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameNumbers::set_AutoClickerUpgradeLevel(System.Int64)
extern "C"  void GameNumbers_set_AutoClickerUpgradeLevel_m332107850 (GameNumbers_t3947555191 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GameNumbers/BigNumber GameNumbers::PrinterUpgradeCost()
extern "C"  BigNumber_t753465967  GameNumbers_PrinterUpgradeCost_m2950495310 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 GameNumbers::get_PrinterUpgradeLevel()
extern "C"  int64_t GameNumbers_get_PrinterUpgradeLevel_m2263168015 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameNumbers::set_PrinterUpgradeLevel(System.Int64)
extern "C"  void GameNumbers_set_PrinterUpgradeLevel_m1312834146 (GameNumbers_t3947555191 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager/<AutoClickerCycle>c__Iterator0::.ctor()
extern "C"  void U3CAutoClickerCycleU3Ec__Iterator0__ctor_m3080331803 (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UISwitch(System.Int32)
extern "C"  void UIManager_UISwitch_m2642155203 (UIManager_t1042050227 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(System.String)
extern "C"  bool Input_GetKey_m3868879071 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
extern "C"  bool Input_GetKeyDown_m2928138282 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AttemptInvestmentPurchase()
extern "C"  void EventManager_AttemptInvestmentPurchase_m869314865 (EventManager_t1594656820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AttemptInvestmentUpgrade()
extern "C"  void EventManager_AttemptInvestmentUpgrade_m2600796009 (EventManager_t1594656820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AttemptClickUpgrade()
extern "C"  void EventManager_AttemptClickUpgrade_m1393089994 (EventManager_t1594656820 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameNumbers::set_Coins(GameNumbers/BigNumber)
extern "C"  void GameNumbers_set_Coins_m626392107 (GameNumbers_t3947555191 * __this, BigNumber_t753465967  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
extern "C"  void PlayerPrefs_DeleteAll_m610653455 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GameNumbers/BigNumber GameNumbers::PassiveIncomePerTick()
extern "C"  BigNumber_t753465967  GameNumbers_PassiveIncomePerTick_m3369419454 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::BankEnlarge()
extern "C"  void UIManager_BankEnlarge_m1627368452 (UIManager_t1042050227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::BankShrink()
extern "C"  void UIManager_BankShrink_m888614235 (UIManager_t1042050227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<GameNumbers/BigNumber>::.ctor()
#define List_1__ctor_m2939194936(__this, method) ((  void (*) (List_1_t2225540709 *, const RuntimeMethod*))List_1__ctor_m2939194936_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameNumbers/BigNumber>::Add(!0)
#define List_1_Add_m3743742916(__this, p0, method) ((  void (*) (List_1_t2225540709 *, BigNumber_t753465967 , const RuntimeMethod*))List_1_Add_m3743742916_gshared)(__this, p0, method)
// System.Void GameNumbers::UpdateLists(System.Int32)
extern "C"  void GameNumbers_UpdateLists_m2156975283 (GameNumbers_t3947555191 * __this, int32_t ___i0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<GameNumbers/BigNumber>::get_Item(System.Int32)
#define List_1_get_Item_m4077889869(__this, p0, method) ((  BigNumber_t753465967  (*) (List_1_t2225540709 *, int32_t, const RuntimeMethod*))List_1_get_Item_m4077889869_gshared)(__this, p0, method)
// GameNumbers/BigNumber GameNumbers/BigNumber::op_Addition(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  BigNumber_t753465967  BigNumber_op_Addition_m1952083633 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameNumbers/BigNumber::Calculate()
extern "C"  void BigNumber_Calculate_m2424218829 (BigNumber_t753465967 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameNumbers/BigNumber::op_GreaterThan(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_GreaterThan_m3330324401 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameNumbers/BigNumber::op_Equality(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_Equality_m3937038242 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameNumbers/BigNumber::op_LessThan(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_LessThan_m24313857 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameNumbers/BigNumber::GetHashCode()
extern "C"  int32_t BigNumber_GetHashCode_m351751800 (BigNumber_t753465967 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::Equals(System.Object)
extern "C"  bool ValueType_Equals_m1524437845 (RuntimeObject * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameNumbers/BigNumber::Equals(System.Object)
extern "C"  bool BigNumber_Equals_m101231124 (BigNumber_t753465967 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m2986581816 (int64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GameNumbers/BigNumber::WordFormat()
extern "C"  String_t* BigNumber_WordFormat_m1372495670 (BigNumber_t753465967 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GameNumbers/BigNumber::ToString()
extern "C"  String_t* BigNumber_ToString_m550545267 (BigNumber_t753465967 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String)
extern "C"  String_t* Double_ToString_m896573572 (double* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1901882714_m2114913816(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InstructionText::UpdateText(System.String)
extern "C"  void InstructionText_UpdateText_m1067065194 (InstructionText_t218659526 * __this, String_t* ___newText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MilestoneUnlocks::MileStoneReward(System.Int32)
extern "C"  void MilestoneUnlocks_MileStoneReward_m713621352 (MilestoneUnlocks_t2290314618 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MilestoneUnlocks::UnlockOne()
extern "C"  void MilestoneUnlocks_UnlockOne_m969447492 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MilestoneUnlocks::UnlockTwo()
extern "C"  void MilestoneUnlocks_UnlockTwo_m182342349 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MilestoneUnlocks::UnlockThree()
extern "C"  void MilestoneUnlocks_UnlockThree_m1368648665 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MilestoneUnlocks::UnlockFour()
extern "C"  void MilestoneUnlocks_UnlockFour_m2053590922 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SaveHandler::SaveExists()
extern "C"  bool SaveHandler_SaveExists_m4032529009 (SaveHandler_t383514785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SaveHandler::CreateBaseSave()
extern "C"  void SaveHandler_CreateBaseSave_m3996903509 (SaveHandler_t383514785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SaveHandler::TransferData()
extern "C"  void SaveHandler_TransferData_m1168138986 (SaveHandler_t383514785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C"  String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String)
extern "C"  double Double_Parse_m4153729520 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String)
extern "C"  int64_t Int64_Parse_m662659148 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Double)
extern "C"  String_t* Convert_ToString_m545017250 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Int32)
extern "C"  String_t* Convert_ToString_m3064051180 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Int64)
extern "C"  String_t* Convert_ToString_m2676554995 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C"  bool PlayerPrefs_HasKey_m2794939670 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(__this, method) ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
#define GameObject_GetComponent_TisAnimator_t434523843_m440019408(__this, method) ((  Animator_t434523843 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ClearChildren()
extern "C"  void UIManager_ClearChildren_m4240919983 (UIManager_t1042050227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::HideAllMenu()
extern "C"  void UIManager_HideAllMenu_m1608218450 (UIManager_t1042050227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EventManager::.ctor()
extern "C"  void EventManager__ctor_m2252750981 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	{
		BigNumber_t753465967  L_0;
		memset(&L_0, 0, sizeof(L_0));
		BigNumber__ctor_m229586297((&L_0), (-1.0), 0, /*hidden argument*/NULL);
		__this->set_negative_6(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventManager::Start()
extern "C"  void EventManager_Start_m4280038895 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_Start_m4280038895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		UIManager_t1042050227 * L_1 = GameObject_GetComponent_TisUIManager_t1042050227_m1645234603(L_0, /*hidden argument*/GameObject_GetComponent_TisUIManager_t1042050227_m1645234603_RuntimeMethod_var);
		__this->set_ui_2(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_3 = GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245(L_2, /*hidden argument*/GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245_RuntimeMethod_var);
		__this->set_numbers_3(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameData_t415813024 * L_5 = GameObject_GetComponent_TisGameData_t415813024_m3595909835(L_4, /*hidden argument*/GameObject_GetComponent_TisGameData_t415813024_m3595909835_RuntimeMethod_var);
		__this->set_data_4(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		MilestoneUnlocks_t2290314618 * L_7 = GameObject_GetComponent_TisMilestoneUnlocks_t2290314618_m77098687(L_6, /*hidden argument*/GameObject_GetComponent_TisMilestoneUnlocks_t2290314618_m77098687_RuntimeMethod_var);
		__this->set_unlocks_5(L_7);
		RuntimeObject* L_8 = EventManager_AutoClickerCycle_m3870092009(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventManager::Save()
extern "C"  void EventManager_Save_m3943420652 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_Save_m3943420652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		SaveHandler_t383514785 * L_1 = GameObject_GetComponent_TisSaveHandler_t383514785_m2914446903(L_0, /*hidden argument*/GameObject_GetComponent_TisSaveHandler_t383514785_m2914446903_RuntimeMethod_var);
		SaveHandler_Save_m1313853312(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventManager::CoinClick()
extern "C"  void EventManager_CoinClick_m2057454674 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_CoinClick_m2057454674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameNumbers_t3947555191 * L_0 = __this->get_numbers_3();
		GameNumbers_t3947555191 * L_1 = __this->get_numbers_3();
		BigNumber_t753465967  L_2 = GameNumbers_CoinClickValue_m3164705727(L_1, /*hidden argument*/NULL);
		GameNumbers_IncreaseCoins_m1673667195(L_0, L_2, /*hidden argument*/NULL);
		UIManager_t1042050227 * L_3 = __this->get_ui_2();
		Color_t2555686324  L_4 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_5 = __this->get_numbers_3();
		BigNumber_t753465967  L_6 = GameNumbers_CoinClickValue_m3164705727(L_5, /*hidden argument*/NULL);
		BigNumber_t753465967  L_7 = L_6;
		RuntimeObject * L_8 = Box(BigNumber_t753465967_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_9 = Convert_ToString_m2219349533(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614533, L_9, /*hidden argument*/NULL);
		GameData_t415813024 * L_11 = __this->get_data_4();
		GameObject_t1113636619 * L_12 = L_11->get_printerPopUpLocation_5();
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), (1.2f), (1.2f), (1.2f), /*hidden argument*/NULL);
		UIManager_PopUpNumbers_m468699646(L_3, L_4, L_10, L_12, L_13, /*hidden argument*/NULL);
		UIManager_t1042050227 * L_14 = __this->get_ui_2();
		UIManager_UpdateUI_m743122523(L_14, /*hidden argument*/NULL);
		MilestoneUnlocks_t2290314618 * L_15 = __this->get_unlocks_5();
		MilestoneUnlocks_MileStoneCheck_m470977986(L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventManager::AttemptInvestmentPurchase()
extern "C"  void EventManager_AttemptInvestmentPurchase_m869314865 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AttemptInvestmentPurchase_m869314865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameNumbers_t3947555191 * L_0 = __this->get_numbers_3();
		BigNumber_t753465967  L_1 = GameNumbers_get_Coins_m4122686468(L_0, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_2 = __this->get_numbers_3();
		BigNumber_t753465967  L_3 = GameNumbers_AutoClickerCost_m300389370(L_2, /*hidden argument*/NULL);
		bool L_4 = BigNumber_op_GreaterThanOrEqual_m680034210(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		GameNumbers_t3947555191 * L_5 = __this->get_numbers_3();
		BigNumber_t753465967  L_6 = __this->get_negative_6();
		GameNumbers_t3947555191 * L_7 = __this->get_numbers_3();
		BigNumber_t753465967  L_8 = GameNumbers_AutoClickerCost_m300389370(L_7, /*hidden argument*/NULL);
		BigNumber_t753465967  L_9 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		GameNumbers_IncreaseCoins_m1673667195(L_5, L_9, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_10 = __this->get_numbers_3();
		GameNumbers_t3947555191 * L_11 = L_10;
		int64_t L_12 = GameNumbers_get_AutoClickers_m3155944230(L_11, /*hidden argument*/NULL);
		GameNumbers_set_AutoClickers_m2830439004(L_11, ((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1))))), /*hidden argument*/NULL);
		UIManager_t1042050227 * L_13 = __this->get_ui_2();
		UIManager_UpdateUI_m743122523(L_13, /*hidden argument*/NULL);
		EventManager_Save_m3943420652(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_006b:
	{
		UIManager_t1042050227 * L_14 = __this->get_ui_2();
		UIManager_UIDisplayMessage_m4231901600(L_14, _stringLiteral3057358206, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void EventManager::AttemptInvestmentUpgrade()
extern "C"  void EventManager_AttemptInvestmentUpgrade_m2600796009 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AttemptInvestmentUpgrade_m2600796009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameNumbers_t3947555191 * L_0 = __this->get_numbers_3();
		BigNumber_t753465967  L_1 = GameNumbers_get_Coins_m4122686468(L_0, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_2 = __this->get_numbers_3();
		BigNumber_t753465967  L_3 = GameNumbers_AutoClickerUpgradeCost_m1121366818(L_2, /*hidden argument*/NULL);
		bool L_4 = BigNumber_op_GreaterThanOrEqual_m680034210(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		GameNumbers_t3947555191 * L_5 = __this->get_numbers_3();
		BigNumber_t753465967  L_6 = __this->get_negative_6();
		GameNumbers_t3947555191 * L_7 = __this->get_numbers_3();
		BigNumber_t753465967  L_8 = GameNumbers_AutoClickerUpgradeCost_m1121366818(L_7, /*hidden argument*/NULL);
		BigNumber_t753465967  L_9 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		GameNumbers_IncreaseCoins_m1673667195(L_5, L_9, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_10 = __this->get_numbers_3();
		GameNumbers_t3947555191 * L_11 = L_10;
		int64_t L_12 = GameNumbers_get_AutoClickerUpgradeLevel_m3955757932(L_11, /*hidden argument*/NULL);
		GameNumbers_set_AutoClickerUpgradeLevel_m332107850(L_11, ((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1))))), /*hidden argument*/NULL);
		UIManager_t1042050227 * L_13 = __this->get_ui_2();
		UIManager_UpdateUI_m743122523(L_13, /*hidden argument*/NULL);
		EventManager_Save_m3943420652(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_006b:
	{
		UIManager_t1042050227 * L_14 = __this->get_ui_2();
		UIManager_UIDisplayMessage_m4231901600(L_14, _stringLiteral4182693947, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void EventManager::AttemptClickUpgrade()
extern "C"  void EventManager_AttemptClickUpgrade_m1393089994 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AttemptClickUpgrade_m1393089994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameNumbers_t3947555191 * L_0 = __this->get_numbers_3();
		BigNumber_t753465967  L_1 = GameNumbers_get_Coins_m4122686468(L_0, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_2 = __this->get_numbers_3();
		BigNumber_t753465967  L_3 = GameNumbers_PrinterUpgradeCost_m2950495310(L_2, /*hidden argument*/NULL);
		bool L_4 = BigNumber_op_GreaterThanOrEqual_m680034210(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		GameNumbers_t3947555191 * L_5 = __this->get_numbers_3();
		BigNumber_t753465967  L_6 = __this->get_negative_6();
		GameNumbers_t3947555191 * L_7 = __this->get_numbers_3();
		BigNumber_t753465967  L_8 = GameNumbers_PrinterUpgradeCost_m2950495310(L_7, /*hidden argument*/NULL);
		BigNumber_t753465967  L_9 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		GameNumbers_IncreaseCoins_m1673667195(L_5, L_9, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_10 = __this->get_numbers_3();
		GameNumbers_t3947555191 * L_11 = L_10;
		int64_t L_12 = GameNumbers_get_PrinterUpgradeLevel_m2263168015(L_11, /*hidden argument*/NULL);
		GameNumbers_set_PrinterUpgradeLevel_m1312834146(L_11, ((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1))))), /*hidden argument*/NULL);
		UIManager_t1042050227 * L_13 = __this->get_ui_2();
		UIManager_UpdateUI_m743122523(L_13, /*hidden argument*/NULL);
		EventManager_Save_m3943420652(__this, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_006b:
	{
		UIManager_t1042050227 * L_14 = __this->get_ui_2();
		UIManager_UIDisplayMessage_m4231901600(L_14, _stringLiteral980261671, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Collections.IEnumerator EventManager::AutoClickerCycle()
extern "C"  RuntimeObject* EventManager_AutoClickerCycle_m3870092009 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AutoClickerCycle_m3870092009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * V_0 = NULL;
	{
		U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * L_0 = (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 *)il2cpp_codegen_object_new(U3CAutoClickerCycleU3Ec__Iterator0_t1114662071_il2cpp_TypeInfo_var);
		U3CAutoClickerCycleU3Ec__Iterator0__ctor_m3080331803(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * L_2 = V_0;
		return L_2;
	}
}
// System.Void EventManager::MenuA()
extern "C"  void EventManager_MenuA_m3071923437 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	{
		UIManager_t1042050227 * L_0 = __this->get_ui_2();
		UIManager_UISwitch_m2642155203(L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventManager::MenuB()
extern "C"  void EventManager_MenuB_m3475207964 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	{
		UIManager_t1042050227 * L_0 = __this->get_ui_2();
		UIManager_UISwitch_m2642155203(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventManager::Update()
extern "C"  void EventManager_Update_m4111839 (EventManager_t1594656820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_Update_m4111839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigNumber_t753465967  V_0;
	memset(&V_0, 0, sizeof(V_0));
	BigNumber_t753465967  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3540340899, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_008e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral3452614607, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		MilestoneUnlocks_t2290314618 * L_2 = __this->get_unlocks_5();
		BooleanU5BU5D_t2897418192* L_3 = L_2->get_mileStonesAchieved_6();
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		EventManager_AttemptInvestmentPurchase_m869314865(__this, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral3452614601, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		MilestoneUnlocks_t2290314618 * L_7 = __this->get_unlocks_5();
		BooleanU5BU5D_t2897418192* L_8 = L_7->get_mileStonesAchieved_6();
		int32_t L_9 = 1;
		uint8_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		EventManager_AttemptInvestmentUpgrade_m2600796009(__this, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral3452614587, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		MilestoneUnlocks_t2290314618 * L_12 = __this->get_unlocks_5();
		BooleanU5BU5D_t2897418192* L_13 = L_12->get_mileStonesAchieved_6();
		int32_t L_14 = 2;
		uint8_t L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if (!L_15)
		{
			goto IL_008e;
		}
	}
	{
		EventManager_AttemptClickUpgrade_m1393089994(__this, /*hidden argument*/NULL);
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614608, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614593, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0102;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_18 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614599, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0102;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral1613539661, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0102;
		}
	}
	{
		GameNumbers_t3947555191 * L_20 = __this->get_numbers_3();
		GameNumbers_t3947555191 * L_21 = __this->get_numbers_3();
		BigNumber_t753465967  L_22 = GameNumbers_get_Coins_m4122686468(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		double L_23 = (&V_0)->get_Mantissa_0();
		GameNumbers_t3947555191 * L_24 = __this->get_numbers_3();
		BigNumber_t753465967  L_25 = GameNumbers_get_Coins_m4122686468(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		int32_t L_26 = (&V_1)->get_Exponent_1();
		BigNumber_t753465967  L_27;
		memset(&L_27, 0, sizeof(L_27));
		BigNumber__ctor_m229586297((&L_27), L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)), /*hidden argument*/NULL);
		GameNumbers_set_Coins_m626392107(L_20, L_27, /*hidden argument*/NULL);
	}

IL_0102:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_28 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614598, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0143;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_29 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614597, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0143;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_30 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614596, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0143;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_31 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral1613539661, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0143;
		}
	}
	{
		PlayerPrefs_DeleteAll_m610653455(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0143:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EventManager/<AutoClickerCycle>c__Iterator0::.ctor()
extern "C"  void U3CAutoClickerCycleU3Ec__Iterator0__ctor_m3080331803 (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EventManager/<AutoClickerCycle>c__Iterator0::MoveNext()
extern "C"  bool U3CAutoClickerCycleU3Ec__Iterator0_MoveNext_m633355799 (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAutoClickerCycleU3Ec__Iterator0_MoveNext_m633355799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0112;
			}
			case 2:
			{
				goto IL_015d;
			}
			case 3:
			{
				goto IL_0191;
			}
		}
	}
	{
		goto IL_019d;
	}

IL_0029:
	{
		EventManager_t1594656820 * L_2 = __this->get_U24this_0();
		GameNumbers_t3947555191 * L_3 = L_2->get_numbers_3();
		int64_t L_4 = GameNumbers_get_AutoClickers_m3155944230(L_3, /*hidden argument*/NULL);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0162;
		}
	}
	{
		EventManager_t1594656820 * L_5 = __this->get_U24this_0();
		GameNumbers_t3947555191 * L_6 = L_5->get_numbers_3();
		EventManager_t1594656820 * L_7 = __this->get_U24this_0();
		GameNumbers_t3947555191 * L_8 = L_7->get_numbers_3();
		BigNumber_t753465967  L_9 = GameNumbers_PassiveIncomePerTick_m3369419454(L_8, /*hidden argument*/NULL);
		GameNumbers_IncreaseCoins_m1673667195(L_6, L_9, /*hidden argument*/NULL);
		EventManager_t1594656820 * L_10 = __this->get_U24this_0();
		UIManager_t1042050227 * L_11 = L_10->get_ui_2();
		UIManager_UpdateUI_m743122523(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1980011667, /*hidden argument*/NULL);
		EventManager_t1594656820 * L_12 = __this->get_U24this_0();
		UIManager_t1042050227 * L_13 = L_12->get_ui_2();
		Color_t2555686324  L_14 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		EventManager_t1594656820 * L_15 = __this->get_U24this_0();
		GameNumbers_t3947555191 * L_16 = L_15->get_numbers_3();
		BigNumber_t753465967  L_17 = GameNumbers_PassiveIncomePerTick_m3369419454(L_16, /*hidden argument*/NULL);
		BigNumber_t753465967  L_18 = L_17;
		RuntimeObject * L_19 = Box(BigNumber_t753465967_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_20 = Convert_ToString_m2219349533(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		EventManager_t1594656820 * L_21 = __this->get_U24this_0();
		GameData_t415813024 * L_22 = L_21->get_data_4();
		GameObject_t1113636619 * L_23 = L_22->get_bankPopUpLocation_7();
		Vector3_t3722313464  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector3__ctor_m3353183577((&L_24), (1.3f), (1.3f), (1.3f), /*hidden argument*/NULL);
		UIManager_PopUpNumbers_m468699646(L_13, L_14, L_20, L_23, L_24, /*hidden argument*/NULL);
		EventManager_t1594656820 * L_25 = __this->get_U24this_0();
		UIManager_t1042050227 * L_26 = L_25->get_ui_2();
		UIManager_BankEnlarge_m1627368452(L_26, /*hidden argument*/NULL);
		EventManager_t1594656820 * L_27 = __this->get_U24this_0();
		GameData_t415813024 * L_28 = L_27->get_data_4();
		float L_29 = L_28->get_tickSpeed_11();
		WaitForSeconds_t1699091251 * L_30 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_30, ((float)((float)L_29/(float)(5.0f))), /*hidden argument*/NULL);
		__this->set_U24current_1(L_30);
		bool L_31 = __this->get_U24disposing_2();
		if (L_31)
		{
			goto IL_010d;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_010d:
	{
		goto IL_019f;
	}

IL_0112:
	{
		EventManager_t1594656820 * L_32 = __this->get_U24this_0();
		UIManager_t1042050227 * L_33 = L_32->get_ui_2();
		UIManager_BankShrink_m888614235(L_33, /*hidden argument*/NULL);
		EventManager_t1594656820 * L_34 = __this->get_U24this_0();
		GameData_t415813024 * L_35 = L_34->get_data_4();
		float L_36 = L_35->get_tickSpeed_11();
		WaitForSeconds_t1699091251 * L_37 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_37, ((float)il2cpp_codegen_multiply((float)(4.0f), (float)((float)((float)L_36/(float)(5.0f))))), /*hidden argument*/NULL);
		__this->set_U24current_1(L_37);
		bool L_38 = __this->get_U24disposing_2();
		if (L_38)
		{
			goto IL_0158;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_0158:
	{
		goto IL_019f;
	}

IL_015d:
	{
		goto IL_0191;
	}

IL_0162:
	{
		EventManager_t1594656820 * L_39 = __this->get_U24this_0();
		GameData_t415813024 * L_40 = L_39->get_data_4();
		float L_41 = L_40->get_tickSpeed_11();
		WaitForSeconds_t1699091251 * L_42 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_42, L_41, /*hidden argument*/NULL);
		__this->set_U24current_1(L_42);
		bool L_43 = __this->get_U24disposing_2();
		if (L_43)
		{
			goto IL_018c;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_018c:
	{
		goto IL_019f;
	}

IL_0191:
	{
		goto IL_0029;
	}
	// Dead block : IL_0196: ldarg.0

IL_019d:
	{
		return (bool)0;
	}

IL_019f:
	{
		return (bool)1;
	}
}
// System.Object EventManager/<AutoClickerCycle>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CAutoClickerCycleU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3583711428 (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object EventManager/<AutoClickerCycle>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CAutoClickerCycleU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3942573920 (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void EventManager/<AutoClickerCycle>c__Iterator0::Dispose()
extern "C"  void U3CAutoClickerCycleU3Ec__Iterator0_Dispose_m50001468 (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void EventManager/<AutoClickerCycle>c__Iterator0::Reset()
extern "C"  void U3CAutoClickerCycleU3Ec__Iterator0_Reset_m3200201227 (U3CAutoClickerCycleU3Ec__Iterator0_t1114662071 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAutoClickerCycleU3Ec__Iterator0_Reset_m3200201227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameData::.ctor()
extern "C"  void GameData__ctor_m2603107766 (GameData_t415813024 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameNumbers::.ctor()
extern "C"  void GameNumbers__ctor_m2818599690 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	{
		BigNumber_t753465967  L_0;
		memset(&L_0, 0, sizeof(L_0));
		BigNumber__ctor_m229586297((&L_0), (1.0), 0, /*hidden argument*/NULL);
		__this->set_coins_2(L_0);
		__this->set_printerUpgradeLevel_3((((int64_t)((int64_t)1))));
		__this->set_autoClickerUpgradeLevel_4((((int64_t)((int64_t)1))));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameNumbers/BigNumber GameNumbers::get_Coins()
extern "C"  BigNumber_t753465967  GameNumbers_get_Coins_m4122686468 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	{
		BigNumber_t753465967  L_0 = __this->get_coins_2();
		return L_0;
	}
}
// System.Void GameNumbers::set_Coins(GameNumbers/BigNumber)
extern "C"  void GameNumbers_set_Coins_m626392107 (GameNumbers_t3947555191 * __this, BigNumber_t753465967  ___value0, const RuntimeMethod* method)
{
	{
		BigNumber_t753465967  L_0 = ___value0;
		__this->set_coins_2(L_0);
		return;
	}
}
// System.Int64 GameNumbers::get_PrinterUpgradeLevel()
extern "C"  int64_t GameNumbers_get_PrinterUpgradeLevel_m2263168015 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_printerUpgradeLevel_3();
		return L_0;
	}
}
// System.Void GameNumbers::set_PrinterUpgradeLevel(System.Int64)
extern "C"  void GameNumbers_set_PrinterUpgradeLevel_m1312834146 (GameNumbers_t3947555191 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_printerUpgradeLevel_3(L_0);
		return;
	}
}
// System.Int64 GameNumbers::get_AutoClickerUpgradeLevel()
extern "C"  int64_t GameNumbers_get_AutoClickerUpgradeLevel_m3955757932 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_autoClickerUpgradeLevel_4();
		return L_0;
	}
}
// System.Void GameNumbers::set_AutoClickerUpgradeLevel(System.Int64)
extern "C"  void GameNumbers_set_AutoClickerUpgradeLevel_m332107850 (GameNumbers_t3947555191 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_autoClickerUpgradeLevel_4(L_0);
		return;
	}
}
// System.Int64 GameNumbers::get_AutoClickers()
extern "C"  int64_t GameNumbers_get_AutoClickers_m3155944230 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_autoClickers_5();
		return L_0;
	}
}
// System.Void GameNumbers::set_AutoClickers(System.Int64)
extern "C"  void GameNumbers_set_AutoClickers_m2830439004 (GameNumbers_t3947555191 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_autoClickers_5(L_0);
		return;
	}
}
// System.Void GameNumbers::Awake()
extern "C"  void GameNumbers_Awake_m4275938482 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameNumbers_Awake_m4275938482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t2225540709 * L_0 = (List_1_t2225540709 *)il2cpp_codegen_object_new(List_1_t2225540709_il2cpp_TypeInfo_var);
		List_1__ctor_m2939194936(L_0, /*hidden argument*/List_1__ctor_m2939194936_RuntimeMethod_var);
		__this->set_printerUpgradeCosts_6(L_0);
		List_1_t2225540709 * L_1 = (List_1_t2225540709 *)il2cpp_codegen_object_new(List_1_t2225540709_il2cpp_TypeInfo_var);
		List_1__ctor_m2939194936(L_1, /*hidden argument*/List_1__ctor_m2939194936_RuntimeMethod_var);
		__this->set_autoClickerUpgradeCosts_7(L_1);
		List_1_t2225540709 * L_2 = (List_1_t2225540709 *)il2cpp_codegen_object_new(List_1_t2225540709_il2cpp_TypeInfo_var);
		List_1__ctor_m2939194936(L_2, /*hidden argument*/List_1__ctor_m2939194936_RuntimeMethod_var);
		__this->set_autoClickerCosts_8(L_2);
		List_1_t2225540709 * L_3 = (List_1_t2225540709 *)il2cpp_codegen_object_new(List_1_t2225540709_il2cpp_TypeInfo_var);
		List_1__ctor_m2939194936(L_3, /*hidden argument*/List_1__ctor_m2939194936_RuntimeMethod_var);
		__this->set_printerUpgradeModifiers_9(L_3);
		List_1_t2225540709 * L_4 = (List_1_t2225540709 *)il2cpp_codegen_object_new(List_1_t2225540709_il2cpp_TypeInfo_var);
		List_1__ctor_m2939194936(L_4, /*hidden argument*/List_1__ctor_m2939194936_RuntimeMethod_var);
		__this->set_autoClickerUpgradeModifiers_10(L_4);
		List_1_t2225540709 * L_5 = __this->get_printerUpgradeCosts_6();
		BigNumber_t753465967  L_6;
		memset(&L_6, 0, sizeof(L_6));
		BigNumber__ctor_m229586297((&L_6), (500.0), 0, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_5, L_6, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_7 = __this->get_printerUpgradeModifiers_9();
		BigNumber_t753465967  L_8;
		memset(&L_8, 0, sizeof(L_8));
		BigNumber__ctor_m229586297((&L_8), (1.0), 0, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_7, L_8, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_9 = __this->get_autoClickerUpgradeCosts_7();
		BigNumber_t753465967  L_10;
		memset(&L_10, 0, sizeof(L_10));
		BigNumber__ctor_m229586297((&L_10), (100.0), 0, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_9, L_10, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_11 = __this->get_autoClickerUpgradeModifiers_10();
		BigNumber_t753465967  L_12;
		memset(&L_12, 0, sizeof(L_12));
		BigNumber__ctor_m229586297((&L_12), (1.0), 0, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_11, L_12, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_13 = __this->get_autoClickerCosts_8();
		BigNumber_t753465967  L_14;
		memset(&L_14, 0, sizeof(L_14));
		BigNumber__ctor_m229586297((&L_14), (50.0), 0, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_13, L_14, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		V_0 = 1;
		goto IL_00cb;
	}

IL_00c0:
	{
		int32_t L_15 = V_0;
		GameNumbers_UpdateLists_m2156975283(__this, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_00cb:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)1000))))
		{
			goto IL_00c0;
		}
	}
	{
		return;
	}
}
// System.Void GameNumbers::UpdateLists(System.Int32)
extern "C"  void GameNumbers_UpdateLists_m2156975283 (GameNumbers_t3947555191 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameNumbers_UpdateLists_m2156975283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2225540709 * L_0 = __this->get_printerUpgradeCosts_6();
		List_1_t2225540709 * L_1 = __this->get_printerUpgradeCosts_6();
		int32_t L_2 = ___i0;
		BigNumber_t753465967  L_3 = List_1_get_Item_m4077889869(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		BigNumber_t753465967  L_4;
		memset(&L_4, 0, sizeof(L_4));
		BigNumber__ctor_m229586297((&L_4), (10.0), 0, /*hidden argument*/NULL);
		BigNumber_t753465967  L_5 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_0, L_5, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_6 = __this->get_autoClickerUpgradeCosts_7();
		List_1_t2225540709 * L_7 = __this->get_autoClickerUpgradeCosts_7();
		int32_t L_8 = ___i0;
		BigNumber_t753465967  L_9 = List_1_get_Item_m4077889869(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		BigNumber_t753465967  L_10;
		memset(&L_10, 0, sizeof(L_10));
		BigNumber__ctor_m229586297((&L_10), (2.5), 0, /*hidden argument*/NULL);
		BigNumber_t753465967  L_11 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_6, L_11, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_12 = __this->get_autoClickerCosts_8();
		List_1_t2225540709 * L_13 = __this->get_autoClickerCosts_8();
		int32_t L_14 = ___i0;
		BigNumber_t753465967  L_15 = List_1_get_Item_m4077889869(L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		BigNumber_t753465967  L_16;
		memset(&L_16, 0, sizeof(L_16));
		BigNumber__ctor_m229586297((&L_16), (1.5), 0, /*hidden argument*/NULL);
		BigNumber_t753465967  L_17 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_12, L_17, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_18 = __this->get_printerUpgradeModifiers_9();
		List_1_t2225540709 * L_19 = __this->get_printerUpgradeModifiers_9();
		int32_t L_20 = ___i0;
		BigNumber_t753465967  L_21 = List_1_get_Item_m4077889869(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		BigNumber_t753465967  L_22;
		memset(&L_22, 0, sizeof(L_22));
		BigNumber__ctor_m229586297((&L_22), (5.0), 0, /*hidden argument*/NULL);
		BigNumber_t753465967  L_23 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_18, L_23, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		List_1_t2225540709 * L_24 = __this->get_autoClickerUpgradeModifiers_10();
		List_1_t2225540709 * L_25 = __this->get_autoClickerUpgradeModifiers_10();
		int32_t L_26 = ___i0;
		BigNumber_t753465967  L_27 = List_1_get_Item_m4077889869(L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		BigNumber_t753465967  L_28;
		memset(&L_28, 0, sizeof(L_28));
		BigNumber__ctor_m229586297((&L_28), (1.5), 0, /*hidden argument*/NULL);
		BigNumber_t753465967  L_29 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		List_1_Add_m3743742916(L_24, L_29, /*hidden argument*/List_1_Add_m3743742916_RuntimeMethod_var);
		return;
	}
}
// System.Void GameNumbers::IncreaseCoins(GameNumbers/BigNumber)
extern "C"  void GameNumbers_IncreaseCoins_m1673667195 (GameNumbers_t3947555191 * __this, BigNumber_t753465967  ___coinIncrease0, const RuntimeMethod* method)
{
	{
		BigNumber_t753465967  L_0 = __this->get_coins_2();
		BigNumber_t753465967  L_1 = ___coinIncrease0;
		BigNumber_t753465967  L_2 = BigNumber_op_Addition_m1952083633(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_coins_2(L_2);
		return;
	}
}
// GameNumbers/BigNumber GameNumbers::CoinClickValue()
extern "C"  BigNumber_t753465967  GameNumbers_CoinClickValue_m3164705727 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameNumbers_CoinClickValue_m3164705727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2225540709 * L_0 = __this->get_printerUpgradeModifiers_9();
		int64_t L_1 = __this->get_printerUpgradeLevel_3();
		BigNumber_t753465967  L_2 = List_1_get_Item_m4077889869(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_1))), (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		return L_2;
	}
}
// GameNumbers/BigNumber GameNumbers::PrinterUpgradeCost()
extern "C"  BigNumber_t753465967  GameNumbers_PrinterUpgradeCost_m2950495310 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameNumbers_PrinterUpgradeCost_m2950495310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2225540709 * L_0 = __this->get_printerUpgradeCosts_6();
		int64_t L_1 = __this->get_printerUpgradeLevel_3();
		BigNumber_t753465967  L_2 = List_1_get_Item_m4077889869(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_1))), (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		return L_2;
	}
}
// GameNumbers/BigNumber GameNumbers::AutoClickerUpgradeCost()
extern "C"  BigNumber_t753465967  GameNumbers_AutoClickerUpgradeCost_m1121366818 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameNumbers_AutoClickerUpgradeCost_m1121366818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2225540709 * L_0 = __this->get_autoClickerUpgradeCosts_7();
		int64_t L_1 = __this->get_autoClickerUpgradeLevel_4();
		BigNumber_t753465967  L_2 = List_1_get_Item_m4077889869(L_0, (((int32_t)((int32_t)L_1))), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		return L_2;
	}
}
// GameNumbers/BigNumber GameNumbers::AutoClickerCost()
extern "C"  BigNumber_t753465967  GameNumbers_AutoClickerCost_m300389370 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameNumbers_AutoClickerCost_m300389370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2225540709 * L_0 = __this->get_autoClickerCosts_8();
		int64_t L_1 = __this->get_autoClickers_5();
		BigNumber_t753465967  L_2 = List_1_get_Item_m4077889869(L_0, (((int32_t)((int32_t)L_1))), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		return L_2;
	}
}
// GameNumbers/BigNumber GameNumbers::PassiveIncomePerTick()
extern "C"  BigNumber_t753465967  GameNumbers_PassiveIncomePerTick_m3369419454 (GameNumbers_t3947555191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameNumbers_PassiveIncomePerTick_m3369419454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameData_t415813024 * L_1 = GameObject_GetComponent_TisGameData_t415813024_m3595909835(L_0, /*hidden argument*/GameObject_GetComponent_TisGameData_t415813024_m3595909835_RuntimeMethod_var);
		float L_2 = L_1->get_tickFactor_12();
		BigNumber_t753465967  L_3;
		memset(&L_3, 0, sizeof(L_3));
		BigNumber__ctor_m229586297((&L_3), (((double)((double)L_2))), 0, /*hidden argument*/NULL);
		int64_t L_4 = __this->get_autoClickers_5();
		BigNumber_t753465967  L_5;
		memset(&L_5, 0, sizeof(L_5));
		BigNumber__ctor_m229586297((&L_5), (((double)((double)L_4))), 0, /*hidden argument*/NULL);
		BigNumber_t753465967  L_6 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		List_1_t2225540709 * L_7 = __this->get_autoClickerUpgradeModifiers_10();
		int64_t L_8 = __this->get_autoClickerUpgradeLevel_4();
		BigNumber_t753465967  L_9 = List_1_get_Item_m4077889869(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_8))), (int32_t)1)), /*hidden argument*/List_1_get_Item_m4077889869_RuntimeMethod_var);
		BigNumber_t753465967  L_10 = BigNumber_op_Multiply_m1218073065(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameNumbers/BigNumber::.ctor(System.Double,System.Int32)
extern "C"  void BigNumber__ctor_m229586297 (BigNumber_t753465967 * __this, double ___m0, int32_t ___e1, const RuntimeMethod* method)
{
	{
		double L_0 = ___m0;
		__this->set_Mantissa_0(L_0);
		int32_t L_1 = ___e1;
		__this->set_Exponent_1(L_1);
		return;
	}
}
extern "C"  void BigNumber__ctor_m229586297_AdjustorThunk (RuntimeObject * __this, double ___m0, int32_t ___e1, const RuntimeMethod* method)
{
	BigNumber_t753465967 * _thisAdjusted = reinterpret_cast<BigNumber_t753465967 *>(__this + 1);
	BigNumber__ctor_m229586297(_thisAdjusted, ___m0, ___e1, method);
}
// GameNumbers/BigNumber GameNumbers/BigNumber::op_Addition(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  BigNumber_t753465967  BigNumber_op_Addition_m1952083633 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	{
		int32_t L_0 = (&___n21)->get_Exponent_1();
		int32_t L_1 = (&___n10)->get_Exponent_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		double L_2 = (&___n21)->get_Mantissa_0();
		int32_t L_3 = V_0;
		double L_4 = pow((10.0), (((double)((double)L_3))));
		V_1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_4));
		BigNumber_t753465967 * L_5 = (&___n10);
		double L_6 = L_5->get_Mantissa_0();
		double L_7 = V_1;
		L_5->set_Mantissa_0(((double)il2cpp_codegen_add((double)L_6, (double)L_7)));
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_t753465967  L_8 = ___n10;
		return L_8;
	}
}
// GameNumbers/BigNumber GameNumbers/BigNumber::op_Subtraction(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  BigNumber_t753465967  BigNumber_op_Subtraction_m434432938 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	{
		int32_t L_0 = (&___n21)->get_Exponent_1();
		int32_t L_1 = (&___n10)->get_Exponent_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		double L_2 = (&___n21)->get_Mantissa_0();
		int32_t L_3 = V_0;
		double L_4 = pow((10.0), (((double)((double)L_3))));
		V_1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_4));
		BigNumber_t753465967 * L_5 = (&___n10);
		double L_6 = L_5->get_Mantissa_0();
		double L_7 = V_1;
		L_5->set_Mantissa_0(((double)il2cpp_codegen_subtract((double)L_6, (double)L_7)));
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_t753465967  L_8 = ___n10;
		return L_8;
	}
}
// GameNumbers/BigNumber GameNumbers/BigNumber::op_Multiply(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  BigNumber_t753465967  BigNumber_op_Multiply_m1218073065 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	{
		int32_t L_0 = (&___n21)->get_Exponent_1();
		int32_t L_1 = (&___n10)->get_Exponent_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		double L_2 = (&___n21)->get_Mantissa_0();
		double L_3 = (&___n10)->get_Mantissa_0();
		V_1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_3));
		goto IL_0035;
	}

IL_0025:
	{
		double L_4 = V_1;
		V_1 = ((double)((double)L_4/(double)(10.0)));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0035:
	{
		double L_6 = V_1;
		if ((((double)L_6) >= ((double)(10.0))))
		{
			goto IL_0025;
		}
	}
	{
		double L_7 = V_1;
		(&___n10)->set_Mantissa_0(L_7);
		int32_t L_8 = V_0;
		(&___n10)->set_Exponent_1(L_8);
		BigNumber_t753465967  L_9 = ___n10;
		return L_9;
	}
}
// GameNumbers/BigNumber GameNumbers/BigNumber::op_Division(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  BigNumber_t753465967  BigNumber_op_Division_m1896930481 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	{
		int32_t L_0 = (&___n10)->get_Exponent_1();
		int32_t L_1 = (&___n21)->get_Exponent_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		double L_2 = (&___n10)->get_Mantissa_0();
		double L_3 = (&___n21)->get_Mantissa_0();
		V_1 = ((double)((double)L_2/(double)L_3));
		goto IL_0035;
	}

IL_0025:
	{
		double L_4 = V_1;
		V_1 = ((double)il2cpp_codegen_multiply((double)L_4, (double)(10.0)));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
	}

IL_0035:
	{
		double L_6 = V_1;
		if ((((double)L_6) < ((double)(1.0))))
		{
			goto IL_0025;
		}
	}
	{
		double L_7 = V_1;
		(&___n10)->set_Mantissa_0(L_7);
		int32_t L_8 = V_0;
		(&___n10)->set_Exponent_1(L_8);
		BigNumber_t753465967  L_9 = ___n10;
		return L_9;
	}
}
// System.Boolean GameNumbers/BigNumber::op_GreaterThan(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_GreaterThan_m3330324401 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	{
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_Calculate_m2424218829((&___n21), /*hidden argument*/NULL);
		int32_t L_0 = (&___n10)->get_Exponent_1();
		int32_t L_1 = (&___n21)->get_Exponent_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0032;
		}
	}
	{
		double L_2 = (&___n10)->get_Mantissa_0();
		double L_3 = (&___n21)->get_Mantissa_0();
		return (bool)((((double)L_2) > ((double)L_3))? 1 : 0);
	}

IL_0032:
	{
		int32_t L_4 = (&___n10)->get_Exponent_1();
		int32_t L_5 = (&___n21)->get_Exponent_1();
		return (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
	}
}
// System.Boolean GameNumbers/BigNumber::op_LessThan(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_LessThan_m24313857 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	{
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_Calculate_m2424218829((&___n21), /*hidden argument*/NULL);
		int32_t L_0 = (&___n10)->get_Exponent_1();
		int32_t L_1 = (&___n21)->get_Exponent_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0032;
		}
	}
	{
		double L_2 = (&___n10)->get_Mantissa_0();
		double L_3 = (&___n21)->get_Mantissa_0();
		return (bool)((((double)L_2) < ((double)L_3))? 1 : 0);
	}

IL_0032:
	{
		int32_t L_4 = (&___n10)->get_Exponent_1();
		int32_t L_5 = (&___n21)->get_Exponent_1();
		return (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
// System.Boolean GameNumbers/BigNumber::op_Equality(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_Equality_m3937038242 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_Calculate_m2424218829((&___n21), /*hidden argument*/NULL);
		double L_0 = (&___n10)->get_Mantissa_0();
		double L_1 = (&___n21)->get_Mantissa_0();
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = (&___n10)->get_Exponent_1();
		int32_t L_3 = (&___n21)->get_Exponent_1();
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean GameNumbers/BigNumber::op_Inequality(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_Inequality_m281585325 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_Calculate_m2424218829((&___n21), /*hidden argument*/NULL);
		double L_0 = (&___n10)->get_Mantissa_0();
		double L_1 = (&___n21)->get_Mantissa_0();
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = (&___n10)->get_Exponent_1();
		int32_t L_3 = (&___n21)->get_Exponent_1();
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		return (bool)((((int32_t)G_B3_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GameNumbers/BigNumber::op_GreaterThanOrEqual(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_GreaterThanOrEqual_m680034210 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_Calculate_m2424218829((&___n21), /*hidden argument*/NULL);
		BigNumber_t753465967  L_0 = ___n10;
		BigNumber_t753465967  L_1 = ___n21;
		bool L_2 = BigNumber_op_GreaterThan_m3330324401(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		BigNumber_t753465967  L_3 = ___n10;
		BigNumber_t753465967  L_4 = ___n21;
		bool L_5 = BigNumber_op_Equality_m3937038242(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean GameNumbers/BigNumber::op_LessThanOrEqual(GameNumbers/BigNumber,GameNumbers/BigNumber)
extern "C"  bool BigNumber_op_LessThanOrEqual_m1662971389 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, BigNumber_t753465967  ___n21, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		BigNumber_Calculate_m2424218829((&___n10), /*hidden argument*/NULL);
		BigNumber_Calculate_m2424218829((&___n21), /*hidden argument*/NULL);
		BigNumber_t753465967  L_0 = ___n10;
		BigNumber_t753465967  L_1 = ___n21;
		bool L_2 = BigNumber_op_LessThan_m24313857(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		BigNumber_t753465967  L_3 = ___n10;
		BigNumber_t753465967  L_4 = ___n21;
		bool L_5 = BigNumber_op_Equality_m3937038242(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean GameNumbers/BigNumber::op_GreaterThan(GameNumbers/BigNumber,System.Int64)
extern "C"  bool BigNumber_op_GreaterThan_m1865725014 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, int64_t ___n21, const RuntimeMethod* method)
{
	{
		BigNumber_t753465967  L_0 = ___n10;
		int64_t L_1 = ___n21;
		BigNumber_t753465967  L_2;
		memset(&L_2, 0, sizeof(L_2));
		BigNumber__ctor_m229586297((&L_2), (((double)((double)L_1))), 0, /*hidden argument*/NULL);
		bool L_3 = BigNumber_op_GreaterThan_m3330324401(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean GameNumbers/BigNumber::op_LessThan(GameNumbers/BigNumber,System.Int64)
extern "C"  bool BigNumber_op_LessThan_m1067316059 (RuntimeObject * __this /* static, unused */, BigNumber_t753465967  ___n10, int64_t ___n21, const RuntimeMethod* method)
{
	{
		BigNumber_t753465967  L_0 = ___n10;
		int64_t L_1 = ___n21;
		BigNumber_t753465967  L_2;
		memset(&L_2, 0, sizeof(L_2));
		BigNumber__ctor_m229586297((&L_2), (((double)((double)L_1))), 0, /*hidden argument*/NULL);
		bool L_3 = BigNumber_op_LessThan_m24313857(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 GameNumbers/BigNumber::GetHashCode()
extern "C"  int32_t BigNumber_GetHashCode_m351751800 (BigNumber_t753465967 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
extern "C"  int32_t BigNumber_GetHashCode_m351751800_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BigNumber_t753465967 * _thisAdjusted = reinterpret_cast<BigNumber_t753465967 *>(__this + 1);
	return BigNumber_GetHashCode_m351751800(_thisAdjusted, method);
}
// System.Boolean GameNumbers/BigNumber::Equals(System.Object)
extern "C"  bool BigNumber_Equals_m101231124 (BigNumber_t753465967 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigNumber_Equals_m101231124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigNumber_t753465967  L_0 = (*(BigNumber_t753465967 *)__this);
		RuntimeObject * L_1 = Box(BigNumber_t753465967_il2cpp_TypeInfo_var, &L_0);
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = ValueType_Equals_m1524437845((ValueType_t3640485471 *)L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  bool BigNumber_Equals_m101231124_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	BigNumber_t753465967 * _thisAdjusted = reinterpret_cast<BigNumber_t753465967 *>(__this + 1);
	return BigNumber_Equals_m101231124(_thisAdjusted, ___obj0, method);
}
// System.Void GameNumbers/BigNumber::Calculate()
extern "C"  void BigNumber_Calculate_m2424218829 (BigNumber_t753465967 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		double L_0 = __this->get_Mantissa_0();
		if ((((double)L_0) >= ((double)(10.0))))
		{
			goto IL_0028;
		}
	}
	{
		double L_1 = __this->get_Mantissa_0();
		if ((!(((double)L_1) < ((double)(1.0)))))
		{
			goto IL_0065;
		}
	}

IL_0028:
	{
		double L_2 = __this->get_Mantissa_0();
		double L_3 = log10(L_2);
		double L_4 = floor(L_3);
		V_0 = (((int32_t)((int32_t)L_4)));
		double L_5 = __this->get_Mantissa_0();
		int32_t L_6 = V_0;
		double L_7 = pow((10.0), (((double)((double)L_6))));
		__this->set_Mantissa_0(((double)((double)L_5/(double)L_7)));
		int32_t L_8 = __this->get_Exponent_1();
		int32_t L_9 = V_0;
		__this->set_Exponent_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
	}

IL_0065:
	{
		return;
	}
}
extern "C"  void BigNumber_Calculate_m2424218829_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BigNumber_t753465967 * _thisAdjusted = reinterpret_cast<BigNumber_t753465967 *>(__this + 1);
	BigNumber_Calculate_m2424218829(_thisAdjusted, method);
}
// System.String GameNumbers/BigNumber::ToString()
extern "C"  String_t* BigNumber_ToString_m550545267 (BigNumber_t753465967 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		BigNumber_Calculate_m2424218829(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_Exponent_1();
		if ((((int32_t)L_0) >= ((int32_t)6)))
		{
			goto IL_003e;
		}
	}
	{
		double L_1 = __this->get_Mantissa_0();
		int32_t L_2 = __this->get_Exponent_1();
		double L_3 = pow((10.0), (((double)((double)L_2))));
		V_0 = (((int64_t)((int64_t)((double)il2cpp_codegen_multiply((double)L_1, (double)L_3)))));
		String_t* L_4 = Int64_ToString_m2986581816((&V_0), /*hidden argument*/NULL);
		return L_4;
	}

IL_003e:
	{
		String_t* L_5 = BigNumber_WordFormat_m1372495670(__this, /*hidden argument*/NULL);
		return L_5;
	}
}
extern "C"  String_t* BigNumber_ToString_m550545267_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BigNumber_t753465967 * _thisAdjusted = reinterpret_cast<BigNumber_t753465967 *>(__this + 1);
	return BigNumber_ToString_m550545267(_thisAdjusted, method);
}
// System.String GameNumbers/BigNumber::WordFormat()
extern "C"  String_t* BigNumber_WordFormat_m1372495670 (BigNumber_t753465967 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigNumber_WordFormat_m1372495670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		V_0 = _stringLiteral3920749200;
		int32_t L_0 = __this->get_Exponent_1();
		int32_t L_1 = __this->get_Exponent_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)((int32_t)L_1%(int32_t)3))));
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)6)))
		{
			case 0:
			{
				goto IL_00d1;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_00dc;
			}
		}
	}

IL_002e:
	{
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_00e7;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_00f2;
			}
		}
	}

IL_0047:
	{
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)18))))
		{
			case 0:
			{
				goto IL_00fd;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_0108;
			}
		}
	}

IL_0060:
	{
		int32_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)24))))
		{
			case 0:
			{
				goto IL_0113;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_011e;
			}
		}
	}

IL_0079:
	{
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)30))))
		{
			case 0:
			{
				goto IL_0129;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_0092;
			}
			case 3:
			{
				goto IL_0134;
			}
		}
	}

IL_0092:
	{
		int32_t L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)36))))
		{
			case 0:
			{
				goto IL_013f;
			}
			case 1:
			{
				goto IL_00ab;
			}
			case 2:
			{
				goto IL_00ab;
			}
			case 3:
			{
				goto IL_014a;
			}
		}
	}

IL_00ab:
	{
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)42))))
		{
			case 0:
			{
				goto IL_0155;
			}
			case 1:
			{
				goto IL_00c4;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_0160;
			}
		}
	}

IL_00c4:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)48))))
		{
			goto IL_016b;
		}
	}
	{
		goto IL_0176;
	}

IL_00d1:
	{
		V_0 = _stringLiteral1570259572;
		goto IL_0185;
	}

IL_00dc:
	{
		V_0 = _stringLiteral1570259261;
		goto IL_0185;
	}

IL_00e7:
	{
		V_0 = _stringLiteral1174025436;
		goto IL_0185;
	}

IL_00f2:
	{
		V_0 = _stringLiteral406691620;
		goto IL_0185;
	}

IL_00fd:
	{
		V_0 = _stringLiteral3291287990;
		goto IL_0185;
	}

IL_0108:
	{
		V_0 = _stringLiteral2981278140;
		goto IL_0185;
	}

IL_0113:
	{
		V_0 = _stringLiteral2564438852;
		goto IL_0185;
	}

IL_011e:
	{
		V_0 = _stringLiteral284611025;
		goto IL_0185;
	}

IL_0129:
	{
		V_0 = _stringLiteral1991001404;
		goto IL_0185;
	}

IL_0134:
	{
		V_0 = _stringLiteral1433425195;
		goto IL_0185;
	}

IL_013f:
	{
		V_0 = _stringLiteral1279815885;
		goto IL_0185;
	}

IL_014a:
	{
		V_0 = _stringLiteral3691554557;
		goto IL_0185;
	}

IL_0155:
	{
		V_0 = _stringLiteral1158808139;
		goto IL_0185;
	}

IL_0160:
	{
		V_0 = _stringLiteral2584643162;
		goto IL_0185;
	}

IL_016b:
	{
		V_0 = _stringLiteral1268665080;
		goto IL_0185;
	}

IL_0176:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1983763, /*hidden argument*/NULL);
		goto IL_0185;
	}

IL_0185:
	{
		double L_10 = __this->get_Mantissa_0();
		int32_t L_11 = __this->get_Exponent_1();
		double L_12 = pow((10.0), (((double)((double)((int32_t)((int32_t)L_11%(int32_t)3))))));
		V_2 = ((double)il2cpp_codegen_multiply((double)L_10, (double)L_12));
		int32_t L_13 = __this->get_Exponent_1();
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)2, (int32_t)((int32_t)((int32_t)L_13%(int32_t)3))));
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3452614621, L_15, /*hidden argument*/NULL);
		String_t* L_17 = Double_ToString_m896573572((&V_2), L_16, /*hidden argument*/NULL);
		String_t* L_18 = V_0;
		String_t* L_19 = String_Concat_m3755062657(NULL /*static, unused*/, L_17, _stringLiteral3452614528, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
extern "C"  String_t* BigNumber_WordFormat_m1372495670_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BigNumber_t753465967 * _thisAdjusted = reinterpret_cast<BigNumber_t753465967 *>(__this + 1);
	return BigNumber_WordFormat_m1372495670(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InstructionText::.ctor()
extern "C"  void InstructionText__ctor_m3762184569 (InstructionText_t218659526 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionText::Start()
extern "C"  void InstructionText_Start_m3606700621 (InstructionText_t218659526 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionText_Start_m3606700621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_ToolTip_2();
		Text_t1901882714 * L_1 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_ToolTipText_3(L_1);
		__this->set_printer_4(_stringLiteral3070008118);
		__this->set_upgradePrinter_5(_stringLiteral1790042321);
		__this->set_bank_6(_stringLiteral849678737);
		__this->set_investment_7(_stringLiteral2070493238);
		__this->set_investmentUpgrade_8(_stringLiteral643756830);
		__this->set_blank_9(_stringLiteral2823849160);
		return;
	}
}
// System.Void InstructionText::UpdateText(System.String)
extern "C"  void InstructionText_UpdateText_m1067065194 (InstructionText_t218659526 * __this, String_t* ___newText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionText_UpdateText_m1067065194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___newText0;
		if (!L_0)
		{
			goto IL_00ef;
		}
	}
	{
		String_t* L_1 = ___newText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1399860967, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_3 = ___newText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral3264387483, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_5 = ___newText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral408326418, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_7 = ___newText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, _stringLiteral4287520252, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_9 = ___newText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral704634842, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_11 = ___newText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral395945806, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00ef;
	}

IL_006b:
	{
		Text_t1901882714 * L_13 = __this->get_ToolTipText_3();
		String_t* L_14 = __this->get_printer_4();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
		goto IL_0104;
	}

IL_0081:
	{
		Text_t1901882714 * L_15 = __this->get_ToolTipText_3();
		String_t* L_16 = __this->get_upgradePrinter_5();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_16);
		goto IL_0104;
	}

IL_0097:
	{
		Text_t1901882714 * L_17 = __this->get_ToolTipText_3();
		String_t* L_18 = __this->get_bank_6();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		goto IL_0104;
	}

IL_00ad:
	{
		Text_t1901882714 * L_19 = __this->get_ToolTipText_3();
		String_t* L_20 = __this->get_investment_7();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		goto IL_0104;
	}

IL_00c3:
	{
		Text_t1901882714 * L_21 = __this->get_ToolTipText_3();
		String_t* L_22 = __this->get_investmentUpgrade_8();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		goto IL_0104;
	}

IL_00d9:
	{
		Text_t1901882714 * L_23 = __this->get_ToolTipText_3();
		String_t* L_24 = __this->get_blank_9();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
		goto IL_0104;
	}

IL_00ef:
	{
		String_t* L_25 = ___newText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3306935105, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_0104:
	{
		return;
	}
}
// System.Void InstructionText::HideText()
extern "C"  void InstructionText_HideText_m1019752139 (InstructionText_t218659526 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionText_HideText_m1019752139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InstructionText_UpdateText_m1067065194(__this, _stringLiteral395945806, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MilestoneUnlocks::.ctor()
extern "C"  void MilestoneUnlocks__ctor_m3282864015 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MilestoneUnlocks::Start()
extern "C"  void MilestoneUnlocks_Start_m4126344017 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MilestoneUnlocks_Start_m4126344017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameData_t415813024 * L_1 = GameObject_GetComponent_TisGameData_t415813024_m3595909835(L_0, /*hidden argument*/GameObject_GetComponent_TisGameData_t415813024_m3595909835_RuntimeMethod_var);
		__this->set_data_2(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_3 = GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245(L_2, /*hidden argument*/GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245_RuntimeMethod_var);
		__this->set_numbers_3(L_3);
		GameData_t415813024 * L_4 = __this->get_data_2();
		DoubleU5BU5D_t3413330114* L_5 = L_4->get_mileStones_13();
		__this->set_mileStonesNumbers_5(L_5);
		GameData_t415813024 * L_6 = __this->get_data_2();
		Int32U5BU5D_t385246372* L_7 = L_6->get_mileStoneExponents_14();
		__this->set_mileStoneExponents_4(L_7);
		GameData_t415813024 * L_8 = __this->get_data_2();
		BooleanU5BU5D_t2897418192* L_9 = L_8->get_mileStonesAchieved_15();
		__this->set_mileStonesAchieved_6(L_9);
		GameData_t415813024 * L_10 = __this->get_data_2();
		GameObject_t1113636619 * L_11 = L_10->get_AutoClickPurchaseButton_16();
		__this->set_AutoClickPurchaseButton_8(L_11);
		GameData_t415813024 * L_12 = __this->get_data_2();
		GameObject_t1113636619 * L_13 = L_12->get_bank_6();
		__this->set_Bank_9(L_13);
		GameData_t415813024 * L_14 = __this->get_data_2();
		GameObject_t1113636619 * L_15 = L_14->get_IncomeSecondObject_25();
		__this->set_IncomeSecondObject_10(L_15);
		GameData_t415813024 * L_16 = __this->get_data_2();
		GameObject_t1113636619 * L_17 = L_16->get_AutoClickUpgradeButton_17();
		__this->set_AutoClickUpgradeButton_11(L_17);
		GameData_t415813024 * L_18 = __this->get_data_2();
		GameObject_t1113636619 * L_19 = L_18->get_PrinterUpgradeButton_18();
		__this->set_PrinterUpgradeButton_12(L_19);
		GameData_t415813024 * L_20 = __this->get_data_2();
		GameObject_t1113636619 * L_21 = L_20->get_MenuButton2_27();
		__this->set_PrestigeMenu_13(L_21);
		GameData_t415813024 * L_22 = __this->get_data_2();
		GameObject_t1113636619 * L_23 = L_22->get_Title_2();
		Text_t1901882714 * L_24 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_23, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_TitleText_7(L_24);
		return;
	}
}
// System.Void MilestoneUnlocks::UnlockOne()
extern "C"  void MilestoneUnlocks_UnlockOne_m969447492 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MilestoneUnlocks_UnlockOne_m969447492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_AutoClickPurchaseButton_8();
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_Bank_9();
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_IncomeSecondObject_10();
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_3 = __this->get_TitleText_7();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral2936560303);
		return;
	}
}
// System.Void MilestoneUnlocks::UnlockTwo()
extern "C"  void MilestoneUnlocks_UnlockTwo_m182342349 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MilestoneUnlocks_UnlockTwo_m182342349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_AutoClickUpgradeButton_11();
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_1 = __this->get_TitleText_7();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral3085420508);
		return;
	}
}
// System.Void MilestoneUnlocks::UnlockThree()
extern "C"  void MilestoneUnlocks_UnlockThree_m1368648665 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MilestoneUnlocks_UnlockThree_m1368648665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_PrinterUpgradeButton_12();
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_1 = __this->get_TitleText_7();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral4223359838);
		return;
	}
}
// System.Void MilestoneUnlocks::UnlockFour()
extern "C"  void MilestoneUnlocks_UnlockFour_m2053590922 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MilestoneUnlocks_UnlockFour_m2053590922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_PrestigeMenu_13();
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_1 = __this->get_TitleText_7();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral200762396);
		return;
	}
}
// System.Void MilestoneUnlocks::MileStoneCheck()
extern "C"  void MilestoneUnlocks_MileStoneCheck_m470977986 (MilestoneUnlocks_t2290314618 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0059;
	}

IL_0007:
	{
		BooleanU5BU5D_t2897418192* L_0 = __this->get_mileStonesAchieved_6();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0055;
	}

IL_0019:
	{
		GameNumbers_t3947555191 * L_4 = __this->get_numbers_3();
		BigNumber_t753465967  L_5 = GameNumbers_get_Coins_m4122686468(L_4, /*hidden argument*/NULL);
		DoubleU5BU5D_t3413330114* L_6 = __this->get_mileStonesNumbers_5();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		double L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Int32U5BU5D_t385246372* L_10 = __this->get_mileStoneExponents_4();
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		BigNumber_t753465967  L_14;
		memset(&L_14, 0, sizeof(L_14));
		BigNumber__ctor_m229586297((&L_14), L_9, L_13, /*hidden argument*/NULL);
		bool L_15 = BigNumber_op_GreaterThan_m3330324401(NULL /*static, unused*/, L_5, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_16 = __this->get_mileStonesAchieved_6();
		int32_t L_17 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17), (bool)1);
		int32_t L_18 = V_0;
		MilestoneUnlocks_MileStoneReward_m713621352(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0055:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_20 = V_0;
		DoubleU5BU5D_t3413330114* L_21 = __this->get_mileStonesNumbers_5();
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MilestoneUnlocks::MileStoneReward(System.Int32)
extern "C"  void MilestoneUnlocks_MileStoneReward_m713621352 (MilestoneUnlocks_t2290314618 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MilestoneUnlocks_MileStoneReward_m713621352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___id0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_001d:
	{
		MilestoneUnlocks_UnlockOne_m969447492(__this, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_0028:
	{
		MilestoneUnlocks_UnlockTwo_m182342349(__this, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_0033:
	{
		MilestoneUnlocks_UnlockThree_m1368648665(__this, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_003e:
	{
		MilestoneUnlocks_UnlockFour_m2053590922(__this, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1224767194, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_0058:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SaveHandler::.ctor()
extern "C"  void SaveHandler__ctor_m1774269467 (SaveHandler_t383514785 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SaveHandler::Start()
extern "C"  void SaveHandler_Start_m434300285 (SaveHandler_t383514785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SaveHandler_Start_m434300285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = SaveHandler_SaveExists_m4032529009(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		SaveHandler_CreateBaseSave_m3996903509(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_2 = GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245(L_1, /*hidden argument*/GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245_RuntimeMethod_var);
		__this->set_numbers_2(L_2);
		SaveHandler_TransferData_m1168138986(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SaveHandler::TransferData()
extern "C"  void SaveHandler_TransferData_m1168138986 (SaveHandler_t383514785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SaveHandler_TransferData_m1168138986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameNumbers_t3947555191 * L_0 = __this->get_numbers_2();
		String_t* L_1 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral22570291, /*hidden argument*/NULL);
		double L_2 = Double_Parse_m4153729520(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral1534485882, /*hidden argument*/NULL);
		int32_t L_4 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		BigNumber_t753465967  L_5;
		memset(&L_5, 0, sizeof(L_5));
		BigNumber__ctor_m229586297((&L_5), L_2, L_4, /*hidden argument*/NULL);
		GameNumbers_set_Coins_m626392107(L_0, L_5, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_6 = __this->get_numbers_2();
		String_t* L_7 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral1198005086, /*hidden argument*/NULL);
		int64_t L_8 = Int64_Parse_m662659148(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		GameNumbers_set_AutoClickers_m2830439004(L_6, L_8, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_9 = __this->get_numbers_2();
		String_t* L_10 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral663609338, /*hidden argument*/NULL);
		int64_t L_11 = Int64_Parse_m662659148(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		GameNumbers_set_AutoClickerUpgradeLevel_m332107850(L_9, L_11, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_12 = __this->get_numbers_2();
		String_t* L_13 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral100899863, /*hidden argument*/NULL);
		int64_t L_14 = Int64_Parse_m662659148(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		GameNumbers_set_PrinterUpgradeLevel_m1312834146(L_12, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		MilestoneUnlocks_t2290314618 * L_16 = GameObject_GetComponent_TisMilestoneUnlocks_t2290314618_m77098687(L_15, /*hidden argument*/GameObject_GetComponent_TisMilestoneUnlocks_t2290314618_m77098687_RuntimeMethod_var);
		MilestoneUnlocks_MileStoneCheck_m470977986(L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SaveHandler::Save()
extern "C"  void SaveHandler_Save_m1313853312 (SaveHandler_t383514785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SaveHandler_Save_m1313853312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigNumber_t753465967  V_0;
	memset(&V_0, 0, sizeof(V_0));
	BigNumber_t753465967  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameNumbers_t3947555191 * L_0 = __this->get_numbers_2();
		BigNumber_t753465967  L_1 = GameNumbers_get_Coins_m4122686468(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		double L_2 = (&V_0)->get_Mantissa_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m545017250(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral22570291, L_3, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_4 = __this->get_numbers_2();
		BigNumber_t753465967  L_5 = GameNumbers_get_Coins_m4122686468(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = (&V_1)->get_Exponent_1();
		String_t* L_7 = Convert_ToString_m3064051180(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral1534485882, L_7, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_8 = __this->get_numbers_2();
		int64_t L_9 = GameNumbers_get_AutoClickers_m3155944230(L_8, /*hidden argument*/NULL);
		String_t* L_10 = Convert_ToString_m2676554995(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral1198005086, L_10, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_11 = __this->get_numbers_2();
		int64_t L_12 = GameNumbers_get_AutoClickerUpgradeLevel_m3955757932(L_11, /*hidden argument*/NULL);
		String_t* L_13 = Convert_ToString_m2676554995(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral663609338, L_13, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_14 = __this->get_numbers_2();
		int64_t L_15 = GameNumbers_get_PrinterUpgradeLevel_m2263168015(L_14, /*hidden argument*/NULL);
		String_t* L_16 = Convert_ToString_m2676554995(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral100899863, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SaveHandler::CreateBaseSave()
extern "C"  void SaveHandler_CreateBaseSave_m3996903509 (SaveHandler_t383514785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SaveHandler_CreateBaseSave_m3996903509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral22570291, _stringLiteral3452614544, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral1534485882, _stringLiteral3452614544, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral1198005086, _stringLiteral3452614544, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral663609338, _stringLiteral3452614543, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral100899863, _stringLiteral3452614543, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral2435378281, _stringLiteral35129010, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SaveHandler::SaveExists()
extern "C"  bool SaveHandler_SaveExists_m4032529009 (SaveHandler_t383514785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SaveHandler_SaveExists_m4032529009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayerPrefs_HasKey_m2794939670(NULL /*static, unused*/, _stringLiteral2435378281, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m873742767 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::Start()
extern "C"  void UIManager_Start_m1211894305 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Start_m1211894305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameData_t415813024 * L_1 = GameObject_GetComponent_TisGameData_t415813024_m3595909835(L_0, /*hidden argument*/GameObject_GetComponent_TisGameData_t415813024_m3595909835_RuntimeMethod_var);
		__this->set_data_2(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameNumbers_t3947555191 * L_3 = GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245(L_2, /*hidden argument*/GameObject_GetComponent_TisGameNumbers_t3947555191_m2543317245_RuntimeMethod_var);
		__this->set_numbers_3(L_3);
		GameData_t415813024 * L_4 = __this->get_data_2();
		GameObject_t1113636619 * L_5 = L_4->get_FadeText_8();
		__this->set_FadeText_4(L_5);
		GameData_t415813024 * L_6 = __this->get_data_2();
		GameObject_t1113636619 * L_7 = L_6->get_CounterObject_10();
		Text_t1901882714 * L_8 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_7, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_CounterText_5(L_8);
		GameData_t415813024 * L_9 = __this->get_data_2();
		GameObject_t1113636619 * L_10 = L_9->get_AutoClickPurchaseText_19();
		Text_t1901882714 * L_11 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_10, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_AutoPurchaseText_6(L_11);
		GameData_t415813024 * L_12 = __this->get_data_2();
		GameObject_t1113636619 * L_13 = L_12->get_AutoClickQuantity_20();
		Text_t1901882714 * L_14 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_13, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_AutoClickQuantityText_7(L_14);
		GameData_t415813024 * L_15 = __this->get_data_2();
		GameObject_t1113636619 * L_16 = L_15->get_AutoClickUpgradeTextObject_21();
		Text_t1901882714 * L_17 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_16, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_AutoClickUpgradeText_8(L_17);
		GameData_t415813024 * L_18 = __this->get_data_2();
		GameObject_t1113636619 * L_19 = L_18->get_AutoClickUpgradeQuantityTextObject_22();
		Text_t1901882714 * L_20 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_19, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_AutoClickUpgradeQuantityText_9(L_20);
		GameData_t415813024 * L_21 = __this->get_data_2();
		GameObject_t1113636619 * L_22 = L_21->get_PrinterUpgradeCostObject_23();
		Text_t1901882714 * L_23 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_22, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_PrinterUpgradeCostText_10(L_23);
		GameData_t415813024 * L_24 = __this->get_data_2();
		GameObject_t1113636619 * L_25 = L_24->get_PrinterUpgradeQuantityTextObject_24();
		Text_t1901882714 * L_26 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_25, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_PrinterUpgradeQuantityText_11(L_26);
		GameData_t415813024 * L_27 = __this->get_data_2();
		GameObject_t1113636619 * L_28 = L_27->get_IncomeSecondObject_25();
		Text_t1901882714 * L_29 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_28, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_IncomeSecondText_12(L_29);
		GameData_t415813024 * L_30 = __this->get_data_2();
		GameObject_t1113636619 * L_31 = L_30->get_printerChild_4();
		__this->set_printer_13(L_31);
		GameData_t415813024 * L_32 = __this->get_data_2();
		GameObject_t1113636619 * L_33 = L_32->get_bank_6();
		__this->set_bank_14(L_33);
		GameData_t415813024 * L_34 = __this->get_data_2();
		GameObject_t1113636619 * L_35 = L_34->get_Menu1_28();
		__this->set_MenuA_15(L_35);
		GameData_t415813024 * L_36 = __this->get_data_2();
		GameObject_t1113636619 * L_37 = L_36->get_Menu2_29();
		__this->set_MenuB_16(L_37);
		return;
	}
}
// System.Void UIManager::UpdateUI()
extern "C"  void UIManager_UpdateUI_m743122523 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_UpdateUI_m743122523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigNumber_t753465967  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Text_t1901882714 * L_0 = __this->get_CounterText_5();
		GameNumbers_t3947555191 * L_1 = __this->get_numbers_3();
		BigNumber_t753465967  L_2 = GameNumbers_get_Coins_m4122686468(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = BigNumber_ToString_m550545267((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		Text_t1901882714 * L_4 = __this->get_AutoPurchaseText_6();
		GameNumbers_t3947555191 * L_5 = __this->get_numbers_3();
		BigNumber_t753465967  L_6 = GameNumbers_AutoClickerCost_m300389370(L_5, /*hidden argument*/NULL);
		BigNumber_t753465967  L_7 = L_6;
		RuntimeObject * L_8 = Box(BigNumber_t753465967_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2753579780, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
		Text_t1901882714 * L_10 = __this->get_AutoClickQuantityText_7();
		GameNumbers_t3947555191 * L_11 = __this->get_numbers_3();
		int64_t L_12 = GameNumbers_get_AutoClickers_m3155944230(L_11, /*hidden argument*/NULL);
		int64_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3343118473, L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_15);
		Text_t1901882714 * L_16 = __this->get_AutoClickUpgradeText_8();
		GameNumbers_t3947555191 * L_17 = __this->get_numbers_3();
		BigNumber_t753465967  L_18 = GameNumbers_AutoClickerUpgradeCost_m1121366818(L_17, /*hidden argument*/NULL);
		BigNumber_t753465967  L_19 = L_18;
		RuntimeObject * L_20 = Box(BigNumber_t753465967_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2753579780, L_20, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_21);
		Text_t1901882714 * L_22 = __this->get_AutoClickUpgradeQuantityText_9();
		GameNumbers_t3947555191 * L_23 = __this->get_numbers_3();
		int64_t L_24 = GameNumbers_get_AutoClickerUpgradeLevel_m3955757932(L_23, /*hidden argument*/NULL);
		int64_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3671085840, L_26, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_27);
		Text_t1901882714 * L_28 = __this->get_PrinterUpgradeCostText_10();
		GameNumbers_t3947555191 * L_29 = __this->get_numbers_3();
		BigNumber_t753465967  L_30 = GameNumbers_PrinterUpgradeCost_m2950495310(L_29, /*hidden argument*/NULL);
		BigNumber_t753465967  L_31 = L_30;
		RuntimeObject * L_32 = Box(BigNumber_t753465967_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2753579780, L_32, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_33);
		Text_t1901882714 * L_34 = __this->get_PrinterUpgradeQuantityText_11();
		GameNumbers_t3947555191 * L_35 = __this->get_numbers_3();
		int64_t L_36 = GameNumbers_get_PrinterUpgradeLevel_m2263168015(L_35, /*hidden argument*/NULL);
		int64_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2271672206, L_38, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_39);
		Text_t1901882714 * L_40 = __this->get_IncomeSecondText_12();
		GameNumbers_t3947555191 * L_41 = __this->get_numbers_3();
		BigNumber_t753465967  L_42 = GameNumbers_PassiveIncomePerTick_m3369419454(L_41, /*hidden argument*/NULL);
		BigNumber_t753465967  L_43 = L_42;
		RuntimeObject * L_44 = Box(BigNumber_t753465967_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3135625673, L_44, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_45);
		return;
	}
}
// System.Void UIManager::PopUpNumbers(UnityEngine.Color,System.String,UnityEngine.GameObject)
extern "C"  void UIManager_PopUpNumbers_m1948423234 (UIManager_t1042050227 * __this, Color_t2555686324  ___popUpColor0, String_t* ___popUpText1, GameObject_t1113636619 * ___popUpLocation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_PopUpNumbers_m1948423234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	RectTransform_t3704657025 * V_1 = NULL;
	Text_t1901882714 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_FadeText_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_1 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		Text_t1901882714 * L_5 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_4, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		V_2 = L_5;
		Text_t1901882714 * L_6 = V_2;
		String_t* L_7 = ___popUpText1;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		Text_t1901882714 * L_8 = V_2;
		Color_t2555686324  L_9 = ___popUpColor0;
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		GameObject_t1113636619 * L_10 = V_0;
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = ___popUpLocation2;
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Transform_SetParent_m381167889(L_11, L_13, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_16, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_17 = V_0;
		Animator_t434523843 * L_18 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_17, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		Animator_SetTrigger_m2134052629(L_18, _stringLiteral1873866614, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_19 = V_0;
		GameObject_t1113636619 * L_20 = GameObject_get_gameObject_m3693461266(L_19, /*hidden argument*/NULL);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_20, (2.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::PopUpNumbers(UnityEngine.Color,System.String,UnityEngine.GameObject,UnityEngine.Vector3)
extern "C"  void UIManager_PopUpNumbers_m468699646 (UIManager_t1042050227 * __this, Color_t2555686324  ___popUpColor0, String_t* ___popUpText1, GameObject_t1113636619 * ___popUpLocation2, Vector3_t3722313464  ___scale3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_PopUpNumbers_m468699646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	RectTransform_t3704657025 * V_1 = NULL;
	Text_t1901882714 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_FadeText_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_1 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		Text_t1901882714 * L_5 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_4, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		V_2 = L_5;
		Text_t1901882714 * L_6 = V_2;
		String_t* L_7 = ___popUpText1;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		Text_t1901882714 * L_8 = V_2;
		Color_t2555686324  L_9 = ___popUpColor0;
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		GameObject_t1113636619 * L_10 = V_0;
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = ___popUpLocation2;
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Transform_SetParent_m381167889(L_11, L_13, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_16, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_17 = V_1;
		Vector3_t3722313464  L_18 = ___scale3;
		Transform_set_localScale_m3053443106(L_17, L_18, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_19 = V_0;
		Animator_t434523843 * L_20 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_19, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		Animator_SetTrigger_m2134052629(L_20, _stringLiteral1873866614, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_21 = V_0;
		GameObject_t1113636619 * L_22 = GameObject_get_gameObject_m3693461266(L_21, /*hidden argument*/NULL);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_22, (2.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::UIDisplayMessage(System.String)
extern "C"  void UIManager_UIDisplayMessage_m4231901600 (UIManager_t1042050227 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_UIDisplayMessage_m4231901600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3323344660, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::ClearChildren()
extern "C"  void UIManager_ClearChildren_m4240919983 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_ClearChildren_m4240919983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Transform_t3600365921 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameData_t415813024 * L_0 = __this->get_data_2();
		GameObject_t1113636619 * L_1 = L_0->get_printerPopUpLocation_5();
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = Transform_GetEnumerator_m2717073726(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			RuntimeObject* L_4 = V_1;
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_5, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_6 = V_0;
			GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		}

IL_0032:
		{
			RuntimeObject* L_8 = V_1;
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_11;
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_004f:
		{
			RuntimeObject* L_12 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		GameData_t415813024 * L_13 = __this->get_data_2();
		GameObject_t1113636619 * L_14 = L_13->get_bankPopUpLocation_7();
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		RuntimeObject* L_16 = Transform_GetEnumerator_m2717073726(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008a;
		}

IL_0072:
		{
			RuntimeObject* L_17 = V_4;
			RuntimeObject * L_18 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_17);
			V_3 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_18, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_19 = V_3;
			GameObject_t1113636619 * L_20 = Component_get_gameObject_m442555142(L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		}

IL_008a:
		{
			RuntimeObject* L_21 = V_4;
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0072;
			}
		}

IL_0096:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject* L_24 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_5 = L_24;
			if (!L_24)
			{
				goto IL_00b1;
			}
		}

IL_00aa:
		{
			RuntimeObject* L_25 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_00b1:
		{
			IL2CPP_END_FINALLY(155)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b2:
	{
		return;
	}
}
// System.Void UIManager::UISwitch(System.Int32)
extern "C"  void UIManager_UISwitch_m2642155203 (UIManager_t1042050227 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_UISwitch_m2642155203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIManager_ClearChildren_m4240919983(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___id0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___id0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0047;
	}

IL_0019:
	{
		UIManager_HideAllMenu_m1608218450(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_MenuA_15();
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_0030:
	{
		UIManager_HideAllMenu_m1608218450(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_MenuB_16();
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_0047:
	{
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral709967533, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_0061:
	{
		return;
	}
}
// System.Void UIManager::HideAllMenu()
extern "C"  void UIManager_HideAllMenu_m1608218450 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_MenuA_15();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_MenuB_16();
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::PrinterEnlarge()
extern "C"  void UIManager_PrinterEnlarge_m1168807615 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_PrinterEnlarge_m1168807615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_printer_13();
		RectTransform_t3704657025 * L_1 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (1.1f), (1.1f), (1.1f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::PrinterShrink()
extern "C"  void UIManager_PrinterShrink_m2802037823 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_PrinterShrink_m2802037823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_printer_13();
		RectTransform_t3704657025 * L_1 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::BankEnlarge()
extern "C"  void UIManager_BankEnlarge_m1627368452 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_BankEnlarge_m1627368452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_bank_14();
		RectTransform_t3704657025 * L_1 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (1.1f), (1.1f), (1.1f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::BankShrink()
extern "C"  void UIManager_BankShrink_m888614235 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_BankShrink_m888614235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_bank_14();
		RectTransform_t3704657025 * L_1 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
