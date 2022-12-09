#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ControllerInformation
struct ControllerInformation_t256233C5A641C25259FE73046D5F643189304765;
// ControllerInformationPanel
struct ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE_1;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Oculus.Spatializer.Propagation.MeshGroup
#pragma pack(push, tp, 1)
struct MeshGroup_tBD0816CDD4B3D616A687D3593379ECFA7EBAAF9F 
{
	// System.UIntPtr Oculus.Spatializer.Propagation.MeshGroup::indexOffset
	uintptr_t ___indexOffset_0;
	// System.UIntPtr Oculus.Spatializer.Propagation.MeshGroup::faceCount
	uintptr_t ___faceCount_1;
	// Oculus.Spatializer.Propagation.FaceType Oculus.Spatializer.Propagation.MeshGroup::faceType
	uint32_t ___faceType_2;
	// System.IntPtr Oculus.Spatializer.Propagation.MeshGroup::material
	intptr_t ___material_3;
};
#pragma pack(pop, tp)

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ControllerInformation
struct ControllerInformation_t256233C5A641C25259FE73046D5F643189304765  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.InputDevice ControllerInformation::m_leftController
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_leftController_4;
	// UnityEngine.XR.InputDevice ControllerInformation::m_rightController
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_rightController_5;
	// UnityEngine.Vector3 ControllerInformation::m_rightControllerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_rightControllerPosition_6;
	// UnityEngine.Vector3 ControllerInformation::m_leftControllerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_leftControllerPosition_7;
	// UnityEngine.Vector3 ControllerInformation::m_rightControllerOrientation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_rightControllerOrientation_8;
	// UnityEngine.Vector3 ControllerInformation::m_leftControllerOrientation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_leftControllerOrientation_9;
	// UnityEngine.Vector3 ControllerInformation::m_rightControllerVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_rightControllerVelocity_10;
	// UnityEngine.Vector3 ControllerInformation::m_leftControllerVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_leftControllerVelocity_11;
	// System.Single ControllerInformation::m_fLeftControllerGrip
	float ___m_fLeftControllerGrip_12;
	// System.Single ControllerInformation::m_fRigthControllerGrip
	float ___m_fRigthControllerGrip_13;
	// System.Boolean ControllerInformation::m_bIsLeftGripPressed
	bool ___m_bIsLeftGripPressed_14;
	// System.Boolean ControllerInformation::m_bIsRigthGripPressed
	bool ___m_bIsRigthGripPressed_15;
	// System.Boolean ControllerInformation::m_bIsLeftPrimaryButtonPressed
	bool ___m_bIsLeftPrimaryButtonPressed_16;
	// System.Boolean ControllerInformation::m_bIsLeftSecondaryButtonPressed
	bool ___m_bIsLeftSecondaryButtonPressed_17;
	// System.Boolean ControllerInformation::m_bIsRightPrimaryButtonPressed
	bool ___m_bIsRightPrimaryButtonPressed_18;
	// System.Boolean ControllerInformation::m_bIsRightSecondaryButtonPressed
	bool ___m_bIsRightSecondaryButtonPressed_19;
	// System.Single ControllerInformation::m_fLeftControllerTriggerPressure
	float ___m_fLeftControllerTriggerPressure_20;
	// System.Single ControllerInformation::m_fRigthControllerTriggerPressure
	float ___m_fRigthControllerTriggerPressure_21;
	// System.Boolean ControllerInformation::m_bIsLeftTriggerPressed
	bool ___m_bIsLeftTriggerPressed_22;
	// System.Boolean ControllerInformation::m_bIsRigthTriggerPressed
	bool ___m_bIsRigthTriggerPressed_23;
	// System.Boolean ControllerInformation::m_bIsLeftThumbStickPressed
	bool ___m_bIsLeftThumbStickPressed_24;
	// System.Boolean ControllerInformation::m_bIsRightThumbStickPressed
	bool ___m_bIsRightThumbStickPressed_25;
	// System.Boolean ControllerInformation::m_bIsLeftThumbStickTouched
	bool ___m_bIsLeftThumbStickTouched_26;
	// System.Boolean ControllerInformation::m_bIsRightThumbStickTouched
	bool ___m_bIsRightThumbStickTouched_27;
	// UnityEngine.Vector2 ControllerInformation::m_leftControllerThumbStickAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_leftControllerThumbStickAxis_28;
	// UnityEngine.Vector2 ControllerInformation::m_rightControllerThumbStickAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_rightControllerThumbStickAxis_29;
};

