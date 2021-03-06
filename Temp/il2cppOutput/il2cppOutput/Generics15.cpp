﻿#include "il2cpp-config.h"

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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_tCD0F5A8354BEF7A7CB31DB98044011359B3388AF;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6AEF21B80E2C499BFFB48F8148C3026FBBA3FD72;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Object>
struct SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181;
// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47;
// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71;
// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
IL2CPP_EXTERN_C String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
IL2CPP_EXTERN_C String_t* _stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_mEF76D0678288FA4D4D8D81C57B3FEBF7AE87BD74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_m8637A776CD96BAB0EDC8A8FA7479127E2BEC92C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mE0CB96AF945209ABC26F2AA9899CB9794A64D92D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m17A6A3B6131EFE960C4DA7784DDE816250347E99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ec__Iterator0_MoveNext_mB6BE65FBF43A13162E304F0F012BAA539F3D0C9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___entries_1)); }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___keys_7)); }
	inline KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___values_8)); }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t026D7A8C4D989218772DB3E051A624F753A60859  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____items_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____items_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____items_1)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____items_1)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Networking.NetworkReader
struct  NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_buf_0;

public:
	inline static int32_t get_offset_of_m_buf_0() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12, ___m_buf_0)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_buf_0() const { return ___m_buf_0; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_buf_0() { return &___m_buf_0; }
	inline void set_m_buf_0(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_buf_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buf_0), (void*)value);
	}
};

struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields
{
public:
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_4;

public:
	inline static int32_t get_offset_of_s_StringReaderBuffer_3() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_StringReaderBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringReaderBuffer_3() const { return ___s_StringReaderBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringReaderBuffer_3() { return &___s_StringReaderBuffer_3; }
	inline void set_s_StringReaderBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringReaderBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringReaderBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Encoding_4() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_4() const { return ___s_Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_4() { return &___s_Encoding_4; }
	inline void set_s_Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_4), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Object>
struct  SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Objects_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Callback_3)); }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Single>
struct  SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Objects_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Callback_3)); }
	inline SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.UInt32>
struct  SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Objects_0)); }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Callback_3)); }
	inline SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5, ___m_Dictionary_1)); }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dictionary_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___m_Stack_0)); }
	inline Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___m_Stack_0)); }
	inline Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___m_Stack_0)); }
	inline Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___m_Stack_0)); }
	inline Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___m_Stack_0)); }
	inline Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___m_Stack_0)); }
	inline Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___m_Stack_0)); }
	inline Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___m_Stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Single>
struct  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	float ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___list_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_list_0() const { return ___list_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___current_3)); }
	inline float get_current_3() const { return ___current_3; }
	inline float* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(float value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.UInt32>
struct  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___list_0)); }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * get_list_0() const { return ___list_0; }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};


// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Zero_2 = value;
	}
};


// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};


// UnityEngine.Networking.UIntFloat
struct  UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}

	inline static int32_t get_offset_of_doubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___doubleValue_2)); }
	inline double get_doubleValue_2() const { return ___doubleValue_2; }
	inline double* get_address_of_doubleValue_2() { return &___doubleValue_2; }
	inline void set_doubleValue_2(double value)
	{
		___doubleValue_2 = value;
	}

	inline static int32_t get_offset_of_longValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___longValue_3)); }
	inline uint64_t get_longValue_3() const { return ___longValue_3; }
	inline uint64_t* get_address_of_longValue_3() { return &___longValue_3; }
	inline void set_longValue_3(uint64_t value)
	{
		___longValue_3 = value;
	}
};


// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween_FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Target_0)); }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_pinvoke
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_com
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030, ___m_Buffer_1)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_1), (void*)value);
	}
};

struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_Encoding_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringWriteBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  value)
	{
		___s_FloatConverter_4 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Object>
struct  Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Single>
struct  Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.UInt32>
struct  Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode
struct  ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::tweenInfo
	FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___tweenInfo_0)); }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  value)
	{
		___tweenInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_0))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Target_0)); }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_StartColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TargetColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_pinvoke
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_com
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// System.Comparison`1<System.Object>
struct  Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>
struct  SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>
struct  SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>
struct  SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::tweenInfo
	ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___tweenInfo_0)); }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  value)
	{
		___tweenInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_0))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_MyView_8)); }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MyView_8), (void*)value);
	}
};

struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour_Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CmdHandlerDelegates_9), (void*)value);
	}
};


// UnityEngine.Networking.NetworkIdentity
struct  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_SceneId_4)); }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 * get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_AssetId_5)); }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  get_m_AssetId_5() const { return ___m_AssetId_5; }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C * get_address_of_m_AssetId_5() { return &___m_AssetId_5; }
	inline void set_m_AssetId_5(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  value)
	{
		___m_AssetId_5 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ServerOnly_6)); }
	inline bool get_m_ServerOnly_6() const { return ___m_ServerOnly_6; }
	inline bool* get_address_of_m_ServerOnly_6() { return &___m_ServerOnly_6; }
	inline void set_m_ServerOnly_6(bool value)
	{
		___m_ServerOnly_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_LocalPlayerAuthority_7)); }
	inline bool get_m_LocalPlayerAuthority_7() const { return ___m_LocalPlayerAuthority_7; }
	inline bool* get_address_of_m_LocalPlayerAuthority_7() { return &___m_LocalPlayerAuthority_7; }
	inline void set_m_LocalPlayerAuthority_7(bool value)
	{
		___m_LocalPlayerAuthority_7 = value;
	}

	inline static int32_t get_offset_of_m_IsClient_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsClient_8)); }
	inline bool get_m_IsClient_8() const { return ___m_IsClient_8; }
	inline bool* get_address_of_m_IsClient_8() { return &___m_IsClient_8; }
	inline void set_m_IsClient_8(bool value)
	{
		___m_IsClient_8 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsServer_9)); }
	inline bool get_m_IsServer_9() const { return ___m_IsServer_9; }
	inline bool* get_address_of_m_IsServer_9() { return &___m_IsServer_9; }
	inline void set_m_IsServer_9(bool value)
	{
		___m_IsServer_9 = value;
	}

	inline static int32_t get_offset_of_m_HasAuthority_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_HasAuthority_10)); }
	inline bool get_m_HasAuthority_10() const { return ___m_HasAuthority_10; }
	inline bool* get_address_of_m_HasAuthority_10() { return &___m_HasAuthority_10; }
	inline void set_m_HasAuthority_10(bool value)
	{
		___m_HasAuthority_10 = value;
	}

	inline static int32_t get_offset_of_m_NetId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetId_11)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_m_NetId_11() const { return ___m_NetId_11; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_m_NetId_11() { return &___m_NetId_11; }
	inline void set_m_NetId_11(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___m_NetId_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalPlayer_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsLocalPlayer_12)); }
	inline bool get_m_IsLocalPlayer_12() const { return ___m_IsLocalPlayer_12; }
	inline bool* get_address_of_m_IsLocalPlayer_12() { return &___m_IsLocalPlayer_12; }
	inline void set_m_IsLocalPlayer_12(bool value)
	{
		___m_IsLocalPlayer_12 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionToServer_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToServer_13)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToServer_13() const { return ___m_ConnectionToServer_13; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToServer_13() { return &___m_ConnectionToServer_13; }
	inline void set_m_ConnectionToServer_13(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToServer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToServer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToClient_14)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToClient_14() const { return ___m_ConnectionToClient_14; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToClient_14() { return &___m_ConnectionToClient_14; }
	inline void set_m_ConnectionToClient_14(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerId_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_PlayerId_15)); }
	inline int16_t get_m_PlayerId_15() const { return ___m_PlayerId_15; }
	inline int16_t* get_address_of_m_PlayerId_15() { return &___m_PlayerId_15; }
	inline void set_m_PlayerId_15(int16_t value)
	{
		___m_PlayerId_15 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* get_m_NetworkBehaviours_16() const { return ___m_NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB** get_address_of_m_NetworkBehaviours_16() { return &___m_NetworkBehaviours_16; }
	inline void set_m_NetworkBehaviours_16(NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* value)
	{
		___m_NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkBehaviours_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObserverConnections_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ObserverConnections_17)); }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * get_m_ObserverConnections_17() const { return ___m_ObserverConnections_17; }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E ** get_address_of_m_ObserverConnections_17() { return &___m_ObserverConnections_17; }
	inline void set_m_ObserverConnections_17(HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * value)
	{
		___m_ObserverConnections_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObserverConnections_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Observers_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Observers_18)); }
	inline List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * get_m_Observers_18() const { return ___m_Observers_18; }
	inline List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D ** get_address_of_m_Observers_18() { return &___m_Observers_18; }
	inline void set_m_Observers_18(List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * value)
	{
		___m_Observers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClientAuthorityOwner_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ClientAuthorityOwner_19)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ClientAuthorityOwner_19() const { return ___m_ClientAuthorityOwner_19; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ClientAuthorityOwner_19() { return &___m_ClientAuthorityOwner_19; }
	inline void set_m_ClientAuthorityOwner_19(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ClientAuthorityOwner_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientAuthorityOwner_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reset_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Reset_20)); }
	inline bool get_m_Reset_20() const { return ___m_Reset_20; }
	inline bool* get_address_of_m_Reset_20() { return &___m_Reset_20; }
	inline void set_m_Reset_20(bool value)
	{
		___m_Reset_20 = value;
	}
};

struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity_ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * ___clientAuthorityCallback_23;

public:
	inline static int32_t get_offset_of_s_NextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_NextNetworkId_21)); }
	inline uint32_t get_s_NextNetworkId_21() const { return ___s_NextNetworkId_21; }
	inline uint32_t* get_address_of_s_NextNetworkId_21() { return &___s_NextNetworkId_21; }
	inline void set_s_NextNetworkId_21(uint32_t value)
	{
		___s_NextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_s_UpdateWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_UpdateWriter_22)); }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * get_s_UpdateWriter_22() const { return ___s_UpdateWriter_22; }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 ** get_address_of_s_UpdateWriter_22() { return &___s_UpdateWriter_22; }
	inline void set_s_UpdateWriter_22(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * value)
	{
		___s_UpdateWriter_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateWriter_22), (void*)value);
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_23), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4 (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, int16_t ___msgType0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28 (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::SendWriterToReady(UnityEngine.GameObject,UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___contextObj0, NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___writer1, int32_t ___channelId2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552 (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9 (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_m847E9D6C8B97F1C9039BF80AD69EEFC74C989079 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mD27F5C7D70D340DBDFAE972BBE3857A26E29747A (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorTween_get_duration_mE4A9B4FFAB11CCF25EAACF5777991AB6749020B0 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m921F88A58CCB09A4D55DBB714F3538677363FAE6 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_mCA3DA664CF6F78735BF3ED6301900FB849B49C34 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatTween_get_duration_mBC42C5053BCB1A1315430E3E21ECE1597BB0B314 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mDDB3745A70D8AB8302ACAD1EEB19E1AAEB441B91_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m9764997BE44D14E581256A6FB395269E8FACCCB4_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Object>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * SyncList_1_get_Callback_m20E24906A31F41D9F1937C600CBBE86301850994_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m1FE2DB3A33EDF7DEA75278C69828ED589FE64BD8_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m9E5233B6B3869707E0C95960BD03C9A7158BB360_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___op0, int32_t ___itemIndex1, RuntimeObject * ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		RuntimeObject * L_22 = ___item2;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, RuntimeObject * >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Object>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (RuntimeObject *)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_33 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_34 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_34);
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mBBBAE26A0F85309D06F8FA716FA78F7F567A90D7_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m7F8AD633E6405A82303D80E9102F897BE5CA69C6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Object>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (RuntimeObject *)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_9 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		RuntimeObject * L_13 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (int32_t)L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_15 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14);
		((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		RuntimeObject * L_20 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, (int32_t)L_19, (RuntimeObject *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_21 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_22 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_22);
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m4AA586E4EB7BFE218BE0BFCD4018CEF4A2FB1FA6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mE173FF64092798EAEF0C19527A494E830AB91C15_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_4 = ___item0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mFE2457D2BABDC536E39BCB3A784926573611E4E6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mE9925F7E61DE2C0F3508C8CFE9918DECB7883A1A_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m32CDC644CD385320FE4A88DC1D6D97AFAC4E2B6D_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mEAAF5318DE88AC6687DAC665C3694AED59B9277D_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_m8EB3A1E1ED19516ACE719F34D90E8CC9BBF3C7EF_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___item1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = ___item1;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)2, (int32_t)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m37B3302E3190BC679FBD06A44D87896BD8F00C09_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_4 = ___item0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)3, (int32_t)0, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m8048DD22538A1E3F543C3D7A06C8418C377887A9_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m2B49962EC74E2287446B0C982ED048B12B13A39C_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)6, (int32_t)L_0, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SyncList_1_get_Item_m57B77B62E54F2CCB1907379E651EFB95CCF748AE_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_mE10812F910EBBACCF6A3461B7EFD2FD9B4E9D874_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___i0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_3 = ___value1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (RuntimeObject *)L_6;
		RuntimeObject * L_7 = ___value1;
		NullCheck((RuntimeObject *)(V_1));
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(V_1), (RuntimeObject *)L_7);
		V_0 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_10 = ___i0;
		RuntimeObject * L_11 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (int32_t)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___i0;
		RuntimeObject * L_14 = ___value1;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)5, (int32_t)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m3D928CBF99237EEF31163BF55C886673E18A9CAE_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_1 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m70D70E97406458CD44D17ABD5CEC771CC1E413C0_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m193925AC0DC6CD416CDFCB25F0C50F219D2DC490_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mE6D989EF63944773A0C8963CB0D258C1E0EB27EA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_mB2AB79D68D93AAD00E1F8443308AED727DB20F07_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Single>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * SyncList_1_get_Callback_m6AFC36CC469E5D3CC16C969C9FD8CEB7971625B7_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_0 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m2F2B7CDEFA7D37ECEB981B62D944073DE010A812_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m79D617273D080282A3EDE963553F109F014A4894_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___op0, int32_t ___itemIndex1, float ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		float L_22 = ___item2;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, float >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Single>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (float)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_33 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_34 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_34);
		((  void (*) (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m65B07DCAE32D55A117BC804C437BB05DC7B0CFE3_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_2 = V_0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m056C4D8FF7378B3197458797EDD10EC030B09D45_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		float L_5 = VirtFuncInvoker1< float, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Single>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (float)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_8 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_9 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_8);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_10 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_10);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_11 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		float L_13 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_14 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_15 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_14);
		((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_14, (float)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_16 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_16);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_18 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		float L_20 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_18);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_18, (int32_t)L_19, (float)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_21 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_22 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_22);
		((  void (*) (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mCD26D99DCC66569C81313168C2887AE45AA5099E_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mA1DB0248A3DBE9F01EFADBEEC45E4356BEAEF4D3_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_2 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_4 = ___item0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m40B9DB3EEC6D28BE8C960A373BC2D618672D7BE7_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m89669E45649CC81A778AA607F2BE1B059931B6AA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		bool L_2 = ((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m3F5C626CD476A8FBA3C418A529C4BC2C0E1C7046_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mF2C2F81E318206B047F98F9F27FFBF691BBD24C5_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mF9C9216B27ED33E16C6F563B62EF39509E25508A_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, float ___item1, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		float L_2 = ___item1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		float L_4 = ___item1;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)2, (int32_t)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m2B6A1D2327947DEDBE61FFF41BBA593717A9E9C4_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		bool L_2 = ((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		float L_4 = ___item0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)3, (int32_t)0, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m0377FF1A27E91CB0AAF5102A1525CE28856A1FB9_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m28A7A063F9A8D4056900C009E13C249502C54311_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_1 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_1);
		float L_3 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)6, (int32_t)L_0, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncList_1_get_Item_mFC231403EC08B98E4891CAD8681AA325E4248B92_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		float L_2 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m4042501A69B9BE095B4A3656263D730881628D48_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___i0, float ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		V_0 = (bool)0;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		float L_2 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		goto IL_001e;
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_4 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_4);
		float L_6 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (float)L_6;
		float L_7 = ___value1;
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16((float*)(float*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_11 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		float L_13 = ___value1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___i0;
		float L_16 = ___value1;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)5, (int32_t)L_15, (float)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m7E79618E1133C66DC2AA9D17FDDBA09ED58367C0_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_1 = ((  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2C6A97F08DA04D74CC990C2825A2ED0F060B9954_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m4F2232A5EF0BE18785DA4D9C357E9642A2D4D0F6_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m477A2ED05BB22DC1E9CB80A5FBF084E1DD48A866_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m80C51D5FF71A67512EB415CA19F5649F86F52EE6_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.UInt32>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * SyncList_1_get_Callback_mB94ADF0A296618486FB9EFE883B5CDDB9478E324_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_0 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m12197649E902CDA084D2902017B8775CE3C4BBDC_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mF159E49D488220DC87E0398A01E2068E92166585_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___op0, int32_t ___itemIndex1, uint32_t ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		uint32_t L_22 = ___item2;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, uint32_t >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (uint32_t)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_33 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_34 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_34);
		((  void (*) (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m47CD9D607320F8912D05D9B2C7CC7AB0FE011044_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m4492E3D13DDC40C5CA23D94265B8DB9BB914D3C1_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		uint32_t L_5 = VirtFuncInvoker1< uint32_t, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.UInt32>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (uint32_t)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_8 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_9 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_8);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_8, (uint32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_10 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_10);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_11 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_14 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_15 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_14);
		((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_14, (uint32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_16 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_16);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_18 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		uint32_t L_20 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_18);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_18, (int32_t)L_19, (uint32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_21 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_22 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_22);
		((  void (*) (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mD85298653F599E3BF7297D5E34AB0160FB267898_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m50AACA6E70666A9462410B65BE86B5B5CCF07639_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_2 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		uint32_t L_4 = ___item0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m196B5CD3228535A361FBBAA94C284CFE2E215FBB_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mD2941C51CC476BEE5C181C5C3D183A68F7EAF35F_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		bool L_2 = ((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_mE0B5ABBD7F2F92C12CB443792A804400F7E970E7_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_m74F91DCB69A209813838685681B952AE0CDE7189_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mC111E9856E76542D83663AC2AA72FB34BEF1E961_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, uint32_t ___item1, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		uint32_t L_2 = ___item1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		uint32_t L_4 = ___item1;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)2, (int32_t)L_3, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_mF04C662A1BC3EC6AFEA9F89963CBE13A35A9686B_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		bool L_2 = ((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		uint32_t L_4 = ___item0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)3, (int32_t)0, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m41D4B99E19DF04F1FC5934D1E1115D0C2181284D_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m97EB0387816ABE4540E46D88BDD1206C2EA80DBD_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_1 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_1);
		uint32_t L_3 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)6, (int32_t)L_0, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncList_1_get_Item_m8D671E7C84FD0C968D60488553A568E9C31FEFC3_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m3D81172C28BDD0A6997376863AEEB3CC367F2282_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___i0, uint32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		V_0 = (bool)0;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		goto IL_001e;
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_4 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_4);
		uint32_t L_6 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (uint32_t)L_6;
		uint32_t L_7 = ___value1;
		uint32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3((uint32_t*)(uint32_t*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_11 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		uint32_t L_13 = ___value1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___i0;
		uint32_t L_16 = ___value1;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)5, (int32_t)L_15, (uint32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.UInt32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m2D8E20107EFF81EC73C806B373FF762E0CD24A78_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_1 = ((  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m0D4C05B534CF3521BDF05B7B54BCCE6CD00D39EF_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mBBC4C3820B8E74954702F4B0B8CB6ADE0BFDF76A_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_m33E5E40D7589452C6622EA42AB645EFFD91317FD_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_List_0(L_0);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Add_mE6FB99A734735AF9DCDA7D0434A7C293DA91CACE_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_2 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m2B371DACC4401E3CD2A8CD2918FD2F2D841E3DE1_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0045;
	}

IL_0019:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (bool)1;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_mA046116692D1086C5D4D27B22D62E4B873BFEC72_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this);
		((  void (*) (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_1 = (bool)1;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m4152E88062B65E51FC32FFC79B1DD8B578BA0E14_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m5B4F2E776B9F4FA13EC83D6F24D995FDD6F20026_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_m817CE7F84886FC85A53177240C1D28EE23F079DC_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (bool)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m6D6DDEFA60C24E6FDE7F623056962571404EE890_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_m6DE3F4B2BFAF739DBCA72BFE6529BCEB7B46BEA1_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_mF101420B30D2359D25D2290584FEC59191CD2859_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_mA96032B59D36E8E466F5835BD779A45E51060B3E_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = V_0;
		V_1 = (int32_t)L_3;
		goto IL_0024;
	}

IL_001d:
	{
		V_1 = (int32_t)(-1);
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_m0016F09042F2FE56FA1D2D2355832BB16E96D445_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		int32_t L_5 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0082;
	}

IL_003f:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_2 = (RuntimeObject *)L_14;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_18 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
	}

IL_0082:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m991C6F46119564DEA93A09893812CBD5F5DBD2CE_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_mB1E26F0231DAEC2791CD3699932813E830576811_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_8 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_mAE4ADE1DF64CADF07B55057DC73FB3506D955A68_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0008:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_2;
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3);
		bool L_5 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		NullCheck((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this);
		((  bool (*) (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		goto IL_0033;
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
		int32_t L_10 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m57091341D45A2A66567F0AD15AA31A06094F4F92_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0014:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_4;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0014;
		}
	}
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m7C7663DF2836474A845DD182E23E6A3DD3D6BCEC_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m17A6A3B6131EFE960C4DA7784DDE816250347E99_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m17A6A3B6131EFE960C4DA7784DDE816250347E99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_2 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = ColorTween_ValidTarget_m847E9D6C8B97F1C9039BF80AD69EEFC74C989079((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_5 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = ColorTween_get_ignoreTimeScale_mD27F5C7D70D340DBDFAE972BBE3857A26E29747A((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_10 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		float L_11 = ColorTween_get_duration_mE4A9B4FFAB11CCF25EAACF5777991AB6749020B0((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_13 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_17 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		float L_18 = ColorTween_get_duration_mE4A9B4FFAB11CCF25EAACF5777991AB6749020B0((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10DD8AC5B8A3A0C73F0A8D9699C5D5220FECC227_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m680D4804588601644224E48606E6D66465689171_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_mF26FE6FE2B6669E490946F8EF355DC0CCAC860F7_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m8B54A1BBDA9AFF06C9286D672F19BDB1001C320D_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_mB6BE65FBF43A13162E304F0F012BAA539F3D0C9F_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_mB6BE65FBF43A13162E304F0F012BAA539F3D0C9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_2 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		bool L_3 = FloatTween_ValidTarget_m921F88A58CCB09A4D55DBB714F3538677363FAE6((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_5 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		bool L_6 = FloatTween_get_ignoreTimeScale_mCA3DA664CF6F78735BF3ED6301900FB849B49C34((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_10 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		float L_11 = FloatTween_get_duration_mBC42C5053BCB1A1315430E3E21ECE1597BB0B314((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_13 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_17 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		float L_18 = FloatTween_get_duration_mBC42C5053BCB1A1315430E3E21ECE1597BB0B314((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m528DCE76B49785C679B66AAB4D42407B127A9B38_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m38831D13E816549A5D51699B9594609F833670F9_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m5D0C71B726544207A28FAE9F57B9D7401512C3C8_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m2D6244FBF370723CF73C376DC4D2E44D3EEEE290_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m756F514128966B0D57875B80DB12696B2DB60B97_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * L_0 = (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)L_0;
		U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * L_1 = V_0;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mA29C09ADC3EB6959A0F1572D48D84170443B670E_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mE0CB96AF945209ABC26F2AA9899CB9794A64D92D_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mE0CB96AF945209ABC26F2AA9899CB9794A64D92D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this);
		((  void (*) (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m861C40714D7A8C4B7EF8A7CC781B06C600877A5F_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m63EA04E5FC2204138452DCD5D7C9A7918B7AD5E6_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m2CFC7722714F904EC8123AA4B7DCB974E466FD83_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * L_0 = (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)L_0;
		U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * L_1 = V_0;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m39096EAEB1B5BFC0E2FEDF4A946593353F8981CC_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m8637A776CD96BAB0EDC8A8FA7479127E2BEC92C4_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m8637A776CD96BAB0EDC8A8FA7479127E2BEC92C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this);
		((  void (*) (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m9EDE8CC585AD166D4520BE8B374CA2169CDD0E8E_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
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
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mD973571E32F104549B24EC4C48FE9C290C6223BB_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mAFB1F76A280309F30C0897B1FBABCC37A783344C_gshared (const RuntimeMethod* method)
{
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * L_0 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)L_0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m34FF8B9650A82F8B5ECF477604AEF059FB85A153_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * L_0 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)L_0);
		((  void (*) (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mF27548A30BD87F6F4CE445FC8E518043FB0B295E_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * L_0 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * L_1 = (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * L_2 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * L_3 = (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *, UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *, UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *)G_B2_0, (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
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
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m740111DCF3FFCAA14F5FB747FAAF0ED39C11D126_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_m4C328048C1479EE1450837A0CF1BF5F18FF77C88_gshared (const RuntimeMethod* method)
{
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m2F58A45DA9F2BBE95A654A426FF72F0CA75D5B7E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)L_0);
		((  void (*) (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mF042EAEBF32922CBFC61DBE6E1DA0BF06A9DBC26_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * L_1 = (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * L_2 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * L_3 = (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *, UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *, UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *)G_B2_0, (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m9F04DC60F78A36A41D42EEDD9688FDD685667DB6_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		NullCheck((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0);
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_m1549C4AC8324D6BBB9CAA80B70EE13A6AC0617B7_gshared (const RuntimeMethod* method)
{
	List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * L_0 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)L_0);
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m52E37BEE7C08F871746F8E3B28556641EC754324_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * L_0 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)L_0);
		((  void (*) (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m7AEC73CEB51505546BA51E71698753674FE8781B_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * L_0 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * L_1 = (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * L_2 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * L_3 = (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *, UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *, UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *)G_B2_0, (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2208C1BA3B3E3790C5EE59E69407637C41F10844_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		NullCheck((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0);
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_m3D24B0F028698E7FA9EAB826563501BFF986BBFD_gshared (const RuntimeMethod* method)
{
	List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * L_0 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)L_0);
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m4FBBEE3FE54B6B374CD3F3CA7586029E579FAD6C_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * L_0 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)L_0);
		((  void (*) (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m96D7F2BB0CC611C7E4C5828B2E10AE50192A4FCE_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * L_0 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * L_1 = (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * L_2 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * L_3 = (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *, UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *, UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *)G_B2_0, (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m6432D570E705BF537C4FB85407A31C9AAD6A99E6_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		NullCheck((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0);
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m4322F57FCB5B11C10CAEDE17A609B9E29401797F_gshared (const RuntimeMethod* method)
{
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * L_0 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)L_0);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m3339B7710487E883FD2DB198643084787D08BBDD_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * L_0 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)L_0);
		((  void (*) (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m361000F7CAFBC65FFD4FC5D55BA85108853E0376_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * L_0 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * L_1 = (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * L_2 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * L_3 = (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *, UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *, UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *)G_B2_0, (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m8B0E6BEA4C6F4445E8F5BADD3C577054A3445893_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		NullCheck((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0);
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m0DA6F4FA9B55233F3BCC582E1B5D1B82048B72DC_gshared (const RuntimeMethod* method)
{
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * L_0 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)L_0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m427896919DD66BB0E8CF7274C8AE76036D36D3BD_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * L_0 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)L_0);
		((  void (*) (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m4BEC87EBA6EA67DFC457FDB45282F75A64C6C347_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * L_0 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * L_1 = (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * L_2 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * L_3 = (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *, UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *, UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *)G_B2_0, (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m0CCFC711C25B7AAC542D2ABBA0E1B4BFE8D037EA_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		NullCheck((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0);
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mECE6D9ED10FB4EEF28A6BE1F9B445CEE4312A937_gshared (const RuntimeMethod* method)
{
	List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * L_0 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)L_0);
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m1252D062655820C50CAC05E08676836EBC1A7BA0_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * L_0 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)L_0);
		((  void (*) (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mFC21D520E6A974F00E7D85540B0973269E58626A_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * L_0 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * L_1 = (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * L_2 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * L_3 = (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *, UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *, UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *)G_B2_0, (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
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
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mE14E9596DD21AFBA47727BDC5226C7F24FA234C7_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_m2336F21CA9AFFCBF50463DD1836B14E663836D58_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_mF68D62D98B4F6AFACAC85C02E4DB858DA7196F64_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m12221F42D2CD25F418A1746CFEE20C65A630B6F1_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NullCheck((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_mF6EBCB20814CAE2E818F846689640BF4485E810F_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m82BA8AF24CE96731493EC3C52B1218DB2C3C934F_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this);
		((  void (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_4 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_8 = V_0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0051:
	{
		RuntimeObject * L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_mEF76D0678288FA4D4D8D81C57B3FEBF7AE87BD74_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_mEF76D0678288FA4D4D8D81C57B3FEBF7AE87BD74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		bool L_5 = il2cpp_codegen_object_reference_equals((RuntimeObject *)L_3, (RuntimeObject *)L_4);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_8 = ___element0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0053:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_9 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_10 = ___element0;
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_9);
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