// ControllerInformationPanel
struct ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ControllerInformationPanel::bIsLeftController
	bool ___bIsLeftController_4;
	// ControllerInformation ControllerInformationPanel::m_controllerInfo
	ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* ___m_controllerInfo_5;
	// TMPro.TextMeshPro ControllerInformationPanel::m_currentOrientationTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_currentOrientationTxt_6;
	// TMPro.TextMeshPro ControllerInformationPanel::m_currentPositionTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_currentPositionTxt_7;
	// TMPro.TextMeshPro ControllerInformationPanel::m_currentVelocityTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_currentVelocityTxt_8;
	// TMPro.TextMeshPro ControllerInformationPanel::m_currentSpeedTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_currentSpeedTxt_9;
	// TMPro.TextMeshPro ControllerInformationPanel::m_currentGripPressureTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_currentGripPressureTxt_10;
	// TMPro.TextMeshPro ControllerInformationPanel::m_isGripPressedTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_isGripPressedTxt_11;
	// TMPro.TextMeshPro ControllerInformationPanel::m_currentTriggerPressureTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_currentTriggerPressureTxt_12;
	// TMPro.TextMeshPro ControllerInformationPanel::m_isTriggerPressedTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_isTriggerPressedTxt_13;
	// TMPro.TextMeshPro ControllerInformationPanel::m_isPrimaryBPressedTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_isPrimaryBPressedTxt_14;
	// TMPro.TextMeshPro ControllerInformationPanel::m_isSecondaryBPressedTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_isSecondaryBPressedTxt_15;
	// TMPro.TextMeshPro ControllerInformationPanel::m_isThumbStickPressedTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_isThumbStickPressedTxt_16;
	// TMPro.TextMeshPro ControllerInformationPanel::m_isThumbStickTouchedTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_isThumbStickTouchedTxt_17;
	// TMPro.TextMeshPro ControllerInformationPanel::m_thumbStickAxisValueTxt
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___m_thumbStickAxisValueTxt_18;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void ControllerInformationPanel::setControllerInformationPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerInformationPanel_m8EA2F58770F0C3A51BCB446BC358CF7DA71F9255 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setControllerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerPosition_m32B928178DA0BA345A60D369BCDA5CC832788623 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setControllerOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerOrientation_mA3EB657994DBC3412F5231B50F2B7F457796533A (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setControllerVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerVelocity_m161A6276F38CAB1EDC211CCF38DFE04DFD9A7968 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setControllerSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerSpeed_mA6453711A3E9AF8139AC44C09A422F3DF49C9797 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setControllerGripPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerGripPressure_mA303F1C35132284B5C9F65DFF56DF85B915483F9 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setIsGripPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsGripPresed_m9A613FAA957AC249C6BD5ABA1E840DC16A541961 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setControllerTriggerPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerTriggerPressure_m948EA4C6698B901D878F314A328E8A0BE64D8D53 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setIsTriggerPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsTriggerPresed_m3F8C1E19AD75A324CDA02FEE8D1FC77A84F56784 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setIsPrimaryBPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsPrimaryBPresed_mBF3C5ADC8A01140F668F29A132B26C2C5639F9D1 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setIsSecondaryBPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsSecondaryBPresed_mD13A330B19FDC943DFEE01441B164464AF1513A0 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setCurrentThumbStickAxisValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setCurrentThumbStickAxisValue_mB820FC21768F987673574B29B4922E56324C0332 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setIsThumbStickPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsThumbStickPresed_mC678D101BBC42855D5B82D9802C52563AA9EC85E (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// System.Void ControllerInformationPanel::setIsThumbStickTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsThumbStickTouched_mC1CB3F59C22A4BCD08BB82DBC8389B7DFE0C4675 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControllerInformation::get_LeftControllerPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_LeftControllerPosition_mBEFAF7D4A054ACF68EFBBD9CF35D3E43EB00D853_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControllerInformation::get_RightControllerPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_RightControllerPosition_mAAC38F2FFA36D5A076B418B98F0167B14F61DAFB_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControllerInformation::get_LeftControllerOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_LeftControllerOrientation_m15552E8AADA66433004B92B6B8F6170FD61630E7_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControllerInformation::get_RightControllerOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_RightControllerOrientation_m420F3F5B60783AA7EEFF478124BB26AB52E16B5E_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControllerInformation::get_LeftControllerVelocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_LeftControllerVelocity_mE16790840CC2CF73760C08EACFA37573BC2196DD_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControllerInformation::get_RightControllerVelocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_RightControllerVelocity_m86307D8E775E84F7F43F6BED60BBCE3CC4287EE9_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Single ControllerInformation::get_LeftControllerGrip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_LeftControllerGrip_m070C222AA8F2A780F7013725A51F685398053402_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Single ControllerInformation::get_RigthControllerGrip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_RigthControllerGrip_mD23736BDC0BFD7EDD3F14EF5BE60BBDC0C243444_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsLeftGripPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftGripPressed_mFF91527657B40C26433D49A54D10D854D4E53675_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsRightGripPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightGripPressed_m75A01FAED1B3C625AF299BBF1F4DDBA98977FEC1_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Single ControllerInformation::get_LeftControllerTriggerPressure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_LeftControllerTriggerPressure_m0542F1A837ADD4CD3B2F2F8B276CE56C6BD573BD_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Single ControllerInformation::get_RigthControllerTriggerPressure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_RigthControllerTriggerPressure_m06B359C84B50C403D784AE2B30A851551DF9A025_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsLeftTriggerPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftTriggerPressed_mC502F223AD24B4A030A59386182C93EF960707F9_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsRightTriggerPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightTriggerPressed_m6D746535DAFCC4B31A4DB310B1864797A494A8CD_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsLeftPrimaryButtonPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftPrimaryButtonPressed_mDD4FC09B309AB742ED561A659C4B2616646B7A93_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsRightPrimaryButtonPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightPrimaryButtonPressed_mEF9E52347076D651CEBA9C948DF9F384A6DB730B_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsLeftSecondaryButtonPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftSecondaryButtonPressed_mB523EA42063D403C6771EE964B705D41402DB36B_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsRightSecondaryButtonPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightSecondaryButtonPressed_mCF4E1830BA2D2A80F29F9A88E5A939AF95DD903F_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsLeftThumbStickPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftThumbStickPressed_m878B884ADD6CF2F7B5AF483FCA3BA6EF9397ED36_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsRightThumbStickPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightThumbStickPressed_mAB8D14383023D73F26140FE987630FD1088F6D83_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsLeftThumbStickTouched()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftThumbStickTouched_mBCD38338B6C960E6FF323C0AA5C3A063D771122E_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Boolean ControllerInformation::get_IsRightThumbStickTouched()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightThumbStickTouched_mF1E928D4957FB49163FD66EF862CF7FFB9F4FE87_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ControllerInformation::get_LeftControllerThumbStickAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ControllerInformation_get_LeftControllerThumbStickAxis_m60F07CC9F646E55D802D10371FFEF4437D6A5068_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ControllerInformation::get_RightControllerThumbStickAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ControllerInformation_get_RightControllerThumbStickAxis_mBF4848438BD850F247D2D1FEE0B462450768DD3E_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentOrientationTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentOrientationTxt_mAD6D8163269E7A378F1BE3716B7E5951C948F3AE (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_currentOrientationTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentOrientationTxt_6;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentOrientationTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentOrientationTxt_m6EE1974A7F1EF507A691349D2BF9209B68D9DFE2 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_currentOrientationTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_currentOrientationTxt_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentOrientationTxt_6), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentPositionTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentPositionTxt_m496913142D9BC420DF5392F1139F3A8780BB44F3 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_currentPositionTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentPositionTxt_7;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentPositionTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentPositionTxt_m863821EDE98F25FCE3A8F4769AC2004782F2E333 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_currentPositionTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_currentPositionTxt_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentPositionTxt_7), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentVelocityTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentVelocityTxt_m5005594561E5061DC69E4E53568C7B8AFFE1284E (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_currentVelocityTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentVelocityTxt_8;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentVelocityTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentVelocityTxt_mE43E002AEF2A265378A47D64303811ECD63B4D7A (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_currentVelocityTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_currentVelocityTxt_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentVelocityTxt_8), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentSpeedTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentSpeedTxt_m1C84C667DCC2FB1B5325526F80903865319CE28F (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_currentSpeedTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentSpeedTxt_9;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentSpeedTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentSpeedTxt_m0C9F1E6DEA4365DD3871EFC4C238CA3C70C884DB (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_currentSpeedTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_currentSpeedTxt_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentSpeedTxt_9), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentGripPressureTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentGripPressureTxt_mF04BC8D21E23164C269854B79D93C3598750A933 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_currentGripPressureTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentGripPressureTxt_10;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentGripPressureTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentGripPressureTxt_mA93B8C76B545B09BA472E1B863E29AC7D45384D7 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_currentGripPressureTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_currentGripPressureTxt_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentGripPressureTxt_10), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentGripPressedTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentGripPressedTxt_m8346DD87D1614184044B60F1964FBE94BFC9FD97 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_isGripPressedTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isGripPressedTxt_11;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentGripPressedTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentGripPressedTxt_mC636CA385167DB24E6572C6DB1468870A9889C04 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_isGripPressedTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_isGripPressedTxt_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_isGripPressedTxt_11), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentTriggerPressureTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentTriggerPressureTxt_m366AED5016E65D9982E793F5664BC1DD8A71D956 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_currentTriggerPressureTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentTriggerPressureTxt_12;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentTriggerPressureTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentTriggerPressureTxt_m6F4D8E5BB2030E933A3E2AB6D4F111D2F645988C (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_currentTriggerPressureTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_currentTriggerPressureTxt_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_currentTriggerPressureTxt_12), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentTriggerPressedTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentTriggerPressedTxt_m78A42EAA0BC9F6C560E7195376E849C6E35E18F6 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_isTriggerPressedTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isTriggerPressedTxt_13;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentTriggerPressedTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentTriggerPressedTxt_mF1000EAA6058571699BCC23AA1AC995E2BA0F9B9 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_isTriggerPressedTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_isTriggerPressedTxt_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_isTriggerPressedTxt_13), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentPrimaryBPressedTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentPrimaryBPressedTxt_m9C1768D0E7DEE5D500C3E71EE6D39B5BE2D94DA1 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_isPrimaryBPressedTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isPrimaryBPressedTxt_14;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentPrimaryBPressedTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentPrimaryBPressedTxt_m6CC68001A0C9D53F2739B2F8FC398997ABC735F5 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_isPrimaryBPressedTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_isPrimaryBPressedTxt_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_isPrimaryBPressedTxt_14), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentSecondaryBPressedTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentSecondaryBPressedTxt_m463BE7C7F3DE6A4FD7249D2BE578758135C21669 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_isSecondaryBPressedTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isSecondaryBPressedTxt_15;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentSecondaryBPressedTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentSecondaryBPressedTxt_m189433F91574BEFCAFB6B76A52EB5240A68C7956 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_isSecondaryBPressedTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_isSecondaryBPressedTxt_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_isSecondaryBPressedTxt_15), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentThumbStickPressedTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentThumbStickPressedTxt_m8F32C2A3F278BD42610DA2C2D09047951C6BCDC6 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_isThumbStickPressedTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isThumbStickPressedTxt_16;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentThumbStickPressedTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentThumbStickPressedTxt_mF82F4E6538A8C70EB936E585637F97CEF6491139 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_isThumbStickPressedTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_isThumbStickPressedTxt_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_isThumbStickPressedTxt_16), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentThumbStickTouchedTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentThumbStickTouchedTxt_m2CCC0BB962EBF88AB5BBA2DE0A91A68FA6FEB2DB (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_isThumbStickTouchedTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isThumbStickTouchedTxt_17;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentThumbStickTouchedTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentThumbStickTouchedTxt_mA73FAA20618100B270F68684B788886E5901EAF4 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_isThumbStickTouchedTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_isThumbStickTouchedTxt_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_isThumbStickTouchedTxt_17), (void*)L_0);
		// }
		return;
	}
}
// TMPro.TextMeshPro ControllerInformationPanel::get_CurrentThumbStickAxisValueTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ControllerInformationPanel_get_CurrentThumbStickAxisValueTxt_m75F7CF95193CEC74DE05C1FE90E0939764ECEB2D (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// return m_thumbStickAxisValueTxt;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_thumbStickAxisValueTxt_18;
		return L_0;
	}
}
// System.Void ControllerInformationPanel::set_CurrentThumbStickAxisValueTxt(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_set_CurrentThumbStickAxisValueTxt_mE6DD55C78154287AF7BA6AFED160ED7E81AB336B (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___value0, const RuntimeMethod* method) 
{
	{
		// m_thumbStickAxisValueTxt = value;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___value0;
		__this->___m_thumbStickAxisValueTxt_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_thumbStickAxisValueTxt_18), (void*)L_0);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_Update_mB5EE5599134C7D1257F6A3F8D9BD07DFBEDA2E36 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		// setControllerInformationPanel();
		ControllerInformationPanel_setControllerInformationPanel_m8EA2F58770F0C3A51BCB446BC358CF7DA71F9255(__this, NULL);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setControllerInformationPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerInformationPanel_m8EA2F58770F0C3A51BCB446BC358CF7DA71F9255 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(m_controllerInfo == null)
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_0 = __this->___m_controllerInfo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// setControllerPosition();
		ControllerInformationPanel_setControllerPosition_m32B928178DA0BA345A60D369BCDA5CC832788623(__this, NULL);
		// setControllerOrientation();
		ControllerInformationPanel_setControllerOrientation_mA3EB657994DBC3412F5231B50F2B7F457796533A(__this, NULL);
		// setControllerVelocity();
		ControllerInformationPanel_setControllerVelocity_m161A6276F38CAB1EDC211CCF38DFE04DFD9A7968(__this, NULL);
		// setControllerSpeed();
		ControllerInformationPanel_setControllerSpeed_mA6453711A3E9AF8139AC44C09A422F3DF49C9797(__this, NULL);
		// setControllerGripPressure();
		ControllerInformationPanel_setControllerGripPressure_mA303F1C35132284B5C9F65DFF56DF85B915483F9(__this, NULL);
		// setIsGripPresed();
		ControllerInformationPanel_setIsGripPresed_m9A613FAA957AC249C6BD5ABA1E840DC16A541961(__this, NULL);
		// setControllerTriggerPressure();
		ControllerInformationPanel_setControllerTriggerPressure_m948EA4C6698B901D878F314A328E8A0BE64D8D53(__this, NULL);
		// setIsTriggerPresed();
		ControllerInformationPanel_setIsTriggerPresed_m3F8C1E19AD75A324CDA02FEE8D1FC77A84F56784(__this, NULL);
		// setIsPrimaryBPresed();
		ControllerInformationPanel_setIsPrimaryBPresed_mBF3C5ADC8A01140F668F29A132B26C2C5639F9D1(__this, NULL);
		// setIsSecondaryBPresed();
		ControllerInformationPanel_setIsSecondaryBPresed_mD13A330B19FDC943DFEE01441B164464AF1513A0(__this, NULL);
		// setCurrentThumbStickAxisValue();
		ControllerInformationPanel_setCurrentThumbStickAxisValue_mB820FC21768F987673574B29B4922E56324C0332(__this, NULL);
		// setIsThumbStickPresed();
		ControllerInformationPanel_setIsThumbStickPresed_mC678D101BBC42855D5B82D9802C52563AA9EC85E(__this, NULL);
		// setIsThumbStickTouched();
		ControllerInformationPanel_setIsThumbStickTouched_mC1CB3F59C22A4BCD08BB82DBC8389B7DFE0C4675(__this, NULL);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setControllerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerPosition_m32B928178DA0BA345A60D369BCDA5CC832788623 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(m_currentPositionTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentPositionTxt_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if(bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// m_currentPositionTxt.text = m_controllerInfo.LeftControllerPosition.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_currentPositionTxt_7;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = ControllerInformation_get_LeftControllerPosition_mBEFAF7D4A054ACF68EFBBD9CF35D3E43EB00D853_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_003c:
	{
		// m_currentPositionTxt.text = m_controllerInfo.RightControllerPosition.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_currentPositionTxt_7;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ControllerInformation_get_RightControllerPosition_mAAC38F2FFA36D5A076B418B98F0167B14F61DAFB_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setControllerOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerOrientation_mA3EB657994DBC3412F5231B50F2B7F457796533A (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_currentOrientationTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentOrientationTxt_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// m_currentOrientationTxt.text = m_controllerInfo.LeftControllerOrientation.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_currentOrientationTxt_6;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = ControllerInformation_get_LeftControllerOrientation_m15552E8AADA66433004B92B6B8F6170FD61630E7_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_003c:
	{
		// m_currentOrientationTxt.text = m_controllerInfo.RightControllerOrientation.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_currentOrientationTxt_6;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ControllerInformation_get_RightControllerOrientation_m420F3F5B60783AA7EEFF478124BB26AB52E16B5E_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setControllerVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerVelocity_m161A6276F38CAB1EDC211CCF38DFE04DFD9A7968 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_currentVelocityTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentVelocityTxt_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// m_currentVelocityTxt.text = m_controllerInfo.LeftControllerVelocity.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_currentVelocityTxt_8;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = ControllerInformation_get_LeftControllerVelocity_mE16790840CC2CF73760C08EACFA37573BC2196DD_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_003c:
	{
		// m_currentVelocityTxt.text = m_controllerInfo.RightControllerVelocity.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_currentVelocityTxt_8;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ControllerInformation_get_RightControllerVelocity_m86307D8E775E84F7F43F6BED60BBCE3CC4287EE9_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setControllerSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerSpeed_mA6453711A3E9AF8139AC44C09A422F3DF49C9797 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (m_currentSpeedTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentSpeedTxt_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// m_currentSpeedTxt.text = m_controllerInfo.LeftControllerVelocity.magnitude.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_currentSpeedTxt_9;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = ControllerInformation_get_LeftControllerVelocity_mE16790840CC2CF73760C08EACFA37573BC2196DD_inline(L_4, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_7);
		return;
	}

IL_003e:
	{
		// m_currentSpeedTxt.text = m_controllerInfo.RightControllerVelocity.magnitude.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_8 = __this->___m_currentSpeedTxt_9;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_9 = __this->___m_controllerInfo_5;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = ControllerInformation_get_RightControllerVelocity_m86307D8E775E84F7F43F6BED60BBCE3CC4287EE9_inline(L_9, NULL);
		V_0 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_11;
		String_t* L_12;
		L_12 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_12);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setControllerGripPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerGripPressure_mA303F1C35132284B5C9F65DFF56DF85B915483F9 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (m_currentGripPressureTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentGripPressureTxt_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_currentGripPressureTxt.text = m_controllerInfo.LeftControllerGrip.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_currentGripPressureTxt_10;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		float L_5;
		L_5 = ControllerInformation_get_LeftControllerGrip_m070C222AA8F2A780F7013725A51F685398053402_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_currentGripPressureTxt.text = m_controllerInfo.RigthControllerGrip.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_currentGripPressureTxt_10;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		float L_9;
		L_9 = ControllerInformation_get_RigthControllerGrip_mD23736BDC0BFD7EDD3F14EF5BE60BBDC0C243444_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setIsGripPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsGripPresed_m9A613FAA957AC249C6BD5ABA1E840DC16A541961 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_isGripPressedTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isGripPressedTxt_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_isGripPressedTxt.text = m_controllerInfo.IsLeftGripPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_isGripPressedTxt_11;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerInformation_get_IsLeftGripPressed_mFF91527657B40C26433D49A54D10D854D4E53675_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_isGripPressedTxt.text = m_controllerInfo.IsRightGripPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_isGripPressedTxt_11;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = ControllerInformation_get_IsRightGripPressed_m75A01FAED1B3C625AF299BBF1F4DDBA98977FEC1_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setControllerTriggerPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setControllerTriggerPressure_m948EA4C6698B901D878F314A328E8A0BE64D8D53 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (m_currentTriggerPressureTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_currentTriggerPressureTxt_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_currentTriggerPressureTxt.text = m_controllerInfo.LeftControllerTriggerPressure.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_currentTriggerPressureTxt_12;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		float L_5;
		L_5 = ControllerInformation_get_LeftControllerTriggerPressure_m0542F1A837ADD4CD3B2F2F8B276CE56C6BD573BD_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_currentTriggerPressureTxt.text = m_controllerInfo.RigthControllerTriggerPressure.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_currentTriggerPressureTxt_12;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		float L_9;
		L_9 = ControllerInformation_get_RigthControllerTriggerPressure_m06B359C84B50C403D784AE2B30A851551DF9A025_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setIsTriggerPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsTriggerPresed_m3F8C1E19AD75A324CDA02FEE8D1FC77A84F56784 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_isTriggerPressedTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isTriggerPressedTxt_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_isTriggerPressedTxt.text = m_controllerInfo.IsLeftTriggerPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_isTriggerPressedTxt_13;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerInformation_get_IsLeftTriggerPressed_mC502F223AD24B4A030A59386182C93EF960707F9_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_isTriggerPressedTxt.text = m_controllerInfo.IsRightTriggerPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_isTriggerPressedTxt_13;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = ControllerInformation_get_IsRightTriggerPressed_m6D746535DAFCC4B31A4DB310B1864797A494A8CD_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setIsPrimaryBPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsPrimaryBPresed_mBF3C5ADC8A01140F668F29A132B26C2C5639F9D1 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_isPrimaryBPressedTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isPrimaryBPressedTxt_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_isPrimaryBPressedTxt.text = m_controllerInfo.IsLeftPrimaryButtonPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_isPrimaryBPressedTxt_14;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerInformation_get_IsLeftPrimaryButtonPressed_mDD4FC09B309AB742ED561A659C4B2616646B7A93_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_isPrimaryBPressedTxt.text = m_controllerInfo.IsRightPrimaryButtonPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_isPrimaryBPressedTxt_14;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = ControllerInformation_get_IsRightPrimaryButtonPressed_mEF9E52347076D651CEBA9C948DF9F384A6DB730B_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setIsSecondaryBPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsSecondaryBPresed_mD13A330B19FDC943DFEE01441B164464AF1513A0 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_isSecondaryBPressedTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isSecondaryBPressedTxt_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_isSecondaryBPressedTxt.text = m_controllerInfo.IsLeftSecondaryButtonPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_isSecondaryBPressedTxt_15;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerInformation_get_IsLeftSecondaryButtonPressed_mB523EA42063D403C6771EE964B705D41402DB36B_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_isSecondaryBPressedTxt.text = m_controllerInfo.IsRightSecondaryButtonPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_isSecondaryBPressedTxt_15;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = ControllerInformation_get_IsRightSecondaryButtonPressed_mCF4E1830BA2D2A80F29F9A88E5A939AF95DD903F_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setIsThumbStickPresed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsThumbStickPresed_mC678D101BBC42855D5B82D9802C52563AA9EC85E (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_isThumbStickPressedTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isThumbStickPressedTxt_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_isThumbStickPressedTxt.text = m_controllerInfo.IsLeftThumbStickPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_isThumbStickPressedTxt_16;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerInformation_get_IsLeftThumbStickPressed_m878B884ADD6CF2F7B5AF483FCA3BA6EF9397ED36_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_isThumbStickPressedTxt.text = m_controllerInfo.IsRightThumbStickPressed.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_isThumbStickPressedTxt_16;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = ControllerInformation_get_IsRightThumbStickPressed_mAB8D14383023D73F26140FE987630FD1088F6D83_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setIsThumbStickTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setIsThumbStickTouched_mC1CB3F59C22A4BCD08BB82DBC8389B7DFE0C4675 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_isThumbStickTouchedTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_isThumbStickTouchedTxt_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_isThumbStickTouchedTxt.text = m_controllerInfo.IsLeftThumbStickTouched.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_isThumbStickTouchedTxt_17;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = ControllerInformation_get_IsLeftThumbStickTouched_mBCD38338B6C960E6FF323C0AA5C3A063D771122E_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_0036:
	{
		// m_isThumbStickTouchedTxt.text = m_controllerInfo.IsRightThumbStickTouched.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_isThumbStickTouchedTxt_17;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = ControllerInformation_get_IsRightThumbStickTouched_mF1E928D4957FB49163FD66EF862CF7FFB9F4FE87_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::setCurrentThumbStickAxisValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel_setCurrentThumbStickAxisValue_mB820FC21768F987673574B29B4922E56324C0332 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_thumbStickAxisValueTxt == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___m_thumbStickAxisValueTxt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (bIsLeftController)
		bool L_2 = __this->___bIsLeftController_4;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// m_thumbStickAxisValueTxt.text = m_controllerInfo.LeftControllerThumbStickAxis.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___m_thumbStickAxisValueTxt_18;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_4 = __this->___m_controllerInfo_5;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = ControllerInformation_get_LeftControllerThumbStickAxis_m60F07CC9F646E55D802D10371FFEF4437D6A5068_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		return;
	}

IL_003c:
	{
		// m_thumbStickAxisValueTxt.text = m_controllerInfo.RightControllerThumbStickAxis.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___m_thumbStickAxisValueTxt_18;
		ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* L_8 = __this->___m_controllerInfo_5;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = ControllerInformation_get_RightControllerThumbStickAxis_mBF4848438BD850F247D2D1FEE0B462450768DD3E_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_10);
		// }
		return;
	}
}
// System.Void ControllerInformationPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInformationPanel__ctor_mD3A8D1A76BB2A1F8EDBBC0288B79F3DA78B63FD1 (ControllerInformationPanel_t41242494A0B776C538FF7397D57D0C5524354FDC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_LeftControllerPosition_mBEFAF7D4A054ACF68EFBBD9CF35D3E43EB00D853_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_leftControllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_leftControllerPosition_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_RightControllerPosition_mAAC38F2FFA36D5A076B418B98F0167B14F61DAFB_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_rightControllerPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_rightControllerPosition_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_LeftControllerOrientation_m15552E8AADA66433004B92B6B8F6170FD61630E7_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_leftControllerOrientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_leftControllerOrientation_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_RightControllerOrientation_m420F3F5B60783AA7EEFF478124BB26AB52E16B5E_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_rightControllerOrientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_rightControllerOrientation_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_LeftControllerVelocity_mE16790840CC2CF73760C08EACFA37573BC2196DD_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_leftControllerVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_leftControllerVelocity_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerInformation_get_RightControllerVelocity_m86307D8E775E84F7F43F6BED60BBCE3CC4287EE9_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_rightControllerVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_rightControllerVelocity_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_LeftControllerGrip_m070C222AA8F2A780F7013725A51F685398053402_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_fLeftControllerGrip;
		float L_0 = __this->___m_fLeftControllerGrip_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_RigthControllerGrip_mD23736BDC0BFD7EDD3F14EF5BE60BBDC0C243444_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_fRigthControllerGrip;
		float L_0 = __this->___m_fRigthControllerGrip_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftGripPressed_mFF91527657B40C26433D49A54D10D854D4E53675_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsLeftGripPressed;
		bool L_0 = __this->___m_bIsLeftGripPressed_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightGripPressed_m75A01FAED1B3C625AF299BBF1F4DDBA98977FEC1_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsRigthGripPressed;
		bool L_0 = __this->___m_bIsRigthGripPressed_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_LeftControllerTriggerPressure_m0542F1A837ADD4CD3B2F2F8B276CE56C6BD573BD_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_fLeftControllerTriggerPressure;
		float L_0 = __this->___m_fLeftControllerTriggerPressure_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ControllerInformation_get_RigthControllerTriggerPressure_m06B359C84B50C403D784AE2B30A851551DF9A025_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_fRigthControllerTriggerPressure;
		float L_0 = __this->___m_fRigthControllerTriggerPressure_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftTriggerPressed_mC502F223AD24B4A030A59386182C93EF960707F9_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsLeftTriggerPressed;
		bool L_0 = __this->___m_bIsLeftTriggerPressed_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightTriggerPressed_m6D746535DAFCC4B31A4DB310B1864797A494A8CD_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsRigthTriggerPressed;
		bool L_0 = __this->___m_bIsRigthTriggerPressed_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftPrimaryButtonPressed_mDD4FC09B309AB742ED561A659C4B2616646B7A93_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsLeftPrimaryButtonPressed;
		bool L_0 = __this->___m_bIsLeftPrimaryButtonPressed_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightPrimaryButtonPressed_mEF9E52347076D651CEBA9C948DF9F384A6DB730B_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsRightPrimaryButtonPressed;
		bool L_0 = __this->___m_bIsRightPrimaryButtonPressed_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftSecondaryButtonPressed_mB523EA42063D403C6771EE964B705D41402DB36B_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsLeftSecondaryButtonPressed;
		bool L_0 = __this->___m_bIsLeftSecondaryButtonPressed_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightSecondaryButtonPressed_mCF4E1830BA2D2A80F29F9A88E5A939AF95DD903F_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsRightSecondaryButtonPressed;
		bool L_0 = __this->___m_bIsRightSecondaryButtonPressed_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftThumbStickPressed_m878B884ADD6CF2F7B5AF483FCA3BA6EF9397ED36_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsLeftThumbStickPressed;
		bool L_0 = __this->___m_bIsLeftThumbStickPressed_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightThumbStickPressed_mAB8D14383023D73F26140FE987630FD1088F6D83_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsRightThumbStickPressed;
		bool L_0 = __this->___m_bIsRightThumbStickPressed_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsLeftThumbStickTouched_mBCD38338B6C960E6FF323C0AA5C3A063D771122E_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsLeftThumbStickTouched;
		bool L_0 = __this->___m_bIsLeftThumbStickTouched_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerInformation_get_IsRightThumbStickTouched_mF1E928D4957FB49163FD66EF862CF7FFB9F4FE87_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_bIsRightThumbStickTouched;
		bool L_0 = __this->___m_bIsRightThumbStickTouched_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ControllerInformation_get_LeftControllerThumbStickAxis_m60F07CC9F646E55D802D10371FFEF4437D6A5068_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_leftControllerThumbStickAxis;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_leftControllerThumbStickAxis_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ControllerInformation_get_RightControllerThumbStickAxis_mBF4848438BD850F247D2D1FEE0B462450768DD3E_inline (ControllerInformation_t256233C5A641C25259FE73046D5F643189304765* __this, const RuntimeMethod* method) 
{
	{
		// return m_rightControllerThumbStickAxis;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_rightControllerThumbStickAxis_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
